// ===== STITCHED CORPUS: sixtwo.pT =====
// handlers: 4  continuation blocks: 44  unresolved table targets: 0
// tables not in tables.json: ['0x62bf8', '0x6b7400', '0x6b78f8', '0x6b7908', '0x6b7918', '0x6b7928', '0x6b7938', '0x6b7948']

// ===== Lsixtwo/pT; _0ecb3d626d60f018c6b822baef33d11e ()V (handler @ image 185cce760, runtime 6fffed8de760) =====

void FUN_185cce760(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185cce83c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1806bce60 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/pT; applyPreviewKeyframe (Lnet/minecraft/class_591;)V (handler @ image 185ca3210, runtime 6fffed8b3210) =====

void FUN_185ca3210(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x203ac,0x4f4)
      /* POOL[0x203ac,0x4f4]: V | drawBox | sixtwo/pE | drawBar | cTE | sixtwo/pV | cTR | ()Lsixtwo/pV$vH; | sixtwo/pV$vH | dxT | (F)Lsixtwo/pV$vH; | dxU | dxV | cTS | cTB | sixtwo/pO$vB | giDfG | (Lsixtwo/pY;)V | cTT | (Lnet/minecraft/class_591;F)V | cTU | fSUUB | sixtwo/pO | niRjp | sixtwo/pP$vC | ECWqq | MZvqY | cTG | cTF | LlXXr | Lsixtwo/qb; | sixtwo/qb | cUg | cUk | dxA | cUh | NSnkW | WZCIy | XEBli | net/minecraft/class_591 | field_3391 | Lnet/minecraft/class_630; | net/minecraft/class_630 | field_3654 | cTH | SRfcc | dxB | cTV | dxS | cTW | sixtwo/pP | jTHTm | sixtwo/pQ$vD | Bxxhy | OPcVW | DGWMr | dzGGQ | vYCdO |  */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185ca3268 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1806b6cc0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/pT; cTM ([B)Ljava/lang/String; (handler @ image 185ca3dc0, runtime 6fffed8b3dc0) =====

void FUN_185ca3dc0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000185ca3e63 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1806b7220 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/pT; createInstance ()Lsixtwo/pX; (handler @ image 185ca3000, runtime 6fffed8b3000) =====

void FUN_185ca3000(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x20678,0x503)
      /* POOL[0x20678,0x503]: qGjuQ | dxQ | sixtwo/pS | izzuT | drfyR | sixtwo/pT$vG | zZbFB | cTL | NUKYL | zUJjo | sixtwo/pT | IJUuI | nQlFV | eoobA | Lsixtwo/pV; | BXMnR | field_3657 | gXNXY | cTN | (Lsixtwo/pY;)Lsixtwo/pY; | gwqdY | Lsixtwo/pY; | cTM | IFjse | field_3656 | CcgbZ | field_3655 | nDnjQ | lUlSS | field_3675 | field_3674 | UczQb | field_37938 | field_37939 | field_37940 | wzvSr | Lnet/minecraft/class_591; | field_3398 | field_3401 | (Lsixtwo/pV;Lnet/minecraft/class_630;)V | field_27433 | field_3392 | field_3397 | sixtwo/qa | aWHCP | JCLVB | fOgTO | cUe | cUf | PNUDu | otavu | hTzEd | cUn | cUd | NVrud | cVS */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000185ca304d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1806b6c10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x5ca3050 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca3050(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1806b6c78)();
  return;
}


// ----- block @ rva 0x5ca306f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca306f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
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


// ----- block @ rva 0x5ca30c8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185ca30c8(void)

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


// ----- block @ rva 0x5ca30de -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca30de(void)

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


// ----- block @ rva 0x5ca3117 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca3117(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1806b6c58)();
  return;
}


// ----- block @ rva 0x5ca3132 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca3132(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (*_DAT_1806b6c28)();
  return;
}


// ----- block @ rva 0x5ca315a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca315a(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  if (cVar1 == '\0') {
    (*_DAT_1806b6c58)();
    return;
  }
  (*_DAT_1806b6c58)();
  return;
}


// ----- block @ rva 0x5ca3175 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca3175(void)

{
  (*_DAT_1806b6c58)();
  return;
}


// ----- block @ rva 0x5ca317d -----

void FUN_185ca317d(void)

{
  return;
}


// ----- block @ rva 0x5ca31ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca31ba(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_1806b6c98)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x5ca31c6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185ca31c6(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  switch(param_3 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5ca326b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca326b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_1806b6ed8)();
  return;
}


// ----- block @ rva 0x5ca339b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca339b(void)

{
  FUN_190ddfc90();
  (*_DAT_1806b6f08)();
  return;
}


// ----- block @ rva 0x5ca3495 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca3495(void)

{
  undefined4 uStack0000000000000038;
  
  uStack0000000000000038 = 0xbf333333;
  FUN_190dd72e0();
  (*_DAT_1806b6da8)();
  return;
}


// ----- block @ rva 0x5ca3558 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca3558(void)

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


// ----- block @ rva 0x5ca35aa -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca35aa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_1806b6fe8)();
  return;
}


// ----- block @ rva 0x5ca376e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185ca376e(void)

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


// ----- block @ rva 0x5ca37c0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185ca37c0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
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


// ----- block @ rva 0x5ca38da -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185ca38da(void)

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


// ----- block @ rva 0x5ca3a3d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185ca3a3d(void)

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


// ----- block @ rva 0x5ca3b3a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185ca3b3a(void)

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


// ----- block @ rva 0x5ca3d04 -----

void FUN_185ca3d04(void)

{
  return;
}


// ----- block @ rva 0x5ca3d0e -----

void FUN_185ca3d0e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x5ca3e66 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000185ca3e9c */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_185ca3e66(void)

{
  longlong *unaff_R15;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R15 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x5ca3e9f -----

undefined8 FUN_185ca3e9f(void)

{
  longlong *unaff_R15;
  
  (**(code **)(unaff_R15 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x5ca3eb9 -----

void FUN_185ca3eb9(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
                    /* WARNING: Could not recover jumptable at 0x000185ca3eed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1806b7400 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x5cadaf1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185cadaf1(void)

{
  int iVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_R15;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar2 = (_DAT_1830f9588 ^ _DAT_1806b78f0) + _DAT_1830f9018 + 0x882e92cd;
  uVar3 = (_DAT_1830f9018 ^ _UNK_1806b78f8) + _DAT_1830f9588 + 0xc9a19c45;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830f9588 ^ _DAT_1806b78f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830f9018 ^ _UNK_1806b78f8;
  _DAT_1830f93a0 =
       func_0x000185cce6d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830f9588 + 0xc9a19c45) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830f9018 + 0x882e92cd));
  _DAT_1830f9518 =
       (_DAT_1830f9518 ^ _DAT_1830f93a0 & 0xfffffffffffe0000) + 0xcdadbded ^ 0xb028efd3ba46d5b4;
  _DAT_1830f9030 =
       (_DAT_1830f9030 * 0x72e55389c4d5db7d ^ _DAT_1830f9518) +
       (_DAT_1830f93a0 & 0xfffffffffffe0000);
  _DAT_1830f96e8 = _DAT_1830f9030 ^ _DAT_1830f9518;
  _DAT_1830f9248 = 0xcdadbded;
  _DAT_1830f9020 = func_0x000185cce6d0(_DAT_1830f91c0 + 0xfff6004c9b00aeffU ^ 0xe1);
  _DAT_1830f9510 = (_DAT_1830f9510 ^ _DAT_1830f9020 ^ 0xcbf55dc0) - 0xcbf55dc0 ^ 0x4c0613416e4e3264;
  _DAT_1830f93a8 =
       (_DAT_1830f93a8 * 0x5968515a8ee2c0bd ^ _DAT_1830f9510) + (_DAT_1830f9020 ^ 0xcbf55dc0);
  _DAT_1830f90d0 = _DAT_1830f93a8 ^ _DAT_1830f9510;
  _DAT_1830f9378 = 0x340aa240;
  uVar2 = (~_DAT_1830f9500 + 0xcbf55dc1) *
          ((_DAT_1830f9400 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_1830f9400 & 0x7bdddcdb) * 2);
  uVar2 = (uVar2 | _DAT_1830f9358) + (uVar2 & _DAT_1830f9358);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830f8f98 = func_0x000185cce6d0((uVar2 | 0xb028811b) + (ulonglong)((uint)uVar2 & 0xb028811b))
  ;
  uVar2 = ((_DAT_1830f8f98 ^ 0xcbf55dbe68100000) & 0xfffffffffff80000) << 0x1d |
          (_DAT_1830f8f98 ^ 0xcbf55dbe68100000) >> 0x23;
  _DAT_1830f9480 = _DAT_1830f9450 ^ uVar2 ^ 0x1cbf55dbe;
  _DAT_1830f91d0 = (_DAT_1830f91d0 ^ uVar2) + 0x1cbf55dbe ^ 0x971e0c57a181832;
  _DAT_1830f8f38 = (_DAT_1830f8f38 * -0x379d9e3a5cc2372f ^ _DAT_1830f91d0) + uVar2;
  _DAT_1830f92c8 = _DAT_1830f8f38 ^ _DAT_1830f91d0;
  _DAT_1830f9260 = 0xcbf55dbe;
  _DAT_1830f9480 = func_0x000185cce6d0(_DAT_1830f91e8 + 0x33ffe7d5002aff ^ 0x7a);
  uVar2 = _DAT_1830f9480 ^ 0xcbf55dbe;
  _DAT_1830f8f58 = _DAT_1830f9018 ^ uVar2 ^ 0xfffffffe;
  _DAT_1830f9670 = (_DAT_1830f9670 ^ uVar2) + 0xfffffffe ^ 0x73c2e870a5744528;
  _DAT_1830f9218 = (_DAT_1830f9218 * -0x7561ec93ca218421 ^ _DAT_1830f9670) + uVar2;
  _DAT_1830f90a0 = _DAT_1830f9218 ^ _DAT_1830f9670;
  _DAT_1830f9258 = 0xfffffffe;
  uVar2 = (_DAT_1830f92c0 ^ _DAT_1806b7900) + _DAT_1830f9238 + 0x84222325;
  uVar3 = (_DAT_1830f9238 ^ _UNK_1806b7908) + _DAT_1830f92c0 + 0x1aea7424;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830f92c0 ^ _DAT_1806b7900;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830f9238 ^ _UNK_1806b7908;
  _DAT_1830f9150 =
       func_0x000185cce6d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830f92c0 + 0x1aea7424) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830f9238 + 0x84222325));
  _DAT_1830f96a0 = _DAT_1830f9170 * 0x41b06d37634f43d1;
  _DAT_1830f9370 = _DAT_1830f9370 - 0x1aea7424 ^ 0x6e2f69829e2fa905;
  _DAT_1830f9170 = _DAT_1830f96a0 ^ _DAT_1830f9370;
  _DAT_1830f9300 = 0xe5158bdc;
  uVar2 = (~_DAT_1830f9160 + 0x1aea7425) *
          ((_DAT_1830f9168 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_1830f9168 & 0x7bdddcdb) * 2);
  uVar2 = (uVar2 | _DAT_1830f9520) + (uVar2 & _DAT_1830f9520);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830f9228 = func_0x000185cce6d0((uVar2 | 0x6137a8ff) + (ulonglong)((uint)uVar2 & 0x6137a8ff))
  ;
  uVar2 = (_DAT_1830f9228 >> 0x32) << 0x3e | (_DAT_1830f9228 & 0x3fffffffff800) << 0xc;
  _DAT_1830f91d8 = _DAT_1830f91d0 ^ uVar2 ^ 0x11aea7422;
  _DAT_1830f9388 = (_DAT_1830f9388 ^ uVar2) + 0x11aea7422 ^ 0x7679430636751798;
  _DAT_1830f93b8 = (_DAT_1830f93b8 * -0x6e5bac986a2f891d ^ _DAT_1830f9388) + uVar2;
  _DAT_1830f9328 = _DAT_1830f93b8 ^ _DAT_1830f9388;
  _DAT_1830f9330 = 0x1aea7422;
  uVar2 = (_DAT_1830f9220 ^ _DAT_1806b7910) + _DAT_1830f90f0 + 0x9ec85707;
  uVar3 = (_DAT_1830f90f0 ^ _UNK_1806b7918) + _DAT_1830f9220 + 0xe5158bdc;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830f9220 ^ _DAT_1806b7910;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830f90f0 ^ _UNK_1806b7918;
  _DAT_1830f92d0 =
       func_0x000185cce6d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830f9220 + 0xe5158bdc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830f90f0 + 0x9ec85707));
  uVar2 = _DAT_1830f92d0 ^ 0x1aea7422;
  _DAT_1830f9170 = _DAT_1830f9608 ^ uVar2 ^ 0xfffffffe;
  _DAT_1830f9650 = (_DAT_1830f9650 ^ uVar2) + 0xfffffffe ^ 0x539b9d9735b4d82e;
  _DAT_1830f9350 = (_DAT_1830f9350 * -0x36e4a78c4c62de41 ^ _DAT_1830f9650) + uVar2;
  _DAT_1830f9690 = _DAT_1830f9350 ^ _DAT_1830f9650;
  _DAT_1830f8fe8 = 0xfffffffe;
  uVar2 = (_DAT_1830f93f0 ^ _DAT_1806b7920) + _DAT_1830f91a8 + 0x84222325;
  uVar3 = (_DAT_1830f91a8 ^ _UNK_1806b7928) + _DAT_1830f93f0 + 0x569c8480;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830f93f0 ^ _DAT_1806b7920;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830f91a8 ^ _UNK_1806b7928;
  _DAT_1830f9218 =
       func_0x000185cce6d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830f93f0 + 0x569c8480) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830f91a8 + 0x84222325));
  _DAT_1830f8f88 = (_DAT_1830f8f88 ^ _DAT_1830f9218 ^ 0x569c8480) - 0x569c8480 ^ 0x663abeaeb388aa03;
  _DAT_1830f9338 =
       (_DAT_1830f9338 * 0x3bbc73378898e21 ^ _DAT_1830f8f88) + (_DAT_1830f9218 ^ 0x569c8480);
  _DAT_1830f9638 = _DAT_1830f9338 ^ _DAT_1830f8f88;
  _DAT_1830f96c8 = 0xa9637b80;
  uVar2 = (_DAT_1830f8f80 ^ _DAT_1806b7930) + _DAT_1830f93d0 + 0x7bdddcdb;
  uVar3 = (_DAT_1830f93d0 ^ _UNK_1806b7938) + _DAT_1830f8f80 + 0x569c8480;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830f8f80 ^ _DAT_1806b7930;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830f93d0 ^ _UNK_1806b7938;
  _DAT_1830f9660 =
       func_0x000185cce6d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830f8f80 + 0x569c8480) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830f93d0 + 0x7bdddcdb));
  uVar2 = _DAT_1830f9660 ^ 0x569c847fad3908fe;
  _DAT_1830f93c8 = _DAT_1830f9160 ^ uVar2 ^ 0x1569c847e;
  _DAT_1830f9310 = (_DAT_1830f9310 ^ uVar2) + 0x1569c847e ^ 0xdcaef3b4b18ab40c;
  _DAT_1830f9338 = (_DAT_1830f9338 * -0x437f40baa40c86af ^ _DAT_1830f9310) + uVar2;
  _DAT_1830f92b0 = _DAT_1830f9338 ^ _DAT_1830f9310;
  _DAT_1830f9088 = 0x569c847e;
  _DAT_1830f90a8 = func_0x000185cce6d0(_DAT_1830f92f0 ^ 0xd3ffb8a4ff427b);
  uVar2 = ((_DAT_1830f90a8 & 0x3ffffffffffffff) << 5 | _DAT_1830f90a8 >> 0x3b) ^ 0x569c847e;
  _DAT_1830f9120 = _DAT_1830f90c8 ^ uVar2 ^ 0xfffffffe;
  _DAT_1830f91d8 = (_DAT_1830f91d8 ^ uVar2) + 0xfffffffe ^ 0xf7bdf25c7958f065;
  _DAT_1830f9488 = (_DAT_1830f9488 * -0x18a40cc991b394dd ^ _DAT_1830f91d8) + uVar2;
  _DAT_1830f9588 = _DAT_1830f9488 ^ _DAT_1830f91d8;
  _DAT_1830f9558 = 0xfffffffe;
  uVar2 = (~_DAT_1830f91a0 + 0x23818721) *
          ((_DAT_1830f9098 ^ 0x498f9ec8) + (ulonglong)((uint)_DAT_1830f9098 & 0x498f9ec8) * 2);
  uVar2 = (uVar2 | _DAT_1830f9168) + (uVar2 & _DAT_1830f9168);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830f96c8 = func_0x000185cce6d0((uVar2 | 0x6a0e19e8) + (ulonglong)((uint)uVar2 & 0x6a0e19e8))
  ;
  uVar2 = (_DAT_1830f96c8 ^ 0x1c86d214704cb800) & 0xfffffffffffffc00;
  _DAT_1830f9610 = _DAT_1830f9078 ^ uVar2 ^ 0xf12f450d;
  _DAT_1830f9350 = (_DAT_1830f91c8 ^ uVar2) + 0xf12f450d ^ 0x9a19efa2db520e15;
  _DAT_1830f9310 = (_DAT_1830f9310 * 0x2e0a848f6d08f4ad ^ _DAT_1830f9350) + uVar2;
  _DAT_1830f9350 = _DAT_1830f9310 ^ _DAT_1830f9350;
  _DAT_1830f91c8 = 0xf12f450d;
  uVar2 = (~_DAT_1830f9420 + 0x23818721) *
          ((_DAT_1830f9650 ^ 0x498f9ec8) + (ulonglong)((uint)_DAT_1830f9650 & 0x498f9ec8) * 2);
  uVar2 = (uVar2 | _DAT_1830f96e0) + (uVar2 & _DAT_1830f96e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830f9670 = func_0x000185cce6d0((uVar2 | 0x6a0e19e8) + (ulonglong)((uint)uVar2 & 0x6a0e19e8))
  ;
  uVar2 = (_DAT_1830f9670 ^ 0xefadbfed) * -0x6e3245cd5108fa4f;
  _DAT_1830f9090 = (_DAT_1830f9090 ^ uVar2) + 0xee2c3acd ^ 0x385c772f6ff3d7ed;
  _DAT_1830f8fa8 = (_DAT_1830f8fa8 * -0x6f95efac726bf6ff ^ _DAT_1830f9090) + uVar2;
  _DAT_1830f9248 = _DAT_1830f8fa8 ^ _DAT_1830f9090;
  _DAT_1830f9278 = 0xee2c3acd;
  uVar2 = (_DAT_1830f8fe0 ^ _DAT_1806b7940) + _DAT_1830f9050 + 0x498f9ec8;
  uVar3 = (_DAT_1830f9050 ^ _UNK_1806b7948) + _DAT_1830f8fe0 + 0x23818720;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830f8fe0 ^ _DAT_1806b7940;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1830f9050 ^ _UNK_1806b7948;
  _DAT_1830f93d8 =
       func_0x000185cce6d0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1830f8fe0 + 0x23818720) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830f9050 + 0x498f9ec8));
  uVar2 = _DAT_1830f93d8 << 0x1b | _DAT_1830f93d8 >> 0x25;
  _DAT_1830f92f8 = (_DAT_1830f92f8 ^ uVar2) + 0x1818520 ^ 0x5292af8418e1c7b4;
  _DAT_1830f8f30 = (_DAT_1830f8f30 * 0x341baa7fef7db785 ^ _DAT_1830f92f8) + uVar2;
  _DAT_1830f9498 = _DAT_1830f8f30 ^ _DAT_1830f92f8;
  _DAT_1830f93a0 = 0x1818520;
  _DAT_1830f9370 = func_0x000185cce6d0(_DAT_1830f9348 + 0x210083e5001dff ^ 0xe3);
  uVar2 = (_DAT_1830f9370 ^ 0xe33a08bce76602a9) * 0x70ce884ebd391167;
  _DAT_1830f9138 = uVar2 << 0x3a | uVar2 >> 6;
  _DAT_1830f92c0 = _DAT_1830f92c0 ^ _DAT_1830f9138 ^ 0x222eddc98327a4b8;
  _DAT_1830f9070 = (_DAT_1830f9070 * -0x1d70b790fc97f1bd ^ _DAT_1830f92c0) + _DAT_1830f9138;
  _DAT_1830f94a0 = _DAT_1830f9070 ^ _DAT_1830f92c0;
  _DAT_1830f8fc0 = 0;
  _DAT_1830f95b8 = func_0x000185cce6d0(_DAT_1830f9530 + 0xffc3fff634ff54ffU ^ 0x65);
  uVar2 = (ulonglong)((uint)_DAT_1830f95b8 & 0xfffffffe);
  _DAT_1830f9388 = _DAT_1830f9088 ^ uVar2 ^ 0xfffffffe;
  _DAT_1830f94f8 = (_DAT_1830f94f8 ^ uVar2) + 0xfffffffe ^ 0xf20bb0428c907d4c;
  _DAT_1830f95d8 = (_DAT_1830f95d8 * -0x7b9a5bbca89df37b ^ _DAT_1830f94f8) + uVar2;
  _DAT_1830f90e0 = _DAT_1830f95d8 ^ _DAT_1830f94f8;
  _DAT_1830f9150 = 0xfffffffe;
  uVar2 = (~_DAT_1830f90c8 + 0x100000000) *
          ((_DAT_1830f9630 ^ 0x498f9ec8) + (ulonglong)((uint)_DAT_1830f9630 & 0x498f9ec8) * 2);
  uVar2 = (uVar2 | _DAT_1830f8fd8) + (uVar2 & _DAT_1830f8fd8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1830f8f60 = func_0x000185cce6d0((uVar2 | 0xb6706137) + (ulonglong)((uint)uVar2 & 0xb6706137))
  ;
  _DAT_1830f91e8 =
       (_DAT_1830f91e8 ^ _DAT_1830f8f60 * -0x4b020988a736bbf) + 0x32524212 ^ 0x4dcd7cbd152266e6;
  _DAT_1830f9040 =
       (_DAT_1830f9040 * 0x70868507593f5b9 ^ _DAT_1830f91e8) + _DAT_1830f8f60 * -0x4b020988a736bbf;
  _DAT_1830f9218 = _DAT_1830f9040 ^ _DAT_1830f91e8;
  _DAT_1830f9348 = _DAT_1830f9418 ^ 0x32524212;
  _DAT_1830f8f88 = 0x32524212;
  _DAT_1830f95c0 = func_0x000185cce6d0(_DAT_1830f8fd8 + 0xffbbffa65aff44ff ^ 0x71);
  uVar2 = _DAT_1830f95c0 * 0x7c0edfd8b08b2fd1 << 0x3a |
          (ulonglong)(_DAT_1830f95c0 * 0x7c0edfd8b08b2fd1) >> 6;
  _DAT_1830f9408 = _DAT_1830f94a8 ^ uVar2 ^ 0xfffffffe;
  _DAT_1830f9400 = (_DAT_1830f9400 ^ uVar2) + 0xfffffffe ^ 0x496232c183e618bd;
  _DAT_1830f90b8 = (_DAT_1830f90b8 * 0x4e09d2197ea3d841 ^ _DAT_1830f9400) + uVar2;
  _DAT_1830f8f00 = _DAT_1830f90b8 ^ _DAT_1830f9400;
  _DAT_1830f90e0 = 0xfffffffe;
  _DAT_1830f96f0 = func_0x000185cce6d0(_DAT_1830f95f8 ^ 0xffdcff83e2ffdd52);
  _DAT_1830f9318 = _DAT_1830f9318 ^ _DAT_1830f9300 ^ 0x11c5818c316cd532;
  _DAT_1830f92f0 = (_DAT_1830f92f0 * 0x1a6f7c90750530d5 ^ _DAT_1830f9318) + _DAT_1830f9300;
  _DAT_1830f8f60 = _DAT_1830f92f0 ^ _DAT_1830f9318;
  _DAT_1830f9120 = 0;
  uVar2 = (_DAT_1830f8f00 ^ 0x7bdddcdb) + _DAT_1830f9388 + 0x7bdddcdb;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1830f8f00 ^ 0x7bdddcdb;
  uVar3 = ((_DAT_1830f9388 + _DAT_1830f8f00) * 0x2000 | _DAT_1830f9388 + _DAT_1830f8f00 >> 0x33) ^
          _DAT_1830f9388;
  _DAT_1830f8f80 =
       func_0x000185cce6d0((uVar3 << 0x1d | uVar3 >> 0x23) - _DAT_1830f8f00 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1830f9388 + 0x7bdddcdb));
  uVar2 = _DAT_1830f8f80 - (_DAT_1830f8f80 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          _DAT_1830f8f80;
  _DAT_1830f9200 = _DAT_1830f9210 ^ uVar2 ^ 0xfffffffe;
  _DAT_1830f8f28 = (_DAT_1830f8f28 ^ uVar2) + 0xfffffffe ^ 0x61b53080386a155b;
  _DAT_1830f9668 = (_DAT_1830f9668 * 0x369b29c5b3af889f ^ _DAT_1830f8f28) + uVar2;
  _DAT_1830f9698 = _DAT_1830f9668 ^ _DAT_1830f8f28;
  _DAT_1830f9418 = 0xfffffffe;
  *(int *)(unaff_RBP + 4) = *(int *)(unaff_RBP + -0x30) + -2;
  *(longlong **)(unaff_RBP + 0x30) = unaff_R15;
  *(undefined8 *)(unaff_RBP + 0x10) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x80) = 0;
  *(undefined4 *)(unaff_RBP + 0x90) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x98) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0xa0) = 0;
  iVar1 = (**(code **)(unaff_R15 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0xa0) < 0 || iVar1 <= *(int *)(unaff_RBP + 0xa0)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5cb4a87 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185cb4a87(void)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  longlong *unaff_R15;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  uint uVar7;
  longlong lVar8;
  undefined1 unaff_XMM7 [16];
  uint unaff_XMM8_Da;
  uint uVar9;
  
  *(undefined2 *)(unaff_RBP + 0x5e) = *(undefined2 *)(unaff_RBP + 0xa0);
  (**(code **)(unaff_R15 + JNI->SetCharArrayRegion /*0x688*/))();
  uVar2 = _DAT_1806b8290;
  uVar1 = *(uint *)(unaff_RBP + 0x50);
  auVar5._8_8_ = _UNK_180062bf8;
  auVar5._0_8_ = uVar1 ^ unaff_R12;
  auVar6 = pshufb(auVar5 ^ _DAT_1806b8210,unaff_XMM7);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar4 + _DAT_1830f93f8;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_1830f9058 ^ uVar4;
  }
  _DAT_1830f91a8 = func_0x000185cce6d0(SUB161(auVar5 ^ _DAT_1806b8210,5) ^ uVar3);
  uVar9 = uVar1 & unaff_XMM8_Da;
  uVar7 = uVar1 ^ unaff_XMM8_Da;
  lVar8 = ((ulonglong)uVar1 * (ulonglong)uVar2 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_1806b8280;
  uVar3 = ((((ulonglong)uVar7 * (ulonglong)_DAT_1806b8270 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_1806b8260 + lVar8 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_1806b8250 << 0x20 |
           (ulonglong)uVar9 * (ulonglong)_DAT_1806b8240) +
           ((ulonglong)uVar1 * (ulonglong)_DAT_1806b8230 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_DAT_1806b8220) -
          (((ulonglong)uVar7 * (ulonglong)_DAT_1806b8310 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_1806b8300 +
           ((ulonglong)(uVar1 | unaff_XMM8_Da) * (ulonglong)_DAT_1806b82f0 << 0x20) +
           (ulonglong)(uVar1 | unaff_XMM8_Da) * (ulonglong)_DAT_1806b82e0 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_1806b82d0 << 0x20 |
           (ulonglong)uVar9 * (ulonglong)_DAT_1806b82c0) +
           ((ulonglong)uVar1 * (ulonglong)_DAT_1806b82b0 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_DAT_1806b82a0 + lVar8)) + 0x2f48c0d8e5c2c3a5;
  _DAT_1830f9440 = _DAT_1830f9368 ^ _DAT_1830f91a8 ^ uVar3;
  _DAT_1830f8fb0 = (_DAT_1830f8fb0 ^ _DAT_1830f91a8) + uVar3 ^ 0x7e1f9cb9a16e8245;
  _DAT_1830f93e8 = (_DAT_1830f93e8 * -0x39920dc69e3067d7 ^ _DAT_1830f8fb0) + _DAT_1830f91a8;
  _DAT_1830f8f28 = _DAT_1830f93e8 ^ _DAT_1830f8fb0;
  _DAT_1830f91e8 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x90) = (int)uVar3;
  *(int *)(unaff_RBP + 0x98) = *(int *)(unaff_RBP + -0x30);
  switch((int)uVar3 < *(int *)(unaff_RBP + -0x30)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5cb8f85 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185cb8f85(void)

{
  uint in_EAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  undefined8 unaff_XMM6_Qb;
  undefined1 unaff_XMM7 [16];
  uint unaff_XMM8_Da;
  uint unaff_XMM10_Da;
  uint uVar7;
  
  auVar3._8_8_ = unaff_XMM6_Qb;
  auVar3._0_8_ = in_EAX ^ unaff_R12;
  auVar4 = pshufb(auVar3 ^ _DAT_1806b8210,unaff_XMM7);
  uVar2 = auVar4._8_8_ + auVar4._0_8_;
  uVar1 = uVar2 + _DAT_1830f93f8;
  if (auVar4._4_4_ < 0) {
    uVar1 = _DAT_1830f9058 ^ uVar2;
  }
  _DAT_1830f91a8 = func_0x000185cce6d0(SUB161(auVar3 ^ _DAT_1806b8210,5) ^ uVar1);
  uVar7 = in_EAX & unaff_XMM8_Da;
  uVar5 = in_EAX ^ unaff_XMM8_Da;
  lVar6 = ((ulonglong)in_EAX * (ulonglong)unaff_XMM10_Da << 0x20) +
          (ulonglong)in_EAX * (ulonglong)_DAT_1806b8280;
  uVar1 = ((((ulonglong)uVar5 * (ulonglong)_DAT_1806b8270 << 0x20) +
            (ulonglong)uVar5 * (ulonglong)_DAT_1806b8260 + lVar6 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_1806b8250 << 0x20 |
           (ulonglong)uVar7 * (ulonglong)_DAT_1806b8240) +
           ((ulonglong)in_EAX * (ulonglong)_DAT_1806b8230 << 0x20) +
           (ulonglong)in_EAX * (ulonglong)_DAT_1806b8220) -
          (((ulonglong)uVar5 * (ulonglong)_DAT_1806b8310 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_1806b8300 +
           ((ulonglong)(in_EAX | unaff_XMM8_Da) * (ulonglong)_DAT_1806b82f0 << 0x20) +
           (ulonglong)(in_EAX | unaff_XMM8_Da) * (ulonglong)_DAT_1806b82e0 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_1806b82d0 << 0x20 |
           (ulonglong)uVar7 * (ulonglong)_DAT_1806b82c0) +
           ((ulonglong)in_EAX * (ulonglong)_DAT_1806b82b0 << 0x20) +
           (ulonglong)in_EAX * (ulonglong)_DAT_1806b82a0 + lVar6)) + 0x2f48c0d8e5c2c3a5;
  _DAT_1830f9440 = _DAT_1830f9368 ^ _DAT_1830f91a8 ^ uVar1;
  _DAT_1830f8fb0 = (_DAT_1830f8fb0 ^ _DAT_1830f91a8) + uVar1 ^ 0x7e1f9cb9a16e8245;
  _DAT_1830f93e8 = (_DAT_1830f93e8 * -0x39920dc69e3067d7 ^ _DAT_1830f8fb0) + _DAT_1830f91a8;
  _DAT_1830f8f28 = _DAT_1830f93e8 ^ _DAT_1830f8fb0;
  _DAT_1830f91e8 = uVar1 & 0xffffffff;
  *(int *)(unaff_RBP + 0x90) = (int)uVar1;
  *(int *)(unaff_RBP + 0x98) = *(int *)(unaff_RBP + -0x30);
  switch((int)uVar1 < *(int *)(unaff_RBP + -0x30)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x5cb91f1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185cb91f1(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R15;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x48) = uVar2;
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


// ----- block @ rva 0x5cb9467 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185cb9467(void)

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


// ----- block @ rva 0x5cb947c -----

undefined8 thunk_FUN_185ca3e9f(void)

{
  longlong *unaff_R15;
  
  (**(code **)(unaff_R15 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x5cb95d2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185cb95d2(void)

{
  char cVar1;
  longlong *unaff_R15;
  
  FUN_190dd72e0();
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


// ----- block @ rva 0x5cb9618 -----

void FUN_185cb9618(void)

{
  return;
}


// ----- block @ rva 0x5cb9772 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185cb9772(longlong param_1)

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


// ----- block @ rva 0x5cce83f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_185cce83f(void)

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


// ----- block @ rva 0x5cced66 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185cced66(void)

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


// ----- block @ rva 0x5cceda3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185cceda3(void)

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


// ----- block @ rva 0x5cd0529 -----

void FUN_185cd0529(void)

{
  undefined8 in_RAX;
  longlong unaff_R14;
  longlong unaff_R15;
  ulonglong uStack0000000000000070;
  
  uStack0000000000000070 = (ulonglong)(uint)(int)(char)((ulonglong)in_RAX >> 0x38);
                    /* WARNING: Could not recover jumptable at 0x000185cd0545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_R14 + (ulonglong)(unaff_R15 == 0) * 8))();
  return;
}


// ----- block @ rva 0x5cd0ae1 -----

void FUN_185cd0ae1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x5cd1089 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185cd1089(void)

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


// ----- block @ rva 0x5cd125f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_185cd125f(void)

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


// ----- block @ rva 0x5cd143e -----

void thunk_FUN_185cce9c1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x5cd1565 -----

void FUN_185cd1565(void)

{
  return;
}

