// ===== continuation @ rva b3a6156 (image 18b3a6156) =====

void FUN_18b3a6156(void)

{
  return;
}



// ===== continuation @ rva b3a5f1d (image 18b3a5f1d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3a5f1d(void)

{
  FUN_190ddfc90();
  (*_DAT_181adf9c8)();
  return;
}



// ===== continuation @ rva b3a60df (image 18b3a60df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3a60df(void)

{
  FUN_190ddfc90();
  (*_DAT_181adf968)();
  return;
}



// ===== continuation @ rva b3a6059 (image 18b3a6059) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3a6059(void)

{
  FUN_190ddfc90();
  (*_DAT_181adf998)();
  return;
}



// ===== continuation @ rva b3a615e (image 18b3a615e) =====

void FUN_18b3a615e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3a6112 (image 18b3a6112) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3a6112(void)

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



// ===== continuation @ rva b3a60b0 (image 18b3a60b0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3a60b0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1841196f0();
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



// ===== continuation @ rva b3a6010 (image 18b3a6010) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3a6010(void)

{
  FUN_190dd72e0();
  (*_DAT_181adf9a8)();
  return;
}



// ===== continuation @ rva b3a608c (image 18b3a608c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3a608c(void)

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



// ===== continuation @ rva b3a6038 (image 18b3a6038) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3a6038(void)

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



// ===== continuation @ rva b464d49 (image 18b464d49) =====

void FUN_18b464d49(void)

{
  return;
}



// ===== continuation @ rva b44bded (image 18b44bded) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b44be43 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b44bded(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b44e36f (image 18b44e36f) =====

void thunk_FUN_18b44bf75(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva b464bb8 (image 18b464bb8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b464bcf */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b464bb8(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b45c169 (image 18b45c169) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b45c169(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 *unaff_RBX;
  longlong *unaff_RSI;
  undefined8 *unaff_R14;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 in_stack_00000038;
  int iStack0000000000000058;
  int in_stack_00000068;
  
  lVar3 = (**(code **)(*unaff_RSI + 0x6f0))();
  cVar1 = *(char *)(lVar3 + in_stack_00000068);
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,in_stack_00000038,lVar3,2);
  uVar5 = (_DAT_18329ba80 ^ _DAT_181b13890) + _DAT_18329b990 + 0xda62cc49;
  uVar6 = (_DAT_18329b990 ^ _UNK_181b13898) + _DAT_18329ba80 + 0x58f0cb95;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18329ba80 ^ _DAT_181b13890;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18329b990 ^ _UNK_181b13898;
  uVar4 = (ulonglong)(uint)(int)cVar1;
  _DAT_18329bab0 =
       func_0x00018b464f10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18329ba80 + 0x58f0cb95) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18329b990 + 0xda62cc49));
  _DAT_18329b970 =
       (_DAT_18329b970 ^ _DAT_18329bab0 ^ 0x20befa21eee5fddc) + 0x5ef0effd ^ 0xffa5832209e7866f;
  _DAT_18329ba20 =
       (_DAT_18329ba20 * -0x4e3f01f44ac7e305 ^ _DAT_18329b970) +
       (_DAT_18329bab0 ^ 0x20befa21eee5fddc);
  _DAT_18329b928 = _DAT_18329ba20 ^ _DAT_18329b970;
  _DAT_18329b980 = 0x5ef0effd;
  uVar5 = ((_DAT_18329ba88 ^ 0xcbf21ec6) + (ulonglong)((uint)_DAT_18329ba88 & 0xcbf21ec6) * 2) *
          -0x227be66;
  uVar5 = (uVar5 | _DAT_18329b948) + (uVar5 & _DAT_18329b948);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18329b970 = func_0x00018b464f10((uVar5 | 0x973b2f51) + (ulonglong)((uint)uVar5 & 0x973b2f51))
  ;
  uVar5 = _DAT_18329b970 ^ 0x5fd93df7;
  uVar5 = (uVar5 << 0x3c | uVar5 >> 4) >> 0x14 | (uVar5 >> 4) << 0x2c;
  _DAT_18329bad0 = (_DAT_18329bad0 ^ uVar5) + 0x13190c74 ^ 0x1059a471646fad05;
  _DAT_18329ba00 = (_DAT_18329ba00 * -0x750336031cd91511 ^ _DAT_18329bad0) + uVar5;
  _DAT_18329b9b8 = _DAT_18329ba00 ^ _DAT_18329bad0;
  _DAT_18329bab8 = 0x13190c74;
  uVar5 = (~_DAT_18329b910 + 0xdd3ffab1) *
          ((_DAT_18329ba78 ^ 0x84222325) + (ulonglong)((uint)_DAT_18329ba78 & 0x84222325) * 2);
  uVar5 = (uVar5 | _DAT_18329b900) + (uVar5 & _DAT_18329b900);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18329b958 = func_0x00018b464f10((uVar5 | 0x591dd995) + (ulonglong)((uint)uVar5 & 0x591dd995))
  ;
  _DAT_18329b9d8 = _DAT_18329b9d8 - 0xdd3ffab0 ^ 0xb2e15ef9d30e206f;
  _DAT_18329b9b8 = _DAT_18329b9c8 * -0x4b706f17c3cdac3b;
  _DAT_18329b9c8 = _DAT_18329b9b8 ^ _DAT_18329b9d8;
  _DAT_18329ba98 = 0x22c00550;
  uVar5 = func_0x00018b464f10(_DAT_18329b9c0 + 0xff470056ea001cff ^ 0xda);
  uVar5 = uVar5 ^ 0xdd3ffab0;
  _DAT_18329b920 = _DAT_18329bab0 ^ uVar5 ^ 0xdd3ffbaf;
  _DAT_18329bac0 = (_DAT_18329bac0 ^ uVar5) + 0xdd3ffbaf ^ 0x33063bdc666e2023;
  _DAT_18329b970 = (_DAT_18329b970 * -0x7c9de450c1e04d93 ^ _DAT_18329bac0) + uVar5 ^ _DAT_18329bac0;
  _DAT_18329b9d0 = 0xdd3ffbaf;
  _DAT_18329ba00 = func_0x00018b464f10(_DAT_18329b998 ^ 0xff55003a9e0097d0);
  _DAT_18329b960 = (_DAT_18329b960 ^ _DAT_18329ba00) - 0x43ba8847 ^ 0x5b8642a4407d9fad;
  _DAT_18329ba80 = (_DAT_18329ba80 * -0x172947fc064cd773 ^ _DAT_18329b960) + _DAT_18329ba00;
  _DAT_18329bac0 = _DAT_18329ba80 ^ _DAT_18329b960;
  _DAT_18329bae8 = 0xbc4577b9;
  uVar5 = (~_DAT_18329ba78 + 0x43ba8848) *
          ((_DAT_18329b970 ^ 0x842223da) + (ulonglong)((uint)_DAT_18329b970 & 0x842223da) * 2);
  uVar5 = (uVar5 | _DAT_18329b900) + (uVar5 & _DAT_18329b900);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18329b9e0 = func_0x00018b464f10((uVar5 | 0xc798ab9d) + (ulonglong)((uint)uVar5 & 0xc798ab9d))
  ;
  uVar5 = (_DAT_18329b9e0 ^ 0x4376cdbe80) & 0xffffffffffffff80;
  _DAT_18329ba98 = _DAT_18329bad8 ^ uVar5;
  _DAT_18329bab0 = _DAT_18329ba98 ^ 0x43ba8946;
  _DAT_18329b918 = (_DAT_18329b918 ^ uVar5) + 0x43ba8946 ^ 0x4a904b6ff87c135f;
  _DAT_18329b968 = (_DAT_18329b968 * -0x50f9b5df7be331bd ^ _DAT_18329b918) + uVar5;
  _DAT_18329ba30 = _DAT_18329b968 ^ _DAT_18329b918;
  _DAT_18329ba68 = 0x43ba8946;
  uVar5 = (_DAT_18329b9c0 ^ _DAT_181b138a0) + _DAT_18329b9e0 + 0x84222325;
  uVar6 = (_DAT_18329b9e0 ^ _UNK_181b138a8) + _DAT_18329b9c0 + 0x6916353c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18329b9c0 ^ _DAT_181b138a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18329b9e0 ^ _UNK_181b138a8;
  _DAT_18329b9a0 =
       func_0x00018b464f10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18329b9c0 + 0x6916353c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18329b9e0 + 0x84222325));
  _DAT_18329b958 = (_DAT_18329b958 ^ _DAT_18329b9a0) - 0x6916353c ^ 0xcf6e1dfb92c652f;
  _DAT_18329ba28 = (_DAT_18329ba28 * -0x118e02f83871fbab ^ _DAT_18329b958) + _DAT_18329b9a0;
  _DAT_18329b900 = _DAT_18329ba28 ^ _DAT_18329b958;
  _DAT_18329b9b8 = 0x96e9cac4;
  uVar5 = (_DAT_18329ba08 ^ _DAT_181b138b0) + _DAT_18329b940 + 0x842223da;
  uVar6 = (_DAT_18329b940 ^ _UNK_181b138b8) + _DAT_18329ba08 + 0x6916353c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18329ba08 ^ _DAT_181b138b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18329b940 ^ _UNK_181b138b8;
  _DAT_18329ba18 =
       func_0x00018b464f10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18329ba08 + 0x6916353c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18329b940 + 0x842223da));
  uVar5 = (_DAT_18329ba18 ^ 0x691635ff) * -0x39ff84cfbc5a2d71;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar5 ^ 0xff;
  _DAT_18329b9a0 = _DAT_18329b910 ^ uVar5 ^ 0x6916363b;
  _DAT_18329ba50 = (_DAT_18329ba50 ^ uVar5) + 0x6916363b ^ 0xd535ec41ccb44ee;
  _DAT_18329baa8 = (_DAT_18329baa8 * -0x31c7f8e38b0b89f ^ _DAT_18329ba50) + uVar5;
  _DAT_18329b950 = _DAT_18329baa8 ^ _DAT_18329ba50;
  _DAT_18329bad0 = 0x6916363b;
  uVar5 = (_DAT_18329b948 ^ _DAT_181b138c0) + _DAT_18329ba00 + 0xdad2ccd8;
  uVar6 = (_DAT_18329ba00 ^ _UNK_181b138c8) + _DAT_18329b948 + 0x13190c74;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18329b948 ^ _DAT_181b138c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18329ba00 ^ _UNK_181b138c8;
  _DAT_18329b900 =
       func_0x00018b464f10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18329b948 + 0x13190c74) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18329ba00 + 0xdad2ccd8));
  uVar5 = (_DAT_18329b900 << 0x2c | _DAT_18329b900 >> 0x14) >> 0x2a |
          (_DAT_18329b900 >> 0x14) << 0x16;
  _DAT_18329ba58 = (_DAT_18329ba58 ^ uVar5) + 0x12100c74 ^ 0x7cf27e1601185395;
  _DAT_18329ba70 = (_DAT_18329ba70 * 0x704cc6bb55264b15 ^ _DAT_18329ba58) + uVar5;
  _DAT_18329ba48 = _DAT_18329ba70 ^ _DAT_18329ba58;
  _DAT_18329ba28 = 0x12100c74;
  uVar5 = (_DAT_18329ba30 ^ _DAT_181b138d0) + _DAT_18329ba68 + 0xc9cbc0ac;
  uVar6 = (_DAT_18329ba68 ^ _UNK_181b138d8) + _DAT_18329ba30 + 0x242018e8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18329ba30 ^ _DAT_181b138d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18329ba68 ^ _UNK_181b138d8;
  _DAT_18329ba00 =
       func_0x00018b464f10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18329ba30 + 0x242018e8) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18329ba68 + 0xc9cbc0ac));
  uVar5 = _DAT_18329ba00 & 0x7fffffffffffff;
  _DAT_18329b9c8 = _DAT_18329ba78 ^ uVar5 ^ 0x7209fc71;
  _DAT_18329bae0 = (_DAT_18329b968 ^ uVar5) + 0x7209fc71 ^ 0x5a00fff109a925d2;
  _DAT_18329baa8 = (_DAT_18329baa8 * -0x11ed89e3b14961b7 ^ _DAT_18329bae0) + uVar5;
  _DAT_18329bae0 = _DAT_18329baa8 ^ _DAT_18329bae0;
  _DAT_18329b968 = 0x7209fc71;
  _DAT_18329b9b0 = func_0x00018b464f10(_DAT_18329b9e0 ^ 0xffe3007c39ffe156);
  uVar5 = (ulonglong)(~((int)_DAT_18329b9b0 * 0x281b0843) & 0xff);
  _DAT_18329b938 = _DAT_18329baf0 ^ uVar5 ^ 0xff;
  _DAT_18329b940 = (_DAT_18329b940 ^ uVar5) + 0xff ^ 0x22b62c780f43ca5;
  _DAT_18329b9c8 = (_DAT_18329b9c8 * 0x3a0ab179fc872979 ^ _DAT_18329b940) + uVar5;
  _DAT_18329b988 = _DAT_18329b9c8 ^ _DAT_18329b940;
  _DAT_18329b998 = 0xff;
  uVar5 = (~_DAT_18329ba48 + 0xa10f1003) *
          ((_DAT_18329ba90 ^ 0xdad2ccd8) + (ulonglong)((uint)_DAT_18329ba90 & 0xdad2ccd8) * 2);
  uVar5 = (uVar5 | _DAT_18329b9a0) + (uVar5 & _DAT_18329b9a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18329b9d8 = func_0x00018b464f10((uVar5 | 0x7bdddcda) + (ulonglong)((uint)uVar5 & 0x7bdddcda))
  ;
  _DAT_18329b938 = _DAT_18329b938 ^ _DAT_18329b9d8 ^ 0x3bbb1cfba7444007 ^ 0x502214cbe72cdc7;
  _DAT_18329b990 =
       (_DAT_18329b990 * -0x6ea4fac59b766ac5 ^ _DAT_18329b938) +
       (_DAT_18329b9d8 ^ 0x3bbb1cfba7444007);
  _DAT_18329ba00 = _DAT_18329b990 ^ _DAT_18329b938;
  _DAT_18329b9a0 = 0;
  _DAT_18329b988 = func_0x00018b464f10(_DAT_18329ba78 + 0x1cff7b260021ff ^ 0xbe);
  uVar5 = _DAT_18329b988 * -0x7fac747c34ad923f;
  _DAT_18329bad0 = _DAT_18329bad0 ^ uVar5 ^ 0xff;
  _DAT_18329b908 = (_DAT_18329b908 ^ uVar5) + 0xff ^ 0x443c87d10f5afc3a;
  _DAT_18329ba90 = (_DAT_18329ba90 * 0x6baf5f8749fafdeb ^ _DAT_18329b908) + uVar5;
  _DAT_18329baf0 = _DAT_18329ba90 ^ _DAT_18329b908;
  _DAT_18329b948 = 0xff;
  uVar5 = (_DAT_18329bab0 ^ _DAT_181b138e0) + _DAT_18329ba70 + 0xda62cc49;
  uVar6 = (_DAT_18329ba70 ^ _UNK_181b138e8) + _DAT_18329bab0 + 0x5e40ef6c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18329bab0 ^ _DAT_181b138e0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18329ba70 ^ _UNK_181b138e8;
  _DAT_18329b9f8 =
       func_0x00018b464f10((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18329bab0 + 0x5e40ef6c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18329ba70 + 0xda62cc49));
  uVar5 = (_DAT_18329b9f8 ^ 0x5e40ef6c) & 0x7fffffffffffffff;
  _DAT_18329b9f0 = _DAT_18329b9f0 ^ uVar5 ^ 0xae95e69499e126d0;
  _DAT_18329ba38 = (_DAT_18329ba38 * -0x3b26add3defe23d3 ^ _DAT_18329b9f0) + uVar5;
  _DAT_18329b960 = _DAT_18329ba38 ^ _DAT_18329b9f0;
  _DAT_18329ba50 = 0;
  uVar5 = (_DAT_18329b9b8 ^ 0x842223da) + _DAT_18329ba48 + 0x842223da;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_18329b9b8 ^ 0x842223da;
  uVar6 = ((_DAT_18329ba48 + _DAT_18329b9b8) * 0x2000 | _DAT_18329ba48 + _DAT_18329b9b8 >> 0x33) ^
          _DAT_18329ba48;
  _DAT_18329b9d0 =
       func_0x00018b464f10((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_18329b9b8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_18329ba48 + 0x842223da));
  _DAT_18329b988 =
       (_DAT_18329b988 ^ _DAT_18329b9d0 * 0x5962cfc896927dd5) + 0xff ^ 0x2a3e937498511314;
  _DAT_18329b9a0 =
       (_DAT_18329b9a0 * 0x7d5ede99e9596e11 ^ _DAT_18329b988) + _DAT_18329b9d0 * 0x5962cfc896927dd5;
  _DAT_18329baa0 = _DAT_18329b9a0 ^ _DAT_18329b988;
  _DAT_18329bae0 = 0xff;
  uVar5 = (~_DAT_18329ba48 + 0x100) *
          ((uVar4 ^ 0x84222325 ^ _DAT_18329b908) +
          (ulonglong)((uint)_DAT_18329b908 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | _DAT_18329bac0) + (uVar5 & _DAT_18329bac0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18329b9e0 =
       func_0x00018b464f10((uVar4 ^ 0x842223da | uVar5) +
                           (ulonglong)((uint)(uVar4 ^ 0x842223da) & (uint)uVar5));
  uVar4 = uVar4 & 0xff;
  _DAT_18329b970 = (_DAT_18329b970 ^ _DAT_18329b9e0) + uVar4 ^ 0x45ead8e84e566a8f;
  _DAT_18329bac8 = (_DAT_18329bac8 * 0x7bc70e89c3d8241 ^ _DAT_18329b970) + _DAT_18329b9e0;
  _DAT_18329bab8 = _DAT_18329bac8 ^ _DAT_18329b970;
  _DAT_18329b968 = _DAT_18329b9e8 ^ uVar4;
  uVar6 = _iStack0000000000000058 ^ 0x84222325;
  uVar5 = ((_DAT_18329ba78 ^ uVar6) + (uVar6 & _DAT_18329ba78) * 2) * (uVar4 - _DAT_18329bab8);
  uVar5 = (uVar5 | _DAT_18329ba10) + (uVar5 & _DAT_18329ba10);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_18329b9d0 = uVar4;
  _DAT_18329ba78 = func_0x00018b464f10((uVar6 ^ uVar4 | uVar5) + (uVar5 & (uVar6 ^ uVar4)));
  uVar5 = _DAT_18329ba78 << 0x39 | _DAT_18329ba78 >> 7;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar5;
  _iStack0000000000000058 = _iStack0000000000000058 | uVar4;
  _DAT_18329ba48 = (_DAT_18329ba48 ^ uVar5) + _iStack0000000000000058 ^ 0x87630839818643c0;
  _DAT_18329bad0 = (_DAT_18329bad0 * 0x5681bcd4e7b32847 ^ _DAT_18329ba48) + uVar5;
  _DAT_18329b9b0 = _DAT_18329bad0 ^ _DAT_18329ba48;
  uVar2 = unaff_RBX[1];
  _DAT_18329b9a0 = _iStack0000000000000058;
  *unaff_R14 = *unaff_RBX;
  unaff_R14[1] = uVar2;
  switch(iStack0000000000000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b464690 (image 18b464690) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b464690(void)

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



// ===== continuation @ rva b44c257 (image 18b44c257) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b44c26e */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b44c257(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b44e11a (image 18b44e11a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018b44e16e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18b44e11a(void)

{
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva b46423e (image 18b46423e) =====

void thunk_FUN_18b44e07d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  return;
}



// ===== continuation @ rva b464bfe (image 18b464bfe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b464bfe(void)

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



// ===== continuation @ rva b407a6a (image 18b407a6a) =====

void FUN_18b407a6a(void)

{
  return;
}



// ===== continuation @ rva b402e8d (image 18b402e8d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b402e8d(void)

{
  FUN_190ddce00();
  (*_DAT_181afdb48)();
  return;
}



// ===== continuation @ rva b40b2fe (image 18b40b2fe) =====

void FUN_18b40b2fe(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b4098d9 (image 18b4098d9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4098d9(void)

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



// ===== continuation @ rva b409f32 (image 18b409f32) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b409f32(void)

{
  FUN_190dd72e0();
  (*_DAT_181afd118)();
  return;
}



// ===== continuation @ rva b40b2c9 (image 18b40b2c9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40b2c9(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181aff058)();
  return;
}



// ===== continuation @ rva b4076ab (image 18b4076ab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4076ab(void)

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



// ===== continuation @ rva b409658 (image 18b409658) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b409658(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181afef08)();
  return;
}



// ===== continuation @ rva b406153 (image 18b406153) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b406153(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0xc0))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b408539 (image 18b408539) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b408539(void)

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



// ===== continuation @ rva b406347 (image 18b406347) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b406347(void)

{
  FUN_190ddfc90();
  (*_DAT_181afd918)();
  return;
}



// ===== continuation @ rva b40ade3 (image 18b40ade3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40ade3(void)

{
  (*_DAT_181aff1b8)();
  return;
}



// ===== continuation @ rva b40f1d7 (image 18b40f1d7) =====

void FUN_18b40f1d7(void)

{
  return;
}



// ===== continuation @ rva b40b514 (image 18b40b514) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40b514(void)

{
  FUN_190ddce00();
  (*_DAT_181affe88)();
  return;
}



// ===== continuation @ rva b40f108 (image 18b40f108) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40f108(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181b00588)();
  return;
}



// ===== continuation @ rva b40e18f (image 18b40e18f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40e18f(void)

{
  FUN_190dd72e0();
  (*_DAT_181b00268)();
  return;
}



// ===== continuation @ rva b40e073 (image 18b40e073) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40e073(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181b00498)();
  return;
}



// ===== continuation @ rva b40f14d (image 18b40f14d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b40f14d(void)

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



// ===== continuation @ rva b40e8a4 (image 18b40e8a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40e8a4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b000c8)();
  return;
}



// ===== continuation @ rva b40e425 (image 18b40e425) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b40e425(void)

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



// ===== continuation @ rva b40b58c (image 18b40b58c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40b58c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_181b005e8)();
  return;
}



// ===== continuation @ rva b40f243 (image 18b40f243) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b40f243(double param_1)

{
  double unaff_XMM6_Qa;
  
  switch(param_1 < unaff_XMM6_Qa) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b40e303 (image 18b40e303) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b40e303(void)

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



// ===== continuation @ rva b417088 (image 18b417088) =====

void FUN_18b417088(void)

{
  return;
}



// ===== continuation @ rva b40f4c8 (image 18b40f4c8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40f4c8(void)

{
  FUN_190ddce00();
  (*_DAT_181b01d38)();
  return;
}



// ===== continuation @ rva b417b04 (image 18b417b04) =====

void FUN_18b417b04(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b4179b8 (image 18b4179b8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4179b8(void)

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



// ===== continuation @ rva b417af3 (image 18b417af3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b417af3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181b01908)();
  return;
}



// ===== continuation @ rva b4167cc (image 18b4167cc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4167cc(void)

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



// ===== continuation @ rva b417517 (image 18b417517) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b417517(void)

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



// ===== continuation @ rva b4124f9 (image 18b4124f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4124f9(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b012b8)();
  return;
}



// ===== continuation @ rva b4120e5 (image 18b4120e5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4120e5(void)

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



// ===== continuation @ rva b417416 (image 18b417416) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b417416(void)

{
  (*_DAT_181b020f8)();
  return;
}



// ===== continuation @ rva b416832 (image 18b416832) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b416832(void)

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



// ===== continuation @ rva b415bd6 (image 18b415bd6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b415bd6(void)

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



// ===== continuation @ rva b4209e2 (image 18b4209e2) =====

void FUN_18b4209e2(void)

{
  return;
}



// ===== continuation @ rva b41c591 (image 18b41c591) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b41c591(void)

{
  FUN_190ddce00();
  (*_DAT_181b05ee8)();
  return;
}



// ===== continuation @ rva b426a88 (image 18b426a88) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b426a88(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181b04e58)();
  return;
}



// ===== continuation @ rva b4246f2 (image 18b4246f2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4246f2(void)

{
  undefined8 in_stack_00000038;
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x560))(in_stack_00000040,2,in_stack_00000038,0);
  (*_DAT_181b05958)();
  return;
}



// ===== continuation @ rva b428140 (image 18b428140) =====

void FUN_18b428140(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b424b0d (image 18b424b0d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b424b0d(void)

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



// ===== continuation @ rva b420b0c (image 18b420b0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b420b0c(void)

{
  (*_DAT_181b068f8)();
  return;
}



// ===== continuation @ rva b427a63 (image 18b427a63) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b427a63(void)

{
  (*_DAT_181b066e8)();
  return;
}



// ===== continuation @ rva b426f27 (image 18b426f27) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b426f27(void)

{
  char cVar1;
  longlong *in_stack_00000040;
  
  cVar1 = (**(code **)(*in_stack_00000040 + 0x100))(in_stack_00000040);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b425055 (image 18b425055) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b425055(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181b06888)();
  return;
}



// ===== continuation @ rva b4210b1 (image 18b4210b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4210b1(void)

{
  undefined8 in_stack_00000038;
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x70))(in_stack_00000040,in_stack_00000038,&UNK_182f702a8);
  (*_DAT_181b06738)();
  return;
}



// ===== continuation @ rva b4209b4 (image 18b4209b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4209b4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181b06108)();
  return;
}



// ===== continuation @ rva b4265fe (image 18b4265fe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4265fe(void)

{
  (*_DAT_181b066e8)();
  return;
}



// ===== continuation @ rva b42651c (image 18b42651c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b42651c(void)

{
  char cVar1;
  longlong *in_stack_00000040;
  
  cVar1 = (**(code **)(*in_stack_00000040 + 0x100))(in_stack_00000040);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b42845d (image 18b42845d) =====

void FUN_18b42845d(void)

{
  return;
}



// ===== continuation @ rva b4282ef (image 18b4282ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4282ef(void)

{
  FUN_190ddfc90();
  (*_DAT_181b08378)();
  return;
}



// ===== continuation @ rva b428467 (image 18b428467) =====

void FUN_18b428467(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b428412 (image 18b428412) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b428412(void)

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



// ===== continuation @ rva b4283ae (image 18b4283ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4283ae(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184194800();
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



// ===== continuation @ rva b42835c (image 18b42835c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b42835c(void)

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



// ===== continuation @ rva b4283df (image 18b4283df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4283df(void)

{
  FUN_190dd9df0();
  (*_DAT_181b08338)();
  return;
}



// ===== continuation @ rva b428395 (image 18b428395) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b428395(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181b083a8)();
  return;
}



// ===== continuation @ rva b428322 (image 18b428322) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b428322(void)

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



// ===== continuation @ rva b428346 (image 18b428346) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b428346(void)

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



// ===== continuation @ rva b428436 (image 18b428436) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b428436(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x368))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181b083a8)();
  return;
}



// ===== continuation @ rva b42f6ab (image 18b42f6ab) =====

void FUN_18b42f6ab(void)

{
  return;
}



// ===== continuation @ rva b428616 (image 18b428616) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b428616(void)

{
  FUN_190ddce00();
  (*_DAT_181b08c88)();
  return;
}



// ===== continuation @ rva b432aff (image 18b432aff) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b432aff(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(*in_stack_00000038 + 0x78))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181b09df8)();
  return;
}



// ===== continuation @ rva b4322af (image 18b4322af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4322af(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  (**(code **)(*in_stack_00000038 + 0x488))(in_stack_00000038,in_stack_00000040);
  (*_DAT_181b09c48)();
  return;
}



// ===== continuation @ rva b434174 (image 18b434174) =====

void FUN_18b434174(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b42eb9c (image 18b42eb9c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b42eb9c(void)

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



// ===== continuation @ rva b4309db (image 18b4309db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4309db(void)

{
  (*_DAT_181b0abb8)();
  return;
}



// ===== continuation @ rva b430870 (image 18b430870) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b430870(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b42fcf5 (image 18b42fcf5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b42fcf5(void)

{
  (*_DAT_181b0abb8)();
  return;
}



// ===== continuation @ rva b42fc13 (image 18b42fc13) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b42fc13(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b432600 (image 18b432600) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b432600(void)

{
  (*_DAT_181b09e18)();
  return;
}



// ===== continuation @ rva b43018e (image 18b43018e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b43018e(void)

{
  (*_DAT_181b0a978)();
  return;
}



// ===== continuation @ rva b4300ac (image 18b4300ac) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4300ac(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b431a0c (image 18b431a0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b431a0c(void)

{
  (*_DAT_181b0a978)();
  return;
}



// ===== continuation @ rva b4312c0 (image 18b4312c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4312c0(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  
  cVar1 = (**(code **)(*in_stack_00000038 + 0x100))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b434366 (image 18b434366) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b434366(void)

{
  FUN_190dd72e0();
  (*_DAT_181b0bb98)();
  return;
}



// ===== continuation @ rva b4342f3 (image 18b4342f3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4342f3(void)

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



// ===== continuation @ rva b434430 (image 18b434430) =====

void FUN_18b434430(void)

{
  return;
}



// ===== continuation @ rva b434406 (image 18b434406) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b434406(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x368))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181b0bbc8)();
  return;
}



// ===== continuation @ rva b434438 (image 18b434438) =====

void FUN_18b434438(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b43438e (image 18b43438e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b43438e(void)

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



// ===== continuation @ rva b434351 (image 18b434351) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b434351(void)

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



// ===== continuation @ rva b4343af (image 18b4343af) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4343af(void)

{
  FUN_190dd9df0();
  (*_DAT_181b0bbf8)();
  return;
}



// ===== continuation @ rva b43432c (image 18b43432c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b43432c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181b0bba8)();
  return;
}



// ===== continuation @ rva b434561 (image 18b434561) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b434561(void)

{
  FUN_190dd72e0();
  (*_DAT_181b0bd88)();
  return;
}



// ===== continuation @ rva b4344ee (image 18b4344ee) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4344ee(void)

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



// ===== continuation @ rva b434cff (image 18b434cff) =====

void FUN_18b434cff(void)

{
  return;
}



// ===== continuation @ rva b434cc6 (image 18b434cc6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b434cc6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181b0be18)();
  return;
}



// ===== continuation @ rva b434c77 (image 18b434c77) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b434c77(void)

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



// ===== continuation @ rva b434601 (image 18b434601) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b434601(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181b0bcc8)();
  return;
}



// ===== continuation @ rva b434d09 (image 18b434d09) =====

void FUN_18b434d09(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b434b23 (image 18b434b23) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b434b23(void)

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



// ===== continuation @ rva b434af3 (image 18b434af3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b434af3(void)

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



// ===== continuation @ rva b434793 (image 18b434793) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b434793(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181b0bd38)();
  return;
}



// ===== continuation @ rva b435491 (image 18b435491) =====

void FUN_18b435491(void)

{
  return;
}



// ===== continuation @ rva b434e17 (image 18b434e17) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b434e17(void)

{
  FUN_190ddce00();
  (*_DAT_181b0c188)();
  return;
}



// ===== continuation @ rva b4352de (image 18b4352de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4352de(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b43540f (image 18b43540f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b43540f(void)

{
  (*_DAT_181b0c1a8)();
  return;
}



// ===== continuation @ rva b435121 (image 18b435121) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b435121(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b0c208)();
  return;
}



// ===== continuation @ rva b434ff6 (image 18b434ff6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b434ff6(void)

{
  FUN_190ddfc90();
  (*_DAT_181b0c128)();
  return;
}



// ===== continuation @ rva b434e8f (image 18b434e8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b434e8f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x4b8))();
  (*_DAT_181b0c158)();
  return;
}



// ===== continuation @ rva b435480 (image 18b435480) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b435480(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181b0c168)();
  return;
}



// ===== continuation @ rva b434ef2 (image 18b434ef2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b434ef2(void)

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



// ===== continuation @ rva b435299 (image 18b435299) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b435299(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181b0c0f8)();
  return;
}



// ===== continuation @ rva b435475 (image 18b435475) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b435475(void)

{
  (*_DAT_181b0c1a8)();
  return;
}



// ===== continuation @ rva b4356bd (image 18b4356bd) =====

void FUN_18b4356bd(void)

{
  return;
}



// ===== continuation @ rva b4355ac (image 18b4355ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4355ac(void)

{
  FUN_190ddfc90();
  (*_DAT_181b0c388)();
  return;
}



// ===== continuation @ rva b4356c5 (image 18b4356c5) =====

void FUN_18b4356c5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b435652 (image 18b435652) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b435652(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181b0c358)();
  return;
}



// ===== continuation @ rva b435691 (image 18b435691) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b435691(void)

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



// ===== continuation @ rva b4355df (image 18b4355df) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4355df(void)

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



// ===== continuation @ rva b43566d (image 18b43566d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b43566d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x138))();
  (*_DAT_181b0c378)();
  return;
}



// ===== continuation @ rva b435619 (image 18b435619) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b435619(void)

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



// ===== continuation @ rva b435603 (image 18b435603) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b435603(void)

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



// ===== continuation @ rva b4356b2 (image 18b4356b2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4356b2(void)

{
  (*_DAT_181b0c358)();
  return;
}



// ===== continuation @ rva b438058 (image 18b438058) =====

void FUN_18b438058(void)

{
  return;
}



// ===== continuation @ rva b437ebc (image 18b437ebc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b437ebc(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_R14 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b43aec1 (image 18b43aec1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b43aec1(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b43a6a9 (image 18b43a6a9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b43a6a9(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b439b68 (image 18b439b68) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18b43cb71(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x88))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b43caba (image 18b43caba) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b43caba(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b43c873 (image 18b43c873) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b43c873(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000030);
  uVar2 = (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b43b6ea (image 18b43b6ea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b43b6ea(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b43b443 (image 18b43b443) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b43b443(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b43afb1 (image 18b43afb1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b43afb1(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b43ac42 (image 18b43ac42) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b43ac42(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190ddfc90(in_stack_00000030,&stack0x00000070,*_DAT_18301ee50 + 0xd69,*_DAT_18301ee50 + 0xd6d,
                0x41);
  cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b440fb2 (image 18b440fb2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b440fb2(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b440f5e (image 18b440f5e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b440f5e(void)

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



// ===== continuation @ rva b441e25 (image 18b441e25) =====

void FUN_18b441e25(void)

{
  return;
}



// ===== continuation @ rva b4410a1 (image 18b4410a1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4410a1(void)

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



// ===== continuation @ rva b441e34 (image 18b441e34) =====

void FUN_18b441e34(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b441461 (image 18b441461) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b441461(void)

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



// ===== continuation @ rva b441df1 (image 18b441df1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b441df1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181b0e788)();
  return;
}



// ===== continuation @ rva b441643 (image 18b441643) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b441643(void)

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



// ===== continuation @ rva b4416fb (image 18b4416fb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4416fb(void)

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



// ===== continuation @ rva b441967 (image 18b441967) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b441967(void)

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



// ===== continuation @ rva b4417cc (image 18b4417cc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4417cc(void)

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



// ===== continuation @ rva b441194 (image 18b441194) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b441194(void)

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



// ===== continuation @ rva b44b036 (image 18b44b036) =====

void FUN_18b44b036(void)

{
  return;
}



// ===== continuation @ rva b44909c (image 18b44909c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b44909c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181b11048)();
  return;
}



// ===== continuation @ rva b44bbda (image 18b44bbda) =====

void FUN_18b44bbda(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b449da5 (image 18b449da5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b449da5(void)

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



// ===== continuation @ rva b44950b (image 18b44950b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b44950b(void)

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



// ===== continuation @ rva b44a4ab (image 18b44a4ab) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b44a4ab(void)

{
  longlong *unaff_RSI;
  longlong in_stack_00000060;
  
  (**(code **)(*unaff_RSI + 0x518))();
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b44ba6e (image 18b44ba6e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b44ba6e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b11ce8)();
  return;
}



// ===== continuation @ rva b44b610 (image 18b44b610) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b44b610(void)

{
  longlong in_stack_00000050;
  
  switch(in_stack_00000050 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b44a5b1 (image 18b44a5b1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b44a5b1(void)

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



// ===== continuation @ rva b449be7 (image 18b449be7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b449be7(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b10f38)();
  return;
}



// ===== continuation @ rva b4494ce (image 18b4494ce) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4494ce(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_181b10e08)();
  return;
}



// ===== continuation @ rva b449952 (image 18b449952) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b449952(void)

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



// ===== continuation @ rva b3a63f2 (image 18b3a63f2) =====

void FUN_18b3a63f2(void)

{
  return;
}



// ===== continuation @ rva b3a628d (image 18b3a628d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3a628d(void)

{
  FUN_190ddfc90();
  (*_DAT_181adfad8)();
  return;
}



// ===== continuation @ rva b3a63fa (image 18b3a63fa) =====

void FUN_18b3a63fa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3a62e4 (image 18b3a62e4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3a62e4(void)

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



// ===== continuation @ rva b3a634c (image 18b3a634c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3a634c(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1841196f0();
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



// ===== continuation @ rva b3a62fa (image 18b3a62fa) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3a62fa(void)

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



// ===== continuation @ rva b3a63ae (image 18b3a63ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3a63ae(void)

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



// ===== continuation @ rva b3a6333 (image 18b3a6333) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3a6333(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181adfa98)();
  return;
}



// ===== continuation @ rva b3a62c0 (image 18b3a62c0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3a62c0(void)

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



// ===== continuation @ rva b3d4e36 (image 18b3d4e36) =====

void FUN_18b3d4e36(void)

{
  return;
}



// ===== continuation @ rva b3ce2ed (image 18b3ce2ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ce2ed(void)

{
  FUN_190ddce00();
  (*_DAT_181aec7d8)();
  return;
}



// ===== continuation @ rva b3d3c21 (image 18b3d3c21) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d3c21(void)

{
  (*_DAT_181aed468)();
  return;
}



// ===== continuation @ rva b3d3af0 (image 18b3d3af0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3d3af0(void)

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



// ===== continuation @ rva b3d35f3 (image 18b3d35f3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d35f3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181aed088)();
  return;
}



// ===== continuation @ rva b3d2334 (image 18b3d2334) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d2334(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_181aed538)();
  return;
}



// ===== continuation @ rva b3d388d (image 18b3d388d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d388d(void)

{
  (*_DAT_181aed468)();
  return;
}



// ===== continuation @ rva b3d374e (image 18b3d374e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3d374e(void)

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



// ===== continuation @ rva b3d3316 (image 18b3d3316) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d3316(void)

{
  (*_DAT_181aed988)();
  return;
}



// ===== continuation @ rva b3d3471 (image 18b3d3471) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d3471(void)

{
  (*_DAT_181aece68)();
  return;
}



// ===== continuation @ rva b3d5120 (image 18b3d5120) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d5120(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181aed2c8)();
  return;
}



// ===== continuation @ rva b3d3d5b (image 18b3d3d5b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3d3d5b(void)

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



// ===== continuation @ rva b3d2714 (image 18b3d2714) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3d2714(void)

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



// ===== continuation @ rva b41b101 (image 18b41b101) =====

void FUN_18b41b101(void)

{
  return;
}



// ===== continuation @ rva b417cf4 (image 18b417cf4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b417cf4(void)

{
  FUN_190ddce00();
  (*_DAT_181b03728)();
  return;
}



// ===== continuation @ rva b41c37e (image 18b41c37e) =====

void FUN_18b41c37e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b41be12 (image 18b41be12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b41be12(void)

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



// ===== continuation @ rva b41bc02 (image 18b41bc02) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b41bc02(void)

{
  (*_DAT_181b040c8)();
  return;
}



// ===== continuation @ rva b41bb34 (image 18b41bb34) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b41bb34(void)

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



// ===== continuation @ rva b417d4b (image 18b417d4b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b417d4b(void)

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



// ===== continuation @ rva b41bb68 (image 18b41bb68) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b41bb68(void)

{
  (*_DAT_181b03af8)();
  return;
}



// ===== continuation @ rva b41ba8f (image 18b41ba8f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b41ba8f(void)

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



// ===== continuation @ rva b41bace (image 18b41bace) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b41bace(void)

{
  (*_DAT_181b040c8)();
  return;
}



// ===== continuation @ rva b41b9f5 (image 18b41b9f5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b41b9f5(void)

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



// ===== continuation @ rva b41bbf7 (image 18b41bbf7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b41bbf7(void)

{
  (*_DAT_181b03ed8)();
  return;
}



// ===== continuation @ rva b41b98f (image 18b41b98f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b41b98f(void)

{
  (*_DAT_181b03f78)();
  return;
}



// ===== continuation @ rva b41b83d (image 18b41b83d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b41b83d(void)

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



// ===== continuation @ rva b446aa5 (image 18b446aa5) =====

void FUN_18b446aa5(void)

{
  return;
}



// ===== continuation @ rva b441ff0 (image 18b441ff0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b441ff0(void)

{
  FUN_190ddce00();
  (*_DAT_181b0fe08)();
  return;
}



// ===== continuation @ rva b448eb3 (image 18b448eb3) =====

void FUN_18b448eb3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b447ea3 (image 18b447ea3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b447ea3(void)

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



// ===== continuation @ rva b445888 (image 18b445888) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b445888(void)

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



// ===== continuation @ rva b447abb (image 18b447abb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b447abb(void)

{
  (*_DAT_181b0fe78)();
  return;
}



// ===== continuation @ rva b4483be (image 18b4483be) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4483be(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181b0f588)();
  return;
}



// ===== continuation @ rva b448219 (image 18b448219) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b448219(void)

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



// ===== continuation @ rva b448ea2 (image 18b448ea2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b448ea2(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_181b0fd58)();
  return;
}



// ===== continuation @ rva b4489d9 (image 18b4489d9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4489d9(void)

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



// ===== continuation @ rva b447500 (image 18b447500) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b447500(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181b0fc08)();
  return;
}



// ===== continuation @ rva b446412 (image 18b446412) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b446412(void)

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



// ===== continuation @ rva b446bb0 (image 18b446bb0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b446bb0(void)

{
  char cVar1;
  longlong *unaff_RBX;
  
  cVar1 = (**(code **)(*unaff_RBX + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b46fd99 (image 18b46fd99) =====

void FUN_18b46fd99(void)

{
  return;
}



// ===== continuation @ rva b46508e (image 18b46508e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b46508e(void)

{
  FUN_190ddce00();
  (*_DAT_181b15e28)();
  return;
}



// ===== continuation @ rva b474330 (image 18b474330) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b474330(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b15cb8)();
  return;
}



// ===== continuation @ rva b47398e (image 18b47398e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b47398e(void)

{
  FUN_190ddfc90();
  (*_DAT_181b15da8)();
  return;
}



// ===== continuation @ rva b4748e2 (image 18b4748e2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4748e2(void)

{
  (*_DAT_181b16e28)();
  return;
}



// ===== continuation @ rva b473ff5 (image 18b473ff5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b473ff5(void)

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



// ===== continuation @ rva b46dc7c (image 18b46dc7c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b46dc7c(void)

{
  (*_DAT_181b17418)();
  return;
}



// ===== continuation @ rva b46f7d2 (image 18b46f7d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b46f7d2(void)

{
  (*_DAT_181b16fc8)();
  return;
}



// ===== continuation @ rva b46ee83 (image 18b46ee83) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b46ee83(void)

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



// ===== continuation @ rva b4752f2 (image 18b4752f2) =====

void FUN_18b4752f2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b46fb10 (image 18b46fb10) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b46fb10(void)

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



// ===== continuation @ rva b46fa44 (image 18b46fa44) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b46fa44(void)

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



// ===== continuation @ rva b471508 (image 18b471508) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b471508(void)

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



// ===== continuation @ rva b47a5e4 (image 18b47a5e4) =====

void FUN_18b47a5e4(void)

{
  return;
}



// ===== continuation @ rva b47555d (image 18b47555d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b47555d(void)

{
  FUN_190ddce00();
  (*_DAT_181b1aea8)();
  return;
}



// ===== continuation @ rva b47901a (image 18b47901a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b47901a(void)

{
  FUN_190dd72e0();
  (*_DAT_181b19a08)();
  return;
}



// ===== continuation @ rva b478f9d (image 18b478f9d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b478f9d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181b19d58)();
  return;
}



// ===== continuation @ rva b47e9ad (image 18b47e9ad) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b47e9ad(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b1ac38)();
  return;
}



// ===== continuation @ rva b47a070 (image 18b47a070) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b47a070(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b19ec8)();
  return;
}



// ===== continuation @ rva b47a7b1 (image 18b47a7b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b47a7b1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181b1add8)();
  return;
}



// ===== continuation @ rva b47a24c (image 18b47a24c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b47a24c(void)

{
  (*_DAT_181b1ab68)();
  return;
}



// ===== continuation @ rva b47acd1 (image 18b47acd1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b47acd1(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b1af28)();
  return;
}



// ===== continuation @ rva b479c6d (image 18b479c6d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b479c6d(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_181b19b98)();
  return;
}



// ===== continuation @ rva b47ded0 (image 18b47ded0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b47ded0(void)

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



// ===== continuation @ rva b4795bd (image 18b4795bd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4795bd(void)

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



// ===== continuation @ rva b48233e (image 18b48233e) =====

void FUN_18b48233e(void)

{
  return;
}



// ===== continuation @ rva b47eda4 (image 18b47eda4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b47eda4(void)

{
  FUN_190ddce00();
  (*_DAT_181b1c778)();
  return;
}



// ===== continuation @ rva b482308 (image 18b482308) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b482308(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181b1c8e8)();
  return;
}



// ===== continuation @ rva b4824e6 (image 18b4824e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4824e6(void)

{
  (*_DAT_181b1cac8)();
  return;
}



// ===== continuation @ rva b482165 (image 18b482165) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b482165(void)

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



// ===== continuation @ rva b48154d (image 18b48154d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b48154d(void)

{
  (*_DAT_181b1cc38)();
  return;
}



// ===== continuation @ rva b4824f1 (image 18b4824f1) =====

void FUN_18b4824f1(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b48128a (image 18b48128a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b48128a(void)

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



// ===== continuation @ rva b4824db (image 18b4824db) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4824db(void)

{
  (*_DAT_181b1cb58)();
  return;
}



// ===== continuation @ rva b482470 (image 18b482470) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b482470(void)

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



// ===== continuation @ rva b481e62 (image 18b481e62) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b481e62(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b1cc48)();
  return;
}



// ===== continuation @ rva b48130b (image 18b48130b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b48130b(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_181b1ca28)();
  return;
}



// ===== continuation @ rva b481cf8 (image 18b481cf8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b481cf8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181b1cc08)();
  return;
}



// ===== continuation @ rva b481b04 (image 18b481b04) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b481b04(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181b1c5e8)();
  return;
}



// ===== continuation @ rva b4863cd (image 18b4863cd) =====

void FUN_18b4863cd(void)

{
  return;
}



// ===== continuation @ rva b4826e4 (image 18b4826e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4826e4(void)

{
  FUN_190ddce00();
  (*_DAT_181b1df78)();
  return;
}



// ===== continuation @ rva b487468 (image 18b487468) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b487468(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000040;
  
  uStack0000000000000040 = param_2;
  FUN_190dd72e0();
  (*_DAT_181b1dc78)();
  return;
}



// ===== continuation @ rva b487e2e (image 18b487e2e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b487e2e(void)

{
  FUN_190dd9df0();
  (*_DAT_181b1d948)();
  return;
}



// ===== continuation @ rva b4880f6 (image 18b4880f6) =====

void FUN_18b4880f6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b4871d2 (image 18b4871d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4871d2(void)

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



// ===== continuation @ rva b486c4e (image 18b486c4e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b486c4e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181b1e408)();
  return;
}



// ===== continuation @ rva b486aca (image 18b486aca) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b486aca(void)

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



// ===== continuation @ rva b487c0d (image 18b487c0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b487c0d(void)

{
  (*_DAT_181b1e468)();
  return;
}



// ===== continuation @ rva b487eb6 (image 18b487eb6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b487eb6(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181b1d898)();
  return;
}



// ===== continuation @ rva b4864fd (image 18b4864fd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4864fd(void)

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



// ===== continuation @ rva b48c7ab (image 18b48c7ab) =====

void FUN_18b48c7ab(void)

{
  return;
}



// ===== continuation @ rva b4882ee (image 18b4882ee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b4882ee(void)

{
  FUN_190ddce00();
  (*_DAT_181b201d8)();
  return;
}



// ===== continuation @ rva b492ef9 (image 18b492ef9) =====

void FUN_18b492ef9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b48e3e2 (image 18b48e3e2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b48e3e2(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b48b916 (image 18b48b916) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b48b916(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(*unaff_RBP + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b48d0bc (image 18b48d0bc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b48d0bc(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b492ee9 (image 18b492ee9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b492ee9(void)

{
  longlong *unaff_RBP;
  
  (**(code **)(*unaff_RBP + 0x68))();
  (*_DAT_181b21da8)();
  return;
}



// ===== continuation @ rva b48d18d (image 18b48d18d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b48d18d(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(*unaff_RBP + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b48f641 (image 18b48f641) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b48f641(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(*unaff_RBP + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b492909 (image 18b492909) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b492909(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(*unaff_RBP + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b490ad5 (image 18b490ad5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b490ad5(void)

{
  char cVar1;
  longlong *unaff_RBP;
  
  cVar1 = (**(code **)(*unaff_RBP + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b3b2df7 (image 18b3b2df7) =====

void FUN_18b3b2df7(void)

{
  return;
}



// ===== continuation @ rva b3a65a9 (image 18b3a65a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3a65a9(void)

{
  FUN_190ddce00();
  (*_DAT_181ae1488)();
  return;
}



// ===== continuation @ rva b3b2def (image 18b3b2def) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b2def(void)

{
  (*_DAT_181ae2878)();
  return;
}



// ===== continuation @ rva b3b2dd4 (image 18b3b2dd4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b2dd4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  if (cVar1 == '\0') {
    (*_DAT_181ae2878)();
    return;
  }
  (*_DAT_181ae2878)();
  return;
}



// ===== continuation @ rva b3b2dab (image 18b3b2dab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b2dab(undefined8 param_1,undefined8 param_2)

{
  undefined8 in_stack_00000038;
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x2e8))(in_stack_00000040,param_2,in_stack_00000038);
  (*_DAT_181adfb78)();
  return;
}



// ===== continuation @ rva b3ab2f2 (image 18b3ab2f2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3ab2f2(void)

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



// ===== continuation @ rva b3b0205 (image 18b3b0205) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3b0205(void)

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



// ===== continuation @ rva b3ac1cc (image 18b3ac1cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ac1cc(void)

{
  FUN_190dd72e0();
  (*_DAT_181ae0e98)();
  return;
}



// ===== continuation @ rva b3ab287 (image 18b3ab287) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3ab287(void)

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



// ===== continuation @ rva b3b185d (image 18b3b185d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b185d(void)

{
  longlong *in_stack_00000040;
  
  (**(code **)(*in_stack_00000040 + 0x120))(in_stack_00000040);
  (*_DAT_181ae1688)();
  return;
}



// ===== continuation @ rva b3b17f1 (image 18b3b17f1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b17f1(void)

{
  char cVar1;
  longlong *in_stack_00000040;
  
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50,0);
  cVar1 = (**(code **)(*in_stack_00000040 + 0x720))(in_stack_00000040);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b3b1360 (image 18b3b1360) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b1360(void)

{
  (*_DAT_181ae22d8)();
  return;
}



// ===== continuation @ rva b3b3090 (image 18b3b3090) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b3090(void)

{
  FUN_190dd72e0();
  (*_DAT_181ae4048)();
  return;
}



// ===== continuation @ rva b3b301d (image 18b3b301d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b301d(void)

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



// ===== continuation @ rva b3b370f (image 18b3b370f) =====

void FUN_18b3b370f(void)

{
  return;
}



// ===== continuation @ rva b3b3505 (image 18b3b3505) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b3505(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ae3f58)();
  return;
}



// ===== continuation @ rva b3b371b (image 18b3b371b) =====

void FUN_18b3b371b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3b353f (image 18b3b353f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b353f(void)

{
  FUN_190dd9df0();
  (*_DAT_181ae4038)();
  return;
}



// ===== continuation @ rva b3b34cc (image 18b3b34cc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b34cc(void)

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



// ===== continuation @ rva b3b31d2 (image 18b3b31d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3b31d2(void)

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



// ===== continuation @ rva b3b367a (image 18b3b367a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b367a(void)

{
  undefined4 uStack0000000000000038;
  
  uStack0000000000000038 = 0xffffffff;
  FUN_190dd9df0();
  (*_DAT_181ae3f68)();
  return;
}



// ===== continuation @ rva b3b30d9 (image 18b3b30d9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b30d9(void)

{
  FUN_190dd9df0();
  (*_DAT_181ae3f98)();
  return;
}



// ===== continuation @ rva b3b32d1 (image 18b3b32d1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b32d1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181ae3fe8)();
  return;
}



// ===== continuation @ rva b3b406d (image 18b3b406d) =====

void FUN_18b3b406d(void)

{
  return;
}



// ===== continuation @ rva b3b37fe (image 18b3b37fe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b37fe(void)

{
  FUN_190ddce00();
  (*_DAT_181ae4bc8)();
  return;
}



// ===== continuation @ rva b3b5466 (image 18b3b5466) =====

void FUN_18b3b5466(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3b3d6d (image 18b3b3d6d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3b3d6d(void)

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



// ===== continuation @ rva b3b4cd5 (image 18b3b4cd5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b4cd5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae4c48)();
  return;
}



// ===== continuation @ rva b3b4b4d (image 18b3b4b4d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b4b4d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181ae4318)();
  return;
}



// ===== continuation @ rva b3b5154 (image 18b3b5154) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b5154(void)

{
  (*_DAT_181ae4a48)();
  return;
}



// ===== continuation @ rva b3b3d3a (image 18b3b3d3a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b3d3a(void)

{
  FUN_190dd9df0();
  (*_DAT_181ae4138)();
  return;
}



// ===== continuation @ rva b3b4f4d (image 18b3b4f4d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3b4f4d(void)

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



// ===== continuation @ rva b3b3ee0 (image 18b3b3ee0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3b3ee0(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_1842a3a30();
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



// ===== continuation @ rva b3b3e8c (image 18b3b3e8c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b3e8c(void)

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



// ===== continuation @ rva b3b46e6 (image 18b3b46e6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3b46e6(void)

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



// ===== continuation @ rva b3ba384 (image 18b3ba384) =====

void FUN_18b3ba384(void)

{
  return;
}



// ===== continuation @ rva b3b5660 (image 18b3b5660) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b5660(void)

{
  FUN_190ddce00();
  (*_DAT_181ae5a68)();
  return;
}



// ===== continuation @ rva b3bb139 (image 18b3bb139) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3bb139(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae5fd8)();
  return;
}



// ===== continuation @ rva b3bad02 (image 18b3bad02) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3bad02(void)

{
  FUN_190dd72e0();
  (*_DAT_181ae5798)();
  return;
}



// ===== continuation @ rva b3bbaeb (image 18b3bbaeb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3bbaeb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae5c08)();
  return;
}



// ===== continuation @ rva b3badc3 (image 18b3badc3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3badc3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181ae5d58)();
  return;
}



// ===== continuation @ rva b3ba62b (image 18b3ba62b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ba62b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae5408)();
  return;
}



// ===== continuation @ rva b3ba49f (image 18b3ba49f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3ba49f(void)

{
  longlong in_stack_00000038;
  
  switch(in_stack_00000038 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b3bbb51 (image 18b3bbb51) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3bbb51(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181ae5b68)();
  return;
}



// ===== continuation @ rva b3bb8e9 (image 18b3bb8e9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3bb8e9(void)

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



// ===== continuation @ rva b3b9877 (image 18b3b9877) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b9877(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ae5f18)();
  return;
}



// ===== continuation @ rva b3b9f96 (image 18b3b9f96) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b9f96(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae5f38)();
  return;
}



// ===== continuation @ rva b3b9e3a (image 18b3b9e3a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3b9e3a(void)

{
  FUN_190dd72e0();
  (*_DAT_181ae55a8)();
  return;
}



// ===== continuation @ rva b3bb9d6 (image 18b3bb9d6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3bb9d6(void)

{
  FUN_190de3220();
  (*_DAT_181ae52c8)();
  return;
}



// ===== continuation @ rva b3c165e (image 18b3c165e) =====

void FUN_18b3c165e(void)

{
  return;
}



// ===== continuation @ rva b3bbdb4 (image 18b3bbdb4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3bbdb4(void)

{
  FUN_190ddce00();
  (*_DAT_181ae76b8)();
  return;
}



// ===== continuation @ rva b3bfafe (image 18b3bfafe) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3bfafe(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
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



// ===== continuation @ rva b3c113f (image 18b3c113f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c113f(void)

{
  (*_DAT_181ae7898)();
  return;
}



// ===== continuation @ rva b3c1481 (image 18b3c1481) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c1481(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae6e88)();
  return;
}



// ===== continuation @ rva b3c0394 (image 18b3c0394) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c0394(void)

{
  longlong in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b3c17bf (image 18b3c17bf) =====

void FUN_18b3c17bf(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3c12fc (image 18b3c12fc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c12fc(void)

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



// ===== continuation @ rva b3bfba3 (image 18b3bfba3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3bfba3(void)

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



// ===== continuation @ rva b3c178d (image 18b3c178d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c178d(void)

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



// ===== continuation @ rva b3c164f (image 18b3c164f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c164f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181ae7808)();
  return;
}



// ===== continuation @ rva b3c0676 (image 18b3c0676) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c0676(void)

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



// ===== continuation @ rva b3c5cbf (image 18b3c5cbf) =====

void FUN_18b3c5cbf(void)

{
  return;
}



// ===== continuation @ rva b3c19a4 (image 18b3c19a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c19a4(void)

{
  FUN_190ddce00();
  (*_DAT_181ae89d8)();
  return;
}



// ===== continuation @ rva b3c543d (image 18b3c543d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c543d(void)

{
  (*_DAT_181ae9008)();
  return;
}



// ===== continuation @ rva b3c58b8 (image 18b3c58b8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c58b8(void)

{
  (*_DAT_181ae8e88)();
  return;
}



// ===== continuation @ rva b3c557a (image 18b3c557a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c557a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae8cf8)();
  return;
}



// ===== continuation @ rva b3c526e (image 18b3c526e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c526e(void)

{
  FUN_190dd72e0();
  (*_DAT_181ae8a18)();
  return;
}



// ===== continuation @ rva b3c54ae (image 18b3c54ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c54ae(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae8a68)();
  return;
}



// ===== continuation @ rva b3c522e (image 18b3c522e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c522e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_181ae8ea8)();
  return;
}



// ===== continuation @ rva b3c6461 (image 18b3c6461) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c6461(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae8af8)();
  return;
}



// ===== continuation @ rva b3c5fee (image 18b3c5fee) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c5fee(void)

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



// ===== continuation @ rva b3c5448 (image 18b3c5448) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c5448(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae8b78)();
  return;
}



// ===== continuation @ rva b3c5152 (image 18b3c5152) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c5152(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181ae90d8)();
  return;
}



// ===== continuation @ rva b3c5929 (image 18b3c5929) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c5929(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181ae8e98)();
  return;
}



// ===== continuation @ rva b3c57a1 (image 18b3c57a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c57a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181ae8a38)();
  return;
}



// ===== continuation @ rva b3c8261 (image 18b3c8261) =====

void FUN_18b3c8261(void)

{
  return;
}



// ===== continuation @ rva b3c664c (image 18b3c664c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c664c(void)

{
  FUN_190ddce00();
  (*_DAT_181aea438)();
  return;
}



// ===== continuation @ rva b3c792c (image 18b3c792c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c792c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x560))();
  (*_DAT_181aea2e8)();
  return;
}



// ===== continuation @ rva b3c7fdc (image 18b3c7fdc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c7fdc(void)

{
  FUN_190dd72e0();
  (*_DAT_181ae9ff8)();
  return;
}



// ===== continuation @ rva b3c76d5 (image 18b3c76d5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c76d5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_181aea168)();
  return;
}



// ===== continuation @ rva b3c8250 (image 18b3c8250) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c8250(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181aea648)();
  return;
}



// ===== continuation @ rva b3c6ad9 (image 18b3c6ad9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c6ad9(void)

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



// ===== continuation @ rva b3c7bad (image 18b3c7bad) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c7bad(void)

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



// ===== continuation @ rva b3c82aa (image 18b3c82aa) =====

void FUN_18b3c82aa(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3c69d6 (image 18b3c69d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c69d6(void)

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



// ===== continuation @ rva b3c73aa (image 18b3c73aa) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c73aa(void)

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



// ===== continuation @ rva b3c88d1 (image 18b3c88d1) =====

void FUN_18b3c88d1(void)

{
  return;
}



// ===== continuation @ rva b3c83e4 (image 18b3c83e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c83e4(void)

{
  FUN_190ddce00();
  (*_DAT_181aea9b8)();
  return;
}



// ===== continuation @ rva b3c85cd (image 18b3c85cd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c85cd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_181aeaa18)();
  return;
}



// ===== continuation @ rva b3c88c6 (image 18b3c88c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c88c6(void)

{
  (*_DAT_181aeaa58)();
  return;
}



// ===== continuation @ rva b3c86b3 (image 18b3c86b3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c86b3(void)

{
  longlong unaff_R14;
  
  switch(unaff_R14 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b3c871d (image 18b3c871d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c871d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x120))();
  (*_DAT_181aea9f8)();
  return;
}



// ===== continuation @ rva b3c86c9 (image 18b3c86c9) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c86c9(void)

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



// ===== continuation @ rva b3c88dd (image 18b3c88dd) =====

void FUN_18b3c88dd(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3c84dc (image 18b3c84dc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c84dc(void)

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



// ===== continuation @ rva b3c849a (image 18b3c849a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3c849a(void)

{
  longlong unaff_R14;
  
  switch(unaff_R14 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b3c845c (image 18b3c845c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c845c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181aeaa98)();
  return;
}



// ===== continuation @ rva b3ccea1 (image 18b3ccea1) =====

void FUN_18b3ccea1(void)

{
  return;
}



// ===== continuation @ rva b3c8a27 (image 18b3c8a27) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3c8a27(void)

{
  FUN_190ddce00();
  (*_DAT_181aeb198)();
  return;
}



// ===== continuation @ rva b3cc6c6 (image 18b3cc6c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3cc6c6(void)

{
  FUN_190dd72e0();
  (*_DAT_181aeac48)();
  return;
}



// ===== continuation @ rva b3cc4bd (image 18b3cc4bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3cc4bd(void)

{
  (*_DAT_181aeaf88)();
  return;
}



// ===== continuation @ rva b3cda30 (image 18b3cda30) =====

void FUN_18b3cda30(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3cc9c2 (image 18b3cc9c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3cc9c2(void)

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



// ===== continuation @ rva b3cd902 (image 18b3cd902) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3cd902(void)

{
  (*_DAT_181aeb468)();
  return;
}



// ===== continuation @ rva b3cd1dd (image 18b3cd1dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3cd1dd(void)

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



// ===== continuation @ rva b3ccb8e (image 18b3ccb8e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ccb8e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181aeb608)();
  return;
}



// ===== continuation @ rva b3cc7d0 (image 18b3cc7d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3cc7d0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181aeb388)();
  return;
}



// ===== continuation @ rva b3cd967 (image 18b3cd967) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3cd967(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181aeb0d8)();
  return;
}



// ===== continuation @ rva b3ccaf4 (image 18b3ccaf4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3ccaf4(void)

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



// ===== continuation @ rva b3cd19a (image 18b3cd19a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3cd19a(void)

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



// ===== continuation @ rva b3ce189 (image 18b3ce189) =====

void FUN_18b3ce189(void)

{
  return;
}



// ===== continuation @ rva b3cdbaf (image 18b3cdbaf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3cdbaf(void)

{
  FUN_190ddce00();
  (*_DAT_181aec4a8)();
  return;
}



// ===== continuation @ rva b3ce078 (image 18b3ce078) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ce078(void)

{
  FUN_190ddfc90();
  (*_DAT_181aec658)();
  return;
}



// ===== continuation @ rva b3cdc65 (image 18b3cdc65) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3cdc65(void)

{
  longlong unaff_RBX;
  
  switch(unaff_RBX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b3ce193 (image 18b3ce193) =====

void FUN_18b3ce193(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3cde06 (image 18b3cde06) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3cde06(void)

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



// ===== continuation @ rva b3ce15d (image 18b3ce15d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3ce15d(void)

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



// ===== continuation @ rva b3cde27 (image 18b3cde27) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3cde27(void)

{
  FUN_190ddfc90();
  (*_DAT_181aec608)();
  return;
}



// ===== continuation @ rva b3cdbe2 (image 18b3cdbe2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3cdbe2(void)

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



// ===== continuation @ rva b3cde7e (image 18b3cde7e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3cde7e(void)

{
  longlong unaff_RBX;
  
  switch(unaff_RBX == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva b3db267 (image 18b3db267) =====

void FUN_18b3db267(void)

{
  return;
}



// ===== continuation @ rva b3d53a1 (image 18b3d53a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d53a1(void)

{
  FUN_190ddce00();
  (*_DAT_181aef888)();
  return;
}



// ===== continuation @ rva b3db243 (image 18b3db243) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3db243(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181aefaa8)();
  return;
}



// ===== continuation @ rva b3d941f (image 18b3d941f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3d941f(void)

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



// ===== continuation @ rva b3d90d2 (image 18b3d90d2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d90d2(void)

{
  FUN_190dd72e0();
  (*_DAT_181aef908)();
  return;
}



// ===== continuation @ rva b3dae77 (image 18b3dae77) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3dae77(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
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



// ===== continuation @ rva b3d53f8 (image 18b3d53f8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3d53f8(void)

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



// ===== continuation @ rva b3daa77 (image 18b3daa77) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3daa77(void)

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



// ===== continuation @ rva b3d9482 (image 18b3d9482) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d9482(void)

{
  FUN_190dd72e0();
  (*_DAT_181aef538)();
  return;
}



// ===== continuation @ rva b3d5459 (image 18b3d5459) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3d5459(void)

{
  undefined8 in_stack_00000050;
  undefined8 uStack0000000000000058;
  undefined8 uStack0000000000000078;
  
  uStack0000000000000058 = 0x2f17ac665c1e;
  uStack0000000000000078 = in_stack_00000050;
  (*_DAT_181aef268)(_DAT_1832982c0);
  return;
}



// ===== continuation @ rva b3dea3f (image 18b3dea3f) =====

void FUN_18b3dea3f(void)

{
  return;
}



// ===== continuation @ rva b3db4cc (image 18b3db4cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3db4cc(void)

{
  FUN_190ddce00();
  (*_DAT_181af0978)();
  return;
}



// ===== continuation @ rva b3e0ab1 (image 18b3e0ab1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e0ab1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181af14e8)();
  return;
}



// ===== continuation @ rva b3de8c4 (image 18b3de8c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3de8c4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  (*_DAT_181af1868)();
  return;
}



// ===== continuation @ rva b3df5fa (image 18b3df5fa) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3df5fa(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181af1958)();
  return;
}



// ===== continuation @ rva b3defc6 (image 18b3defc6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3defc6(void)

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



// ===== continuation @ rva b3deb19 (image 18b3deb19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3deb19(void)

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



// ===== continuation @ rva b3df3d5 (image 18b3df3d5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3df3d5(void)

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



// ===== continuation @ rva b3dee63 (image 18b3dee63) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3dee63(void)

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



// ===== continuation @ rva b3e0431 (image 18b3e0431) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e0431(void)

{
  (*_DAT_181af1878)();
  return;
}



// ===== continuation @ rva b3e5640 (image 18b3e5640) =====

void FUN_18b3e5640(void)

{
  return;
}



// ===== continuation @ rva b3e0ced (image 18b3e0ced) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e0ced(void)

{
  FUN_190ddce00();
  (*_DAT_181af3718)();
  return;
}



// ===== continuation @ rva b3e748a (image 18b3e748a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e748a(void)

{
  (*_DAT_181af3828)();
  return;
}



// ===== continuation @ rva b3e406d (image 18b3e406d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3e406d(void)

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



// ===== continuation @ rva b3e74ab (image 18b3e74ab) =====

void FUN_18b3e74ab(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3e5f5e (image 18b3e5f5e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3e5f5e(void)

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



// ===== continuation @ rva b3e45e6 (image 18b3e45e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e45e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181af3468)();
  return;
}



// ===== continuation @ rva b3e448a (image 18b3e448a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e448a(void)

{
  FUN_190dd72e0();
  (*_DAT_181af29d8)();
  return;
}



// ===== continuation @ rva b3e4a0a (image 18b3e4a0a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e4a0a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181af2a38)();
  return;
}



// ===== continuation @ rva b3e48ae (image 18b3e48ae) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e48ae(void)

{
  FUN_190dd72e0();
  (*_DAT_181af3668)();
  return;
}



// ===== continuation @ rva b3e7495 (image 18b3e7495) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e7495(void)

{
  (*_DAT_181af36d8)();
  return;
}



// ===== continuation @ rva b3e7328 (image 18b3e7328) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3e7328(void)

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



// ===== continuation @ rva b3e725b (image 18b3e725b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e725b(void)

{
  (*_DAT_181af3ad8)();
  return;
}



// ===== continuation @ rva b3e4b05 (image 18b3e4b05) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3e4b05(void)

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



// ===== continuation @ rva b3eb301 (image 18b3eb301) =====

void FUN_18b3eb301(void)

{
  return;
}



// ===== continuation @ rva b3e769a (image 18b3e769a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e769a(void)

{
  FUN_190ddce00();
  (*_DAT_181af5948)();
  return;
}



// ===== continuation @ rva b3f0543 (image 18b3f0543) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f0543(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181af69d8)();
  return;
}



// ===== continuation @ rva b3ed2b7 (image 18b3ed2b7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3ed2b7(void)

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



// ===== continuation @ rva b3ee054 (image 18b3ee054) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ee054(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181af5ff8)();
  return;
}



// ===== continuation @ rva b3ec910 (image 18b3ec910) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3ec910(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d50();
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



// ===== continuation @ rva b3e99dd (image 18b3e99dd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e99dd(void)

{
  FUN_190dd72e0();
  (*_DAT_181af6118)();
  return;
}



// ===== continuation @ rva b3e9960 (image 18b3e9960) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3e9960(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181af5008)();
  return;
}



// ===== continuation @ rva b3ec55c (image 18b3ec55c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ec55c(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181af6798)();
  return;
}



// ===== continuation @ rva b3ebaf0 (image 18b3ebaf0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ebaf0(void)

{
  longlong in_RAX;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x70))();
  (**(code **)(*unaff_RSI + 0x78))();
  (*_DAT_181af56d8)();
  return;
}



// ===== continuation @ rva b3f04b4 (image 18b3f04b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f04b4(void)

{
  (*_DAT_181af6e18)();
  return;
}



// ===== continuation @ rva b3efb19 (image 18b3efb19) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3efb19(void)

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



// ===== continuation @ rva b3ee86d (image 18b3ee86d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ee86d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181af6628)();
  return;
}



// ===== continuation @ rva b3ecd45 (image 18b3ecd45) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ecd45(void)

{
  FUN_190de3220();
  (*_DAT_181af5338)();
  return;
}



// ===== continuation @ rva b3ec677 (image 18b3ec677) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3ec677(void)

{
  (*_DAT_181af6568)();
  return;
}



// ===== continuation @ rva b3ebb5c (image 18b3ebb5c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3ebb5c(void)

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



// ===== continuation @ rva b3f4394 (image 18b3f4394) =====

void FUN_18b3f4394(void)

{
  return;
}



// ===== continuation @ rva b3f07b0 (image 18b3f07b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f07b0(void)

{
  FUN_190ddce00();
  (*_DAT_181af7ca8)();
  return;
}



// ===== continuation @ rva b3f5270 (image 18b3f5270) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3f5270(void)

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



// ===== continuation @ rva b3f6a55 (image 18b3f6a55) =====

void FUN_18b3f6a55(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3f45e1 (image 18b3f45e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3f45e1(void)

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



// ===== continuation @ rva b3f3bf7 (image 18b3f3bf7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f3bf7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181af8228)();
  return;
}



// ===== continuation @ rva b3f377c (image 18b3f377c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f377c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (*_DAT_181af84b8)();
  return;
}



// ===== continuation @ rva b3f36dc (image 18b3f36dc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f36dc(void)

{
  FUN_190dd72e0();
  (*_DAT_181af8378)();
  return;
}



// ===== continuation @ rva b3f365f (image 18b3f365f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f365f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181af8208)();
  return;
}



// ===== continuation @ rva b3f69ef (image 18b3f69ef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f69ef(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181af87e8)();
  return;
}



// ===== continuation @ rva b3f50b8 (image 18b3f50b8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3f50b8(void)

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



// ===== continuation @ rva b3f45a7 (image 18b3f45a7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f45a7(void)

{
  (*_DAT_181af89f8)();
  return;
}



// ===== continuation @ rva b3f5bcd (image 18b3f5bcd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f5bcd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181af7cc8)();
  return;
}



// ===== continuation @ rva b3f5961 (image 18b3f5961) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f5961(void)

{
  FUN_190de3220();
  (*_DAT_181af87b8)();
  return;
}



// ===== continuation @ rva b3fb13b (image 18b3fb13b) =====

void FUN_18b3fb13b(void)

{
  return;
}



// ===== continuation @ rva b3f6c7d (image 18b3f6c7d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3f6c7d(void)

{
  FUN_190ddce00();
  (*_DAT_181afa538)();
  return;
}



// ===== continuation @ rva b3fece5 (image 18b3fece5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3fece5(void)

{
  longlong *in_stack_00000050;
  
  (**(code **)(*in_stack_00000050 + 0x68))();
  (*_DAT_181afacc8)();
  return;
}



// ===== continuation @ rva b3fa2a8 (image 18b3fa2a8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3fa2a8(void)

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



// ===== continuation @ rva b3fecf8 (image 18b3fecf8) =====

void FUN_18b3fecf8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva b3fc228 (image 18b3fc228) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3fc228(void)

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



// ===== continuation @ rva b3fb890 (image 18b3fb890) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3fb890(void)

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



// ===== continuation @ rva b3feba5 (image 18b3feba5) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b3feba5(void)

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



// ===== continuation @ rva b3fbdf9 (image 18b3fbdf9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3fbdf9(void)

{
  FUN_190ddfc90();
  (*_DAT_181afa2a8)();
  return;
}



// ===== continuation @ rva b3fc9dd (image 18b3fc9dd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3fc9dd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  FUN_190dd72e0();
  (*_DAT_181af9768)();
  return;
}



// ===== continuation @ rva b3fc04e (image 18b3fc04e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3fc04e(void)

{
  FUN_190de3220();
  (*_DAT_181afaab8)();
  return;
}



// ===== continuation @ rva b402498 (image 18b402498) =====

void FUN_18b402498(void)

{
  return;
}



// ===== continuation @ rva b3feee4 (image 18b3feee4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b3feee4(void)

{
  FUN_190ddce00();
  (*_DAT_181afc518)();
  return;
}



// ===== continuation @ rva b402c5d (image 18b402c5d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b402c5d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181afc1b8)();
  return;
}



// ===== continuation @ rva b401f41 (image 18b401f41) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b401f41(void)

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



// ===== continuation @ rva b40284e (image 18b40284e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40284e(void)

{
  (*_DAT_181afc698)();
  return;
}



// ===== continuation @ rva b401e2b (image 18b401e2b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b401e2b(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
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



// ===== continuation @ rva b401a70 (image 18b401a70) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b401a70(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181afbfa8)();
  return;
}



// ===== continuation @ rva b40246a (image 18b40246a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40246a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181afc708)();
  return;
}



// ===== continuation @ rva b4029b9 (image 18b4029b9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b4029b9(void)

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



// ===== continuation @ rva b40215a (image 18b40215a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b40215a(void)

{
  (*_DAT_181afc1d8)();
  return;
}



// ===== continuation @ rva b402ba4 (image 18b402ba4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18b402ba4(void)

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



