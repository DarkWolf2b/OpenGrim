// ===== continuation @ rva 9be0d82 (image 189be0d82) =====

void FUN_189be0d82(void)

{
  return;
}



// ===== continuation @ rva 9be0888 (image 189be0888) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189be0888(void)

{
  FUN_190de3220();
  (*_DAT_1814ede58)();
  return;
}



// ===== continuation @ rva 9be0d8a (image 189be0d8a) =====

void FUN_189be0d8a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9be093b (image 189be093b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189be093b(void)

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



// ===== continuation @ rva 9be0b8c (image 189be0b8c) =====
