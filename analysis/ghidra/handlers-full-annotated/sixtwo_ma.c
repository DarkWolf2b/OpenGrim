// ===== Lsixtwo/ma; _ad712ef9d12f3e19a897cb1a5926ec4a ()V (handler @ image 187838dd0, runtime 6fffef448dd0) =====

void FUN_187838dd0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187838eb8 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c9d198 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ma; cjA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18788ce10, runtime 6fffef49ce10) =====

void FUN_18788ce10(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018788ce4c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180ca9160 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ma; cjB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18788dd00, runtime 6fffef49dd00) =====

void FUN_18788dd00(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018788dd7d did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180ca96a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ma; cjC (IJ)I (handler @ image 1878907c0, runtime 6fffef4a07c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878907c0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar5 = (uRam000000018318f2a0 ^ _UNK_180cac400) + uRam000000018318f0c0 + 0x21e805815a06a50c;
  uVar6 = (uRam000000018318f0c0 ^ _UNK_180cac408) + uRam000000018318f2a0 + 0xc5afeb418b9b894e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318f2a0 ^ _UNK_180cac400;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018318f0c0 ^ _UNK_180cac408;
  uRam000000018318f198 =
       func_0x00018789b860((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018318f2a0 + 0xc5afeb418b9b894e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018318f0c0 + 0x21e805815a06a50c));
  uVar5 = uRam000000018318f198 >> 1 | uRam000000018318f198;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uRam000000018318f198;
  uRam000000018318f158 = (uRam000000018318f158 ^ uVar5) + 0xe5efefc1dfbf8f6f ^ 0xb392280cc423262f;
  uRam000000018318f288 = (uRam000000018318f288 * -0x5eebea8860a241b1 ^ uRam000000018318f158) + uVar5
  ;
  uRam000000018318ef60 = uRam000000018318f288 ^ uRam000000018318f158;
  uRam000000018318f1b0 = 0xe5efefc1dfbf8f6f;
  uRam000000018318f230 = func_0x00018789b860(lRam000000018318f2e8 + 0x7f69eed3a8d7b6eaU ^ 0x7b);
  uRam000000018318f0b8 =
       (uRam000000018318f0b8 ^ uRam000000018318f230 * 0x2ad28f66b1e9e155) + 0x1d13d880d19bc9ce ^
       0x180de1f25f22c1d5;
  uRam000000018318f028 =
       (uRam000000018318f028 * 0x87ab9ad98c113ab ^ uRam000000018318f0b8) +
       uRam000000018318f230 * 0x2ad28f66b1e9e155;
  uRam000000018318f280 = uRam000000018318f028 ^ uRam000000018318f0b8;
  uRam000000018318f228 = 0x1d13d880d19bc9ce;
  uVar5 = func_0x00018789b860(uRam000000018318f238 ^ 0xfeaa02a5daeae390);
  uRam000000018318ef40 = (uRam000000018318ef40 ^ uVar5) + 0x7f0214f125310281 ^ 0x82c256e8f3a7fac1;
  uRam000000018318f1f8 = (uRam000000018318f1f8 * -0x6242b68b75b5835d ^ uRam000000018318ef40) + uVar5
  ;
  uRam000000018318f0e0 = uRam000000018318f1f8 ^ uRam000000018318ef40;
  uRam000000018318efb8 = 0x7f0214f125310281;
  uRam000000018318ef10 = func_0x00018789b860(uRam000000018318f098 + 0x59e94d1a2e4e47f ^ 0x6c);
  uRam000000018318f138 = uRam000000018318f0f8 ^ uRam000000018318ef10 ^ 0x80fdeb0edacf7d7e;
  uRam000000018318f2a8 =
       (uRam000000018318f2a8 ^ uRam000000018318ef10) + 0x80fdeb0edacf7d7e ^ 0x5e999dafee66e479;
  uRam000000018318f108 =
       (uRam000000018318f108 * -0x6aae621a9fa6d90b ^ uRam000000018318f2a8) + uRam000000018318ef10;
  uRam000000018318f268 = uRam000000018318f108 ^ uRam000000018318f2a8;
  uRam000000018318ef38 = -0x7f0214f125308282;
  uRam000000018318f148 = func_0x00018789b860(uRam000000018318efb8 ^ 0xa8a31d242aa734e1);
  uVar5 = uRam000000018318f148 ^ 0xb0627e5b39963aff;
  uRam000000018318f030 = uRam000000018318f248 ^ uVar5 ^ 0x7fff;
  uRam000000018318f0f0 = (uRam000000018318f0f0 ^ uVar5) + 0x7fff ^ 0x6d1ea22b13e5f48e;
  uRam000000018318f128 = (uRam000000018318f128 * 0x2ea3c8b36c9a0463 ^ uRam000000018318f0f0) + uVar5;
  uRam000000018318ef28 = uRam000000018318f128 ^ uRam000000018318f0f0;
  uRam000000018318ef18 = 0x7fff;
  uVar5 = (~uRam000000018318efa0 + 0x8d1e9e1e2887f681) *
          ((uRam000000018318f060 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018318f060 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018318ef58) + (uVar5 & uRam000000018318ef58);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318f188 =
       func_0x00018789b860((uVar5 | 0x8d1e9e1eaca5d5a5) + (uVar5 & 0x8d1e9e1eaca5d5a5));
  uRam000000018318f2d0 =
       (uRam000000018318f2d0 ^ uRam000000018318f188) + 0x72e161e1d7780980 ^ 0xef8371cfcfb1b69f;
  uRam000000018318f0f8 =
       (uRam000000018318f0f8 * 0x12fa8a17ab4e1d97 ^ uRam000000018318f2d0) + uRam000000018318f188;
  uRam000000018318f040 = uRam000000018318f0f8 ^ uRam000000018318f2d0;
  uRam000000018318f268 = 0x72e161e1d7780980;
  uVar5 = (~uRam000000018318f048 + 0x8d1e9e1e2887f681) *
          ((uRam000000018318f160 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018318f160 & 0x84225cda) * 2);
  uVar5 = (uVar5 | 0x72e161e1d7780980) + (uVar5 & 0x72e161e1d7780980);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318f248 =
       func_0x00018789b860((uVar5 | 0x8d1e9e1eaca5aa5a) + (uVar5 & 0x8d1e9e1eaca5aa5a));
  uVar5 = (ulonglong)(((uint)uRam000000018318f248 ^ 0x147f400) >> 10 & 0x7fff);
  uRam000000018318f060 = uRam000000018318f240 ^ uVar5 ^ 0x8d1e9e1e2888767f;
  uRam000000018318f2c0 = (uRam000000018318f2c0 ^ uVar5) + 0x8d1e9e1e2888767f ^ 0x727694b14c43a44f;
  uRam000000018318f290 = (uRam000000018318f290 * 0x9bd29f9e5528763 ^ uRam000000018318f2c0) + uVar5;
  uRam000000018318ef88 = uRam000000018318f290 ^ uRam000000018318f2c0;
  uRam000000018318ef30 = uRam000000018318f220 ^ 0x8d1e9e1e2888767f;
  uRam000000018318f0e0 = 0x8d1e9e1e2888767f;
  uVar5 = (~uRam000000018318f210 + 0x72e161e1d7780981) *
          ((uRam000000018318f1a8 ^ 0x8d1e9e1eacaa555a) +
          (uRam000000018318f1a8 & 0xd1e9e1eacaa555a) * 2);
  uVar5 = (uVar5 | uRam000000018318f2d8) + (uVar5 & uRam000000018318f2d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318f198 =
       func_0x00018789b860((uVar5 | 0xffffffff7bd25cda) + (uVar5 & 0xffffffff7bd25cda));
  uVar5 = (uRam000000018318f198 ^ 0x1d80fe9c44edb680) * 0x350bbd084d554457;
  uRam000000018318f2c0 = uRam000000018318f230 ^ uVar5 ^ 0x7fff;
  uRam000000018318eff0 = (uRam000000018318eff0 ^ uVar5) + 0x7fff ^ 0xaaeee70e0feaedec;
  uRam000000018318f0a8 = (uRam000000018318f0a8 * -0x47f389ceac6aa0cf ^ uRam000000018318eff0) + uVar5
  ;
  uRam000000018318f100 = uRam000000018318f0a8 ^ uRam000000018318eff0;
  uRam000000018318f010 = 0x7fff;
  uVar5 = (uRam000000018318f050 ^ _UNK_180cac410) + uRam000000018318f1e8 + 0x84225cda;
  uVar6 = (uRam000000018318f1e8 ^ _UNK_180cac418) + uRam000000018318f050 + 0xcf216cb84fd933a0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318f050 ^ _UNK_180cac410;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018318f1e8 ^ _UNK_180cac418;
  uRam000000018318f140 =
       func_0x00018789b860((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018318f050 + 0xcf216cb84fd933a0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318f1e8 + 0x84225cda));
  uVar5 = uRam000000018318f140 ^ 0xcf216cb84fd933a0;
  uRam000000018318f048 = uRam000000018318eff0 ^ uVar5 ^ 0xcf216cb84fd9b39f;
  uRam000000018318f1c0 = (uRam000000018318f1c0 ^ uVar5) + 0xcf216cb84fd9b39f ^ 0x7c7f54727b1df164;
  uRam000000018318f2b8 = (uRam000000018318f2b8 * 0x53e2f81f9f1a17fb ^ uRam000000018318f1c0) + uVar5;
  uRam000000018318f028 = uRam000000018318f2b8 ^ uRam000000018318f1c0;
  uRam000000018318f120 = -0x30de9347b0264c61;
  uRam000000018318f020 = func_0x00018789b860(uRam000000018318f010 + 0x40a3848983cb0137 ^ 0xc9);
  uVar5 = ~uRam000000018318f020 & 0xe5efefc1dfbf8f6f;
  uRam000000018318ef10 = uRam000000018318f260 ^ uVar5 ^ 0x303c842b15b593d;
  uRam000000018318f1c8 = (uRam000000018318f1c8 ^ uVar5) + 0x303c842b15b593d ^ 0x9ed074e608f0d6d5;
  uRam000000018318ef90 = (uRam000000018318ef90 * -0x7f1d27e9639a26d3 ^ uRam000000018318f1c8) + uVar5
  ;
  uRam000000018318ef50 = uRam000000018318ef90 ^ uRam000000018318f1c8;
  uRam000000018318f0f0 = uRam000000018318f250 ^ 0x303c842b15b593d;
  uRam000000018318efb0 = 0x303c842b15b593d;
  uVar5 = (~uRam000000018318f270 + 0x1d13d880d19bc9cf) *
          ((uRam000000018318f200 ^ 0xe5efefc15b9dac4a) +
          (uRam000000018318f200 & 0x65efefc15b9dac4a) * 2);
  uVar5 = (uVar5 | uRam000000018318f0c8) + (uVar5 & uRam000000018318f0c8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318ef90 =
       func_0x00018789b860((uVar5 | 0xf8fc37418a066584) + (uVar5 & 0xf8fc37418a066584));
  uRam000000018318f220 =
       (uRam000000018318f220 ^ uRam000000018318ef90 ^ 0xe5efefc1dfbf8f6f) + 0x503c880d19b894e ^
       0xa4cc7e35b590ba7;
  uRam000000018318f0b8 =
       (uRam000000018318f0b8 * 0x3e5d8988305dfa53 ^ uRam000000018318f220) +
       (uRam000000018318ef90 ^ 0xe5efefc1dfbf8f6f);
  uRam000000018318f290 = uRam000000018318f0b8 ^ uRam000000018318f220;
  uRam000000018318f0a0 = 0x503c880d19b894e;
  uVar5 = (~uRam000000018318efc8 + 0xa079101a337129d) *
          ((uRam000000018318f260 ^ 0xf8fc37418a066584) +
          (uRam000000018318f260 & 0x78fc37418a066584) * 2);
  uVar5 = (uVar5 | uRam000000018318f1f0) + (uVar5 & uRam000000018318f1f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318f060 =
       func_0x00018789b860((uVar5 | 0xf2fba64029317718) + (uVar5 & 0xf2fba64029317718));
  uVar5 = uRam000000018318f060 ^ 0xf8fc37410e2446a1;
  uRam000000018318efd8 = uRam000000018318f218 ^ uVar5 ^ 0x303c842b15b593d;
  uRam000000018318f010 = (uRam000000018318f010 ^ uVar5) + 0x303c842b15b593d ^ 0xd4922f36c680064e;
  uRam000000018318f048 = (uRam000000018318f048 * 0x52502785efca342b ^ uRam000000018318f010) + uVar5;
  uRam000000018318f248 = uRam000000018318f048 ^ uRam000000018318f010;
  uRam000000018318f1a8 = 0x303c842b15b593d;
  uVar5 = (uRam000000018318f298 ^ _UNK_180cac420) + uRam000000018318f1c0 + 0x303c84235797a18;
  uVar6 = (uRam000000018318f1c0 ^ _UNK_180cac428) + uRam000000018318f298 + 0x303c842b15b593d;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318f298 ^ _UNK_180cac420;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018318f1c0 ^ _UNK_180cac428;
  uRam000000018318f0d0 =
       func_0x00018789b860((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018318f298 + 0x303c842b15b593d) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018318f1c0 + 0x303c84235797a18));
  uRam000000018318f2d8 = (uRam000000018318f0d0 ^ 0x101080011020120) & 0x303c842b15b5920;
  uRam000000018318ef28 = uRam000000018318ef28 ^ uRam000000018318f2d8 ^ 0xd7c8c9d7e999f1c2;
  uRam000000018318f120 =
       (uRam000000018318f120 * 0x7da8312ea839d199 ^ uRam000000018318ef28) + uRam000000018318f2d8;
  uRam000000018318f100 = uRam000000018318f120 ^ uRam000000018318ef28;
  uRam000000018318ef70 = 0;
  uVar5 = (uRam000000018318f138 ^ 0x84225cda) + uRam000000018318ef00 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318f138 ^ 0x84225cda;
  uVar6 = ((uRam000000018318ef00 + uRam000000018318f138) * 0x2000 |
          uRam000000018318ef00 + uRam000000018318f138 >> 0x33) ^ uRam000000018318ef00;
  uRam000000018318f188 =
       func_0x00018789b860((uVar6 << 0x1d | uVar6 >> 0x23) - uRam000000018318f138 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318ef00 + 0x84225cda));
  uVar5 = uRam000000018318f188 & 0x7fffffffffffffff;
  uRam000000018318ef00 = uRam000000018318f1c8 ^ uVar5 ^ 0x7fff;
  uRam000000018318f038 = (uRam000000018318f038 ^ uVar5) + 0x7fff ^ 0xfa5e9955aa77c490;
  uRam000000018318f088 = (uRam000000018318f088 * 0x5d54709641ddc329 ^ uRam000000018318f038) + uVar5;
  uRam000000018318f040 = uRam000000018318f088 ^ uRam000000018318f038;
  uRam000000018318f1e0 = 0x7fff;
  uVar5 = ~uRam000000018318f0e8 *
          ((uRam000000018318f1c8 ^ uVar5 ^ 0xe5efefc15b9dd3b5) +
          (uRam000000018318ef00 & 0x65efefc15b9dac4a) * 2);
  uVar5 = (uVar5 | uRam000000018318ef50) + (uVar5 & uRam000000018318ef50);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318ef98 =
       func_0x00018789b860((uVar5 | 0x1a10103ea46253b5) + (uVar5 & 0x1a10103ea46253b5));
  uRam000000018318f0e0 =
       (uRam000000018318f0e0 ^ uRam000000018318ef98 ^ 0x1a10103e20407090) + 0x1a10103e20407090 ^
       0x2cc7de8c83ec9875;
  uRam000000018318f0b8 =
       (uRam000000018318f0b8 * 0x5b69204fafcf835d ^ uRam000000018318f0e0) +
       (uRam000000018318ef98 ^ 0x1a10103e20407090);
  uRam000000018318f210 = uRam000000018318f0b8 ^ uRam000000018318f0e0;
  uRam000000018318f2b0 = 0x1a10103e20407090;
  uRam000000018318f0e8 = func_0x00018789b860(uRam000000018318f1b8 + 0x21007c1affddff ^ 0x6f);
  uVar5 = uRam000000018318f0e8 - (uRam000000018318f0e8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (uint)bVar1 + (uint)bVar1 ^ uRam000000018318f0e8;
  uRam000000018318f188 = uRam000000018318f188 ^ uVar5 ^ 0xf56018cde8cd1d46;
  uRam000000018318f2b0 = (uRam000000018318f2b0 * -0x65cdb0fb82c0ba3f ^ uRam000000018318f188) + uVar5
  ;
  uRam000000018318f1f8 = uRam000000018318f2b0 ^ uRam000000018318f188;
  uRam000000018318f180 = 0;
  uRam000000018318f280 = func_0x00018789b860(uRam000000018318ef08 ^ 0x33ff8345ffe1fc);
  uVar5 = (uRam000000018318f280 ^ 0x7fff) >> 1;
  uVar6 = (ulonglong)(((uRam000000018318f280 ^ 0x7fff) & 1) != 0) << 0x3f;
  uVar3 = uVar5 | uVar6;
  uVar5 = uVar3 - ((uVar5 & 0xaaaaaaaaaaaaaaaa | uVar6) >> 1);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar3 ^
          0x7fff;
  uRam000000018318f140 = uRam000000018318f298 ^ uVar5 ^ 0x7fff;
  uRam000000018318f248 = (uRam000000018318f248 ^ uVar5) + 0x7fff ^ 0xca26f4ef88768e39;
  uRam000000018318f100 = (uRam000000018318f100 * -0x47d73673b513c67b ^ uRam000000018318f248) + uVar5
  ;
  uRam000000018318ef00 = uRam000000018318f100 ^ uRam000000018318f248;
  uRam000000018318efe8 = 0x7fff;
  uVar6 = (ulonglong)(param_4 & 0x7fff) ^ 0x84222325;
  uVar5 = ((uRam000000018318efb8 ^ uVar6) +
          (ulonglong)((uint)uRam000000018318efb8 & (uint)uVar6) * 2) *
          (param_3 - uRam000000018318f148);
  uVar5 = (uVar5 | uRam000000018318f1f0) + (uVar5 & uRam000000018318f1f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar6 = uVar6 ^ param_3;
  uRam000000018318f0e0 =
       func_0x00018789b860((uVar6 | uVar5) + (ulonglong)((uint)uVar6 & (uint)uVar5));
  uVar5 = uRam000000018318f0e0 - (uRam000000018318f0e0 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam000000018318f0e0) >> 4 | uRam000000018318f0e0 << 0x3c;
  uVar3 = (ulonglong)(param_4 & 0x7fff ^ param_3);
  uRam000000018318ef98 = (uRam000000018318ef98 ^ uVar5) + uVar3 ^ 0x666b5a5d50fbd593;
  uRam000000018318f1f0 = (uRam000000018318f1f0 * -0x3e31be6a0bfe8bad ^ uRam000000018318ef98) + uVar5
  ;
  uRam000000018318f078 = uRam000000018318f1f0 ^ uRam000000018318ef98;
  uRam000000018318f290 = uVar3;
  uRam000000018318f138 = func_0x00018789b860(uRam000000018318eff0 + 0xffd6002e3500a8ff ^ 0x39);
  uRam000000018318f080 =
       (uRam000000018318f080 ^ uRam000000018318f138 ^ 0x31705037) + 0x73fb7977 ^ 0xa8f8e18f3ff474bb;
  uRam000000018318f050 =
       (uRam000000018318f050 * -0x678e221fc6fb1143 ^ uRam000000018318f080) +
       (uRam000000018318f138 ^ 0x31705037);
  uRam000000018318f128 = uRam000000018318f050 ^ uRam000000018318f080;
  uRam000000018318efa8 = 0x73fb7977;
  uRam000000018318f1d0 = func_0x00018789b860(uRam000000018318f0b0 ^ 0xffaafff796ff97d7);
  uRam000000018318f088 =
       (uRam000000018318f088 ^ uRam000000018318f1d0 & 0xffffffffffffff) + 0x8cda8cde ^
       0x67939fa2148e44bb;
  uRam000000018318f1b8 =
       (uRam000000018318f1b8 * -0x59a302e6eb9f19c3 ^ uRam000000018318f088) +
       (uRam000000018318f1d0 & 0xffffffffffffff);
  uRam000000018318f1a8 = uRam000000018318f1b8 ^ uRam000000018318f088;
  uRam000000018318ef18 = 0x8cda8cde;
  uVar5 = (~uRam000000018318f000 + 0x9a6868c) *
          ((uRam000000018318ef78 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018318ef78 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018318ef90) + (uVar5 & uRam000000018318ef90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318ef20 =
       func_0x00018789b860((uVar5 | 0x8d84a5ae) + (ulonglong)((uint)uVar5 & 0x8d84a5ae));
  uRam000000018318f1e8 =
       (uRam000000018318f1e8 ^ uRam000000018318ef20) - 0x9a6868b ^ 0xe2f0b6ff9bab7177;
  uRam000000018318f240 =
       (uRam000000018318f240 * -0x4028c3750f139fa3 ^ uRam000000018318f1e8) + uRam000000018318ef20;
  uRam000000018318f0d8 = uRam000000018318f240 ^ uRam000000018318f1e8;
  uRam000000018318ef68 = 0xf6597975;
  uRam000000018318f298 = func_0x00018789b860(uRam000000018318f098 ^ 0x9e0084b6ff83ba);
  uRam000000018318f098 = uRam000000018318f0b8 ^ uRam000000018318f298 ^ 0x9a6a272;
  uRam000000018318f278 =
       (uRam000000018318f278 ^ uRam000000018318f298) + 0x9a6a272 ^ 0xaa80f07265ed916d;
  uRam000000018318efa0 =
       (uRam000000018318efa0 * 0x7effe5f3c30cd3d5 ^ uRam000000018318f278) + uRam000000018318f298;
  uRam000000018318f2a0 = uRam000000018318efa0 ^ uRam000000018318f278;
  uRam000000018318efc0 = uRam000000018318f088 ^ 0x9a6a272;
  uRam000000018318f200 = 0x9a6a272;
  uVar5 = (~uRam000000018318f2e0 + 0xf6597976) *
          ((uRam000000018318f2d0 ^ 0x8d848157) +
          (ulonglong)((uint)uRam000000018318f2d0 & 0x8d848157) * 2);
  uVar5 = (uVar5 | uRam000000018318f1a0) + (uVar5 & uRam000000018318f1a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318f208 =
       func_0x00018789b860((uVar5 | 0x7bddf822) + (ulonglong)((uint)uVar5 & 0x7bddf822));
  uRam000000018318eff8 = uRam000000018318f210 ^ uRam000000018318f208 ^ 0x100001be7;
  uRam000000018318f038 =
       (uRam000000018318f038 ^ uRam000000018318f208) + 0x100001be7 ^ 0xbd4dee900b9b8198;
  uRam000000018318ef20 =
       (uRam000000018318ef20 * -0x7c077103450039b ^ uRam000000018318f038) + uRam000000018318f208;
  uRam000000018318efd0 = uRam000000018318ef20 ^ uRam000000018318f038;
  uRam000000018318f2a0 = 0x1be7;
  uRam000000018318f2c8 = func_0x00018789b860(uRam000000018318f250 + 0xff47ffab3e0053ff ^ 9);
  uVar5 = uRam000000018318f2c8 ^ 0xb7b2c8d8000;
  uRam000000018318f1f8 = uRam000000018318f160 ^ uVar5 ^ 0x69569be7;
  uRam000000018318f2b0 = (uRam000000018318f2b0 ^ uVar5) + 0x69569be7 ^ 0x107463f15dffe401;
  uRam000000018318ef40 = (uRam000000018318ef40 * -0x29c5ea791d180c9b ^ uRam000000018318f2b0) + uVar5
  ;
  uRam000000018318efc8 = uRam000000018318ef40 ^ uRam000000018318f2b0;
  uRam000000018318f268 = 0x69569be7;
  uRam000000018318f0a0 = func_0x00018789b860(uRam000000018318f1f0 ^ 0xfff7ffcb4200c4ec);
  uVar5 = uRam000000018318f0a0 & 0x1ffffffffffff;
  uRam000000018318f0f0 = uRam000000018318efe0 ^ uVar5 ^ 0x100001be7;
  uRam000000018318f150 = (uRam000000018318f150 ^ uVar5) + 0x100001be7 ^ 0x57d3046cfa1a1d4;
  uRam000000018318f160 = (uRam000000018318f160 * 0x65b3474c452e36a5 ^ uRam000000018318f150) + uVar5;
  uRam000000018318f2a0 = uRam000000018318f160 ^ uRam000000018318f150;
  uRam000000018318ef78 = 0x1be7;
  uRam000000018318f0d8 = func_0x00018789b860(uRam000000018318f280 + 0x5c0058e2ffbfff ^ 0xbb);
  uVar5 = uRam000000018318f0d8 ^ 0x5d62df00;
  uVar6 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar5) <<
          8 | uRam000000018318f0d8 >> 0x38;
  uRam000000018318f0f0 = (uRam000000018318f0f0 ^ uVar5) - 0x5d62df00 ^ 0xefac2b5c43cdba0;
  uRam000000018318f048 = (uRam000000018318f048 * -0x7af1d43cc4057779 ^ uRam000000018318f0f0) + uVar5
  ;
  uRam000000018318f2b0 = uRam000000018318f048 ^ uRam000000018318f0f0;
  uRam000000018318ef40 = 0xa29d2100;
  uRam000000018318f0c8 = func_0x00018789b860(uRam000000018318f100 + 0x18003bbe003cff ^ 0x25);
  uVar6 = uRam000000018318f0c8 ^ 0xfffffbe7;
  uVar5 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar6 ^
          0x5d62fae7;
  uRam000000018318f050 = uRam000000018318f1b8 ^ uVar5 ^ 0x100001be7;
  uRam000000018318f010 = (uRam000000018318f010 ^ uVar5) + 0x100001be7 ^ 0x99656f1640d7d2e3;
  uRam000000018318f128 = (uRam000000018318f128 * -0x71cd7082ebaf6157 ^ uRam000000018318f010) + uVar5
  ;
  uRam000000018318ef30 = uRam000000018318f128 ^ uRam000000018318f010;
  uRam000000018318f0c0 = uRam000000018318ef58 ^ 0x100001be7;
  uRam000000018318f120 = 0x1be7;
  uVar5 = (~uRam000000018318ef08 + 0x8cda8cdf) *
          ((uRam000000018318f170 ^ 0xf7d95a52) +
          (ulonglong)((uint)uRam000000018318f170 & 0xf7d95a52) * 2);
  uVar5 = (uVar5 | uRam000000018318f2e0) + (uVar5 & uRam000000018318f2e0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318f0a8 =
       func_0x00018789b860((uVar5 | 0x7b03d68c) + (ulonglong)((uint)uVar5 & 0x7b03d68c));
  uRam000000018318f238 = uRam000000018318f2a8 ^ uRam000000018318f0a8 ^ 0x100d60655;
  uRam000000018318f070 =
       (uRam000000018318f070 ^ uRam000000018318f0a8) + 0x100d60655 ^ 0x44cc6f3d7774a7ce;
  uRam000000018318ef10 =
       (uRam000000018318ef10 * 0x7b8041bd552d0485 ^ uRam000000018318f070) + uRam000000018318f0a8;
  uRam000000018318f008 = uRam000000018318ef10 ^ uRam000000018318f070;
  uRam000000018318f168 = 0xd60655;
  uVar5 = (uRam000000018318f088 ^ _UNK_180cac430) + uRam000000018318f220 + 0xf7d95a52;
  uVar6 = (uRam000000018318f220 ^ _UNK_180cac438) + uRam000000018318f088 + 0x8cda8cde;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318f088 ^ _UNK_180cac430;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018318f220 ^ _UNK_180cac438;
  uRam000000018318ef58 =
       func_0x00018789b860((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018318f088 + 0x8cda8cde) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318f220 + 0xf7d95a52));
  uVar6 = uRam000000018318ef58 * 0x5be94b7f390dbc87;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar6;
  uRam000000018318f0b8 = (uRam000000018318f0b8 ^ uVar6) + 0xff21f5a9 ^ 0xd504152eb9d8c156;
  uRam000000018318ef08 = (uRam000000018318ef08 * 0x65b353c942015015 ^ uRam000000018318f0b8) + uVar6;
  uRam000000018318f1b8 = uRam000000018318ef08 ^ uRam000000018318f0b8;
  uRam000000018318efa8 = 0xff21f5a9;
  uVar5 = (~uRam000000018318f058 + 0x8cda8cdf) *
          ((uRam000000018318ef58 ^ 0xf7d95a52) +
          (ulonglong)((uint)uRam000000018318ef58 & 0xf7d95a52) * 2);
  uVar5 = (uVar5 | uRam000000018318f130) + (uVar5 & uRam000000018318f130);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318f058 =
       func_0x00018789b860((uVar5 | 0x7b03d68c) + (ulonglong)((uint)uVar5 & 0x7b03d68c));
  uVar5 = (uRam000000018318f058 ^ 0x8cda8c00) & 0xfffffffffffffe00;
  uRam000000018318f1d0 = (uRam000000018318f1d0 ^ uVar5) + 0xda0856 ^ 0x22ed3cc1ba534502;
  uRam000000018318f1c0 = (uRam000000018318f1c0 * 0x22694ff33c08df3 ^ uRam000000018318f1d0) + uVar5;
  uRam000000018318f0f8 = uRam000000018318f1c0 ^ uRam000000018318f1d0;
  uRam000000018318f260 = 0xda0856;
  uVar5 = (~uRam000000018318ef70 + 0xd60656) *
          ((uRam000000018318ef90 ^ 0x84f42570) +
          (ulonglong)((uint)uRam000000018318ef90 & 0x84f42570) * 2);
  uVar5 = (uVar5 | uRam000000018318f048) + (uVar5 & uRam000000018318f048);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318f130 =
       func_0x00018789b860((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam000000018318f108 = uRam000000018318f130 & 0x7fffffffffffffff;
  uRam000000018318efe8 = uRam000000018318efe8 ^ uRam000000018318f108 ^ 0xe09233edcbbfb794;
  uRam000000018318efb0 =
       (uRam000000018318efb0 * -0x437e2788fc490fdb ^ uRam000000018318efe8) + uRam000000018318f108;
  uRam000000018318f200 = uRam000000018318efb0 ^ uRam000000018318efe8;
  uRam000000018318f0f0 = 0;
  uRam000000018318ef98 = func_0x00018789b860(uRam000000018318f000 ^ 0x37ff7b4200211d);
  uVar5 = uRam000000018318ef98 - (uRam000000018318ef98 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018318ef98;
  uRam000000018318f290 = uRam000000018318f0f8 ^ uVar5 ^ 0x1be7;
  uRam000000018318efa0 = (uRam000000018318efa0 ^ uVar5) + 0x1be7 ^ 0xe388f21080f0428d;
  uRam000000018318f1a0 = (uRam000000018318f1a0 * 0x53f74ce93b658725 ^ uRam000000018318efa0) + uVar5;
  uRam000000018318f208 = uRam000000018318f1a0 ^ uRam000000018318efa0;
  uRam000000018318f118 = 0x1be7;
  uVar5 = (uRam000000018318f2c0 ^ _UNK_180cac440) + uRam000000018318f148 + 0xf7d95a52;
  uVar6 = (uRam000000018318f148 ^ _UNK_180cac448) + uRam000000018318f2c0 + 0xffffffff;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318f2c0 ^ _UNK_180cac440;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018318f148 ^ _UNK_180cac448;
  uRam000000018318ef20 =
       func_0x00018789b860((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018318f2c0 + 0xffffffff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318f148 + 0xf7d95a52));
  uVar6 = uRam000000018318ef20 ^ 0x73fb79768c048689;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uVar6;
  uRam000000018318f040 = (uRam000000018318f040 ^ uVar6) + 0x8c048688 ^ 0x78822e854725bf76;
  uRam000000018318f2a8 = (uRam000000018318f2a8 * 0x4b0ce69bf7b22aef ^ uRam000000018318f040) + uVar6;
  uRam000000018318f0b8 = uRam000000018318f2a8 ^ uRam000000018318f040;
  uRam000000018318efb0 = 0x8c048688;
  uVar5 = (uRam000000018318f018 ^ _UNK_180cac450) + uRam000000018318f000 + 0xf7d95a52;
  uVar6 = (uRam000000018318f000 ^ _UNK_180cac458) + uRam000000018318f018 + 0x8c048688;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318f018 ^ _UNK_180cac450;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018318f000 ^ _UNK_180cac458;
  uRam000000018318f150 =
       func_0x00018789b860((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018318f018 + 0x8c048688) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318f000 + 0xf7d95a52));
  uVar5 = uRam000000018318f150 << 0x25 | uRam000000018318f150 >> 0x1b;
  uRam000000018318f1c0 = uRam000000018318f1c0 ^ uVar5 ^ 0xc25d9a2314652c2a;
  uRam000000018318f168 = (uRam000000018318f168 * -0x59b1fd83422cbd83 ^ uRam000000018318f1c0) + uVar5
  ;
  uRam000000018318f0a8 = uRam000000018318f168 ^ uRam000000018318f1c0;
  uRam000000018318f178 = 0;
  uRam000000018318f1f8 = func_0x00018789b860(uRam000000018318f0e8 + 0xffc7ff84c1ffe1ff ^ 0x54);
  uVar5 = (uRam000000018318f1f8 ^ 0x1be7) << 5 | uRam000000018318f1f8 >> 0x3b;
  uRam000000018318f1b8 = uRam000000018318f1a0 ^ uVar5 ^ 0x1be7;
  uRam000000018318f0f0 = (uRam000000018318f0f0 ^ uVar5) + 0x1be7 ^ 0x47c9732a6e0e0677;
  uRam000000018318f048 = (uRam000000018318f048 * -0x787e2d9c4a2b9ae9 ^ uRam000000018318f0f0) + uVar5
  ;
  uRam000000018318f088 = uRam000000018318f048 ^ uRam000000018318f0f0;
  uRam000000018318f2d0 = 0x1be7;
  uVar5 = (uRam000000018318f180 ^ 0x842238c2) + uRam000000018318f1b8 + 0x842238c2;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318f180 ^ 0x842238c2;
  uVar6 = ((uRam000000018318f1b8 + uRam000000018318f180) * 0x2000 |
          uRam000000018318f1b8 + uRam000000018318f180 >> 0x33) ^ uRam000000018318f1b8;
  uRam000000018318ef68 =
       func_0x00018789b860((uVar6 << 0x1d | uVar6 >> 0x23) - uRam000000018318f180 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318f1b8 + 0x842238c2));
  uVar5 = (ulonglong)(~(uint)uRam000000018318ef68 & 0x1be7) ^ 0x1be7;
  uRam000000018318f068 = uRam000000018318ef40 ^ uVar5 ^ 0x1be7;
  uRam000000018318ef00 = (uRam000000018318ef00 ^ uVar5) + 0x1be7 ^ 0x2d57e81e980dd2fe;
  uRam000000018318ef38 = (uRam000000018318ef38 * -0x1c077c0963ff395 ^ uRam000000018318ef00) + uVar5;
  uRam000000018318ef48 = uRam000000018318ef38 ^ uRam000000018318ef00;
  uRam000000018318efb0 = 0x1be7;
  uVar5 = uVar3 ^ 0x84222325 ^ uRam000000018318f178;
  lVar4 = (uVar3 ^ 0x84222325) + uRam000000018318ef08;
  uVar6 = uVar5 + lVar4;
  uVar7 = (uRam000000018318ef08 ^ 0x1be7) + uRam000000018318f178 + 0x1be7;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018318ef08 ^ 0x1be7;
  uRam000000018318f2f0 =
       func_0x00018789b860((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018318f178 + 0x1be7) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar4);
  uRam000000018318f1d0 = uVar3 ^ 0x1be7;
  uRam000000018318efc0 =
       (uRam000000018318efc0 ^ uRam000000018318f2f0 & 0x1fffffffffe0) + uRam000000018318f1d0 ^
       0xad4168753ecaf185;
  uRam000000018318f1b8 =
       (uRam000000018318f1b8 * 0x466087088fdb5d7d ^ uRam000000018318efc0) +
       (uRam000000018318f2f0 & 0x1fffffffffe0);
  uRam000000018318f1b0 = uRam000000018318f1b8 ^ uRam000000018318efc0;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x191f4,0x3f2);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187892be1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180caa5a0 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ma; cjD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18789b8f0, runtime 6fffef4ab8f0) =====

void FUN_18789b8f0(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018789b93b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180cac590 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ma; cjE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1878360c0, runtime 6fffef4460c0) =====

void FUN_1878360c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187836149 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c9c170 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ma; cju ()V (handler @ image 18778fec0, runtime 6fffef39fec0) =====

void FUN_18778fec0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x191f4,0x3f2);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018778ffb1 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c6feb0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ma; cjv (Ljava/lang/String;)[B (handler @ image 1877d5130, runtime 6fffef3e5130) =====

void FUN_1877d5130(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x191f4,0x3f2);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001877d5215 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180c819d0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ma; cjw (Ljava/lang/String;)Z (handler @ image 187856e80, runtime 6fffef466e80) =====

void FUN_187856e80(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x191f4,0x3f2);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187856f67 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180ca0120 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/ma; cjx (Ljava/lang/Throwable;)Ljava/lang/Throwable; (handler @ image 18785eeb0, runtime 6fffef46eeb0) =====

undefined8 FUN_18785eeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/ma; cjy ([B)Ljava/lang/String; (handler @ image 18785ef40, runtime 6fffef46ef40) =====

void FUN_18785ef40(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018785efe0 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180ca2610 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/ma; cjz (IJ)Ljava/lang/String; (handler @ image 1878861f0, runtime 6fffef4961f0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878861f0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar5 = (~uRam000000018318ebf8 + 0xe299808930a3506b) *
          ((uRam000000018318e8c8 ^ 0xbe32f7033a160e49) +
          (uRam000000018318e8c8 & 0x3e32f7033a160e49) * 2);
  uVar5 = (uVar5 | uRam000000018318e9f0) + (uVar5 & uRam000000018318e9f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318ee90 =
       func_0x00018788cd80((uVar5 | 0x5cab778a0ab55e23) + (uVar5 & 0x5cab778a0ab55e23));
  uVar5 = uRam000000018318ee90 << 0xc | uRam000000018318ee90 >> 0x34;
  uRam000000018318ed38 = (uRam000000018318ed38 ^ uVar5) + 0xfebbf78bbeb77d6e ^ 0x16639120139e9054;
  uRam000000018318e700 = (uRam000000018318e700 * -0x2eefc72e20d63cf3 ^ uRam000000018318ed38) + uVar5
  ;
  uRam000000018318e780 = uRam000000018318e700 ^ uRam000000018318ed38;
  uRam000000018318eae8 = 0xfebbf78bbeb77d6e;
  uVar5 = (~uRam000000018318ec08 + 0xcf743e0fb6f35f11) *
          ((uRam000000018318e9d0 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018318e9d0 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018318ecf8) + (uVar5 & uRam000000018318ecf8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318e830 =
       func_0x00018788cd80((uVar5 | 0xcf743e0f32d17c35) + (uVar5 & 0xcf743e0f32d17c35));
  uVar5 = uRam000000018318e830 << 0x3e | uRam000000018318e830 >> 2;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uVar5;
  uRam000000018318e8b0 = (uRam000000018318e8b0 ^ uVar5) + 0x308bc1f0490ca0f0 ^ 0xcd55adf36e40b731;
  uRam000000018318e7a8 = (uRam000000018318e7a8 * -0x97db32bd3abcc7f ^ uRam000000018318e8b0) + uVar5;
  uRam000000018318e878 = uRam000000018318e7a8 ^ uRam000000018318e8b0;
  uRam000000018318e730 = 0x308bc1f0490ca0f0;
  uRam000000018318e810 = func_0x00018788cd80(uRam000000018318eb48 + 0xafe93f1b62ed044 ^ 0xb7);
  uVar5 = uRam000000018318e810 ^ 0x80e7a3664e67ffe0;
  uRam000000018318e918 = uRam000000018318e958 ^ uVar5 ^ 0xcf743e0fb6f3df0f;
  uRam000000018318e840 = (uRam000000018318e840 ^ uVar5) + 0xcf743e0fb6f3df0f ^ 0x551456d703e258b5;
  uRam000000018318eaa8 = (uRam000000018318eaa8 * -0x8f44badb0eb52a7 ^ uRam000000018318e840) + uVar5;
  uRam000000018318e808 = uRam000000018318eaa8 ^ uRam000000018318e840;
  uRam000000018318eb48 = 0xcf743e0fb6f3df0f;
  uVar5 = (uRam000000018318eab8 ^ _UNK_180ca9070) + uRam000000018318e800 + 0xcf743e0f32d1fc2a;
  uVar4 = (uRam000000018318e800 ^ _UNK_180ca9078) + uRam000000018318eab8 + 0x308bc1f0490ca0f0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318eab8 ^ _UNK_180ca9070;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018318e800 ^ _UNK_180ca9078;
  uRam000000018318eac0 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018318eab8 + 0x308bc1f0490ca0f0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018318e800 + 0xcf743e0f32d1fc2a));
  uVar5 = (uRam000000018318eac0 & 0xcf743e0fb6f3df0f) * 0x109d4f9fba7a9d8b ^ 0xcf743e0fb6f3df0f;
  uRam000000018318e920 = uRam000000018318ed08 ^ uVar5 ^ 0x7fff;
  uRam000000018318e908 = (uRam000000018318e908 ^ uVar5) + 0x7fff ^ 0x131c015cfb0075fe;
  uRam000000018318ea88 = (uRam000000018318ea88 * 0x4c7d5830a29d4f93 ^ uRam000000018318e908) + uVar5;
  uRam000000018318eaf0 = uRam000000018318ea88 ^ uRam000000018318e908;
  uRam000000018318ea50 = 0x7fff;
  uVar5 = (uRam000000018318e860 ^ _UNK_180ca9080) + uRam000000018318eb50 + 0x84222325;
  uVar4 = (uRam000000018318eb50 ^ _UNK_180ca9088) + uRam000000018318e860 + 0xe2ff6fbe87ab7b1e;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318e860 ^ _UNK_180ca9080;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018318eb50 ^ _UNK_180ca9088;
  uRam000000018318ee08 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018318e860 + 0xe2ff6fbe87ab7b1e) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318eb50 + 0x84222325));
  uVar5 = (uRam000000018318ee08 ^ 0xe2ff6fbe87ab7b18) & 0xfffffffffffffff8;
  uRam000000018318ebe8 = (uRam000000018318ebe8 ^ uVar5) + 0x1d009041785484e2 ^ 0xb0eb9f13033c6ade;
  uRam000000018318e878 = (uRam000000018318e878 * -0x2a9b5217e088a531 ^ uRam000000018318ebe8) + uVar5
  ;
  uRam000000018318ee90 = uRam000000018318e878 ^ uRam000000018318ebe8;
  uRam000000018318ece0 = 0x1d009041785484e2;
  uVar5 = (~uRam000000018318e710 + 0xe2ff6fbe87ab7b1f) *
          ((uRam000000018318eb10 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018318eb10 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018318ee90) + (uVar5 & uRam000000018318ee90);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318e750 =
       func_0x00018788cd80((uVar5 | 0xe2ff6fbe038927c4) + (uVar5 & 0xe2ff6fbe038927c4));
  uVar5 = uRam000000018318e750 << 0x31 | uRam000000018318e750 >> 0xf;
  uRam000000018318eae0 = uRam000000018318ed48 ^ uVar5 ^ 0xe2ff6fbe87abfb1d;
  uRam000000018318ec08 = (uRam000000018318ec08 ^ uVar5) + 0xe2ff6fbe87abfb1d ^ 0x4439136bc31825fe;
  uRam000000018318e7e0 = (uRam000000018318e7e0 * -0xe53956c7f25e877 ^ uRam000000018318ec08) + uVar5;
  uRam000000018318eed8 = uRam000000018318e7e0 ^ uRam000000018318ec08;
  uRam000000018318e960 = 0xe2ff6fbe87abfb1d;
  uRam000000018318eba8 = func_0x00018788cd80(lRam000000018318ed68 + 0xa3242f37558fad80U ^ 0x47);
  uVar5 = uRam000000018318eba8 ^ 0xe2ff6fbe87abfb1d;
  uRam000000018318e898 = uRam000000018318e9c0 ^ uVar5 ^ 0x7fff;
  uRam000000018318ebd8 = (uRam000000018318ebd8 ^ uVar5) + 0x7fff ^ 0xa16a03ee8e630e51;
  uRam000000018318ee20 = (uRam000000018318ee20 * -0x835d12b23ea66fb ^ uRam000000018318ebd8) + uVar5;
  uRam000000018318e938 = uRam000000018318ee20 ^ uRam000000018318ebd8;
  uRam000000018318ebb0 = 0x7fff;
  uRam000000018318ecf8 = func_0x00018788cd80(lRam000000018318ea30 + 0xb4a42e072d4a0f81U ^ 0x7f);
  uVar5 = (uRam000000018318ecf8 & 0xffffffff80000000) << 0x1e | uRam000000018318ecf8 >> 0x22;
  uRam000000018318e8c0 = (uRam000000018318e8c0 ^ uVar5) + 0x7da9b54a73ccb830 ^ 0xf12e2fb579ab10c7;
  uRam000000018318e828 = (uRam000000018318e828 * 0x15572601fb2f6d9b ^ uRam000000018318e8c0) + uVar5;
  uRam000000018318eb50 = uRam000000018318e828 ^ uRam000000018318e8c0;
  uRam000000018318eae0 = 0x7da9b54a73ccb830;
  uVar5 = (uRam000000018318e938 ^ _UNK_180ca9090) + uRam000000018318e7d0 + 0x84225cda;
  uVar4 = (uRam000000018318e7d0 ^ _UNK_180ca9098) + uRam000000018318e938 + 0x82564ab58c3347d0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318e938 ^ _UNK_180ca9090;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018318e7d0 ^ _UNK_180ca9098;
  uRam000000018318e790 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018318e938 + 0x82564ab58c3347d0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318e7d0 + 0x84225cda));
  uRam000000018318e7b0 = uRam000000018318ee28 ^ uRam000000018318e790 ^ 0x82564ab58c33c7cf;
  uRam000000018318ea40 =
       (uRam000000018318ea40 ^ uRam000000018318e790) + 0x82564ab58c33c7cf ^ 0xe1ba128c95cbc75b;
  uRam000000018318e9a0 =
       (uRam000000018318e9a0 * 0x3f1110597b87e927 ^ uRam000000018318ea40) + uRam000000018318e790;
  uRam000000018318e838 = uRam000000018318e9a0 ^ uRam000000018318ea40;
  uRam000000018318ebb0 = 0x82564ab58c33c7cf;
  uVar5 = (uRam000000018318eb40 ^ _UNK_180ca90a0) + uRam000000018318e9e0 + 0x82564ab50811e4ea;
  uVar4 = (uRam000000018318e9e0 ^ _UNK_180ca90a8) + uRam000000018318eb40 + 0x7da9b54a73ccb830;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318eb40 ^ _UNK_180ca90a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018318e9e0 ^ _UNK_180ca90a8;
  uRam000000018318ed18 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018318eb40 + 0x7da9b54a73ccb830) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018318e9e0 + 0x82564ab50811e4ea));
  uVar5 = uRam000000018318ed18 - (uRam000000018318ed18 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam000000018318ed18) << 0x11 | uRam000000018318ed18 >> 0x2f;
  uRam000000018318ebe8 = uRam000000018318ed08 ^ uVar5 ^ 0x7fff;
  uRam000000018318ebb0 = (uRam000000018318ebb0 ^ uVar5) + 0x7fff ^ 0xac1715e4357f73cf;
  uRam000000018318e9a8 = (uRam000000018318e9a8 * 0x725b5018580d7da7 ^ uRam000000018318ebb0) + uVar5;
  uRam000000018318ea60 = uRam000000018318e9a8 ^ uRam000000018318ebb0;
  uRam000000018318ec00 = 0x7fff;
  uVar5 = (~uRam000000018318eb70 + 0xf6043ed5615b99c9) *
          ((uRam000000018318e918 ^ 0xfebbf78b3a955e4b) +
          (uRam000000018318e918 & 0x7ebbf78b3a955e4b) * 2);
  uVar5 = (uVar5 | uRam000000018318eb58) + (uVar5 & uRam000000018318eb58);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318e838 =
       func_0x00018788cd80((uVar5 | 0x8bfc95e5bcec783) + (uVar5 & 0x8bfc95e5bcec783));
  uVar5 = (uRam000000018318e838 ^ 0x4085441488080) << 0x11 |
          (uRam000000018318e838 ^ 0x4085441488080) >> 0x2f;
  uRam000000018318ec10 = uRam000000018318eda8 ^ uVar5 ^ 0xf4c0366120131736;
  uRam000000018318eae8 = (uRam000000018318eae8 ^ uVar5) + 0xf4c0366120131736 ^ 0xc8886c195f65ccba;
  uRam000000018318ee00 = (uRam000000018318ee00 * 0x35c27c14341111cf ^ uRam000000018318eae8) + uVar5;
  uRam000000018318e8b8 = uRam000000018318ee00 ^ uRam000000018318eae8;
  uRam000000018318e808 = uRam000000018318e810 ^ 0xf4c0366120131736;
  uRam000000018318ed30 = 0xf4c0366120131736;
  uRam000000018318e990 = func_0x00018788cd80(uRam000000018318e9a0 ^ 0xd93c573b81c8bec8);
  uVar5 = uRam000000018318e990 - (uRam000000018318e990 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = ((uint)bVar1 + (uint)bVar1 ^ uRam000000018318e990) * 0x53942db29d77d59b ^
          0xfebbf78bbeb77d6e;
  uRam000000018318ee38 = (uRam000000018318ee38 ^ uVar5) + 0x8bfc95edfece4a6 ^ 0x59f1a8b9190b1ea3;
  uRam000000018318e740 = (uRam000000018318e740 * 0x252582fab5b70493 ^ uRam000000018318ee38) + uVar5;
  uRam000000018318e838 = uRam000000018318e740 ^ uRam000000018318ee38;
  uRam000000018318e7f8 = 0x8bfc95edfece4a6;
  uVar5 = (~uRam000000018318eb80 + 0xf6043ed5615b99c9) *
          ((uRam000000018318e750 ^ 0xfebbf78b3a955e4b) +
          (uRam000000018318e750 & 0x7ebbf78b3a955e4b) * 2);
  uVar5 = (uVar5 | uRam000000018318e878) + (uVar5 & uRam000000018318e878);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318ebf8 =
       func_0x00018788cd80((uVar5 | 0x8bfc95e5bcec783) + (uVar5 & 0x8bfc95e5bcec783));
  uVar4 = uRam000000018318ebf8 ^ 0xfebfffdffffffdee;
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
  uRam000000018318ed48 = (uRam000000018318ed48 ^ uVar4) + 0xf600368120131948 ^ 0xb946cfad8d9c3671;
  uRam000000018318e718 = (uRam000000018318e718 * 0x3d81c54c55489637 ^ uRam000000018318ed48) + uVar4;
  uRam000000018318ee38 = uRam000000018318e718 ^ uRam000000018318ed48;
  uRam000000018318eb10 = uRam000000018318eb80 ^ 0xf600368120131948;
  uRam000000018318ed10 = 0xf600368120131948;
  uVar5 = (~uRam000000018318e9e0 + 0xf4c0366120131737) *
          ((uRam000000018318ee20 ^ 0xf4c03661a4313413) +
          (uRam000000018318ee20 & 0x74c03661a4313413) * 2);
  uVar5 = (uVar5 | uRam000000018318eaa8) + (uVar5 & uRam000000018318eaa8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318eac0 =
       func_0x00018788cd80((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam000000018318ec88 = uRam000000018318eac0 & 0xfffffffffffffff;
  uRam000000018318e770 = uRam000000018318e770 ^ uRam000000018318ec88 ^ 0x819677476b84a404;
  uRam000000018318ed48 =
       (uRam000000018318ed48 * 0x738af95c3abc4109 ^ uRam000000018318e770) + uRam000000018318ec88;
  uRam000000018318eca8 = uRam000000018318ed48 ^ uRam000000018318e770;
  uRam000000018318e8d8 = 0;
  uRam000000018318ea08 = func_0x00018788cd80(uRam000000018318eda0 ^ 0x43ff835a001d2e);
  uRam000000018318ed90 = uRam000000018318edb8 ^ uRam000000018318ea08 ^ 0x7fff;
  uRam000000018318e998 = (uRam000000018318e998 ^ uRam000000018318ea08) + 0x7fff ^ 0xdafc6adbaebed761
  ;
  uRam000000018318eef8 =
       (uRam000000018318eef8 * 0x5bff6c5f9320d5b3 ^ uRam000000018318e998) + uRam000000018318ea08;
  uRam000000018318eef0 = uRam000000018318eef8 ^ uRam000000018318e998;
  uRam000000018318e8b0 = 0x7fff;
  uRam000000018318e8d8 = func_0x00018788cd80(uRam000000018318e8b8 + 0xab61433a7407aa00 ^ 0xcc);
  uVar5 = ((uRam000000018318e8d8 & 0xffffffff) * (ulonglong)_UNK_180ca90c0 +
           (uRam000000018318e8d8 >> 0x20) * (ulonglong)_UNK_180ca90b0 << 0x20) +
          (uRam000000018318e8d8 & 0xffffffff) * (ulonglong)_UNK_180ca90b0 & 0x7fffffff80000000;
  uRam000000018318e930 = (uRam000000018318e930 ^ uVar5) + 0x144087441488291 ^ 0x637e400d240e9742;
  uRam000000018318e9d0 = (uRam000000018318e9d0 * -0x7c5df5f76669db33 ^ uRam000000018318e930) + uVar5
  ;
  uRam000000018318ed38 = uRam000000018318e9d0 ^ uRam000000018318e930;
  uRam000000018318ec40 = 0x144087441488291;
  uVar5 = (uRam000000018318e9a8 ^ _UNK_180ca90d0) + uRam000000018318ee60 + 0xfebbf78b3a955e4b;
  uVar4 = (uRam000000018318ee60 ^ _UNK_180ca90d8) + uRam000000018318e9a8 + 0x144087441488291;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318e9a8 ^ _UNK_180ca90d0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018318ee60 ^ _UNK_180ca90d8;
  uRam000000018318ecd0 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam000000018318e9a8 + 0x144087441488291) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018318ee60 + 0xfebbf78b3a955e4b));
  uVar5 = (uRam000000018318ecd0 << 0xd | uRam000000018318ecd0 >> 0x33) ^ 0xfebbf78bbeb77d6e;
  uRam000000018318ea50 = uRam000000018318ea50 ^ uVar5 ^ 0x6f9cbf1103ac2199;
  uRam000000018318ee80 = (uRam000000018318ee80 * 0x623fb27146e3a249 ^ uRam000000018318ea50) + uVar5;
  uRam000000018318e928 = uRam000000018318ee80 ^ uRam000000018318ea50;
  uRam000000018318ee58 = 0;
  uRam000000018318ed38 = func_0x00018788cd80(uRam000000018318ee20 ^ 0xffdd007c1affddaa);
  uVar5 = uRam000000018318ed38 * -0x3d11947409d44153 & 0xffffffffffc00000;
  uRam000000018318eca8 = uRam000000018318eca8 ^ uVar5 ^ 0xe0b96a734967ce5e;
  uRam000000018318e900 = (uRam000000018318e900 * -0x37c9ef99bb932439 ^ uRam000000018318eca8) + uVar5
  ;
  uRam000000018318ec68 = uRam000000018318e900 ^ uRam000000018318eca8;
  uRam000000018318e860 = 0;
  uVar5 = param_4 ^ 0x84222325 ^ uRam000000018318edf8;
  lVar6 = (param_4 ^ 0x84222325) + uRam000000018318ee08;
  uVar4 = uVar5 + lVar6;
  uVar10 = (uRam000000018318ee08 ^ 0x7fff) + uRam000000018318edf8 + 0x7fff;
  uVar5 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uVar5;
  uVar4 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018318ee08 ^ 0x7fff;
  uRam000000018318eba8 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018318edf8 + 0x7fff) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar6);
  uVar5 = uRam000000018318eba8 - (uRam000000018318eba8 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^
          uRam000000018318eba8;
  uVar3 = (uint)param_4 & 0x7fff;
  uRam000000018318ea90 = (ulonglong)uVar3;
  uRam000000018318ebf8 = (uRam000000018318ebf8 ^ uVar5) + uRam000000018318ea90 ^ 0x7d9e77f796545847;
  uRam000000018318eca0 = (uRam000000018318eca0 * -0x1c6c4d946476d65b ^ uRam000000018318ebf8) + uVar5
  ;
  uRam000000018318ebb8 = uRam000000018318eca0 ^ uRam000000018318ebf8;
  uVar3 = uVar3 ^ param_3;
  uVar5 = (~uRam000000018318e858 + 0x54449efe) *
          ((uRam000000018318e868 ^ 0x3bcc1b7a) +
          (ulonglong)((uint)uRam000000018318e868 & 0x3bcc1b7a) * 2);
  uVar5 = (uVar5 | uRam000000018318e880) + (uVar5 & uRam000000018318e880);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318e928 =
       func_0x00018788cd80((uVar5 | 0x6f888587) + (ulonglong)((uint)uVar5 & 0x6f888587));
  uVar5 = ((uRam000000018318e928 ^ 0xffeebeff) << 0x18 | uRam000000018318e928 >> 0x28) ^ 0xbfee385f;
  uRam000000018318ed78 = (uRam000000018318ed78 ^ uVar5) + 0xffeebeff ^ 0xc58ac368cb74310e;
  uRam000000018318eee0 = (uRam000000018318eee0 * -0x66bb46d57dd187ad ^ uRam000000018318ed78) + uVar5
  ;
  uRam000000018318e7f0 = uRam000000018318eee0 ^ uRam000000018318ed78;
  uRam000000018318e890 = 0xffeebeff;
  uRam000000018318e8e8 = func_0x00018788cd80(uRam000000018318e870 ^ 0xfff100bdb3001e7d);
  uRam000000018318eb48 =
       (uRam000000018318eb48 ^ uRam000000018318e8e8 & 0x7fffffffffffffff) - 0x463d3470 ^
       0x5f64166c0638b733;
  uRam000000018318e840 =
       (uRam000000018318e840 * 0x1b9737be2ec80dab ^ uRam000000018318eb48) +
       (uRam000000018318e8e8 & 0x7fffffffffffffff);
  uRam000000018318e7d0 = uRam000000018318e840 ^ uRam000000018318eb48;
  uRam000000018318ed78 = 0xb9c2cb90;
  uVar5 = (~uRam000000018318ec18 + 0xb9c2cb91) *
          ((uRam000000018318eec8 ^ 0xc21f460a) +
          (ulonglong)((uint)uRam000000018318eec8 & 0xc21f460a) * 2);
  uVar5 = (uVar5 | uRam000000018318ea18) + (uVar5 & uRam000000018318ea18);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318e920 =
       func_0x00018788cd80((uVar5 | 0x7bdd8d9a) + (ulonglong)((uint)uVar5 & 0x7bdd8d9a));
  uVar5 = uRam000000018318e920 & 0xfffffffffc000000;
  uRam000000018318ec30 = uRam000000018318ed18 ^ uVar5 ^ 0x1000030bf;
  uRam000000018318e978 = (uRam000000018318e978 ^ uVar5) + 0x1000030bf ^ 0xa33cd5ac616dfe36;
  uRam000000018318ecb8 = (uRam000000018318ecb8 * -0x3546c7b0ef7e5305 ^ uRam000000018318e978) + uVar5
  ;
  uRam000000018318ea58 = uRam000000018318ecb8 ^ uRam000000018318e978;
  uRam000000018318e798 = 0x30bf;
  uVar5 = (uRam000000018318e800 ^ _UNK_180ca90e0) + uRam000000018318ed70 + 0x84222325;
  uVar4 = (uRam000000018318ed70 ^ _UNK_180ca90e8) + uRam000000018318e800 + 0x108fdd40;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318e800 ^ _UNK_180ca90e0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018318ed70 ^ _UNK_180ca90e8;
  uRam000000018318e890 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018318e800 + 0x108fdd40) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318ed70 + 0x84222325));
  uRam000000018318ea10 =
       (uRam000000018318ea10 ^ uRam000000018318e9a8) - 0x108fdd40 ^ 0xbefeb3a5d4c1e23f;
  uRam000000018318e8d0 =
       (uRam000000018318e8d0 * -0x382ba7926e76fe8d ^ uRam000000018318ea10) + uRam000000018318e9a8;
  uRam000000018318e808 = uRam000000018318e8d0 ^ uRam000000018318ea10;
  uRam000000018318e9b8 = 0xef7022c0;
  uRam000000018318ed28 = func_0x00018788cd80(uRam000000018318ea80 + 0xfffaff726ffff2ff ^ 0x16);
  uVar5 = uRam000000018318ed28 >> 1 | uRam000000018318ed28;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam000000018318ed28;
  uRam000000018318e700 = (uRam000000018318e700 ^ uVar5) - 0x772f2eb5 ^ 0x44ac44ecb68a7c3b;
  uRam000000018318e8a8 = (uRam000000018318e8a8 * -0x33dd9597113688d7 ^ uRam000000018318e700) + uVar5
  ;
  uRam000000018318e970 = uRam000000018318e8a8 ^ uRam000000018318e700;
  uRam000000018318eef0 = 0x88d0d14b;
  uVar5 = (~uRam000000018318ea70 + 0x772f2eb6) *
          ((uRam000000018318eb08 ^ 0x8422139a) +
          (ulonglong)((uint)uRam000000018318eb08 & 0x8422139a) * 2);
  uVar5 = (uVar5 | uRam000000018318ee08) + (uVar5 & uRam000000018318ee08);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318ece0 =
       func_0x00018788cd80((uVar5 | 0xf30d3d2f) + (ulonglong)((uint)uVar5 & 0xf30d3d2f));
  uVar5 = uRam000000018318ece0 ^ 0x772f3ebf;
  uRam000000018318eb60 = uRam000000018318ea10 ^ uVar5 ^ 0x772f5f74;
  uRam000000018318ecb8 = (uRam000000018318ecb8 ^ uVar5) + 0x772f5f74 ^ 0xa930b388b52392a6;
  uRam000000018318ea48 = (uRam000000018318ea48 * -0x1ae4c90fa81f6597 ^ uRam000000018318ecb8) + uVar5
  ;
  uRam000000018318edf0 = uRam000000018318ea48 ^ uRam000000018318ecb8;
  uRam000000018318ee18 = 0x772f5f74;
  uRam000000018318ed20 = func_0x00018788cd80(uRam000000018318eda0 + 0xffa5006519ffccff ^ 0x98);
  uVar4 = _UNK_180ca90f8;
  uVar5 = _UNK_180ca90f0;
  uRam000000018318e868 = uRam000000018318ed30 ^ uRam000000018318ed20 ^ 0x1000030bf;
  uRam000000018318e7e0 =
       (uRam000000018318e7e0 ^ uRam000000018318ed20) + 0x1000030bf ^ 0x262ac0d01b77cb5b;
  uRam000000018318ee98 =
       (uRam000000018318ee98 * 0x7c1ec5b9d1394633 ^ uRam000000018318e7e0) + uRam000000018318ed20;
  uRam000000018318ed80 = uRam000000018318ee98 ^ uRam000000018318e7e0;
  uRam000000018318ed18 = 0x30bf;
  uVar10 = (uRam000000018318ee10 ^ _UNK_180ca90f0) + uRam000000018318ecc8 + 0x7bcc9dda;
  uVar8 = (uRam000000018318ecc8 ^ _UNK_180ca90f8) + uRam000000018318ee10 + 0x73cffedf;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam000000018318ee10 ^ _UNK_180ca90f0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam000000018318ecc8 ^ _UNK_180ca90f8;
  uRam000000018318ed98 =
       func_0x00018788cd80((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018318ee10 + 0x73cffedf) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018318ecc8 + 0x7bcc9dda));
  uVar10 = (uRam000000018318ed98 ^ 0xffeffeff) << 0x34 | (uRam000000018318ed98 ^ 0xffeffeff) >> 0xc;
  uRam000000018318e928 = uRam000000018318edc8 ^ uVar10 ^ 0x173bebdde;
  uRam000000018318e850 = (uRam000000018318e850 ^ uVar10) + 0x173bebdde ^ 0x52ccc63765a3e994;
  uRam000000018318eaa0 = (uRam000000018318eaa0 * 0x4d59141d1376d633 ^ uRam000000018318e850) + uVar10
  ;
  uRam000000018318ed80 = uRam000000018318eaa0 ^ uRam000000018318e850;
  uRam000000018318e790 = 0x73bebdde;
  uVar10 = uRam000000018318e9d8 ^ uVar5;
  uVar8 = uRam000000018318ed30 ^ uVar4;
  uVar7 = uVar10 + uRam000000018318ed30 + 0x7bcc9dda;
  uVar9 = uVar8 + uRam000000018318e9d8 + 0x73cffedf;
  uVar10 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar10;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uVar8;
  uRam000000018318ec08 =
       func_0x00018788cd80((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam000000018318e9d8 + 0x73cffedf) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (uRam000000018318ed30 + 0x7bcc9dda));
  uVar10 = (uRam000000018318ec08 << 0x2f | uRam000000018318ec08 >> 0x11) ^ 0x73cffedf;
  uRam000000018318e8a0 = (uRam000000018318e8a0 ^ uVar10) + 0x8c214020 ^ 0x803226b5cc351c6b;
  uRam000000018318ea58 = (uRam000000018318ea58 * 0x7ddcd62b0a0d7df3 ^ uRam000000018318e8a0) + uVar10
  ;
  uRam000000018318eb18 = uRam000000018318ea58 ^ uRam000000018318e8a0;
  uRam000000018318e798 = 0x8c214020;
  uVar5 = uRam000000018318ecb8 ^ uVar5;
  uVar4 = uRam000000018318e8b0 ^ uVar4;
  uVar10 = uVar5 + uRam000000018318e8b0 + 0x7bcc9dda;
  uVar8 = uVar4 + uRam000000018318ecb8 + 0x73cffedf;
  uVar5 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar5;
  uVar4 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar4;
  uRam000000018318ee78 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018318ecb8 + 0x73cffedf) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318e8b0 + 0x7bcc9dda));
  uVar5 = (uRam000000018318ee78 ^ 0x3c830a6cfaa6221) * -0x720bdb1205c35d85 & 0x3ffffffffffffff;
  uRam000000018318e980 = (uRam000000018318e980 ^ uVar5) + 0x73cebedf ^ 0x710fb64b1a639c33;
  uRam000000018318eb48 = (uRam000000018318eb48 * -0x68c5c094a970ad5b ^ uRam000000018318e980) + uVar5
  ;
  uRam000000018318eec0 = uRam000000018318eb48 ^ uRam000000018318e980;
  uRam000000018318ee98 = 0x73cebedf;
  uVar5 = (~uRam000000018318e948 + 0x73bebddf) *
          ((uRam000000018318e7a0 ^ 0xf79c9efb) +
          (ulonglong)((uint)uRam000000018318e7a0 & 0xf79c9efb) * 2);
  uVar5 = (uVar5 | uRam000000018318e9f0) + (uVar5 & uRam000000018318e9f0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318eb80 =
       func_0x00018788cd80((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uRam000000018318e7c0 = uRam000000018318e7f8;
  uRam000000018318e798 = uRam000000018318e798 ^ uRam000000018318e7f8 ^ 0x3facec18ccb896b3;
  uRam000000018318e810 =
       (uRam000000018318e810 * 0x601f997fb7a6629d ^ uRam000000018318e798) + uRam000000018318e7f8;
  uRam000000018318e700 = uRam000000018318e810 ^ uRam000000018318e798;
  uRam000000018318eca0 = 0;
  uVar5 = ((uRam000000018318e938 ^ 0x8422139a) +
          (ulonglong)((uint)uRam000000018318e938 & 0x8422139a) * 2) * -uRam000000018318e7f0;
  uVar5 = (uVar5 | uRam000000018318ebc0) + (uVar5 & uRam000000018318ebc0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318ee38 =
       func_0x00018788cd80((uVar5 | 0x8422139a) + (ulonglong)((uint)uVar5 & 0x8422139a));
  uVar5 = uRam000000018318ee38 << 0x28 | uRam000000018318ee38 >> 0x18;
  uVar4 = uVar5 >> 1 | uVar5;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar5) & 0x3fffffffffff;
  uRam000000018318ed58 = uRam000000018318ea70 ^ uVar5 ^ 0x30bf;
  uRam000000018318ec58 = (uRam000000018318ec58 ^ uVar5) + 0x30bf ^ 0x1566c3f3a24e60ad;
  uRam000000018318ee50 = (uRam000000018318ee50 * 0x405f713547cf3f5 ^ uRam000000018318ec58) + uVar5;
  uRam000000018318e7f0 = uRam000000018318ee50 ^ uRam000000018318ec58;
  uRam000000018318e950 = 0x30bf;
  uRam000000018318ec40 = func_0x00018788cd80(uRam000000018318e928 + 0xffa1ff83e4fff0ff ^ 0xe7);
  uRam000000018318e9a0 =
       (uRam000000018318e9a0 ^ uRam000000018318ec40 ^ 0xffffffff) + 0x114100 ^ 0x8ed700a46d7d001e;
  uRam000000018318ed98 =
       (uRam000000018318ed98 * 0x430c1e17092a3661 ^ uRam000000018318e9a0) +
       (uRam000000018318ec40 ^ 0xffffffff);
  uRam000000018318e7a0 = uRam000000018318ed98 ^ uRam000000018318e9a0;
  uRam000000018318ebf8 = 0x114100;
  uVar5 = (uRam000000018318ea68 ^ _UNK_180ca9100) + uRam000000018318ea80 + 0x7bcc9dda;
  uVar4 = (uRam000000018318ea80 ^ _UNK_180ca9108) + uRam000000018318ea68 + 0x114100;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318ea68 ^ _UNK_180ca9100;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018318ea80 ^ _UNK_180ca9108;
  uRam000000018318e8b0 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018318ea68 + 0x114100) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318ea80 + 0x7bcc9dda));
  uVar5 = (uRam000000018318e8b0 * 0x3b40980da1ca9293 ^ 0x114100) & 0xfffffffffffffff8;
  uRam000000018318eb38 = uRam000000018318eb38 ^ uVar5 ^ 0xddbf672aff1c27f2;
  uRam000000018318ecf0 = (uRam000000018318ecf0 * 0x7a1dcd5106a4d0ed ^ uRam000000018318eb38) + uVar5;
  uRam000000018318e770 = uRam000000018318ecf0 ^ uRam000000018318eb38;
  uRam000000018318e7a0 = 0;
  uVar5 = ((uRam000000018318eda0 ^ 0x8422139a) +
          (ulonglong)((uint)uRam000000018318eda0 & 0x8422139a) * 2) * -uRam000000018318e980;
  uVar5 = (uVar5 | uRam000000018318e938) + (uVar5 & uRam000000018318e938);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318e808 =
       func_0x00018788cd80((uVar5 | 0x8422139a) + (ulonglong)((uint)uVar5 & 0x8422139a));
  uVar5 = (uRam000000018318e808 ^ 0x30bf) & 0x7fffffffffffff;
  uRam000000018318ec08 = uRam000000018318e7c0 ^ uVar5 ^ 0x30bf;
  uRam000000018318e768 = (uRam000000018318e768 ^ uVar5) + 0x30bf ^ 0xc4c4490830d059e9;
  uRam000000018318ec88 = (uRam000000018318ec88 * -0xbcb7bee7157894b ^ uRam000000018318e768) + uVar5;
  uRam000000018318e8b8 = uRam000000018318ec88 ^ uRam000000018318e768;
  uRam000000018318edc8 = 0x30bf;
  uVar5 = (uRam000000018318e960 ^ _UNK_180ca9110) + uRam000000018318e870 + 0x3bcc1b7a;
  uVar4 = (uRam000000018318e870 ^ _UNK_180ca9118) + uRam000000018318e960 + 0xbfee385f;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318e960 ^ _UNK_180ca9110;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam000000018318e870 ^ _UNK_180ca9118;
  uRam000000018318e9c8 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) - (uRam000000018318e960 + 0xbfee385f) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318e870 + 0x3bcc1b7a));
  uRam000000018318ea20 =
       uRam000000018318ea20 ^ uRam000000018318e9c8 & 0x7fffffffffffffff ^ 0x4114997d074244a1;
  uRam000000018318e800 =
       (uRam000000018318e800 * 0x26c48c17a4e90bf1 ^ uRam000000018318ea20) +
       (uRam000000018318e9c8 & 0x7fffffffffffffff);
  uRam000000018318ea50 = uRam000000018318e800 ^ uRam000000018318ea20;
  uRam000000018318ea40 = 0;
  uVar5 = (uRam000000018318eea0 ^ 0x8422139a) + uRam000000018318ec28 + 0x8422139a;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018318eea0 ^ 0x8422139a;
  uVar4 = ((uRam000000018318ec28 + uRam000000018318eea0) * 0x2000 |
          uRam000000018318ec28 + uRam000000018318eea0 >> 0x33) ^ uRam000000018318ec28;
  uRam000000018318e7e0 =
       func_0x00018788cd80((uVar4 << 0x1d | uVar4 >> 0x23) - uRam000000018318eea0 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018318ec28 + 0x8422139a));
  uVar5 = uRam000000018318e7e0 ^ 0x30bf;
  uRam000000018318e858 = uRam000000018318eae0 ^ uVar5 ^ 0x30bf;
  uRam000000018318eda8 = (uRam000000018318eda8 ^ uVar5) + 0x30bf ^ 0x297b3b8dbd8dfa3c;
  uRam000000018318eb20 = (uRam000000018318eb20 * -0x5142b114bac4958b ^ uRam000000018318eda8) + uVar5
  ;
  uRam000000018318ec30 = uRam000000018318eb20 ^ uRam000000018318eda8;
  uRam000000018318ed58 = 0x30bf;
  uVar4 = (ulonglong)uVar3;
  uVar5 = (~uRam000000018318ecc8 + 0x30c0) *
          ((uVar4 ^ 0x84222325 ^ uRam000000018318ee20) +
          (ulonglong)((uint)uRam000000018318ee20 & (uint)(uVar4 ^ 0x84222325)) * 2);
  uVar5 = (uVar5 | uRam000000018318ee18) + (uVar5 & uRam000000018318ee18);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018318eaf8 =
       func_0x00018788cd80((uVar4 ^ 0x8422139a | uVar5) +
                           (ulonglong)((uint)(uVar4 ^ 0x8422139a) & (uint)uVar5));
  uVar5 = (uVar4 | 0x30bf) ^ uRam000000018318eaf8;
  uVar5 = uVar5 << 0x3b | uVar5 >> 5;
  lVar6 = uVar4 - (uVar3 & 0x30bf) * 2;
  uRam000000018318e8a8 = (uRam000000018318e8a8 ^ uVar5) + lVar6 + 0x30bf ^ 0x814a5dcda95ab771;
  uRam000000018318ed30 = (uRam000000018318ed30 * 0x4bc5c38e4d6cdef3 ^ uRam000000018318e8a8) + uVar5;
  uRam000000018318e760 = uRam000000018318ed30 ^ uRam000000018318e8a8;
  uRam000000018318ea38 = lVar6 + 0x30bfU & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x191f4,0x3f2);
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001878888a5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180ca76e8 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



