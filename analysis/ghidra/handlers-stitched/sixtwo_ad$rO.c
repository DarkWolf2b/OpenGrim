// ===== STITCHED CORPUS: sixtwo.ad$rO =====
// handlers: 1  continuation blocks: 9  unresolved table targets: 0
// tables not in tables.json: ['0x2beddf8', '0x2bede08', '0x2bede18', '0x2bede28', '0x2bede38']

// ===== Lsixtwo/ad$rO; _8bce1eac70aa2600e7e50c69b155bac5 ()V (handler @ image 19012b540, runtime 6ffff7d3b540) =====

void FUN_19012b540(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00019012b61f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182becf40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x1012b622 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19012b622(void)

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


// ----- block @ rva 0x1012b67b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_19012b67b(void)

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


// ----- block @ rva 0x1012cdc3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_19012cdc3(void)

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


// ----- block @ rva 0x10132212 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190132212(void)

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


// ----- block @ rva 0x10134c9c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_190134c9c(void)

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


// ----- block @ rva 0x10134cb6 -----

void thunk_FUN_19012d6c4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x10134cd8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_190134cd8(uint param_1)

{
  char cVar1;
  ulonglong uVar2;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  ulonglong uVar3;
  longlong lVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 in_stack_00000040;
  ulonglong in_stack_00000048;
  
  (**(code **)(unaff_RSI + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))();
  uVar3 = (~_DAT_18344dd38 + 0xf7780a1f) *
          ((_DAT_18344dd70 ^ 0x3d9cf957) + (ulonglong)((uint)_DAT_18344dd70 & 0x3d9cf957) * 2);
  uVar3 = (uVar3 | _DAT_18344dd50) + (uVar3 & _DAT_18344dd50);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18344ded0 = func_0x000190136600((uVar3 | 0xcae4f349) + (ulonglong)((uint)uVar3 & 0xcae4f349))
  ;
  uVar3 = _DAT_18344ded0 >> 1 | _DAT_18344ded0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (ulonglong)
          (~((uint)_DAT_18344ded0 ^
            (0x40 - (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 8) & 0xb9beda72);
  _DAT_18344de50 = (_DAT_18344de50 ^ uVar3) + 0xfffeda7e ^ 0x35bf0543d0a39eb8;
  _DAT_18344ddf0 = (_DAT_18344ddf0 * -0x74e831c0a5549dff ^ _DAT_18344de50) + uVar3;
  _DAT_18344dd18 = _DAT_18344ddf0 ^ _DAT_18344de50;
  _DAT_18344de68 = 0xfffeda7e;
  uVar3 = (_DAT_18344dd48 ^ _DAT_182beddf0) + _DAT_18344de70 + 0x842223da;
  uVar7 = (_DAT_18344de70 ^ _UNK_182beddf8) + _DAT_18344dd48 + 0xba01a570;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18344dd48 ^ _DAT_182beddf0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18344de70 ^ _UNK_182beddf8;
  _DAT_18344ded8 =
       func_0x000190136600((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18344dd48 + 0xba01a570) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18344de70 + 0x842223da));
  uVar3 = _DAT_18344ded8 >> 1 | _DAT_18344ded8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_18344ded8;
  _DAT_18344def0 = _DAT_18344de50 ^ uVar3 ^ 0xba01a66f;
  _DAT_18344dd40 = (_DAT_18344dd40 ^ uVar3) + 0xba01a66f ^ 0x4043bbc294d808af;
  _DAT_18344dd70 = (_DAT_18344dd70 * -0x8c607063fef86a3 ^ _DAT_18344dd40) + uVar3;
  _DAT_18344de38 = _DAT_18344dd70 ^ _DAT_18344dd40;
  _DAT_18344dd10 = 0xba01a66f;
  uVar3 = (_DAT_18344de80 ^ _DAT_182bede00) + _DAT_18344deb0 + 0x3e23854a;
  uVar7 = (_DAT_18344deb0 ^ _UNK_182bede08) + _DAT_18344de80 + 0x45fe5a90;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18344de80 ^ _DAT_182bede00;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18344deb0 ^ _UNK_182bede08;
  uVar3 = func_0x000190136600((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18344de80 + 0x45fe5a90) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18344deb0 + 0x3e23854a));
  uVar3 = uVar3 ^ 0x45fe5a90;
  _DAT_18344dd88 = _DAT_18344ded0 ^ uVar3 ^ 0x1000000ff;
  _DAT_18344dec0 = (_DAT_18344dec0 ^ uVar3) + 0x1000000ff ^ 0x27b9689b477019e;
  _DAT_18344de30 = (_DAT_18344de30 * 0xa299a83a4d90477 ^ _DAT_18344dec0) + uVar3;
  _DAT_18344ddf0 = _DAT_18344de30 ^ _DAT_18344dec0;
  _DAT_18344dde8 = 0xff;
  uVar3 = (~_DAT_18344dee0 + 0xef728a6a) *
          ((_DAT_18344dd00 ^ 0x84222325) + (ulonglong)((uint)_DAT_18344dd00 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_18344dd18) + (uVar3 & _DAT_18344dd18);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18344dd80 = func_0x000190136600((uVar3 | 0x6b50a94c) + (ulonglong)((uint)uVar3 & 0x6b50a94c))
  ;
  _DAT_18344de38 = _DAT_18344de38 - 0xef728a69 ^ 0xfe21d920e2e51bdb;
  _DAT_18344ddc8 = _DAT_18344dd98 * -0x2ccb9d94d68fa39b;
  _DAT_18344dd98 = _DAT_18344ddc8 ^ _DAT_18344de38;
  _DAT_18344ddb8 = 0x108d7597;
  uVar3 = (~_DAT_18344ddc0 + 0x108d7598) *
          ((_DAT_18344ddc8 ^ 0x6b50a84d) + (ulonglong)((uint)_DAT_18344ddc8 & 0x6b50a84d) * 2);
  uVar3 = (uVar3 | _DAT_18344dd80) + (uVar3 & _DAT_18344dd80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18344dda8 = func_0x000190136600((uVar3 | 0x7bddddda) + (ulonglong)((uint)uVar3 & 0x7bddddda))
  ;
  uVar3 = _DAT_18344dda8 >> 0x1a ^ 0x3f;
  uVar7 = uVar3 * 0x4000000;
  uVar3 = uVar7 + (uVar3 & 0x2aaaaaaaaa) * -0x2000000;
  uVar3 = (uVar3 & 0x3333333330000000) + (uVar3 >> 2 & 0x3333333333000000);
  uVar7 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f000000) * 0x101010101010101 >> 0x38) << 7 | uVar7;
  _DAT_18344ddb8 = _DAT_18344dde8 ^ uVar7 ^ 0x1000000ff;
  _DAT_18344def8 = (_DAT_18344def8 ^ uVar7) + 0x1000000ff ^ 0x40160f2f9cacabcf;
  _DAT_18344ddf8 = (_DAT_18344ddf8 * 0x484d36edbeedf6f7 ^ _DAT_18344def8) + uVar7;
  _DAT_18344de68 = _DAT_18344ddf8 ^ _DAT_18344def8;
  _DAT_18344de70 = 0xff;
  uVar3 = func_0x000190136600(_DAT_18344deb0 ^ 0x78ff63e800cf6e);
  _DAT_18344dd98 = uVar3 << 0x2d | (uVar3 & 0x7fffffffff) >> 0x13;
  _DAT_18344dd88 = _DAT_18344dea8 ^ _DAT_18344dd98 ^ 0x60d2bb31;
  _DAT_18344deb0 = (_DAT_18344deb0 ^ _DAT_18344dd98) + 0x60d2bb31 ^ 0x13a3f122afc37a26;
  _DAT_18344dd98 = (uVar3 * -0x235cd4a152192315 ^ _DAT_18344deb0) + _DAT_18344dd98;
  _DAT_18344dd60 = _DAT_18344dd98 ^ _DAT_18344deb0;
  _DAT_18344dd50 = 0x60d2bb31;
  uVar3 = (~_DAT_18344dea0 + 0x9f2d45cf) *
          ((_DAT_18344de78 ^ 0xe4f09814) + (ulonglong)((uint)_DAT_18344de78 & 0xe4f09814) * 2);
  uVar3 = (uVar3 | _DAT_18344dd28) + (uVar3 & _DAT_18344dd28);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18344de18 = func_0x000190136600((uVar3 | 0x7bddddda) + (ulonglong)((uint)uVar3 & 0x7bddddda))
  ;
  uVar7 = _UNK_182bede18;
  uVar3 = _DAT_182bede10;
  uVar2 = _DAT_18344de18 & 0x7fffffffffffffff;
  _DAT_18344dd38 = _DAT_18344de38 ^ uVar2 ^ 0x1000000ff;
  _DAT_18344ddb0 = (_DAT_18344ddb0 ^ uVar2) + 0x1000000ff ^ 0x4c4f9c6970617e98;
  _DAT_18344dea0 = (_DAT_18344dea0 * -0x894803bf9ca2087 ^ _DAT_18344ddb0) + uVar2;
  _DAT_18344dd60 = _DAT_18344dea0 ^ _DAT_18344ddb0;
  _DAT_18344dd78 = 0xff;
  uVar2 = (_DAT_18344dea0 ^ _DAT_182bede10) + _DAT_18344dea8 + 0x7bdcf95b;
  uVar8 = (_DAT_18344dea8 ^ _UNK_182bede18) + _DAT_18344dea0 + 0x175ff4cd;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18344dea0 ^ _DAT_182bede10;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18344dea8 ^ _UNK_182bede18;
  _DAT_18344ddc0 =
       func_0x000190136600((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18344dea0 + 0x175ff4cd) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_18344dea8 + 0x7bdcf95b));
  _DAT_18344ded0 = _DAT_18344de88 ^ _DAT_18344ddc0 ^ 0x1175ecf4b;
  _DAT_18344dd58 = (_DAT_18344dd58 ^ _DAT_18344ddc0) + 0x1175ecf4b ^ 0x8ac1afb1a597f9ce;
  _DAT_18344de48 = (_DAT_18344de48 * 0x334fd17b9414b05 ^ _DAT_18344dd58) + _DAT_18344ddc0;
  _DAT_18344dd50 = _DAT_18344de48 ^ _DAT_18344dd58;
  _DAT_18344dee8 = _DAT_18344de30 ^ 0x1175ecf4b;
  _DAT_18344de18 = 0x175ecf4b;
  _DAT_18344de70 = func_0x000190136600(_DAT_18344ddc0 + 0xfffb00546dff80ff ^ 0x2d);
  _DAT_18344de68 =
       (_DAT_18344de68 ^ _DAT_18344de70 & 0x7fffffffffffffff) + 0xe8a12eb3 ^ 0x2d94dfbdbb49ffe7;
  _DAT_18344de48 =
       (_DAT_18344de48 * 0x70216143ce5fe729 ^ _DAT_18344de68) +
       (_DAT_18344de70 & 0x7fffffffffffffff);
  _DAT_18344de78 = _DAT_18344de48 ^ _DAT_18344de68;
  _DAT_18344de00 = 0xe8a12eb3;
  uVar2 = (_DAT_18344dd10 ^ uVar3) + _DAT_18344dd60 + 0x7bdcf95b;
  uVar8 = (_DAT_18344dd60 ^ uVar7) + _DAT_18344dd10 + 0x175ff4cd;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18344dd10 ^ uVar3;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18344dd60 ^ uVar7;
  _DAT_18344de28 =
       func_0x000190136600((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18344dd10 + 0x175ff4cd) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18344dd60 + 0x7bdcf95b));
  _DAT_18344ddb0 = (_DAT_18344ddb0 ^ _DAT_18344de28 ^ 0xe8a00a32) + 0x175ed04c ^ 0x3c131d4008da274d;
  _DAT_18344dd68 =
       (_DAT_18344dd68 * -0x12fb8a00c6f0fcbf ^ _DAT_18344ddb0) + (_DAT_18344de28 ^ 0xe8a00a32);
  _DAT_18344de78 = _DAT_18344dd68 ^ _DAT_18344ddb0;
  _DAT_18344dd50 = 0x175ed04c;
  uVar3 = (_DAT_18344dd60 ^ _DAT_182bede20) + _DAT_18344dda0 + 0x6c830d96;
  uVar7 = (_DAT_18344dda0 ^ _UNK_182bede28) + _DAT_18344dd60 + 0x2ebda098;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18344dd60 ^ _DAT_182bede20;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18344dda0 ^ _UNK_182bede28;
  _DAT_18344dd10 =
       func_0x000190136600((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18344dd60 + 0x2ebda098) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18344dda0 + 0x6c830d96));
  uVar7 = _DAT_18344dd10 ^ 0x2a794752810a9a48;
  uVar3 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar7;
  _DAT_18344def8 = _DAT_18344de60 ^ uVar7 ^ 0x1175ecf4b;
  _DAT_18344de40 = (_DAT_18344de40 ^ uVar7) + 0x1175ecf4b ^ 0xe8479b4d96d51822;
  _DAT_18344dd48 = (_DAT_18344dd48 * -0x20b8ced8fe059fdf ^ _DAT_18344de40) + uVar7;
  _DAT_18344dd50 = _DAT_18344dd48 ^ _DAT_18344de40;
  _DAT_18344dd68 = 0x175ecf4b;
  _DAT_18344de08 = func_0x000190136600(_DAT_18344dd20 ^ 0x1d0083dcffe1a1);
  _DAT_18344dd70 = (_DAT_18344de08 ^ 0x175ecf4b) << 0x1e | _DAT_18344de08 >> 0x22;
  _DAT_18344ddb8 = _DAT_18344ddb8 ^ _DAT_18344dd70 ^ 0x3354b5c2bc5d069a;
  _DAT_18344dda0 = (_DAT_18344dda0 * 0x354f90dc5a8a63c5 ^ _DAT_18344ddb8) + _DAT_18344dd70;
  _DAT_18344dd98 = _DAT_18344dda0 ^ _DAT_18344ddb8;
  _DAT_18344deb8 = 0;
  uVar3 = (_DAT_18344dee0 ^ 0x842223da) + _DAT_18344de18 + 0x842223da;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18344dee0 ^ 0x842223da;
  uVar7 = ((_DAT_18344de18 + _DAT_18344dee0) * 0x2000 | _DAT_18344de18 + _DAT_18344dee0 >> 0x33) ^
          _DAT_18344de18;
  _DAT_18344ddd8 =
       func_0x000190136600((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_18344dee0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18344de18 + 0x842223da));
  uVar3 = _DAT_18344ddd8 * -0x200a169a35fbcd41;
  _DAT_18344dd68 = _DAT_18344de00 ^ uVar3 ^ 0xff;
  _DAT_18344de48 = (_DAT_18344de48 ^ uVar3) + 0xff ^ 0x80983b1492e24706;
  _DAT_18344dd18 = (_DAT_18344dd18 * 0x4639c3dcf2ed9e7b ^ _DAT_18344de48) + uVar3;
  _DAT_18344dd78 = _DAT_18344dd18 ^ _DAT_18344de48;
  _DAT_18344ddb0 = 0xff;
  uVar3 = (_DAT_18344dd28 ^ _DAT_182bede30) + _DAT_18344deb8 + 0x7bdcf95b;
  uVar7 = (_DAT_18344deb8 ^ _UNK_182bede38) + _DAT_18344dd28 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18344dd28 ^ _DAT_182bede30;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_18344deb8 ^ _UNK_182bede38;
  _DAT_18344de28 =
       func_0x000190136600((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_18344dd28 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18344deb8 + 0x7bdcf95b));
  uVar7 = _DAT_18344de28 ^ 0xfffeda7d00012582;
  uVar3 = uVar7 >> 1 | uVar7;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar7;
  _DAT_18344de78 = (_DAT_18344de78 ^ uVar7) + 0x12581 ^ 0xab0438c1c5d201ed;
  _DAT_18344deb0 = (_DAT_18344deb0 * 0x5690df4a9000906b ^ _DAT_18344de78) + uVar7;
  _DAT_18344dda8 = _DAT_18344deb0 ^ _DAT_18344de78;
  _DAT_18344de50 = 0x12581;
  _DAT_18344ded8 = func_0x000190136600(_DAT_18344de38 + 0xff4c001a5a005cff ^ 0x51);
  uVar3 = (_DAT_18344ded8 ^ 0x1257faf7e0000) & 0xfffffffffffe0000;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  _DAT_18344dee0 = _DAT_18344dee0 ^ uVar3 ^ 0xa3cc22c41da56979;
  _DAT_18344dde0 = (_DAT_18344dde0 * -0x6f209d6a3807489b ^ _DAT_18344dee0) + uVar3;
  _DAT_18344dd50 = _DAT_18344dde0 ^ _DAT_18344dee0;
  _DAT_18344ded0 = 0;
  uVar3 = ((_DAT_18344ddb0 ^ 0x842223da) + (ulonglong)((uint)_DAT_18344ddb0 & 0x842223da) * 2) *
          -_DAT_18344ddf8;
  uVar3 = (uVar3 | _DAT_18344dd98) + (uVar3 & _DAT_18344dd98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18344dee0 = func_0x000190136600((uVar3 | 0x842223da) + (ulonglong)((uint)uVar3 & 0x842223da))
  ;
  _DAT_18344dde0 = _DAT_18344de90 ^ _DAT_18344dee0 ^ 0xff;
  _DAT_18344dd20 = (_DAT_18344dd20 ^ _DAT_18344dee0) + 0xff ^ 0xe18507e932c60baa;
  _DAT_18344de70 = (_DAT_18344de70 * -0x46a10319ebb3c401 ^ _DAT_18344dd20) + _DAT_18344dee0;
  _DAT_18344de30 = _DAT_18344de70 ^ _DAT_18344dd20;
  _DAT_18344dd80 = _DAT_18344dd40 ^ 0xff;
  _DAT_18344dd28 = 0xff;
  uVar3 = (~_DAT_18344dea0 + 0xb9beda73) *
          ((_DAT_18344dd58 ^ 0x3d9cf957) + (ulonglong)((uint)_DAT_18344dd58 & 0x3d9cf957) * 2);
  uVar3 = (uVar3 | _DAT_18344de10) + (uVar3 & _DAT_18344de10);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18344de38 = func_0x000190136600((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  _DAT_18344de20 = _DAT_18344de20 ^ _DAT_18344de38 & 0xffffffffffffff ^ 0x6e32f797da4b5602;
  _DAT_18344ddf0 =
       (_DAT_18344ddf0 * 0x700fe2f8c7357c2b ^ _DAT_18344de20) + (_DAT_18344de38 & 0xffffffffffffff);
  _DAT_18344def0 = _DAT_18344ddf0 ^ _DAT_18344de20;
  _DAT_18344de98 = 0;
  _DAT_18344def8 = func_0x000190136600(_DAT_18344dd58 + 0xffe0ff84c5ffe1ff ^ 0x4a);
  uVar3 = (_DAT_18344def8 << 0x2f | _DAT_18344def8 >> 0x11) ^ 0xff;
  _DAT_18344de18 = _DAT_18344dee8 ^ uVar3 ^ 0xff;
  _DAT_18344dde8 = (_DAT_18344dde8 ^ uVar3) + 0xff ^ 0x22dfd432e41e3a67;
  _DAT_18344de30 = (_DAT_18344de30 * -0x2fc7b5d4f53afedb ^ _DAT_18344dde8) + uVar3;
  _DAT_18344dd98 = _DAT_18344de30 ^ _DAT_18344dde8;
  _DAT_18344dd38 = 0xff;
  uVar3 = (ulonglong)param_1 ^ 0x84222325;
  uVar7 = uVar3 ^ _DAT_18344de90;
  lVar4 = uVar3 + _DAT_18344de40;
  uVar3 = uVar7 + lVar4;
  uVar2 = (_DAT_18344de40 ^ 0xff) + _DAT_18344de90 + 0xff;
  uVar7 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uVar7;
  uVar3 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_18344de40 ^ 0xff;
  _DAT_18344dd88 =
       func_0x000190136600((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18344de90 + 0xff) ^
                           (uVar7 << 0x1d | uVar7 >> 0x23) - lVar4);
  uVar3 = _DAT_18344dd88 << 0x1c | _DAT_18344dd88 >> 0x24;
  uVar7 = (ulonglong)param_1 & 0xff;
  _DAT_18344de10 = (_DAT_18344de10 ^ uVar3) + uVar7 ^ 0x17c1f6149640e7c;
  _DAT_18344dd20 = (_DAT_18344dd20 * -0x1072fa72171b0e07 ^ _DAT_18344de10) + uVar3;
  _DAT_18344dd50 = _DAT_18344dd20 ^ _DAT_18344de10;
  auVar5._8_8_ = uVar7;
  auVar5._0_8_ = in_stack_00000048 ^ 0x84222325;
  auVar6 = pshufb(auVar5 ^ _DAT_182bede40,_DAT_1800170c0);
  uVar2 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar2 + _DAT_18344ddf0;
  if (auVar6._4_4_ < 0) {
    uVar3 = _DAT_18344dd20 ^ uVar2;
  }
  _DAT_18344dd00 = uVar7;
  _DAT_18344dd00 = func_0x000190136600(SUB161(auVar5 ^ _DAT_182bede40,5) ^ uVar3);
  uVar7 = uVar7 | in_stack_00000048;
  in_stack_00000048 = in_stack_00000048 ^ (_DAT_18344dd00 ^ uVar7) & 0x7fffffffffffffff;
  _DAT_18344de40 = (_DAT_18344de40 ^ in_stack_00000048) + uVar7 ^ 0xe0fc1f8b74c9b7db;
  _DAT_18344de58 = (_DAT_18344de58 * -0x668e2c486038e1c5 ^ _DAT_18344de40) + in_stack_00000048;
  _DAT_18344dda0 = _DAT_18344de58 ^ _DAT_18344de40;
  _DAT_18344dde8 = uVar7;
  *unaff_RDI = in_stack_00000040;
  unaff_RDI[1] = uVar7;
  FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50 + 0x424f,0xd8);
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


// ----- block @ rva 0x10136419 -----

void FUN_190136419(void)

{
  return;
}


// ----- block @ rva 0x10136485 -----

void FUN_190136485(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

