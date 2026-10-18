// ===== continuation @ rva 61f4d72 (image 1861f4d72) =====

void FUN_1861f4d72(void)

{
  return;
}



// ===== continuation @ rva 61f4878 (image 1861f4878) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1861f4878(void)

{
  FUN_190de3220();
  (*_DAT_1807cba78)();
  return;
}



// ===== continuation @ rva 61f49a3 (image 1861f49a3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1861f49a3(void)

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



// ===== continuation @ rva 61f4c27 (image 1861f4c27) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1861f4c27(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1807cbb68)();
  return;
}



// ===== continuation @ rva 61f4d7a (image 1861f4d7a) =====

void FUN_1861f4d7a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 61f4b03 (image 1861f4b03) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1861f4b03(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 61f4a88 (image 1861f4a88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1861f4a88(void)

{
  FUN_190de3220();
  (*_DAT_1807cbaf8)();
  return;
}



// ===== continuation @ rva 61f4a67 (image 1861f4a67) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1861f4a67(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 61f4a3f (image 1861f4a3f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1861f4a3f(void)

{
  FUN_190dd72e0();
  (*_DAT_1807cb9f8)();
  return;
}



// ===== continuation @ rva 61f4c40 (image 1861f4c40) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1861f4c40(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1b0))();
  (*_DAT_1807cbb08)();
  return;
}



// ===== continuation @ rva 61f4bee (image 1861f4bee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1861f4bee(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 61f461b (image 1861f461b) =====

void FUN_1861f461b(void)

{
  return;
}



// ===== continuation @ rva 61f0824 (image 1861f0824) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1861f0824(void)

{
  FUN_190ddce00();
  (*_DAT_1807ca818)();
  return;
}



// ===== continuation @ rva 61f4687 (image 1861f4687) =====

void FUN_1861f4687(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 61f3cca (image 1861f3cca) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1861f3cca(ulonglong param_1,ulonglong param_2)

{
  ulonglong in_RAX;
  ulonglong uVar1;
  uint unaff_EBX;
  ulonglong uVar2;
  ulonglong unaff_R15;
  uint uVar3;
  
  uVar2 = unaff_EBX ^ unaff_R15;
  uVar1 = (~param_1 + 2) * ((param_2 ^ uVar2) + (ulonglong)((uint)param_2 & (uint)uVar2) * 2);
  uVar1 = (uVar1 | in_RAX) + (uVar1 & in_RAX);
  uVar1 = uVar1 * 0x2000 ^ uVar1;
  uVar1 = uVar1 >> 7 ^ uVar1;
  uVar1 = uVar1 << 0x11 ^ uVar1;
  _DAT_18311d390 =
       func_0x0001861f46f0((uVar2 ^ 1 | uVar1) + (ulonglong)((uint)(uVar2 ^ 1) & (uint)uVar1));
  uVar3 = unaff_EBX ^ 0xffffffff;
  uVar1 = ((((ulonglong)_DAT_1807cb8b0 * (ulonglong)uVar3 + _DAT_1807cb8c0 << 0x20) +
            (ulonglong)_DAT_1807cb8a0 * (ulonglong)uVar3 +
           ((ulonglong)(_DAT_18001a990 ^ unaff_EBX) * (ulonglong)_DAT_1807cb890 << 0x20) +
           (ulonglong)_DAT_1807cb880 * (ulonglong)(_DAT_18001a990 ^ unaff_EBX) +
           ((ulonglong)(unaff_EBX | _DAT_18001a990) * (ulonglong)_DAT_1807cb870 << 0x20) +
           (ulonglong)_DAT_1807cb860 * (ulonglong)(unaff_EBX | _DAT_18001a990) +
           ((ulonglong)(unaff_EBX & _DAT_18001a990) * (ulonglong)_DAT_1807cb850 << 0x20 |
           (ulonglong)_DAT_1807cb840 * (ulonglong)(unaff_EBX & _DAT_18001a990)) +
           ((ulonglong)_DAT_1807cb830 * (ulonglong)unaff_EBX << 0x20) +
           (ulonglong)_DAT_1807cb820 * (ulonglong)unaff_EBX) -
          (((ulonglong)uVar3 * (ulonglong)_DAT_1807cb900 + _DAT_1807cb910 << 0x20) +
           (ulonglong)_DAT_1807cb8f0 * (ulonglong)uVar3 +
          ((ulonglong)unaff_EBX * (ulonglong)_DAT_1807cb900 << 0x20) +
          (ulonglong)unaff_EBX * (ulonglong)_DAT_1807cb8f0)) + 0xfe11e0c528d0c188;
  _DAT_18311d640 = _DAT_18311d398 ^ _DAT_18311d4a0 ^ uVar1;
  _DAT_18311d460 = (_DAT_18311d460 ^ _DAT_18311d4a0) + uVar1 ^ 0xb0bd119cbd22857;
  _DAT_18311d750 = (_DAT_18311d750 * 0x7d7f45a4e595130d ^ _DAT_18311d460) + _DAT_18311d4a0;
  _DAT_18311d3d0 = _DAT_18311d750 ^ _DAT_18311d460;
  _DAT_18311d618 = uVar1 & 0xffffffff;
  switch((int)uVar1 == 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 61f45d8 (image 1861f45d8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1861f45d8(void)

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



// ===== continuation @ rva 61f08bb (image 1861f08bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1861f08bb(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 61f4099 (image 1861f4099) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1861f4099(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 61f3c8e (image 1861f3c8e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1861f3c8e(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 61f3f9e (image 1861f3f9e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1861f3f9e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1807ca9d8)();
  return;
}



// ===== continuation @ rva 61f3ab7 (image 1861f3ab7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1861f3ab7(void)

{
  FUN_190dd72e0();
  (*_DAT_1807ca868)();
  return;
}



// ===== continuation @ rva 61f3929 (image 1861f3929) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1861f3929(void)

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



