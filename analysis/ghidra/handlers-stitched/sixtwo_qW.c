// ===== STITCHED CORPUS: sixtwo.qW =====
// handlers: 3  continuation blocks: 20  unresolved table targets: 0

// ===== Lsixtwo/qW; _1b61094e69827678702f04efa9e0d487 ()V (handler @ image 184d35510, runtime 6fffec945510) =====

void FUN_184d35510(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184d35575 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180353dd0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/qW; dej (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 184d35480, runtime 6fffec945480) =====

undefined8 FUN_184d35480(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/qW; fill ([ILsixtwo/re;)V (handler @ image 184d2da40, runtime 6fffec93da40) =====

void FUN_184d2da40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x22c3a,0x553)
      /* POOL[0x22c3a,0x553]: andardDeviation | sixtwo/qV | PALPd | sixtwo/qW | UrIWW | nMqZx | [Lsixtwo/qV$vP; | dej | dei | jVjWN | Lsixtwo/qV; | nextGaussian | (JII)I | sixtwo/qX | mvSZj | HyJOY | Lsixtwo/qW; | LgsyH | sixtwo/qY | xmwPh | dek | tPedJ | ([ILsixtwo/re;)V | del | dem | sixtwo/qZ | MHQkd | LityC | Lsixtwo/qX; | pzIQk | Lsixtwo/qZ; | sixtwo/ra | uZwsl | den | deo | VkFhv | Lsixtwo/qY; | CpbMM | Lsixtwo/ra; | sixtwo/rc | mNMrC | grmLL | der | floorMod | ChNvS | dfh | ([II)V | exHvn | dev | PyCSl | vvkyJ | dex | RtYsp | KvKGW | dew | sixtwo/rd | deB | rxXqy | deC | mzZkj | deI | msbOo | WOtQD | nextFloat | Vyn */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000184d2db04 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1803519d8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x4d2db07 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184d2db07(void)

{
  FUN_190ddce00();
  (*_DAT_180351aa0)();
  return;
}


// ----- block @ rva 0x4d2db7f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184d2db7f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticLongField /*0x4b8*/))();
  (*_DAT_180351e00)();
  return;
}


// ----- block @ rva 0x4d2dbbd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184d2dbbd(void)

{
  (*_DAT_180351a50)(_DAT_1830a0e88);
  return;
}


// ----- block @ rva 0x4d2dbd1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184d2dbd1(ulonglong param_1)

{
  char cVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  longlong *unaff_RSI;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar18;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar23;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  uint uVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  uint uVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar39;
  ulonglong uVar40;
  ulonglong uVar41;
  undefined1 auVar42 [16];
  ulonglong uVar43;
  undefined1 auVar44 [16];
  uint uStack0000000000000080;
  ulonglong uStack00000000000000a8;
  uint uStack00000000000000f0;
  
  uVar6 = _DAT_180351988;
  uVar3 = _DAT_180351980;
  uStack00000000000000a8 = _DAT_180351980 ^ 0x84222325;
  uVar20 = (uStack00000000000000a8 ^ in_RAX) + uStack00000000000000a8 + param_1;
  uVar23 = (param_1 ^ 0xe289af5ae6a0dc77) + in_RAX + 0xe289af5ae6a0dc77;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ uStack00000000000000a8 ^ in_RAX;
  uVar23 = (uVar23 * 0x2000 | uVar23 >> 0x33) ^ param_1 ^ 0xe289af5ae6a0dc77;
  _DAT_1830a0d58 =
       func_0x000184d353f0((uVar23 << 0x1d | uVar23 >> 0x23) - (in_RAX + 0xe289af5ae6a0dc77) ^
                           (uVar20 << 0x1d | uVar20 >> 0x23) - (uStack00000000000000a8 + param_1));
  uVar23 = uVar3 | 0xe289af5ae6a0dc77;
  _DAT_1830a0dd8 = (_DAT_1830a0dd8 ^ _DAT_1830a0d80) + uVar23 ^ 0x7364c576f7a5785e;
  _DAT_1830a0e60 = (_DAT_1830a0e60 * -0x293e06fe7e9fbfb5 ^ _DAT_1830a0dd8) + _DAT_1830a0d80;
  _DAT_1830a0ea8 = _DAT_1830a0e60 ^ _DAT_1830a0dd8;
  uVar20 = ((_DAT_1830a0eb0 ^ uVar6 ^ 0x84222325) + ((uVar6 ^ 0x84222325) & _DAT_1830a0eb0) * 2) *
           (0x6521f4b3ff6f8de6 - _DAT_1830a0ec0);
  uVar20 = (uVar20 | _DAT_1830a0ed0) + (uVar20 & _DAT_1830a0ed0);
  uVar20 = uVar20 * 0x2000 ^ uVar20;
  uVar20 = uVar20 >> 7 ^ uVar20;
  uVar20 = uVar20 << 0x11 ^ uVar20;
  _DAT_1830a0e38 = uVar23;
  _DAT_1830a0d80 =
       func_0x000184d353f0((uVar6 ^ 0x6521f4b37b4daec3 | uVar20) +
                           (uVar20 & (uVar6 ^ 0x6521f4b37b4daec3)));
  uVar7 = uVar6 ^ 0x6521f4b3ff6f8de6;
  _DAT_1830a0e60 = (_DAT_1830a0e60 ^ uVar6 ^ _DAT_1830a0d80) + uVar7 ^ 0xb38569b247a5abc4;
  _DAT_1830a0e28 =
       (_DAT_1830a0e28 * -0x6efee276ead9c673 ^ _DAT_1830a0e60) + (uVar6 ^ _DAT_1830a0d80);
  _DAT_1830a0d38 = _DAT_1830a0e28 ^ _DAT_1830a0e60;
  lVar2 = uVar3 * uVar3;
  uVar4 = lVar2 * -0x27cfdea287d23f43;
  uVar3 = ((_DAT_1830a0d70 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830a0d70 & 0x84222325) * 2) *
          (uVar4 - _DAT_1830a0e60);
  uVar3 = (uVar3 | _DAT_1830a0d70) + (uVar3 & _DAT_1830a0d70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830a0dd8 = uVar7;
  _DAT_1830a0d98 =
       func_0x000184d353f0((uVar4 ^ 0x84222325 | uVar3) + (uVar3 & (uVar4 ^ 0x84222325)));
  uVar3 = (_DAT_1830a0d98 ^ uVar4) & 0xfffffffffffffffc;
  uVar20 = lVar2 * 0x27cfdea287d23f43;
  _DAT_1830a0d50 = (_DAT_1830a0d50 ^ uVar3) + lVar2 * 0x27cfdea287d23f43 ^ 0xc7a5674ef1535a41;
  _DAT_1830a0de8 = (_DAT_1830a0de8 * 0x21e5662661866dd5 ^ _DAT_1830a0d50) + uVar3;
  _DAT_1830a0d88 = _DAT_1830a0de8 ^ _DAT_1830a0d50;
  uVar4 = uVar4 + 0x6a9500776764;
  auVar13._8_8_ = uVar20;
  auVar13._0_8_ = uVar4 ^ 0x84222325;
  auVar9 = pshufb(auVar13 ^ _DAT_180351f20,_DAT_1800170c0);
  uVar5 = auVar9._8_8_ + auVar9._0_8_;
  uVar3 = uVar5 + _DAT_1830a0e60;
  if (auVar9._4_4_ < 0) {
    uVar3 = _DAT_1830a0e90 ^ uVar5;
  }
  _DAT_1830a0e68 = uVar20;
  _DAT_1830a0e30 = func_0x000184d353f0(SUB161(auVar13 ^ _DAT_180351f20,5) ^ uVar3);
  uVar19 = (uint)(uVar4 >> 0x20);
  auVar34._8_4_ = (int)uVar4;
  auVar34._0_8_ = uVar4;
  auVar34._12_4_ = uVar19;
  uVar32 = (uint)(uVar20 >> 0x20);
  auVar10._8_4_ = (int)uVar20;
  auVar10._0_8_ = uVar20;
  auVar10._12_4_ = uVar32;
  uVar29 = SUB164(auVar34 & auVar10,0);
  uVar41 = SUB168(auVar34 & auVar10,0);
  uVar18 = SUB164(auVar34 | auVar10,0);
  uVar40 = SUB168(auVar34 | auVar10,0);
  uVar8 = SUB164(auVar34 ^ auVar10,0);
  uVar5 = SUB168(auVar34 ^ auVar10,0);
  uVar3 = (~_DAT_1830a0e30 & uVar4) << 0x19 | (~_DAT_1830a0e30 & uVar4) >> 0x27;
  uVar5 = ((ulonglong)_DAT_180351f90 * (ulonglong)uVar8 +
           ((ulonglong)_DAT_180351fa0 * (ulonglong)uVar8 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_180351f90 << 0x20) +
           (ulonglong)_DAT_180351f70 * (ulonglong)uVar18 +
           ((ulonglong)_DAT_180351f80 * (ulonglong)uVar18 +
            (uVar40 >> 0x20) * (ulonglong)_DAT_180351f70 << 0x20) +
          (ulonglong)_DAT_180351f50 * (ulonglong)uVar29 +
          ((ulonglong)_DAT_180351f60 * (ulonglong)uVar29 +
           (uVar41 >> 0x20) * (ulonglong)_DAT_180351f50 << 0x20) +
          (ulonglong)_DAT_180351f40 * (uVar20 & 0xffffffff) +
          ((ulonglong)uVar32 * (ulonglong)_DAT_180351f40 +
           (ulonglong)_DAT_180351f30 * (uVar20 & 0xffffffff) << 0x20) +
          (uVar4 & 0xffffffff) * (ulonglong)_DAT_180351f40 +
          ((ulonglong)uVar19 * (ulonglong)_DAT_180351f40 +
           (uVar4 & 0xffffffff) * (ulonglong)_DAT_180351f30 << 0x20)) -
          ((ulonglong)uVar8 * (ulonglong)_DAT_180352030 +
           ((ulonglong)_DAT_180352040 * (ulonglong)uVar8 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_180352030 << 0x20) +
           (ulonglong)uVar18 * (ulonglong)_DAT_180352010 +
           ((ulonglong)_DAT_180352020 * (ulonglong)uVar18 +
            (uVar40 >> 0x20) * (ulonglong)_DAT_180352010 << 0x20) +
          (ulonglong)uVar29 * (ulonglong)_DAT_180351ff0 +
          ((ulonglong)_DAT_180352000 * (ulonglong)uVar29 +
           (uVar41 >> 0x20) * (ulonglong)_DAT_180351ff0 << 0x20) +
          (uVar20 & 0xffffffff) * (ulonglong)_DAT_180351fe0 +
          ((ulonglong)uVar32 * (ulonglong)_DAT_180351fe0 +
           (ulonglong)_DAT_180351fd0 * (uVar20 & 0xffffffff) << 0x20) +
          (uVar4 & 0xffffffff) * (ulonglong)_DAT_180351fe0 +
          ((ulonglong)uVar19 * (ulonglong)_DAT_180351fe0 +
           (uVar4 & 0xffffffff) * (ulonglong)_DAT_180351fd0 << 0x20));
  _DAT_1830a0d78 = _DAT_1830a0ec0 ^ uVar3 ^ uVar5;
  _DAT_1830a0d50 = (_DAT_1830a0d50 ^ uVar3) + uVar5 ^ 0xcace9607a9b88845;
  _DAT_1830a0e20 = (_DAT_1830a0e20 * 0x6ef5373a115dc687 ^ _DAT_1830a0d50) + uVar3;
  _DAT_1830a0e70 = _DAT_1830a0e20 ^ _DAT_1830a0d50;
  lVar2 = uVar6 * uVar6;
  uVar20 = lVar2 * -0x6b446f9a3bce0ed1;
  uVar3 = ((_DAT_1830a0ec0 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830a0ec0 & 0x84222325) * 2) *
          (uVar20 - _DAT_1830a0d30);
  uVar3 = (uVar3 | _DAT_1830a0d30) + (uVar3 & _DAT_1830a0d30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830a0ed8 = uVar5;
  _DAT_1830a0d38 =
       func_0x000184d353f0((uVar20 ^ 0x84222325 | uVar3) + (uVar3 & (uVar20 ^ 0x84222325)));
  auVar13 = _DAT_1800170c0;
  uVar3 = _DAT_1830a0d38 << 0x29 | _DAT_1830a0d38 >> 0x17;
  uVar4 = lVar2 * 0x6b446f9a3bce0ed1;
  _DAT_1830a0d70 = (_DAT_1830a0d70 ^ uVar3) + lVar2 * 0x6b446f9a3bce0ed1 ^ 0x285109af70cf1276;
  _DAT_1830a0d68 = (_DAT_1830a0d68 * -0x39194dc288273875 ^ _DAT_1830a0d70) + uVar3;
  _DAT_1830a0e48 = _DAT_1830a0d68 ^ _DAT_1830a0d70;
  auVar9._8_8_ = uVar20;
  auVar9._0_8_ = uVar5 ^ 0x84222325;
  auVar10 = pshufb(auVar9 ^ _DAT_180352050,_DAT_1800170c0);
  uVar6 = auVar10._8_8_ + auVar10._0_8_;
  uVar3 = uVar6 + _DAT_1830a0ec8;
  if (auVar10._4_4_ < 0) {
    uVar3 = _DAT_1830a0ed0 ^ uVar6;
  }
  _DAT_1830a0d80 = uVar4;
  _DAT_1830a0e00 = func_0x000184d353f0(SUB161(auVar9 ^ _DAT_180352050,5) ^ uVar3);
  uVar32 = (uint)(uVar5 >> 0x20);
  auVar30._8_4_ = (int)uVar5;
  auVar30._0_8_ = uVar5;
  auVar30._12_4_ = uVar32;
  uVar33 = (uint)(uVar20 >> 0x20);
  auVar11._8_4_ = (int)uVar20;
  auVar11._0_8_ = uVar20;
  auVar11._12_4_ = uVar33;
  uVar18 = SUB164(auVar30 & auVar11,0);
  uVar3 = SUB168(auVar30 & auVar11,0);
  uVar8 = SUB164(auVar30 | auVar11,0);
  uVar6 = SUB168(auVar30 | auVar11,0);
  uVar29 = SUB164(auVar30 ^ auVar11,0);
  uVar19 = SUB164(auVar11 ^ _DAT_18001a710,0);
  uVar20 = (((ulonglong)uVar29 * (ulonglong)_DAT_1803520c0 +
             ((ulonglong)_DAT_1803520d0 * (ulonglong)uVar29 +
              (SUB168(auVar30 ^ auVar11,0) >> 0x20) * (ulonglong)_DAT_1803520c0 << 0x20) +
             (ulonglong)_DAT_1803520a0 * (ulonglong)uVar8 +
             ((ulonglong)_DAT_1803520b0 * (ulonglong)uVar8 +
              (uVar6 >> 0x20) * (ulonglong)_DAT_1803520a0 << 0x20) +
            (ulonglong)_DAT_180352080 * (ulonglong)uVar18 +
            ((ulonglong)_DAT_180352090 * (ulonglong)uVar18 +
             (uVar3 >> 0x20) * (ulonglong)_DAT_180352080 << 0x20) +
            (ulonglong)_DAT_180352070 * (uVar20 & 0xffffffff) +
            ((ulonglong)uVar33 * (ulonglong)_DAT_180352070 +
             (ulonglong)_DAT_180352060 * (uVar20 & 0xffffffff) << 0x20) +
            (uVar5 & 0xffffffff) * (ulonglong)_DAT_180352070 +
            ((ulonglong)uVar32 * (ulonglong)_DAT_180352070 +
             (uVar5 & 0xffffffff) * (ulonglong)_DAT_180352060 << 0x20)) -
           ((ulonglong)uVar19 * (_DAT_180352140 & 0xffffffff) +
            ((ulonglong)_DAT_180352170 * (ulonglong)uVar19 +
             (SUB168(auVar11 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_180352140 & 0xffffffff) << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_180352160 +
           ((uVar6 >> 0x20) * (ulonglong)_DAT_180352160 +
            (ulonglong)_DAT_180352150 * (ulonglong)uVar8 << 0x20) +
           (ulonglong)uVar18 * (ulonglong)_DAT_180352160 +
           ((uVar3 >> 0x20) * (ulonglong)_DAT_180352160 +
            (ulonglong)uVar18 * (ulonglong)_DAT_180352150 << 0x20) +
           (uVar20 & 0xffffffff) * (ulonglong)_DAT_180352120 +
           ((ulonglong)_DAT_180352130 * (uVar20 & 0xffffffff) +
            (ulonglong)uVar33 * (ulonglong)_DAT_180352120 << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_180352100 +
           ((ulonglong)_DAT_180352110 * (uVar5 & 0xffffffff) +
            (ulonglong)uVar32 * (ulonglong)_DAT_180352100 << 0x20))) - _DAT_180352140;
  auVar12._8_8_ = uVar4;
  auVar12._0_8_ = uVar20 ^ 0x84222325;
  auVar13 = pshufb(auVar12 ^ _DAT_180352180,auVar13);
  uVar6 = _DAT_1830a0e00 * 0xa7cfa34f6782ad1;
  uVar3 = uVar6 >> 1 | uVar6;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar6;
  _DAT_1830a0d98 = (_DAT_1830a0d98 ^ uVar6) + uVar20 ^ 0x6e2e64cb19f1df79;
  _DAT_1830a0e90 = (_DAT_1830a0e90 * -0x50ecd3a5b580c369 ^ _DAT_1830a0d98) + uVar6;
  _DAT_1830a0e70 = _DAT_1830a0e90 ^ _DAT_1830a0d98;
  uVar6 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar6 + _DAT_1830a0e28;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_1830a0de8 ^ uVar6;
  }
  _DAT_1830a0e98 = uVar20;
  _DAT_1830a0d90 = func_0x000184d353f0(SUB161(auVar12 ^ _DAT_180352180,5) ^ uVar3);
  uVar32 = (uint)(uVar20 >> 0x20);
  auVar38._8_4_ = (int)uVar20;
  auVar38._0_8_ = uVar20;
  auVar38._12_4_ = uVar32;
  uVar33 = (uint)(uVar4 >> 0x20);
  auVar35._8_4_ = (int)uVar4;
  auVar35._0_8_ = uVar4;
  auVar35._12_4_ = uVar33;
  uVar6 = (uVar20 & 0xffffffff) * (uVar4 & 0xffffffff) +
          ((ulonglong)uVar32 * (uVar4 & 0xffffffff) + (uVar20 & 0xffffffff) * (ulonglong)uVar33 <<
          0x20);
  uVar29 = SUB164(auVar38 & auVar35,0);
  uVar3 = (uVar4 * uVar20 ^ _DAT_1830a0d90) * 0x5ea1b77c350cbd99;
  auVar42._8_4_ = 0xffffffff;
  auVar42._0_8_ = 0xffffffffffffffff;
  auVar42._12_4_ = 0xffffffff;
  uVar8 = SUB164(auVar38 | auVar35,0);
  uVar18 = SUB164(auVar38 ^ auVar35,0);
  uVar39 = SUB164(auVar38 ^ auVar42,0);
  lVar2 = (uVar6 & 0xffffffff) * (ulonglong)_DAT_180352250 +
          ((ulonglong)_DAT_180352260 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (ulonglong)_DAT_180352250 << 0x20);
  auVar44._8_4_ = 0xffffffff;
  auVar44._0_8_ = 0xffffffffffffffff;
  auVar44._12_4_ = 0xffffffff;
  uVar19 = SUB164(auVar35 ^ auVar42,0);
  uVar4 = (ulonglong)uVar39 * (ulonglong)_DAT_1803521d0 +
          ((ulonglong)_DAT_180352240 * (ulonglong)uVar39 +
           (SUB168(auVar38 ^ auVar42,0) >> 0x20) * (ulonglong)_DAT_1803521d0 << 0x20) +
          (ulonglong)uVar18 * (ulonglong)_DAT_180352220 +
          ((ulonglong)_DAT_180352230 * (ulonglong)uVar18 +
           (SUB168(auVar38 ^ auVar35,0) >> 0x20) * (ulonglong)_DAT_180352220 << 0x20) +
          (ulonglong)uVar8 * (ulonglong)_DAT_180352200 +
          ((ulonglong)_DAT_180352210 * (ulonglong)uVar8 +
           (SUB168(auVar38 | auVar35,0) >> 0x20) * (ulonglong)_DAT_180352200 << 0x20) +
          (ulonglong)uVar29 * (ulonglong)_DAT_1803521e0 +
          ((ulonglong)_DAT_1803521f0 * (ulonglong)uVar29 +
           (SUB168(auVar38 & auVar35,0) >> 0x20) * (ulonglong)_DAT_1803521e0 << 0x20) +
          (ulonglong)_DAT_1803521b0 * (uVar4 & 0xffffffff) +
          ((ulonglong)_DAT_1803521c0 * (uVar4 & 0xffffffff) +
           (ulonglong)uVar33 * (ulonglong)_DAT_1803521b0 << 0x20) +
          (uVar20 & 0xffffffff) * (ulonglong)_DAT_180352190 +
          ((ulonglong)_DAT_1803521a0 * (uVar20 & 0xffffffff) +
           (ulonglong)uVar32 * (ulonglong)_DAT_180352190 << 0x20) + lVar2 +
          (-lVar2 - ((ulonglong)uVar19 * (ulonglong)_DAT_180352280 +
                     ((SUB168(auVar35 ^ auVar42,0) >> 0x20) * (ulonglong)_DAT_180352280 +
                      (ulonglong)_DAT_180352270 * (ulonglong)uVar19 << 0x20) +
                    (uVar4 & 0xffffffff) * (ulonglong)_DAT_180352280 +
                    ((ulonglong)uVar33 * (ulonglong)_DAT_180352280 +
                     (uVar4 & 0xffffffff) * (ulonglong)_DAT_180352270 << 0x20))) + _DAT_180352290;
  _DAT_1830a0dc0 = _DAT_1830a0e78 ^ uVar3 ^ uVar4;
  _DAT_1830a0de8 = (_DAT_1830a0de8 ^ uVar3) + uVar4 ^ 0xd2fe88c8be71f08b;
  _DAT_1830a0dc8 = (_DAT_1830a0dc8 * 0x7ec7ece95512be9b ^ _DAT_1830a0de8) + uVar3;
  _DAT_1830a0e28 = _DAT_1830a0dc8 ^ _DAT_1830a0de8;
  lVar2 = _DAT_180351988 * _DAT_180351980;
  uVar20 = lVar2 * -0x65710fbbaece1f3e;
  uVar3 = ((_DAT_1830a0e38 ^ 0x84222325) + (ulonglong)((uint)_DAT_1830a0e38 & 0x84222325) * 2) *
          (uVar20 - _DAT_1830a0d90);
  uVar3 = (uVar3 | _DAT_1830a0d70) + (uVar3 & _DAT_1830a0d70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830a0d58 = uVar4;
  _DAT_1830a0d80 =
       func_0x000184d353f0((uVar20 ^ 0x84222325 | uVar3) + (uVar3 & (uVar20 ^ 0x84222325)));
  uVar3 = _DAT_1830a0d40 >> 1 | _DAT_1830a0d40;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_1830a0d40;
  _DAT_1830a0d40 = lVar2 * 0x65710fbbaece1f3e;
  _DAT_1830a0e68 = (_DAT_1830a0e68 ^ uVar3) + lVar2 * 0x65710fbbaece1f3e ^ 0x7d171eceedf147a8;
  _DAT_1830a0d00 = (_DAT_1830a0d00 * -0x761254b7e73d395d ^ _DAT_1830a0e68) + uVar3;
  _DAT_1830a0ed8 = _DAT_1830a0d00 ^ _DAT_1830a0e68;
  uVar6 = uVar4 ^ 0x84222325;
  uVar3 = ((_DAT_1830a0e18 ^ uVar6) + (uVar6 & _DAT_1830a0e18) * 2) * (uVar20 - _DAT_1830a0ea0);
  uVar3 = (uVar3 | _DAT_1830a0d98) + (uVar3 & _DAT_1830a0d98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830a0d20 = func_0x000184d353f0((uVar6 ^ uVar20 | uVar3) + (uVar3 & (uVar6 ^ uVar20)));
  uVar39 = (uint)(uVar4 >> 0x20);
  auVar21._8_4_ = (int)uVar4;
  auVar21._0_8_ = uVar4;
  auVar21._12_4_ = uVar39;
  uVar18 = (uint)(uVar20 >> 0x20);
  auVar24._8_4_ = (int)uVar20;
  auVar24._0_8_ = uVar20;
  auVar24._12_4_ = uVar18;
  uVar29 = SUB164(auVar21 & auVar24,0);
  uVar41 = SUB168(auVar21 & auVar24,0);
  uVar32 = SUB164(auVar21 | auVar24,0);
  uVar8 = SUB164(auVar21 ^ auVar24,0);
  uVar40 = SUB168(auVar21 ^ auVar24,0);
  uVar33 = SUB164(auVar24 ^ auVar44,0);
  uVar5 = SUB168(auVar24 ^ auVar44,0);
  uVar19 = SUB164(auVar21 ^ _DAT_18001a710,0);
  uVar6 = uVar23 ^ 0x84222325;
  auVar25._8_8_ = uVar7;
  auVar25._0_8_ = uVar6;
  auVar13 = pshufb(auVar25 ^ _DAT_180352440,_DAT_1800170c0);
  uVar3 = ((uVar4 | uVar20) ^ _DAT_1830a0d20) & 0xffffffff80000000;
  _DAT_1830a0d40 =
       (((ulonglong)_DAT_1803522e0 * (ulonglong)uVar33 +
         ((ulonglong)_DAT_180352350 * (ulonglong)uVar33 +
          (uVar5 >> 0x20) * (ulonglong)_DAT_1803522e0 << 0x20) +
        (ulonglong)_DAT_180352330 * (ulonglong)uVar8 +
        ((ulonglong)_DAT_180352340 * (ulonglong)uVar8 + (uVar40 >> 0x20) * (ulonglong)_DAT_180352330
        << 0x20) +
        (ulonglong)uVar32 * (ulonglong)_DAT_180352310 +
        ((ulonglong)_DAT_180352320 * (ulonglong)uVar32 +
         (SUB168(auVar21 | auVar24,0) >> 0x20) * (ulonglong)_DAT_180352310 << 0x20) +
        (ulonglong)_DAT_1803522f0 * (ulonglong)uVar29 +
        ((ulonglong)_DAT_180352300 * (ulonglong)uVar29 +
         (uVar41 >> 0x20) * (ulonglong)_DAT_1803522f0 << 0x20) +
        (ulonglong)_DAT_1803522c0 * (uVar20 & 0xffffffff) +
        ((ulonglong)_DAT_1803522d0 * (uVar20 & 0xffffffff) +
         (ulonglong)uVar18 * (ulonglong)_DAT_1803522c0 << 0x20) +
        (ulonglong)_DAT_1803522a0 * (uVar4 & 0xffffffff) +
        ((ulonglong)_DAT_1803522b0 * (uVar4 & 0xffffffff) +
         (ulonglong)uVar39 * (ulonglong)_DAT_1803522a0 << 0x20)) -
       ((ulonglong)uVar33 * (ulonglong)_DAT_180352420 +
        ((ulonglong)_DAT_180352430 * (ulonglong)uVar33 + (uVar5 >> 0x20) * (ulonglong)_DAT_180352420
        << 0x20) +
       (ulonglong)uVar19 * (ulonglong)_DAT_180352400 +
       ((ulonglong)_DAT_180352410 * (ulonglong)uVar19 +
        (SUB168(auVar21 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_180352400 << 0x20) +
       (ulonglong)uVar8 * (ulonglong)_DAT_1803523e0 +
       ((ulonglong)_DAT_1803523f0 * (ulonglong)uVar8 + (uVar40 >> 0x20) * (ulonglong)_DAT_1803523e0
       << 0x20) +
       (ulonglong)uVar29 * (ulonglong)_DAT_1803523c0 +
       ((ulonglong)_DAT_1803523d0 * (ulonglong)uVar29 + (uVar41 >> 0x20) * (ulonglong)_DAT_1803523c0
       << 0x20) +
       (uVar20 & 0xffffffff) * (ulonglong)_DAT_1803523a0 +
       ((ulonglong)_DAT_1803523b0 * (uVar20 & 0xffffffff) +
        (ulonglong)uVar18 * (ulonglong)_DAT_1803523a0 << 0x20) +
       (uVar4 & 0xffffffff) * (ulonglong)_DAT_180352380 +
       ((ulonglong)_DAT_180352390 * (uVar4 & 0xffffffff) +
        (ulonglong)uVar39 * (ulonglong)_DAT_180352380 << 0x20))) + 0xe6c0820d9cef1297;
  _DAT_1830a0e80 = _DAT_1830a0ee0 ^ uVar3 ^ _DAT_1830a0d40;
  _DAT_1830a0d00 = (_DAT_1830a0d00 ^ uVar3) + _DAT_1830a0d40 ^ 0x6c611068f1a8aac0;
  _DAT_1830a0ed0 = (_DAT_1830a0ed0 * 0x44e94c8e8d4470d9 ^ _DAT_1830a0d00) + uVar3;
  _DAT_1830a0d50 = _DAT_1830a0ed0 ^ _DAT_1830a0d00;
  uVar4 = _DAT_1830a0d40 + lVar2 * 0x65710fbbaece1f3e;
  uVar20 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar20 + _DAT_1830a0ef0;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_1830a0e70 ^ uVar20;
  }
  _DAT_1830a0e60 = func_0x000184d353f0(SUB161(auVar25 ^ _DAT_180352440,5) ^ uVar3);
  uVar8 = (uint)(uVar23 >> 0x20);
  auVar31._8_4_ = (int)uVar23;
  auVar31._0_8_ = uVar23;
  auVar31._12_4_ = uVar8;
  uVar18 = (uint)(uVar7 >> 0x20);
  auVar14._8_4_ = (int)uVar7;
  auVar14._0_8_ = uVar7;
  auVar14._12_4_ = uVar18;
  uVar39 = SUB164(auVar31 & auVar14,0);
  uVar5 = SUB168(auVar31 & auVar14,0);
  uVar19 = SUB164(auVar31 | auVar14,0);
  uVar20 = SUB168(auVar31 | auVar14,0);
  uVar29 = SUB164(auVar31 ^ auVar14,0);
  uVar33 = SUB164(auVar31 ^ _DAT_18001a710,0);
  uVar32 = SUB164(auVar14 ^ _DAT_18001a710,0);
  uVar3 = (_DAT_1830a0e60 << 0x25 | _DAT_1830a0e60 >> 0x1b) << 10 |
          (_DAT_1830a0e60 & 0x7ffffff) >> 0x11;
  uVar41 = (((ulonglong)uVar33 * (ulonglong)_DAT_180352470 +
             ((SUB168(auVar31 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_180352470 +
              (ulonglong)_DAT_180352450 * (ulonglong)uVar33 << 0x20) +
             (ulonglong)uVar29 * (ulonglong)_DAT_180352490 +
             ((SUB168(auVar31 ^ auVar14,0) >> 0x20) * (ulonglong)_DAT_180352490 +
              (ulonglong)_DAT_180352480 * (ulonglong)uVar29 << 0x20) +
             (ulonglong)uVar39 * (ulonglong)_DAT_180352490 +
             ((uVar5 >> 0x20) * (ulonglong)_DAT_180352490 +
              (ulonglong)uVar39 * (ulonglong)_DAT_180352480 << 0x20) +
             (ulonglong)_DAT_180352460 * (uVar23 & 0xffffffff) + uVar7 +
             ((ulonglong)uVar8 * (ulonglong)_DAT_180352460 +
              (uVar23 & 0xffffffff) * (ulonglong)_DAT_180352450 << 0x20) +
            (ulonglong)_DAT_1803524a0 * (ulonglong)uVar19 +
            ((ulonglong)_DAT_1803524b0 * (ulonglong)uVar19 +
             (uVar20 >> 0x20) * (ulonglong)_DAT_1803524a0 << 0x20)) -
           ((ulonglong)uVar32 * (ulonglong)_DAT_180352520 +
            ((ulonglong)_DAT_180352550 * (ulonglong)uVar32 +
             (SUB168(auVar14 ^ _DAT_18001a710,0) >> 0x20) * (ulonglong)_DAT_180352520 << 0x20) +
           (ulonglong)uVar19 * (ulonglong)_DAT_180352540 +
           ((uVar20 >> 0x20) * (ulonglong)_DAT_180352540 +
            (ulonglong)_DAT_180352530 * (ulonglong)uVar19 << 0x20) +
           (ulonglong)uVar39 * (ulonglong)_DAT_180352540 +
           ((uVar5 >> 0x20) * (ulonglong)_DAT_180352540 +
            (ulonglong)uVar39 * (ulonglong)_DAT_180352530 << 0x20) +
           (uVar7 & 0xffffffff) * (ulonglong)_DAT_180352500 +
           ((ulonglong)_DAT_180352510 * (uVar7 & 0xffffffff) +
            (ulonglong)uVar18 * (ulonglong)_DAT_180352500 << 0x20) +
           (uVar23 & 0xffffffff) * (ulonglong)_DAT_1803524e0 +
           ((ulonglong)_DAT_1803524f0 * (uVar23 & 0xffffffff) +
            (ulonglong)uVar8 * (ulonglong)_DAT_1803524e0 << 0x20))) + _DAT_180352560;
  _DAT_1830a0e08 = _DAT_1830a0e08 ^ uVar3 ^ uVar41;
  _DAT_1830a0ec8 = (_DAT_1830a0ec8 ^ uVar3) + uVar41 ^ 0xeddf16198db238dc;
  _DAT_1830a0d78 = (_DAT_1830a0d78 * 0x3c19d173d0b9a167 ^ _DAT_1830a0ec8) + uVar3;
  _DAT_1830a0ea8 = _DAT_1830a0d78 ^ _DAT_1830a0ec8;
  uVar3 = (uVar6 ^ _DAT_1830a0e60) + _DAT_1830a0d88 + uVar6;
  uVar20 = (uVar7 ^ _DAT_1830a0d88) + _DAT_1830a0e60 + uVar7;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar6 ^ _DAT_1830a0e60;
  uVar20 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ uVar7 ^ _DAT_1830a0d88;
  _DAT_1830a0d10 = uVar41;
  _DAT_1830a0d68 =
       func_0x000184d353f0((uVar20 << 0x1d | uVar20 >> 0x23) - (_DAT_1830a0e60 + uVar7) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830a0d88 + uVar6));
  uVar3 = _DAT_1830a0d68 & 0x7fffffffffffffff ^ uVar23;
  _DAT_1830a0e68 = uVar7 & uVar23;
  _DAT_1830a0ef0 = (_DAT_1830a0ef0 ^ uVar3) + _DAT_1830a0e68 ^ 0xd6668d313ecf72e9;
  _DAT_1830a0d40 = (_DAT_1830a0d40 * 0x574466f68be7aa15 ^ _DAT_1830a0ef0) + uVar3;
  _DAT_1830a0e90 = _DAT_1830a0d40 ^ _DAT_1830a0ef0;
  uVar3 = (uVar23 ^ uVar7) + _DAT_1830a0e68 * 2;
  uVar5 = uVar41 ^ 0x84222325;
  uVar20 = ((_DAT_1830a0d90 ^ uVar5) + (uVar5 & _DAT_1830a0d90) * 2) * (uVar3 - _DAT_1830a0e90);
  uVar20 = (uVar20 | _DAT_1830a0da8) + (uVar20 & _DAT_1830a0da8);
  uVar20 = uVar20 * 0x2000 ^ uVar20;
  uVar20 = uVar20 >> 7 ^ uVar20;
  uVar20 = uVar20 << 0x11 ^ uVar20;
  _DAT_1830a0e98 = func_0x000184d353f0((uVar5 ^ uVar3 | uVar20) + (uVar20 & (uVar5 ^ uVar3)));
  uVar32 = (uint)(uVar41 >> 0x20);
  auVar36._8_4_ = (int)uVar41;
  auVar36._0_8_ = uVar41;
  auVar36._12_4_ = uVar32;
  uVar18 = (uint)(uVar3 >> 0x20);
  auVar26._8_4_ = (int)uVar3;
  auVar26._0_8_ = uVar3;
  auVar26._12_4_ = uVar18;
  uVar29 = SUB164(auVar36 & auVar26,0);
  uVar40 = SUB168(auVar36 & auVar26,0);
  uVar19 = SUB164(auVar36 | auVar26,0);
  uVar43 = SUB168(auVar36 | auVar26,0);
  uVar8 = SUB164(auVar36 ^ auVar26,0);
  uVar7 = SUB168(auVar36 ^ auVar26,0);
  uVar33 = SUB164(auVar26 ^ _DAT_18001a710,0);
  uVar5 = SUB168(auVar26 ^ _DAT_18001a710,0);
  uVar20 = ~_DAT_1830a0e98 & uVar41 & (ulonglong)DAT_180352570 & 0x7fffffffffffffff;
  uVar40 = (((ulonglong)_DAT_1803525c0 * (ulonglong)uVar33 +
             ((ulonglong)_DAT_180352630 * (ulonglong)uVar33 +
              (uVar5 >> 0x20) * (ulonglong)_DAT_1803525c0 << 0x20) +
            (ulonglong)_DAT_180352610 * (ulonglong)uVar8 +
            ((ulonglong)_DAT_180352620 * (ulonglong)uVar8 +
             (uVar7 >> 0x20) * (ulonglong)_DAT_180352610 << 0x20) +
            (ulonglong)_DAT_1803525f0 * (ulonglong)uVar19 +
            ((ulonglong)_DAT_180352600 * (ulonglong)uVar19 +
             (uVar43 >> 0x20) * (ulonglong)_DAT_1803525f0 << 0x20) +
            (ulonglong)_DAT_1803525d0 * (ulonglong)uVar29 +
            ((ulonglong)_DAT_1803525e0 * (ulonglong)uVar29 +
             (uVar40 >> 0x20) * (ulonglong)_DAT_1803525d0 << 0x20) +
            (ulonglong)_DAT_1803525a0 * (uVar3 & 0xffffffff) +
            ((ulonglong)_DAT_1803525b0 * (uVar3 & 0xffffffff) +
             (ulonglong)uVar18 * (ulonglong)_DAT_1803525a0 << 0x20) +
            (ulonglong)_DAT_180352580 * (uVar41 & 0xffffffff) +
            ((ulonglong)_DAT_180352590 * (uVar41 & 0xffffffff) +
             (ulonglong)uVar32 * (ulonglong)_DAT_180352580 << 0x20)) -
           ((ulonglong)uVar33 * (ulonglong)_DAT_1803526a0 +
            ((ulonglong)_DAT_180352710 * (ulonglong)uVar33 +
             (uVar5 >> 0x20) * (ulonglong)_DAT_1803526a0 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_1803526f0 +
           ((ulonglong)_DAT_180352700 * (ulonglong)uVar8 +
            (uVar7 >> 0x20) * (ulonglong)_DAT_1803526f0 << 0x20) +
           (ulonglong)uVar19 * (ulonglong)_DAT_1803526d0 +
           ((ulonglong)_DAT_1803526e0 * (ulonglong)uVar19 +
            (uVar43 >> 0x20) * (ulonglong)_DAT_1803526d0 << 0x20) +
           (ulonglong)uVar29 * (ulonglong)_DAT_1803526b0 +
           ((ulonglong)_DAT_1803526c0 * (ulonglong)uVar29 +
            (uVar40 >> 0x20) * (ulonglong)_DAT_1803526b0 << 0x20) +
           (uVar3 & 0xffffffff) * (ulonglong)_DAT_180352680 +
           ((ulonglong)_DAT_180352690 * (uVar3 & 0xffffffff) +
            (ulonglong)uVar18 * (ulonglong)_DAT_180352680 << 0x20) +
           (uVar41 & 0xffffffff) * (ulonglong)_DAT_180352660 +
           ((ulonglong)_DAT_180352670 * (uVar41 & 0xffffffff) +
            (ulonglong)uVar32 * (ulonglong)_DAT_180352660 << 0x20))) + _DAT_180352720;
  _DAT_1830a0da0 = uVar40 ^ uVar20;
  _DAT_1830a0ec0 = (_DAT_1830a0ec0 ^ uVar20) + uVar40 ^ 0x4991985a5c6a2e72;
  _DAT_1830a0d30 = (_DAT_1830a0d30 * -0x63bf4b33938d9451 ^ _DAT_1830a0ec0) + uVar20;
  uVar3 = uVar4 ^ 0x84222325 ^ _DAT_1830a0ed8;
  lVar2 = (uVar4 ^ 0x84222325) + _DAT_1830a0e20;
  uVar20 = uVar3 + lVar2;
  uVar5 = (uVar40 ^ _DAT_1830a0e20) + uVar40 + _DAT_1830a0ed8;
  uVar3 = (uVar20 * 0x2000 | uVar20 >> 0x33) ^ uVar3;
  uVar20 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar40 ^ _DAT_1830a0e20;
  _DAT_1830a0e60 = uVar40;
  _DAT_1830a0e68 =
       func_0x000184d353f0((uVar20 << 0x1d | uVar20 >> 0x23) - (uVar40 + _DAT_1830a0ed8) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uVar8 = (uint)(uVar4 >> 0x20);
  auVar37._8_4_ = (int)uVar4;
  auVar37._0_8_ = uVar4;
  auVar37._12_4_ = uVar8;
  uVar32 = (uint)(uVar40 >> 0x20);
  auVar27._8_4_ = (int)uVar40;
  auVar27._0_8_ = uVar40;
  auVar27._12_4_ = uVar32;
  auVar13 = auVar37 & auVar27;
  uVar19 = auVar13._0_4_;
  uVar29 = SUB164(auVar37 | auVar27,0);
  uVar18 = SUB164(auVar37 ^ auVar27,0);
  uVar43 = SUB168(auVar37 ^ auVar27,0);
  _uStack0000000000000080 = SUB168(auVar27 ^ _DAT_18001a710,0);
  uVar7 = _uStack0000000000000080;
  uVar3 = _uStack0000000000000080 & 0xffffffff;
  uVar20 = _uStack0000000000000080 & 0xffffffff;
  uVar5 = _uStack0000000000000080 >> 0x20;
  uStack0000000000000080 = SUB164(auVar27 ^ _DAT_18001a710,0);
  uVar41 = _DAT_1830a0e68 - (_DAT_1830a0e68 >> 1 & 0x5555555555555555);
  uVar41 = (uVar41 & 0x3333333333333333) + (uVar41 >> 2 & 0x3333333333333333);
  uStack00000000000000f0 = auVar13._4_4_;
  uVar4 = ((_DAT_180352770 * uVar20 + (_DAT_1803527e0 * uVar3 + uVar5 * _DAT_180352770 << 0x20) +
           (ulonglong)_DAT_1803527c0 * (ulonglong)uVar18 +
           ((ulonglong)_DAT_1803527d0 * (ulonglong)uVar18 +
            (uVar43 >> 0x20) * (ulonglong)_DAT_1803527c0 << 0x20) +
           (ulonglong)uVar29 * (ulonglong)_DAT_1803527a0 +
           ((ulonglong)_DAT_1803527b0 * (ulonglong)uVar29 +
            (SUB168(auVar37 | auVar27,0) >> 0x20) * (ulonglong)_DAT_1803527a0 << 0x20) +
           (ulonglong)_DAT_180352780 * (ulonglong)uVar19 +
           ((ulonglong)_DAT_180352790 * (ulonglong)uVar19 +
            (auVar13._0_8_ >> 0x20) * (ulonglong)_DAT_180352780 << 0x20) +
           (ulonglong)_DAT_180352750 * (uVar40 & 0xffffffff) +
           ((ulonglong)_DAT_180352760 * (uVar40 & 0xffffffff) +
            (ulonglong)uVar32 * (ulonglong)_DAT_180352750 << 0x20) +
           (ulonglong)_DAT_180352730 * (uVar4 & 0xffffffff) +
           ((ulonglong)_DAT_180352740 * (uVar4 & 0xffffffff) +
            (ulonglong)uVar8 * (ulonglong)_DAT_180352730 << 0x20)) -
          ((ulonglong)uStack0000000000000080 * (_DAT_180352850 & 0xffffffff) +
           ((ulonglong)_DAT_1803528a0 * (ulonglong)uStack0000000000000080 +
            (uVar7 >> 0x20) * (_DAT_180352850 & 0xffffffff) << 0x20) +
           (ulonglong)uVar18 * (ulonglong)_DAT_180352880 +
           ((ulonglong)_DAT_180352890 * (ulonglong)uVar18 +
            (uVar43 >> 0x20) * (ulonglong)_DAT_180352880 << 0x20) +
          (ulonglong)uVar19 * (ulonglong)_DAT_180352860 +
          ((ulonglong)_DAT_180352870 * (ulonglong)uVar19 +
           (ulonglong)uStack00000000000000f0 * (ulonglong)_DAT_180352860 << 0x20) +
          (uVar40 & 0xffffffff) * (ulonglong)_DAT_180352830 +
          ((ulonglong)_DAT_180352840 * (uVar40 & 0xffffffff) +
           (ulonglong)uVar32 * (ulonglong)_DAT_180352830 << 0x20) +
          (uVar4 & 0xffffffff) * (ulonglong)_DAT_180352810 +
          ((ulonglong)_DAT_180352820 * (uVar4 & 0xffffffff) +
           (ulonglong)uVar8 * (ulonglong)_DAT_180352810 << 0x20))) + _DAT_1803528b0;
  uVar3 = (((uVar41 >> 4) + uVar41 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1830a0e68;
  _DAT_1830a0d80 = _DAT_1830a0d70 ^ uVar3 ^ uVar4;
  _DAT_1830a0de0 = (_DAT_1830a0de0 ^ uVar3) + uVar4 ^ 0x57420d798ac204e8;
  _DAT_1830a0ec8 = (_DAT_1830a0ec8 * 0xf28e523aae2eeab ^ _DAT_1830a0de0) + uVar3;
  _DAT_1830a0e18 = _DAT_1830a0ec8 ^ _DAT_1830a0de0;
  uVar3 = ~_DAT_1830a0d18 * ((_DAT_1830a0e00 ^ uVar6) + (uVar6 & _DAT_1830a0e00) * 2);
  uVar3 = (uVar3 | _DAT_1830a0e28) + (uVar3 & _DAT_1830a0e28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830a0da8 = uVar4;
  _DAT_1830a0ec8 = func_0x000184d353f0((~uVar6 | uVar3) + (uVar3 & ~uVar6));
  uVar20 = -uVar23 ^ _DAT_1830a0ec8;
  uVar3 = uVar20 - (uVar20 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar20) *
          0x7e37732bfcd1c43f;
  _DAT_1830a0d38 = ~uVar23;
  _DAT_1830a0d90 = (_DAT_1830a0d90 ^ uVar3) + _DAT_1830a0d38 ^ 0xd486b1eef189e70b;
  _DAT_1830a0d78 = (_DAT_1830a0d78 * -0x7ecf176875f4d307 ^ _DAT_1830a0d90) + uVar3;
  _DAT_1830a0d40 = _DAT_1830a0d78 ^ _DAT_1830a0d90;
  auVar15._8_8_ = _DAT_1830a0d38;
  auVar15._0_8_ = uVar6;
  auVar13 = pshufb(auVar15 ^ _DAT_1803528c0,_DAT_1800170c0);
  uVar6 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar6 + _DAT_1830a0e38;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_1830a0e98 ^ uVar6;
  }
  _DAT_1830a0e70 = func_0x000184d353f0(SUB161(auVar15 ^ _DAT_1803528c0,5) ^ uVar3);
  uVar3 = _DAT_1830a0e70 * 0x42e2fdbf92fb5c1f & 0xffffffffffffe000;
  _DAT_1830a0e00 = _DAT_1830a0e00 ^ uVar3 ^ 0x4dab666c1541f223;
  _DAT_1830a0de0 = (_DAT_1830a0de0 * -0x587102ecbf0ee3bf ^ _DAT_1830a0e00) + uVar3;
  _DAT_1830a0d38 = _DAT_1830a0de0 ^ _DAT_1830a0e00;
  _DAT_1830a0d08 = 0;
  uVar6 = uVar4 ^ 0x84222325;
  uVar3 = ((_DAT_1830a0da0 ^ uVar6) + (uVar6 & _DAT_1830a0da0) * 2) * -_DAT_1830a0d20;
  uVar3 = (uVar3 | _DAT_1830a0e58) + (uVar3 & _DAT_1830a0e58);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1830a0d98 = func_0x000184d353f0((uVar3 | uVar6) + (uVar3 & uVar6));
  uVar3 = _DAT_180351980;
  uVar18 = (uint)(uVar4 >> 0x20);
  auVar28._8_4_ = (int)uVar4;
  auVar28._0_8_ = uVar4;
  auVar28._12_4_ = uVar18;
  auVar16._8_4_ = 0xffffffff;
  auVar16._0_8_ = 0xffffffffffffffff;
  auVar16._12_4_ = 0xffffffff;
  uVar8 = SUB164(auVar16 ^ auVar28,0);
  uVar6 = _DAT_1830a0d98 & 0x1fffffffffff;
  uVar20 = (((ulonglong)uVar8 * (_DAT_180352910 & 0xffffffff) +
             ((SUB168(auVar16 ^ auVar28,0) >> 0x20) * (_DAT_180352910 & 0xffffffff) +
              (ulonglong)_DAT_1803528d0 * (ulonglong)uVar8 << 0x20) +
             (ulonglong)_DAT_180352920 * (uVar4 & 0xffffffff) +
             ((ulonglong)_DAT_180352930 * (uVar4 & 0xffffffff) +
              (ulonglong)uVar18 * (ulonglong)_DAT_180352920 << 0x20) +
            (ulonglong)_DAT_1803528f0 * (uVar4 & 0xffffffff) +
            ((ulonglong)_DAT_180352900 * (uVar4 & 0xffffffff) +
             (ulonglong)uVar18 * (ulonglong)_DAT_1803528f0 << 0x20) +
            (ulonglong)_DAT_1803528e0 * (uVar4 & 0xffffffff) +
            ((ulonglong)uVar18 * (ulonglong)_DAT_1803528e0 +
             (uVar4 & 0xffffffff) * (ulonglong)_DAT_1803528d0 << 0x20)) -
           ((uVar4 & 0xffffffff) * (_DAT_180352960 & 0xffffffff) +
            ((ulonglong)_DAT_180352970 * (uVar4 & 0xffffffff) +
             (ulonglong)uVar18 * (_DAT_180352960 & 0xffffffff) << 0x20) +
           (ulonglong)_DAT_180352940 * (uVar4 & 0xffffffff) +
           ((ulonglong)_DAT_180352950 * (uVar4 & 0xffffffff) +
            (ulonglong)uVar18 * (ulonglong)_DAT_180352940 << 0x20))) + _DAT_180352910;
  _DAT_1830a0d18 = _DAT_1830a0ee8 ^ uVar6 ^ uVar20;
  _DAT_1830a0d40 = (_DAT_1830a0d40 ^ uVar6) + uVar20 ^ 0xfdcf6545c08b01f9;
  _DAT_1830a0e20 = (_DAT_1830a0e20 * -0x119405d5e78ea987 ^ _DAT_1830a0d40) + uVar6 ^ _DAT_1830a0d40;
  uVar6 = ((uStack00000000000000a8 ^ _DAT_1830a0e08) + (uStack00000000000000a8 & _DAT_1830a0e08) * 2
          ) * (_DAT_180351980 - uVar20);
  uVar6 = (uVar6 | _DAT_1830a0e90) + (uVar6 & _DAT_1830a0e90);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1830a0eb8 = uVar20;
  _DAT_1830a0d68 = func_0x000184d353f0((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325))
  ;
  uVar3 = ~_DAT_1830a0d68 & uVar3 & 0xffffffff80000000;
  _DAT_1830a0d28 = _DAT_1830a0d28 ^ uVar3 ^ 0xc6e0b0e66b3626a5;
  _DAT_1830a0ea8 = (_DAT_1830a0ea8 * -0x48b8eb3a5d32053b ^ _DAT_1830a0d28) + uVar3;
  _DAT_1830a0d58 = _DAT_1830a0ea8 ^ _DAT_1830a0d28;
  _DAT_1830a0dd8 = 0;
  uVar3 = uVar20 ^ 0x84222325 ^ _DAT_1830a0d90;
  lVar2 = (uVar20 ^ 0x84222325) + _DAT_1830a0d98;
  uVar6 = uVar3 + lVar2;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3;
  uVar6 = ((_DAT_1830a0d98 + _DAT_1830a0d90) * 0x2000 | _DAT_1830a0d98 + _DAT_1830a0d90 >> 0x33) ^
          _DAT_1830a0d98;
  _DAT_1830a0e90 =
       func_0x000184d353f0((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1830a0d90 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar2);
  uVar19 = (uint)(uVar20 >> 0x20);
  auVar17._8_4_ = (int)uVar20;
  auVar17._0_8_ = uVar20;
  auVar17._12_4_ = uVar19;
  auVar13 = auVar17 | ZEXT816(0);
  auVar17 = auVar17 ^ ZEXT816(0);
  uVar18 = auVar13._0_4_;
  uVar23 = auVar13._0_8_;
  uVar8 = auVar17._0_4_;
  uVar6 = auVar17._0_8_;
  uVar3 = (_DAT_1830a0e90 ^ uVar20) << 0x33 | (_DAT_1830a0e90 ^ uVar20) >> 0xd;
  uVar20 = ((ulonglong)_DAT_1803529e0 * (ulonglong)uVar8 +
            ((ulonglong)_DAT_1803529f0 * (ulonglong)uVar8 +
             (uVar6 >> 0x20) * (ulonglong)_DAT_1803529e0 << 0x20) +
            (ulonglong)_DAT_1803529c0 * (ulonglong)uVar18 +
            ((ulonglong)_DAT_1803529d0 * (ulonglong)uVar18 +
             (uVar23 >> 0x20) * (ulonglong)_DAT_1803529c0 << 0x20) +
           (uVar20 & 0xffffffff) * (ulonglong)_DAT_180352990 +
           ((ulonglong)uVar19 * (ulonglong)_DAT_180352990 +
            (uVar20 & 0xffffffff) * (ulonglong)_DAT_180352980 << 0x20)) -
           ((ulonglong)uVar8 * (_DAT_180352a80 & 0xffffffff) +
            ((ulonglong)_DAT_180352a90 * (ulonglong)uVar8 +
             (uVar6 >> 0x20) * (_DAT_180352a80 & 0xffffffff) << 0x20) +
            (ulonglong)uVar18 * (ulonglong)_DAT_180352a60 +
            ((ulonglong)_DAT_180352a70 * (ulonglong)uVar18 +
             (uVar23 >> 0x20) * (ulonglong)_DAT_180352a60 << 0x20) +
           (uVar20 & 0xffffffff) * (ulonglong)_DAT_180352a30 +
           ((ulonglong)uVar19 * (ulonglong)_DAT_180352a30 +
            (uVar20 & 0xffffffff) * (ulonglong)_DAT_180352a20 << 0x20));
  _DAT_1830a0d40 = _DAT_1830a0d70 ^ uVar3 ^ uVar20;
  _DAT_1830a0e60 = (_DAT_1830a0e60 ^ uVar3) + uVar20 ^ 0x3cdcc9b53dac5d65;
  _DAT_1830a0d08 = (_DAT_1830a0d08 * -0x4883696a57a50ed1 ^ _DAT_1830a0e60) + uVar3;
  _DAT_1830a0dd0 = _DAT_1830a0d08 ^ _DAT_1830a0e60;
  auVar22._8_8_ = uVar20;
  auVar22._0_8_ = unaff_RBX ^ 0x84222325;
  auVar13 = pshufb(auVar22 ^ _DAT_180352aa0,_DAT_1800170c0);
  uVar6 = auVar13._8_8_ + auVar13._0_8_;
  uVar3 = uVar6 + _DAT_1830a0df0;
  if (auVar13._4_4_ < 0) {
    uVar3 = _DAT_1830a0da8 ^ uVar6;
  }
  _DAT_1830a0ee0 = uVar20;
  _DAT_1830a0ea0 = func_0x000184d353f0(SUB161(auVar22 ^ _DAT_180352aa0,5) ^ uVar3);
  uVar3 = _DAT_1830a0ea0 << 0x28 | _DAT_1830a0ea0 >> 0x18;
  _DAT_1830a0ec0 = unaff_RBX ^ uVar20;
  _DAT_1830a0e70 = (_DAT_1830a0e70 ^ uVar3) + _DAT_1830a0ec0 ^ 0xd7b89a27ad17f94b;
  _DAT_1830a0d20 = (_DAT_1830a0d20 * -0x63371235888d8293 ^ _DAT_1830a0e70) + uVar3;
  _DAT_1830a0e28 = _DAT_1830a0d20 ^ _DAT_1830a0e70;
  FUN_190dd72e0(unaff_RSI,*_DAT_18301ee50 + 0x22ba4,0x54f);
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))(unaff_RSI);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4d312a4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184d312a4(void)

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


// ----- block @ rva 0x4d31335 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184d31335(void)

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


// ----- block @ rva 0x4d34db4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184d34db4(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  longlong in_stack_00000040;
  undefined4 uStack0000000000000050;
  int in_stack_00000058;
  
  uStack0000000000000050 = *(undefined4 *)(in_RAX + (longlong)in_stack_00000058 * 4);
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  switch(in_stack_00000040 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4d35278 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184d35278(void)

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


// ----- block @ rva 0x4d352f1 -----

void FUN_184d352f1(void)

{
  return;
}


// ----- block @ rva 0x4d3535d -----

void FUN_184d3535d(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x4d35578 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184d35578(void)

{
  FUN_190de3220();
  (*_DAT_180353e88)();
  return;
}


// ----- block @ rva 0x4d3562b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184d3562b(void)

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


// ----- block @ rva 0x4d356a3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184d356a3(void)

{
  longlong unaff_RDI;
  
  switch(unaff_RDI == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4d356f2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184d356f2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180354038)();
  return;
}


// ----- block @ rva 0x4d357df -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_184d357df(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_180353fa8)();
  return;
}


// ----- block @ rva 0x4d358d3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184d358d3(void)

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


// ----- block @ rva 0x4d35af3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184d35af3(void)

{
  longlong in_stack_00000048;
  
  switch(in_stack_00000048 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x4d35bc4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_184d35bc4(void)

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


// ----- block @ rva 0x4d35c3a -----

void FUN_184d35c3a(void)

{
  return;
}


// ----- block @ rva 0x4d35c42 -----

void FUN_184d35c42(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

