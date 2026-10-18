// ===== continuation @ rva ab9a675 (image 18ab9a675) =====

void FUN_18ab9a675(void)

{
  return;
}



// ===== continuation @ rva ab66353 (image 18ab66353) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ab663a9 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ab66353(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva ab9a6e1 (image 18ab9a6e1) =====

void FUN_18ab9a6e1(longlong *param_1)

{
  (**(code **)(*param_1 + 0x398))();
  return;
}



// ===== continuation @ rva ab8689a (image 18ab8689a) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ab868b1 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ab8689a(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva ab860fa (image 18ab860fa) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ab8614b */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ab860fa(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(*unaff_RSI + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva ab9825c (image 18ab9825c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab9825c(void)

{
  longlong *unaff_RSI;
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong unaff_XMM6_Qa;
  longlong in_stack_000000c0;
  ulonglong in_stack_00000100;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  uVar3 = (_DAT_18326b0d0 ^ _DAT_18194f1c0) + _DAT_18326b010 + 0x30122818992605dd;
  uVar4 = (_DAT_18326b010 ^ _UNK_18194f1c8) + _DAT_18326b0d0 + 0x4bf3806e8d810dc7;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18326b0d0 ^ _DAT_18194f1c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18326b010 ^ _UNK_18194f1c8;
  _DAT_18326af68 =
       func_0x00018ab9a890((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18326b0d0 + 0x4bf3806e8d810dc7) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18326b010 + 0x30122818992605dd));
  _DAT_18326b178 = (_DAT_18326b178 ^ _DAT_18326af68) + 0x7bf3a87e9d852fff ^ 0xb92f5a69c9f35242;
  _DAT_18326b198 = (_DAT_18326b198 * -0x4c0d478989abfecb ^ _DAT_18326b178) + _DAT_18326af68;
  _DAT_18326afb8 = _DAT_18326b198 ^ _DAT_18326b178;
  _DAT_18326acd8 = 0x7bf3a87e9d852fff;
  uVar3 = (_DAT_18326b240 ^ _DAT_18194f1d0) + _DAT_18326ae48 + 0x22c744060b97259c;
  uVar4 = (_DAT_18326ae48 ^ _UNK_18194f1d8) + _DAT_18326b240 + 0x16e4396fa579c39c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18326b240 ^ _DAT_18194f1d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18326ae48 ^ _UNK_18194f1d8;
  _DAT_18326b100 =
       func_0x00018ab9a890((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18326b240 + 0x16e4396fa579c39c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18326ae48 + 0x22c744060b97259c));
  _DAT_18326ad78 =
       (_DAT_18326ad78 ^ _DAT_18326b100 & 0xffffffffffffc000) + 0x34237d692accc525 ^
       0x986a8555dabe83db;
  _DAT_18326adc8 =
       (_DAT_18326adc8 * -0x27fcd61b12825327 ^ _DAT_18326ad78) +
       (_DAT_18326b100 & 0xffffffffffffc000);
  _DAT_18326af78 = _DAT_18326adc8 ^ _DAT_18326ad78;
  _DAT_18326b2d0 = 0x34237d692accc525;
  uVar3 = (_DAT_18326ad58 ^ _DAT_18194f1e0) + _DAT_18326ace8 + 0x84222325;
  uVar4 = (_DAT_18326ace8 ^ _UNK_18194f1e8) + _DAT_18326ad58 + 0xa45b5d1b55b4d00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18326ad58 ^ _DAT_18194f1e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18326ace8 ^ _UNK_18194f1e8;
  _DAT_18326aed8 =
       func_0x00018ab9a890((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18326ad58 + 0xa45b5d1b55b4d00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18326ace8 + 0x84222325));
  _DAT_18326b100 = (_DAT_18326b100 ^ _DAT_18326b290) + 0xf5ba4a2e4aa4b300 ^ 0x19c6d44e7cfde611;
  _DAT_18326af90 = (_DAT_18326af90 * -0x7e2d6c263de9248d ^ _DAT_18326b100) + _DAT_18326b290;
  _DAT_18326b2a0 = _DAT_18326af90 ^ _DAT_18326b100;
  _DAT_18326adf8 = 0xf5ba4a2e4aa4b300;
  uVar3 = (_DAT_18326b250 ^ _DAT_18194f1f0) + _DAT_18326ab80 + 0x2bb2ade6d6d8294;
  uVar4 = (_DAT_18326ab80 ^ _UNK_18194f1f8) + _DAT_18326b250 + 0xa45b5d1b55b4d00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18326b250 ^ _DAT_18194f1f0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18326ab80 ^ _UNK_18194f1f8;
  _DAT_18326ae20 =
       func_0x00018ab9a890((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18326b250 + 0xa45b5d1b55b4d00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18326ab80 + 0x2bb2ade6d6d8294));
  uVar3 = _DAT_18326ae20 ^ 0x2bb2adee94fa1b1;
  _DAT_18326b058 = _DAT_18326b098 ^ uVar3 ^ 0xd00e0b09eaaeeb1;
  _DAT_18326abd0 = (_DAT_18326abd0 ^ uVar3) + 0xd00e0b09eaaeeb1 ^ 0xac41041407547c17;
  _DAT_18326af18 = (_DAT_18326af18 * -0x48a3160fc0b363b9 ^ _DAT_18326abd0) + uVar3;
  _DAT_18326ae98 = _DAT_18326af18 ^ _DAT_18326abd0;
  _DAT_18326b0e0 = 0xd00e0b09eaaeeb1;
  uVar3 = (~_DAT_18326b218 + 0x258520e550677b88) *
          ((_DAT_18326af28 ^ 0x84222325) + (ulonglong)((uint)_DAT_18326af28 & 0x84222325) * 2);
  uVar3 = (uVar3 | _DAT_18326ad70) + (uVar3 & _DAT_18326ad70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18326ab00 = func_0x00018ab9a890((uVar3 | 0x258520e5d44558a2) + (uVar3 & 0x258520e5d44558a2));
  _DAT_18326acb8 = (_DAT_18326acb8 ^ _DAT_18326ab00) + 0xda7adf1aaf988479 ^ 0xf1e987549485f7eb;
  _DAT_18326af80 = (_DAT_18326af80 * 0x7a674f17f8c97877 ^ _DAT_18326acb8) + _DAT_18326ab00;
  _DAT_18326b180 = _DAT_18326af80 ^ _DAT_18326acb8;
  _DAT_18326afd0 = 0xda7adf1aaf988479;
  _DAT_18326aed8 = func_0x00018ab9a890(_DAT_18326ad90 + 0x2746e20cef060a20U ^ 0x6c);
  uVar3 = _DAT_18326aed8 ^ 0x27bf2afff96ffbb7;
  _DAT_18326ad10 = _DAT_18326aca8 ^ uVar3 ^ 0x28404bc439b71d38;
  _DAT_18326b2f0 = (_DAT_18326b2f0 ^ uVar3) + 0x28404bc439b71d38 ^ 0x91c7de96aa1eba50;
  _DAT_18326b0b8 = (_DAT_18326b0b8 * -0x64bfadad44563629 ^ _DAT_18326b2f0) + uVar3;
  _DAT_18326ad28 = _DAT_18326b0b8 ^ _DAT_18326b2f0;
  _DAT_18326b120 = 0x28404bc439b71d38;
  _DAT_18326ac10 = func_0x00018ab9a890(_DAT_18326ae80 ^ 0x454a29ee24940352);
  uVar3 = _DAT_18326ac10 - (_DAT_18326ac10 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          _DAT_18326ac10;
  _DAT_18326b108 = _DAT_18326aef0 ^ uVar3 ^ 0x2bb2adee94fa1b1;
  _DAT_18326afb8 = (_DAT_18326afb8 ^ uVar3) + 0x2bb2adee94fa1b1 ^ 0x4bfba3d653125645;
  _DAT_18326b060 = (_DAT_18326b060 * -0x5ff42757ce321189 ^ _DAT_18326afb8) + uVar3;
  _DAT_18326ad68 = _DAT_18326b060 ^ _DAT_18326afb8;
  _DAT_18326ad50 = 0x2bb2adee94fa1b1;
  _DAT_18326afa0 = func_0x00018ab9a890(_DAT_18326abd0 ^ 0xb18108a805243490);
  _DAT_18326ac88 = (_DAT_18326ac88 ^ _DAT_18326afa0) + 0xa6c6db0d83815de0 ^ 0x3143311a9f34484b;
  _DAT_18326aba0 = (_DAT_18326aba0 * -0x9178c306430d7f1 ^ _DAT_18326ac88) + _DAT_18326afa0;
  _DAT_18326ab60 = _DAT_18326aba0 ^ _DAT_18326ac88;
  _DAT_18326af90 = 0xa6c6db0d83815de0;
  uVar3 = (_DAT_18326afd0 ^ _DAT_18194f200) + _DAT_18326ae68 + 0x2bb2ade6d6d8294;
  uVar4 = (_DAT_18326ae68 ^ _UNK_18194f208) + _DAT_18326afd0 + 0x593924f27c7ea220;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18326afd0 ^ _DAT_18194f200;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18326ae68 ^ _UNK_18194f208;
  _DAT_18326ad80 =
       func_0x00018ab9a890((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18326afd0 + 0x593924f27c7ea220) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18326ae68 + 0x2bb2ade6d6d8294));
  uVar3 = (_DAT_18326ad80 ^ 0x2132a88200b8191) & 0x2bb2adee94fa1b1;
  _DAT_18326aba8 = _DAT_18326b0c8 ^ uVar3 ^ 0x5bf44fd165ce43d1;
  _DAT_18326b138 = (_DAT_18326b138 ^ uVar3) + 0x5bf44fd165ce43d1 ^ 0x30e08e9bf79444fd;
  _DAT_18326afb0 = (_DAT_18326afb0 * -0x110d26b7cea7f49 ^ _DAT_18326b138) + uVar3;
  _DAT_18326afd8 = _DAT_18326afb0 ^ _DAT_18326b138;
  _DAT_18326b198 = 0x5bf44fd165ce43d1;
  _DAT_18326ab88 = func_0x00018ab9a890(_DAT_18326b008 + 0xabdd121e0c7464c4U ^ 0xcf);
  uVar3 = _DAT_18326ab88 ^ 0x2f84ff76226f43e0;
  _DAT_18326ae10 = _DAT_18326af50 ^ uVar3 ^ 0x2bb2adee94fa1b1;
  _DAT_18326ab00 = (_DAT_18326ab00 ^ uVar3) + 0x2bb2adee94fa1b1 ^ 0x378e11172c2935fd;
  _DAT_18326b240 = (_DAT_18326b240 * -0xee1aecc55cbeecf ^ _DAT_18326ab00) + uVar3;
  _DAT_18326b1f0 = _DAT_18326b240 ^ _DAT_18326ab00;
  _DAT_18326ae40 = 0x2bb2adee94fa1b1;
  uVar3 = (~_DAT_18326b098 + 0x34237d692accc526) *
          ((_DAT_18326ae30 ^ 0x7bf3a87e19a70cda) + (_DAT_18326ae30 & 0x7bf3a87e19a70cda) * 2);
  uVar3 = (uVar3 | _DAT_18326ac80) + (uVar3 & _DAT_18326ac80);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18326aba0 = func_0x00018ab9a890((uVar3 | 0x4fd0d517336bc9ff) + (uVar3 & 0x4fd0d517336bc9ff));
  _DAT_18326aee8 = (_DAT_18326aee8 ^ _DAT_18326aba0) + 0x4fd0d517b749eada ^ 0xaee0aedc3a5111c8;
  _DAT_18326adc8 = (_DAT_18326adc8 * 0x1f15768a8397e83f ^ _DAT_18326aee8) + _DAT_18326aba0;
  _DAT_18326ac48 = _DAT_18326adc8 ^ _DAT_18326aee8;
  _DAT_18326b258 = 0x4fd0d517b749eada;
  _DAT_18326ae10 = func_0x00018ab9a890(_DAT_18326ad78 ^ 0xbd406a219382a18c);
  uVar3 = (_DAT_18326ae10 ^ 0x5011080a4a) & 0x7fffffffff;
  _DAT_18326b2d0 = _DAT_18326af20 ^ uVar3 ^ 0xb01725e7c851f524;
  _DAT_18326afe0 = (_DAT_18326afe0 ^ uVar3) + 0xb01725e7c851f524 ^ 0xf0e913474116ae2f;
  _DAT_18326ab80 = (_DAT_18326ab80 * 0x248e4c7bb1b7af31 ^ _DAT_18326afe0) + uVar3;
  _DAT_18326b218 = _DAT_18326ab80 ^ _DAT_18326afe0;
  _DAT_18326aee8 = 0xb01725e7c851f524;
  _DAT_18326ad00 = func_0x00018ab9a890(_DAT_18326ad70 + 0x2e81b6e493da5cfd ^ 0x16);
  uVar3 = _DAT_18326ad00 >> 1 | _DAT_18326ad00;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ~((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80
           ^ _DAT_18326ad00) & 0x2bb2adee94fa1b1;
  _DAT_18326ae18 = _DAT_18326b100 ^ uVar3 ^ 0x2bb2adee94fa1b1;
  _DAT_18326af00 = (_DAT_18326af00 ^ uVar3) + 0x2bb2adee94fa1b1 ^ 0x20a4869a358804bf;
  _DAT_18326afc0 = (_DAT_18326afc0 * 0x7455c523f4e481a7 ^ _DAT_18326af00) + uVar3;
  _DAT_18326ae48 = _DAT_18326afc0 ^ _DAT_18326af00;
  _DAT_18326b108 = 0x2bb2adee94fa1b1;
  uVar3 = ~_DAT_18326b1d0 *
          ((_DAT_18326aee8 ^ 0x7bf3a87e19a70cda) + (_DAT_18326aee8 & 0x7bf3a87e19a70cda) * 2);
  uVar3 = (uVar3 | _DAT_18326b2c0) + (uVar3 & _DAT_18326b2c0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18326af98 = func_0x00018ab9a890((uVar3 | 0x840c5781e658f325) + (uVar3 & 0x840c5781e658f325));
  uVar3 = (_DAT_18326af98 & 0x1fffff) << 0x12 | _DAT_18326af98 >> 0x2e;
  _DAT_18326ab28 = (_DAT_18326ab28 ^ uVar3) + 0x840c5781627ad000 ^ 0x8514ca22f5f8c53a;
  _DAT_18326aba0 = (_DAT_18326aba0 * 0x2e75eeca7cae4495 ^ _DAT_18326ab28) + uVar3;
  _DAT_18326ade8 = _DAT_18326aba0 ^ _DAT_18326ab28;
  _DAT_18326aed0 = 0x840c5781627ad000;
  uVar3 = (_DAT_18326ade0 ^ _DAT_18194f210) + _DAT_18326b278 + 0x7bf3a87e19a70cda;
  uVar4 = (_DAT_18326b278 ^ _UNK_18194f218) + _DAT_18326ade0 + 0x840c5781627ad000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18326ade0 ^ _DAT_18194f210;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18326b278 ^ _UNK_18194f218;
  _DAT_18326ab08 =
       func_0x00018ab9a890((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18326ade0 + 0x840c5781627ad000) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18326b278 + 0x7bf3a87e19a70cda));
  uVar3 = (_DAT_18326ab08 ^ 0x1627ad000) & 0x1ffffffff;
  _DAT_18326b138 = _DAT_18326b138 ^ uVar3 ^ 0xdca45c3342099cfc;
  _DAT_18326ab88 = (_DAT_18326ab88 * 0x42ceb12283490eed ^ _DAT_18326b138) + uVar3;
  _DAT_18326af70 = _DAT_18326ab88 ^ _DAT_18326b138;
  _DAT_18326b2b0 = 0;
  uVar3 = ((_DAT_18326aeb0 ^ 0x2bb2ade6d6d8294) + (_DAT_18326aeb0 & 0x2bb2ade6d6d8294) * 2) *
          -_DAT_18326ac00;
  uVar3 = (uVar3 | _DAT_18326b120) + (uVar3 & _DAT_18326b120);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18326ad10 = func_0x00018ab9a890((uVar3 | 0x2bb2ade6d6d8294) + (uVar3 & 0x2bb2ade6d6d8294));
  uVar3 = _DAT_18326ad10 & 0xffffffffffff0000;
  _DAT_18326b238 = _DAT_18326ad28 ^ uVar3 ^ 0x2bb2adee94fa1b1;
  _DAT_18326ac90 = (_DAT_18326ac90 ^ uVar3) + 0x2bb2adee94fa1b1 ^ 0xc4d707756b52614b;
  _DAT_18326b050 = (_DAT_18326b050 * -0x7a0b694801123199 ^ _DAT_18326ac90) + uVar3;
  _DAT_18326aed8 = _DAT_18326b050 ^ _DAT_18326ac90;
  _DAT_18326ac40 = 0x2bb2adee94fa1b1;
  uVar3 = (_DAT_18326acf0 ^ 0x2bb2ade6d6d8294) + _DAT_18326b058 + 0x2bb2ade6d6d8294;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18326acf0 ^ 0x2bb2ade6d6d8294;
  uVar4 = ((_DAT_18326b058 + _DAT_18326acf0) * 0x2000 | _DAT_18326b058 + _DAT_18326acf0 >> 0x33) ^
          _DAT_18326b058;
  _DAT_18326b248 =
       func_0x00018ab9a890((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_18326acf0 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18326b058 + 0x2bb2ade6d6d8294));
  uVar3 = _DAT_18326b248 & 0xfffffffffffe0000;
  _DAT_18326add8 = _DAT_18326b2e0 ^ uVar3 ^ 0x2bb2adee94fa1b1;
  _DAT_18326ac50 = (_DAT_18326ac50 ^ uVar3) + 0x2bb2adee94fa1b1 ^ 0x13bee8ba8232b18b;
  _DAT_18326ac90 = (_DAT_18326ac90 * 0x58b03420f867d117 ^ _DAT_18326ac50) + uVar3;
  _DAT_18326aec0 = _DAT_18326ac90 ^ _DAT_18326ac50;
  auVar1._8_8_ = _UNK_18194f228;
  auVar1._0_8_ = in_stack_00000100 ^ 0x84222325;
  auVar2 = pshufb(auVar1 ^ _DAT_18194f230,_DAT_1800170c0);
  _DAT_18326ad40 = 0x2bb2adee94fa1b1;
  uVar4 = auVar2._8_8_ + auVar2._0_8_;
  uVar3 = uVar4 + _DAT_18326b2c0;
  if (auVar2._4_4_ < 0) {
    uVar3 = _DAT_18326ae08 ^ uVar4;
  }
  _DAT_18326b040 = func_0x00018ab9a890(SUB161(auVar1 ^ _DAT_18194f230,5) ^ uVar3);
  _DAT_18326ac68 =
       in_stack_00000100 + (in_stack_00000100 & 0x2bb2adee94fa1b1) * -2 + 0x2bb2adee94fa1b1;
  _DAT_18326b218 =
       (_DAT_18326b218 ^ ~_DAT_18326b040 & unaff_XMM6_Qa) + _DAT_18326ac68 ^ 0x6a2f6da03e1950a0;
  _DAT_18326af40 =
       (_DAT_18326af40 * 0x5d425a79dc136b35 ^ _DAT_18326b218) + (~_DAT_18326b040 & unaff_XMM6_Qa);
  _DAT_18326b200 = _DAT_18326af40 ^ _DAT_18326b218;
  switch(in_stack_000000c0 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab83bd0 (image 18ab83bd0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ab83be7 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ab83bd0(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva ab8e93f (image 18ab8e93f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab8e93f(void)

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



// ===== continuation @ rva ab94785 (image 18ab94785) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab94785(void)

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



// ===== continuation @ rva aba165b (image 18aba165b) =====

void FUN_18aba165b(void)

{
  return;
}



// ===== continuation @ rva ab9aa1d (image 18ab9aa1d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab9aa1d(void)

{
  FUN_190ddce00();
  (*_DAT_1819509a8)();
  return;
}



// ===== continuation @ rva aba35be (image 18aba35be) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aba35be(void)

{
  FUN_190dd9df0();
  (*_DAT_18194fd68)();
  return;
}



// ===== continuation @ rva aba193c (image 18aba193c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aba193c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181951ac8)();
  return;
}



// ===== continuation @ rva ab9e066 (image 18ab9e066) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab9e066(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x340))();
  (*_DAT_181950608)();
  return;
}



// ===== continuation @ rva aba1ad4 (image 18aba1ad4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aba1ad4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181951a38)();
  return;
}



// ===== continuation @ rva ab9e0f4 (image 18ab9e0f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab9e0f4(void)

{
  FUN_190dd72e0();
  (*_DAT_181951558)();
  return;
}



// ===== continuation @ rva aba38d3 (image 18aba38d3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aba38d3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1819514c8)();
  return;
}



// ===== continuation @ rva aba0faa (image 18aba0faa) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aba0faa(void)

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



// ===== continuation @ rva ab9fb9a (image 18ab9fb9a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab9fb9a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_181951738)();
  return;
}



// ===== continuation @ rva aba1e67 (image 18aba1e67) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aba1e67(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181951138)();
  return;
}



// ===== continuation @ rva ab9e386 (image 18ab9e386) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab9e386(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181951378)();
  return;
}



// ===== continuation @ rva aba20bd (image 18aba20bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aba20bd(void)

{
  (*_DAT_181951768)();
  return;
}



// ===== continuation @ rva abb0e0a (image 18abb0e0a) =====

void FUN_18abb0e0a(void)

{
  return;
}



// ===== continuation @ rva aba3ace (image 18aba3ace) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aba3ace(void)

{
  FUN_190ddce00();
  (*_DAT_181952de8)();
  return;
}



// ===== continuation @ rva abb2067 (image 18abb2067) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2067(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181952558)();
  return;
}



// ===== continuation @ rva abab8e9 (image 18abab8e9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abab8e9(void)

{
  FUN_190de3220();
  (*_DAT_181953598)();
  return;
}



// ===== continuation @ rva abb24e0 (image 18abb24e0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb24e0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_181953748)();
  return;
}



// ===== continuation @ rva abaad51 (image 18abaad51) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abaad51(void)

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



// ===== continuation @ rva abb24f1 (image 18abb24f1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb24f1(void)

{
  (*_DAT_181953e58)();
  return;
}



// ===== continuation @ rva abaffca (image 18abaffca) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abaffca(void)

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



// ===== continuation @ rva abab071 (image 18abab071) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abab071(void)

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



// ===== continuation @ rva abb24f9 (image 18abb24f9) =====

void FUN_18abb24f9(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva abab2dc (image 18abab2dc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abab2dc(void)

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



// ===== continuation @ rva abb16f6 (image 18abb16f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb16f6(void)

{
  (*_DAT_181953d38)();
  return;
}



// ===== continuation @ rva abb1238 (image 18abb1238) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abb1238(void)

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



// ===== continuation @ rva abb2686 (image 18abb2686) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2686(void)

{
  FUN_190dd72e0();
  (*_DAT_181956588)();
  return;
}



// ===== continuation @ rva abb2613 (image 18abb2613) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2613(void)

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



// ===== continuation @ rva abb2766 (image 18abb2766) =====

void FUN_18abb2766(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva abb275e (image 18abb275e) =====

void FUN_18abb275e(void)

{
  return;
}



// ===== continuation @ rva abb2671 (image 18abb2671) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abb2671(void)

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



// ===== continuation @ rva abb2702 (image 18abb2702) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abb2702(void)

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



// ===== continuation @ rva abb274d (image 18abb274d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb274d(void)

{
  (*_DAT_181956538)();
  return;
}



// ===== continuation @ rva abb264c (image 18abb264c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb264c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181956548)();
  return;
}



// ===== continuation @ rva abb26ae (image 18abb26ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abb26ae(void)

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



// ===== continuation @ rva abb26cf (image 18abb26cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb26cf(void)

{
  FUN_190dd9df0();
  (*_DAT_181956558)();
  return;
}



// ===== continuation @ rva abb2886 (image 18abb2886) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2886(void)

{
  FUN_190dd72e0();
  (*_DAT_181956658)();
  return;
}



// ===== continuation @ rva abb2813 (image 18abb2813) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2813(void)

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



// ===== continuation @ rva abb295e (image 18abb295e) =====

void FUN_18abb295e(void)

{
  return;
}



// ===== continuation @ rva abb2926 (image 18abb2926) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2926(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181956668)();
  return;
}



// ===== continuation @ rva abb28cf (image 18abb28cf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb28cf(void)

{
  FUN_190dd9df0();
  (*_DAT_181956648)();
  return;
}



// ===== continuation @ rva abb2966 (image 18abb2966) =====

void FUN_18abb2966(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva abb2902 (image 18abb2902) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abb2902(void)

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



// ===== continuation @ rva abb28ae (image 18abb28ae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abb28ae(void)

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



// ===== continuation @ rva abb294d (image 18abb294d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb294d(void)

{
  (*_DAT_181956688)();
  return;
}



// ===== continuation @ rva abb2871 (image 18abb2871) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abb2871(void)

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



// ===== continuation @ rva abb2a86 (image 18abb2a86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2a86(void)

{
  FUN_190dd72e0();
  (*_DAT_181956748)();
  return;
}



// ===== continuation @ rva abb2a13 (image 18abb2a13) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2a13(void)

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



// ===== continuation @ rva abb2b66 (image 18abb2b66) =====

void FUN_18abb2b66(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva abb2b02 (image 18abb2b02) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abb2b02(void)

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



// ===== continuation @ rva abb2b5e (image 18abb2b5e) =====

void FUN_18abb2b5e(void)

{
  return;
}



// ===== continuation @ rva abb2acf (image 18abb2acf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2acf(void)

{
  FUN_190dd9df0();
  (*_DAT_1819566f8)();
  return;
}



// ===== continuation @ rva abb2a4c (image 18abb2a4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2a4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181956778)();
  return;
}



// ===== continuation @ rva abb2b26 (image 18abb2b26) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2b26(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181956758)();
  return;
}



// ===== continuation @ rva abb2aae (image 18abb2aae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abb2aae(void)

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



// ===== continuation @ rva abb2b4d (image 18abb2b4d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2b4d(void)

{
  (*_DAT_181956718)();
  return;
}



// ===== continuation @ rva abb2c86 (image 18abb2c86) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2c86(void)

{
  FUN_190dd72e0();
  (*_DAT_181956818)();
  return;
}



// ===== continuation @ rva abb2c13 (image 18abb2c13) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2c13(void)

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



// ===== continuation @ rva abb2d66 (image 18abb2d66) =====

void FUN_18abb2d66(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva abb2d4d (image 18abb2d4d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2d4d(void)

{
  (*_DAT_1819567f8)();
  return;
}



// ===== continuation @ rva abb2d5e (image 18abb2d5e) =====

void FUN_18abb2d5e(void)

{
  return;
}



// ===== continuation @ rva abb2c4c (image 18abb2c4c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2c4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181956848)();
  return;
}



// ===== continuation @ rva abb2cae (image 18abb2cae) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18abb2cae(void)

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



// ===== continuation @ rva abb2d26 (image 18abb2d26) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2d26(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1819567d8)();
  return;
}



// ===== continuation @ rva abb2ccf (image 18abb2ccf) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18abb2ccf(void)

{
  FUN_190dd9df0();
  (*_DAT_181956858)();
  return;
}



// ===== continuation @ rva ab00cf6 (image 18ab00cf6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00cf6(void)

{
  FUN_190dd72e0();
  (*_DAT_181931888)();
  return;
}



// ===== continuation @ rva ab00c83 (image 18ab00c83) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00c83(void)

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



// ===== continuation @ rva ab00dd6 (image 18ab00dd6) =====

void FUN_18ab00dd6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab00ce1 (image 18ab00ce1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab00ce1(void)

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



// ===== continuation @ rva ab00d72 (image 18ab00d72) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab00d72(void)

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



// ===== continuation @ rva ab00dce (image 18ab00dce) =====

void FUN_18ab00dce(void)

{
  return;
}



// ===== continuation @ rva ab00dbd (image 18ab00dbd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00dbd(void)

{
  (*_DAT_181931848)();
  return;
}



// ===== continuation @ rva ab00d96 (image 18ab00d96) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00d96(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931858)();
  return;
}



// ===== continuation @ rva ab00d1e (image 18ab00d1e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab00d1e(void)

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



// ===== continuation @ rva ab00ef6 (image 18ab00ef6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00ef6(void)

{
  FUN_190dd72e0();
  (*_DAT_181931978)();
  return;
}



// ===== continuation @ rva ab00e83 (image 18ab00e83) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00e83(void)

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



// ===== continuation @ rva ab00fce (image 18ab00fce) =====

void FUN_18ab00fce(void)

{
  return;
}



// ===== continuation @ rva ab00f96 (image 18ab00f96) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00f96(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931928)();
  return;
}



// ===== continuation @ rva ab00fd6 (image 18ab00fd6) =====

void FUN_18ab00fd6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab00fbd (image 18ab00fbd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00fbd(void)

{
  (*_DAT_181931968)();
  return;
}



// ===== continuation @ rva ab00ebc (image 18ab00ebc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00ebc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931948)();
  return;
}



// ===== continuation @ rva ab00ee1 (image 18ab00ee1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab00ee1(void)

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



// ===== continuation @ rva ab00f72 (image 18ab00f72) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab00f72(void)

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



// ===== continuation @ rva ab010f6 (image 18ab010f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab010f6(void)

{
  FUN_190dd72e0();
  (*_DAT_181931a38)();
  return;
}



// ===== continuation @ rva ab01083 (image 18ab01083) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01083(void)

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



// ===== continuation @ rva ab011ce (image 18ab011ce) =====

void FUN_18ab011ce(void)

{
  return;
}



// ===== continuation @ rva ab0113f (image 18ab0113f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0113f(void)

{
  FUN_190dd9df0();
  (*_DAT_181931a48)();
  return;
}



// ===== continuation @ rva ab010bc (image 18ab010bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab010bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931a58)();
  return;
}



// ===== continuation @ rva ab011d6 (image 18ab011d6) =====

void FUN_18ab011d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab01196 (image 18ab01196) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01196(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931a68)();
  return;
}



// ===== continuation @ rva ab0111e (image 18ab0111e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0111e(void)

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



// ===== continuation @ rva ab01172 (image 18ab01172) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab01172(void)

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



// ===== continuation @ rva ab012f6 (image 18ab012f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab012f6(void)

{
  FUN_190dd72e0();
  (*_DAT_181931ad8)();
  return;
}



// ===== continuation @ rva ab01283 (image 18ab01283) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01283(void)

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



// ===== continuation @ rva ab013d6 (image 18ab013d6) =====

void FUN_18ab013d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab013ce (image 18ab013ce) =====

void FUN_18ab013ce(void)

{
  return;
}



// ===== continuation @ rva ab0131e (image 18ab0131e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0131e(void)

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



// ===== continuation @ rva ab013bd (image 18ab013bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab013bd(void)

{
  (*_DAT_181931ac8)();
  return;
}



// ===== continuation @ rva ab0133f (image 18ab0133f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0133f(void)

{
  FUN_190dd9df0();
  (*_DAT_181931b38)();
  return;
}



// ===== continuation @ rva ab01396 (image 18ab01396) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01396(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931ae8)();
  return;
}



// ===== continuation @ rva ab012bc (image 18ab012bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab012bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931b48)();
  return;
}



// ===== continuation @ rva ab014f6 (image 18ab014f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab014f6(void)

{
  FUN_190dd72e0();
  (*_DAT_181931c28)();
  return;
}



// ===== continuation @ rva ab01483 (image 18ab01483) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01483(void)

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



// ===== continuation @ rva ab015d6 (image 18ab015d6) =====

void FUN_18ab015d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab014e1 (image 18ab014e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab014e1(void)

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



// ===== continuation @ rva ab015ce (image 18ab015ce) =====

void FUN_18ab015ce(void)

{
  return;
}



// ===== continuation @ rva ab014bc (image 18ab014bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab014bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931ba8)();
  return;
}



// ===== continuation @ rva ab015bd (image 18ab015bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab015bd(void)

{
  (*_DAT_181931bf8)();
  return;
}



// ===== continuation @ rva ab01572 (image 18ab01572) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab01572(void)

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



// ===== continuation @ rva ab0153f (image 18ab0153f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0153f(void)

{
  FUN_190dd9df0();
  (*_DAT_181931bd8)();
  return;
}



// ===== continuation @ rva ab01596 (image 18ab01596) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01596(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931bc8)();
  return;
}



// ===== continuation @ rva ab016f6 (image 18ab016f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab016f6(void)

{
  FUN_190dd72e0();
  (*_DAT_181931d08)();
  return;
}



// ===== continuation @ rva ab01683 (image 18ab01683) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01683(void)

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



// ===== continuation @ rva ab017d6 (image 18ab017d6) =====

void FUN_18ab017d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab01772 (image 18ab01772) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab01772(void)

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



// ===== continuation @ rva ab016e1 (image 18ab016e1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab016e1(void)

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



// ===== continuation @ rva ab017bd (image 18ab017bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab017bd(void)

{
  (*_DAT_181931cb8)();
  return;
}



// ===== continuation @ rva ab017ce (image 18ab017ce) =====

void FUN_18ab017ce(void)

{
  return;
}



// ===== continuation @ rva ab0173f (image 18ab0173f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0173f(void)

{
  FUN_190dd9df0();
  (*_DAT_181931c88)();
  return;
}



// ===== continuation @ rva ab016bc (image 18ab016bc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab016bc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931c98)();
  return;
}



// ===== continuation @ rva ab018f6 (image 18ab018f6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab018f6(void)

{
  FUN_190dd72e0();
  (*_DAT_181931d98)();
  return;
}



// ===== continuation @ rva ab01883 (image 18ab01883) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01883(void)

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



// ===== continuation @ rva ab019ce (image 18ab019ce) =====

void FUN_18ab019ce(void)

{
  return;
}



// ===== continuation @ rva ab019d6 (image 18ab019d6) =====

void FUN_18ab019d6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab019bd (image 18ab019bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab019bd(void)

{
  (*_DAT_181931d88)();
  return;
}



// ===== continuation @ rva ab0191e (image 18ab0191e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0191e(void)

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



// ===== continuation @ rva ab0193f (image 18ab0193f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0193f(void)

{
  FUN_190dd9df0();
  (*_DAT_181931dc8)();
  return;
}



// ===== continuation @ rva ab01996 (image 18ab01996) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01996(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931d78)();
  return;
}



// ===== continuation @ rva ab01972 (image 18ab01972) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab01972(void)

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



// ===== continuation @ rva ab01af6 (image 18ab01af6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01af6(void)

{
  FUN_190dd72e0();
  (*_DAT_181931ea8)();
  return;
}



// ===== continuation @ rva ab01a83 (image 18ab01a83) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01a83(void)

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



// ===== continuation @ rva ab01bce (image 18ab01bce) =====

void FUN_18ab01bce(void)

{
  return;
}



// ===== continuation @ rva ab01b3f (image 18ab01b3f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01b3f(void)

{
  FUN_190dd9df0();
  (*_DAT_181931ec8)();
  return;
}



// ===== continuation @ rva ab01bd6 (image 18ab01bd6) =====

void FUN_18ab01bd6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab01bbd (image 18ab01bbd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01bbd(void)

{
  (*_DAT_181931e68)();
  return;
}



// ===== continuation @ rva ab01b96 (image 18ab01b96) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01b96(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931e58)();
  return;
}



// ===== continuation @ rva ab01abc (image 18ab01abc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01abc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931eb8)();
  return;
}



// ===== continuation @ rva ab01b1e (image 18ab01b1e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab01b1e(void)

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



// ===== continuation @ rva ab01cf6 (image 18ab01cf6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01cf6(void)

{
  FUN_190dd72e0();
  (*_DAT_181931f98)();
  return;
}



// ===== continuation @ rva ab01c83 (image 18ab01c83) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01c83(void)

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



// ===== continuation @ rva ab01dce (image 18ab01dce) =====

void FUN_18ab01dce(void)

{
  return;
}



// ===== continuation @ rva ab01d3f (image 18ab01d3f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01d3f(void)

{
  FUN_190dd9df0();
  (*_DAT_181931f88)();
  return;
}



// ===== continuation @ rva ab01cbc (image 18ab01cbc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01cbc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931f78)();
  return;
}



// ===== continuation @ rva ab01dd6 (image 18ab01dd6) =====

void FUN_18ab01dd6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab01dbd (image 18ab01dbd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01dbd(void)

{
  (*_DAT_181931fa8)();
  return;
}



// ===== continuation @ rva ab01d96 (image 18ab01d96) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01d96(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181931f58)();
  return;
}



// ===== continuation @ rva ab01ce1 (image 18ab01ce1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab01ce1(void)

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



// ===== continuation @ rva ab01d72 (image 18ab01d72) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab01d72(void)

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



// ===== continuation @ rva ab01ef6 (image 18ab01ef6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01ef6(void)

{
  FUN_190dd72e0();
  (*_DAT_181932078)();
  return;
}



// ===== continuation @ rva ab01e83 (image 18ab01e83) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01e83(void)

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



// ===== continuation @ rva ab01fce (image 18ab01fce) =====

void FUN_18ab01fce(void)

{
  return;
}



// ===== continuation @ rva ab01f3f (image 18ab01f3f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01f3f(void)

{
  FUN_190dd9df0();
  (*_DAT_181932068)();
  return;
}



// ===== continuation @ rva ab01ebc (image 18ab01ebc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01ebc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181932048)();
  return;
}



// ===== continuation @ rva ab01fd6 (image 18ab01fd6) =====

void FUN_18ab01fd6(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab01fbd (image 18ab01fbd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01fbd(void)

{
  (*_DAT_181932088)();
  return;
}



// ===== continuation @ rva ab01ee1 (image 18ab01ee1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab01ee1(void)

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



// ===== continuation @ rva ab01f96 (image 18ab01f96) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab01f96(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181932038)();
  return;
}



// ===== continuation @ rva ab01f72 (image 18ab01f72) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab01f72(void)

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



// ===== continuation @ rva ab07446 (image 18ab07446) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07446(void)

{
  FUN_190dd72e0();
  (*_DAT_181933848)();
  return;
}



// ===== continuation @ rva ab073d3 (image 18ab073d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab073d3(void)

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



// ===== continuation @ rva ab07526 (image 18ab07526) =====

void FUN_18ab07526(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab0750d (image 18ab0750d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0750d(void)

{
  (*_DAT_181933878)();
  return;
}



// ===== continuation @ rva ab0746e (image 18ab0746e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0746e(void)

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



// ===== continuation @ rva ab07431 (image 18ab07431) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab07431(void)

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



// ===== continuation @ rva ab0751e (image 18ab0751e) =====

void FUN_18ab0751e(void)

{
  return;
}



// ===== continuation @ rva ab074e6 (image 18ab074e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab074e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181933838)();
  return;
}



// ===== continuation @ rva ab0740c (image 18ab0740c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0740c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181933858)();
  return;
}



// ===== continuation @ rva ab074c2 (image 18ab074c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab074c2(void)

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



// ===== continuation @ rva ab07646 (image 18ab07646) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07646(void)

{
  FUN_190dd72e0();
  (*_DAT_181933948)();
  return;
}



// ===== continuation @ rva ab075d3 (image 18ab075d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab075d3(void)

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



// ===== continuation @ rva ab07726 (image 18ab07726) =====

void FUN_18ab07726(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab0771e (image 18ab0771e) =====

void FUN_18ab0771e(void)

{
  return;
}



// ===== continuation @ rva ab0760c (image 18ab0760c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0760c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181933938)();
  return;
}



// ===== continuation @ rva ab07631 (image 18ab07631) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab07631(void)

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



// ===== continuation @ rva ab0766e (image 18ab0766e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0766e(void)

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



// ===== continuation @ rva ab0768f (image 18ab0768f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0768f(void)

{
  FUN_190dd9df0();
  (*_DAT_181933998)();
  return;
}



// ===== continuation @ rva ab076e6 (image 18ab076e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab076e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181933988)();
  return;
}



// ===== continuation @ rva ab07846 (image 18ab07846) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07846(void)

{
  FUN_190dd72e0();
  (*_DAT_181933a48)();
  return;
}



// ===== continuation @ rva ab077d3 (image 18ab077d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab077d3(void)

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



// ===== continuation @ rva ab07926 (image 18ab07926) =====

void FUN_18ab07926(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab07831 (image 18ab07831) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab07831(void)

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



// ===== continuation @ rva ab0791e (image 18ab0791e) =====

void FUN_18ab0791e(void)

{
  return;
}



// ===== continuation @ rva ab078e6 (image 18ab078e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab078e6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181933a58)();
  return;
}



// ===== continuation @ rva ab0788f (image 18ab0788f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0788f(void)

{
  FUN_190dd9df0();
  (*_DAT_181933a38)();
  return;
}



// ===== continuation @ rva ab078c2 (image 18ab078c2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab078c2(void)

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



// ===== continuation @ rva ab0786e (image 18ab0786e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0786e(void)

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



// ===== continuation @ rva ab0790d (image 18ab0790d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0790d(void)

{
  (*_DAT_181933a78)();
  return;
}



// ===== continuation @ rva ab07a46 (image 18ab07a46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07a46(void)

{
  FUN_190dd72e0();
  (*_DAT_181933b48)();
  return;
}



// ===== continuation @ rva ab079d3 (image 18ab079d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab079d3(void)

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



// ===== continuation @ rva ab07b1e (image 18ab07b1e) =====

void FUN_18ab07b1e(void)

{
  return;
}



// ===== continuation @ rva ab07a8f (image 18ab07a8f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07a8f(void)

{
  FUN_190dd9df0();
  (*_DAT_181933af8)();
  return;
}



// ===== continuation @ rva ab07b26 (image 18ab07b26) =====

void FUN_18ab07b26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab07a31 (image 18ab07a31) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab07a31(void)

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



// ===== continuation @ rva ab07ac2 (image 18ab07ac2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab07ac2(void)

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



// ===== continuation @ rva ab07ae6 (image 18ab07ae6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07ae6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181933b18)();
  return;
}



// ===== continuation @ rva ab07b0d (image 18ab07b0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07b0d(void)

{
  (*_DAT_181933b28)();
  return;
}



// ===== continuation @ rva ab07a0c (image 18ab07a0c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07a0c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181933ae8)();
  return;
}



// ===== continuation @ rva ab07c46 (image 18ab07c46) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07c46(void)

{
  FUN_190dd72e0();
  (*_DAT_181933bf8)();
  return;
}



// ===== continuation @ rva ab07bd3 (image 18ab07bd3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07bd3(void)

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



// ===== continuation @ rva ab07d26 (image 18ab07d26) =====

void FUN_18ab07d26(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab07d1e (image 18ab07d1e) =====

void FUN_18ab07d1e(void)

{
  return;
}



// ===== continuation @ rva ab07ce6 (image 18ab07ce6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07ce6(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181933c18)();
  return;
}



// ===== continuation @ rva ab07cc2 (image 18ab07cc2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab07cc2(void)

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



// ===== continuation @ rva ab07c31 (image 18ab07c31) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab07c31(void)

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



// ===== continuation @ rva ab07c6e (image 18ab07c6e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab07c6e(void)

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



// ===== continuation @ rva ab07d0d (image 18ab07d0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07d0d(void)

{
  (*_DAT_181933bb8)();
  return;
}



// ===== continuation @ rva ab089d8 (image 18ab089d8) =====

void FUN_18ab089d8(void)

{
  return;
}



// ===== continuation @ rva ab07e10 (image 18ab07e10) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab07e10(void)

{
  FUN_190ddce00();
  (*_DAT_181933cc8)();
  return;
}



// ===== continuation @ rva ab08cc5 (image 18ab08cc5) =====

void FUN_18ab08cc5(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab0861d (image 18ab0861d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0861d(void)

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



// ===== continuation @ rva ab085ee (image 18ab085ee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab085ee(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181933c98)();
  return;
}



// ===== continuation @ rva ab08492 (image 18ab08492) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab08492(void)

{
  FUN_190dd72e0();
  (*_DAT_181934288)();
  return;
}



// ===== continuation @ rva ab08795 (image 18ab08795) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab08795(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1819340c8)();
  return;
}



// ===== continuation @ rva ab07e43 (image 18ab07e43) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab07e43(void)

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



// ===== continuation @ rva ab080cf (image 18ab080cf) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab080cf(void)

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



// ===== continuation @ rva ab087fb (image 18ab087fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab087fb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181933e78)();
  return;
}



// ===== continuation @ rva ab085d3 (image 18ab085d3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab085d3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181933cb8)();
  return;
}



// ===== continuation @ rva ab08649 (image 18ab08649) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab08649(void)

{
  (*_DAT_181934268)();
  return;
}



// ===== continuation @ rva ab09978 (image 18ab09978) =====

void FUN_18ab09978(void)

{
  return;
}



// ===== continuation @ rva ab08db0 (image 18ab08db0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab08db0(void)

{
  FUN_190ddce00();
  (*_DAT_181934558)();
  return;
}



// ===== continuation @ rva ab09c65 (image 18ab09c65) =====

void FUN_18ab09c65(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab0920e (image 18ab0920e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0920e(void)

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



// ===== continuation @ rva ab09969 (image 18ab09969) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab09969(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_1819347c8)();
  return;
}



// ===== continuation @ rva ab0990d (image 18ab0990d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0990d(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1819348d8)();
  return;
}



// ===== continuation @ rva ab09377 (image 18ab09377) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab09377(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181934828)();
  return;
}



// ===== continuation @ rva ab09025 (image 18ab09025) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab09025(void)

{
  longlong unaff_R14;
  int in_stack_00000030;
  
  switch(unaff_R14 == 0 || in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab09160 (image 18ab09160) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab09160(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1819347c8)();
  return;
}



// ===== continuation @ rva ab09a0f (image 18ab09a0f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab09a0f(void)

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



// ===== continuation @ rva ab08ee4 (image 18ab08ee4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab08ee4(void)

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



// ===== continuation @ rva ab092a0 (image 18ab092a0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab092a0(void)

{
  (*_DAT_1819348c8)();
  return;
}



// ===== continuation @ rva ab0c8eb (image 18ab0c8eb) =====

void FUN_18ab0c8eb(void)

{
  return;
}



// ===== continuation @ rva ab09db4 (image 18ab09db4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab09db4(void)

{
  FUN_190ddce00();
  (*_DAT_1819351d8)();
  return;
}



// ===== continuation @ rva ab0d22a (image 18ab0d22a) =====

void FUN_18ab0d22a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab0c7f8 (image 18ab0c7f8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0c7f8(void)

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



// ===== continuation @ rva ab0cf25 (image 18ab0cf25) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0cf25(void)

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



// ===== continuation @ rva ab0ca20 (image 18ab0ca20) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0ca20(void)

{
  int in_stack_00000030;
  
  switch(in_stack_00000030 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab0c6fb (image 18ab0c6fb) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0c6fb(void)

{
  undefined8 uStack0000000000000038;
  
  uStack0000000000000038 = 0;
  (*_DAT_181934e48)();
  return;
}



// ===== continuation @ rva ab0c79f (image 18ab0c79f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0c79f(void)

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



// ===== continuation @ rva ab0bed9 (image 18ab0bed9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0bed9(void)

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



// ===== continuation @ rva ab0cb75 (image 18ab0cb75) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0cb75(void)

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



// ===== continuation @ rva ab0cd2a (image 18ab0cd2a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0cd2a(void)

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



// ===== continuation @ rva ab114e3 (image 18ab114e3) =====

void FUN_18ab114e3(void)

{
  return;
}



// ===== continuation @ rva ab0d3e4 (image 18ab0d3e4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0d3e4(void)

{
  FUN_190ddce00();
  (*_DAT_181935f18)();
  return;
}



// ===== continuation @ rva ab110f9 (image 18ab110f9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab110f9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1819359a8)();
  return;
}



// ===== continuation @ rva ab10f80 (image 18ab10f80) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab10f80(void)

{
  FUN_190de3220();
  (*_DAT_181935e78)();
  return;
}



// ===== continuation @ rva ab11691 (image 18ab11691) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab11691(void)

{
  FUN_190de3220();
  (*_DAT_181935ce8)();
  return;
}



// ===== continuation @ rva ab1172b (image 18ab1172b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab1172b(void)

{
  longlong in_stack_00000090;
  
  switch(in_stack_00000090 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab11635 (image 18ab11635) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab11635(void)

{
  undefined4 uStack0000000000000040;
  
  uStack0000000000000040 = 0;
  (*_DAT_1819360c8)();
  return;
}



// ===== continuation @ rva ab10d4a (image 18ab10d4a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab10d4a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181935da8)();
  return;
}



// ===== continuation @ rva ab109c4 (image 18ab109c4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab109c4(void)

{
  FUN_190dd72e0();
  (*_DAT_181935b68)();
  return;
}



// ===== continuation @ rva ab11e93 (image 18ab11e93) =====

void FUN_18ab11e93(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab10a40 (image 18ab10a40) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab10a40(void)

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



// ===== continuation @ rva ab1123a (image 18ab1123a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab1123a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181935cd8)();
  return;
}



// ===== continuation @ rva ab111f4 (image 18ab111f4) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab111f4(void)

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



// ===== continuation @ rva ab15b03 (image 18ab15b03) =====

void FUN_18ab15b03(void)

{
  return;
}



// ===== continuation @ rva ab12054 (image 18ab12054) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab12054(void)

{
  FUN_190ddce00();
  (*_DAT_181936fd8)();
  return;
}



// ===== continuation @ rva ab16442 (image 18ab16442) =====

void FUN_18ab16442(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab1539e (image 18ab1539e) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab1539e(void)

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



// ===== continuation @ rva ab15dde (image 18ab15dde) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab15dde(void)

{
  FUN_190dd72e0();
  (*_DAT_181937168)();
  return;
}



// ===== continuation @ rva ab15d61 (image 18ab15d61) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab15d61(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181937208)();
  return;
}



// ===== continuation @ rva ab16240 (image 18ab16240) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab16240(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181936e58)();
  return;
}



// ===== continuation @ rva ab15f0f (image 18ab15f0f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab15f0f(void)

{
  FUN_190ddfc90();
  (*_DAT_181936f88)();
  return;
}



// ===== continuation @ rva ab157ea (image 18ab157ea) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab157ea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1819374b8)();
  return;
}



// ===== continuation @ rva ab15641 (image 18ab15641) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab15641(void)

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



// ===== continuation @ rva ab15784 (image 18ab15784) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab15784(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181937128)();
  return;
}



// ===== continuation @ rva ab155fc (image 18ab155fc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab155fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_1819373d8)();
  return;
}



// ===== continuation @ rva ab154a1 (image 18ab154a1) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab154a1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1819374e8)();
  return;
}



// ===== continuation @ rva ab15169 (image 18ab15169) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab15169(void)

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



// ===== continuation @ rva ab1626f (image 18ab1626f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab1626f(void)

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



// ===== continuation @ rva aaf8ea9 (image 18aaf8ea9) =====

void FUN_18aaf8ea9(void)

{
  return;
}



// ===== continuation @ rva aaf42c3 (image 18aaf42c3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aaf42c3(void)

{
  FUN_190ddce00();
  (*_DAT_18192df08)();
  return;
}



// ===== continuation @ rva aaf8608 (image 18aaf8608) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aaf8608(void)

{
  (*_DAT_18192ecf8)();
  return;
}



// ===== continuation @ rva aafa071 (image 18aafa071) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aafa071(void)

{
  (*_DAT_18192f178)();
  return;
}



// ===== continuation @ rva aafbe4f (image 18aafbe4f) =====

void FUN_18aafbe4f(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva aaf8cf7 (image 18aaf8cf7) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aaf8cf7(void)

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



// ===== continuation @ rva aaf7dda (image 18aaf7dda) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aaf7dda(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18192e8b8)();
  return;
}



// ===== continuation @ rva aaf767a (image 18aaf767a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aaf767a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_18192e368)();
  return;
}



// ===== continuation @ rva aaf8956 (image 18aaf8956) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aaf8956(void)

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



// ===== continuation @ rva aafbe47 (image 18aafbe47) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aafbe47(void)

{
  (*_DAT_18192ed68)();
  return;
}



// ===== continuation @ rva aaf9942 (image 18aaf9942) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aaf9942(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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



// ===== continuation @ rva aafbe07 (image 18aafbe07) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aafbe07(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_18192f3d8)();
  return;
}



// ===== continuation @ rva aafa928 (image 18aafa928) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18aafa928(void)

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



// ===== continuation @ rva ab00582 (image 18ab00582) =====

void FUN_18ab00582(void)

{
  return;
}



// ===== continuation @ rva aafc03a (image 18aafc03a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aafc03a(void)

{
  FUN_190ddce00();
  (*_DAT_181930948)();
  return;
}



// ===== continuation @ rva ab0072b (image 18ab0072b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0072b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack0000000000000060;
  
  uStack0000000000000060 = param_3;
  FUN_190ddfc90();
  (*_DAT_1819306e8)();
  return;
}



// ===== continuation @ rva ab00b37 (image 18ab00b37) =====

void FUN_18ab00b37(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab000bb (image 18ab000bb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab000bb(void)

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



// ===== continuation @ rva aaff821 (image 18aaff821) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aaff821(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_1819305d8)();
  return;
}



// ===== continuation @ rva ab00aef (image 18ab00aef) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00aef(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x2e8))();
  (*_DAT_181930aa8)();
  return;
}



// ===== continuation @ rva aaff246 (image 18aaff246) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aaff246(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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



// ===== continuation @ rva ab00a9b (image 18ab00a9b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00a9b(void)

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



// ===== continuation @ rva ab00b2f (image 18ab00b2f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab00b2f(void)

{
  (*_DAT_181930de8)();
  return;
}



// ===== continuation @ rva ab0039c (image 18ab0039c) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab0039c(void)

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



// ===== continuation @ rva aaffabe (image 18aaffabe) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18aaffabe(void)

{
  FUN_190de3220();
  (*_DAT_181930468)();
  return;
}



// ===== continuation @ rva ab07101 (image 18ab07101) =====

void FUN_18ab07101(void)

{
  return;
}



// ===== continuation @ rva ab02124 (image 18ab02124) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab02124(void)

{
  FUN_190ddce00();
  (*_DAT_1819324e8)();
  return;
}



// ===== continuation @ rva ab072b4 (image 18ab072b4) =====

void FUN_18ab072b4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab068dd (image 18ab068dd) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab068dd(void)

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



// ===== continuation @ rva ab06724 (image 18ab06724) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab06724(void)

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



// ===== continuation @ rva ab072a9 (image 18ab072a9) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab072a9(void)

{
  (*_DAT_1819327d8)();
  return;
}



// ===== continuation @ rva ab06688 (image 18ab06688) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab06688(void)

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



// ===== continuation @ rva ab06f20 (image 18ab06f20) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab06f20(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1819324d8)();
  return;
}



// ===== continuation @ rva ab06cf8 (image 18ab06cf8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab06cf8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181932898)();
  return;
}



// ===== continuation @ rva ab065f9 (image 18ab065f9) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab065f9(void)

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



// ===== continuation @ rva ab06d79 (image 18ab06d79) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab06d79(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1819321e8)();
  return;
}



// ===== continuation @ rva ab06c00 (image 18ab06c00) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab06c00(void)

{
  FUN_190de3220();
  (*_DAT_181932658)();
  return;
}



// ===== continuation @ rva ab0680e (image 18ab0680e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab0680e(void)

{
  (*_DAT_181932838)();
  return;
}



// ===== continuation @ rva ab1d3b8 (image 18ab1d3b8) =====

void FUN_18ab1d3b8(void)

{
  return;
}



// ===== continuation @ rva ab1663a (image 18ab1663a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab1663a(void)

{
  FUN_190ddce00();
  (*_DAT_181939468)();
  return;
}



// ===== continuation @ rva ab1ebf3 (image 18ab1ebf3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab1ebf3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1819391c8)();
  return;
}



// ===== continuation @ rva ab1b00e (image 18ab1b00e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab1b00e(void)

{
  undefined8 uVar1;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(*unaff_RSI + 0xa8))();
  FUN_190dcd3d0(0x927,uVar1);
  (*_DAT_181938e88)();
  return;
}



// ===== continuation @ rva ab1f187 (image 18ab1f187) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab1f187(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1819396c8)();
  return;
}



// ===== continuation @ rva ab1b45f (image 18ab1b45f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab1b45f(void)

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



// ===== continuation @ rva ab1c3e6 (image 18ab1c3e6) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab1c3e6(void)

{
  (*_DAT_1819399e8)();
  return;
}



// ===== continuation @ rva ab1f628 (image 18ab1f628) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab1f628(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x68))();
  (*_DAT_18193a6f8)();
  return;
}



// ===== continuation @ rva ab1c913 (image 18ab1c913) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab1c913(void)

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



// ===== continuation @ rva ab1f639 (image 18ab1f639) =====

void FUN_18ab1f639(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab1a738 (image 18ab1a738) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab1a738(void)

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



// ===== continuation @ rva ab1b4db (image 18ab1b4db) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab1b4db(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
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



// ===== continuation @ rva ab1e7c6 (image 18ab1e7c6) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab1e7c6(void)

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



// ===== continuation @ rva ab23146 (image 18ab23146) =====

void FUN_18ab23146(void)

{
  return;
}



// ===== continuation @ rva ab1f7f4 (image 18ab1f7f4) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab1f7f4(void)

{
  FUN_190ddce00();
  (*_DAT_18193b598)();
  return;
}



// ===== continuation @ rva ab239b7 (image 18ab239b7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab239b7(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18193bb58)();
  return;
}



// ===== continuation @ rva ab22654 (image 18ab22654) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab22654(void)

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



// ===== continuation @ rva ab2380d (image 18ab2380d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab2380d(void)

{
  (*_DAT_18193b908)();
  return;
}



// ===== continuation @ rva ab226eb (image 18ab226eb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab226eb(void)

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



// ===== continuation @ rva ab23a80 (image 18ab23a80) =====

void FUN_18ab23a80(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab227f1 (image 18ab227f1) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab227f1(void)

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



// ===== continuation @ rva ab233cb (image 18ab233cb) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab233cb(void)

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



// ===== continuation @ rva ab22dc7 (image 18ab22dc7) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab22dc7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_18193b4a8)();
  return;
}



// ===== continuation @ rva ab22c3f (image 18ab22c3f) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab22c3f(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x3a0))();
  (*_DAT_18193b5d8)();
  return;
}



// ===== continuation @ rva ab23103 (image 18ab23103) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab23103(void)

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



// ===== continuation @ rva ab23d08 (image 18ab23d08) =====

void FUN_18ab23d08(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(*unaff_R13 + 0x558))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x30) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018ab23d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18193cd30 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}



// ===== continuation @ rva ab23cb3 (image 18ab23cb3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ab23cea */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ab23cb3(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_R13 + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// ===== continuation @ rva ab38693 (image 18ab38693) =====

undefined8 FUN_18ab38693(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x2e8))();
  cVar1 = (**(code **)(*unaff_R13 + 0x720))();
  if (cVar1 == '\0') {
    uVar2 = *(undefined8 *)(unaff_RBP + 0x70);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



// ===== continuation @ rva ab3860d (image 18ab3860d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab3860d(void)

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



// ===== continuation @ rva ab2d4a0 (image 18ab2d4a0) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab2d4a0(void)

{
  byte bVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  ulonglong uVar5;
  ulonglong uVar6;
  
  _DAT_183269708 = func_0x00018ab4bca0(_DAT_183269aa8 ^ 0xff80005e95007253);
  uVar4 = _DAT_183269708 >> 1 | _DAT_183269708;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_183269708) & 0xffffffff80000000;
  _DAT_183269998 = (_DAT_183269998 ^ uVar4) + 0xf7edbb9a ^ 0x32bc257f696f72b1;
  _DAT_1832698f0 = (_DAT_1832698f0 * 0x61bb5c23990d4f21 ^ _DAT_183269998) + uVar4;
  _DAT_1832699c0 = _DAT_1832698f0 ^ _DAT_183269998;
  _DAT_183269930 = 0xf7edbb9a;
  uVar4 = (_DAT_1832698f8 ^ _DAT_18193cf60) + _DAT_183269a20 + 0xce5965a9;
  uVar5 = (_DAT_183269a20 ^ _UNK_18193cf68) + _DAT_1832698f8 + 0x91efc07c;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832698f8 ^ _DAT_18193cf60;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183269a20 ^ _UNK_18193cf68;
  _DAT_1832698c0 =
       func_0x00018ab4bca0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832698f8 + 0x91efc07c) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183269a20 + 0xce5965a9));
  _DAT_183269960 = (_DAT_183269960 ^ _DAT_1832698c0 ^ 0x4a100680) + 0xdb9486f0 ^ 0x97e146e38c2d69fb;
  _DAT_1832699a8 =
       (_DAT_1832699a8 * 0x5b76a85968ea653b ^ _DAT_183269960) + (_DAT_1832698c0 ^ 0x4a100680);
  _DAT_1832699f0 = _DAT_1832699a8 ^ _DAT_183269960;
  _DAT_183269ac0 = 0xdb9486f0;
  _DAT_1832697e0 = func_0x00018ab4bca0(_DAT_183269730 + 0xc005edb0036ffU ^ 0x10);
  uVar4 = (_DAT_1832697e0 ^ 0x65752f00) << 0x18 | _DAT_1832697e0 >> 0x28;
  _DAT_1832698a0 = (_DAT_1832698a0 ^ uVar4) - 0x65752f00 ^ 0x1ee9611934d38f37;
  _DAT_1832699e0 = (_DAT_1832699e0 * -0x18108e6fc71e5e6b ^ _DAT_1832698a0) + uVar4;
  _DAT_183269978 = _DAT_1832699e0 ^ _DAT_1832698a0;
  _DAT_183269890 = 0x9a8ad100;
  uVar4 = (_DAT_183269878 ^ _DAT_18193cf70) + _DAT_1832699f0 + 0x7bdddcdb;
  uVar5 = (_DAT_1832699f0 ^ _UNK_18193cf78) + _DAT_183269878 + 0x65752f00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183269878 ^ _DAT_18193cf70;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832699f0 ^ _UNK_18193cf78;
  _DAT_183269990 =
       func_0x00018ab4bca0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183269878 + 0x65752f00) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832699f0 + 0x7bdddcdb));
  uVar4 = _DAT_183269990 - (_DAT_183269990 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_183269990;
  _DAT_183269858 = _DAT_183269a08 ^ uVar4 ^ 0x165752efe;
  _DAT_183269ac8 = (_DAT_183269ac8 ^ uVar4) + 0x165752efe ^ 0x9d4b6b95b4a144a6;
  _DAT_183269978 = (_DAT_183269978 * -0x43816cc39db54179 ^ _DAT_183269ac8) + uVar4;
  _DAT_183269880 = _DAT_183269978 ^ _DAT_183269ac8;
  _DAT_183269898 = 0x65752efe;
  _DAT_1832699a8 = func_0x00018ab4bca0(_DAT_1832697a8 ^ 0xff1bff924affcc6f);
  uVar4 = _DAT_1832699a8 - (_DAT_1832699a8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ _DAT_1832699a8;
  _DAT_183269988 = (_DAT_183269988 ^ uVar4) - 0x1a51c790 ^ 0x404de8191f115f1f;
  _DAT_183269ad0 = (_DAT_183269ad0 * 0x334d2564be809b9d ^ _DAT_183269988) + uVar4;
  _DAT_183269840 = _DAT_183269ad0 ^ _DAT_183269988;
  _DAT_183269a30 = 0xe5ae3870;
  uVar4 = (~_DAT_1832697d8 + 0x1a51c791) *
          ((_DAT_1832698f0 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_1832698f0 & 0x7bdddcdb) * 2);
  uVar4 = (uVar4 | _DAT_183269ad8) + (uVar4 & _DAT_183269ad8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183269a20 = func_0x00018ab4bca0((uVar4 | 0x618c1b4b) + (ulonglong)((uint)uVar4 & 0x618c1b4b))
  ;
  uVar4 = _DAT_183269a20 ^ 0x1a51c790;
  _DAT_183269aa8 = _DAT_183269958 ^ uVar4 ^ 0x11a51c78e;
  _DAT_183269950 = (_DAT_183269950 ^ uVar4) + 0x11a51c78e ^ 0xd0033dcdf450b6ce;
  _DAT_183269780 = (_DAT_183269780 * -0x252c6bf9edf33033 ^ _DAT_183269950) + uVar4;
  _DAT_183269960 = _DAT_183269780 ^ _DAT_183269950;
  _DAT_183269878 = 0x1a51c78e;
  uVar4 = (_DAT_183269aa8 ^ _DAT_18193cf80) + _DAT_183269860 + 0x9e73e4ab;
  uVar5 = (_DAT_183269860 ^ _UNK_18193cf88) + _DAT_183269aa8 + 0xe5ae3870;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183269aa8 ^ _DAT_18193cf80;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183269860 ^ _UNK_18193cf88;
  _DAT_183269ab8 =
       func_0x00018ab4bca0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183269aa8 + 0xe5ae3870) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183269860 + 0x9e73e4ab));
  uVar4 = _DAT_183269ab8 - (_DAT_183269ab8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar4 = ((uint)bVar1 + (uint)bVar1 ^ _DAT_183269ab8) * -0x1114e62f80bfbf15;
  _DAT_183269830 = _DAT_183269a60 ^ uVar4 ^ 0xfffffffe;
  _DAT_183269aa8 = (_DAT_183269aa8 ^ uVar4) + 0xfffffffe ^ 0xf2624adf08fc9ddf;
  _DAT_183269720 = (_DAT_183269720 * 0x30c2fd25a2b5439d ^ _DAT_183269aa8) + uVar4;
  _DAT_1832697f0 = _DAT_183269720 ^ _DAT_183269aa8;
  _DAT_183269710 = 0xfffffffe;
  uVar4 = (~_DAT_1832697d0 + 0x71020109) *
          ((_DAT_183269718 ^ 0x84222325) + (ulonglong)((uint)_DAT_183269718 & 0x84222325) * 2);
  uVar4 = (uVar4 | _DAT_1832697b8) + (uVar4 & _DAT_1832697b8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_183269928 = func_0x00018ab4bca0((uVar4 | 0xf520222d) + (ulonglong)((uint)uVar4 & 0xf520222d))
  ;
  _DAT_183269a78 = (_DAT_183269a78 ^ 0x2000000001c40804) - 0x71020108 ^ 0x3fdd3ce423935ab0;
  _DAT_183269868 = (_DAT_183269868 * -0x7725ee2b8a9877f9 ^ _DAT_183269a78) + 0x2000000001c40804;
  _DAT_183269940 = _DAT_183269868 ^ _DAT_183269a78;
  _DAT_1832699b8 = 0x8efdfef8;
  uVar4 = (_DAT_183269ab8 ^ _DAT_18193cf90) + _DAT_183269720 + 0x7bdddcdb;
  uVar5 = (_DAT_183269720 ^ _UNK_18193cf98) + _DAT_183269ab8 + 0x71020108;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183269ab8 ^ _DAT_18193cf90;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183269720 ^ _UNK_18193cf98;
  _DAT_1832699c8 =
       func_0x00018ab4bca0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183269ab8 + 0x71020108) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183269720 + 0x7bdddcdb));
  uVar4 = _DAT_1832699c8 - (_DAT_1832699c8 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_1832699c8) << 0x1f | _DAT_1832699c8 >> 0x21;
  _DAT_183269800 = _DAT_1832697c8 ^ uVar4 ^ 0x171020106;
  _DAT_183269928 = (_DAT_183269928 ^ uVar4) + 0x171020106 ^ 0x2c2e92350fc8c7fe;
  _DAT_183269958 = (_DAT_183269958 * -0x31f47ae002e08b07 ^ _DAT_183269928) + uVar4;
  _DAT_183269a40 = _DAT_183269958 ^ _DAT_183269928;
  _DAT_1832699b8 = 0x71020106;
  uVar4 = (~_DAT_183269948 + 0x8efdfef9) *
          ((_DAT_183269810 ^ 0xf5202223) + (ulonglong)((uint)_DAT_183269810 & 0xf5202223) * 2);
  uVar4 = (uVar4 | _DAT_1832697e8) + (uVar4 & _DAT_1832697e8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832697e8 = func_0x00018ab4bca0((uVar4 | 0x7bdddcdb) + (ulonglong)((uint)uVar4 & 0x7bdddcdb))
  ;
  uVar5 = _UNK_18193cfa8;
  uVar4 = _DAT_18193cfa0;
  uVar3 = (_DAT_1832697e8 ^ 0xfffffffe) << 0x2f | (_DAT_1832697e8 ^ 0xfffffffe) >> 0x11;
  _DAT_183269788 = _DAT_183269740 ^ uVar3 ^ 0xfffffffe;
  _DAT_183269910 = (_DAT_183269910 ^ uVar3) + 0xfffffffe ^ 0x2a6cdf20f8329511;
  _DAT_183269810 = (_DAT_183269810 * -0x61b50392fd2a5425 ^ _DAT_183269910) + uVar3;
  _DAT_183269868 = _DAT_183269810 ^ _DAT_183269910;
  _DAT_183269970 = _DAT_1832699f0 ^ 0xfffffffe;
  _DAT_183269af0 = 0xfffffffe;
  uVar3 = (_DAT_183269890 ^ _DAT_18193cfa0) + _DAT_183269818 + 0x73cf98bf;
  uVar6 = (_DAT_183269818 ^ _UNK_18193cfa8) + _DAT_183269890 + 0xdb9486f0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183269890 ^ _DAT_18193cfa0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_183269818 ^ _UNK_18193cfa8;
  _DAT_183269a18 =
       func_0x00018ab4bca0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183269890 + 0xdb9486f0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183269818 + 0x73cf98bf));
  uVar3 = _DAT_183269a18 & 0x3fffffffffff;
  _DAT_1832697e0 = _DAT_1832697a8 ^ uVar3 ^ 0x1d382428a;
  _DAT_183269750 = (_DAT_183269750 ^ uVar3) + 0x1d382428a ^ 0x4034c319718d21e;
  _DAT_183269898 = (_DAT_183269898 * 0x7a6819f3054e7ac3 ^ _DAT_183269750) + uVar3;
  _DAT_1832698d0 = _DAT_183269898 ^ _DAT_183269750;
  _DAT_1832697b0 = 0xd382428a;
  uVar3 = (_DAT_183269a60 ^ uVar4) + _DAT_1832699d8 + 0x73cf98bf;
  uVar6 = (_DAT_1832699d8 ^ uVar5) + _DAT_183269a60 + 0xdb9486f0;
  uVar4 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183269a60 ^ uVar4;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832699d8 ^ uVar5;
  _DAT_1832699c0 =
       func_0x00018ab4bca0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183269a60 + 0xdb9486f0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832699d8 + 0x73cf98bf));
  uVar4 = _DAT_1832699c0 ^ 0xf7edbb9a;
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
  _DAT_1832697f8 = (_DAT_1832697f8 ^ uVar4) + 0x2c793d6a ^ 0xa40a552284dc300c;
  _DAT_183269968 = (_DAT_183269968 * -0x41739087300569b9 ^ _DAT_1832697f8) + uVar4;
  _DAT_1832699a8 = _DAT_183269968 ^ _DAT_1832697f8;
  _DAT_183269a08 = 0x2c793d6a;
  _DAT_183269858 = func_0x00018ab4bca0(_DAT_1832698b8 + 0x1d007c22ffe1ffU ^ 0xee);
  _DAT_1832697a8 = _DAT_183269858 ^ 0xd382428a;
  uVar4 = _DAT_183269900 ^ _DAT_1832697a8;
  _DAT_183269900 = uVar4 ^ 0xcd812cb9e4124721;
  _DAT_1832697d8 = (_DAT_1832697d8 * -0x13aeebac8a98dab9 ^ _DAT_183269900) + _DAT_1832697a8;
  _DAT_183269710 = _DAT_1832697d8 ^ _DAT_183269900;
  _DAT_183269a90 = 0;
  uVar4 = uVar4 ^ 0xcd812cb99fcf9bfa;
  uVar5 = uVar4 + _DAT_183269990 + 0x7bdddcdb;
  uVar4 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar4;
  uVar5 = ((_DAT_183269990 + _DAT_183269900) * 0x2000 | _DAT_183269990 + _DAT_183269900 >> 0x33) ^
          _DAT_183269990;
  _DAT_183269ad0 =
       func_0x00018ab4bca0((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_183269900 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183269990 + 0x7bdddcdb));
  uVar4 = _DAT_183269ad0 - (_DAT_183269ad0 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          _DAT_183269ad0;
  _DAT_183269790 = _DAT_1832699a8 ^ uVar4 ^ 0xfffffffe;
  _DAT_1832697e0 = (_DAT_1832697e0 ^ uVar4) + 0xfffffffe ^ 0x3ce0b2c140275073;
  _DAT_183269750 = (_DAT_183269750 * -0x3ed3042b5c21115d ^ _DAT_1832697e0) + uVar4;
  _DAT_183269908 = _DAT_183269750 ^ _DAT_1832697e0;
  _DAT_183269928 = 0xfffffffe;
  uVar4 = (_DAT_1832697b8 ^ _DAT_18193cfb0) + _DAT_183269860 + 0x73cf98bf;
  uVar5 = (_DAT_183269860 ^ _UNK_18193cfb8) + _DAT_1832697b8 + 0x8124465;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832697b8 ^ _DAT_18193cfb0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_183269860 ^ _UNK_18193cfb8;
  _DAT_183269af0 =
       func_0x00018ab4bca0((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832697b8 + 0x8124465) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183269860 + 0x73cf98bf));
  uVar4 = (ulonglong)(((uint)_DAT_183269af0 ^ 0xf761ab82) & 0xf7edbb9a);
  _DAT_1832698f0 = _DAT_1832698f0 ^ uVar4 ^ 0x357bfffcbc86327d;
  _DAT_183269798 = (_DAT_183269798 * 0x28c734df77b0a69b ^ _DAT_1832698f0) + uVar4;
  _DAT_183269ad8 = _DAT_183269798 ^ _DAT_1832698f0;
  _DAT_183269a08 = 0;
  uVar4 = (~_DAT_183269890 + 0x956d181b) *
          ((_DAT_183269a00 ^ 0x114f3b3f) + (ulonglong)((uint)_DAT_183269a00 & 0x114f3b3f) * 2);
  uVar4 = (uVar4 | _DAT_1832697a0) + (uVar4 & _DAT_1832697a0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1832699e0 = func_0x00018ab4bca0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  _DAT_1832697f0 = _DAT_1832697f0 ^ _DAT_1832697c8 ^ 0x5e8b9961f639063a;
  _DAT_183269738 = (_DAT_183269738 * -0x2baf2d8fa419189b ^ _DAT_1832697f0) + _DAT_1832697c8;
  _DAT_183269958 = _DAT_183269738 ^ _DAT_1832697f0;
  _DAT_1832699d8 = 0;
  _DAT_183269718 = func_0x00018ab4bca0(_DAT_183269aa8 ^ 0xffbbffa82b003458);
  uVar4 = _DAT_183269718 * -0x64175778f09a8c8f << 0x39 | _DAT_183269718 * -0x64175778f09a8c8f >> 7;
  _DAT_183269938 = _DAT_183269988 ^ uVar4 ^ 0xfffffffe;
  _DAT_1832697a8 = (_DAT_1832697a8 ^ uVar4) + 0xfffffffe ^ 0xba4888c8996560fb;
  _DAT_183269778 = (_DAT_183269778 * 0x748efbaf2a12b28d ^ _DAT_1832697a8) + uVar4;
  _DAT_1832699c8 = _DAT_183269778 ^ _DAT_1832697a8;
  _DAT_1832697c8 = 0xfffffffe;
  *(int *)(unaff_RBP + 0xc) = *(int *)(unaff_RBP + 0x60) + -2;
  *(undefined8 *)(unaff_RBP + 0x10) = unaff_RBX;
  *(int *)(unaff_RBP + 0x50) = *(int *)(unaff_RBP + 0x60);
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x80) = 0;
  iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x30) + 0x558))(*(longlong **)(unaff_RBP + 0x30))
  ;
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar2 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab38957 (image 18ab38957) =====

void FUN_18ab38957(void)

{
  return;
}



// ===== continuation @ rva ab28eba (image 18ab28eba) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab28eba(void)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auVar12 [16];
  uint uVar14;
  undefined1 auVar13 [16];
  
  auVar6._8_8_ = _UNK_180062bf8;
  auVar6._0_8_ = unaff_RSI ^ 0x84222325;
  auVar6 = auVar6 ^ _DAT_18193db90;
  *(undefined8 *)(unaff_RBP + 0x60) = *(undefined8 *)(unaff_RBP + -0x30);
  auVar8 = pshufb(auVar6,_DAT_1800170c0);
  uVar3 = auVar8._8_8_ + auVar8._0_8_;
  uVar2 = uVar3 + _DAT_183269988;
  if (auVar8._4_4_ < 0) {
    uVar2 = _DAT_183269878 ^ uVar3;
  }
  _DAT_183269918 = func_0x00018ab4bca0(auVar6[5] ^ uVar2);
  uVar2 = _DAT_183269918 ^ unaff_RSI;
  *(ulonglong *)(unaff_RBP + 0x50) = unaff_RSI;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = unaff_RSI;
  uVar2 = uVar2 & 0xffffffffff800000 ^ unaff_RSI;
  uVar7 = (uint)unaff_RSI;
  uVar14 = (uint)(unaff_RSI >> 0x20);
  uVar5 = uVar7 & (uint)DAT_18001a990;
  auVar8._8_4_ = uVar7;
  auVar8._0_8_ = unaff_RSI;
  auVar8._12_4_ = uVar14;
  uVar9 = SUB164(auVar8 ^ _DAT_18001a990,0);
  uVar3 = SUB168(auVar8 ^ _DAT_18001a990,0);
  auVar12._8_4_ = 0xffffffff;
  auVar12._0_8_ = 0xffffffffffffffff;
  auVar12._12_4_ = 0xffffffff;
  uVar11 = SUB164(auVar12 ^ auVar13,0);
  lVar10 = ((ulonglong)_DAT_18193dc30 * (unaff_RSI & 0xffffffff) +
            (ulonglong)_DAT_18193dc20 * (ulonglong)uVar14 << 0x20) +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_18193dc20;
  auVar1._8_4_ = uVar7;
  auVar1._0_8_ = unaff_RSI;
  auVar1._12_4_ = uVar14;
  uVar7 = SUB164(_DAT_18001a990 | auVar1,0);
  uVar4 = (((ulonglong)uVar11 * (ulonglong)_DAT_18193dbe0 +
            ((ulonglong)_DAT_18193dc10 * (ulonglong)uVar11 +
             (SUB168(auVar12 ^ auVar13,0) >> 0x20) * (ulonglong)_DAT_18193dbe0 << 0x20) + lVar10 +
           (ulonglong)_DAT_18193dbf0 * (ulonglong)uVar9 +
           ((ulonglong)_DAT_18193dc00 * (ulonglong)uVar9 +
            (uVar3 >> 0x20) * (ulonglong)_DAT_18193dbf0 << 0x20) +
           ((ulonglong)_DAT_18193dbd0 * (ulonglong)uVar5 << 0x20 |
           (ulonglong)_DAT_18193dbc0 * (ulonglong)uVar5) +
           ((ulonglong)_DAT_18193dbb0 * (unaff_RSI & 0xffffffff) +
            (ulonglong)_DAT_18193dba0 * (ulonglong)uVar14 << 0x20) +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_18193dba0) -
          ((ulonglong)uVar9 * (ulonglong)_DAT_18193dc40 +
           ((uVar3 >> 0x20) * (ulonglong)_DAT_18193dc40 +
            (ulonglong)_DAT_18193dc50 * (ulonglong)uVar9 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_18193dc60 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_18193dc50 << 0x20 |
           (ulonglong)uVar5 * (ulonglong)_DAT_18193dc40) +
           ((ulonglong)_DAT_18193dc70 * (ulonglong)uVar7 +
            (SUB168(_DAT_18001a990 | auVar1,0) >> 0x20) * (ulonglong)_DAT_18193dc60 << 0x20) +
          lVar10)) + 0x523b8d80ada709a4;
  _DAT_183269848 = _DAT_1832697f0 ^ uVar2 ^ uVar4;
  _DAT_183269900 = (_DAT_183269900 ^ uVar2) + uVar4 ^ 0x586678d987738c49;
  _DAT_183269a20 = (_DAT_183269a20 * 0x4d6da4bb7d010c75 ^ _DAT_183269900) + uVar2;
  _DAT_183269ab8 = _DAT_183269a20 ^ _DAT_183269900;
  _DAT_183269790 = uVar4;
  _DAT_183269900 = func_0x00018ab4bca0(_DAT_183269830 ^ 0x84d51849d077ddac);
  _DAT_183269980 =
       (_DAT_183269980 ^ _DAT_183269900 & 0x3ffffffff) + 0xbbfbbdbf5ec5f7f7 ^ 0x2f725b5f908765cb;
  _DAT_183269868 =
       (_DAT_183269868 * -0x7e23687170bbc513 ^ _DAT_183269980) + (_DAT_183269900 & 0x3ffffffff);
  _DAT_183269930 = _DAT_183269868 ^ _DAT_183269980;
  _DAT_183269738 = 0xbbfbbdbf5ec5f7f7;
  _DAT_183269970 = func_0x00018ab4bca0(_DAT_183269990 ^ 0x3b93bcd8ac7b4e8);
  _DAT_183269a10 =
       (_DAT_183269a10 ^ _DAT_183269970 & 0x7ffffffffffffffe) + 0xf9ccc804f6979953 ^
       0x73a67f8b1816fb55;
  _DAT_183269ae0 =
       (_DAT_183269ae0 * -0x38ed2939544c0fff ^ _DAT_183269a10) +
       (_DAT_183269970 & 0x7ffffffffffffffe);
  _DAT_183269778 = _DAT_183269ae0 ^ _DAT_183269a10;
  _DAT_183269998 = 0xf9ccc804f6979953;
  uVar2 = (_DAT_183269a10 ^ _DAT_18193dc80) + _DAT_1832699f0 + 0x84222325;
  uVar3 = (_DAT_1832699f0 ^ _UNK_18193dc88) + _DAT_183269a10 + 0x2dc51b00be83e3fe;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183269a10 ^ _DAT_18193dc80;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832699f0 ^ _UNK_18193dc88;
  _DAT_1832697e8 =
       func_0x00018ab4bca0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183269a10 + 0x2dc51b00be83e3fe) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832699f0 + 0x84222325));
  uVar2 = _DAT_1832697e8 >> 1 | _DAT_1832697e8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = 0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1832697e8;
  _DAT_183269910 = (_DAT_183269910 ^ uVar2) + 0xd23ae4ff417c1c02 ^ 0x4045fe5431d7a46f;
  _DAT_183269800 = (_DAT_183269800 * -0x31ac8ade6dee903 ^ _DAT_183269910) + uVar2;
  _DAT_183269710 = _DAT_183269800 ^ _DAT_183269910;
  _DAT_183269938 = 0xd23ae4ff417c1c02;
  uVar2 = (~_DAT_183269748 + 0x2dc51b00be83e3ff) *
          ((_DAT_183269850 ^ 0x84222cda) + (ulonglong)((uint)_DAT_183269850 & 0x84222cda) * 2);
  uVar2 = (uVar2 | _DAT_183269778) + (uVar2 & _DAT_183269778);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832697a0 = func_0x00018ab4bca0((uVar2 | 0x2dc51b003aa1cf24) + (uVar2 & 0x2dc51b003aa1cf24));
  uVar2 = (_DAT_1832697a0 ^ 0x3e7c1381ffc) & 0x7ffffffffff;
  _DAT_1832699f8 = _DAT_183269a68 ^ uVar2 ^ 0x2dc51b00be83f3fd;
  _DAT_183269a58 = (_DAT_183269a58 ^ uVar2) + 0x2dc51b00be83f3fd ^ 0xc396bcfad56e09d3;
  _DAT_183269930 = (_DAT_183269930 * -0x6a23f401c1270421 ^ _DAT_183269a58) + uVar2;
  _DAT_183269978 = _DAT_183269930 ^ _DAT_183269a58;
  _DAT_183269880 = 0x2dc51b00be83f3fd;
  _DAT_183269750 = func_0x00018ab4bca0(_DAT_183269720 ^ 0x7f4c9aa4dabeaca9);
  uVar2 = ~_DAT_183269750 << 0x35 | ~_DAT_183269750 >> 0xb;
  _DAT_1832698b8 = _DAT_1832697a8 ^ uVar2 ^ 0xfff;
  _DAT_183269a80 = (_DAT_183269a80 ^ uVar2) + 0xfff ^ 0xd8caf10ca2ebf062;
  _DAT_183269a58 = (_DAT_183269a58 * -0x114d2534f9efa131 ^ _DAT_183269a80) + uVar2;
  _DAT_183269990 = _DAT_183269a58 ^ _DAT_183269a80;
  _DAT_183269740 = 0xfff;
  _DAT_183269740 = func_0x00018ab4bca0(_DAT_183269ac8 + 0x6aae345e2a879030 ^ 0x89);
  uVar3 = _DAT_183269740 ^ 0x513b8bad2292950f;
  uVar2 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar3;
  _DAT_183269888 = (_DAT_183269888 ^ uVar3) + 0xaec47452dd6d6af1 ^ 0xebe203831d3281ac;
  _DAT_183269ac8 = (_DAT_183269ac8 * -0x494e3930ac4fa25f ^ _DAT_183269888) + uVar3;
  _DAT_183269840 = _DAT_183269ac8 ^ _DAT_183269888;
  _DAT_183269808 = 0xaec47452dd6d6af1;
  uVar2 = (_DAT_183269a78 ^ _DAT_18193dc90) + _DAT_183269860 + 0x84222325;
  uVar3 = (_DAT_183269860 ^ _UNK_18193dc98) + _DAT_183269a78 + 0xd92e6504f21df4a6;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183269a78 ^ _DAT_18193dc90;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183269860 ^ _UNK_18193dc98;
  _DAT_183269960 =
       func_0x00018ab4bca0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183269a78 + 0xd92e6504f21df4a6) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183269860 + 0x84222325));
  uVar2 = (_DAT_183269960 ^ 0xd92e6504f21df4a6) * 0x9a763adb8e512e7;
  uVar3 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar2;
  _DAT_1832697c0 = (_DAT_1832697c0 ^ uVar2) + 0x26d19afb0de20b5a ^ 0xf1fb958badc6386d;
  _DAT_183269980 = (_DAT_183269980 * -0x4683aada5ec5f103 ^ _DAT_1832697c0) + uVar2;
  _DAT_1832699b0 = _DAT_183269980 ^ _DAT_1832697c0;
  _DAT_183269958 = 0x26d19afb0de20b5a;
  uVar2 = (_DAT_1832698f8 ^ _DAT_18193dca0) + _DAT_183269a10 + 0x84222cda;
  uVar3 = (_DAT_183269a10 ^ _UNK_18193dca8) + _DAT_1832698f8 + 0xd92e6504f21df4a6;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_1832698f8 ^ _DAT_18193dca0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183269a10 ^ _UNK_18193dca8;
  _DAT_1832699e8 =
       func_0x00018ab4bca0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832698f8 + 0xd92e6504f21df4a6) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_183269a10 + 0x84222cda));
  uVar2 = _DAT_1832699e8 >> 1 | _DAT_1832699e8;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = ((0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ _DAT_1832699e8) & 0x1fffffffffffff ^ 0xfff;
  _DAT_183269a50 = _DAT_183269830 ^ uVar2 ^ 0xd92e6504f21e04a5;
  _DAT_1832698e0 = (_DAT_1832698e0 ^ uVar2) + 0xd92e6504f21e04a5 ^ 0xdb6416fc498cbe28;
  _DAT_183269a30 = (_DAT_183269a30 * 0x76ca6457006d4635 ^ _DAT_1832698e0) + uVar2;
  _DAT_1832698f0 = _DAT_183269a30 ^ _DAT_1832698e0;
  _DAT_183269af0 = 0xd92e6504f21e04a5;
  _DAT_1832697e8 = func_0x00018ab4bca0(_DAT_183269a88 ^ 0x20e3ce9935caae59);
  uVar2 = (_DAT_1832697e8 ^ 0x823ecea7e36ab902) << 0x18 |
          (_DAT_1832697e8 ^ 0x823ecea7e36ab902) >> 0x28;
  _DAT_183269778 = _DAT_183269a30 ^ uVar2 ^ 0xfff;
  _DAT_183269768 = (_DAT_183269768 ^ uVar2) + 0xfff ^ 0xc6f7ce995dc7a84f;
  _DAT_1832698a0 = (_DAT_1832698a0 * -0x4045968c98f17f9 ^ _DAT_183269768) + uVar2;
  _DAT_1832698b0 = _DAT_1832698a0 ^ _DAT_183269768;
  _DAT_1832699d8 = 0xfff;
  uVar2 = (_DAT_183269990 ^ _DAT_18193dcb0) + _DAT_183269ad8 + 0xbbfbbdbfdae7d4d2;
  uVar3 = (_DAT_183269ad8 ^ _UNK_18193dcb8) + _DAT_183269990 + 0xf9ccc804f6979953;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183269990 ^ _DAT_18193dcb0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183269ad8 ^ _UNK_18193dcb8;
  lVar10 = func_0x00018ab4bca0((uVar3 << 0x1d | uVar3 >> 0x23) -
                               (_DAT_183269990 + 0xf9ccc804f6979953) ^
                               (uVar2 << 0x1d | uVar2 >> 0x23) -
                               (_DAT_183269ad8 + 0xbbfbbdbfdae7d4d2));
  uVar2 = lVar10 * 0x560b3421ffb07b8b & 0xffffffffffe00000;
  _DAT_183269970 = _DAT_183269748 ^ uVar2 ^ 0xb5c885c4555d914a;
  _DAT_183269898 = (_DAT_183269898 ^ uVar2) + 0xb5c885c4555d914a ^ 0x3fa7d8fd8b2bb70e;
  _DAT_1832697a0 = (_DAT_1832697a0 * -0x3bd7636366dbd37 ^ _DAT_183269898) + uVar2;
  _DAT_183269ae0 = _DAT_1832697a0 ^ _DAT_183269898;
  _DAT_1832697d0 = 0xb5c885c4555d914a;
  _DAT_183269908 = func_0x00018ab4bca0(_DAT_183269820 ^ 0x7542ece47ef550f6);
  _DAT_183269970 = (_DAT_183269970 ^ _DAT_183269908) + 0x423775bba8526ea4 ^ 0x802bbd9fed39eb8f;
  _DAT_183269a50 = (_DAT_183269a50 * -0x237cb2db7042de03 ^ _DAT_183269970) + _DAT_183269908;
  _DAT_183269ab8 = _DAT_183269a50 ^ _DAT_183269970;
  _DAT_1832698e0 = 0x423775bba8526ea4;
  _DAT_183269790 = func_0x00018ab4bca0(_DAT_183269870 ^ 0xaeeb9d7ee72499d9);
  uVar2 = _DAT_183269790 << 0x2b | _DAT_183269790 >> 0x15;
  _DAT_1832699b0 = _DAT_1832697d0 ^ uVar2 ^ 0xb5c885c4555d914a;
  _DAT_1832697b8 = (_DAT_1832697b8 ^ uVar2) + 0xb5c885c4555d914a ^ 0x76e9a6ff76140422;
  _DAT_183269800 = (_DAT_183269800 * -0x339d142a40d21553 ^ _DAT_1832697b8) + uVar2;
  _DAT_1832699e8 = _DAT_183269800 ^ _DAT_1832697b8;
  _DAT_183269a60 = 0xb5c885c4555d914a;
  uVar2 = (~_DAT_183269980 + 0xb5c885c4555d914b) *
          ((_DAT_183269888 ^ 0xb5c885c4d17fb26f) + (_DAT_183269888 & 0x35c885c4d17fb26f) * 2);
  uVar2 = (uVar2 | _DAT_183269778) + (uVar2 & _DAT_183269778);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uVar2 = func_0x00018ab4bca0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uVar3 = uVar2 ^ 0xb5c885c4555d914a;
  _DAT_1832697b0 = (uVar3 << 0x10 | uVar3 >> 0x30) << 6 | (uVar3 & 0xffffffffffff) >> 0x2a;
  _DAT_1832698e8 = uVar2 ^ _DAT_1832697b0 ^ 0xb474ded987ec48d4;
  _DAT_183269760 = (_DAT_183269760 * 0x199165108a492cbd ^ _DAT_1832698e8) + _DAT_1832697b0;
  _DAT_183269980 = _DAT_183269760 ^ _DAT_1832698e8;
  _DAT_183269818 = 0;
  _DAT_183269808 = func_0x00018ab4bca0(_DAT_183269748 + 0xffe4008456001dff ^ 0x42);
  _DAT_183269998 = _DAT_183269988 ^ _DAT_183269808 ^ 0xfff;
  _DAT_183269778 = (_DAT_183269778 ^ _DAT_183269808) + 0xfff ^ 0xd88e062f9b0b4bc8;
  _DAT_1832699c8 = (_DAT_1832699c8 * 0x3470090491cede37 ^ _DAT_183269778) + _DAT_183269808;
  _DAT_1832697a8 = _DAT_1832699c8 ^ _DAT_183269778;
  _DAT_1832698e8 = 0xfff;
  uVar2 = ~_DAT_1832698b0 *
          ((_DAT_183269838 ^ 0xbbfbbdbfdae7d4d2) + (_DAT_183269838 & 0x3bfbbdbfdae7d4d2) * 2);
  uVar2 = (uVar2 | _DAT_183269a98) + (uVar2 & _DAT_183269a98);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_1832698d8 = func_0x00018ab4bca0((uVar2 | 0x4404424025182b2d) + (uVar2 & 0x4404424025182b2d));
  uVar2 = _DAT_1832698d8 << 3 | _DAT_1832698d8 >> 0x3d;
  _DAT_183269710 =
       (_DAT_183269710 * -0x321c4b1d1b4e8c91 ^
       (_DAT_183269710 ^ uVar2) + 0x44044240a13a0808 ^ 0xaf71c125a355fe11) + uVar2;
  _DAT_1832699e0 = 0x44044240a13a0808;
  _DAT_183269ac8 = func_0x00018ab4bca0(_DAT_183269ae8 ^ 0x1c0083da00219d);
  _DAT_183269aa8 = _DAT_183269800 ^ _DAT_183269ac8 ^ 0xfff;
  _DAT_183269a88 = (_DAT_183269a88 ^ _DAT_183269ac8) + 0xfff ^ 0x4602df1c63bc9941;
  _DAT_1832697a8 = (_DAT_1832697a8 * -0x7a637e6cec79ac05 ^ _DAT_183269a88) + _DAT_183269ac8;
  _DAT_1832698b0 = _DAT_1832697a8 ^ _DAT_183269a88;
  _DAT_183269828 = 0xfff;
  uVar2 = (_DAT_183269850 ^ _DAT_18193dcc0) + _DAT_1832698f8 + 0xa1f0ad3ac0a794f2;
  uVar3 = (_DAT_1832698f8 ^ _UNK_18193dcc8) + _DAT_183269850 + 0xa1f0ad3a4485b7d7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ _DAT_183269850 ^ _DAT_18193dcc0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832698f8 ^ _UNK_18193dcc8;
  _DAT_183269890 =
       func_0x00018ab4bca0((uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183269850 + 0xa1f0ad3a4485b7d7) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (_DAT_1832698f8 + 0xa1f0ad3ac0a794f2));
  _DAT_183269878 = _DAT_183269878 ^ _DAT_183269890 ^ 0xfa8732eec16b1691 ^ 0xb6c3b24107a8cc47;
  _DAT_183269900 =
       (_DAT_183269900 * 0x74c71949e3243583 ^ _DAT_183269878) +
       (_DAT_183269890 ^ 0xfa8732eec16b1691);
  _DAT_183269a38 = _DAT_183269900 ^ _DAT_183269878;
  _DAT_183269898 = 0;
  _DAT_183269930 = func_0x00018ab4bca0(_DAT_1832698e0 + 0xffebff8439ffe1ff ^ 0x4a);
  uVar2 = _DAT_183269930 ^ 0xfff;
  _DAT_183269998 = _DAT_183269800 ^ uVar2 ^ 0xfff;
  _DAT_1832697e0 = (_DAT_1832697e0 ^ uVar2) + 0xfff ^ 0xf5ca3731404e2887;
  _DAT_1832698e8 = (_DAT_1832698e8 * -0x5efa3a70042cc15 ^ _DAT_1832697e0) + uVar2;
  _DAT_1832698e0 = _DAT_1832698e8 ^ _DAT_1832697e0;
  _DAT_183269760 = 0xfff;
  switch(0xfff < uVar4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab38521 (image 18ab38521) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab38521(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x20) = uVar2;
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



// ===== continuation @ rva ab2e760 (image 18ab2e760) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab2e760(void)

{
  undefined4 in_EAX;
  int iVar1;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong *unaff_R13;
  undefined4 unaff_R14D;
  
  *(undefined4 *)(unaff_RBP + 0x50) = in_EAX;
  *(undefined4 *)(unaff_RBP + 0x70) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x78) = unaff_RBX;
  *(undefined4 *)(unaff_RBP + 0x80) = unaff_R14D;
  iVar1 = (**(code **)(*unaff_R13 + 0x558))();
  switch(*(int *)(unaff_RBP + 0x80) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x80)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab38243 (image 18ab38243) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab38243(uint param_1)

{
  int in_EAX;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong unaff_RBP;
  ulonglong unaff_R15;
  uint uVar3;
  longlong lVar4;
  uint unaff_XMM6_Da;
  uint unaff_XMM8_Da;
  uint uVar5;
  uint unaff_XMM15_Da;
  
  uVar1 = param_1 ^ unaff_R15;
  uVar2 = (~_DAT_183269748 + 2) *
          ((_DAT_183269ae0 ^ uVar1) + (ulonglong)((uint)_DAT_183269ae0 & (uint)uVar1) * 2);
  uVar2 = (uVar2 | _DAT_1832697e8) + (uVar2 & _DAT_1832697e8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  _DAT_183269a48 =
       func_0x00018ab4bca0((uVar1 ^ 1 | uVar2) + (ulonglong)((uint)(uVar1 ^ 1) & (uint)uVar2));
  uVar2 = ~_DAT_183269a48 & (ulonglong)param_1;
  uVar5 = param_1 & unaff_XMM8_Da;
  uVar3 = param_1 ^ unaff_XMM8_Da;
  lVar4 = ((ulonglong)param_1 * (ulonglong)_DAT_18193d700 << 0x20) +
          (ulonglong)param_1 * (ulonglong)_DAT_18193d6f0;
  uVar1 = uVar2 - ((uint)(uVar2 >> 1) & 0x55555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = ((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar2;
  uVar1 = ((((ulonglong)uVar3 * (ulonglong)_DAT_18193d6e0 << 0x20) +
            (ulonglong)uVar3 * (ulonglong)_DAT_18193d6d0 + lVar4 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_18193d6c0 << 0x20 |
           (ulonglong)uVar5 * (ulonglong)_DAT_18193d6b0) +
           ((ulonglong)param_1 * (ulonglong)_DAT_18193d6a0 << 0x20) +
           (ulonglong)param_1 * (ulonglong)unaff_XMM6_Da) -
          (((ulonglong)uVar3 * (ulonglong)_DAT_18193d780 << 0x20) +
           (ulonglong)uVar3 * (ulonglong)_DAT_18193d770 +
           ((ulonglong)(param_1 | unaff_XMM8_Da) * (ulonglong)unaff_XMM15_Da << 0x20) +
           (ulonglong)(param_1 | unaff_XMM8_Da) * (ulonglong)_DAT_18193d750 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_18193d740 << 0x20 |
           (ulonglong)uVar5 * (ulonglong)_DAT_18193d730) +
           ((ulonglong)param_1 * (ulonglong)_DAT_18193d720 << 0x20) +
           (ulonglong)param_1 * (ulonglong)_DAT_18193d710 + lVar4)) + 0x89390b869d0e590;
  _DAT_1832698f8 = _DAT_183269778 ^ uVar2 ^ uVar1;
  _DAT_183269a38 = (_DAT_183269a38 ^ uVar2) + uVar1 ^ 0x2ecde56c056c9407;
  _DAT_1832697a0 = (_DAT_1832697a0 * -0x8221b8d4261b721 ^ _DAT_183269a38) + uVar2;
  _DAT_1832698e0 = _DAT_1832697a0 ^ _DAT_183269a38;
  _DAT_183269a50 = uVar1 & 0xffffffff;
  *(int *)(unaff_RBP + 0x70) = (int)uVar1;
  *(int *)(unaff_RBP + 0x78) = in_EAX;
  switch((int)uVar1 < in_EAX) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab28ef1 (image 18ab28ef1) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab28ef1(void)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar5;
  uint uVar6;
  byte in_XMM0_Bf;
  uint uVar7;
  undefined1 in_XMM1 [16];
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  uint uVar13;
  undefined1 auVar12 [16];
  
  uVar4 = in_XMM1._8_8_ + in_XMM1._0_8_;
  uVar3 = uVar4 + _DAT_183269988;
  if (in_XMM1._4_4_ < 0) {
    uVar3 = _DAT_183269878 ^ uVar4;
  }
  _DAT_183269918 = func_0x00018ab4bca0(in_XMM0_Bf ^ uVar3);
  uVar3 = _DAT_183269918 ^ unaff_RSI;
  *(ulonglong *)(unaff_RBP + 0x50) = unaff_RSI;
  auVar12._8_8_ = 0;
  auVar12._0_8_ = unaff_RSI;
  uVar3 = uVar3 & 0xffffffffff800000 ^ unaff_RSI;
  uVar7 = (uint)unaff_RSI;
  uVar13 = (uint)(unaff_RSI >> 0x20);
  uVar6 = uVar7 & (uint)DAT_18001a990;
  auVar1._8_4_ = uVar7;
  auVar1._0_8_ = unaff_RSI;
  auVar1._12_4_ = uVar13;
  uVar8 = SUB164(auVar1 ^ _DAT_18001a990,0);
  uVar4 = SUB168(auVar1 ^ _DAT_18001a990,0);
  auVar11._8_4_ = 0xffffffff;
  auVar11._0_8_ = 0xffffffffffffffff;
  auVar11._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar11 ^ auVar12,0);
  lVar9 = ((ulonglong)_DAT_18193dc30 * (unaff_RSI & 0xffffffff) +
           (ulonglong)_DAT_18193dc20 * (ulonglong)uVar13 << 0x20) +
          (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_18193dc20;
  auVar2._8_4_ = uVar7;
  auVar2._0_8_ = unaff_RSI;
  auVar2._12_4_ = uVar13;
  uVar7 = SUB164(_DAT_18001a990 | auVar2,0);
  uVar5 = (((ulonglong)uVar10 * (ulonglong)_DAT_18193dbe0 +
            ((ulonglong)_DAT_18193dc10 * (ulonglong)uVar10 +
             (SUB168(auVar11 ^ auVar12,0) >> 0x20) * (ulonglong)_DAT_18193dbe0 << 0x20) + lVar9 +
           (ulonglong)_DAT_18193dbf0 * (ulonglong)uVar8 +
           ((ulonglong)_DAT_18193dc00 * (ulonglong)uVar8 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_18193dbf0 << 0x20) +
           ((ulonglong)_DAT_18193dbd0 * (ulonglong)uVar6 << 0x20 |
           (ulonglong)_DAT_18193dbc0 * (ulonglong)uVar6) +
           ((ulonglong)_DAT_18193dbb0 * (unaff_RSI & 0xffffffff) +
            (ulonglong)_DAT_18193dba0 * (ulonglong)uVar13 << 0x20) +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_18193dba0) -
          ((ulonglong)uVar8 * (ulonglong)_DAT_18193dc40 +
           ((uVar4 >> 0x20) * (ulonglong)_DAT_18193dc40 +
            (ulonglong)_DAT_18193dc50 * (ulonglong)uVar8 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_18193dc60 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_18193dc50 << 0x20 |
           (ulonglong)uVar6 * (ulonglong)_DAT_18193dc40) +
           ((ulonglong)_DAT_18193dc70 * (ulonglong)uVar7 +
            (SUB168(_DAT_18001a990 | auVar2,0) >> 0x20) * (ulonglong)_DAT_18193dc60 << 0x20) + lVar9
          )) + 0x523b8d80ada709a4;
  _DAT_183269848 = _DAT_1832697f0 ^ uVar3 ^ uVar5;
  _DAT_183269900 = (_DAT_183269900 ^ uVar3) + uVar5 ^ 0x586678d987738c49;
  _DAT_183269a20 = (_DAT_183269a20 * 0x4d6da4bb7d010c75 ^ _DAT_183269900) + uVar3;
  _DAT_183269ab8 = _DAT_183269a20 ^ _DAT_183269900;
  _DAT_183269790 = uVar5;
  _DAT_183269900 = func_0x00018ab4bca0(_DAT_183269830 ^ 0x84d51849d077ddac);
  _DAT_183269980 =
       (_DAT_183269980 ^ _DAT_183269900 & 0x3ffffffff) + 0xbbfbbdbf5ec5f7f7 ^ 0x2f725b5f908765cb;
  _DAT_183269868 =
       (_DAT_183269868 * -0x7e23687170bbc513 ^ _DAT_183269980) + (_DAT_183269900 & 0x3ffffffff);
  _DAT_183269930 = _DAT_183269868 ^ _DAT_183269980;
  _DAT_183269738 = 0xbbfbbdbf5ec5f7f7;
  _DAT_183269970 = func_0x00018ab4bca0(_DAT_183269990 ^ 0x3b93bcd8ac7b4e8);
  _DAT_183269a10 =
       (_DAT_183269a10 ^ _DAT_183269970 & 0x7ffffffffffffffe) + 0xf9ccc804f6979953 ^
       0x73a67f8b1816fb55;
  _DAT_183269ae0 =
       (_DAT_183269ae0 * -0x38ed2939544c0fff ^ _DAT_183269a10) +
       (_DAT_183269970 & 0x7ffffffffffffffe);
  _DAT_183269778 = _DAT_183269ae0 ^ _DAT_183269a10;
  _DAT_183269998 = 0xf9ccc804f6979953;
  uVar3 = (_DAT_183269a10 ^ _DAT_18193dc80) + _DAT_1832699f0 + unaff_RBX;
  uVar4 = (_DAT_1832699f0 ^ _UNK_18193dc88) + _DAT_183269a10 + 0x2dc51b00be83e3fe;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183269a10 ^ _DAT_18193dc80;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832699f0 ^ _UNK_18193dc88;
  _DAT_1832697e8 =
       func_0x00018ab4bca0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183269a10 + 0x2dc51b00be83e3fe) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832699f0 + unaff_RBX));
  uVar3 = _DAT_1832697e8 >> 1 | _DAT_1832697e8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_1832697e8;
  _DAT_183269910 = (_DAT_183269910 ^ uVar3) + 0xd23ae4ff417c1c02 ^ 0x4045fe5431d7a46f;
  _DAT_183269800 = (_DAT_183269800 * -0x31ac8ade6dee903 ^ _DAT_183269910) + uVar3;
  _DAT_183269710 = _DAT_183269800 ^ _DAT_183269910;
  _DAT_183269938 = 0xd23ae4ff417c1c02;
  uVar3 = (~_DAT_183269748 + 0x2dc51b00be83e3ff) *
          ((_DAT_183269850 ^ 0x84222cda) + (ulonglong)((uint)_DAT_183269850 & 0x84222cda) * 2);
  uVar3 = (uVar3 | _DAT_183269778) + (uVar3 & _DAT_183269778);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832697a0 = func_0x00018ab4bca0((uVar3 | 0x2dc51b003aa1cf24) + (uVar3 & 0x2dc51b003aa1cf24));
  uVar3 = (_DAT_1832697a0 ^ 0x3e7c1381ffc) & 0x7ffffffffff;
  _DAT_1832699f8 = _DAT_183269a68 ^ uVar3 ^ 0x2dc51b00be83f3fd;
  _DAT_183269a58 = (_DAT_183269a58 ^ uVar3) + 0x2dc51b00be83f3fd ^ 0xc396bcfad56e09d3;
  _DAT_183269930 = (_DAT_183269930 * -0x6a23f401c1270421 ^ _DAT_183269a58) + uVar3;
  _DAT_183269978 = _DAT_183269930 ^ _DAT_183269a58;
  _DAT_183269880 = 0x2dc51b00be83f3fd;
  _DAT_183269750 = func_0x00018ab4bca0(_DAT_183269720 ^ 0x7f4c9aa4dabeaca9);
  uVar3 = ~_DAT_183269750 << 0x35 | ~_DAT_183269750 >> 0xb;
  _DAT_1832698b8 = _DAT_1832697a8 ^ uVar3 ^ 0xfff;
  _DAT_183269a80 = (_DAT_183269a80 ^ uVar3) + 0xfff ^ 0xd8caf10ca2ebf062;
  _DAT_183269a58 = (_DAT_183269a58 * -0x114d2534f9efa131 ^ _DAT_183269a80) + uVar3;
  _DAT_183269990 = _DAT_183269a58 ^ _DAT_183269a80;
  _DAT_183269740 = 0xfff;
  _DAT_183269740 = func_0x00018ab4bca0(_DAT_183269ac8 + 0x6aae345e2a879030 ^ 0x89);
  uVar4 = _DAT_183269740 ^ 0x513b8bad2292950f;
  uVar3 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar4;
  _DAT_183269888 = (_DAT_183269888 ^ uVar4) + 0xaec47452dd6d6af1 ^ 0xebe203831d3281ac;
  _DAT_183269ac8 = (_DAT_183269ac8 * -0x494e3930ac4fa25f ^ _DAT_183269888) + uVar4;
  _DAT_183269840 = _DAT_183269ac8 ^ _DAT_183269888;
  _DAT_183269808 = 0xaec47452dd6d6af1;
  uVar3 = (_DAT_183269a78 ^ _DAT_18193dc90) + _DAT_183269860 + 0x84222325;
  uVar4 = (_DAT_183269860 ^ _UNK_18193dc98) + _DAT_183269a78 + 0xd92e6504f21df4a6;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183269a78 ^ _DAT_18193dc90;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183269860 ^ _UNK_18193dc98;
  _DAT_183269960 =
       func_0x00018ab4bca0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183269a78 + 0xd92e6504f21df4a6) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183269860 + 0x84222325));
  uVar3 = (_DAT_183269960 ^ 0xd92e6504f21df4a6) * 0x9a763adb8e512e7;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^ uVar3;
  _DAT_1832697c0 = (_DAT_1832697c0 ^ uVar3) + 0x26d19afb0de20b5a ^ 0xf1fb958badc6386d;
  _DAT_183269980 = (_DAT_183269980 * -0x4683aada5ec5f103 ^ _DAT_1832697c0) + uVar3;
  _DAT_1832699b0 = _DAT_183269980 ^ _DAT_1832697c0;
  _DAT_183269958 = 0x26d19afb0de20b5a;
  uVar3 = (_DAT_1832698f8 ^ _DAT_18193dca0) + _DAT_183269a10 + 0x84222cda;
  uVar4 = (_DAT_183269a10 ^ _UNK_18193dca8) + _DAT_1832698f8 + 0xd92e6504f21df4a6;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_1832698f8 ^ _DAT_18193dca0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183269a10 ^ _UNK_18193dca8;
  _DAT_1832699e8 =
       func_0x00018ab4bca0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1832698f8 + 0xd92e6504f21df4a6) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_183269a10 + 0x84222cda));
  uVar3 = _DAT_1832699e8 >> 1 | _DAT_1832699e8;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20
          ^ _DAT_1832699e8) & 0x1fffffffffffff ^ 0xfff;
  _DAT_183269a50 = _DAT_183269830 ^ uVar3 ^ 0xd92e6504f21e04a5;
  _DAT_1832698e0 = (_DAT_1832698e0 ^ uVar3) + 0xd92e6504f21e04a5 ^ 0xdb6416fc498cbe28;
  _DAT_183269a30 = (_DAT_183269a30 * 0x76ca6457006d4635 ^ _DAT_1832698e0) + uVar3;
  _DAT_1832698f0 = _DAT_183269a30 ^ _DAT_1832698e0;
  _DAT_183269af0 = 0xd92e6504f21e04a5;
  _DAT_1832697e8 = func_0x00018ab4bca0(_DAT_183269a88 ^ 0x20e3ce9935caae59);
  uVar3 = (_DAT_1832697e8 ^ 0x823ecea7e36ab902) << 0x18 |
          (_DAT_1832697e8 ^ 0x823ecea7e36ab902) >> 0x28;
  _DAT_183269778 = _DAT_183269a30 ^ uVar3 ^ 0xfff;
  _DAT_183269768 = (_DAT_183269768 ^ uVar3) + 0xfff ^ 0xc6f7ce995dc7a84f;
  _DAT_1832698a0 = (_DAT_1832698a0 * -0x4045968c98f17f9 ^ _DAT_183269768) + uVar3;
  _DAT_1832698b0 = _DAT_1832698a0 ^ _DAT_183269768;
  _DAT_1832699d8 = 0xfff;
  uVar3 = (_DAT_183269990 ^ _DAT_18193dcb0) + _DAT_183269ad8 + 0xbbfbbdbfdae7d4d2;
  uVar4 = (_DAT_183269ad8 ^ _UNK_18193dcb8) + _DAT_183269990 + 0xf9ccc804f6979953;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183269990 ^ _DAT_18193dcb0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_183269ad8 ^ _UNK_18193dcb8;
  lVar9 = func_0x00018ab4bca0((uVar4 << 0x1d | uVar4 >> 0x23) -
                              (_DAT_183269990 + 0xf9ccc804f6979953) ^
                              (uVar3 << 0x1d | uVar3 >> 0x23) -
                              (_DAT_183269ad8 + 0xbbfbbdbfdae7d4d2));
  uVar3 = lVar9 * 0x560b3421ffb07b8b & 0xffffffffffe00000;
  _DAT_183269970 = _DAT_183269748 ^ uVar3 ^ 0xb5c885c4555d914a;
  _DAT_183269898 = (_DAT_183269898 ^ uVar3) + 0xb5c885c4555d914a ^ 0x3fa7d8fd8b2bb70e;
  _DAT_1832697a0 = (_DAT_1832697a0 * -0x3bd7636366dbd37 ^ _DAT_183269898) + uVar3;
  _DAT_183269ae0 = _DAT_1832697a0 ^ _DAT_183269898;
  _DAT_1832697d0 = 0xb5c885c4555d914a;
  _DAT_183269908 = func_0x00018ab4bca0(_DAT_183269820 ^ 0x7542ece47ef550f6);
  _DAT_183269970 = (_DAT_183269970 ^ _DAT_183269908) + 0x423775bba8526ea4 ^ 0x802bbd9fed39eb8f;
  _DAT_183269a50 = (_DAT_183269a50 * -0x237cb2db7042de03 ^ _DAT_183269970) + _DAT_183269908;
  _DAT_183269ab8 = _DAT_183269a50 ^ _DAT_183269970;
  _DAT_1832698e0 = 0x423775bba8526ea4;
  _DAT_183269790 = func_0x00018ab4bca0(_DAT_183269870 ^ 0xaeeb9d7ee72499d9);
  uVar3 = _DAT_183269790 << 0x2b | _DAT_183269790 >> 0x15;
  _DAT_1832699b0 = _DAT_1832697d0 ^ uVar3 ^ 0xb5c885c4555d914a;
  _DAT_1832697b8 = (_DAT_1832697b8 ^ uVar3) + 0xb5c885c4555d914a ^ 0x76e9a6ff76140422;
  _DAT_183269800 = (_DAT_183269800 * -0x339d142a40d21553 ^ _DAT_1832697b8) + uVar3;
  _DAT_1832699e8 = _DAT_183269800 ^ _DAT_1832697b8;
  _DAT_183269a60 = 0xb5c885c4555d914a;
  uVar3 = (~_DAT_183269980 + 0xb5c885c4555d914b) *
          ((_DAT_183269888 ^ 0xb5c885c4d17fb26f) + (_DAT_183269888 & 0x35c885c4d17fb26f) * 2);
  uVar3 = (uVar3 | _DAT_183269778) + (uVar3 & _DAT_183269778);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018ab4bca0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uVar4 = uVar3 ^ 0xb5c885c4555d914a;
  _DAT_1832697b0 = (uVar4 << 0x10 | uVar4 >> 0x30) << 6 | (uVar4 & 0xffffffffffff) >> 0x2a;
  _DAT_1832698e8 = uVar3 ^ _DAT_1832697b0 ^ 0xb474ded987ec48d4;
  _DAT_183269760 = (_DAT_183269760 * 0x199165108a492cbd ^ _DAT_1832698e8) + _DAT_1832697b0;
  _DAT_183269980 = _DAT_183269760 ^ _DAT_1832698e8;
  _DAT_183269818 = 0;
  _DAT_183269808 = func_0x00018ab4bca0(_DAT_183269748 + 0xffe4008456001dff ^ 0x42);
  _DAT_183269998 = _DAT_183269988 ^ _DAT_183269808 ^ 0xfff;
  _DAT_183269778 = (_DAT_183269778 ^ _DAT_183269808) + 0xfff ^ 0xd88e062f9b0b4bc8;
  _DAT_1832699c8 = (_DAT_1832699c8 * 0x3470090491cede37 ^ _DAT_183269778) + _DAT_183269808;
  _DAT_1832697a8 = _DAT_1832699c8 ^ _DAT_183269778;
  _DAT_1832698e8 = 0xfff;
  uVar3 = ~_DAT_1832698b0 *
          ((_DAT_183269838 ^ 0xbbfbbdbfdae7d4d2) + (_DAT_183269838 & 0x3bfbbdbfdae7d4d2) * 2);
  uVar3 = (uVar3 | _DAT_183269a98) + (uVar3 & _DAT_183269a98);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_1832698d8 = func_0x00018ab4bca0((uVar3 | 0x4404424025182b2d) + (uVar3 & 0x4404424025182b2d));
  uVar3 = _DAT_1832698d8 << 3 | _DAT_1832698d8 >> 0x3d;
  _DAT_183269710 =
       (_DAT_183269710 * -0x321c4b1d1b4e8c91 ^
       (_DAT_183269710 ^ uVar3) + 0x44044240a13a0808 ^ 0xaf71c125a355fe11) + uVar3;
  _DAT_1832699e0 = 0x44044240a13a0808;
  _DAT_183269ac8 = func_0x00018ab4bca0(_DAT_183269ae8 ^ 0x1c0083da00219d);
  _DAT_183269aa8 = _DAT_183269800 ^ _DAT_183269ac8 ^ 0xfff;
  _DAT_183269a88 = (_DAT_183269a88 ^ _DAT_183269ac8) + 0xfff ^ 0x4602df1c63bc9941;
  _DAT_1832697a8 = (_DAT_1832697a8 * -0x7a637e6cec79ac05 ^ _DAT_183269a88) + _DAT_183269ac8;
  _DAT_1832698b0 = _DAT_1832697a8 ^ _DAT_183269a88;
  _DAT_183269828 = 0xfff;
  uVar3 = (_DAT_183269850 ^ _DAT_18193dcc0) + _DAT_1832698f8 + 0xa1f0ad3ac0a794f2;
  uVar4 = (_DAT_1832698f8 ^ _UNK_18193dcc8) + _DAT_183269850 + 0xa1f0ad3a4485b7d7;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_183269850 ^ _DAT_18193dcc0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1832698f8 ^ _UNK_18193dcc8;
  _DAT_183269890 =
       func_0x00018ab4bca0((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_183269850 + 0xa1f0ad3a4485b7d7) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_1832698f8 + 0xa1f0ad3ac0a794f2));
  _DAT_183269878 = _DAT_183269878 ^ _DAT_183269890 ^ 0xfa8732eec16b1691 ^ 0xb6c3b24107a8cc47;
  _DAT_183269900 =
       (_DAT_183269900 * 0x74c71949e3243583 ^ _DAT_183269878) +
       (_DAT_183269890 ^ 0xfa8732eec16b1691);
  _DAT_183269a38 = _DAT_183269900 ^ _DAT_183269878;
  _DAT_183269898 = 0;
  _DAT_183269930 = func_0x00018ab4bca0(_DAT_1832698e0 + 0xffebff8439ffe1ff ^ 0x4a);
  uVar3 = _DAT_183269930 ^ 0xfff;
  _DAT_183269998 = _DAT_183269800 ^ uVar3 ^ 0xfff;
  _DAT_1832697e0 = (_DAT_1832697e0 ^ uVar3) + 0xfff ^ 0xf5ca3731404e2887;
  _DAT_1832698e8 = (_DAT_1832698e8 * -0x5efa3a70042cc15 ^ _DAT_1832697e0) + uVar3;
  _DAT_1832698e0 = _DAT_1832698e8 ^ _DAT_1832697e0;
  _DAT_183269760 = 0xfff;
  switch(0xfff < uVar5) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab387a4 (image 18ab387a4) =====

undefined8 FUN_18ab387a4(void)

{
  longlong *unaff_R14;
  
  (**(code **)(*unaff_R14 + 0x70))();
  return 0;
}



// ===== continuation @ rva ab4e77c (image 18ab4e77c) =====

void FUN_18ab4e77c(void)

{
  return;
}



// ===== continuation @ rva ab4e5d3 (image 18ab4e5d3) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab4e5d3(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(*unaff_R12 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab4fcea (image 18ab4fcea) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab4fcea(void)

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



// ===== continuation @ rva ab5037f (image 18ab5037f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18ab4ec07(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab512ff (image 18ab512ff) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18ab4ec07(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab503e6 (image 18ab503e6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab503e6(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x78))();
  FUN_190dd72e0();
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



// ===== continuation @ rva ab501a8 (image 18ab501a8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab501a8(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(*unaff_R13 + 0x3a0))();
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



// ===== continuation @ rva ab51119 (image 18ab51119) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18ab4ec07(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(*unaff_R12 + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab4ec2d (image 18ab4ec2d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab4ec2d(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_R12 + 0x720))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}



// ===== continuation @ rva ab4fb33 (image 18ab4fb33) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab4fb33(void)

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



// ===== continuation @ rva ab52f93 (image 18ab52f93) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab52f93(void)

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



// ===== continuation @ rva ab52f3f (image 18ab52f3f) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab52f3f(void)

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



// ===== continuation @ rva ab53cf8 (image 18ab53cf8) =====

void FUN_18ab53cf8(void)

{
  return;
}



// ===== continuation @ rva ab53436 (image 18ab53436) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab53436(void)

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



// ===== continuation @ rva ab53d06 (image 18ab53d06) =====

void FUN_18ab53d06(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab53bdc (image 18ab53bdc) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab53bdc(void)

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



// ===== continuation @ rva ab53001 (image 18ab53001) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab53001(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181943868)();
  return;
}



// ===== continuation @ rva ab5372c (image 18ab5372c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab5372c(void)

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



// ===== continuation @ rva ab532bd (image 18ab532bd) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab532bd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x568))();
  FUN_190dd72e0();
  (*_DAT_181943958)();
  return;
}



// ===== continuation @ rva ab5325b (image 18ab5325b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab5325b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_1819437b8)();
  return;
}



// ===== continuation @ rva ab533df (image 18ab533df) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab533df(void)

{
  FUN_190ddfc90();
  (*_DAT_181943b18)();
  return;
}



// ===== continuation @ rva ab53a32 (image 18ab53a32) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab53a32(void)

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



// ===== continuation @ rva ab5674d (image 18ab5674d) =====

void FUN_18ab5674d(void)

{
  return;
}



// ===== continuation @ rva ab53e70 (image 18ab53e70) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab53e70(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181944068)();
  return;
}



// ===== continuation @ rva ab566f2 (image 18ab566f2) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab566f2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181944a48)();
  return;
}



// ===== continuation @ rva ab5455b (image 18ab5455b) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab5455b(void)

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



// ===== continuation @ rva ab5538d (image 18ab5538d) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab5538d(void)

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



// ===== continuation @ rva ab56520 (image 18ab56520) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab56520(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181943cb8)();
  return;
}



// ===== continuation @ rva ab560e3 (image 18ab560e3) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab560e3(void)

{
  FUN_190dd72e0();
  (*_DAT_181944518)();
  return;
}



// ===== continuation @ rva ab555ec (image 18ab555ec) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab555ec(void)

{
  FUN_190ddfc90();
  (*_DAT_181944938)();
  return;
}



// ===== continuation @ rva ab55928 (image 18ab55928) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab55928(void)

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



// ===== continuation @ rva ab55900 (image 18ab55900) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab55900(void)

{
  (*_DAT_181944a38)();
  return;
}



// ===== continuation @ rva ab55584 (image 18ab55584) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab55584(void)

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



// ===== continuation @ rva ab59257 (image 18ab59257) =====

void FUN_18ab59257(void)

{
  return;
}



// ===== continuation @ rva ab590b6 (image 18ab590b6) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab590b6(void)

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



// ===== continuation @ rva ab5dad8 (image 18ab5dad8) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab5dad8(void)

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



// ===== continuation @ rva ab5be3f (image 18ab5be3f) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab5be3f(void)

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



// ===== continuation @ rva ab5d935 (image 18ab5d935) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab5d935(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(*in_stack_00000030 + 0x1f8))(in_stack_00000030);
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



// ===== continuation @ rva ab5d75c (image 18ab5d75c) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab5d75c(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
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



// ===== continuation @ rva ab5c570 (image 18ab5c570) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab5c570(void)

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



// ===== continuation @ rva ab5c382 (image 18ab5c382) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab5c382(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190ddfc90(in_stack_00000030,&stack0x00000070,*_DAT_18301ee50 + 0x212,*_DAT_18301ee50 + 0xc5a,
                0x38);
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



// ===== continuation @ rva ab5d24d (image 18ab5d24d) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab5d24d(void)

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



// ===== continuation @ rva ab5cfbc (image 18ab5cfbc) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab5cfbc(void)

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



// ===== continuation @ rva ab5c9cf (image 18ab5c9cf) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18ab5dd2a(void)

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



// ===== continuation @ rva ab5d5e4 (image 18ab5d5e4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab5d5e4(void)

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



// ===== continuation @ rva ab5d3b4 (image 18ab5d3b4) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab5d3b4(void)

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



// ===== continuation @ rva ab625d2 (image 18ab625d2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab625d2(void)

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



// ===== continuation @ rva ab6257e (image 18ab6257e) =====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab6257e(void)

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



// ===== continuation @ rva ab63454 (image 18ab63454) =====

void FUN_18ab63454(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}



// ===== continuation @ rva ab62b7b (image 18ab62b7b) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab62b7b(void)

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



// ===== continuation @ rva ab63411 (image 18ab63411) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab63411(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x1f8))();
  (**(code **)(*unaff_RSI + 0x720))();
  (*_DAT_181946ce8)();
  return;
}



// ===== continuation @ rva ab62d98 (image 18ab62d98) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab62d98(void)

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



// ===== continuation @ rva ab62746 (image 18ab62746) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab62746(void)

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



// ===== continuation @ rva ab626f2 (image 18ab626f2) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab626f2(void)

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



// ===== continuation @ rva ab63445 (image 18ab63445) =====

void FUN_18ab63445(void)

{
  return;
}



// ===== continuation @ rva ab63126 (image 18ab63126) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab63126(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x488))();
  (*_DAT_181946ee8)();
  return;
}



// ===== continuation @ rva ab62fe8 (image 18ab62fe8) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab62fe8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x558))();
  (*_DAT_181946df8)();
  return;
}



// ===== continuation @ rva ab62c63 (image 18ab62c63) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab62c63(void)

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



// ===== continuation @ rva ab6332a (image 18ab6332a) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab6332a(void)

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



// ===== continuation @ rva ab65566 (image 18ab65566) =====

void FUN_18ab65566(void)

{
  return;
}



// ===== continuation @ rva ab635cc (image 18ab635cc) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab635cc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0xd8))();
  (*_DAT_181947b68)();
  return;
}



// ===== continuation @ rva ab63f7a (image 18ab63f7a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab63f7a(void)

{
  (*_DAT_181947fc8)();
  return;
}



// ===== continuation @ rva ab6467b (image 18ab6467b) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab6467b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined4 uStack00000000000000c0;
  undefined2 uStack00000000000000c4;
  undefined4 uStack00000000000000f4;
  
  uStack00000000000000f4 = 0xaf597d4f;
  uVar1 = rdtsc();
  uStack00000000000000c0 = 0x690073;
  uStack00000000000000c4 = 0x78;
  (*_DAT_1819472d8)(param_1,(int)((ulonglong)uVar1 >> 0x20));
  return;
}



// ===== continuation @ rva ab65f9e (image 18ab65f9e) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab65f9e(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x78))();
  FUN_190dd72e0();
  (*_DAT_181947d48)();
  return;
}



// ===== continuation @ rva ab65a30 (image 18ab65a30) =====

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ab65a30(void)

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



// ===== continuation @ rva ab65c0d (image 18ab65c0d) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab65c0d(void)

{
  (*_DAT_181947fe8)();
  return;
}



// ===== continuation @ rva ab6417a (image 18ab6417a) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab6417a(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_1819478a8)();
  return;
}



// ===== continuation @ rva ab63a62 (image 18ab63a62) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab63a62(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_1819476d8)();
  return;
}



// ===== continuation @ rva ab654ee (image 18ab654ee) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab654ee(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181947928)();
  return;
}



// ===== continuation @ rva ab6489c (image 18ab6489c) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ab6489c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(*unaff_RSI + 0x70))();
  (*_DAT_181947cb8)();
  return;
}



