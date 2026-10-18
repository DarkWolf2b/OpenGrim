// ===== Lsixtwo/fx; YO ()V (handler @ image 18b157c20, runtime 6ffff2d67c20) =====

void FUN_18b157c20(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x3806,0xbf);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b157c6a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a6dc40 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; _c7ac3063eea47a4b2ccde72f1bb0bf92 ()V (handler @ image 18b2f3e90, runtime 6ffff2f03e90) =====

void FUN_18b2f3e90(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b2f3f78 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181abe5d8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRA ()V (handler @ image 18b2124c0, runtime 6ffff2e224c0) =====

void FUN_18b2124c0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b212576 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a93bc8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRB (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18b2a7ed0, runtime 6ffff2eb7ed0) =====

undefined8 FUN_18b2a7ed0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/fx; aRC ([B)Ljava/lang/String; (handler @ image 18b2af3b0, runtime 6ffff2ebf3b0) =====

void FUN_18b2af3b0(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018b2af450 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ab2950 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fx; aRD (IJ)Ljava/lang/String; (handler @ image 18b2da040, runtime 6ffff2eea040) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2da040(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar8;
  
  uRam0000000183290690 = func_0x00018b2e12a0(lRam00000001832908e8 + 0x621e515f20b4f57bU ^ 0x27);
  uVar3 = (uRam0000000183290690 ^ 0x5b59a12571d046e8) -
          ((uRam0000000183290690 ^ 0x5b59a12571d046e8) >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = uRam0000000183290690 ^ 0xd672233e6975e3ba ^
          (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2;
  uRam0000000183290a90 = (uRam0000000183290a90 ^ uVar3) + 0x8d7bd7bf3fade556 ^ 0x2e15e72039912c22;
  uRam00000001832908b0 = (uRam00000001832908b0 * 0x7e1867f6571eda75 ^ uRam0000000183290a90) + uVar3;
  uRam00000001832909a8 = uRam00000001832908b0 ^ uRam0000000183290a90;
  uRam00000001832905e8 = 0x8d7bd7bf3fade556;
  uVar3 = (uRam0000000183290520 ^ _UNK_181ab9910) + uRam0000000183290520 + 0xd68bad3c6efc4c13;
  uVar7 = (uRam0000000183290520 ^ _UNK_181ab9918) + uRam0000000183290520 + 0x68c307238f28179f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290520 ^ _UNK_181ab9910;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290520 ^ _UNK_181ab9918;
  uRam00000001832907e8 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183290520 + 0x68c307238f28179f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183290520 + 0xd68bad3c6efc4c13));
  uVar3 = (uRam00000001832907e8 ^ 0xbd9db3326694ec8a) & 0x7fffffffffffffff;
  uVar7 = ((uRam00000001832907e8 ^ 0xbd9db3326694ec8a) & 0x7fffffffffffffff) >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar3;
  uRam00000001832909b0 = (uRam00000001832909b0 ^ uVar3) + 0xbe48aa1f65f678a9 ^ 0x99b6f7f9ee40cd5c;
  uRam0000000183290998 = (uRam0000000183290998 * -0x2b8dc6d8f319fb3d ^ uRam00000001832909b0) + uVar3
  ;
  uRam0000000183290910 = uRam0000000183290998 ^ uRam00000001832909b0;
  uRam00000001832907a0 = 0xbe48aa1f65f678a9;
  uVar3 = (uRam0000000183290518 ^ _UNK_181ab9920) + uRam00000001832908c8 + 0x84222325;
  uVar7 = (uRam00000001832908c8 ^ _UNK_181ab9928) + uRam0000000183290518 + 0x6a5bb2be494cbf54;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290518 ^ _UNK_181ab9920;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832908c8 ^ _UNK_181ab9928;
  uRam00000001832907e0 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183290518 + 0x6a5bb2be494cbf54) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832908c8 + 0x84222325));
  uRam0000000183290628 =
       (uRam0000000183290628 ^ uRam00000001832907e0 & 0xfffffffffff00000) + 0x95a44d41b6b340ac ^
       0x4672b073fd955617;
  uRam0000000183290a88 =
       (uRam0000000183290a88 * -0x296595218c850adb ^ uRam0000000183290628) +
       (uRam00000001832907e0 & 0xfffffffffff00000);
  uRam0000000183290a10 = uRam0000000183290a88 ^ uRam0000000183290628;
  lRam0000000183290858 = -0x6a5bb2be494cbf54;
  uRam0000000183290918 = func_0x00018b2e12a0(uRam00000001832907f8 ^ 0x595eb44d757259ca);
  uVar3 = uRam0000000183290918 & 0x7fffffffffffffff;
  uRam0000000183290890 = uRam0000000183290908 ^ uVar3 ^ 0x6a5bb2be494d3f53;
  uRam0000000183290620 = (uRam0000000183290620 ^ uVar3) + 0x6a5bb2be494d3f53 ^ 0x42adb1ef7d037356;
  uRam0000000183290718 = (uRam0000000183290718 * -0x366c0e5d71891259 ^ uRam0000000183290620) + uVar3
  ;
  uRam0000000183290938 = uRam0000000183290718 ^ uRam0000000183290620;
  uRam00000001832908f0 = 0x6a5bb2be494d3f53;
  uVar3 = (uRam0000000183290830 ^ _UNK_181ab9930) + uRam0000000183290668 + 0x6011d0b778e719ce;
  uVar7 = (uRam0000000183290668 ^ _UNK_181ab9938) + uRam0000000183290830 + 0x9fee2f48033b4514;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290830 ^ _UNK_181ab9930;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290668 ^ _UNK_181ab9938;
  uRam00000001832909f0 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183290830 + 0x9fee2f48033b4514) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183290668 + 0x6011d0b778e719ce));
  uRam00000001832909b0 = uRam0000000183290698 ^ uRam00000001832909f0 ^ 0x7fff;
  uRam0000000183290ae8 = (uRam0000000183290ae8 ^ uRam00000001832909f0) + 0x7fff ^ 0x67a9a71193bfd931
  ;
  uRam00000001832905d8 =
       (uRam00000001832905d8 * -0x398f6a515fa032b1 ^ uRam0000000183290ae8) + uRam00000001832909f0;
  uRam0000000183290998 = uRam00000001832905d8 ^ uRam0000000183290ae8;
  uRam0000000183290608 = 0x7fff;
  uVar3 = (~uRam00000001832905c0 + 0x2c09c1ff50d5dd81) *
          ((uRam0000000183290518 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183290518 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam0000000183290788) + (uVar3 & uRam0000000183290788);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183290660 =
       func_0x00018b2e12a0((uVar3 | 0x2c09c1ffd4f7fea5) + (uVar3 & 0x2c09c1ffd4f7fea5));
  uVar3 = (uRam0000000183290660 ^ 0x2c09c1ff50d00000) & 0xfffffffffff80000;
  uRam0000000183290968 = (uRam0000000183290968 ^ uVar3) + 0xd3f63e00af2a2280 ^ 0x1cd8861a27f7ee59;
  uRam0000000183290670 = (uRam0000000183290670 * -0x1cbe1250091cb52f ^ uRam0000000183290968) + uVar3
  ;
  uRam00000001832908d8 = uRam0000000183290670 ^ uRam0000000183290968;
  uRam00000001832907a0 = 0xd3f63e00af2a2280;
  uVar3 = (uRam0000000183290770 ^ _UNK_181ab9940) + uRam00000001832909c8 + 0x84225cda;
  uVar7 = (uRam00000001832909c8 ^ _UNK_181ab9948) + uRam0000000183290770 + 0x2c09c1ff50d5dd80;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290770 ^ _UNK_181ab9940;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832909c8 ^ _UNK_181ab9948;
  uRam0000000183290520 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183290770 + 0x2c09c1ff50d5dd80) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832909c8 + 0x84225cda));
  uVar3 = uRam0000000183290520 ^ 0xb4f5e66b9dea2280;
  uRam00000001832905e0 = uRam0000000183290ac8 ^ uVar3 ^ 0x2c09c1ff50d65d7f;
  uRam0000000183290690 = (uRam0000000183290690 ^ uVar3) + 0x2c09c1ff50d65d7f ^ 0x93226bd5d15c2c27;
  uRam0000000183290980 = (uRam0000000183290980 * -0x70098f7a7d03213d ^ uRam0000000183290690) + uVar3
  ;
  uRam00000001832907d8 = uRam0000000183290980 ^ uRam0000000183290690;
  uRam0000000183290798 = 0x2c09c1ff50d65d7f;
  uRam00000001832909a8 = func_0x00018b2e12a0(uRam00000001832905a0 + 0x80a32ae4567d42a2 ^ 0xbe);
  uVar3 = uRam00000001832909a8 ^ 0xfffffffffffc7fff;
  uRam0000000183290680 = uRam0000000183290a10 ^ uVar3 ^ 0x7fff;
  uRam00000001832905a0 = (uRam00000001832905a0 ^ uVar3) + 0x7fff ^ 0xe5fc09122bfee23;
  uRam0000000183290880 = (uRam0000000183290880 * 0x30769db27688850d ^ uRam00000001832905a0) + uVar3;
  uRam00000001832905d0 = uRam0000000183290880 ^ uRam00000001832905a0;
  uRam0000000183290a40 = 0x7fff;
  uVar3 = (uRam0000000183290878 ^ _UNK_181ab9950) + uRam0000000183290740 + 0x8d7bd7bfbb8fc673;
  uVar7 = (uRam0000000183290740 ^ _UNK_181ab9958) + uRam0000000183290878 + 0xbe48aa1f65f678a9;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290878 ^ _UNK_181ab9950;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290740 ^ _UNK_181ab9958;
  uRam00000001832907c8 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183290878 + 0xbe48aa1f65f678a9) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183290740 + 0x8d7bd7bfbb8fc673));
  uVar3 = (uRam00000001832907c8 ^ 0x13355a01a098556) & 0x7fffffffffffffff;
  uRam0000000183290668 = uRam00000001832905a0 ^ uVar3 ^ 0x4bc481dea5a45dff;
  uRam00000001832908f0 = (uRam00000001832908f0 ^ uVar3) + 0x4bc481dea5a45dff ^ 0x7c4afdc1bfe9d306;
  uRam0000000183290a58 = (uRam0000000183290a58 * -0x6d2526b462f0156b ^ uRam00000001832908f0) + uVar3
  ;
  uRam00000001832905c0 = uRam0000000183290a58 ^ uRam00000001832908f0;
  uRam0000000183290540 = 0x4bc481dea5a45dff;
  uRam0000000183290630 = func_0x00018b2e12a0(uRam00000001832908c8 + 0x9f99f129c5c348d2 ^ 0x22);
  uRam0000000183290658 =
       (uRam0000000183290658 ^ uRam0000000183290630 & 0x3fffffffffffffff) + 0x8c48821f25a46000 ^
       0x1d034f2448271107;
  uRam0000000183290ac8 =
       (uRam0000000183290ac8 * 0x788793fbb188464b ^ uRam0000000183290658) +
       (uRam0000000183290630 & 0x3fffffffffffffff);
  uRam00000001832907c0 = uRam0000000183290ac8 ^ uRam0000000183290658;
  uRam0000000183290820 = 0x8c48821f25a46000;
  uVar3 = (uRam0000000183290a20 ^ _UNK_181ab9960) + uRam0000000183290670 + 0x33337da0de79beda;
  uVar7 = (uRam0000000183290670 ^ _UNK_181ab9968) + uRam0000000183290a20 + 0x1891043e4b48c000;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290a20 ^ _UNK_181ab9960;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290670 ^ _UNK_181ab9968;
  uRam0000000183290a80 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183290a20 + 0x1891043e4b48c000) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183290670 + 0x33337da0de79beda));
  uVar3 = uRam0000000183290a80 ^ 0x2ba2799e11135dff;
  uRam0000000183290780 = uRam0000000183290608 ^ uVar3 ^ 0x4bc481dea5a45dff;
  uRam0000000183290930 = (uRam0000000183290930 ^ uVar3) + 0x4bc481dea5a45dff ^ 0xc68f907a45fa90f8;
  uRam00000001832905d0 = (uRam00000001832905d0 * -0x602ea52c0e9676e9 ^ uRam0000000183290930) + uVar3
  ;
  uRam00000001832909e8 = uRam00000001832905d0 ^ uRam0000000183290930;
  uRam0000000183290ae0 = uRam00000001832905a8 ^ 0x4bc481dea5a45dff;
  uRam0000000183290928 = 0x4bc481dea5a45dff;
  uVar3 = (uRam0000000183290520 ^ _UNK_181ab9970) + uRam0000000183290508 + 0x4bc481de21867eda;
  uVar7 = (uRam0000000183290508 ^ _UNK_181ab9978) + uRam0000000183290520 + 0x4bc481dea5a45dff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290520 ^ _UNK_181ab9970;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290508 ^ _UNK_181ab9978;
  uRam0000000183290578 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183290520 + 0x4bc481dea5a45dff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183290508 + 0x4bc481de21867eda));
  uRam0000000183290890 = uRam0000000183290578 ^ 0xf8b7cf29e29f19fe;
  uRam0000000183290af0 = uRam0000000183290af0 ^ uRam0000000183290890 ^ 0xf624e4cfc179d9ff;
  uRam0000000183290978 =
       (uRam0000000183290978 * -0x3a1dad296e3a68a5 ^ uRam0000000183290af0) + uRam0000000183290890;
  uRam00000001832905f8 = uRam0000000183290978 ^ uRam0000000183290af0;
  uRam0000000183290a40 = 0;
  uRam00000001832906f0 = func_0x00018b2e12a0(uRam00000001832907f0 ^ 0x43ff7bc9ffddf1);
  uVar3 = uRam00000001832906f0 - (uRam00000001832906f0 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam00000001832906f0) & 0x7fffffffffffffff;
  uRam0000000183290828 = uRam0000000183290a78 ^ uVar3 ^ 0x7fff;
  uRam0000000183290600 = (uRam0000000183290600 ^ uVar3) + 0x7fff ^ 0x3a19c5e6bb224370;
  uRam0000000183290580 = (uRam0000000183290580 * -0x98dcd5c62cef383 ^ uRam0000000183290600) + uVar3;
  uRam00000001832909a8 = uRam0000000183290580 ^ uRam0000000183290600;
  uRam0000000183290ac8 = 0x7fff;
  uVar3 = (uRam0000000183290840 ^ _UNK_181ab9980) + uRam0000000183290600 + 0x8d7bd7bfbb8fc673;
  uVar7 = (uRam0000000183290600 ^ _UNK_181ab9988) + (uRam0000000183290840 - 1);
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290840 ^ _UNK_181ab9980;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290600 ^ _UNK_181ab9988;
  uRam0000000183290648 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183290840 - 1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183290600 + 0x8d7bd7bfbb8fc673));
  uRam0000000183290a10 =
       (uRam0000000183290a10 ^ uRam0000000183290648 & 0x3ffffffffffffff) + 0x72842840c0521aa9 ^
       0xbbd2ffe9b991827b;
  uRam00000001832906c8 =
       (uRam00000001832906c8 * -0x31b5d44a7f678975 ^ uRam0000000183290a10) +
       (uRam0000000183290648 & 0x3ffffffffffffff);
  uRam00000001832908e0 = uRam00000001832906c8 ^ uRam0000000183290a10;
  uRam00000001832909c0 = 0x72842840c0521aa9;
  uRam0000000183290800 = func_0x00018b2e12a0(uRam0000000183290928 ^ 0xe8b35eb849c5da0a);
  uVar3 = (uRam0000000183290800 & 0x7fffffffffffffff) >> 1 |
          uRam0000000183290800 & 0x7fffffffffffffff;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10
          ^ uRam0000000183290800 & 0x7fffffffffffffff) & 0x7fffffffffffffff;
  uRam0000000183290580 = uRam0000000183290580 ^ uVar3 ^ 0xcdebc251d8e29753;
  uRam0000000183290ad0 = (uRam0000000183290ad0 * -0xb6ff565842cadc7 ^ uRam0000000183290580) + uVar3;
  uRam00000001832907a8 = uRam0000000183290ad0 ^ uRam0000000183290580;
  uRam0000000183290638 = 0;
  uRam0000000183290870 = func_0x00018b2e12a0(lRam0000000183290a98 + 0xffabff7cda001dffU ^ 0xf8);
  uVar3 = (uRam0000000183290870 ^ 0x7fff) << 0x3a | (uRam0000000183290870 ^ 0x7fff) >> 6;
  uRam0000000183290ac0 = uRam00000001832905a8 ^ uVar3 ^ 0x7fff;
  uRam0000000183290798 = (uRam0000000183290798 ^ uVar3) + 0x7fff ^ 0x30d5a9254a4918d1;
  uRam0000000183290548 = (uRam0000000183290548 * 0x5e661283509e08b1 ^ uRam0000000183290798) + uVar3;
  uRam0000000183290aa0 = uRam0000000183290548 ^ uRam0000000183290798;
  uRam00000001832905e8 = 0x7fff;
  uVar3 = (uRam00000001832909e8 ^ _UNK_181ab9990) + uRam0000000183290660 + 0x8d2b821b9c878677;
  uVar7 = (uRam0000000183290660 ^ _UNK_181ab9998) + uRam00000001832909e8 + 0x8d2b821b18a5a552;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001832909e8 ^ _UNK_181ab9990;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290660 ^ _UNK_181ab9998;
  uRam0000000183290968 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001832909e8 + 0x8d2b821b18a5a552) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam0000000183290660 + 0x8d2b821b9c878677));
  uVar3 = ((uRam0000000183290968 ^ 0x8d2b821b18a5a552) & 0x7fffffffff) << 0x18 |
          (uRam0000000183290968 ^ 0x8d2b821b18a5a552) >> 0x28;
  uRam0000000183290ad0 = uRam0000000183290ad0 ^ uVar3 ^ 0x7205d515b0d17d79;
  uRam0000000183290808 = (uRam0000000183290808 * 0x211cac24f661b29 ^ uRam0000000183290ad0) + uVar3;
  uRam0000000183290688 = uRam0000000183290808 ^ uRam0000000183290ad0;
  uRam0000000183290a68 = 0;
  uRam00000001832909f0 = func_0x00018b2e12a0(uRam0000000183290938 + 0xffa4008459ffe1ff ^ 0xb2);
  uVar3 = uRam00000001832909f0 ^ 0x7fff;
  uRam00000001832906c8 = uRam00000001832908a0 ^ uVar3 ^ 0x7fff;
  uRam0000000183290a68 = (uRam0000000183290a68 ^ uVar3) + 0x7fff ^ 0x8faebb0357c08c0e;
  uRam0000000183290628 = (uRam0000000183290628 * -0x501d3241a407ca9f ^ uRam0000000183290a68) + uVar3
  ;
  uRam00000001832909a0 = uRam0000000183290628 ^ uRam0000000183290a68;
  uRam00000001832909f8 = 0x7fff;
  uVar3 = param_4 ^ 0x84222325 ^ uRam0000000183290940;
  lVar4 = (param_4 ^ 0x84222325) + uRam00000001832908d0;
  uVar7 = uVar3 + lVar4;
  uVar8 = (uRam00000001832908d0 ^ 0x7fff) + uRam0000000183290940 + 0x7fff;
  uVar3 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar3;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832908d0 ^ 0x7fff;
  uRam0000000183290830 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183290940 + 0x7fff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar3 = ~uRam0000000183290830 & param_4;
  uVar7 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = ((((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar3) <<
          0x1a | uVar3 >> 0x26;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar7 = (ulonglong)uVar2;
  uRam00000001832909f8 = (uRam00000001832909f8 ^ uVar3) + uVar7 ^ 0x96b9a4a3a7062178;
  uRam0000000183290a30 = (uRam0000000183290a30 * 0x1068cb8a94e2e913 ^ uRam00000001832909f8) + uVar3;
  uRam00000001832906c0 = uRam0000000183290a30 ^ uRam00000001832909f8;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar2 ^ 0x84222325;
  auVar5._8_4_ = param_3;
  auVar5._12_4_ = 0;
  auVar6 = pshufb(auVar5 ^ _UNK_181ab99a0,_UNK_1800170c0);
  uVar8 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar8 + uRam00000001832905f0;
  if (auVar6._4_4_ < 0) {
    uVar3 = uRam0000000183290980 ^ uVar8;
  }
  uRam00000001832905b0 = uVar7;
  uRam0000000183290828 = func_0x00018b2e12a0(SUB161(auVar5 ^ _UNK_181ab99a0,5) ^ uVar3);
  uVar3 = uVar7 * param_3 ^ uRam0000000183290828;
  uRam0000000183290970 = (uVar7 + param_3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001832909c0 = (uRam00000001832909c0 ^ uVar3) + uRam0000000183290970 ^ 0xedf41b98b8410fbf;
  uRam0000000183290720 = (uRam0000000183290720 * 0x6a8b63dacf38486f ^ uRam00000001832909c0) + uVar3;
  uRam0000000183290890 = uRam0000000183290720 ^ uRam00000001832909c0;
  uRam0000000183290970 = uRam0000000183290970 & 0xffffffff;
  uVar3 = (uRam0000000183290558 ^ _UNK_181ab99b0) + uRam0000000183290828 + 0x8ff60d4a;
  uVar7 = (uRam0000000183290828 ^ _UNK_181ab99b8) + uRam0000000183290558 + 0x26f83b89;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290558 ^ _UNK_181ab99b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290828 ^ _UNK_181ab99b8;
  uRam0000000183290688 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183290558 + 0x26f83b89) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183290828 + 0x8ff60d4a));
  uRam0000000183290a50 =
       (uRam0000000183290a50 ^ uRam0000000183290688 ^ 0xbd42e6f) + 0x2ffc3fef ^ 0x23a8c65aa195bf2d;
  uRam0000000183290978 =
       (uRam0000000183290978 * -0x2e6e9b1b256f1765 ^ uRam0000000183290a50) +
       (uRam0000000183290688 ^ 0xbd42e6f);
  uRam00000001832905e8 = uRam0000000183290978 ^ uRam0000000183290a50;
  uRam00000001832909a8 = 0x2ffc3fef;
  uRam0000000183290848 = func_0x00018b2e12a0(uRam00000001832905f8 + 0x350024b8ffdeff ^ 0xf);
  uRam0000000183290770 =
       (uRam0000000183290770 ^ uRam0000000183290848) - 0x7fc3166e ^ 0xef05d4de4eb11d0;
  uRam0000000183290690 =
       (uRam0000000183290690 * 0x68bef5d6a0cbfddf ^ uRam0000000183290770) + uRam0000000183290848;
  uRam00000001832905d8 = uRam0000000183290690 ^ uRam0000000183290770;
  uRam00000001832905e0 = 0x803ce992;
  uRam0000000183290838 = func_0x00018b2e12a0(uRam0000000183290a10 ^ 0xffc500692c00de7e);
  uVar3 = uRam00000001832905c8 - (uRam00000001832905c8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam00000001832905c8;
  uRam0000000183290600 = uRam00000001832907b8 ^ uVar3 ^ 0x7fc394ed;
  uRam0000000183290798 = (uRam0000000183290798 ^ uVar3) + 0x7fc394ed ^ 0x84e87576777e5322;
  uRam0000000183290a20 = (uRam0000000183290a20 * 0x486865b2a2744303 ^ uRam0000000183290798) + uVar3;
  uRam0000000183290698 = uRam0000000183290a20 ^ uRam0000000183290798;
  uRam0000000183290800 = 0x7fc394ed;
  uVar3 = (~uRam0000000183290878 + 0x803ce993) *
          ((uRam0000000183290870 ^ 0xfbe1b7c8) +
          (ulonglong)((uint)uRam0000000183290870 & 0xfbe1b7c8) * 2);
  uVar3 = (uVar3 | uRam0000000183290550) + (uVar3 & uRam0000000183290550);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183290880 =
       func_0x00018b2e12a0((uVar3 | 0x7bdd5e5a) + (ulonglong)((uint)uVar3 & 0x7bdd5e5a));
  uVar3 = uRam0000000183290880 << 0x32 | uRam0000000183290880 >> 0xe;
  uRam0000000183290500 = uRam00000001832908f0 ^ uVar3 ^ 0x100007e7f;
  uRam0000000183290560 = (uRam0000000183290560 ^ uVar3) + 0x100007e7f ^ 0x898020c5d5225ebe;
  uRam00000001832908b0 = (uRam00000001832908b0 * 0x2ab31dd83c4d5565 ^ uRam0000000183290560) + uVar3;
  uRam0000000183290730 = uRam00000001832908b0 ^ uRam0000000183290560;
  uRam00000001832908c0 = 0x7e7f;
  uVar3 = (uRam0000000183290880 ^ _UNK_181ab99c0) + uRam0000000183290af8 + 0x84222325;
  uVar7 = (uRam0000000183290af8 ^ _UNK_181ab99c8) + uRam0000000183290880 + 0x11bf1df6;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290880 ^ _UNK_181ab99c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290af8 ^ _UNK_181ab99c8;
  uRam0000000183290948 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183290880 + 0x11bf1df6) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183290af8 + 0x84222325));
  uVar3 = uRam0000000183290948 & 0xfffffffffffffe00;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar3;
  uRam00000001832906b8 = (uRam00000001832906b8 ^ uVar3) - 0x11bf1df6 ^ 0xc9612b83817f3b65;
  uRam0000000183290640 = (uRam0000000183290640 * 0x6b0eebb26b845e51 ^ uRam00000001832906b8) + uVar3;
  uRam0000000183290988 = uRam0000000183290640 ^ uRam00000001832906b8;
  uRam0000000183290520 = 0xee40e20a;
  uVar3 = (uRam0000000183290678 ^ _UNK_181ab99d0) + 0x172633f64;
  uVar7 = (_UNK_181ab99d8 ^ 0xee40e20a) + uRam0000000183290678 + 0x11bf1df6;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290678 ^ _UNK_181ab99d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ _UNK_181ab99d8 ^ 0xee40e20a;
  uRam00000001832907c0 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183290678 + 0x11bf1df6) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - 0x172633f64);
  uVar3 = (uRam00000001832907c0 ^ 0x8c4de8ef10a) << 0x1f |
          (uRam00000001832907c0 ^ 0x8c4de8ef10a) >> 0x21;
  uRam0000000183290a30 = uRam0000000183290ab8 ^ uVar3 ^ 0x11bf9c75;
  uRam0000000183290880 = (uRam0000000183290880 ^ uVar3) + 0x11bf9c75 ^ 0xd8701f59054741c4;
  uRam0000000183290ab8 = (uRam0000000183290ab8 * -0x55d00ad038cd2089 ^ uRam0000000183290880) + uVar3
  ;
  uRam0000000183290570 = uRam0000000183290ab8 ^ uRam0000000183290880;
  uRam0000000183290710 = 0x11bf9c75;
  uVar3 = (~uRam00000001832907a8 + 0xee40e20b) *
          ((uRam00000001832908f0 ^ 0x959dbf50) +
          (ulonglong)((uint)uRam00000001832908f0 & 0x959dbf50) * 2);
  uVar3 = (uVar3 | uRam0000000183290500) + (uVar3 & uRam0000000183290500);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183290578 =
       func_0x00018b2e12a0((uVar3 | 0x7bdd5d5a) + (ulonglong)((uint)uVar3 & 0x7bdd5d5a));
  uVar3 = uRam0000000183290578 ^ 0x11bf9c75;
  uRam00000001832905e0 = uRam00000001832909d0 ^ uVar3 ^ 0x100007e7f;
  uRam00000001832906f0 = (uRam00000001832906f0 ^ uVar3) + 0x100007e7f ^ 0xf225beeedbb58a12;
  uRam00000001832907c0 = (uRam00000001832907c0 * -0x426b0effad7371cb ^ uRam00000001832906f0) + uVar3
  ;
  uRam00000001832907f8 = uRam00000001832907c0 ^ uRam00000001832906f0;
  uRam0000000183290800 = 0x7e7f;
  uVar3 = (~uRam0000000183290978 + 0x2815eb28) *
          ((uRam0000000183290708 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183290708 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam00000001832909b8) + (uVar3 & uRam00000001832909b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183290748 =
       func_0x00018b2e12a0((uVar3 | 0xac37c802) + (ulonglong)((uint)uVar3 & 0xac37c802));
  uRam0000000183290678 =
       (uRam0000000183290678 ^ uRam0000000183290748 & 0x1fffffffffff) - 0x2815eb27 ^
       0x18dd511215922a5b;
  uRam0000000183290988 =
       (uRam0000000183290988 * -0x782eb9937bd56e99 ^ uRam0000000183290678) +
       (uRam0000000183290748 & 0x1fffffffffff);
  uRam00000001832907d8 = uRam0000000183290988 ^ uRam0000000183290678;
  uRam00000001832905c8 = 0xd7ea14d9;
  uRam00000001832909d0 = func_0x00018b2e12a0(uRam0000000183290798 + 0x75ffa41cfff4ff ^ 0x7e);
  uRam0000000183290660 = uRam0000000183290ad8 ^ uRam00000001832909d0 ^ 0x281669a6;
  uRam0000000183290aa0 =
       (uRam0000000183290aa0 ^ uRam00000001832909d0) + 0x281669a6 ^ 0xce4c8d4f1521efc3;
  uRam0000000183290688 =
       (uRam0000000183290688 * 0x620092d929ab8149 ^ uRam0000000183290aa0) + uRam00000001832909d0;
  uRam00000001832908f0 = uRam0000000183290688 ^ uRam0000000183290aa0;
  uRam0000000183290570 = 0x281669a6;
  uRam00000001832909e0 = func_0x00018b2e12a0(lRam0000000183290858 + 0x4a00775a00c5ffU ^ 0x62);
  uRam0000000183290770 = uRam0000000183290660 ^ uRam00000001832909e0 ^ 0x100007e7f;
  uRam0000000183290ae0 =
       (uRam0000000183290ae0 ^ uRam00000001832909e0) + 0x100007e7f ^ 0xa096dd814b04501f;
  uRam00000001832907c8 =
       (uRam00000001832907c8 * 0x2001f5e8b80e7249 ^ uRam0000000183290ae0) + uRam00000001832909e0;
  uRam0000000183290588 = uRam00000001832907c8 ^ uRam0000000183290ae0;
  lRam0000000183290a38 = 0x7e7f;
  uRam0000000183290590 = func_0x00018b2e12a0(uRam00000001832905a8 ^ 0xff86000df000683c);
  uVar3 = uRam0000000183290590 ^ 0x1ef801674ce90649;
  uRam00000001832905f0 = uRam00000001832908d8 ^ uVar3 ^ 0xd533daa9;
  uRam0000000183290ae8 = (uRam0000000183290ae8 ^ uVar3) + 0xd533daa9 ^ 0x3a9e355fe8492722;
  uRam0000000183290680 = (uRam0000000183290680 * 0x3bb4f46c8f2e78ef ^ uRam0000000183290ae8) + uVar3;
  uRam0000000183290500 = uRam0000000183290680 ^ uRam0000000183290ae8;
  uRam0000000183290530 = 0xd533daa9;
  uVar3 = (~uRam0000000183290500 + 0xa5379abb) *
          ((uRam0000000183290660 ^ 0xabde1cca) +
          (ulonglong)((uint)uRam0000000183290660 & 0xabde1cca) * 2);
  uVar3 = (uVar3 | uRam00000001832907a8) + (uVar3 & uRam00000001832907a8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam0000000183290700 =
       func_0x00018b2e12a0((uVar3 | 0xee98670) + (ulonglong)((uint)uVar3 & 0xee98670));
  uVar3 = uRam0000000183290700 ^ 0xac82545;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar3;
  uRam0000000183290578 = (uRam0000000183290578 ^ uVar3) + 0x25341aaa ^ 0xbe2391fbe8001627;
  uRam00000001832905f8 = (uRam00000001832905f8 * 0x778a6ee062969795 ^ uRam0000000183290578) + uVar3;
  uRam00000001832908a0 = uRam00000001832905f8 ^ uRam0000000183290578;
  uRam00000001832906f0 = 0x25341aaa;
  uRam00000001832908b0 = func_0x00018b2e12a0(uRam0000000183290770 + 0xffe2ff83e2ffe1ff ^ 0x72);
  uRam00000001832909d8 = uRam00000001832908b0 << 0x14 | uRam00000001832908b0 >> 0x2c;
  uRam0000000183290af0 = uRam0000000183290af0 ^ uRam00000001832909d8 ^ 0x5434349851bd5346;
  uRam00000001832907b8 =
       (uRam00000001832907b8 * 0x700ec5af52eb09ff ^ uRam0000000183290af0) + uRam00000001832909d8;
  uRam0000000183290ac0 = uRam00000001832907b8 ^ uRam0000000183290af0;
  uRam0000000183290798 = 0;
  uVar3 = (uRam0000000183290968 ^ _UNK_181ab99e0) + uRam00000001832906b8 + 0xabde1cca;
  uVar7 = (uRam00000001832906b8 ^ _UNK_181ab99e8) + uRam0000000183290968 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290968 ^ _UNK_181ab99e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001832906b8 ^ _UNK_181ab99e8;
  uRam0000000183290790 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183290968 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001832906b8 + 0xabde1cca));
  uVar3 = (uRam0000000183290790 ^ 0xffffffff) & 0x7fffffffffffffff;
  uRam00000001832907e0 = (uRam00000001832907e0 ^ uVar3) + 0xd003c010 ^ 0x5d86ccde484380fa;
  uRam0000000183290598 = (uRam0000000183290598 * -0x22f556f2f5be5887 ^ uRam00000001832907e0) + uVar3
  ;
  uRam00000001832909e8 = uRam0000000183290598 ^ uRam00000001832907e0;
  uRam0000000183290a60 = 0xd003c010;
  uRam0000000183290a28 = func_0x00018b2e12a0(lRam0000000183290a38 + 0xffccff7ba60021ffU ^ 0xcd);
  uVar3 = uRam0000000183290a28 >> 1 | uRam0000000183290a28;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (ulonglong)
          (~((uint)uRam0000000183290a28 ^
            (0x40 - (uint)(byte)(((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                                0x38)) * 2) & 0x7e7f);
  uRam0000000183290878 = uRam0000000183290768 ^ uVar3 ^ 0x7e7f;
  uRam00000001832909f0 = (uRam00000001832909f0 ^ uVar3) + 0x7e7f ^ 0x1e50af075fbc67f1;
  uRam0000000183290a48 = (uRam0000000183290a48 * -0x1a69100bf20d3609 ^ uRam00000001832909f0) + uVar3
  ;
  uRam00000001832908b0 = uRam0000000183290a48 ^ uRam00000001832909f0;
  uRam0000000183290620 = 0x7e7f;
  uVar3 = (uRam0000000183290a30 ^ _UNK_181ab99f0) + uRam0000000183290578 + 0x8ff60d4a;
  uVar7 = (uRam0000000183290578 ^ _UNK_181ab99f8) + uRam0000000183290a30 + 0xbd42e6f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam0000000183290a30 ^ _UNK_181ab99f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290578 ^ _UNK_181ab99f8;
  uRam0000000183290830 =
       func_0x00018b2e12a0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam0000000183290a30 + 0xbd42e6f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam0000000183290578 + 0x8ff60d4a));
  uVar3 = uRam0000000183290830 >> 1 | uRam0000000183290830;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam0000000183290830;
  uVar3 = (uVar3 ^ 0xbd42e6f) << 0x12 | uVar3 >> 0x2e;
  uRam0000000183290640 = uRam0000000183290640 ^ uVar3 ^ 0xfe7d61ab0391d0a0;
  uRam00000001832907e0 = (uRam00000001832907e0 * -0x341928ec335d6bcf ^ uRam0000000183290640) + uVar3
  ;
  uRam00000001832907f0 = uRam00000001832907e0 ^ uRam0000000183290640;
  uRam0000000183290a60 = 0;
  uVar3 = ((uRam0000000183290ac8 ^ 0x84225d5a) +
          (ulonglong)((uint)uRam0000000183290ac8 & 0x84225d5a) * 2) * -uRam0000000183290748;
  uVar3 = (uVar3 | uRam0000000183290968) + (uVar3 & uRam0000000183290968);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001832907b0 =
       func_0x00018b2e12a0((uVar3 | 0x84225d5a) + (ulonglong)((uint)uVar3 & 0x84225d5a));
  uVar3 = (uRam00000001832907b0 >> 1 | (ulonglong)((uRam00000001832907b0 & 1) != 0) << 0x3f) ^
          0x7e7f;
  uRam0000000183290a10 = uRam0000000183290970 ^ uVar3 ^ 0x7e7f;
  uRam0000000183290750 = (uRam0000000183290750 ^ uVar3) + 0x7e7f ^ 0x3ecbd8a095cf50b1;
  uRam0000000183290ae8 = (uRam0000000183290ae8 * 0x988827c256c3de7 ^ uRam0000000183290750) + uVar3;
  uRam0000000183290770 = uRam0000000183290ae8 ^ uRam0000000183290750;
  uRam0000000183290798 = 0x7e7f;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b2dc7a1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ab7f88 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18b2e1330, runtime 6ffff2ef1330) =====

void FUN_18b2e1330(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018b2e136c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ab9b50 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fx; aRF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18b2e2220, runtime 6ffff2ef2220) =====

void FUN_18b2e2220(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b2e229d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181aba090 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRG (IJ)I (handler @ image 18b2e4ce0, runtime 6ffff2ef4ce0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18b2e4ce0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  
  uRam0000000183290c78 = func_0x00018b2f00e0(uRam0000000183290c68 + 0x5a23f0c790ef259f ^ 0xaf);
  uVar5 = (uRam0000000183290c78 ^ 0xe9f77ff7dff9ffaf) * -0x200ab08091aa4f0f;
  uRam0000000183290c60 = (uRam0000000183290cc8 ^ uVar5) + 0xe9f77ff7dff9ffaf ^ 0x16bd7d6cf1cc1f4f;
  uRam0000000183290c60 =
       (uRam0000000183290cc8 * 0x38fb9086d17896a1 ^ uRam0000000183290c60) + uVar5 ^
       uRam0000000183290c60;
  uRam0000000183290cc8 = 0xe9f77ff7dff9ffaf;
  uRam0000000183290cb0 = func_0x00018b2f00e0(uRam0000000183290c20 ^ 0x8319afb0a43509c6);
  uRam0000000183290c48 =
       (uRam0000000183290c48 ^ uRam0000000183290cb0 ^ 0x6f9c2692e487d265) + 0xc353cb87542809d9 ^
       0xab150c469e0304b;
  uRam0000000183290c28 =
       (uRam0000000183290c28 * 0x64722e3e1b5cd9df ^ uRam0000000183290c48) +
       (uRam0000000183290cb0 ^ 0x6f9c2692e487d265);
  uRam0000000183290cf8 = uRam0000000183290c28 ^ uRam0000000183290c48;
  uRam0000000183290b38 = 0xc353cb87542809d9;
  uVar5 = (~uRam0000000183290cb8 + 0xb66d47477a33c8e1) *
          ((uRam0000000183290cc0 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183290cc0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam0000000183290b18) + (uVar5 & uRam0000000183290b18);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290ba8 =
       func_0x00018b2f00e0((uVar5 | 0xb66d4747fe11ebc5) + (uVar5 & 0xb66d4747fe11ebc5));
  uVar4 = uRam0000000183290ba8 * -0x1b2e08ac1df3058b;
  uVar5 = uVar4 >> 1 | uVar4;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar4;
  uRam0000000183290b58 = (uRam0000000183290b58 ^ uVar4) + 0x4992b8b885cc3720 ^ 0x8431e251a2d7ca7b;
  uRam0000000183290b08 =
       (uRam0000000183290b78 * 0x6aff9ffd3d99857f ^ uRam0000000183290b58) + uVar4 ^
       uRam0000000183290b58;
  uRam0000000183290b78 = 0x4992b8b885cc3720;
  uVar5 = (~uRam0000000183290c18 + 0xb66d47477a33c8e1) *
          ((uRam0000000183290b70 ^ 0x84225cda) +
          (ulonglong)((uint)uRam0000000183290b70 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam0000000183290c50) + (uVar5 & uRam0000000183290c50);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290c20 =
       func_0x00018b2f00e0((uVar5 | 0xb66d4747fe11943a) + (uVar5 & 0xb66d4747fe11943a));
  uVar5 = uRam0000000183290c20 & 0xffffffffffffff80;
  uRam0000000183290b48 = uRam0000000183290cd8 ^ uVar5 ^ 0xb66d47477a3448df;
  uRam0000000183290c88 = (uRam0000000183290c88 ^ uVar5) + 0xb66d47477a3448df ^ 0x9527e239555abcba;
  uRam0000000183290c00 = (uRam0000000183290c00 * -0x54dff5ebacca04f3 ^ uRam0000000183290c88) + uVar5
  ;
  uRam0000000183290bb8 = uRam0000000183290c00 ^ uRam0000000183290c88;
  uRam0000000183290c38 = 0xb66d47477a3448df;
  uVar5 = (~uRam0000000183290cf0 + 0x4992b8b885cc3721) *
          ((uRam0000000183290bf0 ^ 0xb66d4747fe166bfa) +
          (uRam0000000183290bf0 & 0x366d4747fe166bfa) * 2);
  uVar5 = (uVar5 | uRam0000000183290b90) + (uVar5 & uRam0000000183290b90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290b30 =
       func_0x00018b2f00e0((uVar5 | 0xffffffff7bda5cda) + (uVar5 & 0xffffffff7bda5cda));
  uVar5 = uRam0000000183290b30 ^ 0xc78e77fe6ee504e0;
  uRam0000000183290c60 = uRam0000000183290c50 ^ uVar5 ^ 0x7fff;
  uRam0000000183290ca0 = (uRam0000000183290ca0 ^ uVar5) + 0x7fff ^ 0xe0325cd24c2fedb6;
  uRam0000000183290cd0 = (uRam0000000183290cd0 * -0x7962ddd29eb7e6a1 ^ uRam0000000183290ca0) + uVar5
  ;
  uRam0000000183290c70 = uRam0000000183290cd0 ^ uRam0000000183290ca0;
  uRam0000000183290c18 = 0x7fff;
  uVar5 = (uRam0000000183290bd8 ^ _UNK_181abcdf0) + uRam0000000183290c78 + 0x84222325;
  uVar4 = (uRam0000000183290c78 ^ _UNK_181abcdf8) + uRam0000000183290bd8 + 0xf914fe072f0ffe30;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290bd8 ^ _UNK_181abcdf0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183290c78 ^ _UNK_181abcdf8;
  uRam0000000183290b00 =
       func_0x00018b2f00e0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183290bd8 + 0xf914fe072f0ffe30) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183290c78 + 0x84222325));
  uVar5 = (uRam0000000183290b00 & 0x1fffffffffffff) - (uRam0000000183290b00 >> 1 & 0x5555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (uRam0000000183290b00 & 0x1fffffffffffff) >> 0x2c |
          ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam0000000183290b00 & 0x1fffffffffffff) << 0x14;
  uRam0000000183290c50 = (uRam0000000183290c50 ^ uVar5) + 0x6eb01f8d0f001d0 ^ 0xbb8d76ca9d7b6228;
  uRam0000000183290c30 = (uRam0000000183290c30 * 0x4c5d7bd9f093cf1b ^ uRam0000000183290c50) + uVar5;
  uRam0000000183290b60 = uRam0000000183290c30 ^ uRam0000000183290c50;
  uRam0000000183290c48 = 0x6eb01f8d0f001d0;
  uVar5 = (uRam0000000183290c28 ^ _UNK_181abce00) + uRam0000000183290bc8 + 0x84222325;
  uVar4 = (uRam0000000183290bc8 ^ _UNK_181abce08) + uRam0000000183290c28 + 0x3ca02cea45828068;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290c28 ^ _UNK_181abce00;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183290bc8 ^ _UNK_181abce08;
  uRam0000000183290b30 =
       func_0x00018b2f00e0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183290c28 + 0x3ca02cea45828068) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183290bc8 + 0x84222325));
  uRam0000000183290bf8 =
       (uRam0000000183290bf8 ^ uRam0000000183290b30) + 0xc35fd315ba7d7f98 ^ 0x22240d3a755683ca;
  uRam0000000183290c80 =
       (uRam0000000183290c80 * -0x25ab2963a6feb493 ^ uRam0000000183290bf8) + uRam0000000183290b30;
  uRam0000000183290cc8 = uRam0000000183290c80 ^ uRam0000000183290bf8;
  uRam0000000183290b20 = 0xc35fd315ba7d7f98;
  uRam0000000183290ba8 = func_0x00018b2f00e0(uRam0000000183290b00 + 0x5a3b60c192135fc3 ^ 0xa3);
  uVar5 = uRam0000000183290ba8 & 0xfffffffff;
  uRam0000000183290b78 = uRam0000000183290b00 ^ uVar5 ^ 0x3ca02cea45830067;
  uRam0000000183290c00 = (uRam0000000183290c00 ^ uVar5) + 0x3ca02cea45830067 ^ 0x55e67193e6f6f27c;
  uRam0000000183290b80 = (uRam0000000183290b80 * -0x730aadeeb6826e69 ^ uRam0000000183290c00) + uVar5
  ;
  uRam0000000183290ce8 = uRam0000000183290b80 ^ uRam0000000183290c00;
  uRam0000000183290c80 = 0x3ca02cea45830067;
  uVar5 = (uRam0000000183290b28 ^ _UNK_181abce10) + uRam0000000183290ce0 + 0x3ca02ceac1a12342;
  uVar4 = (uRam0000000183290ce0 ^ _UNK_181abce18) + uRam0000000183290b28 + 0xc35fd315ba7d7f98;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290b28 ^ _UNK_181abce10;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183290ce0 ^ _UNK_181abce18;
  uRam0000000183290b50 =
       func_0x00018b2f00e0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183290b28 + 0xc35fd315ba7d7f98) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183290ce0 + 0x3ca02ceac1a12342));
  uVar5 = uRam0000000183290b50 << 8 | uRam0000000183290b50 >> 0x38;
  uRam0000000183290ba8 = uRam0000000183290c98 ^ uVar5 ^ 0x7fff;
  uRam0000000183290c28 = (uRam0000000183290c28 ^ uVar5) + 0x7fff ^ 0x698b8a1ae08de8d;
  uRam0000000183290cf0 = (uRam0000000183290cf0 * 0xd87c481e3216c7f ^ uRam0000000183290c28) + uVar5;
  uRam0000000183290bd8 = uRam0000000183290cf0 ^ uRam0000000183290c28;
  uRam0000000183290bb0 = 0x7fff;
  uVar5 = (~uRam0000000183290cf8 + 0xc353cb87542809da) *
          ((uRam0000000183290b28 ^ 0xe9f77ff75bdbdc8a) +
          (uRam0000000183290b28 & 0x69f77ff75bdbdc8a) * 2);
  uVar5 = (uVar5 | uRam0000000183290cd0) + (uVar5 & uRam0000000183290cd0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290cd0 =
       func_0x00018b2f00e0((uVar5 | 0x2aa4b4700ff3d553) + (uVar5 & 0x2aa4b4700ff3d553));
  uVar4 = _UNK_181abce28;
  uVar5 = _UNK_181abce20;
  uVar2 = uRam0000000183290cd0 << 0x2a | uRam0000000183290cd0 >> 0x16;
  uRam0000000183290b80 = uRam0000000183290b80 ^ uVar2 ^ 0xad4b4b7f34220988;
  uRam0000000183290be0 = (uRam0000000183290be0 ^ uVar2) + 0xad4b4b7f34220988 ^ 0x123a7f17ee4efb00;
  uRam0000000183290bf8 = (uRam0000000183290bf8 * 0x60bb4712e6e5646b ^ uRam0000000183290be0) + uVar2;
  uRam0000000183290b78 = uRam0000000183290bf8 ^ uRam0000000183290be0;
  uRam0000000183290b90 = -0x52b4b480cbddf678;
  uVar2 = (uRam0000000183290c50 ^ _UNK_181abce20) + uRam0000000183290b60 + 0xe9f77ff75bdbdc8a;
  uVar7 = (uRam0000000183290b60 ^ _UNK_181abce28) + uRam0000000183290c50 + 0xc353cb87542809d9;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183290c50 ^ _UNK_181abce20;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290b60 ^ _UNK_181abce28;
  uRam0000000183290b40 =
       func_0x00018b2f00e0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam0000000183290c50 + 0xc353cb87542809d9) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam0000000183290b60 + 0xe9f77ff75bdbdc8a));
  uVar2 = (uRam0000000183290b40 ^ 0xf7fff7dff9ffff) & 0xffffffffffffff;
  uRam0000000183290c88 = (uRam0000000183290c88 ^ uVar2) + 0x2aa4b4708bd1f676 ^ 0x8487826a219777ca;
  uRam0000000183290cc0 = (uRam0000000183290cc0 * 0x671d34f612a48141 ^ uRam0000000183290c88) + uVar2;
  uRam0000000183290ca0 = uRam0000000183290cc0 ^ uRam0000000183290c88;
  uRam0000000183290c70 = 0x2aa4b4708bd1f676;
  uVar2 = (uRam0000000183290bf8 ^ uVar5) + uRam0000000183290b50 + 0xe9f77ff75bdbdc8a;
  uVar7 = (uRam0000000183290b50 ^ uVar4) + uRam0000000183290bf8 + 0xc353cb87542809d9;
  uVar5 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183290bf8 ^ uVar5;
  uVar4 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam0000000183290b50 ^ uVar4;
  uRam0000000183290bf8 =
       func_0x00018b2f00e0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183290bf8 + 0xc353cb87542809d9) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183290b50 + 0xe9f77ff75bdbdc8a));
  uVar5 = uRam0000000183290bf8 << 0x34 | uRam0000000183290bf8 >> 0xc;
  uRam0000000183290c78 = (uRam0000000183290c78 ^ uVar5) + 0xc1534b8754280989 ^ 0xba375642a867a3ca;
  uRam0000000183290b78 = (uRam0000000183290b78 * 0x426c1402d44b2e31 ^ uRam0000000183290c78) + uVar5;
  uRam0000000183290b98 = uRam0000000183290b78 ^ uRam0000000183290c78;
  uRam0000000183290bf0 = uRam0000000183290c00 ^ 0xc1534b8754280989;
  uRam0000000183290c18 = 0xc1534b8754280989;
  uVar5 = (~uRam0000000183290cb0 + 0x82a6970ea8501313) *
          ((uRam0000000183290cf0 ^ 0x2aa4b4700ff3d553) +
          (uRam0000000183290cf0 & 0x2aa4b4700ff3d553) * 2);
  uVar5 = (uVar5 | uRam0000000183290bb0) + (uVar5 & uRam0000000183290bb0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290bb8 =
       func_0x00018b2f00e0((uVar5 | 0xa802237ea7a3c641) + (uVar5 & 0xa802237ea7a3c641));
  uVar5 = uRam0000000183290bb8 ^ 0x2aa4b4708bd1f676;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar5;
  uRam0000000183290bd0 = uRam0000000183290cd8 ^ uVar5 ^ 0xad4b4b7f34220988;
  uRam0000000183290b18 = (uRam0000000183290b18 ^ uVar5) + 0xad4b4b7f34220988 ^ 0x5172d0a5f215888d;
  uRam0000000183290c78 = (uRam0000000183290c78 * -0x47569d162ce15139 ^ uRam0000000183290b18) + uVar5
  ;
  uRam0000000183290cb0 = uRam0000000183290c78 ^ uRam0000000183290b18;
  uRam0000000183290c60 = 0xad4b4b7f34220988;
  uVar5 = (~uRam0000000183290cf0 + 0xad4b4b7f34220989) *
          ((uRam0000000183290c18 ^ 0xad4b4b7fb0002aad) +
          (uRam0000000183290c18 & 0x2d4b4b7fb0002aad) * 2);
  uVar5 = (uVar5 | uRam0000000183290b08) + (uVar5 & uRam0000000183290b08);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290b58 =
       func_0x00018b2f00e0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam0000000183290c20 = uRam0000000183290b58 << 0x2d | uRam0000000183290b58 >> 0x13;
  uVar5 = uRam0000000183290c20 >> 1 | uRam0000000183290c20;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uRam0000000183290c20 =
       (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
       uRam0000000183290c20;
  uRam0000000183290be8 = uRam0000000183290be8 ^ uRam0000000183290c20 ^ 0x2c7694c196370010;
  uRam0000000183290c48 =
       (uRam0000000183290c48 * -0x78b7618252d5e4c3 ^ uRam0000000183290be8) + uRam0000000183290c20;
  uRam0000000183290be8 = uRam0000000183290c48 ^ uRam0000000183290be8;
  uRam0000000183290b78 = 0;
  uVar5 = (uRam0000000183290ca0 ^ 0x84225cda) + uRam0000000183290c88 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290ca0 ^ 0x84225cda;
  uVar4 = ((uRam0000000183290c88 + uRam0000000183290ca0) * 0x2000 |
          uRam0000000183290c88 + uRam0000000183290ca0 >> 0x33) ^ uRam0000000183290c88;
  uRam0000000183290b98 =
       func_0x00018b2f00e0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183290ca0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183290c88 + 0x84225cda));
  uRam0000000183290c88 = uRam0000000183290cb0 ^ uRam0000000183290b98 ^ 0x7fff;
  uRam0000000183290c50 = (uRam0000000183290c50 ^ uRam0000000183290b98) + 0x7fff ^ 0x110ac321937c0482
  ;
  uRam0000000183290b90 =
       (uRam0000000183290b90 * 0x5e84cbb0a4989d2d ^ uRam0000000183290c50) + uRam0000000183290b98;
  uRam0000000183290b60 = uRam0000000183290b90 ^ uRam0000000183290c50;
  uRam0000000183290b40 = 0x7fff;
  uVar5 = ((uRam0000000183290cb8 ^ 0xe9f77ff75bdbdc8a) +
          (uRam0000000183290cb8 & 0x69f77ff75bdbdc8a) * 2) * -0x8000;
  uVar5 = (uVar5 | uRam0000000183290cf0) + (uVar5 & uRam0000000183290cf0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290cf8 =
       func_0x00018b2f00e0((uVar5 | 0x16088008a4242375) + (uVar5 & 0x16088008a4242375));
  uRam0000000183290c28 =
       (uRam0000000183290c28 ^ (uRam0000000183290cf8 << 0x10 | uRam0000000183290cf8 >> 0x30)) +
       0x1608800820060050 ^ 0x17439878fb92d5ef;
  uRam0000000183290b48 = 0x1608800820060050;
  uVar5 = (uRam0000000183290b08 ^ _UNK_181abce30) + uRam0000000183290c98 + 0xe9f77ff75bdbdc8a;
  uVar4 = (uRam0000000183290c98 ^ _UNK_181abce38) + uRam0000000183290b08 + 0x1608800820060050;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290b08 ^ _UNK_181abce30;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183290c98 ^ _UNK_181abce38;
  uRam0000000183290bd0 =
       func_0x00018b2f00e0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183290b08 + 0x1608800820060050) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183290c98 + 0xe9f77ff75bdbdc8a));
  uRam0000000183290cc0 =
       uRam0000000183290cc0 ^ uRam0000000183290bd0 & 0xffffffffffffffc0 ^ 0x27ec1a0bd5752be1;
  uRam0000000183290bb8 =
       (uRam0000000183290bb8 * -0x3814e50db4f6d669 ^ uRam0000000183290cc0) +
       (uRam0000000183290bd0 & 0xffffffffffffffc0);
  uRam0000000183290c98 = uRam0000000183290bb8 ^ uRam0000000183290cc0;
  uRam0000000183290b88 = 0;
  uVar5 = (uRam0000000183290b00 ^ 0x84225cda) + uRam0000000183290ba0 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290b00 ^ 0x84225cda;
  uVar4 = ((uRam0000000183290ba0 + uRam0000000183290b00) * 0x2000 |
          uRam0000000183290ba0 + uRam0000000183290b00 >> 0x33) ^ uRam0000000183290ba0;
  uRam0000000183290bd8 =
       func_0x00018b2f00e0((uVar4 << 0x1d | uVar4 >> 0x23) - uRam0000000183290b00 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183290ba0 + 0x84225cda));
  uVar5 = uRam0000000183290bf0 ^ 0x7fff;
  uRam0000000183290ca8 = uRam0000000183290bc8 ^ uVar5 ^ 0x7fff;
  uRam0000000183290c58 = (uRam0000000183290c58 ^ uVar5) + 0x7fff ^ 0x4645568b5f9f7291;
  uRam0000000183290c18 = (uRam0000000183290c18 * 0x164e018bd48b42b5 ^ uRam0000000183290c58) + uVar5;
  uRam0000000183290c80 = uRam0000000183290c18 ^ uRam0000000183290c58;
  uRam0000000183290b00 = 0x7fff;
  uVar5 = (uRam0000000183290bf0 ^ _UNK_181abce40) + uRam0000000183290c10 + 0x49861f955fc3df00;
  uVar4 = (uRam0000000183290c10 ^ _UNK_181abce48) + uRam0000000183290bf0 + 0x49861f95dbe1fc25;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290bf0 ^ _UNK_181abce40;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183290c10 ^ _UNK_181abce48;
  uRam0000000183290c50 =
       func_0x00018b2f00e0((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183290bf0 + 0x49861f95dbe1fc25) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam0000000183290c10 + 0x49861f955fc3df00));
  uVar5 = uRam0000000183290c50 << 6 | uRam0000000183290c50 >> 0x3a;
  uRam0000000183290bc8 = uRam0000000183290bc8 ^ uVar5 ^ 0x443e1214b6ae2340;
  uRam0000000183290ca0 = (uRam0000000183290ca0 * 0x3a50f802f92113b1 ^ uRam0000000183290bc8) + uVar5;
  uRam0000000183290bd8 = uRam0000000183290ca0 ^ uRam0000000183290bc8;
  uRam0000000183290b28 = 0;
  uRam0000000183290c68 = func_0x00018b2f00e0(uRam0000000183290c98 + 0x4c007c56001dff ^ 0xc9);
  uRam0000000183290cd0 =
       (uRam0000000183290cd0 ^ uRam0000000183290c68 ^ 0x7fff) + 0x7fff ^ 0x20dce81c756ddc2;
  uRam0000000183290bb0 =
       (uRam0000000183290bb0 * 0x1bb1aa6682c649d5 ^ uRam0000000183290cd0) +
       (uRam0000000183290c68 ^ 0x7fff);
  uRam0000000183290bd0 = uRam0000000183290bb0 ^ uRam0000000183290cd0;
  uRam0000000183290b20 = 0x7fff;
  uVar5 = param_4 ^ 0x84222325 ^ uRam0000000183290cd0;
  lVar6 = (param_4 ^ 0x84222325) + uRam0000000183290cb8;
  uVar4 = uVar5 + lVar6;
  uVar2 = (uRam0000000183290cb8 ^ 0x7fff) + uRam0000000183290cd0 + 0x7fff;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5;
  uVar4 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183290cb8 ^ 0x7fff;
  uRam0000000183290ce0 =
       func_0x00018b2f00e0((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam0000000183290cd0 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar5 = (param_4 | 0x7fff) ^ uRam0000000183290ce0;
  uVar5 = param_4 ^ (uVar5 << 0x17 | uVar5 >> 0x29);
  uVar3 = (uint)param_4 & 0x7fff;
  uVar2 = (ulonglong)uVar3;
  uRam0000000183290b48 = (uRam0000000183290b48 ^ uVar5) + uVar2 ^ 0xb9676833246be2c6;
  uRam0000000183290c10 = (uRam0000000183290c10 * -0x46f4609759f5cfc7 ^ uRam0000000183290b48) + uVar5
  ;
  uRam0000000183290cd0 = uRam0000000183290c10 ^ uRam0000000183290b48;
  uVar4 = (ulonglong)param_3;
  uVar7 = uVar2 ^ 0x84222325;
  uVar5 = ((uRam0000000183290c08 ^ uVar7) +
          (ulonglong)((uint)uRam0000000183290c08 & (uint)uVar7) * 2) *
          (uVar4 - uRam0000000183290b50);
  uVar5 = (uVar5 | uRam0000000183290c38) + (uVar5 & uRam0000000183290c38);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290b58 = uVar2;
  uRam0000000183290c68 =
       func_0x00018b2f00e0((uVar7 ^ uVar4 | uVar5) +
                           (ulonglong)((uint)(uVar7 ^ uVar4) & (uint)uVar5));
  uVar5 = uRam0000000183290c68 << 0xd | uRam0000000183290c68 >> 0x33;
  uVar4 = (uVar2 + uVar4) - (ulonglong)((param_3 & uVar3) * 2);
  uRam0000000183290c58 = (uRam0000000183290c58 ^ uVar5) + uVar4 ^ 0x15f1cebe1dd0e302;
  uRam0000000183290c00 = (uRam0000000183290c00 * -0x1a80b7240d17c3e9 ^ uRam0000000183290c58) + uVar5
  ;
  uRam0000000183290c70 = uRam0000000183290c00 ^ uRam0000000183290c58;
  uVar4 = uVar4 & 0xffffffff;
  uRam0000000183290c48 = uVar4;
  lVar6 = func_0x00018b2f00e0(uRam0000000183290c20 ^ 0x32001eed006f93);
  uVar5 = lVar6 * -0x4704acf76382bec7 ^ 0xe61e9bf1;
  uRam0000000183290bc8 = (uRam0000000183290bc8 ^ uVar5) + 0xe79e9bf7 ^ 0x4fab27b64dda25e3;
  uRam0000000183290cf8 = (uRam0000000183290cf8 * -0x58ffa3ccfccb18b ^ uRam0000000183290bc8) + uVar5;
  uRam0000000183290bd8 = uRam0000000183290cf8 ^ uRam0000000183290bc8;
  uRam0000000183290c40 = 0xe79e9bf7;
  uVar5 = (~uRam0000000183290ca0 + 0xcb91d991) *
          ((uRam0000000183290ce0 ^ 0x49a7a1b5) +
          (ulonglong)((uint)uRam0000000183290ce0 & 0x49a7a1b5) * 2);
  uVar5 = (uVar5 | uRam0000000183290b20) + (uVar5 & uRam0000000183290b20);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x00018b2f00e0((uVar5 | 0x82367825) + (ulonglong)((uint)uVar5 & 0x82367825));
  uRam0000000183290cd8 =
       (uRam0000000183290cd8 ^ uVar5 & 0xfffffffff8000000) + 0x6145b00 ^ 0xdf1bbf001704611a;
  uRam0000000183290bc0 =
       (uRam0000000183290bc0 * -0x4b3fa8f33acf710b ^ uRam0000000183290cd8) +
       (uVar5 & 0xfffffffff8000000);
  uRam0000000183290bb8 = uRam0000000183290bc0 ^ uRam0000000183290cd8;
  uRam0000000183290b60 = 0x6145b00;
  uVar5 = (uRam0000000183290bb8 ^ _UNK_181abce50) + uRam0000000183290b00 + 0x842207f2;
  uVar2 = (uRam0000000183290b00 ^ _UNK_181abce58) + uRam0000000183290bb8 + 0x93503eb5;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290bb8 ^ _UNK_181abce50;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183290b00 ^ _UNK_181abce58;
  uRam0000000183290b68 =
       func_0x00018b2f00e0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183290bb8 + 0x93503eb5) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183290b00 + 0x842207f2));
  uVar5 = uRam0000000183290b68 - (uRam0000000183290b68 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = uRam0000000183290b68 ^ 0x93503eb5 ^
          (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3;
  uRam0000000183290bc8 = uRam0000000183290b28 ^ uVar5 ^ 0x9350638c;
  uRam0000000183290b50 = (uRam0000000183290be0 ^ uVar5) + 0x9350638c ^ 0x89f6eb0fba6457e9;
  uRam0000000183290be0 = (uRam0000000183290be0 * 0x3e41fde2545b212d ^ uRam0000000183290b50) + uVar5;
  uRam0000000183290b50 = uRam0000000183290be0 ^ uRam0000000183290b50;
  uRam0000000183290b48 = 0x9350638c;
  uRam0000000183290b08 = func_0x00018b2f00e0(uRam0000000183290bd0 + 0xeff6adcff6fff ^ 200);
  uVar5 = (uRam0000000183290b08 ^ 0x11b21200) * 0x7193099b6086bfb9;
  uRam0000000183290b18 = (uRam0000000183290b18 ^ uVar5) - 0x11b21200 ^ 0x42407a8263069c4b;
  uRam0000000183290cc8 = (uRam0000000183290cc8 * 0x7070535dc6a3666d ^ uRam0000000183290b18) + uVar5;
  uRam0000000183290cf8 = uRam0000000183290cc8 ^ uRam0000000183290b18;
  uRam0000000183290c20 = 0xee4dee00;
  uRam0000000183290c68 = func_0x00018b2f00e0(uRam0000000183290c78 + 0x12ff6d52008fff ^ 0x88);
  uVar5 = uRam0000000183290c68 - (uRam0000000183290c68 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam0000000183290c68;
  uRam0000000183290b50 = uRam0000000183290c48 ^ uVar5 ^ 0x11b236d7;
  uRam0000000183290cf8 = (uRam0000000183290cf8 ^ uVar5) + 0x11b236d7 ^ 0x632a63ba17119cd4;
  uRam0000000183290bb0 = (uRam0000000183290bb0 * -0x1e415633fc196711 ^ uRam0000000183290cf8) + uVar5
  ;
  uRam0000000183290bb8 = uRam0000000183290bb0 ^ uRam0000000183290cf8;
  uRam0000000183290c60 = 0x11b236d7;
  uVar5 = (uRam0000000183290c18 ^ _UNK_181abce60) + uRam0000000183290c50 + 0x959015f2;
  uVar2 = (uRam0000000183290c50 ^ _UNK_181abce68) + uRam0000000183290c18 + 0xee4dee00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290c18 ^ _UNK_181abce60;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183290c50 ^ _UNK_181abce68;
  uRam0000000183290b58 =
       func_0x00018b2f00e0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183290c18 + 0xee4dee00) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183290c50 + 0x959015f2));
  uVar5 = (uRam0000000183290b58 ^ 0x1079120a0fa6e200) & 0x7fffffffffffffff;
  uRam0000000183290bd0 = uRam0000000183290b70 ^ uVar5 ^ 0x1000024d7;
  uRam0000000183290ce0 = (uRam0000000183290ce0 ^ uVar5) + 0x1000024d7 ^ 0xcde724d070e5a722;
  uRam0000000183290c60 = (uRam0000000183290c60 * 0x2190a2ac31e38ff ^ uRam0000000183290ce0) + uVar5;
  uRam0000000183290bc0 = uRam0000000183290c60 ^ uRam0000000183290ce0;
  uRam0000000183290b50 = 0x24d7;
  uVar5 = (uRam0000000183290b80 ^ _UNK_181abce70) + uRam0000000183290c30 + 0x84222325;
  uVar2 = (uRam0000000183290c30 ^ _UNK_181abce78) + uRam0000000183290b80 + 0xf92df670;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290b80 ^ _UNK_181abce70;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183290c30 ^ _UNK_181abce78;
  uVar5 = func_0x00018b2f00e0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183290b80 + 0xf92df670)
                              ^ (uVar5 << 0x1d | uVar5 >> 0x23) -
                                (uRam0000000183290c30 + 0x84222325));
  uRam0000000183290bc0 =
       (uRam0000000183290bc0 ^ uVar5 & 0x7fffffffffffffff) - 0xf92df670 ^ 0x5e807e279dfcc512;
  uRam0000000183290be0 =
       (uRam0000000183290be0 * 0x1bd82e65dc04ccab ^ uRam0000000183290bc0) +
       (uVar5 & 0x7fffffffffffffff);
  uRam0000000183290c90 = uRam0000000183290be0 ^ uRam0000000183290bc0;
  uRam0000000183290c00 = uRam0000000183290b80 ^ 0xffffffff06d20990;
  uRam0000000183290b90 = 0x6d20990;
  uVar5 = (~uRam0000000183290bb0 + 0xf92df671) *
          ((uRam0000000183290cc8 ^ 0x842207f2) +
          (ulonglong)((uint)uRam0000000183290cc8 & 0x842207f2) * 2);
  uVar5 = (uVar5 | uRam0000000183290b88) + (uVar5 & uRam0000000183290b88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290cf0 =
       func_0x00018b2f00e0((uVar5 | 0x7d0ff182) + (ulonglong)((uint)uVar5 & 0x7d0ff182));
  uVar5 = (uRam0000000183290cf0 ^ 0x24d7) & 0x7fffffffffffffff;
  uRam0000000183290bc8 = uRam0000000183290b40 ^ uVar5 ^ 0xf92e1b47;
  uRam0000000183290cc0 = (uRam0000000183290cc0 ^ uVar5) + 0xf92e1b47 ^ 0x319923fe25e8ae7a;
  uRam0000000183290b30 = (uRam0000000183290b30 * -0x5bd68a685f5816f ^ uRam0000000183290cc0) + uVar5;
  uRam0000000183290b10 = uRam0000000183290b30 ^ uRam0000000183290cc0;
  uRam0000000183290c28 = 0xf92e1b47;
  uVar5 = (uRam0000000183290bd8 ^ _UNK_181abce80) + uRam0000000183290ce8 + 0x7d0c3862;
  uVar2 = (uRam0000000183290ce8 ^ _UNK_181abce88) + uRam0000000183290bd8 + 0x6d20990;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290bd8 ^ _UNK_181abce80;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183290ce8 ^ _UNK_181abce88;
  uRam0000000183290b48 =
       func_0x00018b2f00e0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183290bd8 + 0x6d20990) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183290ce8 + 0x7d0c3862));
  uVar5 = (uRam0000000183290b48 ^ 0x6a385c4d322d6f0) * -0x5cc7de24cde52f21 ^ 0xf92e1b47;
  uRam0000000183290be0 = uRam0000000183290c28 ^ uVar5 ^ 0x1000024d7;
  uRam0000000183290be8 = (uRam0000000183290be8 ^ uVar5) + 0x1000024d7 ^ 0xccf1880da73202bb;
  uRam0000000183290b08 = (uRam0000000183290b08 * 0x35eb5e2e7947b6f9 ^ uRam0000000183290be8) + uVar5;
  uRam0000000183290cb0 = uRam0000000183290b08 ^ uRam0000000183290be8;
  uRam0000000183290b40 = 0x24d7;
  uRam0000000183290ba0 = func_0x00018b2f00e0(uRam0000000183290cb0 ^ 0xff5effe352005717);
  uVar5 = ((uRam0000000183290ba0 ^ 0x6140000) & 0xfffffffffffc0000) << 0x22 |
          uRam0000000183290ba0 >> 0x1e;
  uRam0000000183290cd8 = uRam0000000183290bc0 ^ uVar5 ^ 0xedb2f6f7;
  uRam0000000183290b10 = (uRam0000000183290b10 ^ uVar5) + 0xedb2f6f7 ^ 0xca094c58157f2ddf;
  uRam0000000183290b90 = (uRam0000000183290b90 * -0x3699aa55bf066cc3 ^ uRam0000000183290b10) + uVar5
  ;
  uRam0000000183290b68 = uRam0000000183290b90 ^ uRam0000000183290b10;
  uRam0000000183290b70 = 0xedb2f6f7;
  uVar5 = (uRam0000000183290c68 ^ _UNK_181abce90) + uRam0000000183290b20 + 0x63bcb8d2;
  uVar2 = (uRam0000000183290b20 ^ _UNK_181abce98) + uRam0000000183290c68 + 0x6145b00;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290c68 ^ _UNK_181abce90;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183290b20 ^ _UNK_181abce98;
  uRam0000000183290b58 =
       func_0x00018b2f00e0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183290c68 + 0x6145b00) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183290b20 + 0x63bcb8d2));
  uRam0000000183290c38 =
       (uRam0000000183290c38 ^ uRam0000000183290b58 ^ 0x5802261bd2256f7) + 0x6141b00 ^
       0xdb7f4624111634a5;
  uRam0000000183290cb8 =
       (uRam0000000183290cb8 * 0x2ba956b6c6183b71 ^ uRam0000000183290c38) +
       (uRam0000000183290b58 ^ 0x5802261bd2256f7);
  uRam0000000183290b28 = uRam0000000183290cb8 ^ uRam0000000183290c38;
  uRam0000000183290ba8 = 0x6141b00;
  uVar5 = (uRam0000000183290c08 ^ _UNK_181abcea0) + uRam0000000183290c58 + 0x65a8e3d2;
  uVar2 = (uRam0000000183290c58 ^ _UNK_181abcea8) + uRam0000000183290c08 + 0xc283600;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290c08 ^ _UNK_181abcea0;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam0000000183290c58 ^ _UNK_181abcea8;
  uRam0000000183290b78 =
       func_0x00018b2f00e0((uVar2 << 0x1d | uVar2 >> 0x23) - (uRam0000000183290c08 + 0xc283600) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183290c58 + 0x65a8e3d2));
  uVar5 = uRam0000000183290c28 >> 1 | uRam0000000183290c28;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam0000000183290c28;
  uRam0000000183290b68 = uRam0000000183290cf0 ^ uVar5 ^ 0xedb2f6f7;
  uRam0000000183290c00 = (uRam0000000183290c00 ^ uVar5) + 0xedb2f6f7 ^ 0x6bb5299449436bd3;
  uRam0000000183290b18 = (uRam0000000183290b18 * 0x33c69e14f7684d57 ^ uRam0000000183290c00) + uVar5;
  uRam0000000183290cb0 = uRam0000000183290b18 ^ uRam0000000183290c00;
  uRam0000000183290b38 = 0xedb2f6f7;
  uVar5 = (~uRam0000000183290ba8 + 0xedb2f6f8) *
          ((uRam0000000183290cd8 ^ 0x6990d5d2) +
          (ulonglong)((uint)uRam0000000183290cd8 & 0x6990d5d2) * 2);
  uVar5 = (uVar5 | uRam0000000183290b88) + (uVar5 & uRam0000000183290b88);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290bb8 =
       func_0x00018b2f00e0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam0000000183290b88 = uRam0000000183290bb8 ^ 0xedb2f6f7;
  uRam0000000183290c88 = uRam0000000183290c88 ^ uRam0000000183290b88 ^ 0xee53e920fb710b43;
  uRam0000000183290cb8 =
       (uRam0000000183290cb8 * 0x1bd63e77edf148df ^ uRam0000000183290c88) + uRam0000000183290b88;
  uRam0000000183290ba0 = uRam0000000183290cb8 ^ uRam0000000183290c88;
  uRam0000000183290c20 = 0;
  uVar5 = (~uRam0000000183290b90 + 0x100000000) *
          ((uRam0000000183290bd0 ^ 0x63bcb8d2) +
          (ulonglong)((uint)uRam0000000183290bd0 & 0x63bcb8d2) * 2);
  uVar5 = (uVar5 | uRam0000000183290c78) + (uVar5 & uRam0000000183290c78);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290ba8 =
       func_0x00018b2f00e0((uVar5 | 0x9c43472d) + (ulonglong)((uint)uVar5 & 0x9c43472d));
  uRam0000000183290c28 =
       (uRam0000000183290c28 ^ uRam0000000183290ba8) + 0x18616408 ^ 0x57628c5ff2472985;
  uRam0000000183290cb8 =
       (uRam0000000183290cb8 * 0x404abfe6a8f1ad17 ^ uRam0000000183290c28) + uRam0000000183290ba8;
  uRam0000000183290c18 = uRam0000000183290cb8 ^ uRam0000000183290c28;
  uRam0000000183290b40 = 0x18616408;
  uRam0000000183290c28 = func_0x00018b2f00e0(uRam0000000183290b88 ^ 0xffc3ffb5b9ffb27d);
  uRam0000000183290c10 =
       uRam0000000183290c10 ^ uRam0000000183290c28 * -0x77af73f9c655b871 ^ 0xe3263f9e32f211ea;
  uRam0000000183290c68 =
       (uRam0000000183290c68 * 0x722883857b55e14b ^ uRam0000000183290c10) +
       uRam0000000183290c28 * -0x77af73f9c655b871;
  uRam0000000183290bf0 = uRam0000000183290c68 ^ uRam0000000183290c10;
  uRam0000000183290b10 = 0;
  uVar5 = (~uRam0000000183290bd0 + 0xe61e9bf2) *
          ((uRam0000000183290b18 ^ 0x623cb8d4) +
          (ulonglong)((uint)uRam0000000183290b18 & 0x623cb8d4) * 2);
  uVar5 = (uVar5 | uRam0000000183290bd0) + (uVar5 & uRam0000000183290bd0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290b88 =
       func_0x00018b2f00e0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam0000000183290bf0 =
       uRam0000000183290bf0 ^ uRam0000000183290b88 ^ 0xe61e9bf1 ^ 0x75331ea22fc6fa3;
  uRam0000000183290cb0 =
       (uRam0000000183290cb0 * 0x276c04895bcfc783 ^ uRam0000000183290bf0) +
       (uRam0000000183290b88 ^ 0xe61e9bf1);
  uRam0000000183290b78 = uRam0000000183290cb0 ^ uRam0000000183290bf0;
  uRam0000000183290ce8 = 0;
  uVar5 = (uRam0000000183290c00 ^ 0x842207f2) + uRam0000000183290b60 + 0x842207f2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam0000000183290c00 ^ 0x842207f2;
  uVar2 = ((uRam0000000183290b60 + uRam0000000183290c00) * 0x2000 |
          uRam0000000183290b60 + uRam0000000183290c00 >> 0x33) ^ uRam0000000183290b60;
  uRam0000000183290b40 =
       func_0x00018b2f00e0((uVar2 << 0x1d | uVar2 >> 0x23) - uRam0000000183290c00 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam0000000183290b60 + 0x842207f2));
  uVar5 = uRam0000000183290b40 & 0x7fffffffffffffff;
  uRam0000000183290c80 = uRam0000000183290ba8 ^ uVar5 ^ 0x24d7;
  uRam0000000183290b18 = (uRam0000000183290b18 ^ uVar5) + 0x24d7 ^ 0x873d81b615f93acb;
  uRam0000000183290bf8 = (uRam0000000183290bf8 * -0xe2c8fcf2b647e89 ^ uRam0000000183290b18) + uVar5;
  uRam0000000183290b98 = uRam0000000183290bf8 ^ uRam0000000183290b18;
  uRam0000000183290ce8 = 0x24d7;
  uVar5 = (~uRam0000000183290b58 + 0x24d8) *
          ((uVar4 ^ 0x84222325 ^ uRam0000000183290c80) +
          (ulonglong)((uint)uRam0000000183290c80 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam0000000183290bf8) + (uVar5 & uRam0000000183290bf8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam0000000183290c50 =
       func_0x00018b2f00e0((uVar4 ^ 0x842207f2 | uVar5) +
                           (ulonglong)((uint)(uVar4 ^ 0x842207f2) & (uint)uVar5));
  uRam0000000183290b60 = uVar4 ^ 0x24d7;
  uRam0000000183290b38 =
       (uRam0000000183290b38 ^ uVar4 ^ uRam0000000183290c50) + uRam0000000183290b60 ^
       0x187fddd0de0da35f;
  uRam0000000183290bf0 =
       (uRam0000000183290bf0 * 0x72c787b43dcd792d ^ uRam0000000183290b38) +
       (uVar4 ^ uRam0000000183290c50);
  uRam0000000183290bf8 = uRam0000000183290bf0 ^ uRam0000000183290b38;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b2e77cb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181abaf90 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRH (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18b2f0170, runtime 6ffff2f00170) =====

void FUN_18b2f0170(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018b2f01bb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181abcfd0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fx; aRI (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18b2f1180, runtime 6ffff2f01180) =====

void FUN_18b2f1180(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b2f1209 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181abd590 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRj (Lsixtwo/gH$th;)V (handler @ image 18b157f10, runtime 6ffff2d67f10) =====

void FUN_18b157f10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b157fda did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a6dd50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRk (Lsixtwo/gA;)V (handler @ image 18b2a7f60, runtime 6ffff2eb7f60) =====

void FUN_18b2a7f60(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b2a805f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ab0240 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRl ()Z (handler @ image 18b31a380, runtime 6ffff2f2a380) =====

void FUN_18b31a380(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b31a447 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ac1d80 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRm ()V (handler @ image 18b321280, runtime 6ffff2f31280) =====

void FUN_18b321280(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018b3212ad did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ac4050 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fx; aRn ()V (handler @ image 18b3217f0, runtime 6ffff2f317f0) =====

void FUN_18b3217f0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b3218ba did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ac42a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRo ()Z (handler @ image 18b327a10, runtime 6ffff2f37a10) =====

void FUN_18b327a10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b327ad1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ac6070 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRp ()Lsixtwo/fx$sT; (handler @ image 18b32d4f0, runtime 6ffff2f3d4f0) =====

void FUN_18b32d4f0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b32d5b1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ac7c10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRq ()Z (handler @ image 18b331b40, runtime 6ffff2f41b40) =====

void FUN_18b331b40(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b331c0a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181ac9050 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRr (Lsixtwo/fx$sT;)V (handler @ image 18b339c30, runtime 6ffff2f49c30) =====

void FUN_18b339c30(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b339cfd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181acbb00 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRs (Lsixtwo/fx$sT;)V (handler @ image 18b15fc50, runtime 6ffff2d6fc50) =====

void FUN_18b15fc50(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b15fd14 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a70630 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRt (Lsixtwo/fx$sT;)V (handler @ image 18b165360, runtime 6ffff2d75360) =====

void FUN_18b165360(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13db5,800);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b1653ba did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a720b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRu (Lsixtwo/fx$sT;)I (handler @ image 18b166600, runtime 6ffff2d76600) =====

void FUN_18b166600(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b1666c4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a72810 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRv ()Lnet/minecraft/class_1792; (handler @ image 18b16c420, runtime 6ffff2d7c420) =====

void FUN_18b16c420(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018b16c449 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a743a0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/fx; aRw (Ljava/util/List;)I (handler @ image 18b16cd50, runtime 6ffff2d7cd50) =====

void FUN_18b16cd50(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b16ce14 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a74760 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRx ()V (handler @ image 18b170b10, runtime 6ffff2d80b10) =====

void FUN_18b170b10(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b170bd1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a75940 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRy ()Ljava/lang/Boolean; (handler @ image 18b1746e0, runtime 6ffff2d846e0) =====

void FUN_18b1746e0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b1747a1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a769e0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/fx; aRz ()V (handler @ image 18b178360, runtime 6ffff2d88360) =====

void FUN_18b178360(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x13ddd,0x321);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018b178413 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181a78038 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



