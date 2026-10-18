// ===== continuation @ rva 94be0c5 (image 1894be0c5) =====

void FUN_1894be0c5(void)

{
  return;
}



// ===== continuation @ rva 945138c (image 18945138c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001894513e6 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18945138c(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 94ba606 (image 1894ba606) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894ba606(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x9a0) = uVar2;
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



// ===== continuation @ rva 945ad1e (image 18945ad1e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018945bee1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18945ad1e(void)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar4;
  undefined8 extraout_XMM0_Qa;
  ulonglong uVar5;
  ulonglong uVar6;
  
  lVar1 = (**(code **)(*unaff_RSI + 0x6f0))();
  *(int *)(unaff_RBP + 0x8c8) = (int)*(char *)(lVar1 + *(int *)(unaff_RBP + 0x8d0));
  (**(code **)(*unaff_RSI + 0x6f8))(extraout_XMM0_Qa,*(undefined8 *)(unaff_RBP + 0x970),lVar1,2);
  *(undefined8 *)(unaff_RBP + 0x8d0) = 3;
  uVar2 = _DAT_183214440 + 0xffc4000317ff88ff;
  *(ulonglong *)(unaff_RBP + 0x890) = (ulonglong)*(byte *)(unaff_RBP + 0x8c8);
  _DAT_1832144d8 = func_0x0001894d77f0(uVar2 ^ 0xb);
  uVar2 = _DAT_1832144d8 >> 1 | _DAT_1832144d8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          _DAT_1832144d8) & 0x7fffffffffffffff;
  _DAT_183214318 = (_DAT_183214318 ^ uVar2) + 0xfdebff3d ^ 0xd37b08e4f7a84747;
  _DAT_183214448 = (_DAT_183214448 * 0x7f6b1564c99f4455 ^ _DAT_183214318) + uVar2;
  _DAT_183214388 = _DAT_183214448 ^ _DAT_183214318;
  _DAT_183214418 = 0xfdebff3d;
  uVar2 = (~_DAT_183214100 + 0xba4a54eb) *
          ((_DAT_1832146e8 ^ 0x84222325) + (ulonglong)((uint)_DAT_1832146e8 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_1832145f0) + (uVar2 & _DAT_1832145f0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832141a0 = func_0x0001894d77f0((uVar2 | 0x3e6877cf) + (ulonglong)((uint)uVar2 & 0x3e6877cf))
  ;
  uVar2 = _DAT_1832141a0 << 0x26 | _DAT_1832141a0 >> 0x1a;
  _DAT_1832141d8 = (_DAT_1832141d8 ^ uVar2) - 0xba4a54ea ^ 0x8e68d365ec135dd;
  _DAT_183214458 = (_DAT_183214458 * 0x3ff1c35de0b82b35 ^ _DAT_1832141d8) + uVar2;
  _DAT_1832143b8 = _DAT_183214458 ^ _DAT_1832141d8;
  _DAT_183214450 = 0x45b5ab16;
  _DAT_183214828 = func_0x0001894d77f0(_DAT_183214598 ^ 0xcffd23000277a);
  _DAT_1832144c8 = _DAT_1832145e0 ^ _DAT_183214828 ^ 0xba4a55e9;
  _DAT_183214570 = (_DAT_183214570 ^ _DAT_183214828) + 0xba4a55e9 ^ 0x3e7a5821e0d4a770;
  _DAT_183214740 = (_DAT_183214740 * -0x58370e534e63debf ^ _DAT_183214570) + _DAT_183214828;
  _DAT_1832144a0 = _DAT_183214740 ^ _DAT_183214570;
  _DAT_183214750 = 0xba4a55e9;
  _DAT_183214710 = func_0x0001894d77f0(_DAT_1832147f8 ^ 0xdaff94c5ff34db);
  uVar2 = _DAT_183214710 * -0x142286b08a67b6f3;
  _DAT_183214228 = _DAT_183214630 ^ uVar2 ^ 0x1000000ff;
  _DAT_1832147a8 = (_DAT_1832147a8 ^ uVar2) + 0x1000000ff ^ 0x8eacbfa1b3b6c6d9;
  _DAT_183214178 = (_DAT_183214178 * -0x43eb023e12dbb491 ^ _DAT_1832147a8) + uVar2;
  _DAT_183214648 = _DAT_183214178 ^ _DAT_1832147a8;
  _DAT_1832141c0 = 0xff;
  _DAT_1832141c8 = func_0x0001894d77f0(_DAT_1832146f0 ^ 0x8fff47dd004c2f);
  _DAT_183214250 = _DAT_183214250 - 0x7c7f9300 ^ 0x1d07168ab9264a09;
  _DAT_183214270 = _DAT_1832144d0 * -0x6929192289aa58dd;
  _DAT_1832144d0 = _DAT_183214270 ^ _DAT_183214250;
  _DAT_1832143f0 = 0x83806d00;
  _DAT_1832148c8 = func_0x0001894d77f0(_DAT_183214210 ^ 0x33003a25ff546e);
  uVar2 = _DAT_1832148c8 ^ 0x7c7f92ff;
  _DAT_183214870 = _DAT_183214758 ^ uVar2 ^ 0x1000000ff;
  _DAT_183214418 = (_DAT_183214418 ^ uVar2) + 0x1000000ff ^ 0xcaf05133529061d3;
  _DAT_1832142b0 = (_DAT_1832142b0 * 0x41474c15edc875ff ^ _DAT_183214418) + uVar2;
  _DAT_183214210 = _DAT_1832142b0 ^ _DAT_183214418;
  _DAT_183214628 = 0xff;
  uVar2 = (_DAT_1832148f0 ^ _DAT_181341890) + _DAT_183214730 + 0x84222325;
  uVar6 = (_DAT_183214730 ^ _UNK_181341898) + _DAT_1832148f0 + 0x6b6e1c80;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832148f0 ^ _DAT_181341890;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183214730 ^ _UNK_181341898;
  _DAT_1832143c8 =
       func_0x0001894d77f0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832148f0 + 0x6b6e1c80) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183214730 + 0x84222325));
  _DAT_183214310 = (_DAT_183214310 ^ _DAT_1832143c8) - 0x6b6e1c80 ^ 0x9f5d1ca88075c82d;
  _DAT_1832146f8 = (_DAT_1832146f8 * -0x71ee969ff4e0fb4b ^ _DAT_183214310) + _DAT_1832143c8;
  _DAT_183214248 = _DAT_1832146f8 ^ _DAT_183214310;
  _DAT_1832145e0 = 0x9491e380;
  uVar2 = (~_DAT_1832148e0 + 0x6b6e1c81) *
          ((_DAT_1832148e0 ^ 0x842223da) + (ulonglong)((uint)_DAT_1832148e0 & 0x842223da) * 2);
  uVar2 = (uVar2 | _DAT_1832147b0) + (uVar2 & _DAT_1832147b0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832146d8 = func_0x0001894d77f0((uVar2 | 0xef4c3f5a) + (ulonglong)((uint)uVar2 & 0xef4c3f5a))
  ;
  _DAT_183214500 = _DAT_1832145b8 ^ _DAT_1832146d8 ^ 0x6b6e1d7f;
  _DAT_183214818 = (_DAT_183214818 ^ _DAT_1832146d8) + 0x6b6e1d7f ^ 0xba9e215b37f69736;
  _DAT_183214488 = (_DAT_183214488 * -0x2178a6110928d057 ^ _DAT_183214818) + _DAT_1832146d8;
  _DAT_1832144b8 = _DAT_183214488 ^ _DAT_183214818;
  _DAT_183214790 = 0x6b6e1d7f;
  _DAT_1832145c8 = func_0x0001894d77f0(_DAT_183214228 + 0xab0077d5ffb2ff ^ 0xa0);
  uVar2 = _DAT_1832145c8 >> 1 | _DAT_1832145c8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1832145c8;
  _DAT_183214180 = _DAT_183214850 ^ uVar2 ^ 0x1000000ff;
  _DAT_183214568 = (_DAT_183214568 ^ uVar2) + 0x1000000ff ^ 0xadfd727201390539;
  _DAT_183214368 = (_DAT_183214368 * 0x1b26c4a4c61c7df1 ^ _DAT_183214568) + uVar2;
  _DAT_183214658 = _DAT_183214368 ^ _DAT_183214568;
  _DAT_183214198 = 0xff;
  _DAT_183214890 = func_0x0001894d77f0(_DAT_1832143e0 + 0xffe10063b1ffefffU ^ 0x25);
  uVar6 = _DAT_183214890 ^ 0xfffbffff;
  uVar2 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^ uVar6;
  _DAT_183214580 = _DAT_1832142a8 ^ uVar6 ^ 0x1d8c5fd13;
  _DAT_183214790 = (_DAT_183214790 ^ uVar6) + 0x1d8c5fd13 ^ 0xab8272e98dd77d8c;
  _DAT_1832148b0 = (_DAT_1832148b0 * -0x15c2ca91fbb01dd9 ^ _DAT_183214790) + uVar6;
  _DAT_183214330 = _DAT_1832148b0 ^ _DAT_183214790;
  _DAT_183214190 = 0xd8c5fd13;
  uVar2 = (~_DAT_1832145e0 + 0xdad9fdd7) *
          ((_DAT_183214250 ^ 0x79c9dc18) + (ulonglong)((uint)_DAT_183214250 & 0x79c9dc18) * 2);
  uVar2 = (uVar2 | _DAT_183214698) + (uVar2 & _DAT_183214698);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832148c8 = func_0x0001894d77f0((uVar2 | 0xa31021ce) + (ulonglong)((uint)uVar2 & 0xa31021ce))
  ;
  _DAT_183214638 =
       (_DAT_183214638 ^ _DAT_1832148c8 & 0x1fffffffffff) + 0x273202eb ^ 0x633e5eafbe9004f8;
  _DAT_1832147c0 =
       (_DAT_1832147c0 * -0x7193f5ffeb70c48d ^ _DAT_183214638) + (_DAT_1832148c8 & 0x1fffffffffff);
  _DAT_1832146b8 = _DAT_1832147c0 ^ _DAT_183214638;
  _DAT_183214788 = 0x273202eb;
  uVar2 = (_DAT_1832148d8 ^ _DAT_1813418a0) + _DAT_183214278 + 0x79c9dc18;
  uVar6 = (_DAT_183214278 ^ _UNK_1813418a8) + _DAT_1832148d8 + 0xdad9fdd6;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832148d8 ^ _DAT_1813418a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183214278 ^ _UNK_1813418a8;
  _DAT_183214598 =
       func_0x0001894d77f0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832148d8 + 0xdad9fdd6) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183214278 + 0x79c9dc18));
  uVar2 = (ulonglong)(((uint)_DAT_183214598 ^ 0x25220229) & 0xfdebff3d);
  _DAT_183214148 = (_DAT_183214148 ^ uVar2) + 0xd8c9fd14 ^ 0xab2e84bb1220c;
  _DAT_183214458 = (_DAT_183214458 * 0x4734f5eca623dec9 ^ _DAT_183214148) + uVar2;
  _DAT_183214680 = _DAT_183214458 ^ _DAT_183214148;
  _DAT_1832146b0 = 0xd8c9fd14;
  uVar2 = (~_DAT_183214858 + 0xb193fa29) *
          ((_DAT_1832148b8 ^ 0xa31021ce) + (ulonglong)((uint)_DAT_1832148b8 & 0xa31021ce) * 2);
  uVar2 = (uVar2 | _DAT_183214560) + (uVar2 & _DAT_183214560);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183214480 = func_0x0001894d77f0((uVar2 | 0x1283dbe6) + (ulonglong)((uint)uVar2 & 0x1283dbe6))
  ;
  _DAT_1832141c8 = _DAT_183214678 ^ _DAT_183214480 ^ 0xd8c5fd13;
  _DAT_183214820 = (_DAT_183214820 ^ _DAT_183214480) + 0xd8c5fd13 ^ 0x2d0897257bac13b8;
  _DAT_1832144a0 = (_DAT_1832144a0 * 0x4e4791ba85b6f849 ^ _DAT_183214820) + _DAT_183214480;
  _DAT_183214520 = _DAT_1832144a0 ^ _DAT_183214820;
  _DAT_1832141a0 = 0xd8c5fd13;
  _DAT_183214128 = func_0x0001894d77f0(_DAT_183214370 + 0x1cff83db0021ffU ^ 0x50);
  uVar6 = _DAT_183214128 * 0x30185496331e9cdf;
  uVar2 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  _DAT_1832143d8 =
       uVar6 ^ 0xd8c5fd13 ^
       (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4;
  _DAT_1832147a8 = _DAT_1832147a8 ^ _DAT_1832143d8 ^ 0x784537a59e2f275e;
  _DAT_183214488 = (_DAT_183214488 * 0x13c538b9a3bad433 ^ _DAT_1832147a8) + _DAT_1832143d8;
  _DAT_1832146f8 = _DAT_183214488 ^ _DAT_1832147a8;
  _DAT_1832144f0 = 0;
  uVar2 = (_DAT_183214578 ^ 0x842223da) + _DAT_183214430 + 0x842223da;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183214578 ^ 0x842223da;
  uVar6 = ((_DAT_183214430 + _DAT_183214578) * 0x2000 | _DAT_183214430 + _DAT_183214578 >> 0x33) ^
          _DAT_183214430;
  _DAT_183214378 =
       func_0x0001894d77f0((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183214578 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183214430 + 0x842223da));
  _DAT_183214780 = _DAT_183214228 ^ _DAT_183214378 ^ 0xff;
  _DAT_1832145a8 = (_DAT_1832145a8 ^ _DAT_183214378) + 0xff ^ 0x6155cb9fd0fc29f;
  _DAT_183214800 = (_DAT_183214800 * -0x783920f7430d7ab9 ^ _DAT_1832145a8) + _DAT_183214378;
  _DAT_183214338 = _DAT_183214800 ^ _DAT_1832145a8;
  _DAT_183214668 = 0xff;
  uVar2 = (~_DAT_183214260 + 0x21400c3) *
          ((_DAT_183214160 ^ 0x79c9dc18) + (ulonglong)((uint)_DAT_183214160 & 0x79c9dc18) * 2);
  uVar2 = (uVar2 | _DAT_183214788) + (uVar2 & _DAT_183214788);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183214780 = func_0x0001894d77f0((uVar2 | 0x7bdddcda) + (ulonglong)((uint)uVar2 & 0x7bdddcda))
  ;
  uVar2 = (_DAT_183214780 & 0xfffffffffff) >> 1 | _DAT_183214780 & 0xfffffffffff;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183214780 & 0xfffffffffff;
  _DAT_1832147d8 = _DAT_1832147d8 ^ uVar2 ^ 0x35009607cded81a1;
  _DAT_183214808 = (_DAT_183214808 * 0x20011505b94bd4ff ^ _DAT_1832147d8) + uVar2;
  _DAT_183214618 = _DAT_183214808 ^ _DAT_1832147d8;
  _DAT_183214630 = 0;
  _DAT_183214638 = func_0x0001894d77f0(_DAT_183214808 ^ 0xffdeff7bdaffdd94);
  uVar2 = (_DAT_183214638 ^ 0xfa9ecdf173186000) & 0xffffffffffffe000;
  _DAT_1832143c8 = _DAT_1832143c8 ^ uVar2 ^ 0x9914d93472496487;
  _DAT_183214578 = (_DAT_183214578 * -0x35489107db0afbd1 ^ _DAT_1832143c8) + uVar2;
  _DAT_183214450 = _DAT_183214578 ^ _DAT_1832143c8;
  _DAT_1832147d8 = 0;
  uVar4 = *(longlong *)(unaff_RBP + 0x890) << 0x28;
  uVar2 = *(ulonglong *)(unaff_RBP + 0x8c0);
  uVar6 = uVar2 ^ 0x84222325;
  uVar3 = uVar6 ^ _DAT_1832141b0;
  lVar1 = uVar6 + _DAT_183214738;
  uVar6 = uVar3 + lVar1;
  uVar5 = (uVar4 ^ _DAT_183214738) + _DAT_1832141b0 + uVar4;
  uVar3 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar3;
  uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4 ^ _DAT_183214738;
  _DAT_1832144b0 =
       func_0x0001894d77f0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832141b0 + uVar4) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar1);
  _DAT_183214408 = uVar4 | uVar2;
  _DAT_183214798 =
       (_DAT_183214798 ^ _DAT_1832144b0 & 0x3ffffffffffffff) + _DAT_183214408 ^ 0x9ee38635c1e33126;
  _DAT_1832143b0 =
       (_DAT_1832143b0 * 0x46a8e89e09aae55 ^ _DAT_183214798) + (_DAT_1832144b0 & 0x3ffffffffffffff);
  _DAT_1832148f8 = _DAT_1832143b0 ^ _DAT_183214798;
  *(ulonglong *)(unaff_RBP + 0x8c0) = _DAT_183214408;
  *(undefined8 *)(unaff_RBP + 0x8c8) = *(undefined8 *)(unaff_RBP + 0x970);
  (**(code **)(*unaff_RSI + 0x558))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 946f57a (image 18946f57a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018946f5bf */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18946f57a(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x9a0) = uVar1;
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 94a9951 (image 1894a9951) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001894a9968 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1894a9951(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 9484436 (image 189484436) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000189484468 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_189484436(void)

{
  undefined4 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar1 = FUN_184194800();
  *(undefined4 *)(unaff_RBP + 0x8d0) = uVar1;
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 94ab1c0 (image 1894ab1c0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001894ab205 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1894ab1c0(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar1 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x998) = uVar1;
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 94ad8c8 (image 1894ad8c8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001894ad918 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1894ad8c8(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d50();
  (**(code **)(*unaff_RSI + 0x570))();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 949f66a (image 18949f66a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018949f681 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18949f66a(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 93a005e (image 1893a005e) =====

void FUN_1893a005e(void)

{
  return;
}



// ===== continuation @ rva 9397e4e (image 189397e4e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189397e4e(void)

{
  FUN_190ddce00();
  (*_DAT_1813030e8)();
  return;
}



// ===== continuation @ rva 93a0056 (image 1893a0056) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0056(void)

{
  (*_DAT_181303068)();
  return;
}



// ===== continuation @ rva 939afb3 (image 18939afb3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939afb3(void)

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



// ===== continuation @ rva 93a00ca (image 1893a00ca) =====

void FUN_1893a00ca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 939f1d7 (image 18939f1d7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939f1d7(void)

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



// ===== continuation @ rva 939f370 (image 18939f370) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939f370(void)

{
  FUN_190ddfc90();
  (*_DAT_181302e08)();
  return;
}



// ===== continuation @ rva 939e8a2 (image 18939e8a2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939e8a2(void)

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



// ===== continuation @ rva 939ff54 (image 18939ff54) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939ff54(void)

{
  FUN_190dd72e0();
  (*_DAT_181303338)();
  return;
}



// ===== continuation @ rva 939feca (image 18939feca) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18939feca(void)

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



// ===== continuation @ rva 939e86f (image 18939e86f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939e86f(void)

{
  FUN_190de3220();
  (*_DAT_181302d68)();
  return;
}



// ===== continuation @ rva 939ea08 (image 18939ea08) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18939ea08(void)

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



// ===== continuation @ rva 94d7916 (image 1894d7916) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7916(void)

{
  FUN_190dd72e0();
  (*_DAT_181347248)();
  return;
}



// ===== continuation @ rva 94d78a3 (image 1894d78a3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d78a3(void)

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



// ===== continuation @ rva 94d79ed (image 1894d79ed) =====

void FUN_1894d79ed(void)

{
  return;
}



// ===== continuation @ rva 94d78dc (image 1894d78dc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d78dc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1813471f8)();
  return;
}



// ===== continuation @ rva 94d79f5 (image 1894d79f5) =====

void FUN_1894d79f5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 94d7901 (image 1894d7901) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d7901(void)

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



// ===== continuation @ rva 94d795e (image 1894d795e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d795e(void)

{
  FUN_190dd9df0();
  (*_DAT_181347218)();
  return;
}



// ===== continuation @ rva 94d7991 (image 1894d7991) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d7991(void)

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



// ===== continuation @ rva 94d79dc (image 1894d79dc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d79dc(void)

{
  (*_DAT_181347258)();
  return;
}



// ===== continuation @ rva 94d793d (image 1894d793d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d793d(void)

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



// ===== continuation @ rva 94d7b16 (image 1894d7b16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7b16(void)

{
  FUN_190dd72e0();
  (*_DAT_181347308)();
  return;
}



// ===== continuation @ rva 94d7aa3 (image 1894d7aa3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7aa3(void)

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



// ===== continuation @ rva 94d7bed (image 1894d7bed) =====

void FUN_1894d7bed(void)

{
  return;
}



// ===== continuation @ rva 94d7b5e (image 1894d7b5e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7b5e(void)

{
  FUN_190dd9df0();
  (*_DAT_1813472e8)();
  return;
}



// ===== continuation @ rva 94d7bf5 (image 1894d7bf5) =====

void FUN_1894d7bf5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 94d7b91 (image 1894d7b91) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d7b91(void)

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



// ===== continuation @ rva 94d7bdc (image 1894d7bdc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7bdc(void)

{
  (*_DAT_181347348)();
  return;
}



// ===== continuation @ rva 94d7b3d (image 1894d7b3d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d7b3d(void)

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



// ===== continuation @ rva 94d7bb5 (image 1894d7bb5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7bb5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1813472f8)();
  return;
}



// ===== continuation @ rva 94d7adc (image 1894d7adc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7adc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181347338)();
  return;
}



// ===== continuation @ rva 94d7d16 (image 1894d7d16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7d16(void)

{
  FUN_190dd72e0();
  (*_DAT_1813473d8)();
  return;
}



// ===== continuation @ rva 94d7ca3 (image 1894d7ca3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7ca3(void)

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



// ===== continuation @ rva 94d7ded (image 1894d7ded) =====

void FUN_1894d7ded(void)

{
  return;
}



// ===== continuation @ rva 94d7db5 (image 1894d7db5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7db5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181347428)();
  return;
}



// ===== continuation @ rva 94d7df5 (image 1894d7df5) =====

void FUN_1894d7df5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 94d7d91 (image 1894d7d91) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d7d91(void)

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



// ===== continuation @ rva 94d7d01 (image 1894d7d01) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d7d01(void)

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



// ===== continuation @ rva 94d7d3d (image 1894d7d3d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d7d3d(void)

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



// ===== continuation @ rva 94d7d5e (image 1894d7d5e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7d5e(void)

{
  FUN_190dd9df0();
  (*_DAT_1813473b8)();
  return;
}



// ===== continuation @ rva 94d7f16 (image 1894d7f16) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7f16(void)

{
  FUN_190dd72e0();
  (*_DAT_181347488)();
  return;
}



// ===== continuation @ rva 94d7ea3 (image 1894d7ea3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7ea3(void)

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



// ===== continuation @ rva 94d7ff3 (image 1894d7ff3) =====

void FUN_1894d7ff3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 94d7f3d (image 1894d7f3d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d7f3d(void)

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



// ===== continuation @ rva 94d7feb (image 1894d7feb) =====

void FUN_1894d7feb(void)

{
  return;
}



// ===== continuation @ rva 94d7edc (image 1894d7edc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7edc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1813474f8)();
  return;
}



// ===== continuation @ rva 94d7fdb (image 1894d7fdb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7fdb(void)

{
  (*_DAT_181347508)(0);
  return;
}



// ===== continuation @ rva 94d7f91 (image 1894d7f91) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d7f91(void)

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



// ===== continuation @ rva 94d7f5e (image 1894d7f5e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7f5e(void)

{
  FUN_190dd9df0();
  (*_DAT_1813474c8)();
  return;
}



// ===== continuation @ rva 94d7fb5 (image 1894d7fb5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d7fb5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1813474b8)();
  return;
}



// ===== continuation @ rva 94d8121 (image 1894d8121) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d8121(void)

{
  FUN_190dd72e0();
  (*_DAT_181347578)();
  return;
}



// ===== continuation @ rva 94d80a8 (image 1894d80a8) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d80a8(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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



// ===== continuation @ rva 94d81fd (image 1894d81fd) =====

void FUN_1894d81fd(void)

{
  return;
}



// ===== continuation @ rva 94d816c (image 1894d816c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d816c(void)

{
  FUN_190dd9df0();
  (*_DAT_1813475a8)();
  return;
}



// ===== continuation @ rva 94d820a (image 1894d820a) =====

void FUN_1894d820a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 94d8148 (image 1894d8148) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d8148(void)

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



// ===== continuation @ rva 94d81c6 (image 1894d81c6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d81c6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x330))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181347598)();
  return;
}



// ===== continuation @ rva 94d81ed (image 1894d81ed) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d81ed(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_1813475b8)(unaff_XMM6_Da);
  return;
}



// ===== continuation @ rva 94d819f (image 1894d819f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d819f(void)

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



// ===== continuation @ rva 94d8109 (image 1894d8109) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d8109(void)

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



// ===== continuation @ rva 94d8326 (image 1894d8326) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d8326(void)

{
  FUN_190dd72e0();
  (*_DAT_181347668)();
  return;
}



// ===== continuation @ rva 94d82b3 (image 1894d82b3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d82b3(void)

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



// ===== continuation @ rva 94d8405 (image 1894d8405) =====

void FUN_1894d8405(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 94d83ec (image 1894d83ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d83ec(void)

{
  (*_DAT_181347658)();
  return;
}



// ===== continuation @ rva 94d83fd (image 1894d83fd) =====

void FUN_1894d83fd(void)

{
  return;
}



// ===== continuation @ rva 94d834d (image 1894d834d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d834d(void)

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



// ===== continuation @ rva 94d8311 (image 1894d8311) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894d8311(void)

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



// ===== continuation @ rva 94d83c5 (image 1894d83c5) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d83c5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181347648)();
  return;
}



// ===== continuation @ rva 94d82ec (image 1894d82ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894d82ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181347678)();
  return;
}



// ===== continuation @ rva 93a02e6 (image 1893a02e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a02e6(void)

{
  FUN_190dd72e0();
  (*_DAT_181305178)();
  return;
}



// ===== continuation @ rva 93a0273 (image 1893a0273) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0273(void)

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



// ===== continuation @ rva 93a03bd (image 1893a03bd) =====

void FUN_1893a03bd(void)

{
  return;
}



// ===== continuation @ rva 93a0385 (image 1893a0385) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0385(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181305168)();
  return;
}



// ===== continuation @ rva 93a03c5 (image 1893a03c5) =====

void FUN_1893a03c5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93a03ac (image 1893a03ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a03ac(void)

{
  (*_DAT_1813051d8)();
  return;
}



// ===== continuation @ rva 93a030d (image 1893a030d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a030d(void)

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



// ===== continuation @ rva 93a0361 (image 1893a0361) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0361(void)

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



// ===== continuation @ rva 93a02d1 (image 1893a02d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a02d1(void)

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



// ===== continuation @ rva 93a02ac (image 1893a02ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a02ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181305198)();
  return;
}



// ===== continuation @ rva 93a032e (image 1893a032e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a032e(void)

{
  FUN_190dd9df0();
  (*_DAT_181305188)();
  return;
}



// ===== continuation @ rva 93a04e6 (image 1893a04e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a04e6(void)

{
  FUN_190dd72e0();
  (*_DAT_1813052b8)();
  return;
}



// ===== continuation @ rva 93a0473 (image 1893a0473) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0473(void)

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



// ===== continuation @ rva 93a05c3 (image 1893a05c3) =====

void FUN_1893a05c3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93a0561 (image 1893a0561) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0561(void)

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



// ===== continuation @ rva 93a05bb (image 1893a05bb) =====

void FUN_1893a05bb(void)

{
  return;
}



// ===== continuation @ rva 93a0585 (image 1893a0585) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0585(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181305268)();
  return;
}



// ===== continuation @ rva 93a05ab (image 1893a05ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a05ab(void)

{
  (*_DAT_181305248)(0);
  return;
}



// ===== continuation @ rva 93a04ac (image 1893a04ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a04ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181305288)();
  return;
}



// ===== continuation @ rva 93a04d1 (image 1893a04d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a04d1(void)

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



// ===== continuation @ rva 93a06e6 (image 1893a06e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a06e6(void)

{
  FUN_190dd72e0();
  (*_DAT_181305348)();
  return;
}



// ===== continuation @ rva 93a0673 (image 1893a0673) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0673(void)

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



// ===== continuation @ rva 93a07bb (image 1893a07bb) =====

void FUN_1893a07bb(void)

{
  return;
}



// ===== continuation @ rva 93a072e (image 1893a072e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a072e(void)

{
  FUN_190dd9df0();
  (*_DAT_181305338)();
  return;
}



// ===== continuation @ rva 93a0785 (image 1893a0785) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0785(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181305358)();
  return;
}



// ===== continuation @ rva 93a07c3 (image 1893a07c3) =====

void FUN_1893a07c3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93a0761 (image 1893a0761) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0761(void)

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



// ===== continuation @ rva 93a070d (image 1893a070d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a070d(void)

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



// ===== continuation @ rva 93a07ab (image 1893a07ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a07ab(void)

{
  (*_DAT_181305398)(0);
  return;
}



// ===== continuation @ rva 93a06ac (image 1893a06ac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a06ac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181305378)();
  return;
}



// ===== continuation @ rva 93a06d1 (image 1893a06d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a06d1(void)

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



// ===== continuation @ rva 93a08e6 (image 1893a08e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a08e6(void)

{
  FUN_190dd72e0();
  (*_DAT_181305438)();
  return;
}



// ===== continuation @ rva 93a0873 (image 1893a0873) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0873(void)

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



// ===== continuation @ rva 93a09c3 (image 1893a09c3) =====

void FUN_1893a09c3(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93a0961 (image 1893a0961) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0961(void)

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



// ===== continuation @ rva 93a09bb (image 1893a09bb) =====

void FUN_1893a09bb(void)

{
  return;
}



// ===== continuation @ rva 93a0985 (image 1893a0985) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0985(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x300))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181305428)();
  return;
}



// ===== continuation @ rva 93a08d1 (image 1893a08d1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a08d1(void)

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



// ===== continuation @ rva 93a09ab (image 1893a09ab) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a09ab(void)

{
  (*_DAT_181305448)(0);
  return;
}



// ===== continuation @ rva 93a090d (image 1893a090d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a090d(void)

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



// ===== continuation @ rva 93a0ae6 (image 1893a0ae6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0ae6(void)

{
  FUN_190dd72e0();
  (*_DAT_181305508)();
  return;
}



// ===== continuation @ rva 93a0a73 (image 1893a0a73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0a73(void)

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



// ===== continuation @ rva 93a0bbd (image 1893a0bbd) =====

void FUN_1893a0bbd(void)

{
  return;
}



// ===== continuation @ rva 93a0b85 (image 1893a0b85) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0b85(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181305558)();
  return;
}



// ===== continuation @ rva 93a0bc5 (image 1893a0bc5) =====

void FUN_1893a0bc5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93a0ad1 (image 1893a0ad1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0ad1(void)

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



// ===== continuation @ rva 93a0b0d (image 1893a0b0d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0b0d(void)

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



// ===== continuation @ rva 93a0aac (image 1893a0aac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0aac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1813054f8)();
  return;
}



// ===== continuation @ rva 93a0b2e (image 1893a0b2e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0b2e(void)

{
  FUN_190dd9df0();
  (*_DAT_181305538)();
  return;
}



// ===== continuation @ rva 93a0b61 (image 1893a0b61) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0b61(void)

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



// ===== continuation @ rva 93a0ce6 (image 1893a0ce6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0ce6(void)

{
  FUN_190dd72e0();
  (*_DAT_1813055c8)();
  return;
}



// ===== continuation @ rva 93a0c73 (image 1893a0c73) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0c73(void)

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



// ===== continuation @ rva 93a0dbd (image 1893a0dbd) =====

void FUN_1893a0dbd(void)

{
  return;
}



// ===== continuation @ rva 93a0d2e (image 1893a0d2e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0d2e(void)

{
  FUN_190dd9df0();
  (*_DAT_181305638)();
  return;
}



// ===== continuation @ rva 93a0dc5 (image 1893a0dc5) =====

void FUN_1893a0dc5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93a0d0d (image 1893a0d0d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0d0d(void)

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



// ===== continuation @ rva 93a0dac (image 1893a0dac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0dac(void)

{
  (*_DAT_181305628)();
  return;
}



// ===== continuation @ rva 93a0cd1 (image 1893a0cd1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0cd1(void)

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



// ===== continuation @ rva 93a0d85 (image 1893a0d85) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0d85(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1813055d8)();
  return;
}



// ===== continuation @ rva 93a0cac (image 1893a0cac) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0cac(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1813055e8)();
  return;
}



// ===== continuation @ rva 93a0eeb (image 1893a0eeb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0eeb(void)

{
  FUN_190dd72e0();
  (*_DAT_1813056e8)();
  return;
}



// ===== continuation @ rva 93a0e78 (image 1893a0e78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0e78(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93a0fc2 (image 1893a0fc2) =====

void FUN_1893a0fc2(void)

{
  return;
}



// ===== continuation @ rva 93a0f8a (image 1893a0f8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0f8a(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181305718)();
  return;
}



// ===== continuation @ rva 93a0fcc (image 1893a0fcc) =====

void FUN_1893a0fcc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93a0ed6 (image 1893a0ed6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0ed6(void)

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



// ===== continuation @ rva 93a0eb1 (image 1893a0eb1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a0eb1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_1813056a8)();
  return;
}



// ===== continuation @ rva 93a0f66 (image 1893a0f66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0f66(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93a0f12 (image 1893a0f12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a0f12(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93a10eb (image 1893a10eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a10eb(void)

{
  FUN_190dd72e0();
  (*_DAT_1813057b8)();
  return;
}



// ===== continuation @ rva 93a1078 (image 1893a1078) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a1078(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93a11cc (image 1893a11cc) =====

void FUN_1893a11cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93a1166 (image 1893a1166) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a1166(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93a10d6 (image 1893a10d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a10d6(void)

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



// ===== continuation @ rva 93a11c2 (image 1893a11c2) =====

void FUN_1893a11c2(void)

{
  return;
}



// ===== continuation @ rva 93a1133 (image 1893a1133) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a1133(void)

{
  FUN_190dd9df0();
  (*_DAT_181305778)();
  return;
}



// ===== continuation @ rva 93a11b1 (image 1893a11b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a11b1(void)

{
  (*_DAT_1813057e8)();
  return;
}



// ===== continuation @ rva 93a1112 (image 1893a1112) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a1112(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93a118a (image 1893a118a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a118a(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_1813057a8)();
  return;
}



// ===== continuation @ rva 93a12eb (image 1893a12eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a12eb(void)

{
  FUN_190dd72e0();
  (*_DAT_181305898)();
  return;
}



// ===== continuation @ rva 93a1278 (image 1893a1278) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a1278(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93a13cc (image 1893a13cc) =====

void FUN_1893a13cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93a13c2 (image 1893a13c2) =====

void FUN_1893a13c2(void)

{
  return;
}



// ===== continuation @ rva 93a138a (image 1893a138a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a138a(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181305878)();
  return;
}



// ===== continuation @ rva 93a13b1 (image 1893a13b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a13b1(void)

{
  (*_DAT_181305858)();
  return;
}



// ===== continuation @ rva 93a1312 (image 1893a1312) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a1312(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93a1333 (image 1893a1333) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a1333(void)

{
  FUN_190dd9df0();
  (*_DAT_1813058c8)();
  return;
}



// ===== continuation @ rva 93a12d6 (image 1893a12d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a12d6(void)

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



// ===== continuation @ rva 93a14eb (image 1893a14eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a14eb(void)

{
  FUN_190dd72e0();
  (*_DAT_181305978)();
  return;
}



// ===== continuation @ rva 93a1478 (image 1893a1478) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a1478(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93a15cc (image 1893a15cc) =====

void FUN_1893a15cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93a14d6 (image 1893a14d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a14d6(void)

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



// ===== continuation @ rva 93a15c2 (image 1893a15c2) =====

void FUN_1893a15c2(void)

{
  return;
}



// ===== continuation @ rva 93a158a (image 1893a158a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a158a(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x348))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181305998)();
  return;
}



// ===== continuation @ rva 93a14b1 (image 1893a14b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a14b1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181305938)();
  return;
}



// ===== continuation @ rva 93a1512 (image 1893a1512) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893a1512(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93a15b1 (image 1893a15b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a15b1(void)

{
  (*_DAT_181305988)();
  return;
}



// ===== continuation @ rva 93d62de (image 1893d62de) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d62de(void)

{
  FUN_190dd72e0();
  (*_DAT_181314978)();
  return;
}



// ===== continuation @ rva 93d626b (image 1893d626b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d626b(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d63b5 (image 1893d63b5) =====

void FUN_1893d63b5(void)

{
  return;
}



// ===== continuation @ rva 93d62a4 (image 1893d62a4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d62a4(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314968)();
  return;
}



// ===== continuation @ rva 93d63c2 (image 1893d63c2) =====

void FUN_1893d63c2(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93d6359 (image 1893d6359) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6359(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d62c9 (image 1893d62c9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d62c9(void)

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



// ===== continuation @ rva 93d6305 (image 1893d6305) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6305(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6326 (image 1893d6326) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6326(void)

{
  FUN_190dd9df0();
  (*_DAT_181314948)();
  return;
}



// ===== continuation @ rva 93d64eb (image 1893d64eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d64eb(void)

{
  FUN_190dd72e0();
  (*_DAT_181314a18)();
  return;
}



// ===== continuation @ rva 93d6478 (image 1893d6478) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6478(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d65cc (image 1893d65cc) =====

void FUN_1893d65cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93d6512 (image 1893d6512) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6512(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d65b1 (image 1893d65b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d65b1(void)

{
  (*_DAT_181314a88)();
  return;
}



// ===== continuation @ rva 93d65c2 (image 1893d65c2) =====

void FUN_1893d65c2(void)

{
  return;
}



// ===== continuation @ rva 93d64b1 (image 1893d64b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d64b1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314a98)();
  return;
}



// ===== continuation @ rva 93d658a (image 1893d658a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d658a(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314a28)();
  return;
}



// ===== continuation @ rva 93d6566 (image 1893d6566) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6566(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6533 (image 1893d6533) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6533(void)

{
  FUN_190dd9df0();
  (*_DAT_181314a68)();
  return;
}



// ===== continuation @ rva 93d66eb (image 1893d66eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d66eb(void)

{
  FUN_190dd72e0();
  (*_DAT_181314b68)();
  return;
}



// ===== continuation @ rva 93d6678 (image 1893d6678) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6678(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d67c2 (image 1893d67c2) =====

void FUN_1893d67c2(void)

{
  return;
}



// ===== continuation @ rva 93d67cc (image 1893d67cc) =====

void FUN_1893d67cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93d67b1 (image 1893d67b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d67b1(void)

{
  (*_DAT_181314b28)();
  return;
}



// ===== continuation @ rva 93d66b1 (image 1893d66b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d66b1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314b58)();
  return;
}



// ===== continuation @ rva 93d6766 (image 1893d6766) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6766(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d678a (image 1893d678a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d678a(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314b08)();
  return;
}



// ===== continuation @ rva 93d66d6 (image 1893d66d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d66d6(void)

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



// ===== continuation @ rva 93d68eb (image 1893d68eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d68eb(void)

{
  FUN_190dd72e0();
  (*_DAT_181314c38)();
  return;
}



// ===== continuation @ rva 93d6878 (image 1893d6878) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6878(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d69c2 (image 1893d69c2) =====

void FUN_1893d69c2(void)

{
  return;
}



// ===== continuation @ rva 93d68b1 (image 1893d68b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d68b1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314bf8)();
  return;
}



// ===== continuation @ rva 93d69cc (image 1893d69cc) =====

void FUN_1893d69cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93d68d6 (image 1893d68d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d68d6(void)

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



// ===== continuation @ rva 93d6966 (image 1893d6966) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6966(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d69b1 (image 1893d69b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d69b1(void)

{
  (*_DAT_181314c08)();
  return;
}



// ===== continuation @ rva 93d6912 (image 1893d6912) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6912(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6aeb (image 1893d6aeb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6aeb(void)

{
  FUN_190dd72e0();
  (*_DAT_181314cb8)();
  return;
}



// ===== continuation @ rva 93d6a78 (image 1893d6a78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6a78(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6bcc (image 1893d6bcc) =====

void FUN_1893d6bcc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93d6b12 (image 1893d6b12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6b12(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6bc2 (image 1893d6bc2) =====

void FUN_1893d6bc2(void)

{
  return;
}



// ===== continuation @ rva 93d6ab1 (image 1893d6ab1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6ab1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314cf8)();
  return;
}



// ===== continuation @ rva 93d6b66 (image 1893d6b66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6b66(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6b33 (image 1893d6b33) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6b33(void)

{
  FUN_190dd9df0();
  (*_DAT_181314cd8)();
  return;
}



// ===== continuation @ rva 93d6ad6 (image 1893d6ad6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6ad6(void)

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



// ===== continuation @ rva 93d6b8a (image 1893d6b8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6b8a(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x348))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314d38)();
  return;
}



// ===== continuation @ rva 93d6ceb (image 1893d6ceb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6ceb(void)

{
  FUN_190dd72e0();
  (*_DAT_181314de8)();
  return;
}



// ===== continuation @ rva 93d6c78 (image 1893d6c78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6c78(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6dc2 (image 1893d6dc2) =====

void FUN_1893d6dc2(void)

{
  return;
}



// ===== continuation @ rva 93d6dcc (image 1893d6dcc) =====

void FUN_1893d6dcc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93d6db1 (image 1893d6db1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6db1(void)

{
  (*_DAT_181314df8)();
  return;
}



// ===== continuation @ rva 93d6cb1 (image 1893d6cb1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6cb1(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x70))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314e08)();
  return;
}



// ===== continuation @ rva 93d6d66 (image 1893d6d66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6d66(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6d8a (image 1893d6d8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6d8a(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x348))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314da8)();
  return;
}



// ===== continuation @ rva 93d6d12 (image 1893d6d12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6d12(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6eeb (image 1893d6eeb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6eeb(void)

{
  FUN_190dd72e0();
  (*_DAT_181314ec8)();
  return;
}



// ===== continuation @ rva 93d6e78 (image 1893d6e78) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6e78(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6fcc (image 1893d6fcc) =====

void FUN_1893d6fcc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93d6fc2 (image 1893d6fc2) =====

void FUN_1893d6fc2(void)

{
  return;
}



// ===== continuation @ rva 93d6fb1 (image 1893d6fb1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6fb1(void)

{
  (*_DAT_181314e78)();
  return;
}



// ===== continuation @ rva 93d6f8a (image 1893d6f8a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6f8a(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314e98)();
  return;
}



// ===== continuation @ rva 93d6f66 (image 1893d6f66) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6f66(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6f12 (image 1893d6f12) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d6f12(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d6f33 (image 1893d6f33) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d6f33(void)

{
  FUN_190dd9df0();
  (*_DAT_181314eb8)();
  return;
}



// ===== continuation @ rva 93d70eb (image 1893d70eb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d70eb(void)

{
  FUN_190dd72e0();
  (*_DAT_181314f58)();
  return;
}



// ===== continuation @ rva 93d7078 (image 1893d7078) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d7078(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d71cc (image 1893d71cc) =====

void FUN_1893d71cc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93d7112 (image 1893d7112) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d7112(void)

{
  char cVar1;
  longlong *unaff_RDI;
  
  cVar1 = (**(code **)(*unaff_RDI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d71c2 (image 1893d71c2) =====

void FUN_1893d71c2(void)

{
  return;
}



// ===== continuation @ rva 93d7133 (image 1893d7133) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d7133(void)

{
  FUN_190dd9df0();
  (*_DAT_181314fd8)();
  return;
}



// ===== continuation @ rva 93d71b1 (image 1893d71b1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d71b1(void)

{
  (*_DAT_181314f78)();
  return;
}



// ===== continuation @ rva 93d70d6 (image 1893d70d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d70d6(void)

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



// ===== continuation @ rva 93d718a (image 1893d718a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d718a(void)

{
  longlong *unaff_RDI;
  
  (**(code **)(*unaff_RDI + 0x340))();
  (**(code **)(*unaff_RDI + 0x720))();
  (*_DAT_181314f88)();
  return;
}



// ===== continuation @ rva 93d73d6 (image 1893d73d6) =====

void FUN_1893d73d6(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(*unaff_RSI + 0x558))();
  *(uint *)(unaff_RBP + 0x60) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x68) = *(undefined8 *)(unaff_RBP + 0x60);
  *(longlong **)(unaff_RBP + 0x90) = unaff_RSI;
                    /* WARNING: Could not recover jumptable at 0x0001893d7408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1813153f0 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva 93d7383 (image 1893d7383) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001893d73b9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1893d7383(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 93d75f0 (image 1893d75f0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d75f0(void)

{
  byte bVar1;
  ulonglong in_RAX;
  ulonglong uVar2;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong in_R9;
  ulonglong unaff_R12;
  ulonglong unaff_R14;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint unaff_XMM10_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  *(char *)(unaff_RBP + 0x40) =
       (char)unaff_ESI + (char)(uint)((ulonglong)unaff_ESI * in_R9 >> 0x23) * -10;
  uVar2 = (~_DAT_183211968 + 0x66) *
          ((_DAT_183211ea0 ^ 0x84222315) + (ulonglong)((uint)_DAT_183211ea0 & 0x84222315) * 2);
  uVar2 = (uVar2 | _DAT_183211a38) + (uVar2 & _DAT_183211a38);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183211918 = func_0x0001894011e0((uVar2 | 0x84222370) + (ulonglong)((uint)uVar2 & 0x84222370))
  ;
  _DAT_183211dd0 = _DAT_183211c98 ^ _DAT_183211918 ^ 0x95;
  _DAT_183211e80 = (_DAT_183211e80 ^ _DAT_183211918) + 0x95 ^ 0x24eea58c03c50575;
  _DAT_183211ef8 = (_DAT_183211ef8 * 0x415ef32bdf4645ab ^ _DAT_183211e80) + _DAT_183211918;
  _DAT_183211af0 = _DAT_183211ef8 ^ _DAT_183211e80;
  _DAT_183211cd8 = 0x95;
  uVar2 = (~_DAT_183211b68 + 0x9c) *
          ((_DAT_183211b30 ^ 0x842223b0) + (ulonglong)((uint)_DAT_183211b30 & 0x842223b0) * 2);
  uVar2 = (uVar2 | _DAT_183211d78) + (uVar2 & _DAT_183211d78);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183211da0 = func_0x0001894011e0((uVar2 | 0x8422232b) + (ulonglong)((uint)uVar2 & 0x8422232b))
  ;
  uVar2 = _DAT_183211da0 << 0x26 | _DAT_183211da0 >> 0x1a;
  _DAT_183211b98 = _DAT_183211e78 ^ uVar2 ^ 0x130;
  _DAT_183211c30 = (_DAT_183211c30 ^ uVar2) + 0x130 ^ 0xbd8b72e04e03aa37;
  _DAT_183211d28 = (_DAT_183211d28 * 0x360a38a5365835fd ^ _DAT_183211c30) + uVar2;
  _DAT_183211c28 = _DAT_183211d28 ^ _DAT_183211c30;
  _DAT_183211e68 = 0x30;
  _DAT_183211dd8 = func_0x0001894011e0(_DAT_183211ce8 + 0xffe30083650021ffU ^ 0x45);
  uVar2 = (_DAT_183211dd8 ^ 0x4a40) & 0x1fffffffffffff;
  _DAT_183211ea8 = _DAT_183211c60 ^ uVar2 ^ 0x130;
  _DAT_183211bf0 = (_DAT_183211bf0 ^ uVar2) + 0x130 ^ 0x4ebd538a10b2a547;
  _DAT_183211be0 = (_DAT_183211be0 * -0x4381e49dbbcf9f7b ^ _DAT_183211bf0) + uVar2;
  _DAT_183211990 = _DAT_183211be0 ^ _DAT_183211bf0;
  _DAT_183211e48 = 0x30;
  uVar2 = (~_DAT_183211b08 + 0x51) *
          ((_DAT_183211988 ^ unaff_R12) + (ulonglong)((uint)_DAT_183211988 & 0x84222325) * 2);
  uVar2 = (uVar2 | _DAT_183211d70) + (uVar2 & _DAT_183211d70);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832119b8 = func_0x0001894011e0((uVar2 | 0x84222375) + (ulonglong)((uint)uVar2 & 0x84222375))
  ;
  _DAT_183211c58 = _DAT_183211c58 - 0x50 ^ 0xd8743e4119576065;
  _DAT_183211aa0 = _DAT_183211b50 * 0x6b998107f9b0ed8d;
  _DAT_183211b50 = _DAT_183211aa0 ^ _DAT_183211c58;
  _DAT_183211a78 = 0xb0;
  uVar2 = (_DAT_183211ad0 ^ _DAT_18011c5e0) + _DAT_183211a30 + 0x84222315;
  uVar7 = (_DAT_183211a30 ^ _UNK_18011c5e8) + _DAT_183211ad0 + 0x50;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183211ad0 ^ _DAT_18011c5e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183211a30 ^ _UNK_18011c5e8;
  _DAT_183211af8 =
       func_0x0001894011e0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183211ad0 + 0x50) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183211a30 + 0x84222315));
  uVar2 = _DAT_183211af8 << 0x1a | _DAT_183211af8 >> 0x26;
  _DAT_183211be0 = _DAT_183211cc8 ^ uVar2 ^ 0x80;
  _DAT_183211970 = (_DAT_183211970 ^ uVar2) + 0x80 ^ 0x738977abae48868c;
  _DAT_183211ea8 = (_DAT_183211ea8 * -0x7026a504c5076465 ^ _DAT_183211970) + uVar2;
  _DAT_183211af0 = 0x80;
  uVar2 = (~_DAT_183211b20 + 0x30) *
          ((_DAT_183211ef8 ^ 0x8422237e) + (ulonglong)((uint)_DAT_183211ef8 & 0x8422237e) * 2);
  uVar2 = (uVar2 | _DAT_183211930) + (uVar2 & _DAT_183211930);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183211de0 = func_0x0001894011e0((uVar2 | unaff_R14) + (ulonglong)((uint)uVar2 & 0x84222351));
  uVar2 = (_DAT_183211de0 ^ *(ulonglong *)(unaff_RBP + 0x20)) & 0x7fffffffc0000000;
  _DAT_183211e58 = _DAT_183211c20 ^ uVar2 ^ 0x8a;
  _DAT_183211df8 = (_DAT_183211df8 ^ uVar2) + 0x8a ^ 0x636fbf1ca9c34948;
  _DAT_183211900 = (_DAT_183211900 * -0x1962768bc00539f ^ _DAT_183211df8) + uVar2;
  _DAT_183211c70 = _DAT_183211900 ^ _DAT_183211df8;
  _DAT_1832119b8 = 0x8a;
  uVar2 = (_DAT_183211e90 ^ _DAT_1813163e0) + _DAT_183211940 + 0x8422237e;
  uVar7 = (_DAT_183211940 ^ _UNK_1813163e8) + _DAT_183211e90 + 0x2f;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183211e90 ^ _DAT_1813163e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183211940 ^ _UNK_1813163e8;
  _DAT_183211b10 =
       func_0x0001894011e0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183211e90 + 0x2f) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183211940 + 0x8422237e));
  uVar2 = (ulonglong)(~(uint)_DAT_183211b10 & 0x5b);
  _DAT_183211ad8 = (_DAT_183211ad8 ^ uVar2) + 0x74 ^ 0xe91f404e60dbaa8c;
  _DAT_183211a90 = (_DAT_183211a90 * -0x5c1cb8b38dbeb5b7 ^ _DAT_183211ad8) + uVar2;
  _DAT_183211e08 = _DAT_183211a90 ^ _DAT_183211ad8;
  _DAT_183211ae8 = 0x74;
  uVar2 = (~_DAT_183211970 + 0x30) *
          ((_DAT_183211938 ^ 0x8422237e) + (ulonglong)((uint)_DAT_183211938 & 0x8422237e) * 2);
  uVar2 = (uVar2 | _DAT_183211ed0) + (uVar2 & _DAT_183211ed0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183211998 = func_0x0001894011e0((uVar2 | unaff_R14) + (ulonglong)((uint)uVar2 & 0x84222351));
  uVar2 = (ulonglong)(~(uint)_DAT_183211998 & 0x5b);
  _DAT_183211ed8 = (_DAT_183211ed8 ^ uVar2) + 0xb ^ 0xf95ff40df5b77a85;
  _DAT_183211ab0 = (_DAT_183211ab0 * -0x615557ac8f9d3e91 ^ _DAT_183211ed8) + uVar2;
  _DAT_183211e50 = _DAT_183211ab0 ^ _DAT_183211ed8;
  _DAT_1832119b0 = 0xb;
  uVar2 = (~_DAT_183211a78 + 0x17) *
          ((_DAT_183211cb0 ^ unaff_R14) + (ulonglong)((uint)_DAT_183211cb0 & 0x84222351) * 2);
  uVar2 = (uVar2 | _DAT_183211900) + (uVar2 & _DAT_183211900);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183211a78 = func_0x0001894011e0((uVar2 | 0x84222347) + (ulonglong)((uint)uVar2 & 0x84222347))
  ;
  uVar2 = _DAT_183211a78 - (_DAT_183211a78 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar2 = (uint)bVar1 + (uint)bVar1 ^ _DAT_183211a78;
  _DAT_183211ab8 = _DAT_183211920 ^ uVar2 ^ 0x8a;
  _DAT_183211978 = (_DAT_183211978 ^ uVar2) + 0x8a ^ 0xb1b9196f1efe1494;
  _DAT_183211e78 = (_DAT_183211e78 * 0x5265088692d1fbef ^ _DAT_183211978) + uVar2;
  _DAT_183211ce0 = _DAT_183211e78 ^ _DAT_183211978;
  _DAT_183211a30 = 0x8a;
  _DAT_183211a38 = func_0x0001894011e0(_DAT_183211a08 + 0x20ff83daffddff ^ 0x43);
  _DAT_183211cb0 = _DAT_183211a38 & 0x1ffffffffffff;
  _DAT_183211b08 = _DAT_183211b08 ^ _DAT_183211cb0 ^ 0x7ff9b71885f316d4;
  _DAT_183211cf8 = (_DAT_183211cf8 * 0x3614739417d5064d ^ _DAT_183211b08) + _DAT_183211cb0;
  _DAT_183211e80 = _DAT_183211cf8 ^ _DAT_183211b08;
  _DAT_183211ed0 = 0;
  uVar2 = (_DAT_183211dc8 ^ 0x84222315) + _DAT_183211cd8 + 0x84222315;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183211dc8 ^ 0x84222315;
  uVar7 = ((_DAT_183211cd8 + _DAT_183211dc8) * 0x2000 | _DAT_183211cd8 + _DAT_183211dc8 >> 0x33) ^
          _DAT_183211cd8;
  _DAT_183211a28 =
       func_0x0001894011e0((uVar7 << 0x1d | uVar7 >> 0x23) - _DAT_183211dc8 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183211cd8 + 0x84222315));
  uVar2 = _DAT_183211a28 ^ 0x30;
  _DAT_183211e88 = _DAT_183211c18 ^ uVar2 ^ 0x30;
  _DAT_1832119f8 = (_DAT_1832119f8 ^ uVar2) + 0x30 ^ 0xdb8718a3377cb229;
  _DAT_183211e48 = (_DAT_183211e48 * 0x1902c18de2458f13 ^ _DAT_1832119f8) + uVar2;
  _DAT_183211cf0 = _DAT_183211e48 ^ _DAT_1832119f8;
  _DAT_183211ac0 = 0x30;
  uVar2 = (~_DAT_183211ee8 + 0x100) *
          ((_DAT_183211930 ^ 0x8422237e) + (ulonglong)((uint)_DAT_183211930 & 0x8422237e) * 2);
  uVar2 = (uVar2 | _DAT_183211cd0) + (uVar2 & _DAT_183211cd0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183211cd8 = func_0x0001894011e0((uVar2 | 0x84222381) + (ulonglong)((uint)uVar2 & 0x84222381))
  ;
  _DAT_183211c60 =
       (_DAT_183211c60 ^ _DAT_183211cd8 & 0x7ffffffffffffffe) + 0xa4 ^ 0xc9ad2f5d0870e41d;
  _DAT_183211da0 =
       (_DAT_183211da0 * 0x1f164038433c8a71 ^ _DAT_183211c60) +
       (_DAT_183211cd8 & 0x7ffffffffffffffe);
  _DAT_183211b00 = _DAT_183211da0 ^ _DAT_183211c60;
  _DAT_183211b10 = 0xa4;
  uVar2 = (_DAT_183211b00 ^ _DAT_1813163f0) + _DAT_1832119a0 + 0x8422237e;
  uVar7 = (_DAT_1832119a0 ^ _UNK_1813163f8) + _DAT_183211b00 + 0xa4;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183211b00 ^ _DAT_1813163f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_1832119a0 ^ _UNK_1813163f8;
  _DAT_183211c90 =
       func_0x0001894011e0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183211b00 + 0xa4) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832119a0 + 0x8422237e));
  uVar2 = _DAT_183211c90 * 0x1d3b7decf6a16beb ^ 0xa4;
  _DAT_183211c88 = _DAT_183211c88 ^ uVar2 ^ 0xb5f65dcee573ccbe;
  _DAT_183211ec0 = (_DAT_183211ec0 * -0x5fd5adc6c9c75749 ^ _DAT_183211c88) + uVar2;
  _DAT_183211a98 = _DAT_183211ec0 ^ _DAT_183211c88;
  _DAT_183211b30 = 0;
  uVar2 = (~_DAT_183211bc8 + 0x5c) *
          ((_DAT_183211a80 ^ 0x8422237e) + (ulonglong)((uint)_DAT_183211a80 & 0x8422237e) * 2);
  uVar2 = (uVar2 | _DAT_183211a08) + (uVar2 & _DAT_183211a08);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183211950 = func_0x0001894011e0((uVar2 | unaff_R12) + (ulonglong)((uint)uVar2 & 0x84222325));
  uVar2 = (ulonglong)(~((int)_DAT_183211950 * 0x5627526b) & 0x5b);
  _DAT_183211928 = _DAT_183211928 ^ uVar2 ^ 0xeccfc228498d6a70;
  _DAT_183211bc8 = (_DAT_183211bc8 * -0x7d5f891fabaad9f3 ^ _DAT_183211928) + uVar2;
  _DAT_183211b88 = _DAT_183211bc8 ^ _DAT_183211928;
  _DAT_183211a68 = 0;
  bVar1 = *(byte *)(unaff_RBP + 0x40);
  auVar3._8_8_ = _UNK_180145388;
  auVar3._0_8_ = bVar1 ^ unaff_R12;
  auVar4 = pshufb(auVar3 ^ _DAT_181316400,_DAT_1800170c0);
  uVar7 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar7 + _DAT_183211970;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_183211c60 ^ uVar7;
  }
  _DAT_183211be8 = func_0x0001894011e0(SUB161(auVar3 ^ _DAT_181316400,5) ^ uVar2);
  uVar7 = (ulonglong)bVar1 | 0x30;
  _DAT_183211bf8 = (_DAT_183211bf8 ^ _DAT_183211be8) + uVar7 ^ 0x4cf6f0ce44db3227;
  _DAT_183211e80 = (_DAT_183211e80 * 0x3d4f73ab48d9d48d ^ _DAT_183211bf8) + _DAT_183211be8;
  _DAT_183211970 = _DAT_183211e80 ^ _DAT_183211bf8;
  uVar2 = ~_DAT_183211d20 *
          ((in_RAX ^ unaff_R12 ^ _DAT_1832119d0) + ((in_RAX ^ unaff_R12) & _DAT_1832119d0) * 2);
  uVar2 = (uVar2 | _DAT_183211b08) + (uVar2 & _DAT_183211b08);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183211e00 = uVar7;
  _DAT_183211ae0 =
       func_0x0001894011e0((in_RAX ^ 0xffffffff7bdddcda | uVar2) +
                           (uVar2 & (in_RAX ^ 0xffffffff7bdddcda)));
  uVar2 = ~_DAT_183211ae0 & in_RAX;
  uVar5 = (uint)(in_RAX >> 0x20);
  auVar4._8_4_ = (int)in_RAX;
  auVar4._0_8_ = in_RAX;
  auVar4._12_4_ = uVar5;
  uVar8 = SUB168(auVar4 ^ _DAT_18001a710,0);
  uVar6 = SUB164(auVar4 ^ _DAT_18001a710,0);
  lVar9 = ((in_RAX & 0xffffffff) * (ulonglong)_DAT_181316480 +
           (ulonglong)uVar5 * (ulonglong)unaff_XMM10_Da << 0x20) +
          (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM10_Da;
  _DAT_183211c88 =
       ((((in_RAX & 0xffffffff) * (ulonglong)_DAT_181316440 +
          (in_RAX >> 0x20) * (ulonglong)_DAT_181316430 << 0x20) +
         (in_RAX & 0xffffffff) * (ulonglong)_DAT_181316430 +
         ((in_RAX & 0xffffffff) * (ulonglong)_DAT_181316420 +
          (in_RAX >> 0x20) * (ulonglong)_DAT_181316410 << 0x20) +
         (in_RAX & 0xffffffff) * (ulonglong)_DAT_181316410 + lVar9 +
        (ulonglong)uVar6 * (ulonglong)unaff_XMM14_Da +
        ((ulonglong)uVar6 * (ulonglong)_DAT_181316460 + (uVar8 >> 0x20) * (ulonglong)unaff_XMM14_Da
        << 0x20)) -
       (((in_RAX & 0xffffffff) * (ulonglong)_DAT_1813164c0 +
         (in_RAX >> 0x20) * (ulonglong)unaff_XMM13_Da << 0x20) +
        (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM13_Da +
        ((in_RAX & 0xffffffff) * (ulonglong)_DAT_1813164a0 +
         (in_RAX >> 0x20) * (ulonglong)unaff_XMM15_Da << 0x20) +
        (in_RAX & 0xffffffff) * (ulonglong)unaff_XMM15_Da + lVar9 +
       (ulonglong)uVar6 * (ulonglong)unaff_XMM12_Da +
       ((ulonglong)uVar6 * (ulonglong)_DAT_1813164e0 + (uVar8 >> 0x20) * (ulonglong)unaff_XMM12_Da
       << 0x20))) + 0x6e63fcfbbb08bfec;
  _DAT_183211ba0 = _DAT_183211cb0 ^ uVar2 ^ _DAT_183211c88;
  _DAT_183211e38 = (_DAT_183211e38 ^ uVar2) + _DAT_183211c88 ^ 0xf8001bc8c0cef5e1;
  _DAT_183211a98 = (_DAT_183211a98 * -0x10b0c639f512f39f ^ _DAT_183211e38) + uVar2;
  _DAT_183211a10 = _DAT_183211a98 ^ _DAT_183211e38;
  *(char *)(unaff_RBP + -0x50 + _DAT_183211c88) = (char)uVar7;
  switch(unaff_ESI < 10) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93d87bc (image 1893d87bc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d87bc(void)

{
  longlong lVar1;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong unaff_XMM6_Qa;
  uint unaff_XMM7_Da;
  longlong lVar8;
  
  uVar4 = (_DAT_183211d00 ^ _DAT_1813164f0) + _DAT_183211d48 + 0x84222325;
  uVar5 = (_DAT_183211d48 ^ _UNK_1813164f8) + _DAT_183211d00 + 0xd0ae29cf121334f;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211d00 ^ _DAT_1813164f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183211d48 ^ _UNK_1813164f8;
  _DAT_183211af8 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183211d00 + 0xd0ae29cf121334f) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211d48 + 0x84222325));
  _DAT_183211b18 = _DAT_183211b18 + 0xf2f51d630edeccb1 ^ 0x41dd955675a34f0e;
  _DAT_183211c40 = _DAT_183211ac0 * 0x581f9195b2593bef;
  _DAT_183211ac0 = _DAT_183211c40 ^ _DAT_183211b18;
  _DAT_183211930 = 0xf2f51d630edeccb1;
  _DAT_183211920 = func_0x0001894011e0(_DAT_183211db8 + 0xdda2b37a6c0b0bcd ^ 0x34);
  uVar4 = ~_DAT_183211920 & 0xfffffffffffffffe;
  uVar5 = ~_DAT_183211920 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = 0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4;
  _DAT_183211c70 = _DAT_183211910 ^ uVar4 ^ 0xd0ae29cf121334d;
  _DAT_183211c30 = (_DAT_183211c30 ^ uVar4) + 0xd0ae29cf121334d ^ 0x669a66e8612552d9;
  _DAT_183211ab8 = (_DAT_183211ab8 * -0x3cdaf18df8f9e10d ^ _DAT_183211c30) + uVar4;
  _DAT_183211cb8 = _DAT_183211ab8 ^ _DAT_183211c30;
  _DAT_183211c80 = 0xd0ae29cf121334d;
  uVar4 = (~_DAT_183211a98 + 0xf2f51d630edeccb2) *
          ((_DAT_183211bc8 ^ 0xd0ae29c75031068) + (_DAT_183211bc8 & 0xd0ae29c75031068) * 2);
  uVar4 = (uVar4 | _DAT_183211c38) + (uVar4 & _DAT_183211c38);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183211da8 = func_0x0001894011e0((uVar4 | 0xffffffff7bdddcd9) + (uVar4 & 0xffffffff7bdddcd9));
  uVar4 = (_DAT_183211da8 ^ 0xafbc3a08df9bd43d) << 0x2b |
          (_DAT_183211da8 ^ 0xafbc3a08df9bd43d) >> 0x15;
  _DAT_183211ad8 = _DAT_183211c48 ^ uVar4 ^ 0xfffffffffffffffe;
  _DAT_183211d90 = (_DAT_183211d90 ^ uVar4) - 2 ^ 0xb50bf6fe2fb706f3;
  _DAT_183211b10 = (_DAT_183211b10 * -0x36b4050cff378b19 ^ _DAT_183211d90) + uVar4;
  _DAT_183211920 = _DAT_183211b10 ^ _DAT_183211d90;
  _DAT_183211c50 = 0xfffffffffffffffe;
  uVar4 = (_DAT_183211a98 ^ _DAT_181316500) + _DAT_183211b48 + 0x84222325;
  uVar5 = (_DAT_183211b48 ^ _UNK_181316508) + _DAT_183211a98 + 0x6a563f45485a90b6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211a98 ^ _DAT_181316500;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183211b48 ^ _UNK_181316508;
  _DAT_183211ed0 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183211a98 + 0x6a563f45485a90b6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211b48 + 0x84222325));
  _DAT_183211ad8 =
       (_DAT_183211ad8 ^ _DAT_183211ed0 ^ 0x6a563f45485a90b6) + 0x95a9c0bab7a56f4a ^
       0xdb840595f6c794c4;
  _DAT_1832119c0 =
       (_DAT_1832119c0 * 0x731ddaf320bcc927 ^ _DAT_183211ad8) +
       (_DAT_183211ed0 ^ 0x6a563f45485a90b6);
  _DAT_1832119f0 = _DAT_1832119c0 ^ _DAT_183211ad8;
  _DAT_183211b10 = 0x95a9c0bab7a56f4a;
  uVar4 = (~_DAT_183211d88 + 0x6a563f45485a90b7) *
          ((_DAT_183211df8 ^ 0xffffffff7bdddcdb) + (_DAT_183211df8 & 0x7fffffff7bdddcdb) * 2);
  uVar4 = (uVar4 | _DAT_183211cb8) + (uVar4 & _DAT_183211cb8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183211c98 = func_0x0001894011e0((uVar4 | 0x95a9c0ba33874c6d) + (uVar4 & 0x95a9c0ba33874c6d));
  uVar4 = _DAT_183211c98 ^ 0xfffffffffffffffe;
  _DAT_183211910 = _DAT_183211bf8 ^ uVar4 ^ 0x6a563f45485a90b4;
  _DAT_183211da8 = (_DAT_183211da8 ^ uVar4) + 0x6a563f45485a90b4 ^ 0x9844d285009be246;
  _DAT_183211b00 = (_DAT_183211cb8 * -0x5a77bc3275568b89 ^ _DAT_183211da8) + uVar4 ^ _DAT_183211da8;
  _DAT_183211cb8 = 0x6a563f45485a90b4;
  _DAT_183211ac8 = func_0x0001894011e0(_DAT_183211c10 + 0x952b852725532c7e ^ 0xa9);
  uVar4 = (_DAT_183211ac8 ^ 0xfffffffffffffffe) << 0x1a |
          (_DAT_183211ac8 ^ 0xfffffffffffffffe) >> 0x26;
  _DAT_183211e68 = _DAT_183211c10 ^ uVar4 ^ 0xfffffffffffffffe;
  _DAT_183211ba8 = (_DAT_183211ba8 ^ uVar4) - 2 ^ 0x604cc5da859f6e3c;
  _DAT_183211a80 = (_DAT_183211a80 * -0x94380b7eee0e325 ^ _DAT_183211ba8) + uVar4;
  _DAT_183211cc8 = _DAT_183211a80 ^ _DAT_183211ba8;
  _DAT_183211ca8 = 0xfffffffffffffffe;
  uVar4 = (~_DAT_183211e60 + 0x4d3978f364736606) *
          ((_DAT_183211988 ^ 0xb2c6870c1faebadc) + (_DAT_183211988 & 0x32c6870c1faebadc) * 2);
  uVar4 = (uVar4 | _DAT_183211c58) + (uVar4 & _DAT_183211c58);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183211960 = func_0x0001894011e0((uVar4 | 0xffffffff7bdddcd9) + (uVar4 & 0xffffffff7bdddcd9));
  uVar4 = _DAT_183211960 ^ 0xa6092c11198051d8;
  _DAT_183211b70 = _DAT_183211cb8 ^ uVar4 ^ 0xfffffffffffffffe;
  _DAT_183211e78 = (_DAT_183211e78 ^ uVar4) - 2 ^ 0x7b90e885941f41c1;
  _DAT_183211a78 = (_DAT_183211a78 * -0x29bc47646e3d0d6d ^ _DAT_183211e78) + uVar4;
  _DAT_183211c40 = _DAT_183211a78 ^ _DAT_183211e78;
  _DAT_183211ed0 = 0xfffffffffffffffe;
  _DAT_183211db0 = func_0x0001894011e0(_DAT_183211948 + 0xaf49692633109b82U ^ 0x49);
  uVar4 = (_DAT_183211db0 ^ 0xbffdffdafddfddff) & 0x7fffffffffffffff;
  _DAT_183211a98 = _DAT_183211970 ^ uVar4 ^ 0xfc128e659df92614;
  _DAT_183211a28 = (_DAT_183211a28 ^ uVar4) + 0xfc128e659df92614 ^ 0x6ad1dc134123e378;
  _DAT_183211ad0 = (_DAT_183211ad0 * 0x564f13a475bf67cd ^ _DAT_183211a28) + uVar4;
  _DAT_183211b50 = _DAT_183211ad0 ^ _DAT_183211a28;
  _DAT_183211b30 = 0xfc128e659df92614;
  uVar4 = (_DAT_183211ee8 ^ _DAT_181316510) + _DAT_183211a10 + 0x3cf4feca69fdeada;
  uVar5 = (_DAT_183211a10 ^ _UNK_181316518) + _DAT_183211ee8 + 0xbf1d8f9ab0195c15;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211ee8 ^ _DAT_181316510;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183211a10 ^ _UNK_181316518;
  _DAT_183211cd8 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183211ee8 + 0xbf1d8f9ab0195c15) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211a10 + 0x3cf4feca69fdeada));
  _DAT_183211c70 = (_DAT_183211c70 ^ _DAT_183211cd8) + 0x3c148e8aa0194815 ^ 0xad611194be7c6559;
  _DAT_1832119a8 = (_DAT_1832119a8 * 0x761ff7c6f8835bfd ^ _DAT_183211c70) + _DAT_183211cd8;
  _DAT_183211940 = _DAT_1832119a8 ^ _DAT_183211c70;
  _DAT_183211ca8 = 0x3c148e8aa0194815;
  uVar4 = (~_DAT_183211d90 + 0x78291d154032902b) *
          ((_DAT_183211918 ^ 0x83e97150d9e4b6cf) + (_DAT_183211918 & 0x3e97150d9e4b6cf) * 2);
  uVar4 = (uVar4 | _DAT_183211a80) + (uVar4 & _DAT_183211a80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183211980 = func_0x0001894011e0((uVar4 | 0xfbc06c4599d626e5) + (uVar4 & 0xfbc06c4599d626e5));
  uVar4 = _DAT_183211980 ^ 0x78291d154032902a;
  _DAT_183211a88 = _DAT_183211a68 ^ uVar4 ^ 0xfc128e659df92614;
  _DAT_183211e30 = (_DAT_183211e30 ^ uVar4) + 0xfc128e659df92614 ^ 0xfdc16f7f8fc62b1d;
  _DAT_183211c20 = (_DAT_183211c20 * -0x7a258dd2967ec7b7 ^ _DAT_183211e30) + uVar4;
  _DAT_183211930 = _DAT_183211c20 ^ _DAT_183211e30;
  _DAT_183211d88 = 0xfc128e659df92614;
  uVar4 = (_DAT_183211ad0 ^ _DAT_181316520) + _DAT_183211d90 + 0xfc128e6519db0531;
  uVar5 = (_DAT_183211d90 ^ _UNK_181316528) + _DAT_183211ad0 + 0xfc128e659df92614;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211ad0 ^ _DAT_181316520;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183211d90 ^ _UNK_181316528;
  _DAT_183211eb8 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183211ad0 + 0xfc128e659df92614) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211d90 + 0xfc128e6519db0531));
  _DAT_183211a00 = _DAT_183211eb8 ^ 0x2921c6f7a091f190;
  _DAT_183211d38 = _DAT_183211d38 ^ _DAT_183211a00 ^ 0xfa82b9b3e21d9674;
  _DAT_183211be0 = (_DAT_183211be0 * -0x22f8a3c970e970b9 ^ _DAT_183211d38) + _DAT_183211a00;
  _DAT_1832119b8 = _DAT_183211be0 ^ _DAT_183211d38;
  _DAT_183211e50 = 0;
  uVar4 = ((_DAT_183211990 ^ 0xffffffff7bdddcdb) + (_DAT_183211990 & 0x7fffffff7bdddcdb) * 2) *
          -_DAT_183211ba8;
  uVar4 = (uVar4 | _DAT_183211b30) + (uVar4 & _DAT_183211b30);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183211b18 = func_0x0001894011e0((uVar4 | 0xffffffff7bdddcdb) + (uVar4 & 0xffffffff7bdddcdb));
  uVar4 = ~_DAT_183211b18 & 0xfffffffffffffffe;
  _DAT_183211970 = _DAT_183211920 ^ uVar4 ^ 0xfffffffffffffffe;
  _DAT_183211b40 = (_DAT_183211b40 ^ uVar4) - 2 ^ 0x8656bcc1dc584f5d;
  _DAT_183211c60 = (_DAT_183211c60 * -0x633cca521197b785 ^ _DAT_183211b40) + uVar4;
  _DAT_183211cb8 = _DAT_183211c60 ^ _DAT_183211b40;
  _DAT_183211bb8 = 0xfffffffffffffffe;
  _DAT_183211d08 = func_0x0001894011e0(_DAT_183211b30 ^ 0x33150a721cfefd5e);
  _DAT_183211a90 = (_DAT_183211a90 ^ _DAT_183211d40) + 0xc30b013512203600 ^ 0xe84ea5a885cf1e03;
  _DAT_183211e30 = (_DAT_183211e30 * 0x6da58408e6b84cfb ^ _DAT_183211a90) + _DAT_183211d40;
  _DAT_183211d98 = _DAT_183211e30 ^ _DAT_183211a90;
  _DAT_183211938 = 0xc30b013512203600;
  uVar4 = (_DAT_1832119f0 ^ _DAT_181316530) + _DAT_183211ad0 + 0x3cf4feca69fdeada;
  uVar5 = (_DAT_183211ad0 ^ _UNK_181316538) + _DAT_1832119f0 + 0xc30b013512203600;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832119f0 ^ _DAT_181316530;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183211ad0 ^ _UNK_181316538;
  _DAT_183211b98 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832119f0 + 0xc30b013512203600) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211ad0 + 0x3cf4feca69fdeada));
  uVar4 = _DAT_183211b98 - (_DAT_183211b98 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          _DAT_183211b98;
  _DAT_183211920 = _DAT_183211920 ^ uVar4 ^ 0xb2d3298aa36a033c;
  _DAT_1832119f8 = (_DAT_1832119f8 * 0x45bb9d8e67a324dd ^ _DAT_183211920) + uVar4;
  _DAT_183211c30 = _DAT_1832119f8 ^ _DAT_183211920;
  _DAT_183211a68 = 0;
  uVar4 = (_DAT_183211ea0 ^ 0xffffffff7bdddcdb) + (_DAT_183211a00 - 0x84222325);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211ea0 ^ 0xffffffff7bdddcdb;
  uVar5 = ((_DAT_183211a00 + _DAT_183211ea0) * 0x2000 | _DAT_183211a00 + _DAT_183211ea0 >> 0x33) ^
          _DAT_183211a00;
  _DAT_183211e00 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_183211ea0 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211a00 - 0x84222325));
  uVar4 = _DAT_183211e00 & 0x7ffffffffffffff8;
  _DAT_183211c18 = _DAT_183211bc0 ^ uVar4 ^ 0xfffffffffffffffe;
  _DAT_183211ba0 = (_DAT_183211ba0 ^ uVar4) - 2 ^ 0xa0210b67c4e39102;
  _DAT_183211a40 = (_DAT_183211a40 * 0x47c32841229f21d1 ^ _DAT_183211ba0) + uVar4;
  _DAT_183211ad8 = _DAT_183211a40 ^ _DAT_183211ba0;
  _DAT_183211b40 = -2;
  uVar4 = (_DAT_183211ee8 ^ _DAT_181316540) + _DAT_183211ae0 + 0x3cb476c868ffaa5e;
  uVar5 = (_DAT_183211ae0 ^ _UNK_181316548) + _DAT_183211ee8 + 0x3cb476c8ecdd897b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211ee8 ^ _DAT_181316540;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183211ae0 ^ _UNK_181316548;
  _DAT_183211e50 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183211ee8 + 0x3cb476c8ecdd897b) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211ae0 + 0x3cb476c868ffaa5e));
  uVar4 = (_DAT_183211e50 ^ 0x2d0569617032e119) << 0x1a |
          (_DAT_183211e50 ^ 0x2d0569617032e119) >> 0x26;
  _DAT_183211ca0 = _DAT_183211ca0 ^ uVar4 ^ 0x19600b725620c7a9;
  _DAT_183211900 = (_DAT_183211900 * 0x4963fda982cd8963 ^ _DAT_183211ca0) + uVar4;
  _DAT_183211970 = _DAT_183211900 ^ _DAT_183211ca0;
  _DAT_183211ae8 = 0;
  uVar4 = (~_DAT_183211c58 - 1) *
          ((unaff_RBX ^ 0x84222325 ^ _DAT_183211a98) +
          ((unaff_RBX ^ 0x84222325) & _DAT_183211a98) * 2);
  uVar4 = (uVar4 | _DAT_183211e98) + (uVar4 & _DAT_183211e98);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183211a90 =
       func_0x0001894011e0((unaff_RBX ^ 0xffffffff7bdddcdb | uVar4) +
                           (uVar4 & (unaff_RBX ^ 0xffffffff7bdddcdb)));
  uVar5 = unaff_XMM6_Qa & _DAT_1800b8c60;
  uVar3 = (uint)unaff_XMM6_Qa | (uint)_DAT_1800b8c60;
  uVar4 = _DAT_1800b8c60 ^ unaff_XMM6_Qa;
  lVar8 = ((ulonglong)_DAT_1813165f0 * (unaff_XMM6_Qa & 0xffffffff) +
           (ulonglong)_DAT_1813165e0 * (ulonglong)unaff_XMM7_Da << 0x20) +
          (unaff_XMM6_Qa & 0xffffffff) * (ulonglong)_DAT_1813165e0;
  uVar2 = (((ulonglong)_DAT_1813165c0 * (uVar4 & 0xffffffff) +
            ((ulonglong)_DAT_1813165d0 * (uVar4 & 0xffffffff) +
             (uVar4 >> 0x20) * (ulonglong)_DAT_1813165c0 << 0x20) +
            ((ulonglong)_DAT_1813165a0 * (ulonglong)uVar3 + _DAT_1813165b0 << 0x20) +
            (ulonglong)_DAT_181316590 * (ulonglong)uVar3 +
            (ulonglong)_DAT_181316570 * (uVar5 & 0xffffffff) +
            ((ulonglong)_DAT_181316580 * (uVar5 & 0xffffffff) +
             (uVar5 >> 0x20) * (ulonglong)_DAT_181316570 << 0x20) +
            ((ulonglong)_DAT_181316560 * (unaff_XMM6_Qa & 0xffffffff) +
             (ulonglong)_DAT_181316550 * (ulonglong)unaff_XMM7_Da << 0x20) +
            (unaff_XMM6_Qa & 0xffffffff) * (ulonglong)_DAT_181316550 + lVar8) -
          ((uVar4 & 0xffffffff) * (ulonglong)_DAT_181316670 +
           ((ulonglong)_DAT_181316680 * (uVar4 & 0xffffffff) +
            (uVar4 >> 0x20) * (ulonglong)_DAT_181316670 << 0x20) +
           ((ulonglong)uVar3 * (ulonglong)_DAT_181316650 + _DAT_181316660 << 0x20) +
           (ulonglong)_DAT_181316640 * (ulonglong)uVar3 +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_181316620 +
           ((ulonglong)_DAT_181316630 * (uVar5 & 0xffffffff) +
            (uVar5 >> 0x20) * (ulonglong)_DAT_181316620 << 0x20) +
           ((unaff_XMM6_Qa & 0xffffffff) * (ulonglong)_DAT_181316610 +
            (ulonglong)unaff_XMM7_Da * (ulonglong)_DAT_181316600 << 0x20) +
           (unaff_XMM6_Qa & 0xffffffff) * (ulonglong)_DAT_181316600 + lVar8)) + 0x8113f173c0f2ed0e;
  _DAT_183211bf0 = (_DAT_183211bf0 ^ _DAT_183211a90) + uVar2 ^ 0x2227f2307242b7f9;
  _DAT_183211a98 =
       ((_DAT_183211da8 ^ _DAT_183211a90 ^ uVar2) * 0x4b63e55d592c7e23 ^ _DAT_183211bf0) +
       _DAT_183211a90;
  _DAT_183211de0 = _DAT_183211a98 ^ _DAT_183211bf0;
  _DAT_183211dd8 = uVar2;
  *(undefined1 *)(unaff_RBP + -0x50 + uVar2) = 0x2d;
  *(undefined1 (*) [16])(unaff_RBP + -0x30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(unaff_RBP + -0x20) = (undefined1  [16])0x0;
  lVar1 = _DAT_183211ea8 + 0x9eb6403aa6791b23;
  lVar8 = _DAT_183211e10 + 0x831aeea34187666e;
  uVar4 = (_DAT_183211e10 ^ _DAT_181316690) + lVar1;
  uVar5 = (_DAT_183211ea8 ^ _UNK_181316698) + lVar8;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211e10 ^ _DAT_181316690;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183211ea8 ^ _UNK_181316698;
  *(ulonglong *)(unaff_RBP + 0x40) = uVar2 + unaff_RBP + -0x50;
  _DAT_183211e90 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - lVar8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - lVar1);
  _DAT_183211998 =
       (_DAT_183211998 ^ _DAT_183211e90 ^ 0x9fbeeebb63df7e6e) + 0x9fbeeebb63df7e6e ^
       0x69a4d07cd6d10a84;
  _DAT_1832119d8 =
       (_DAT_1832119d8 * 0x51b3867b30284603 ^ _DAT_183211998) +
       (_DAT_183211e90 ^ 0x9fbeeebb63df7e6e);
  _DAT_183211a48 = _DAT_1832119d8 ^ _DAT_183211998;
  _DAT_183211c98 = 0x9fbeeebb63df7e6e;
  _DAT_183211d50 = func_0x0001894011e0(_DAT_183211b20 + 0xdd9f7c8f513588c4U ^ 0xbd);
  uVar4 = (_DAT_183211d50 >> 0xe & 0x1fffffffffff) * 0x22810239bb80000;
  _DAT_183211cc8 = (_DAT_183211cc8 ^ uVar4) + 0x5d84356214a98396 ^ 0xd945f6570c99c3f0;
  _DAT_183211988 = (_DAT_183211988 * -0x2ef9c9f9136e1109 ^ _DAT_183211cc8) + uVar4;
  _DAT_183211bb8 = _DAT_183211988 ^ _DAT_183211cc8;
  _DAT_183211918 = 0x5d84356214a98396;
  _DAT_183211da8 = func_0x0001894011e0(_DAT_183211eb8 ^ 0xa04004cd5bc39008);
  uVar4 = _DAT_183211da8 - (_DAT_183211da8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_183211da8;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = 0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar5;
  _DAT_183211d88 = _DAT_183211ec8 ^ uVar5 ^ 0xaa04446076b263a9;
  _DAT_183211ef8 = (_DAT_183211ef8 ^ uVar5) + 0xaa04446076b263a9 ^ 0x6c1024402ae7cb47;
  _DAT_183211b88 = (_DAT_183211b88 * 0xc452be38c8a2733 ^ _DAT_183211ef8) + uVar5;
  _DAT_183211a58 = _DAT_183211b88 ^ _DAT_183211ef8;
  _DAT_183211948 = 0xaa04446076b263a9;
  uVar4 = (~_DAT_183211d20 + 0x55fbbb9f894d9c6d) *
          ((_DAT_183211a50 ^ 0xaa044460f290408c) + (_DAT_183211a50 & 0x2a044460f290408c) * 2);
  uVar4 = (uVar4 | _DAT_183211eb0) + (uVar4 & _DAT_183211eb0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183211970 = func_0x0001894011e0((uVar4 | 0xffffffff7bdddce0) + (uVar4 & 0xffffffff7bdddce0));
  uVar4 = (_DAT_183211970 ^ 0xffffffffffffffed) & 0x7fffffffffffffff;
  _DAT_183211a70 = _DAT_183211e10 ^ uVar4 ^ 0x15;
  _DAT_183211b78 = (_DAT_183211b78 ^ uVar4) + 0x15 ^ 0x8c28f9c330b29f35;
  _DAT_183211bf8 = (_DAT_183211bf8 * -0xc630d8ed2b564ad ^ _DAT_183211b78) + uVar4;
  _DAT_183211930 = _DAT_183211bf8 ^ _DAT_183211b78;
  _DAT_183211998 = 0x15;
  _DAT_1832119f8 = func_0x0001894011e0(_DAT_183211e40 ^ 0x7757dee825461c73);
  _DAT_183211af8 =
       (_DAT_183211af8 ^ _DAT_1832119f8 & 0xffffffffc0000000) + 0xfde357792be0440 ^
       0x81bef2f8d3591c25;
  _DAT_183211dd8 =
       (_DAT_183211dd8 * 0x6e013769aca2d18f ^ _DAT_183211af8) +
       (_DAT_1832119f8 & 0xffffffffc0000000);
  _DAT_1832119e0 = _DAT_183211dd8 ^ _DAT_183211af8;
  _DAT_183211ba0 = 0xfde357792be0440;
  uVar4 = (~_DAT_183211aa0 + 0xf021ca886d41fbc1) *
          ((_DAT_1832119a0 ^ 0x84222330) + (ulonglong)((uint)_DAT_1832119a0 & 0x84222330) * 2);
  uVar4 = (uVar4 | _DAT_183211b38) + (uVar4 & _DAT_183211b38);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183211c08 = func_0x0001894011e0((uVar4 | 0xf021ca88e963d8f0) + (uVar4 & 0xf021ca88e963d8f0));
  _DAT_183211e88 = _DAT_183211db0 ^ _DAT_183211c08 ^ 0xf021ca886d41fbd5;
  _DAT_183211d78 = (_DAT_183211d78 ^ _DAT_183211c08) + 0xf021ca886d41fbd5 ^ 0xe244ffe0602a31d2;
  _DAT_183211d10 = (_DAT_183211d10 * 0xb2ca10840a0a999 ^ _DAT_183211d78) + _DAT_183211c08;
  _DAT_183211cc0 = _DAT_183211d10 ^ _DAT_183211d78;
  _DAT_183211d88 = 0xf021ca886d41fbd5;
  uVar4 = (~_DAT_1832119a0 + 0xfde357792be0441) *
          ((_DAT_183211bc8 ^ 0xf021ca88e963d8f0) + (_DAT_183211bc8 & 0x7021ca88e963d8f0) * 2);
  uVar4 = (uVar4 | _DAT_183211e30) + (uVar4 & _DAT_183211e30);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832119e8 = func_0x0001894011e0((uVar4 | 0xffffffff7bdddcb0) + (uVar4 & 0xffffffff7bdddcb0));
  uVar4 = ~_DAT_1832119e8 & 0x86d41fbd5 ^ 0xfde357792be0440;
  _DAT_183211cb8 = _DAT_1832119e0 ^ uVar4 ^ 0x15;
  _DAT_183211d08 = (_DAT_183211d88 ^ uVar4) + 0x15 ^ 0xfb346a48721701ac;
  _DAT_183211e78 = (_DAT_183211e78 * -0x4a33ea02e0ab6ec1 ^ _DAT_183211d08) + uVar4;
  _DAT_183211d08 = _DAT_183211e78 ^ _DAT_183211d08;
  _DAT_183211d88 = 0x15;
  uVar4 = (_DAT_183211e18 ^ _DAT_1813166a0) + _DAT_183211d70 + 0x84222325;
  uVar5 = (_DAT_183211d70 ^ _UNK_1813166a8) + _DAT_183211e18 + 0x93c7415856c382e;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211e18 ^ _DAT_1813166a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183211d70 ^ _UNK_1813166a8;
  _DAT_183211d98 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183211e18 + 0x93c7415856c382e) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211d70 + 0x84222325));
  uVar4 = _DAT_183211d98 >> 1 | _DAT_183211d98;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183211d98;
  uVar4 = uVar4 << 2 | uVar4 >> 0x3e;
  _DAT_183211df8 = (_DAT_183211df8 ^ uVar4) + 0xf6c38bea7a93c7d2 ^ 0x14fa47b8a98a1c06;
  _DAT_183211b40 = (_DAT_183211b40 * -0x2823ce04e28ae4e3 ^ _DAT_183211df8) + uVar4;
  _DAT_183211c48 = _DAT_183211b40 ^ _DAT_183211df8;
  _DAT_183211d80 = _DAT_183211aa8 ^ 0xf6c38bea7a93c7d2;
  _DAT_183211d38 = 0xf6c38bea7a93c7d2;
  _DAT_183211a98 = func_0x0001894011e0(_DAT_183211d40 ^ 0xd092400ee7442f6);
  uVar4 = (_DAT_183211a98 ^ 0xc1f585c3f1e09bd3) & 0x7fffffffffffffff;
  _DAT_183211c38 = _DAT_183211990 ^ uVar4 ^ 0x93c7415856c3843;
  _DAT_183211c08 = (_DAT_183211c08 ^ uVar4) + 0x93c7415856c3843 ^ 0xaf314f367f79f180;
  _DAT_1832119e8 = (_DAT_1832119e8 * -0x60dd25959e9956eb ^ _DAT_183211c08) + uVar4;
  _DAT_183211ca0 = _DAT_1832119e8 ^ _DAT_183211c08;
  _DAT_183211a00 = 0x93c7415856c3843;
  uVar4 = (_DAT_183211b10 ^ _DAT_1813166b0) + _DAT_183211ca0 + 0x93c7415014e1b66;
  uVar5 = (_DAT_183211ca0 ^ _UNK_1813166b8) + _DAT_183211b10 + 0xf6c38bea7a93c7d2;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211b10 ^ _DAT_1813166b0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183211ca0 ^ _UNK_1813166b8;
  _DAT_183211a38 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183211b10 + 0xf6c38bea7a93c7d2) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211ca0 + 0x93c7415014e1b66));
  uVar5 = _UNK_1813166c8;
  uVar4 = _DAT_1813166c0;
  _DAT_183211dc0 = _DAT_183211b60 ^ _DAT_183211e80 ^ 0x15;
  _DAT_183211960 = (_DAT_183211960 ^ _DAT_183211e80) + 0x15 ^ 0x5f2299bb6d89b198;
  _DAT_183211bf0 = (_DAT_183211bf0 * -0x433a1f4289d56057 ^ _DAT_183211960) + _DAT_183211e80;
  _DAT_183211a00 = _DAT_183211bf0 ^ _DAT_183211960;
  _DAT_183211de0 = 0x15;
  uVar6 = (_DAT_183211b18 ^ _DAT_1813166c0) + _DAT_183211ca8 + 0x9fbeeebbe7fd5d4b;
  uVar7 = (_DAT_183211ca8 ^ _UNK_1813166c8) + _DAT_183211b18 + 0x5d84356214a98396;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183211b18 ^ _DAT_1813166c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183211ca8 ^ _UNK_1813166c8;
  _DAT_183211d98 =
       func_0x0001894011e0((uVar7 << 0x1d | uVar7 >> 0x23) - (_DAT_183211b18 + 0x5d84356214a98396) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183211ca8 + 0x9fbeeebbe7fd5d4b));
  uVar6 = (_DAT_183211d98 ^ 0xad41b8d5929b201a) & 0x7fffffffffffffff;
  _DAT_183211908 = _DAT_183211ee0 ^ uVar6 ^ 0xfd43241d78890204;
  _DAT_183211d40 = (_DAT_183211d40 ^ uVar6) + 0xfd43241d78890204 ^ 0xb9e6bb01f6a77dc3;
  _DAT_183211eb0 = (_DAT_183211eb0 * -0x45a6e61f6e62c8f5 ^ _DAT_183211d40) + uVar6;
  _DAT_183211df0 = _DAT_183211eb0 ^ _DAT_183211d40;
  _DAT_183211cd0 = 0xfd43241d78890204;
  _DAT_183211b30 = func_0x0001894011e0(_DAT_183211dd8 + 0x37de392fbcbb53c1 ^ 0x6f);
  uVar6 = (_DAT_183211b30 & 0x1ffffffffffffff) >> 1 | _DAT_183211b30 & 0x1ffffffffffffff;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_183211b30 & 0x1ffffffffffffff;
  _DAT_183211ed8 = (_DAT_183211ed8 ^ uVar6) + 0xc23adbd97776fdf8 ^ 0x2e94eae89d8e30b4;
  _DAT_183211c38 = (_DAT_183211c38 * 0x693d796cc101539b ^ _DAT_183211ed8) + uVar6;
  _DAT_183211ac8 = _DAT_183211c38 ^ _DAT_183211ed8;
  _DAT_183211a40 = 0xc23adbd97776fdf8;
  uVar6 = (_DAT_183211bf8 ^ uVar4) + _DAT_183211b68 + 0x9fbeeebbe7fd5d4b;
  uVar7 = (_DAT_183211b68 ^ uVar5) + _DAT_183211bf8 + 0x5d84356214a98396;
  uVar4 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183211bf8 ^ uVar4;
  uVar5 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _DAT_183211b68 ^ uVar5;
  _DAT_183211ba0 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183211bf8 + 0x5d84356214a98396) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211b68 + 0x9fbeeebbe7fd5d4b));
  _DAT_1832119b0 =
       (_DAT_1832119b0 ^ _DAT_183211ba0 ^ 0xdfbefffb77fffffe) + 0x1d84242200890206 ^
       0x2d98258953168802;
  _DAT_183211b50 =
       (_DAT_183211b50 * 0x22bd98d15f031f9f ^ _DAT_1832119b0) +
       (_DAT_183211ba0 ^ 0xdfbefffb77fffffe);
  _DAT_183211a60 = _DAT_183211b50 ^ _DAT_1832119b0;
  _DAT_183211ab0 = 0x1d84242200890206;
  uVar4 = (_DAT_183211ad8 ^ _DAT_1813166d0) + _DAT_183211a88 + 0xc23adbd9f354dedd;
  uVar5 = (_DAT_183211a88 ^ _UNK_1813166d8) + _DAT_183211ad8 + 0x3b0848440112040c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211ad8 ^ _DAT_1813166d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183211a88 ^ _UNK_1813166d8;
  _DAT_183211e98 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183211ad8 + 0x3b0848440112040c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211a88 + 0xc23adbd9f354dedd));
  uVar4 = (_DAT_183211e98 << 0x30 | _DAT_183211e98 >> 0x10) >> 0xd |
          (_DAT_183211e98 >> 0x10) << 0x33;
  _DAT_183211db8 = _DAT_183211e38 ^ uVar4 ^ 0xfd43241d78890204;
  _DAT_183211ac0 = (_DAT_183211ac0 ^ uVar4) + 0xfd43241d78890204 ^ 0x27b2f99398e9f174;
  _DAT_183211be0 = (_DAT_183211be0 * 0x7e38c2348f6e5bb1 ^ _DAT_183211ac0) + uVar4;
  _DAT_1832119f0 = _DAT_183211be0 ^ _DAT_183211ac0;
  _DAT_183211df0 = 0xfd43241d78890204;
  uVar4 = (~_DAT_183211928 + 0xfd43241d78890205) *
          ((_DAT_183211958 ^ 0xfd43241dfcab2121) + (_DAT_183211958 & 0x7d43241dfcab2121) * 2);
  uVar4 = (uVar4 | _DAT_183211b80) + (uVar4 & _DAT_183211b80);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183211bc0 = func_0x0001894011e0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_183211e38 = _DAT_183211bc0 ^ 0x674501ee84c1010;
  _DAT_183211bb8 = _DAT_183211bb8 ^ _DAT_183211e38 ^ 0x3d9ed892cdb79d48;
  _DAT_183211c70 = (_DAT_183211c70 * -0x289f69f21c18db5 ^ _DAT_183211bb8) + _DAT_183211e38;
  _DAT_183211938 = _DAT_183211c70 ^ _DAT_183211bb8;
  _DAT_183211d68 = 0;
  _DAT_183211c28 = func_0x0001894011e0(_DAT_183211c58 + 0x1d007befffddff ^ 0xcf);
  uVar4 = (ulonglong)((uint)_DAT_183211c28 ^ 0x15) << 0x32 | _DAT_183211c28 >> 0xe;
  _DAT_183211b60 = _DAT_183211978 ^ uVar4 ^ 0x15;
  _DAT_1832119d0 = (_DAT_1832119d0 ^ uVar4) + 0x15 ^ 0x1a7da9fee7206687;
  _DAT_183211c60 = (_DAT_183211c60 * -0x657481be5e28fcf7 ^ _DAT_1832119d0) + uVar4;
  _DAT_183211c50 = _DAT_183211c60 ^ _DAT_1832119d0;
  _DAT_183211db8 = _DAT_183211df0 ^ 0x15;
  _DAT_183211b40 = 0x15;
  _DAT_183211ef0 = func_0x0001894011e0(_DAT_183211df8 ^ 0x12a44369d93f4275);
  uVar4 = (_DAT_183211ef0 << 0x35 | _DAT_183211ef0 >> 0xb) ^ 0x9fbeeebb63df7e6e;
  _DAT_183211db8 = _DAT_183211db8 ^ uVar4 ^ 0x25cb0494a8e698fb;
  _DAT_183211a28 = (_DAT_183211a28 * -0x4da06d8f420f2591 ^ _DAT_183211db8) + uVar4;
  _DAT_183211af8 = _DAT_183211a28 ^ _DAT_183211db8;
  _DAT_183211a10 = 0;
  uVar4 = (_DAT_183211e68 ^ 0x84222330) + _DAT_183211ef8 + 0x84222330;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183211e68 ^ 0x84222330;
  uVar5 = ((_DAT_183211ef8 + _DAT_183211e68) * 0x2000 | _DAT_183211ef8 + _DAT_183211e68 >> 0x33) ^
          _DAT_183211ef8;
  _DAT_183211a48 =
       func_0x0001894011e0((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_183211e68 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183211ef8 + 0x84222330));
  uVar4 = (_DAT_183211a48 << 10 | _DAT_183211a48 >> 0x36) << 0xc |
          (_DAT_183211a48 & 0x3fffffffffffff) >> 0x2a;
  _DAT_183211988 = _DAT_183211b08 ^ uVar4 ^ 0x15;
  _DAT_183211c30 = (_DAT_183211c30 ^ uVar4) + 0x15 ^ 0xcaeb859e79f8ca18;
  _DAT_183211d40 = (_DAT_183211d40 * -0x3c6e10909ff720a9 ^ _DAT_183211c30) + uVar4;
  _DAT_183211dc8 = _DAT_183211d40 ^ _DAT_183211c30;
  _DAT_183211d50 = 0x15;
  switch(uVar2 == 0x15) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93eded2 (image 1893eded2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893eded2(longlong param_1)

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



// ===== continuation @ rva 93eab10 (image 1893eab10) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893eab10(void)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *unaff_RBP;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  undefined1 unaff_XMM9 [16];
  uint unaff_XMM10_Da;
  uint uVar9;
  
  uVar2 = *unaff_RBP;
  unaff_RBP[0xc] = uVar2;
  uVar1 = *(uint *)(unaff_RBP + 0xb);
  auVar6._8_8_ = _UNK_180062bf8;
  auVar6._0_8_ = (ulonglong)uVar1 ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_181315bd0,unaff_XMM9);
  uVar5 = auVar7._8_8_ + auVar7._0_8_;
  uVar4 = uVar5 + _DAT_183211d90;
  if (auVar7._4_4_ < 0) {
    uVar4 = _DAT_183211c38 ^ uVar5;
  }
  _DAT_183211dd8 = func_0x0001894011e0(SUB161(auVar6 ^ _DAT_181315bd0,5) ^ uVar4);
  uVar8 = uVar1 & unaff_XMM10_Da;
  uVar9 = uVar1 ^ unaff_XMM10_Da;
  uVar4 = _DAT_183211dd8 * 0x68014084216103ef;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar4;
  uVar5 = ((ulonglong)uVar9 * (ulonglong)_DAT_181315bf0 << 0x20) +
          (ulonglong)uVar9 * (ulonglong)_DAT_181315be0 +
          ((ulonglong)uVar8 * (ulonglong)_DAT_181315bf0 << 0x20 |
          (ulonglong)uVar8 * (ulonglong)_DAT_181315be0) + (ulonglong)uVar1 +
          ((ulonglong)(uVar1 | unaff_XMM10_Da) * (ulonglong)_DAT_181315c10 << 0x20) +
          (ulonglong)(uVar1 | unaff_XMM10_Da) * (ulonglong)_DAT_181315c00 +
          (-(((ulonglong)uVar9 * (ulonglong)_DAT_181315c90 << 0x20) +
            (ulonglong)uVar9 * (ulonglong)_DAT_181315c80) -
          (((ulonglong)uVar8 * (ulonglong)_DAT_181315c70 << 0x20 |
           (ulonglong)uVar8 * (ulonglong)_DAT_181315c60) +
          ((ulonglong)uVar1 * (ulonglong)_DAT_181315c50 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_181315c40)) + 0xe57390a068a54de5;
  _DAT_183211c00 = _DAT_183211cc8 ^ uVar4 ^ uVar5;
  _DAT_183211bb0 = (_DAT_183211bb0 ^ uVar4) + uVar5 ^ 0xecde6e1510bb9f97;
  _DAT_183211c28 = (_DAT_183211c28 * -0x6f595a32a8438c45 ^ _DAT_183211bb0) + uVar4;
  _DAT_183211900 = _DAT_183211c28 ^ _DAT_183211bb0;
  _DAT_183211950 = uVar5 & 0xffffffff;
  *(int *)(unaff_RBP + 0xd) = (int)uVar5;
  iVar3 = (**(code **)(*(longlong *)unaff_RBP[0x12] + 0x558))((longlong *)unaff_RBP[0x12],uVar2);
  switch(*(int *)(unaff_RBP + 0xd) < 0 || iVar3 <= *(int *)(unaff_RBP + 0xd)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93e4eba (image 1893e4eba) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893e4eba(void)

{
  longlong unaff_RBP;
  
  *(undefined4 *)(unaff_RBP + 0x70) = 2;
  switch(*(int *)(unaff_RBP + 0x58) < *(int *)(unaff_RBP + -8)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93edd7c (image 1893edd7c) =====

void FUN_1893edd7c(void)

{
  return;
}



// ===== continuation @ rva 93edbcb (image 1893edbcb) =====

undefined8 thunk_FUN_1893edd6a(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva 93ed94f (image 1893ed94f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893ed94f(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x90);
  uVar3 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0x2e9,0x12);
  *(undefined8 *)(unaff_RBP + 0x10) = uVar3;
  cVar2 = (**(code **)(*plVar1 + 0x720))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93e139a (image 1893e139a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893e139a(void)

{
  undefined1 auVar1 [16];
  int iVar2;
  ulonglong uVar3;
  undefined8 unaff_RBX;
  undefined8 *unaff_RBP;
  uint unaff_EDI;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar11;
  undefined1 auVar10 [16];
  uint uVar12;
  
  uVar9 = (_DAT_1832119e8 ^ _DAT_181315850) + _DAT_183211e88 + 0xc5678a6a;
  uVar11 = (_DAT_183211e88 ^ _UNK_181315858) + _DAT_1832119e8 + 0x2325b645;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832119e8 ^ _DAT_181315850;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183211e88 ^ _UNK_181315858;
  _DAT_183211ea8 =
       func_0x0001894011e0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1832119e8 + 0x2325b645) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183211e88 + 0xc5678a6a));
  _DAT_183211dd8 = (_DAT_183211dd8 ^ _DAT_183211ea8 ^ 0x105a045) + 0x6365bf4f ^ 0x3f8823a48eec10b4;
  _DAT_183211bc8 =
       (_DAT_183211bc8 * 0x100bb85938781b85 ^ _DAT_183211dd8) + (_DAT_183211ea8 ^ 0x105a045);
  _DAT_183211be8 = _DAT_183211bc8 ^ _DAT_183211dd8;
  _DAT_183211d80 = _DAT_183211b40 ^ 0x6365bf4f;
  _DAT_183211958 = 0x6365bf4f;
  _DAT_183211dd8 = func_0x0001894011e0(_DAT_183211cd0 ^ 0x2ff75d7ff3a64);
  uVar9 = _DAT_183211dd8 << 0x22 | _DAT_183211dd8 >> 0x1e;
  _DAT_183211ef0 = (_DAT_183211ef0 ^ uVar9) + 0xae7260d ^ 0x9006f1dadf7226e8;
  _DAT_183211bd0 = (_DAT_183211bd0 * -0x4a9fab6c5512f317 ^ _DAT_183211ef0) + uVar9;
  _DAT_183211e40 = _DAT_183211bd0 ^ _DAT_183211ef0;
  _DAT_183211a80 = 0xae7260d;
  uVar9 = (~_DAT_183211ab8 + 0xe33c5b86) *
          ((_DAT_183211cd8 ^ 0x84222325) + (ulonglong)((uint)_DAT_183211cd8 & 0x84222325) * 2);
  uVar9 = (uVar9 | _DAT_183211ed0) + (uVar9 & _DAT_183211ed0);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183211970 = func_0x0001894011e0((uVar9 | 0x671e78a0) + (ulonglong)((uint)uVar9 & 0x671e78a0))
  ;
  _DAT_183211bb8 =
       (_DAT_183211bb8 ^ _DAT_183211970 & 0x7fffffffffffffff) - 0xe33c5b85 ^ 0xa1c5d7e64601752b;
  _DAT_183211aa8 =
       (_DAT_183211aa8 * -0x11f5131a2a8feab1 ^ _DAT_183211bb8) +
       (_DAT_183211970 & 0x7fffffffffffffff);
  _DAT_183211b38 = _DAT_183211aa8 ^ _DAT_183211bb8;
  _DAT_183211a30 = _DAT_183211d00 ^ 0xffffffff1cc3a47b;
  _DAT_183211d30 = 0x1cc3a47b;
  uVar9 = (~_DAT_183211d08 + 0xe33c5b86) *
          ((_DAT_183211c90 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_183211c90 & 0x7bdddcdb) * 2);
  uVar9 = (uVar9 | _DAT_183211910) + (uVar9 & _DAT_183211910);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183211b98 = func_0x0001894011e0((uVar9 | 0x98e1875e) + (ulonglong)((uint)uVar9 & 0x98e1875e))
  ;
  uVar9 = (_DAT_183211b98 ^ 0xffffffff) >> 1 |
          (ulonglong)(((_DAT_183211b98 ^ 0xffffffff) & 1) != 0) << 0x3f;
  _DAT_183211a88 = _DAT_183211d08 ^ uVar9 ^ 0x1e33c5b83;
  _DAT_183211d20 = (_DAT_183211d20 ^ uVar9) + 0x1e33c5b83 ^ 0xc82cd88df0069f9a;
  _DAT_183211d88 = (_DAT_183211d88 * 0xdc9866546862adb ^ _DAT_183211d20) + uVar9;
  _DAT_183211d70 = _DAT_183211d88 ^ _DAT_183211d20;
  _DAT_183211b10 = 0xe33c5b83;
  uVar9 = (_DAT_183211a58 ^ _DAT_181315860) + _DAT_183211bc8 + 0x671e78a6;
  uVar11 = (_DAT_183211bc8 ^ _UNK_181315868) + _DAT_183211a58 + 0x1cc3a47b;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183211a58 ^ _DAT_181315860;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183211bc8 ^ _UNK_181315868;
  _DAT_183211978 =
       func_0x0001894011e0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183211a58 + 0x1cc3a47b) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183211bc8 + 0x671e78a6));
  _DAT_183211db8 = _DAT_183211aa0 ^ _DAT_183211940 ^ 0xfffffffe;
  _DAT_183211e90 = (_DAT_183211e90 ^ _DAT_183211940) + 0xfffffffe ^ 0x816c021ece4de4c3;
  _DAT_183211c78 = (_DAT_183211c78 * 0x6efcda42b8a8985d ^ _DAT_183211e90) + _DAT_183211940;
  _DAT_183211d40 = _DAT_183211c78 ^ _DAT_183211e90;
  _DAT_183211cd0 = 0xfffffffe;
  uVar9 = (~_DAT_183211b40 + 0xb707ac8a) *
          ((_DAT_183211a50 ^ 0x84222325) + (ulonglong)((uint)_DAT_183211a50 & 0x84222325) * 2);
  uVar9 = (uVar9 | _DAT_183211940) + (uVar9 & _DAT_183211940);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183211990 = func_0x0001894011e0((uVar9 | 0x33258fac) + (ulonglong)((uint)uVar9 & 0x33258fac))
  ;
  _DAT_183211b68 = (_DAT_183211b68 ^ _DAT_183211990) - 0xb707ac89 ^ 0x333b628a65995a6c;
  _DAT_183211ae8 = (_DAT_183211ae8 * -0x7a3290d51362f521 ^ _DAT_183211b68) + _DAT_183211990;
  _DAT_183211ea0 = _DAT_183211ae8 ^ _DAT_183211b68;
  _DAT_183211a20 = 0x48f85377;
  uVar9 = (_DAT_183211ab8 ^ _DAT_181315870) + _DAT_183211c98 + 0x33258fa2;
  uVar11 = (_DAT_183211c98 ^ _UNK_181315878) + _DAT_183211ab8 + 0x48f85377;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183211ab8 ^ _DAT_181315870;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183211c98 ^ _UNK_181315878;
  _DAT_183211c60 =
       func_0x0001894011e0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183211ab8 + 0x48f85377) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183211c98 + 0x33258fa2));
  uVar9 = _DAT_183211c60 & 0x7fffffffffffffff;
  _DAT_183211ee8 = _DAT_183211d70 ^ uVar9 ^ 0xfffffffe;
  _DAT_183211c68 = (_DAT_183211c68 ^ uVar9) + 0xfffffffe ^ 0xd54aa232ecc8edbe;
  _DAT_183211b90 = (_DAT_183211b90 * -0x6a861047bccefbb ^ _DAT_183211c68) + uVar9;
  _DAT_183211d78 = _DAT_183211b90 ^ _DAT_183211c68;
  _DAT_183211af8 = 0xfffffffe;
  _DAT_183211c68 = func_0x0001894011e0(_DAT_183211d90 + 0x1affaa8d0022ff ^ 0x4d);
  uVar9 = (_DAT_183211c68 ^ 0xc34b5b018696) & 0x7ffffffffffff;
  _DAT_183211d50 = _DAT_183211968 ^ uVar9 ^ 0x12d80c34a;
  _DAT_183211a78 = (_DAT_183211a78 ^ uVar9) + 0x12d80c34a ^ 0xd12aa9ce5ead7159;
  _DAT_183211cc8 = (_DAT_183211cc8 * -0x6b79e759e860937d ^ _DAT_183211a78) + uVar9;
  _DAT_183211c00 = _DAT_183211cc8 ^ _DAT_183211a78;
  _DAT_183211c80 = 0x2d80c34a;
  uVar9 = (_DAT_1832119e8 ^ _DAT_181315880) + _DAT_183211e08 + 0xe7479c6a;
  uVar11 = (_DAT_183211e08 ^ _UNK_181315888) + _DAT_1832119e8 + 0xae7260d;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_1832119e8 ^ _DAT_181315880;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183211e08 ^ _UNK_181315888;
  _DAT_183211c18 =
       func_0x0001894011e0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_1832119e8 + 0xae7260d) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183211e08 + 0xe7479c6a));
  _DAT_183211cb0 =
       (_DAT_183211cb0 ^ _DAT_183211c18 ^ 0x43bb90edcd97103) + 0x69829942 ^ 0xe9e4ef8b7675f664;
  _DAT_183211ae0 =
       (_DAT_183211ae0 * -0x25d81440a213831b ^ _DAT_183211cb0) +
       (_DAT_183211c18 ^ 0x43bb90edcd97103);
  _DAT_183211e98 = _DAT_183211ae0 ^ _DAT_183211cb0;
  _DAT_183211ad0 = 0x69829942;
  uVar9 = (_DAT_183211e78 ^ _DAT_181315890) + _DAT_183211a88 + 0xeda0ba67;
  uVar11 = (_DAT_183211a88 ^ _UNK_181315898) + _DAT_183211e78 + 0x4ca4c1a;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183211e78 ^ _DAT_181315890;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183211a88 ^ _UNK_181315898;
  _DAT_183211ed8 =
       func_0x0001894011e0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183211e78 + 0x4ca4c1a) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183211a88 + 0xeda0ba67));
  uVar9 = (_DAT_183211ed8 ^ 0x6dcadd5a) & 0x7fffffffffffffff;
  _DAT_183211c78 = _DAT_183211e90 ^ uVar9 ^ 0x6e4ce55c;
  _DAT_183211e78 = (_DAT_183211e78 ^ uVar9) + 0x6e4ce55c ^ 0xf4a1ed21bcd309;
  _DAT_183211c68 = (_DAT_183211c68 * 0x789536b84ea301e3 ^ _DAT_183211e78) + uVar9;
  _DAT_183211e60 = _DAT_183211c68 ^ _DAT_183211e78;
  _DAT_183211ac8 = 0x6e4ce55c;
  uVar9 = (~_DAT_183211b28 + 0x6e4ce55d) *
          ((_DAT_183211a28 ^ 0xea6ec679) + (ulonglong)((uint)_DAT_183211a28 & 0xea6ec679) * 2);
  uVar9 = (uVar9 | _DAT_183211d08) + (uVar9 & _DAT_183211d08);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183211928 = func_0x0001894011e0((uVar9 | 0x84222325) + (ulonglong)((uint)uVar9 & 0x84222325))
  ;
  _DAT_183211a68 =
       ((_DAT_183211928 ^ 0x2f862c340c1db910) << 0x24 |
       (_DAT_183211928 ^ 0x2f862c340c1db910) >> 0x1c) ^ 0x6e4ce55c;
  _DAT_183211db0 = _DAT_183211db0 ^ _DAT_183211a68 ^ 0x61ea08779b915158;
  _DAT_183211da8 = (_DAT_183211da8 * 0x2f1fa58e7239da83 ^ _DAT_183211db0) + _DAT_183211a68;
  _DAT_183211eb0 = _DAT_183211da8 ^ _DAT_183211db0;
  _DAT_183211b78 = 0;
  _DAT_1832119b0 = func_0x0001894011e0(_DAT_183211ba8 ^ 0xabffc62700c21d);
  uVar9 = (ulonglong)(~(uint)_DAT_1832119b0 & 0xfffffffe);
  _DAT_183211ca0 = _DAT_183211c30 ^ uVar9 ^ 0xfffffffe;
  _DAT_1832119d8 = (_DAT_1832119d8 ^ uVar9) + 0xfffffffe ^ 0xdaeb1410ec1e1b2a;
  _DAT_1832119e8 = (_DAT_1832119e8 * 0x69dc4cd90691ef67 ^ _DAT_1832119d8) + uVar9;
  _DAT_183211c00 = _DAT_1832119e8 ^ _DAT_1832119d8;
  _DAT_183211e20 = 0xfffffffe;
  _DAT_183211c18 = func_0x0001894011e0(_DAT_183211b00 + 0xffe2ffe8730087ffU ^ 0xad);
  uVar9 = (_DAT_183211c18 ^ 0xffffffff) * 0x2740ea1815301467;
  _DAT_1832119b8 = (_DAT_1832119b8 ^ uVar9) + 0x9c9a40b0 ^ 0x2b1c8b9329fd22b7;
  _DAT_183211d48 = (_DAT_183211d48 * 0x23082393077e0f3d ^ _DAT_1832119b8) + uVar9;
  _DAT_183211c30 = _DAT_183211d48 ^ _DAT_1832119b8;
  _DAT_183211e18 = 0x9c9a40b0;
  uVar9 = (_DAT_183211e20 ^ _DAT_1813158a0) + _DAT_183211ba8 + 0xe7479c6a;
  uVar11 = (_DAT_183211ba8 ^ _UNK_1813158a8) + _DAT_183211e20 + 0x9c9a40b0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_183211e20 ^ _DAT_1813158a0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_183211ba8 ^ _UNK_1813158a8;
  _DAT_183211d90 =
       func_0x0001894011e0((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_183211e20 + 0x9c9a40b0) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183211ba8 + 0xe7479c6a));
  _DAT_183211ab0 = _DAT_183211ab0 ^ _DAT_183211d90 ^ 0x9c9a40b0 ^ 0x541c7bb7c1061b3a;
  _DAT_183211a48 =
       (_DAT_183211a48 * -0x15f30d1c92411055 ^ _DAT_183211ab0) + (_DAT_183211d90 ^ 0x9c9a40b0);
  _DAT_183211c70 = _DAT_183211a48 ^ _DAT_183211ab0;
  _DAT_183211ed0 = 0;
  _DAT_183211e50 = func_0x0001894011e0(_DAT_183211a18 + 0xffd3fff64b0024ffU ^ 0x91);
  uVar9 = (_DAT_183211e50 & 0x1fffffffffff) - (_DAT_183211e50 >> 1 & 0x55555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_183211e50 & 0x1fffffffffff;
  _DAT_183211ca0 = _DAT_183211a00 ^ uVar9 ^ 0xfffffffe;
  _DAT_183211a40 = (_DAT_183211a40 ^ uVar9) + 0xfffffffe ^ 0xe62ddf44a0e30bcf;
  _DAT_183211d68 = (_DAT_183211d68 * -0x1ee42e5f5f92ba79 ^ _DAT_183211a40) + uVar9;
  _DAT_183211b20 = _DAT_183211d68 ^ _DAT_183211a40;
  _DAT_183211dc0 = 0xfffffffe;
  uVar9 = (~_DAT_183211d28 + 0x4145a950) * 0x1c5678a68;
  uVar9 = (uVar9 | _DAT_183211ef8) + (uVar9 & _DAT_183211ef8);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183211e00 = func_0x0001894011e0((uVar9 | 0x84222325) + (ulonglong)((uint)uVar9 & 0x84222325))
  ;
  uVar9 = (ulonglong)(~((((uint)_DAT_183211e00 ^ 0x41440000) & 0xfffc0000) * 2) >> 1 & 0x4145a94f);
  _DAT_183211b80 = _DAT_183211b80 ^ uVar9 ^ 0xa694c75e8ffc420a;
  _DAT_183211e08 = (_DAT_183211e08 * 0x6d946d3c160d4d93 ^ _DAT_183211b80) + uVar9;
  _DAT_183211ca0 = _DAT_183211e08 ^ _DAT_183211b80;
  _DAT_183211a40 = 0;
  uVar9 = ((_DAT_183211a88 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_183211a88 & 0x7bdddcdb) * 2) *
          -_DAT_183211b98;
  uVar9 = (uVar9 | _DAT_183211a70) + (uVar9 & _DAT_183211a70);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_183211a40 = func_0x0001894011e0((uVar9 | 0x7bdddcdb) + (ulonglong)((uint)uVar9 & 0x7bdddcdb))
  ;
  uVar9 = _DAT_183211a40 >> 1 | _DAT_183211a40;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = 0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183211a40;
  uVar11 = uVar9 << 0x10 | uVar9 >> 0x30;
  uVar9 = uVar11 >> 1 | uVar11;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           uVar11;
  _DAT_183211a68 = _DAT_183211c78 ^ uVar11 ^ 0xfffffffe;
  uVar9 = (_DAT_183211ab8 ^ uVar11) + 0xfffffffe;
  _DAT_183211ab8 = uVar9 ^ 0x57932db4bf5a670b;
  _DAT_183211d60 = (_DAT_183211d60 * 0x34e3961e98f83a29 ^ _DAT_183211ab8) + uVar11;
  _DAT_183211d08 = _DAT_183211d60 ^ _DAT_183211ab8;
  _DAT_183211c50 = 0xfffffffe;
  uVar11 = CONCAT44(0,unaff_EDI) ^ 0x84222325;
  uVar3 = uVar11 ^ _DAT_183211ce0;
  lVar4 = uVar11 + _DAT_183211ab8;
  uVar9 = uVar9 ^ 0x57932db440a598f5;
  uVar11 = uVar3 + lVar4;
  uVar7 = uVar9 + _DAT_183211ce0 + 0xfffffffe;
  uVar3 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar3;
  uVar9 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar9;
  _DAT_183211b70 =
       func_0x0001894011e0((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_183211ce0 + 0xfffffffe) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar9 = _DAT_183211b70 ^ 0xfffffffe;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = CONCAT44(0,unaff_EDI);
  uVar5 = _DAT_18011bc70 ^ unaff_EDI;
  uVar12 = unaff_EDI & _DAT_18011bc70;
  uVar6 = unaff_EDI | _DAT_18011bc70;
  auVar1._8_4_ = 0xffffffff;
  auVar1._0_8_ = 0xffffffffffffffff;
  auVar1._12_4_ = 0xffffffff;
  uVar8 = SUB164(auVar10 ^ auVar1,0);
  _DAT_183211940 =
       ((ulonglong)_DAT_181315920 * (ulonglong)uVar5 << 0x20) +
       (ulonglong)_DAT_181315910 * (ulonglong)uVar5 +
       ((ulonglong)_DAT_181315900 * (ulonglong)uVar6 << 0x20) +
       (ulonglong)_DAT_1813158f0 * (ulonglong)uVar6 +
       ((ulonglong)_DAT_1813158e0 * (ulonglong)uVar12 << 0x20) +
       (ulonglong)_DAT_1813158d0 * (ulonglong)uVar12 +
       ((ulonglong)_DAT_1813158c0 * (ulonglong)unaff_EDI << 0x20) +
       (ulonglong)_DAT_1813158b0 * (ulonglong)unaff_EDI +
       (-((ulonglong)uVar8 * (_DAT_181315990 & 0xffffffff) +
         ((ulonglong)_DAT_1813159e0 * (ulonglong)uVar8 +
          (SUB168(auVar10 ^ auVar1,0) >> 0x20) * (_DAT_181315990 & 0xffffffff) << 0x20)) -
       (((ulonglong)uVar5 * (ulonglong)_DAT_1813159d0 << 0x20) +
        (ulonglong)_DAT_1813159c0 * (ulonglong)uVar5 +
        ((ulonglong)uVar6 * (ulonglong)_DAT_1813159b0 << 0x20) +
        (ulonglong)_DAT_1813159a0 * (ulonglong)uVar6 +
       ((ulonglong)uVar12 * (ulonglong)_DAT_181315980 << 0x20) +
       (ulonglong)_DAT_181315970 * (ulonglong)uVar12 +
       ((ulonglong)unaff_EDI * (ulonglong)_DAT_181315960 << 0x20) +
       (ulonglong)_DAT_181315950 * (ulonglong)unaff_EDI)) + 0x17a1f5ca263a8713;
  _DAT_183211d00 = _DAT_183211d80 ^ uVar9 ^ _DAT_183211940;
  _DAT_183211a78 = (_DAT_183211a78 ^ uVar9) + _DAT_183211940 ^ 0xde2a6a9a46d2fecb;
  _DAT_183211cc0 = (_DAT_183211cc0 * -0x66b2049da50dc3a1 ^ _DAT_183211a78) + uVar9;
  _DAT_183211e50 = _DAT_183211cc0 ^ _DAT_183211a78;
  *(int *)(unaff_RBP + -1) = (int)_DAT_183211940;
  _DAT_183211940 = _DAT_183211940 & 0xffffffff;
  *(uint *)((longlong)unaff_RBP + -0xc) = unaff_EDI;
  *unaff_RBP = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 8) = 0;
  *(undefined4 *)(unaff_RBP + 0xc) = 0xff;
  unaff_RBP[0xd] = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0xe) = 0;
  iVar2 = (**(code **)(*(longlong *)unaff_RBP[0x12] + 0x558))((longlong *)unaff_RBP[0x12]);
  switch(*(int *)(unaff_RBP + 0xe) < 0 || iVar2 <= *(int *)(unaff_RBP + 0xe)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93eab41 (image 1893eab41) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893eab41(void)

{
  int iVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  uint unaff_ESI;
  ulonglong uVar3;
  undefined1 in_XMM0 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined1 unaff_XMM9 [16];
  uint unaff_XMM10_Da;
  uint uVar6;
  
  auVar4 = pshufb(in_XMM0,unaff_XMM9);
  uVar3 = auVar4._8_8_ + auVar4._0_8_;
  uVar2 = uVar3 + _DAT_183211d90;
  if (auVar4._4_4_ < 0) {
    uVar2 = _DAT_183211c38 ^ uVar3;
  }
  _DAT_183211dd8 = func_0x0001894011e0(in_XMM0[5] ^ uVar2);
  uVar5 = unaff_ESI & unaff_XMM10_Da;
  uVar6 = unaff_ESI ^ unaff_XMM10_Da;
  uVar2 = _DAT_183211dd8 * 0x68014084216103ef;
  uVar3 = uVar2 >> 1 | uVar2;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar2;
  uVar3 = ((ulonglong)uVar6 * (ulonglong)_DAT_181315bf0 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_181315be0 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_181315bf0 << 0x20 |
          (ulonglong)uVar5 * (ulonglong)_DAT_181315be0) + (ulonglong)unaff_ESI +
          ((ulonglong)(unaff_ESI | unaff_XMM10_Da) * (ulonglong)_DAT_181315c10 << 0x20) +
          (ulonglong)(unaff_ESI | unaff_XMM10_Da) * (ulonglong)_DAT_181315c00 +
          (-(((ulonglong)uVar6 * (ulonglong)_DAT_181315c90 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_181315c80) -
          (((ulonglong)uVar5 * (ulonglong)_DAT_181315c70 << 0x20 |
           (ulonglong)uVar5 * (ulonglong)_DAT_181315c60) +
          ((ulonglong)unaff_ESI * (ulonglong)_DAT_181315c50 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_181315c40)) + 0xe57390a068a54de5;
  _DAT_183211c00 = _DAT_183211cc8 ^ uVar2 ^ uVar3;
  _DAT_183211bb0 = (_DAT_183211bb0 ^ uVar2) + uVar3 ^ 0xecde6e1510bb9f97;
  _DAT_183211c28 = (_DAT_183211c28 * -0x6f595a32a8438c45 ^ _DAT_183211bb0) + uVar2;
  _DAT_183211900 = _DAT_183211c28 ^ _DAT_183211bb0;
  _DAT_183211950 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x68) = (int)uVar3;
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x90) + 0x558))(*(longlong **)(unaff_RBP + 0x90))
  ;
  switch(*(int *)(unaff_RBP + 0x68) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x68)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 943e50a (image 18943e50a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943e50a(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_18132be48)(param_1,param_2,*param_2);
  return;
}



// ===== continuation @ rva 943e516 (image 18943e516) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943e516(undefined8 param_1,undefined8 param_2,longlong param_3)

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



// ===== continuation @ rva 943e533 (image 18943e533) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943e533(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_18132be38)();
  return;
}



// ===== continuation @ rva 943e53c (image 18943e53c) =====

void FUN_18943e53c(void)

{
  return;
}



// ===== continuation @ rva 943e53d (image 18943e53d) =====

undefined4 * FUN_18943e53d(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}



// ===== continuation @ rva 943e5f3 (image 18943e5f3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943e5f3(void)

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



// ===== continuation @ rva 943e59f (image 18943e59f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943e59f(void)

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



// ===== continuation @ rva 943f357 (image 18943f357) =====

void FUN_18943f357(void)

{
  return;
}



// ===== continuation @ rva 943e896 (image 18943e896) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943e896(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(*unaff_RSI + 0x558))();
  switch(iVar1 < 2) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 943f322 (image 18943f322) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943f322(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18132c268)();
  return;
}



// ===== continuation @ rva 943edf1 (image 18943edf1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943edf1(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000068;
  
  uStack0000000000000068 = 0;
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



// ===== continuation @ rva 943a1d2 (image 18943a1d2) =====

void FUN_18943a1d2(void)

{
  return;
}



// ===== continuation @ rva 943a013 (image 18943a013) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943a013(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddce00();
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



// ===== continuation @ rva 943e172 (image 18943e172) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943e172(void)

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



// ===== continuation @ rva 943b9db (image 18943b9db) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943b9db(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  cVar1 = (**(code **)(*unaff_R13 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 943bae2 (image 18943bae2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943bae2(void)

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



// ===== continuation @ rva 943b032 (image 18943b032) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943b032(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  cVar1 = (**(code **)(*unaff_R13 + 0x100))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 943cdaf (image 18943cdaf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943cdaf(void)

{
  int iVar1;
  longlong *unaff_R13;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 943cd6e (image 18943cd6e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943cd6e(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R13 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 943deb2 (image 18943deb2) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943deb2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddfc90();
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



// ===== continuation @ rva 943a441 (image 18943a441) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943a441(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
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



// ===== continuation @ rva 943a256 (image 18943a256) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943a256(void)

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



// ===== continuation @ rva 943f365 (image 18943f365) =====

void FUN_18943f365(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 943e7d3 (image 18943e7d3) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943e7d3(void)

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



// ===== continuation @ rva 943e902 (image 18943e902) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943e902(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18132c128)();
  return;
}



// ===== continuation @ rva 943e9e9 (image 18943e9e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943e9e9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18132c128)();
  return;
}



// ===== continuation @ rva 943ea04 (image 18943ea04) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943ea04(void)

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



// ===== continuation @ rva 943e9b0 (image 18943e9b0) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943e9b0(void)

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



// ===== continuation @ rva 943f077 (image 18943f077) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943f077(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_18132bf78)();
  return;
}



// ===== continuation @ rva 9441dab (image 189441dab) =====

void FUN_189441dab(void)

{
  return;
}



// ===== continuation @ rva 943f4d0 (image 18943f4d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18943f4d0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18132c728)();
  return;
}



// ===== continuation @ rva 944191a (image 18944191a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944191a(void)

{
  (*_DAT_18132cbf8)();
  return;
}



// ===== continuation @ rva 94419e6 (image 1894419e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894419e6(void)

{
  (*_DAT_18132d1b8)();
  return;
}



// ===== continuation @ rva 9441dca (image 189441dca) =====

void FUN_189441dca(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 944089c (image 18944089c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18944089c(void)

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



// ===== continuation @ rva 9441954 (image 189441954) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189441954(void)

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



// ===== continuation @ rva 9441cb0 (image 189441cb0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189441cb0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18132c4d8)();
  return;
}



// ===== continuation @ rva 94407f4 (image 1894407f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894407f4(void)

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



// ===== continuation @ rva 9440d75 (image 189440d75) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189440d75(void)

{
  (*_DAT_18132d1b8)();
  return;
}



// ===== continuation @ rva 944000a (image 18944000a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944000a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18132d0d8)();
  return;
}



// ===== continuation @ rva 943f9d6 (image 18943f9d6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18943f9d6(void)

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



// ===== continuation @ rva 94444e9 (image 1894444e9) =====

void FUN_1894444e9(void)

{
  return;
}



// ===== continuation @ rva 944434a (image 18944434a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944434a(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_R13 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 944d312 (image 18944d312) =====

void FUN_18944d312(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva 9447cc8 (image 189447cc8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189447cc8(void)

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



// ===== continuation @ rva 94482fc (image 1894482fc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_189448ff8(void)

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



// ===== continuation @ rva 9446b68 (image 189446b68) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_189448ff8(void)

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



// ===== continuation @ rva 9446443 (image 189446443) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189446443(void)

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



// ===== continuation @ rva 94460f0 (image 1894460f0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894460f0(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(*in_stack_00000030 + 0x70))(in_stack_00000030,in_stack_00000038,&UNK_182f702a8);
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



// ===== continuation @ rva 9447b39 (image 189447b39) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_189448ff8(void)

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



// ===== continuation @ rva 94450de (image 1894450de) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1894450de(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000040;
  undefined1 in_stack_00000058;
  undefined1 uStack0000000000000085;
  
  uStack0000000000000085 = in_stack_00000058;
  (**(code **)(*in_stack_00000030 + 0x680))();
  iVar1 = (**(code **)(*in_stack_00000030 + 0x558))(in_stack_00000030,in_stack_00000040);
  switch(iVar1 < 4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 9445089 (image 189445089) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189445089(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x6fb,0x21);
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



// ===== continuation @ rva 944d5f2 (image 18944d5f2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18944d5f2(void)

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



// ===== continuation @ rva 944d59e (image 18944d59e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944d59e(void)

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



// ===== continuation @ rva 944e473 (image 18944e473) =====

void FUN_18944e473(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 944e1e7 (image 18944e1e7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18944e1e7(void)

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



// ===== continuation @ rva 944e464 (image 18944e464) =====

void FUN_18944e464(void)

{
  return;
}



// ===== continuation @ rva 944dbbb (image 18944dbbb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944dbbb(void)

{
  FUN_190de3220();
  (*_DAT_18132f788)();
  return;
}



// ===== continuation @ rva 944dc35 (image 18944dc35) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18944dc35(void)

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



// ===== continuation @ rva 944d943 (image 18944d943) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944d943(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  (*_DAT_18132f768)();
  return;
}



// ===== continuation @ rva 944d8dd (image 18944d8dd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944d8dd(void)

{
  FUN_190dd72e0();
  (*_DAT_18132f678)();
  return;
}



// ===== continuation @ rva 944d9a0 (image 18944d9a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944d9a0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x100))();
  (*_DAT_18132f738)();
  return;
}



// ===== continuation @ rva 944e430 (image 18944e430) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944e430(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18132f7e8)();
  return;
}



// ===== continuation @ rva 944e19f (image 18944e19f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18944e19f(void)

{
  int in_EAX;
  int in_stack_00000068;
  
  switch(in_EAX <= in_stack_00000068 || in_stack_00000068 < 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 944e124 (image 18944e124) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18944e124(void)

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



// ===== continuation @ rva 9450584 (image 189450584) =====

void FUN_189450584(void)

{
  return;
}



// ===== continuation @ rva 944e5ec (image 18944e5ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944e5ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_18132fd18)();
  return;
}



// ===== continuation @ rva 944fbd6 (image 18944fbd6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944fbd6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181330648)();
  return;
}



// ===== continuation @ rva 944f7b7 (image 18944f7b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944f7b7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181330628)();
  return;
}



// ===== continuation @ rva 944ee0b (image 18944ee0b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944ee0b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181330478)();
  return;
}



// ===== continuation @ rva 944e774 (image 18944e774) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944e774(void)

{
  FUN_190dd72e0();
  (*_DAT_18132fd48)();
  return;
}



// ===== continuation @ rva 94510c2 (image 1894510c2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894510c2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18132fb38)();
  return;
}



// ===== continuation @ rva 944f7f6 (image 18944f7f6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18944f7f6(void)

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



// ===== continuation @ rva 9451128 (image 189451128) =====

void FUN_189451128(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 9450feb (image 189450feb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189450feb(void)

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



// ===== continuation @ rva 9450bba (image 189450bba) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189450bba(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18132ff78)();
  return;
}



// ===== continuation @ rva 944f31f (image 18944f31f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18944f31f(void)

{
  (*_DAT_181330798)();
  return;
}



// ===== continuation @ rva 93d60e2 (image 1893d60e2) =====

void FUN_1893d60e2(void)

{
  return;
}



// ===== continuation @ rva 93a1752 (image 1893a1752) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893a1752(void)

{
  FUN_190ddce00();
  (*_DAT_18130b268)();
  return;
}



// ===== continuation @ rva 93ba19c (image 1893ba19c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893ba19c(void)

{
  FUN_190dd9df0();
  (*_DAT_181307fc8)();
  return;
}



// ===== continuation @ rva 93ba11f (image 1893ba11f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893ba11f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181307158)();
  return;
}



// ===== continuation @ rva 93d614e (image 1893d614e) =====

void FUN_1893d614e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva 93d1a32 (image 1893d1a32) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d1a32(void)

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



// ===== continuation @ rva 93b197f (image 1893b197f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893b197f(void)

{
  FUN_190de3220();
  (*_DAT_18130a6a8)();
  return;
}



// ===== continuation @ rva 93ad2c1 (image 1893ad2c1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893ad2c1(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_18130b8f8)();
  return;
}



// ===== continuation @ rva 93d60d1 (image 1893d60d1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d60d1(void)

{
  longlong *in_stack_00000048;
  
  (**(code **)(*in_stack_00000048 + 0x68))();
  (*_DAT_18130bda8)();
  return;
}



// ===== continuation @ rva 93d17c9 (image 1893d17c9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_1893d17c9(void)

{
  undefined1 uVar1;
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x570))();
  (**(code **)(*unaff_RSI + 0x538))();
  (**(code **)(*unaff_RSI + 0x570))();
  (**(code **)(*unaff_RSI + 0x570))();
  uVar1 = FUN_190dc1be0(0xa92,&stack0x00000078);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar1) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva 93c2666 (image 1893c2666) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001893c2695 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1893c2666(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva 93d4b15 (image 1893d4b15) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1893d4b15(void)

{
  (*_DAT_18130c388)();
  return;
}



// ===== continuation @ rva 9423c93 (image 189423c93) =====

void FUN_189423c93(void)

{
  return;
}



// ===== continuation @ rva 940135d (image 18940135d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18940135d(void)

{
  FUN_190ddce00();
  (*_DAT_18131d5e8)();
  return;
}



// ===== continuation @ rva 9437ca8 (image 189437ca8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_189437ca8(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x68))();
  (*_DAT_1813219b8)();
  return;
}



// ===== continuation @ rva 9431973 (image 189431973) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189431973(void)

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



// ===== continuation @ rva 9435b11 (image 189435b11) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189435b11(void)

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



// ===== continuation @ rva 942fc96 (image 18942fc96) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18942fc96(void)

{
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18131c238)();
  return;
}



// ===== continuation @ rva 942e66a (image 18942e66a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18942e66a(void)

{
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000040;
  
  FUN_184117d50(in_stack_00000030,in_stack_00000040);
  (*_DAT_18131dc68)();
  return;
}



// ===== continuation @ rva 94364b4 (image 1894364b4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894364b4(void)

{
  (*_DAT_181321c08)();
  return;
}



// ===== continuation @ rva 94172c3 (image 1894172c3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1894172c3(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000030);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_181321088)();
  return;
}



// ===== continuation @ rva 940babe (image 18940babe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18940babe(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000030;
  
  (**(code **)(in_RAX + 0x560))(in_stack_00000030,2);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x3d1,0x14);
  (*_DAT_18131c108)();
  return;
}



// ===== continuation @ rva 9414a98 (image 189414a98) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_189414a98(void)

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



// ===== continuation @ rva 941e141 (image 18941e141) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18941e141(void)

{
  (*_DAT_181321c38)();
  return;
}



