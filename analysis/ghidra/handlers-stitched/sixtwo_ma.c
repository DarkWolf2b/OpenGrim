// ===== STITCHED CORPUS: sixtwo.ma =====
// handlers: 12  continuation blocks: 144  unresolved table targets: 0
// tables not in tables.json: ['0x2f702a8', '0xca2840', '0xca3478', '0xca3488', '0xca3498', '0xca34a8', '0xca34b8', '0xca34c8', '0xca34d8', '0xca34e8', '0xca34f8', '0xca3508', '0xca3518', '0xca3528', '0xca3cc8', '0xca3cd8', '0xca3ce8', '0xca3cf8', '0xca3d08', '0xca3d18']

// ===== Lsixtwo/ma; _ad712ef9d12f3e19a897cb1a5926ec4a ()V (handler @ image 187838dd0, runtime 6fffef448dd0) =====

void FUN_187838dd0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x191f4,0x3f2)
      /* POOL[0x191f4,0x3f2]: til/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loader/api/metadata/ModMetadata; | byc | net/fabricmc/loader/api/metadata/ModMetadata | getVersion | ()Lnet/fabricmc/loader/api/Version; | net */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x191f4,0x3f2)
      /* POOL[0x191f4,0x3f2]: til/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loader/api/metadata/ModMetadata; | byc | net/fabricmc/loader/api/metadata/ModMetadata | getVersion | ()Lnet/fabricmc/loader/api/Version; | net */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x191f4,0x3f2)
      /* POOL[0x191f4,0x3f2]: til/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loader/api/metadata/ModMetadata; | byc | net/fabricmc/loader/api/metadata/ModMetadata | getVersion | ()Lnet/fabricmc/loader/api/Version; | net */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x191f4,0x3f2)
      /* POOL[0x191f4,0x3f2]: til/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loader/api/metadata/ModMetadata; | byc | net/fabricmc/loader/api/metadata/ModMetadata | getVersion | ()Lnet/fabricmc/loader/api/Version; | net */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x191f4,0x3f2)
      /* POOL[0x191f4,0x3f2]: til/concurrent/ScheduledFuture; | sixtwo/ma | sixtwo/lX | schedule | (Ljava/lang/Runnable;JLjava/util/concurrent/TimeUnit;)Ljava/util/concurrent/ScheduledFuture; | shutdown | incrementAndGet | Vqpvq | ujhbD | bxa | yzoyB | bxb | cancel | YDKhe | net/fabricmc/loader/api/FabricLoader | ()Lnet/fabricmc/loader/api/FabricLoader; | getModContainer | (Ljava/lang/String;)Ljava/util/Optional; | net/fabricmc/loader/api/ModContainer | getMetadata | ()Lnet/fabricmc/loader/api/metadata/ModMetadata; | byc | net/fabricmc/loader/api/metadata/ModMetadata | getVersion | ()Lnet/fabricmc/loader/api/Version; | net */;
  cVar2 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x0001878888a5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180ca76e8 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x778ffb4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18778ffb4(void)

{
  FUN_190ddce00();
  (*_DAT_180c70278)();
  return;
}


// ----- block @ rva 0x779c49c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18779c49c(void)

{
  longlong *in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x2b3,0x10);
  (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000038);
  (*_DAT_180c72938)();
  return;
}


// ----- block @ rva 0x779d210 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18779d210(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  (*_DAT_180c75e28)();
  return;
}


// ----- block @ rva 0x77a0840 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1877a0840(void)

{
  undefined8 in_stack_00000038;
  
  FUN_190ddce00(in_stack_00000038,&stack0x00000058,*_DAT_18301ee50 + 0x3e3,*_DAT_18301ee50 + 1000,3)
  ;
  (*_DAT_180c73b88)();
  return;
}


// ----- block @ rva 0x77a132c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1877a132c(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  (*_DAT_180c75e28)();
  return;
}


// ----- block @ rva 0x77ac3d8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1877ac3d8(void)

{
  char cVar1;
  longlong *in_stack_00000038;
  undefined8 in_stack_00000040;
  
  FUN_184117d50(in_stack_00000038,in_stack_00000040);
  cVar1 = (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x77accd3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1877accd3(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  (*_DAT_180c75f78)();
  return;
}


// ----- block @ rva 0x77bbb3a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1877bbb3a(void)

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


// ----- block @ rva 0x77c0bd3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1877c0bd3(void)

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


// ----- block @ rva 0x77c8557 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1877c8557(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionClear /*0x88*/))();
  (*_DAT_180c75e08)();
  return;
}


// ----- block @ rva 0x77d3280 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1877d3280(void)

{
  longlong *in_stack_00000038;
  undefined8 in_stack_00000058;
  
  (**(code **)(in_stack_00000038 + JNI->GetStaticObjectField /*0x488*/))(in_stack_00000038,in_stack_00000058);
  (*_DAT_180c712a8)();
  return;
}


// ----- block @ rva 0x77d44a4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1877d44a4(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  (*_DAT_180c75fd8)();
  return;
}


// ----- block @ rva 0x77d4f76 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1877d4f76(void)

{
  longlong in_RAX;
  undefined8 in_stack_00000038;
  
  (**(code **)(in_RAX + 0x78))(in_stack_00000038);
  (*_DAT_180c75f78)();
  return;
}


// ----- block @ rva 0x77d4f9e -----

void FUN_1877d4f9e(void)

{
  return;
}


// ----- block @ rva 0x77d500a -----

void FUN_1877d500a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x77d5218 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1877d5218(void)

{
  FUN_190ddce00();
  (*_DAT_180c83a78)();
  return;
}


// ----- block @ rva 0x77f7466 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001877f7486 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1877f7466(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x780176c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018780178b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18780176c(void)

{
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x78087b6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x0001878087de */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_1878087b6(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7808d20 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187808d7b */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187808d20(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->SetObjectArrayElement /*0x570*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x2fa,0x13);
  (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000038);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7818928 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187818928(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180c82af8)();
  return;
}


// ----- block @ rva 0x781d403 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18781d403(void)

{
  longlong *in_stack_00000038;
  
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x2b3,0x10);
  (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000038);
  (*_DAT_180c824a8)();
  return;
}


// ----- block @ rva 0x781dbb7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18781dbb7(void)

{
  undefined8 uVar1;
  longlong *in_stack_00000038;
  undefined8 in_stack_00000068;
  
  uVar1 = (**(code **)(in_stack_00000038 + JNI->NewGlobalRef /*0xa8*/))(in_stack_00000038,in_stack_00000068);
  FUN_190dcd3d0(0xe86,uVar1);
  (*_DAT_180c842d8)();
  return;
}


// ----- block @ rva 0x7835ebb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187835ebb(void)

{
  longlong *in_stack_00000038;
  
  FUN_184117d80(in_stack_00000038);
  (**(code **)(in_stack_00000038 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000038);
  (*_DAT_180c83d98)();
  return;
}


// ----- block @ rva 0x7835efb -----

void FUN_187835efb(void)

{
  return;
}


// ----- block @ rva 0x7835f67 -----

void FUN_187835f67(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x783614c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18783614c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180c9cc28)();
  return;
}


// ----- block @ rva 0x78362b4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878362b4(void)

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


// ----- block @ rva 0x7836829 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187836829(void)

{
  undefined8 uStack0000000000000060;
  undefined8 in_stack_000000e0;
  
  uStack0000000000000060 = in_stack_000000e0;
  FUN_190ddfc90();
  (*_DAT_180c9cdd8)();
  return;
}


// ----- block @ rva 0x7836b5d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187836b5d(void)

{
  (*_DAT_180c9cf18)();
  return;
}


// ----- block @ rva 0x7836c65 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187836c65(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7836f55 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187836f55(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180c9d018)();
  return;
}


// ----- block @ rva 0x7837358 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187837358(void)

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


// ----- block @ rva 0x78380e6 -----

void FUN_1878380e6(void)

{
  return;
}


// ----- block @ rva 0x7838360 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187838360(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x78384d3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878384d3(void)

{
  FUN_190de3220();
  (*_DAT_180c9c808)();
  return;
}


// ----- block @ rva 0x78388ba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878388ba(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180c9c678)();
  return;
}


// ----- block @ rva 0x7838b84 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187838b84(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180c9c2a8)();
  return;
}


// ----- block @ rva 0x7838c24 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187838c24(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180c9c668)();
  return;
}


// ----- block @ rva 0x7838c8a -----

void FUN_187838c8a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7838ebb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187838f11 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187838ebb(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7839511 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187839528 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187839511(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x783d25b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018783d272 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18783d25b(void)

{
  code *in_RAX;
  
  (*in_RAX)();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x783f86b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018783f889 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18783f86b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7840c59 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187840c8f */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187840c59(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7840c97 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187840cd6 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187840c97(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7848235 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187848235(void)

{
  int iVar1;
  longlong *unaff_RSI;
  undefined8 unaff_R14;
  int iStack0000000000000068;
  ulonglong uStack0000000000000070;
  undefined4 uStack0000000000000078;
  
  iStack0000000000000068 = 5;
  uStack0000000000000078 = 0x10;
  uStack0000000000000070 =
       (ulonglong)
       CONCAT24((short)((ulonglong)unaff_R14 >> 0x30),(int)(char)((ulonglong)unaff_R14 >> 0x10));
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000068 < 0 || iVar1 <= iStack0000000000000068) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7856066 -----

void thunk_FUN_18783abb9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x7856c0c -----

void FUN_187856c0c(void)

{
  return;
}


// ----- block @ rva 0x7856c78 -----

void FUN_187856c78(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x7856f6a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187856f6a(void)

{
  FUN_190ddce00();
  (*_DAT_180ca03c8)();
  return;
}


// ----- block @ rva 0x785ced9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18785ced9(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180ca0538)();
  return;
}


// ----- block @ rva 0x785d362 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18785d362(void)

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


// ----- block @ rva 0x785d51a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18785d51a(void)

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


// ----- block @ rva 0x785d91d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18785d91d(void)

{
  FUN_190dd72e0();
  (*_DAT_180ca0468)();
  return;
}


// ----- block @ rva 0x785e1ba -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18785e1ba(void)

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


// ----- block @ rva 0x785e588 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18785e588(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180ca06f8)();
  return;
}


// ----- block @ rva 0x785e62a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18785e62a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_180ca0878)();
  return;
}


// ----- block @ rva 0x785e7c5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18785e7c5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  (*_DAT_180ca0b88)();
  return;
}


// ----- block @ rva 0x785ed3a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18785ed3a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->Throw /*0x68*/))();
  (*_DAT_180ca0ca8)();
  return;
}


// ----- block @ rva 0x785ed4b -----

void FUN_18785ed4b(void)

{
  return;
}


// ----- block @ rva 0x785edb7 -----

void FUN_18785edb7(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x785efe3 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018785f01a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18785efe3(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x785f038 -----

void FUN_18785f038(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x70) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x78) = *(undefined8 *)(unaff_RBP + 0x70);
  *(longlong **)(unaff_RBP + 0x10) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018785f069. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180ca2840 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x7863d5c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187863d5c(ulonglong param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  byte bVar3;
  longlong in_RAX;
  longlong in_RCX;
  longlong unaff_RBP;
  ulonglong unaff_RSI;
  ulonglong uVar4;
  uint uVar5;
  ulonglong in_XMM0_Qb;
  uint uVar6;
  undefined1 auVar7 [16];
  ulonglong uVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  uVar8 = param_1 + in_RAX + param_2;
  uVar9 = in_XMM0_Qb + in_RCX + 1;
  param_1 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ param_1;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ in_XMM0_Qb;
  _DAT_18318dcd8 =
       func_0x000187886160((uVar8 << 0x1d | uVar8 >> 0x23) - (in_RCX + 1) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RAX + param_2));
  *(ulonglong *)(unaff_RBP + 0xa0) = unaff_RSI;
  uVar6 = (uint)unaff_RSI;
  uVar12 = (uint)(unaff_RSI >> 0x20);
  uVar5 = uVar6 & (uint)DAT_18001a990;
  auVar1._8_4_ = uVar6;
  auVar1._0_8_ = unaff_RSI;
  auVar1._12_4_ = uVar12;
  auVar7._8_4_ = 0xffffffff;
  auVar7._0_8_ = 0xffffffffffffffff;
  auVar7._12_4_ = 0xffffffff;
  auVar2._8_4_ = uVar6;
  auVar2._0_8_ = unaff_RSI;
  auVar2._12_4_ = uVar12;
  uVar10 = SUB164(_DAT_18001a990 ^ auVar1,0);
  uVar9 = SUB168(_DAT_18001a990 ^ auVar1,0);
  uVar6 = SUB164(auVar7 ^ auVar2,0);
  uVar4 = SUB168(auVar7 ^ auVar2,0);
  lVar11 = ((ulonglong)_DAT_180ca3c30 * (unaff_RSI & 0xffffffff) +
            (ulonglong)_DAT_180ca3c20 * (ulonglong)uVar12 << 0x20) +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_180ca3c20;
  uVar8 = _DAT_18318dcd8 >> 1 | _DAT_18318dcd8;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar8 = uVar8 >> 0x20 | uVar8;
  uVar8 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_18318dcd8;
  uVar4 = (((ulonglong)_DAT_180ca3c00 * (ulonglong)uVar6 +
            ((ulonglong)_DAT_180ca3c10 * (ulonglong)uVar6 +
             (uVar4 >> 0x20) * (ulonglong)_DAT_180ca3c00 << 0x20) + lVar11 +
           (ulonglong)_DAT_180ca3be0 * (ulonglong)uVar10 +
           ((ulonglong)_DAT_180ca3bf0 * (ulonglong)uVar10 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_180ca3be0 << 0x20) +
           ((ulonglong)_DAT_180ca3bd0 * (ulonglong)uVar5 << 0x20 |
           (ulonglong)_DAT_180ca3bc0 * (ulonglong)uVar5) +
           ((ulonglong)_DAT_180ca3bb0 * (unaff_RSI & 0xffffffff) +
            (ulonglong)_DAT_180ca3ba0 * (ulonglong)uVar12 << 0x20) +
           (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_180ca3ba0) -
          ((ulonglong)uVar6 * (ulonglong)_DAT_180ca3c80 +
           ((ulonglong)_DAT_180ca3cb0 * (ulonglong)uVar6 +
            (uVar4 >> 0x20) * (ulonglong)_DAT_180ca3c80 << 0x20) + lVar11 +
          (ulonglong)uVar10 * (ulonglong)_DAT_180ca3c90 +
          ((ulonglong)_DAT_180ca3ca0 * (ulonglong)uVar10 +
           (uVar9 >> 0x20) * (ulonglong)_DAT_180ca3c90 << 0x20) +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180ca3c70 << 0x20 |
          (ulonglong)_DAT_180ca3c60 * (ulonglong)uVar5) +
          ((ulonglong)_DAT_180ca3c50 * (unaff_RSI & 0xffffffff) +
           (ulonglong)_DAT_180ca3c40 * (ulonglong)uVar12 << 0x20) +
          (unaff_RSI & 0xffffffff) * (ulonglong)_DAT_180ca3c40)) + 0xfbb3ab104409510f;
  _DAT_18318dcc0 = _DAT_18318dfa0 ^ uVar8 ^ uVar4;
  _DAT_18318e0d0 = (_DAT_18318e0d0 ^ uVar8) + uVar4 ^ 0x80f6a44b3145a1b7;
  _DAT_18318de20 = (_DAT_18318de20 * 0x9dc4dc7b508d27b ^ _DAT_18318e0d0) + uVar8;
  _DAT_18318e090 = _DAT_18318de20 ^ _DAT_18318e0d0;
  uVar8 = (~_DAT_18318dbb8 + 0xdbc8b0df41f60c82) *
          ((_DAT_18318e0f0 ^ 0x1dbe9cbbf2b6c1a) + (_DAT_18318e0f0 & 0x1dbe9cbbf2b6c1a) * 2);
  uVar8 = (uVar8 | _DAT_18318dd30) + (uVar8 & _DAT_18318dd30);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18318dc78 = uVar4;
  _DAT_18318dd90 = func_0x000187886160((uVar8 | 0xda135914fedd609b) + (uVar8 & 0xda135914fedd609b));
  _DAT_18318db08 =
       (_DAT_18318db08 ^ _DAT_18318db00 ^ 0x1dbe9cb3b094f3f) + 0xda1359147aff43be ^
       0xf50aa2186f7bba0e;
  _DAT_18318dd68 =
       (_DAT_18318dd68 * -0x76374751136bb9ef ^ _DAT_18318db08) +
       (_DAT_18318db00 ^ 0x1dbe9cb3b094f3f);
  _DAT_18318dba8 = _DAT_18318dd68 ^ _DAT_18318db08;
  _DAT_18318dfe8 = 0xda1359147aff43be;
  uVar8 = (_DAT_18318dd38 ^ _DAT_180ca3cc0) + _DAT_18318dde8 + 0x84222cda;
  uVar9 = (_DAT_18318dde8 ^ _UNK_180ca3cc8) + _DAT_18318dd38 + 0x3df849cf4b6968bc;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18318dd38 ^ _DAT_180ca3cc0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18318dde8 ^ _UNK_180ca3cc8;
  _DAT_18318df28 =
       func_0x000187886160((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18318dd38 + 0x3df849cf4b6968bc) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18318dde8 + 0x84222cda));
  uVar8 = (_DAT_18318df28 ^ 0x3df849cf4b696fff) * 0x41e84ffaea57739 ^ 0xfff;
  _DAT_18318dbc0 = _DAT_18318dd80 ^ uVar8 ^ 0x3df849cf4b6978bb;
  _DAT_18318dd98 = (_DAT_18318dd98 ^ uVar8) + 0x3df849cf4b6978bb ^ 0xe95d39a91569e1e4;
  _DAT_18318de78 = (_DAT_18318de78 * 0x54c846308bc2c6ed ^ _DAT_18318dd98) + uVar8;
  _DAT_18318e008 = _DAT_18318de78 ^ _DAT_18318dd98;
  _DAT_18318de70 = 0x3df849cf4b6978bb;
  _DAT_18318ded0 = func_0x000187886160(_DAT_18318def0 ^ 0xb6463fab9a4bbe40);
  uVar8 = (_DAT_18318ded0 ^ 0x88c0dcbaebe0e5ca) & 0xffffffffffffff;
  _DAT_18318de90 = (_DAT_18318de90 ^ uVar8) + 0x773f2345141f1a36 ^ 0x7600852c6b38ad80;
  _DAT_18318dbd8 = (_DAT_18318dbd8 * 0xcc0b61a4ab601a7 ^ _DAT_18318de90) + uVar8;
  _DAT_18318dcd8 = _DAT_18318dbd8 ^ _DAT_18318de90;
  _DAT_18318dc00 = 0x773f2345141f1a36;
  uVar8 = (~_DAT_18318ddd0 + 0x773f2345141f1a37) *
          ((_DAT_18318dc88 ^ 0x88c0dcba6fc2d6ec) + (_DAT_18318dc88 & 0x8c0dcba6fc2d6ec) * 2);
  uVar8 = (uVar8 | _DAT_18318dff0) + (uVar8 & _DAT_18318dff0);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18318dd30 = func_0x000187886160((uVar8 | 0xffffffff7bddccda) + (uVar8 & 0xffffffff7bddccda));
  _DAT_18318db00 = _DAT_18318dd78 ^ _DAT_18318dd30 ^ 0xfff;
  _DAT_18318dfc8 = (_DAT_18318dfc8 ^ _DAT_18318dd30) + 0xfff ^ 0xe697e0561f745d1c;
  _DAT_18318de48 = (_DAT_18318de48 * -0x1224b94c90420335 ^ _DAT_18318dfc8) + _DAT_18318dd30;
  _DAT_18318dec8 = _DAT_18318de48 ^ _DAT_18318dfc8;
  _DAT_18318dba0 = 0xfff;
  uVar8 = (~_DAT_18318e048 + 0xb83ba11817f9ac9f) *
          ((_DAT_18318ddc0 ^ 0x84222cda) + (ulonglong)((uint)_DAT_18318ddc0 & 0x84222cda) * 2);
  uVar8 = (uVar8 | _DAT_18318dda8) + (uVar8 & _DAT_18318dda8);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18318e040 = func_0x000187886160((uVar8 | 0xb83ba11893db8044) + (uVar8 & 0xb83ba11893db8044));
  uVar8 = _DAT_18318e040 ^ 0xb83ba11817f9ac9e;
  _DAT_18318db80 = _DAT_18318dd80 ^ uVar8 ^ 0xb83ba11817f9bc9d;
  _DAT_18318ddf8 = (_DAT_18318ddf8 ^ uVar8) + 0xb83ba11817f9bc9d ^ 0x759a7b9431277692;
  _DAT_18318e0e0 = (_DAT_18318e0e0 * 0x64ad43db85d87db1 ^ _DAT_18318ddf8) + uVar8;
  _DAT_18318de70 = _DAT_18318e0e0 ^ _DAT_18318ddf8;
  _DAT_18318e030 = 0xb83ba11817f9bc9d;
  _DAT_18318dde0 = func_0x000187886160(_DAT_18318e010 + 0x3844e2e8d9d2d3daU ^ 0x69);
  _DAT_18318e0a8 = _DAT_18318e0f8 ^ _DAT_18318e018 ^ 0xfff;
  _DAT_18318dba8 = (_DAT_18318dba8 ^ _DAT_18318e018) + 0xfff ^ 0xb93f42193a27c6dc;
  _DAT_18318e078 = (_DAT_18318e078 * -0x1a04950ae22d9745 ^ _DAT_18318dba8) + _DAT_18318e018;
  _DAT_18318de40 = _DAT_18318e078 ^ _DAT_18318dba8;
  _DAT_18318db00 = 0xfff;
  uVar8 = (~_DAT_18318e0c0 + 0xda1359147aff43bf) *
          ((_DAT_18318db48 ^ 0xfbe432ae696fdc5a) + (_DAT_18318db48 & 0x7be432ae696fdc5a) * 2);
  uVar8 = (uVar8 | _DAT_18318dd60) + (uVar8 & _DAT_18318dd60);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18318dfb0 = func_0x000187886160((uVar8 | 0x21f76bba13909fe4) + (uVar8 & 0x21f76bba13909fe4));
  uVar8 = _DAT_18318dfb0 ^ 0x4a4f0f4f8f42dd42;
  _DAT_18318e030 = _DAT_18318e050 ^ uVar8 ^ 0xd5f78bc3684d433d;
  _DAT_18318e028 = (_DAT_18318e028 ^ uVar8) + 0xd5f78bc3684d433d ^ 0x24ceb577256b368e;
  _DAT_18318dfe0 = (_DAT_18318dfe0 * 0x2c707a280b0d5303 ^ _DAT_18318e028) + uVar8;
  _DAT_18318e058 = _DAT_18318dfe0 ^ _DAT_18318e028;
  _DAT_18318dee0 = 0xd5f78bc3684d433d;
  _DAT_18318ddd0 = func_0x000187886160(_DAT_18318db10 + 0x5573d70edbd88fe0U ^ 0x22);
  uVar8 = _DAT_18318ddd0 << 0x36 | _DAT_18318ddd0 >> 10;
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  bVar3 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar8 = (uint)bVar3 + (uint)bVar3 ^ uVar8;
  _DAT_18318dd00 = (_DAT_18318dd00 ^ uVar8) + 0x21f76bba97b2bcc1 ^ 0x5452f9639d2b180f;
  _DAT_18318e0f8 = (_DAT_18318e0f8 * 0x2988b8e259aac2ef ^ _DAT_18318dd00) + uVar8;
  _DAT_18318db58 = _DAT_18318e0f8 ^ _DAT_18318dd00;
  _DAT_18318df48 = 0x21f76bba97b2bcc1;
  uVar8 = (_DAT_18318e008 ^ _DAT_180ca3cd0) + _DAT_18318de10 + 0xd5f78bc3ec6f6018;
  uVar9 = (_DAT_18318de10 ^ _UNK_180ca3cd8) + _DAT_18318e008 + 0xd5f78bc3684d433d;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18318e008 ^ _DAT_180ca3cd0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18318de10 ^ _UNK_180ca3cd8;
  _DAT_18318e048 =
       func_0x000187886160((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18318e008 + 0xd5f78bc3684d433d) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18318de10 + 0xd5f78bc3ec6f6018));
  _DAT_18318de70 = _DAT_18318e048 ^ 0x38ed8ae1145afc89;
  _DAT_18318dfb0 = _DAT_18318dfb0 ^ _DAT_18318de70 ^ 0x28247a14c9324073;
  _DAT_18318dc08 = (_DAT_18318dc08 * 0x6056a418499d4869 ^ _DAT_18318dfb0) + _DAT_18318de70;
  _DAT_18318dcb8 = _DAT_18318dc08 ^ _DAT_18318dfb0;
  _DAT_18318e078 = 0;
  uVar8 = (_DAT_18318db18 ^ 0x84222cda) + _DAT_18318e040 + 0x84222cda;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18318db18 ^ 0x84222cda;
  uVar9 = ((_DAT_18318e040 + _DAT_18318db18) * 0x2000 | _DAT_18318e040 + _DAT_18318db18 >> 0x33) ^
          _DAT_18318e040;
  _DAT_18318dee8 =
       func_0x000187886160((uVar9 << 0x1d | uVar9 >> 0x23) - _DAT_18318db18 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18318e040 + 0x84222cda));
  _DAT_18318ddd0 = _DAT_18318de48 ^ _DAT_18318e0d8 ^ 0xfff;
  _DAT_18318df70 = (_DAT_18318df70 ^ _DAT_18318e0d8) + 0xfff ^ 0xf67b5f39e9b6f360;
  _DAT_18318dfb0 = (_DAT_18318dfb0 * 0x597e9668ba6948d5 ^ _DAT_18318df70) + _DAT_18318e0d8;
  _DAT_18318de38 = _DAT_18318dfb0 ^ _DAT_18318df70;
  _DAT_18318ddf8 = 0xfff;
  uVar8 = (_DAT_18318dc78 ^ _DAT_180ca3ce0) + _DAT_18318dd78 + 0xfbe432ae696fdc5a;
  uVar9 = (_DAT_18318dd78 ^ _UNK_180ca3ce8) + _DAT_18318dc78 + 0x41bcd5112b20080;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18318dc78 ^ _DAT_180ca3ce0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18318dd78 ^ _UNK_180ca3ce8;
  _DAT_18318e0c0 =
       func_0x000187886160((uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18318dc78 + 0x41bcd5112b20080) ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18318dd78 + 0xfbe432ae696fdc5a));
  uVar8 = ~_DAT_18318e0c0;
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar8 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar8;
  uVar9 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar8 = ((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uVar8;
  _DAT_18318dba8 = _DAT_18318dba8 ^ uVar8 ^ 0xb2902423cffcccdc;
  _DAT_18318e020 = (_DAT_18318e020 * -0xd778eab5e080b67 ^ _DAT_18318dba8) + uVar8;
  _DAT_18318ddb0 = _DAT_18318e020 ^ _DAT_18318dba8;
  _DAT_18318df88 = 0;
  uVar8 = func_0x000187886160(_DAT_18318dfd8 ^ 0xffec007ca5ffe157);
  uVar9 = (ulonglong)(~(uint)uVar8 >> 0x10 & 0xfff);
  _DAT_18318db28 = _DAT_18318dee0 ^ uVar9 ^ 0xfff;
  _DAT_18318ddc0 = (uVar8 ^ uVar9) + 0xfff ^ 0x693248becd3be5c9;
  _DAT_18318db98 = (_DAT_18318db98 * -0x23f806c0c4690393 ^ _DAT_18318ddc0) + uVar9;
  _DAT_18318dd60 = _DAT_18318db98 ^ _DAT_18318ddc0;
  _DAT_18318dd50 = 0xfff;
  uVar8 = (_DAT_18318e020 ^ 0x84222cda) + _DAT_18318db98 + 0x84222cda;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18318e020 ^ 0x84222cda;
  uVar9 = ((_DAT_18318db98 + _DAT_18318e020) * 0x2000 | _DAT_18318db98 + _DAT_18318e020 >> 0x33) ^
          _DAT_18318db98;
  _DAT_18318dfc8 =
       func_0x000187886160((uVar9 << 0x1d | uVar9 >> 0x23) - _DAT_18318e020 ^
                           (uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18318db98 + 0x84222cda));
  uVar8 = (ulonglong)(~(uint)_DAT_18318dfc8 & 0xfff);
  _DAT_18318e070 = _DAT_18318dcc8 ^ uVar8 ^ 0xfff;
  _DAT_18318e0d8 = (_DAT_18318e0d8 ^ uVar8) + 0xfff ^ 0x99cdb631ab9ca14c;
  _DAT_18318dd70 = (_DAT_18318dd70 * 0x7e36682aef04db3d ^ _DAT_18318e0d8) + uVar8;
  _DAT_18318de88 = _DAT_18318dd70 ^ _DAT_18318e0d8;
  _DAT_18318de38 = 0xfff;
  switch(0xfff < uVar4) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7864edb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187864edb(void)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  longlong unaff_RBX;
  ulonglong uVar11;
  undefined8 *unaff_RBP;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined1 auVar21 [16];
  uint uVar22;
  undefined1 auVar23 [16];
  uint uVar24;
  ulonglong uVar25;
  undefined8 unaff_XMM12_Qa;
  ulonglong uVar26;
  undefined8 unaff_XMM12_Qb;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined8 unaff_XMM14_Qa;
  undefined8 unaff_XMM14_Qb;
  
  unaff_RBP[2] = unaff_XMM14_Qa;
  unaff_RBP[3] = unaff_XMM14_Qb;
  *unaff_RBP = unaff_XMM13_Qa;
  unaff_RBP[1] = unaff_XMM13_Qb;
  unaff_RBP[4] = unaff_XMM12_Qa;
  unaff_RBP[5] = unaff_XMM12_Qb;
  uVar10 = *(ulonglong *)(unaff_RBX + -8);
  _DAT_18318de40 = func_0x000187886160(_DAT_18318de20 + 0xc09cdb2f4f360ee5 ^ 0xcb);
  uVar9 = ~((_DAT_18318de40 ^ 0xcc22858890a0a205) << 0x1d |
           (_DAT_18318de40 ^ 0xcc22858890a0a205) >> 0x23) & 0x33def553fbcf7df3;
  _DAT_18318db70 = (_DAT_18318db70 ^ uVar9) + 0x37ffffd3ffdffff7 ^ 0xdd19bddf85d78abf;
  _DAT_18318dc18 = (_DAT_18318dc18 * 0x628f335e487e6c7f ^ _DAT_18318db70) + uVar9;
  _DAT_18318dfd8 = _DAT_18318dc18 ^ _DAT_18318db70;
  _DAT_18318e0f8 = 0x37ffffd3ffdffff7;
  uVar9 = ((_DAT_18318e058 ^ 0xfe1ec8fa0b09c0c4) + (_DAT_18318e058 & 0x7e1ec8fa0b09c0c4) * 2) *
          -0x3e01ac3b048c59da;
  uVar9 = (uVar9 | _DAT_18318db40) + (uVar9 & _DAT_18318db40);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18318db98 = func_0x000187886160((uVar9 | 0x7e09b62f05a66d9) + (uVar9 & 0x7e09b62f05a66d9));
  _DAT_18318db28 =
       (_DAT_18318db28 ^ _DAT_18318db98 * -0x65a4d4a69ec28f6f) + 0x7e09b62747845fc ^
       0x1292642b739db8b2;
  _DAT_18318db60 =
       (_DAT_18318db60 * 0x696da3796ccbfc0d ^ _DAT_18318db28) + _DAT_18318db98 * -0x65a4d4a69ec28f6f
  ;
  _DAT_18318e078 = _DAT_18318db60 ^ _DAT_18318db28;
  _DAT_18318de30 = 0x7e09b62747845fc;
  _DAT_18318de28 = func_0x000187886160(_DAT_18318dbb0 + 0x1bb4fa3675bd8fa9 ^ 0xd6);
  _DAT_18318dcf0 = (_DAT_18318dcf0 ^ _DAT_18318de28) + 0x45f831c38c6d9748 ^ 0x1df06e5c55a014f1;
  _DAT_18318deb8 = (_DAT_18318deb8 * -0x1fc902e6c2732a4f ^ _DAT_18318dcf0) + _DAT_18318de28;
  _DAT_18318e0c8 = _DAT_18318deb8 ^ _DAT_18318dcf0;
  _DAT_18318de80 = 0x45f831c38c6d9748;
  _DAT_18318df88 = func_0x000187886160(_DAT_18318de78 + 0xbc53a7f7daef38baU ^ 0x5c);
  uVar9 = _DAT_18318df88 - (_DAT_18318df88 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar9 = (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 2 ^
          _DAT_18318df88;
  _DAT_18318ddd8 = _DAT_18318e080 ^ uVar9 ^ 0xba07ce3c739268b0;
  _DAT_18318e0c8 = (_DAT_18318e0c8 ^ uVar9) + 0xba07ce3c739268b0 ^ 0xe7ae57eb4d22f5e8;
  _DAT_18318e038 = (_DAT_18318e038 * -0x452154b2ca79a839 ^ _DAT_18318e0c8) + uVar9;
  _DAT_18318dd40 = _DAT_18318e038 ^ _DAT_18318e0c8;
  _DAT_18318e068 = -0x45f831c38c6d9750;
  _DAT_18318deb8 = func_0x000187886160(_DAT_18318dd20 ^ 0x6fc48ef5d42a3b1d);
  uVar9 = _DAT_18318deb8 & 0x3ffffffffffffff;
  _DAT_18318db20 = _DAT_18318e050 ^ uVar9 ^ 0xfffffffffffffff8;
  _DAT_18318de48 = (_DAT_18318de48 ^ uVar9) - 8 ^ 0xc4cbe6c212ab8af0;
  _DAT_18318dde8 = (_DAT_18318dde8 * -0x4f6b1288cd1f4357 ^ _DAT_18318de48) + uVar9;
  _DAT_18318de60 = _DAT_18318dde8 ^ _DAT_18318de48;
  _DAT_18318e078 = 0xfffffffffffffff8;
  uVar9 = (_DAT_18318df30 ^ _DAT_180ca3cf0) + _DAT_18318dc80 + 0x84222325;
  uVar18 = (_DAT_18318dc80 ^ _UNK_180ca3cf8) + _DAT_18318df30 + 0xf83c6934a95c3edd;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18318df30 ^ _DAT_180ca3cf0;
  uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ _DAT_18318dc80 ^ _UNK_180ca3cf8;
  _DAT_18318dbf8 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_18318df30 + 0xf83c6934a95c3edd)
                           ^ (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18318dc80 + 0x84222325));
  _DAT_18318e090 = (_DAT_18318e090 ^ _DAT_18318dbf8) + 0x7c396cb56a3c123 ^ 0x14ba81a39ebec5b5;
  _DAT_18318dce8 = (_DAT_18318dce8 * -0x5d1ca9849a23d8f ^ _DAT_18318e090) + _DAT_18318dbf8;
  _DAT_18318de10 = _DAT_18318dce8 ^ _DAT_18318e090;
  _DAT_18318ded0 = 0x7c396cb56a3c123;
  _DAT_18318e078 = func_0x000187886160(_DAT_18318dc00 + 0x38a1be31ff8a80fcU ^ 0x30);
  _DAT_18318ddb0 = _DAT_18318dda8 ^ _DAT_18318e078 ^ 0xf83c6934a95c3ed5;
  _DAT_18318dfe8 = (_DAT_18318dfe8 ^ _DAT_18318e078) + 0xf83c6934a95c3ed5 ^ 0x59745af868ccbb09;
  _DAT_18318e0e0 = (_DAT_18318e0e0 * -0x14a6dbbf8efd75f1 ^ _DAT_18318dfe8) + _DAT_18318e078;
  _DAT_18318dc90 = _DAT_18318e0e0 ^ _DAT_18318dfe8;
  _DAT_18318dc78 = 0xf83c6934a95c3ed5;
  uVar9 = (_DAT_18318dd08 ^ _DAT_180ca3d00) + _DAT_18318db58 + 0xf83c69342d7e1df0;
  uVar18 = (_DAT_18318db58 ^ _UNK_180ca3d08) + _DAT_18318dd08 + 0x7c396cb56a3c123;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18318dd08 ^ _DAT_180ca3d00;
  uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ _DAT_18318db58 ^ _UNK_180ca3d08;
  _DAT_18318dba0 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_18318dd08 + 0x7c396cb56a3c123)
                           ^ (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18318db58 + 0xf83c69342d7e1df0)
                          );
  uVar9 = _DAT_18318dba0 ^ 0xf83c6934a95c3ed5;
  _DAT_18318df50 = _DAT_18318dbf8 ^ uVar9 ^ 0xfffffffffffffff8;
  _DAT_18318db60 = (_DAT_18318db60 ^ uVar9) - 8 ^ 0xd7e7f50242535a8;
  _DAT_18318db00 = (_DAT_18318db00 * 0x7f49d6afe0e33133 ^ _DAT_18318db60) + uVar9;
  _DAT_18318dce8 = _DAT_18318db00 ^ _DAT_18318db60;
  _DAT_18318dd80 = 0xfffffffffffffff8;
  uVar9 = (~_DAT_18318dec0 + 0x3df007d3ec5cc001) *
          ((_DAT_18318de80 ^ 0x84222325) + (ulonglong)((uint)_DAT_18318de80 & 0x84222325) * 2);
  uVar9 = (uVar9 | _DAT_18318dcb0) + (uVar9 & _DAT_18318dcb0);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18318dba0 = func_0x000187886160((uVar9 | 0x3df007d3687ee325) + (uVar9 & 0x3df007d3687ee325));
  _DAT_18318dfd8 =
       (_DAT_18318dfd8 ^ _DAT_18318dba0 & 0xfffffffff8000000) + 0xc20ff82c13a34000 ^
       0xaa01bbebd9711786;
  _DAT_18318db90 =
       (_DAT_18318db90 * 0x54feda0610be03db ^ _DAT_18318dfd8) +
       (_DAT_18318dba0 & 0xfffffffff8000000);
  _DAT_18318dd58 = _DAT_18318db90 ^ _DAT_18318dfd8;
  _DAT_18318de18 = -0x3df007d3ec5cc000;
  uVar9 = (_DAT_18318db10 ^ _DAT_180ca3d10) + _DAT_18318e000 + 0x37ffffd37bfddcd2;
  uVar18 = (_DAT_18318e000 ^ _UNK_180ca3d18) + _DAT_18318db10 + 0x7e09b62747845fc;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18318db10 ^ _DAT_180ca3d10;
  uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ _DAT_18318e000 ^ _UNK_180ca3d18;
  _DAT_18318ddf8 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_18318db10 + 0x7e09b62747845fc)
                           ^ (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18318e000 + 0x37ffffd37bfddcd2)
                          );
  _DAT_18318e000 = _DAT_18318dc68 ^ _DAT_18318ddf8 ^ 0x3fe09b36745845f3;
  _DAT_18318dca8 = (_DAT_18318dca8 ^ _DAT_18318ddf8) + 0x3fe09b36745845f3 ^ 0xaba898ab1a4f1505;
  _DAT_18318dff8 = (_DAT_18318dff8 * 0xd5ce967f7028d5d ^ _DAT_18318dca8) + _DAT_18318ddf8;
  _DAT_18318dd90 = _DAT_18318dff8 ^ _DAT_18318dca8;
  _DAT_18318e0b8 = 0x3fe09b36745845f3;
  uVar9 = (_DAT_18318dbf8 ^ _DAT_180ca3d20) + _DAT_18318ddb0 + 0x301f64b10f85992e;
  uVar18 = (_DAT_18318ddb0 ^ _UNK_180ca3d28) + _DAT_18318dbf8 + 0xfc13684e8b08be8;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18318dbf8 ^ _DAT_180ca3d20;
  uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ _DAT_18318ddb0 ^ _UNK_180ca3d28;
  _DAT_18318dc60 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_18318dbf8 + 0xfc13684e8b08be8)
                           ^ (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18318ddb0 + 0x301f64b10f85992e)
                          );
  _DAT_18318dcd0 = _DAT_18318df00 ^ _DAT_18318db00 ^ 0x3fe09b36745845f3;
  _DAT_18318e0e0 = (_DAT_18318e0e0 ^ _DAT_18318db00) + 0x3fe09b36745845f3 ^ 0x498a0e9b70423a59;
  _DAT_18318df18 = (_DAT_18318df18 * -0x1f945a4e2746a0d7 ^ _DAT_18318e0e0) + _DAT_18318db00;
  _DAT_18318db68 = _DAT_18318df18 ^ _DAT_18318e0e0;
  _DAT_18318dbe0 = 0x3fe09b36745845f3;
  uVar9 = (_DAT_18318db98 ^ 0xffffffff7bdddcdd) + (_DAT_18318dc78 - 0x84222323);
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18318db98 ^ 0xffffffff7bdddcdd;
  uVar18 = ((_DAT_18318dc78 + _DAT_18318db98) * 0x2000 | _DAT_18318dc78 + _DAT_18318db98 >> 0x33) ^
           _DAT_18318dc78;
  _DAT_18318db80 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - _DAT_18318db98 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - (_DAT_18318dc78 - 0x84222323));
  uVar9 = _DAT_18318db80 & 0xfffffffffc000000;
  _DAT_18318dfa8 = _DAT_18318de88 ^ uVar9 ^ 0xfffffffffffffff8;
  _DAT_18318dd48 = (_DAT_18318dd48 ^ uVar9) - 8 ^ 0xbbe149aa7c29bcc5;
  _DAT_18318dde0 = (_DAT_18318dde0 * -0x1d4a0dc5391dd495 ^ _DAT_18318dd48) + uVar9;
  _DAT_18318e0e0 = _DAT_18318dde0 ^ _DAT_18318dd48;
  _DAT_18318e0a0 = 0xfffffffffffffff8;
  uVar9 = func_0x000187886160(_DAT_18318dcb8 + 0x94c4e939da163dee ^ 0xb);
  uVar9 = uVar9 << 0x22 | uVar9 >> 0x1e;
  _DAT_18318dfa0 = _DAT_18318e040 ^ uVar9 ^ 0xfffffffffffffff8;
  _DAT_18318db88 = (_DAT_18318db88 ^ uVar9) - 8 ^ 0xda6994bb084f6404;
  _DAT_18318db00 = (_DAT_18318db00 * 0x24464b885292d545 ^ _DAT_18318db88) + uVar9;
  _DAT_18318db38 = _DAT_18318db00 ^ _DAT_18318db88;
  _DAT_18318e070 = 0xfffffffffffffff8;
  uVar9 = (~_DAT_18318df20 + 0x33def553fbcf7df4) *
          ((_DAT_18318df70 ^ 0x33def5537fed5ed6) + (_DAT_18318df70 & 0x33def5537fed5ed6) * 2);
  uVar9 = (uVar9 | _DAT_18318de48) + (uVar9 & _DAT_18318de48);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18318dbc0 = func_0x000187886160((uVar9 | 0x84222325) + (ulonglong)((uint)uVar9 & 0x84222325))
  ;
  _DAT_18318dd20 = _DAT_18318dd20 ^ _DAT_18318dbc0 ^ 0x4a0a5faa6db8a700;
  _DAT_18318e050 = (_DAT_18318e050 * -0x4b2e8cf592f8e121 ^ _DAT_18318dd20) + _DAT_18318dbc0;
  _DAT_18318db10 = _DAT_18318e050 ^ _DAT_18318dd20;
  _DAT_18318db58 = 0;
  uVar9 = ((_DAT_18318dda0 ^ 0xffffffff7bdddcdd) + (_DAT_18318dda0 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_18318df98;
  uVar9 = (uVar9 | _DAT_18318dc80) + (uVar9 & _DAT_18318dc80);
  uVar9 = uVar9 * 0x2000 ^ uVar9;
  uVar9 = uVar9 >> 7 ^ uVar9;
  uVar9 = uVar9 << 0x11 ^ uVar9;
  _DAT_18318dd18 = func_0x000187886160((uVar9 | 0xffffffff7bdddcdd) + (uVar9 & 0xffffffff7bdddcdd));
  uVar9 = ~_DAT_18318dd18 & 0xfffffffffffffff0;
  _DAT_18318e028 = _DAT_18318dde8 ^ uVar9 ^ 0xfffffffffffffff8;
  _DAT_18318db58 = (_DAT_18318db58 ^ uVar9) - 8 ^ 0xd3c77b7b8c962400;
  _DAT_18318dbf0 = (_DAT_18318dbf0 * 0x2b1e287890ca1327 ^ _DAT_18318db58) + uVar9;
  _DAT_18318e0c0 = _DAT_18318dbf0 ^ _DAT_18318db58;
  _DAT_18318dec0 = 0xfffffffffffffff8;
  uVar11 = unaff_RBX - 8;
  uVar9 = uVar11 ^ 0x84222325 ^ _DAT_18318de40;
  lVar12 = (uVar11 ^ 0x84222325) + _DAT_18318e0a0;
  uVar18 = uVar9 + lVar12;
  uVar19 = (uVar10 ^ _DAT_18318e0a0) + _DAT_18318de40 + uVar10;
  uVar9 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ uVar9;
  uVar18 = (uVar19 * 0x2000 | uVar19 >> 0x33) ^ uVar10 ^ _DAT_18318e0a0;
  _DAT_18318db28 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_18318de40 + uVar10) ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar12);
  uVar13 = (undefined4)uVar11;
  uVar15 = (uint)(uVar11 >> 0x20);
  unaff_RBP[7] = uVar10;
  uVar14 = (undefined4)uVar10;
  uVar16 = (uint)(uVar10 >> 0x20);
  auVar6._8_4_ = uVar13;
  auVar6._0_8_ = uVar11;
  auVar6._12_4_ = uVar15;
  uVar9 = (ulonglong)_DAT_180ca3d40;
  auVar7._8_4_ = uVar13;
  auVar7._0_8_ = uVar11;
  auVar7._12_4_ = uVar15;
  auVar2._8_4_ = uVar14;
  auVar2._0_8_ = uVar10;
  auVar2._12_4_ = uVar16;
  auVar3._8_4_ = uVar14;
  auVar3._0_8_ = uVar10;
  auVar3._12_4_ = uVar16;
  auVar4._8_4_ = uVar14;
  auVar4._0_8_ = uVar10;
  auVar4._12_4_ = uVar16;
  uVar1 = (ulonglong)_DAT_180ca3d30;
  uVar18 = (ulonglong)_DAT_180ca3d30;
  uVar19 = (ulonglong)_DAT_180ca3d60;
  auVar21._8_4_ = uVar14;
  auVar21._0_8_ = uVar10;
  auVar21._12_4_ = uVar16;
  auVar21 = auVar21 ^ _DAT_18001a710;
  auVar23._8_4_ = 0xffffffff;
  auVar23._0_8_ = 0xffffffffffffffff;
  auVar23._12_4_ = 0xffffffff;
  auVar8._8_4_ = uVar13;
  auVar8._0_8_ = uVar11;
  auVar8._12_4_ = uVar15;
  unaff_RBP[0xc] = (ulonglong)uVar16;
  unaff_RBP[0xd] = auVar4._8_8_ >> 0x20;
  uVar26 = (uVar11 & 0xffffffff) * (uVar10 & 0xffffffff) +
           ((ulonglong)uVar15 * (uVar10 & 0xffffffff) + (uVar11 & 0xffffffff) * (ulonglong)uVar16 <<
           0x20);
  auVar5._8_4_ = uVar14;
  auVar5._0_8_ = uVar10;
  auVar5._12_4_ = uVar16;
  *(undefined1 (*) [16])(unaff_RBP + 8) = auVar5;
  uVar24 = SUB164(auVar7 & auVar2,0);
  uVar17 = SUB164(auVar6 ^ auVar3,0);
  uVar20 = auVar21._0_4_;
  uVar25 = auVar21._0_8_;
  lVar12 = (uVar26 & 0xffffffff) * (ulonglong)_DAT_180ca3dd0 +
           ((ulonglong)_DAT_180ca3de0 * (uVar26 & 0xffffffff) +
            (uVar26 >> 0x20) * (ulonglong)_DAT_180ca3dd0 << 0x20);
  uVar26 = _DAT_18318db28 & 0x3ffffffffffff;
  uVar22 = SUB164(auVar23 ^ auVar8,0);
  uVar9 = (((ulonglong)_DAT_180ca3d70 * (ulonglong)uVar20 +
            ((ulonglong)_DAT_180ca3dc0 * (ulonglong)uVar20 +
             (uVar25 >> 0x20) * (ulonglong)_DAT_180ca3d70 << 0x20) +
            (ulonglong)uVar17 * (ulonglong)_DAT_180ca3da0 +
            ((ulonglong)_DAT_180ca3db0 * (ulonglong)uVar17 +
             (SUB168(auVar6 ^ auVar3,0) >> 0x20) * (ulonglong)_DAT_180ca3da0 << 0x20) +
            (ulonglong)uVar24 * (ulonglong)_DAT_180ca3d80 +
            ((ulonglong)_DAT_180ca3d90 * (ulonglong)uVar24 +
             (SUB168(auVar7 & auVar2,0) >> 0x20) * (ulonglong)_DAT_180ca3d80 << 0x20) +
            (uVar19 * (uVar10 & 0xffffffff) + (ulonglong)_DAT_180ca3d50 * (ulonglong)uVar16 << 0x20)
            + (uVar10 & 0xffffffff) * (ulonglong)_DAT_180ca3d50 +
            (uVar9 * (uVar11 & 0xffffffff) + uVar18 * uVar15 << 0x20) +
            (uVar11 & 0xffffffff) * uVar1 + lVar12) -
          ((ulonglong)uVar20 * (_DAT_180ca3e20 & 0xffffffff) +
           ((uVar25 >> 0x20) * (_DAT_180ca3e20 & 0xffffffff) +
            (ulonglong)_DAT_180ca3e10 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)uVar22 * (ulonglong)_DAT_180ca3e00 +
           ((SUB168(auVar23 ^ auVar8,0) >> 0x20) * (ulonglong)_DAT_180ca3e00 +
            (ulonglong)_DAT_180ca3df0 * (ulonglong)uVar22 << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_180ca3e00 +
           ((ulonglong)uVar15 * (ulonglong)_DAT_180ca3e00 +
            (uVar11 & 0xffffffff) * (ulonglong)_DAT_180ca3df0 << 0x20) +
           (uVar10 & 0xffffffff) * (_DAT_180ca3e20 & 0xffffffff) +
           ((ulonglong)*(uint *)(unaff_RBP + 0xc) * (_DAT_180ca3e20 & 0xffffffff) +
            (ulonglong)*(uint *)(unaff_RBP + 8) * (ulonglong)_DAT_180ca3e10 << 0x20) + lVar12)) +
          0xea0e50971d6dcb49;
  _DAT_18318de30 = uVar9 ^ uVar26;
  _DAT_18318dc08 = (_DAT_18318dc08 ^ uVar26) + uVar9 ^ 0x4153b34900bb8be4;
  _DAT_18318df70 = (_DAT_18318df70 * 0x2446b5d76f8812d9 ^ _DAT_18318dc08) + uVar26;
  _DAT_18318e098 = _DAT_18318df70 ^ _DAT_18318dc08;
  _DAT_18318dd88 = uVar9;
  _DAT_18318e030 = func_0x000187886160(_DAT_18318e008 + 0x1813bd33d5af80cf ^ 0x15);
  uVar10 = (_DAT_18318e030 ^ 0xf9ebf0f8d1bbb76f) & 0x7fffffffffffffff;
  _DAT_18318dca0 = (_DAT_18318dca0 ^ uVar10) + 0xf9ebf0f8d1bbb76f ^ 0x61a69b9800859a20;
  _DAT_18318dd58 = (_DAT_18318dd58 * -0xd65c12e8bfd4cdb ^ _DAT_18318dca0) + uVar10;
  _DAT_18318db40 = _DAT_18318dd58 ^ _DAT_18318dca0;
  _DAT_18318df40 = -0x6140f072e444891;
  uVar10 = func_0x000187886160(_DAT_18318dce8 ^ 0xcfcdd568491898ce);
  _DAT_18318dcd0 =
       (_DAT_18318dcd0 ^ uVar10 & 0xfffffffffff) + 0xe35ae8303c897553 ^ 0xdcb062bad9b2ea7f;
  _DAT_18318db90 = (_DAT_18318db90 * 0x13efd883cb90b98b ^ _DAT_18318dcd0) + (uVar10 & 0xfffffffffff)
  ;
  _DAT_18318dff8 = _DAT_18318db90 ^ _DAT_18318dcd0;
  _DAT_18318dc90 = _DAT_18318dbf0 ^ 0xe35ae8303c897553;
  _DAT_18318dc48 = 0xe35ae8303c897553;
  uVar10 = (~_DAT_18318e070 + 0xa3fe272fb7811f9) *
           ((_DAT_18318de98 ^ 0x84222305) + (ulonglong)((uint)_DAT_18318de98 & 0x84222305) * 2);
  uVar10 = (uVar10 | _DAT_18318db88) + (uVar10 & _DAT_18318db88);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318db30 = func_0x000187886160((uVar10 | 0xa3fe2727f5a32fd) + (uVar10 & 0xa3fe2727f5a32fd));
  uVar10 = _DAT_18318db30 >> 1 | _DAT_18318db30;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
           _DAT_18318db30;
  _DAT_18318dcb8 = _DAT_18318dd78 ^ uVar10 ^ 0xa3fe272fb781218;
  _DAT_18318de70 = (_DAT_18318de70 ^ uVar10) + 0xa3fe272fb781218 ^ 0xf12d62bddd40a423;
  _DAT_18318de18 = (_DAT_18318de18 * 0x36cebbe4d10bba5 ^ _DAT_18318de70) + uVar10;
  _DAT_18318df50 = _DAT_18318de18 ^ _DAT_18318de70;
  _DAT_18318de88 = _DAT_18318db80 ^ 0xa3fe272fb781218;
  _DAT_18318de48 = 0xa3fe272fb781218;
  _DAT_18318ded0 = func_0x000187886160(_DAT_18318dfa8 + 0xb59aae92dd32276 ^ 0xe9);
  uVar10 = _DAT_18318ded0 & 0x7fffffffffffffff ^ 0xa3fe272fb781218;
  _DAT_18318dcf8 = _DAT_18318dc38 ^ uVar10 ^ 0x20;
  _DAT_18318de00 = (_DAT_18318de00 ^ uVar10) + 0x20 ^ 0x5cbd810d894e762;
  _DAT_18318e068 = (_DAT_18318e068 * -0x2c099ec02ef1caff ^ _DAT_18318de00) + uVar10;
  _DAT_18318df88 = _DAT_18318e068 ^ _DAT_18318de00;
  _DAT_18318df38 = 0x20;
  uVar10 = (_DAT_18318dc98 ^ _DAT_180ca3e30) + _DAT_18318e088 + 0x84222305;
  uVar18 = (_DAT_18318e088 ^ _UNK_180ca3e38) + _DAT_18318dc98 + 0x9a137d01f0a7d180;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318dc98 ^ _DAT_180ca3e30;
  uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ _DAT_18318e088 ^ _UNK_180ca3e38;
  _DAT_18318e080 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_18318dc98 + 0x9a137d01f0a7d180)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318e088 + 0x84222305));
  uVar10 = _DAT_18318e080 ^ 0x426fa03e14fa3000;
  _DAT_18318db40 = _DAT_18318de80 ^ uVar10 ^ 0x9a137d01f0a7d1a0;
  _DAT_18318dec0 = (_DAT_18318dec0 ^ uVar10) + 0x9a137d01f0a7d1a0 ^ 0xf9bbcfd62a810bdb;
  _DAT_18318db48 = (_DAT_18318db48 * -0x717b99238c09d04b ^ _DAT_18318dec0) + uVar10;
  _DAT_18318dcd0 = _DAT_18318db48 ^ _DAT_18318dec0;
  _DAT_18318dce0 = 0x9a137d01f0a7d1a0;
  uVar10 = (_DAT_18318de58 ^ _DAT_180ca3e40) + _DAT_18318dd68 + 0x9a137d017485f285;
  uVar18 = (_DAT_18318dd68 ^ _UNK_180ca3e48) + _DAT_18318de58 + 0x65ec82fe0f582e80;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318de58 ^ _DAT_180ca3e40;
  uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ _DAT_18318dd68 ^ _UNK_180ca3e48;
  _DAT_18318ddb0 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_18318de58 + 0x65ec82fe0f582e80)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_18318dd68 + 0x9a137d017485f285));
  _DAT_18318dfd8 = _DAT_18318ddb8 ^ _DAT_18318ddb0 ^ 0x20;
  _DAT_18318de30 = (_DAT_18318de30 ^ _DAT_18318ddb0) + 0x20 ^ 0xd754167991a207c;
  _DAT_18318def0 = (_DAT_18318def0 * 0x67cbbaed81cd5831 ^ _DAT_18318de30) + _DAT_18318ddb0;
  _DAT_18318dce8 = _DAT_18318def0 ^ _DAT_18318de30;
  _DAT_18318dd20 = 0x20;
  uVar10 = (~_DAT_18318dcb0 + 0x50c6e3d7d6e93ac1) *
           ((_DAT_18318ddb8 ^ _DAT_18318ddb0 ^ 0x84222305) +
           (ulonglong)((uint)_DAT_18318dfd8 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_18318e0f8) + (uVar10 & _DAT_18318e0f8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318de58 =
       func_0x000187886160((uVar10 | 0x50c6e3d752cb19e5) + (uVar10 & 0x50c6e3d752cb19e5));
  uVar10 = _DAT_18318de58 >> 1 | _DAT_18318de58;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
           _DAT_18318de58;
  _DAT_18318db10 = (_DAT_18318db10 ^ uVar10) + 0xaf391c282916c540 ^ 0xcfb1bfc44ceaa796;
  _DAT_18318dd90 = (_DAT_18318dd90 * -0x5da516f27f5fa4a5 ^ _DAT_18318db10) + uVar10;
  _DAT_18318e0d8 = _DAT_18318dd90 ^ _DAT_18318db10;
  _DAT_18318dd88 = 0xaf391c282916c540;
  _DAT_18318e068 = func_0x000187886160(_DAT_18318dd98 + 0x36f6c2523a1cbb2fU ^ 0x18);
  uVar10 = (_DAT_18318e068 << 6 | _DAT_18318e068 >> 0x3a) ^ 0x50c6e3d7d6e93ae0;
  _DAT_18318df50 = _DAT_18318e0b8 ^ uVar10 ^ 0x50c6e3d7d6e93ae0;
  _DAT_18318dc58 = (_DAT_18318dc58 ^ uVar10) + 0x50c6e3d7d6e93ae0 ^ 0xd8fb2e367f101142;
  _DAT_18318db80 = (_DAT_18318db80 * -0x1c4fc1df57639033 ^ _DAT_18318dc58) + uVar10;
  _DAT_18318de20 = _DAT_18318db80 ^ _DAT_18318dc58;
  _DAT_18318dc88 = 0x50c6e3d7d6e93ae0;
  uVar10 = (_DAT_18318df90 ^ _DAT_180ca3e50) + _DAT_18318ddf8 + 0x50c6e3d752cb19c5;
  uVar18 = (_DAT_18318ddf8 ^ _UNK_180ca3e58) + _DAT_18318df90 + 0xaf391c282916c540;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318df90 ^ _DAT_180ca3e50;
  uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ _DAT_18318ddf8 ^ _UNK_180ca3e58;
  _DAT_18318de70 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_18318df90 + 0xaf391c282916c540)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_18318ddf8 + 0x50c6e3d752cb19c5));
  uVar10 = _DAT_18318de70 & 0x7ffffffffffffc00;
  _DAT_18318e0e8 = _DAT_18318df70 ^ uVar10 ^ 0x20;
  _DAT_18318db58 = (_DAT_18318db58 ^ uVar10) + 0x20 ^ 0x13b4a1db5d0e75f1;
  _DAT_18318dff0 = (_DAT_18318dff0 * 0x56dd0d891220d635 ^ _DAT_18318db58) + uVar10;
  _DAT_18318dcc0 = _DAT_18318dff0 ^ _DAT_18318db58;
  _DAT_18318ddd8 = 0x20;
  uVar10 = (~_DAT_18318db40 + 0xe35ae8303c897554) *
           ((_DAT_18318dc90 ^ 0xf9ebf0f85599944a) + (_DAT_18318dc90 & 0x79ebf0f85599944a) * 2);
  uVar10 = (uVar10 | _DAT_18318de30) + (uVar10 & _DAT_18318de30);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dc98 =
       func_0x000187886160((uVar10 | 0x1ab118c86910e119) + (uVar10 & 0x1ab118c86910e119));
  _DAT_18318db38 = _DAT_18318dba0 ^ _DAT_18318dc98 ^ 0xdd46d9290e452cc2;
  _DAT_18318dc90 = (_DAT_18318dc90 ^ _DAT_18318dc98) + 0xdd46d9290e452cc2 ^ 0x2acb5563c409af0a;
  _DAT_18318df10 = (_DAT_18318df10 * 0x1a89315acb4d6af1 ^ _DAT_18318dc90) + _DAT_18318dc98;
  _DAT_18318db28 = _DAT_18318df10 ^ _DAT_18318dc90;
  _DAT_18318db80 = _DAT_18318de20 ^ 0xdd46d9290e452cc2;
  _DAT_18318dcb0 = 0xdd46d9290e452cc2;
  uVar10 = (_DAT_18318de40 ^ _DAT_180ca3e60) + _DAT_18318dc88 + 0xf9ebf0f85599944a;
  uVar18 = (_DAT_18318dc88 ^ _UNK_180ca3e68) + _DAT_18318de40 + 0xe35ae8303c897553;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318de40 ^ _DAT_180ca3e60;
  uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ _DAT_18318dc88 ^ _UNK_180ca3e68;
  _DAT_18318dd40 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_18318de40 + 0xe35ae8303c897553)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_18318dc88 + 0xf9ebf0f85599944a));
  uVar10 = _DAT_18318dd40 & 0xffffffffc0000000 ^ 0xf9ebf0f8d1bbb76f;
  _DAT_18318de58 = (_DAT_18318de58 ^ uVar10) + 0x1ab118c8ed32c23c ^ 0x37a482e246dec62f;
  _DAT_18318df78 = (_DAT_18318df78 * 0x3a2d9ab6729fac07 ^ _DAT_18318de58) + uVar10;
  _DAT_18318dbe0 = _DAT_18318df78 ^ _DAT_18318de58;
  _DAT_18318dbd8 = 0x1ab118c8ed32c23c;
  uVar10 = (~_DAT_18318df38 + 0xe35ae8303c897554) *
           ((_DAT_18318db60 ^ 0xf9ebf0f85599944a) + (_DAT_18318db60 & 0x79ebf0f85599944a) * 2);
  uVar10 = (uVar10 | _DAT_18318e050) + (uVar10 & _DAT_18318e050);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318de70 =
       func_0x000187886160((uVar10 | 0x1ab118c86910e119) + (uVar10 & 0x1ab118c86910e119));
  uVar10 = _DAT_18318de70 << 0x16 | _DAT_18318de70 >> 0x2a;
  _DAT_18318dbf0 = (_DAT_18318dbf0 ^ uVar10) + 0xe14ae03010893543 ^ 0x107d0e09461bea55;
  _DAT_18318dde0 = (_DAT_18318dde0 * 0x35474829590bdc47 ^ _DAT_18318dbf0) + uVar10;
  _DAT_18318dca0 = _DAT_18318dde0 ^ _DAT_18318dbf0;
  _DAT_18318df08 = 0xe14ae03010893543;
  _DAT_18318e028 = func_0x000187886160(_DAT_18318dd70 + 0x9879244897280237U ^ 0x86);
  uVar10 = (_DAT_18318e028 ^ 0xdab5d8e8ed32eabe) * 0x149484ad91056f5f ^ 0x1ab118c8ed32c23c;
  uVar10 = uVar10 << 0x20 | uVar10 >> 0x20;
  _DAT_18318dc30 = _DAT_18318e0f8 ^ uVar10 ^ 0xdd46d9290e452cc2;
  _DAT_18318dd50 = (_DAT_18318dd50 ^ uVar10) + 0xdd46d9290e452cc2 ^ 0x9430693d845fa074;
  _DAT_18318e070 = (_DAT_18318e070 * -0x3a97fbbc15f88b0d ^ _DAT_18318dd50) + uVar10;
  _DAT_18318dc80 = _DAT_18318e070 ^ _DAT_18318dd50;
  _DAT_18318df10 = 0xdd46d9290e452cc2;
  uVar10 = (~_DAT_18318ddc0 + 0x6140f072e444891) *
           ((_DAT_18318dd90 ^ 0xf9ebf0f85599944a) + (_DAT_18318dd90 & 0x79ebf0f85599944a) * 2);
  uVar10 = (uVar10 | _DAT_18318dc60) + (uVar10 & _DAT_18318dc60);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dfb0 =
       func_0x000187886160((uVar10 | 0xffffffff7bdddcda) + (uVar10 & 0xffffffff7bdddcda));
  uVar10 = _DAT_18318dfb0 >> 1 | _DAT_18318dfb0;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
            _DAT_18318dfb0 ^ 0x6140f072e444890) & 0x7fffffffffffffff;
  _DAT_18318dd80 = _DAT_18318dd80 ^ uVar10 ^ 0x17b984799bba7ce3;
  _DAT_18318e008 = (_DAT_18318e008 * -0x65b1c35c1f450fab ^ _DAT_18318dd80) + uVar10;
  _DAT_18318dd60 = _DAT_18318e008 ^ _DAT_18318dd80;
  _DAT_18318db38 = 0;
  _DAT_18318db20 = func_0x000187886160(_DAT_18318ddd8 ^ 0x21007c030021aa);
  uVar10 = (_DAT_18318db20 << 0x20 | _DAT_18318db20 >> 0x20) * 0x7b86ad3caba7b929;
  uVar10 = uVar10 << 0x3a | uVar10 >> 6;
  _DAT_18318df50 = _DAT_18318dec0 ^ uVar10 ^ 0x20;
  _DAT_18318dca0 = (_DAT_18318dca0 ^ uVar10) + 0x20 ^ 0x32f0b2b2b2ecce34;
  _DAT_18318df40 = (_DAT_18318df40 * 0x424bc197c0fa9177 ^ _DAT_18318dca0) + uVar10;
  _DAT_18318dbb8 = _DAT_18318df40 ^ _DAT_18318dca0;
  _DAT_18318de60 = 0x20;
  uVar10 = (_DAT_18318db38 ^ _DAT_180ca3e70) + _DAT_18318dcb8 + 0x69e8a0e05599a64b;
  uVar18 = (_DAT_18318dcb8 ^ _UNK_180ca3e78) + _DAT_18318db38 + 0x69e8a0e0d1bb856e;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318db38 ^ _DAT_180ca3e70;
  uVar18 = (uVar18 * 0x2000 | uVar18 >> 0x33) ^ _DAT_18318dcb8 ^ _UNK_180ca3e78;
  _DAT_18318dba0 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - (_DAT_18318db38 + 0x69e8a0e0d1bb856e)
                           ^ (uVar10 << 0x1d | uVar10 >> 0x23) -
                             (_DAT_18318dcb8 + 0x69e8a0e05599a64b));
  _DAT_18318dcb0 = _DAT_18318dcb0 ^ _DAT_18318dba0 ^ 0x94f02e977ec10bca;
  _DAT_18318db78 = (_DAT_18318db78 * -0x712923c329945bbf ^ _DAT_18318dcb0) + _DAT_18318dba0;
  _DAT_18318e028 = _DAT_18318db78 ^ _DAT_18318dcb0;
  _DAT_18318df88 = 0;
  uVar10 = (_DAT_18318dd10 ^ 0x84222305) + _DAT_18318e010 + 0x84222305;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318dd10 ^ 0x84222305;
  uVar18 = ((_DAT_18318e010 + _DAT_18318dd10) * 0x2000 | _DAT_18318e010 + _DAT_18318dd10 >> 0x33) ^
           _DAT_18318e010;
  _DAT_18318e0c8 =
       func_0x000187886160((uVar18 << 0x1d | uVar18 >> 0x23) - _DAT_18318dd10 ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318e010 + 0x84222305));
  uVar10 = (_DAT_18318e0c8 ^ 0x20) & 0x7ffffffffffff;
  _DAT_18318ddd0 = _DAT_18318dbb0 ^ uVar10 ^ 0x20;
  _DAT_18318de30 = (_DAT_18318de30 ^ uVar10) + 0x20 ^ 0xaf183379038d6c14;
  _DAT_18318dbc0 = (_DAT_18318dbc0 * -0x1320a804ed3c6dd1 ^ _DAT_18318de30) + uVar10;
  _DAT_18318dfd8 = _DAT_18318dbc0 ^ _DAT_18318de30;
  _DAT_18318de28 = 0x20;
  switch(uVar9 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7868775 -----

undefined8 FUN_187868775(void)

{
  func_0x000180001044();
  return 0;
}


// ----- block @ rva 0x786bf71 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18786bf71(void)

{
  longlong *plVar1;
  undefined8 uVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong unaff_RBX;
  undefined8 *unaff_RBP;
  int unaff_ESI;
  undefined4 unaff_EDI;
  ulonglong uVar9;
  ulonglong unaff_R12;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint unaff_XMM7_Da;
  uint uVar14;
  
  *(undefined4 *)((longlong)unaff_RBP + -4) = unaff_EDI;
  *(int *)((longlong)unaff_RBP + 0x5c) = unaff_ESI << 6;
  uVar11 = _DAT_18318dec8;
  uVar10 = _DAT_18318ddc0;
  *(bool *)(unaff_RBP + 8) = unaff_RBP[7] == 0;
  uVar9 = uVar10 ^ _DAT_180ca3470;
  uVar12 = uVar11 ^ _UNK_180ca3478;
  lVar7 = uVar11 + 0x4d9c41bd;
  lVar5 = uVar10 + 0xea6a2677;
  uVar10 = uVar9 + lVar7;
  uVar11 = uVar12 + lVar5;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar9;
  uVar12 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar12;
  _DAT_18318df40 =
       func_0x000187886160((uVar12 << 0x1d | uVar12 >> 0x23) - lVar5 ^
                           (uVar9 << 0x1d | uVar9 >> 0x23) - lVar7);
  uVar10 = _DAT_18318df40 >> 1 | _DAT_18318df40;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x80 ^
           _DAT_18318df40;
  uVar10 = uVar10 << 0x19 | uVar10 >> 0x27;
  _DAT_18318db70 = (_DAT_18318db70 ^ uVar10) + 0x23d444ef ^ 0x238d68b18113be16;
  _DAT_18318e0c0 = (_DAT_18318e0c0 * 0x46bc636a1f2d12ff ^ _DAT_18318db70) + uVar10;
  _DAT_18318e068 = _DAT_18318e0c0 ^ _DAT_18318db70;
  _DAT_18318db50 = 0x23d444ef;
  uVar10 = (~_DAT_18318dc40 + 0x8e19edf1) *
           ((_DAT_18318db60 ^ unaff_RBX) + (ulonglong)((uint)_DAT_18318db60 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_18318dbc8) + (uVar10 & _DAT_18318dbc8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dcc8 = func_0x000187886160((uVar10 | 0xa3bced5) + (ulonglong)((uint)uVar10 & 0xa3bced5))
  ;
  _DAT_18318db48 =
       (_DAT_18318db48 ^ _DAT_18318dcc8 & 0x7fffffffff000000) - 0x8e19edf0 ^ 0x588600095b020426;
  _DAT_18318dc10 =
       (_DAT_18318dc10 * -0x550c666e2e4fc095 ^ _DAT_18318db48) +
       (_DAT_18318dcc8 & 0x7fffffffff000000);
  _DAT_18318dcb0 = _DAT_18318dc10 ^ _DAT_18318db48;
  _DAT_18318de60 = _DAT_18318e0f8 ^ 0xffffffff71e61210;
  _DAT_18318dfc8 = 0x71e61210;
  _DAT_18318dfb8 = func_0x000187886160(_DAT_18318e070 ^ 0xffc10005f500365b);
  uVar10 = _DAT_18318dfb8 >> 1 | _DAT_18318dfb8;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & unaff_R12) * 0x101010101010101 >> 0x38) ^
           _DAT_18318dfb8) & 0xfffffffffe000000;
  _DAT_18318df30 = _DAT_18318ded0 ^ uVar10 ^ 0x8e19fdb0;
  _DAT_18318de58 = (_DAT_18318de58 ^ uVar10) + 0x8e19fdb0 ^ 0x78ba870de676e95;
  _DAT_18318dda0 = (_DAT_18318dda0 * 0x237c4e700481fbf ^ _DAT_18318de58) + uVar10;
  _DAT_18318df40 = _DAT_18318dda0 ^ _DAT_18318de58;
  _DAT_18318e050 = 0x8e19fdb0;
  uVar10 = (_DAT_18318de78 ^ _DAT_180ca3480) + _DAT_18318de68 + 0xa3bde95;
  uVar11 = (_DAT_18318de68 ^ _UNK_180ca3488) + _DAT_18318de78 + 0x71e61210;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318de78 ^ _DAT_180ca3480;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318de68 ^ _UNK_180ca3488;
  _DAT_18318df40 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318de78 + 0x71e61210) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318de68 + 0xa3bde95));
  uVar10 = (_DAT_18318df40 & 0x1ffffff80) * 0x1000000;
  _DAT_18318e008 = _DAT_18318de28 ^ uVar10 ^ 0x100000fc0;
  _DAT_18318de80 = (_DAT_18318de80 ^ uVar10) + 0x100000fc0 ^ 0x9aaa5c0101509de9;
  _DAT_18318ddb0 = (_DAT_18318ddb0 * -0x66bb53e3acc8c5e1 ^ _DAT_18318de80) + uVar10;
  _DAT_18318e080 = _DAT_18318ddb0 ^ _DAT_18318de80;
  _DAT_18318dde8 = 0xfc0;
  _DAT_18318dfa8 = func_0x000187886160(_DAT_18318ddb0 ^ 0xffb9007ca2fffc54);
  uVar10 = _DAT_18318dfa8 & 0xffffffffffc00000;
  _DAT_18318db60 = _DAT_18318de80 ^ uVar10 ^ 0x725f500;
  _DAT_18318dd90 = (_DAT_18318dd90 ^ uVar10) + 0x725f500 ^ 0x69bb9a409f12befd;
  _DAT_18318dc98 = (_DAT_18318dc98 * -0x3169a347f741445b ^ _DAT_18318dd90) + uVar10;
  _DAT_18318df30 = _DAT_18318dc98 ^ _DAT_18318dd90;
  _DAT_18318dc60 = _DAT_18318de10 ^ 0x725f500;
  _DAT_18318dca0 = 0x725f500;
  uVar10 = (~_DAT_18318dd20 + 0xf8da1ac1) *
           ((_DAT_18318de30 ^ 0x8307d625) + (ulonglong)((uint)_DAT_18318de30 & 0x8307d625) * 2);
  uVar10 = (uVar10 | _DAT_18318dcf8) + (uVar10 & _DAT_18318dcf8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318ded8 =
       func_0x000187886160((uVar10 | 0x7bddcce5) + (ulonglong)((uint)uVar10 & 0x7bddcce5));
  uVar10 = _DAT_18318ded8 ^ 0x6f2dc69d959c000;
  uVar11 = uVar10 >> 1 | uVar10;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar11 >> 4) + uVar11 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x10 ^
           uVar10;
  _DAT_18318df88 = _DAT_18318df80 ^ uVar10 ^ 0x100000fc0;
  _DAT_18318dd68 = (_DAT_18318dd68 ^ uVar10) + 0x100000fc0 ^ 0x3c372251a6f74ab3;
  _DAT_18318dcd0 = (_DAT_18318dcd0 * 0x2c7ab8ee624bb0ed ^ _DAT_18318dd68) + uVar10;
  _DAT_18318dec8 = _DAT_18318dcd0 ^ _DAT_18318dd68;
  _DAT_18318de68 = 0xfc0;
  _DAT_18318dfd8 = func_0x000187886160(_DAT_18318dc00 + 0x16000042fff6ffU ^ 0xba);
  uVar10 = _DAT_18318dfd8 >> 1 | _DAT_18318dfd8;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x10 ^
           _DAT_18318dfd8;
  uVar10 = uVar10 << 0x35 | uVar10 >> 0xb;
  _DAT_18318e070 = (_DAT_18318e070 ^ uVar10) - 0x852dc9e0 ^ 0x9d86e2dfd2713136;
  _DAT_18318e058 = (_DAT_18318e058 * 0x4985c18e86e9ad0b ^ _DAT_18318e070) + uVar10;
  _DAT_18318ddf8 = _DAT_18318e058 ^ _DAT_18318e070;
  _DAT_18318dbd8 = _DAT_18318df08 ^ 0xffffffff7ad23620;
  _DAT_18318dea0 = 0x7ad23620;
  uVar10 = (~_DAT_18318dbc8 + 0x852dc9e1) *
           ((_DAT_18318dd38 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_18318dd38 & 0x84222ce5) * 2);
  uVar10 = (uVar10 | _DAT_18318dff0) + (uVar10 & _DAT_18318dff0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dc88 = func_0x000187886160((uVar10 | 0x10fe505) + (ulonglong)((uint)uVar10 & 0x10fe505))
  ;
  uVar10 = _DAT_18318dc88 >> 1 | _DAT_18318dc88;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar10 >> 4) + uVar10 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x10 ^
           _DAT_18318dc88;
  uVar10 = uVar11 >> 1 | uVar11;
  uVar10 = uVar10 >> 2 | uVar10;
  uVar10 = uVar10 >> 4 | uVar10;
  uVar10 = uVar10 >> 8 | uVar10;
  uVar10 = uVar10 >> 0x10 | uVar10;
  uVar10 = uVar10 >> 0x20 | uVar10;
  uVar10 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar11 = (0x40 - (((uVar10 >> 4) + uVar10 & unaff_R12) * 0x101010101010101 >> 0x38)) * 4 ^ uVar11;
  _DAT_18318db20 = _DAT_18318dd08 ^ uVar11 ^ 0x852dd9a0;
  _DAT_18318dc18 = (_DAT_18318dc18 ^ uVar11) + 0x852dd9a0 ^ 0x8aff3ea38abbb01f;
  _DAT_18318e088 = (_DAT_18318e088 * -0x1568fc7d193b746f ^ _DAT_18318dc18) + uVar11;
  _DAT_18318e0b8 = _DAT_18318e088 ^ _DAT_18318dc18;
  _DAT_18318e0d0 = 0x852dd9a0;
  uVar10 = (_DAT_18318de90 ^ _DAT_180ca3490) + _DAT_18318dc80 + 0x10ffa85;
  uVar11 = (_DAT_18318dc80 ^ _UNK_180ca3498) + _DAT_18318de90 + 0x7ad23620;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318de90 ^ _DAT_180ca3490;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318dc80 ^ _UNK_180ca3498;
  _DAT_18318dfb0 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318de90 + 0x7ad23620) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318dc80 + 0x10ffa85));
  uVar10 = _DAT_18318dfb0 * -0x746775a6d026ac3f;
  _DAT_18318df10 = _DAT_18318e0d8 ^ uVar10 ^ 0x100000fc0;
  _DAT_18318e078 = (_DAT_18318e078 ^ uVar10) + 0x100000fc0 ^ 0xf6810fadfbad2897;
  _DAT_18318e0e8 = (_DAT_18318e0e8 * 0x7fa786cd3a7ebe9d ^ _DAT_18318e078) + uVar10;
  _DAT_18318de98 = _DAT_18318e0e8 ^ _DAT_18318e078;
  _DAT_18318dee0 = 0xfc0;
  _DAT_18318dbf0 = func_0x000187886160(_DAT_18318dbf8 ^ 0xff27ffb1ecffbbaf);
  uVar10 = _DAT_18318dbf0 & 0xffffffffff000000;
  _DAT_18318df28 = _DAT_18318db18 ^ uVar10 ^ 0x1198704d6;
  _DAT_18318de20 = (_DAT_18318de20 ^ uVar10) + 0x1198704d6 ^ 0x950173071aba5af1;
  _DAT_18318dc58 = (_DAT_18318dc58 * 0x5499fd020bed1f5b ^ _DAT_18318de20) + uVar10;
  _DAT_18318dbb8 = _DAT_18318dc58 ^ _DAT_18318de20;
  _DAT_18318dc50 = 0x198704d6;
  uVar10 = (~_DAT_18318dd70 + 0x23d444f0) *
           ((_DAT_18318df30 ^ 0x71909cc2) + (ulonglong)((uint)_DAT_18318df30 & 0x71909cc2) * 2);
  uVar10 = (uVar10 | _DAT_18318df40) + (uVar10 & _DAT_18318df40);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dbe0 =
       func_0x000187886160((uVar10 | 0x5244d82d) + (ulonglong)((uint)uVar10 & 0x5244d82d));
  _DAT_18318db38 =
       (_DAT_18318db38 ^ _DAT_18318dbe0 & 0x7ffffffffffff) + 0xd666fb08 ^ 0x2216b92496210563;
  _DAT_18318e018 =
       (_DAT_18318e018 * 0x522a1a474fe9188f ^ _DAT_18318db38) + (_DAT_18318dbe0 & 0x7ffffffffffff);
  _DAT_18318de90 = _DAT_18318e018 ^ _DAT_18318db38;
  _DAT_18318e030 = 0xd666fb08;
  uVar10 = (~_DAT_18318df50 + 0x23d444f0) *
           ((_DAT_18318dcb8 ^ 0x71909cc2) + (ulonglong)((uint)_DAT_18318dcb8 & 0x71909cc2) * 2);
  uVar10 = (uVar10 | _DAT_18318dda0) + (uVar10 & _DAT_18318dda0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dfd0 =
       func_0x000187886160((uVar10 | 0x5244d82d) + (ulonglong)((uint)uVar10 & 0x5244d82d));
  _DAT_18318e070 =
       (_DAT_18318e070 ^ _DAT_18318dfd0 * 0x3c0382c09b1cd915) + 0x219004e7 ^ 0xa80552323b389f72;
  _DAT_18318df48 =
       (_DAT_18318df48 * 0x3b5124c29afff18f ^ _DAT_18318e070) + _DAT_18318dfd0 * 0x3c0382c09b1cd915;
  _DAT_18318e008 = _DAT_18318df48 ^ _DAT_18318e070;
  _DAT_18318dfe0 = 0x219004e7;
  uVar10 = (~_DAT_18318e0d8 + 0x432009cf) *
           ((_DAT_18318e028 ^ 0x5244d82d) + (ulonglong)((uint)_DAT_18318e028 & 0x5244d82d) * 2);
  uVar10 = (uVar10 | _DAT_18318dd68) + (uVar10 & _DAT_18318dd68);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dca8 =
       func_0x000187886160((uVar10 | 0x1164d1e3) + (ulonglong)((uint)uVar10 & 0x1164d1e3));
  uVar10 = (_DAT_18318dca8 << 0xd | _DAT_18318dca8 >> 0x33) ^ 0xd666fb08;
  _DAT_18318dea0 = _DAT_18318dc28 ^ uVar10 ^ 0x1198704d6;
  _DAT_18318dce8 = (_DAT_18318dce8 ^ uVar10) + 0x1198704d6 ^ 0x743aeb3f3c1e3887;
  _DAT_18318e010 = (_DAT_18318e010 * 0x3fa2d27017d9ebf9 ^ _DAT_18318dce8) + uVar10;
  _DAT_18318dff0 = _DAT_18318e010 ^ _DAT_18318dce8;
  _DAT_18318db08 = 0x198704d6;
  uVar10 = ((_DAT_18318dc30 ^ 0x84222ce5) + (ulonglong)((uint)_DAT_18318dc30 & 0x84222ce5) * 2) *
           -_DAT_18318dd20;
  uVar10 = (uVar10 | _DAT_18318dd80) + (uVar10 & _DAT_18318dd80);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318e0b0 =
       func_0x000187886160((uVar10 | 0x84222ce5) + (ulonglong)((uint)uVar10 & 0x84222ce5));
  uVar10 = _DAT_18318e0b0 ^ 0xfc0;
  _DAT_18318de98 = _DAT_18318e008 ^ uVar10 ^ 0xfc0;
  _DAT_18318dbb0 = (_DAT_18318dbb0 ^ uVar10) + 0xfc0 ^ 0x1a42a1adb96c3cac;
  _DAT_18318df50 = (_DAT_18318df50 * 0x582980a23fabd621 ^ _DAT_18318dbb0) + uVar10;
  _DAT_18318dff8 = _DAT_18318df50 ^ _DAT_18318dbb0;
  _DAT_18318db50 = 0xfc0;
  _DAT_18318de40 = func_0x000187886160(_DAT_18318de18 + 0x62ff75eaffeeffU ^ 0x8d);
  uVar10 = (ulonglong)((uint)_DAT_18318de40 & 0xf5b2bfe7);
  _DAT_18318de38 = (_DAT_18318de38 ^ uVar10) + 0xa4d4018 ^ 0xd20d90f2e97474c2;
  _DAT_18318dc90 = (_DAT_18318dc90 * 0x4472a2b7a02686bd ^ _DAT_18318de38) + uVar10;
  _DAT_18318db90 = _DAT_18318dc90 ^ _DAT_18318de38;
  _DAT_18318ddc0 = 0xa4d4018;
  _DAT_18318dff8 = func_0x000187886160(_DAT_18318dcf0 + 0x1bff7b1affddff);
  uVar10 = (ulonglong)(~(uint)_DAT_18318dff8 & 0xfc0);
  _DAT_18318de40 = _DAT_18318dcf8 ^ uVar10 ^ 0xfc0;
  _DAT_18318df70 = (_DAT_18318df70 ^ uVar10) + 0xfc0 ^ 0x53c2e53545da5465;
  _DAT_18318dcd0 = (_DAT_18318dcd0 * -0x4c1035e92667826d ^ _DAT_18318df70) + uVar10;
  _DAT_18318ddb8 = _DAT_18318dcd0 ^ _DAT_18318df70;
  _DAT_18318dbf8 = 0xfc0;
  uVar10 = (~_DAT_18318def0 + 0xc1b038a7) *
           ((_DAT_18318db08 ^ 0x45921b83) + (ulonglong)((uint)_DAT_18318db08 & 0x45921b83) * 2);
  uVar10 = (uVar10 | _DAT_18318dcd8) + (uVar10 & _DAT_18318dcd8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dd78 =
       func_0x000187886160((uVar10 | unaff_RBX) + (ulonglong)((uint)uVar10 & 0x84222325));
  _DAT_18318ddc8 = _DAT_18318ddc8 ^ _DAT_18318dd78 ^ 0x928b2eb83cc90ba4 ^ 0x2a8cc91668b36f0f;
  _DAT_18318e028 =
       (_DAT_18318e028 * -0xfef318996296cb3 ^ _DAT_18318ddc8) +
       (_DAT_18318dd78 ^ 0x928b2eb83cc90ba4);
  _DAT_18318dd00 = _DAT_18318e028 ^ _DAT_18318ddc8;
  _DAT_18318df80 = 0;
  _DAT_18318df70 = func_0x000187886160(_DAT_18318dde8 + 0xffebff7bdb001dff ^ 0x96);
  uVar10 = (_DAT_18318df70 & 0x3ffffffffff) - (_DAT_18318df70 >> 1 & 0x15555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar10 >> 4) + uVar10 & unaff_R12) * 0x101010101010101 >> 0x38) << 2 ^
           _DAT_18318df70 & 0x3ffffffffff;
  _DAT_18318e038 = _DAT_18318db40 ^ uVar10 ^ 0xfc0;
  _DAT_18318db10 = (_DAT_18318db10 ^ uVar10) + 0xfc0 ^ 0x1b2d59d6adc5f899;
  _DAT_18318e0e8 = (_DAT_18318e0e8 * 0x33eb7b9b4ef0300f ^ _DAT_18318db10) + uVar10;
  _DAT_18318e0b0 = _DAT_18318e0e8 ^ _DAT_18318db10;
  _DAT_18318dd68 = 0xfc0;
  uVar6 = *(uint *)((longlong)unaff_RBP + 0x5c);
  uVar10 = uVar6 ^ unaff_RBX;
  uVar10 = (~_DAT_18318e050 + 0xfc1) *
           ((uVar10 ^ _DAT_18318dce0) + (ulonglong)((uint)_DAT_18318dce0 & (uint)uVar10) * 2);
  uVar10 = (uVar10 | _DAT_18318df10) + (uVar10 & _DAT_18318df10);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar11 = (ulonglong)uVar6 ^ 0x84222ce5;
  _DAT_18318dc50 = func_0x000187886160((uVar11 | uVar10) + (ulonglong)((uint)uVar11 & (uint)uVar10))
  ;
  uVar9 = (ulonglong)(uVar6 & 0xfc0);
  _DAT_18318dc48 = (_DAT_18318dc48 ^ _DAT_18318de78) + uVar9 ^ 0x2d3e1fd2ab3cd93d;
  _DAT_18318e0d8 = (_DAT_18318e0d8 * -0x77edd2830d78e67 ^ _DAT_18318dc48) + _DAT_18318de78;
  _DAT_18318e050 = _DAT_18318e0d8 ^ _DAT_18318dc48;
  _DAT_18318dde8 = uVar9;
  *(int *)(unaff_RBP + 0x14) = *(int *)(unaff_RBP + 0x14) << 0xc;
  uVar10 = (~_DAT_18318dfc0 + 0x8b8bc469) *
           ((_DAT_18318db48 ^ 0x592d4a40) + (ulonglong)((uint)_DAT_18318db48 & 0x592d4a40) * 2);
  uVar10 = (uVar10 | _DAT_18318deb0) + (uVar10 & _DAT_18318deb0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dfe8 =
       func_0x000187886160((uVar10 | 0xd2a68e28) + (ulonglong)((uint)uVar10 & 0xd2a68e28));
  _DAT_18318dda8 = (_DAT_18318dda8 ^ _DAT_18318dfe8 ^ 0x8b8bc468) + 0x5684ad0d ^ 0xd73c89dfe33abd59;
  _DAT_18318dd90 =
       (_DAT_18318dd90 * -0xfd175f2d351c539 ^ _DAT_18318dda8) + (_DAT_18318dfe8 ^ 0x8b8bc468);
  _DAT_18318de88 = _DAT_18318dd90 ^ _DAT_18318dda8;
  _DAT_18318dbd0 = 0x5684ad0d;
  uVar10 = (_DAT_18318ddc0 ^ _DAT_180ca34a0) + _DAT_18318df18 + 0x8422d325;
  uVar11 = (_DAT_18318df18 ^ _UNK_180ca34a8) + _DAT_18318ddc0 + 0x926bf7bd;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318ddc0 ^ _DAT_180ca34a0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318df18 ^ _UNK_180ca34a8;
  _DAT_18318e0e8 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318ddc0 + 0x926bf7bd) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318df18 + 0x8422d325));
  uVar10 = _DAT_18318e0e8 ^ 0x926bf7bd;
  _DAT_18318dfc0 = _DAT_18318dca0 ^ uVar10 ^ 0x926ce7bd;
  _DAT_18318dce8 = (_DAT_18318dce8 ^ uVar10) + 0x926ce7bd ^ 0x54ef6e2173aab133;
  _DAT_18318ddd0 = (_DAT_18318ddd0 * 0x1735230373279a65 ^ _DAT_18318dce8) + uVar10;
  _DAT_18318dc78 = _DAT_18318ddd0 ^ _DAT_18318dce8;
  _DAT_18318dc20 = 0x926ce7bd;
  _DAT_18318e070 = func_0x000187886160(_DAT_18318e068 ^ 0xb400144700c5c6);
  uVar10 = (_DAT_18318e070 ^ 0xff000000) & 0xffffffffff000000;
  _DAT_18318db08 = _DAT_18318dd40 ^ uVar10 ^ 0x10000f000;
  _DAT_18318e080 = (_DAT_18318e080 ^ uVar10) + 0x10000f000 ^ 0x9226b8e91f64546a;
  _DAT_18318dec0 = (_DAT_18318dec0 * -0x27065d8a87650443 ^ _DAT_18318e080) + uVar10;
  _DAT_18318ddf0 = _DAT_18318dec0 ^ _DAT_18318e080;
  _DAT_18318df58 = 0xf000;
  _DAT_18318df80 = func_0x000187886160(_DAT_18318dba8 + 0x100015b0ffc7ff ^ 0xd3);
  uVar10 = _DAT_18318df80 << 0x10 | _DAT_18318df80 >> 0x30;
  uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = ((((uVar11 >> 4) + uVar11 & unaff_R12) * 0x101010101010101 >> 0x38) << 3 ^ uVar10) &
           0x1ffffffffffffff;
  _DAT_18318dfa0 = _DAT_18318df30 ^ uVar10 ^ 0x9e1bb392;
  _DAT_18318ddb8 = (_DAT_18318ddb8 ^ uVar10) + 0x9e1bb392 ^ 0xc8e219943f19a73d;
  _DAT_18318dcb0 = (_DAT_18318dcb0 * -0x442d5fef172e499f ^ _DAT_18318ddb8) + uVar10;
  _DAT_18318e020 = _DAT_18318dcb0 ^ _DAT_18318ddb8;
  _DAT_18318e0e0 = 0x9e1bb392;
  uVar10 = (~_DAT_18318dc18 + 0x1fee24a5) *
           ((_DAT_18318dff0 ^ unaff_RBX) + (ulonglong)((uint)_DAT_18318dff0 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_18318df68) + (uVar10 & _DAT_18318df68);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318db88 =
       func_0x000187886160((uVar10 | 0x9bcc0781) + (ulonglong)((uint)uVar10 & 0x9bcc0781));
  uVar10 = (_DAT_18318db88 ^ 0x1fee24a4) << 0x1e | _DAT_18318db88 >> 0x22;
  _DAT_18318db10 = (_DAT_18318db10 ^ uVar10) - 0x1fee24a4 ^ 0xf9b45fc1f7503de2;
  _DAT_18318dd60 = (_DAT_18318dd60 * -0x750f82db668258a5 ^ _DAT_18318db10) + uVar10;
  _DAT_18318de90 = _DAT_18318dd60 ^ _DAT_18318db10;
  _DAT_18318e070 = 0xe011db5c;
  uVar10 = (_DAT_18318dff8 ^ _DAT_180ca34b0) + _DAT_18318ded0 + 0x9bcd3781;
  uVar11 = (_DAT_18318ded0 ^ _UNK_180ca34b8) + _DAT_18318dff8 + 0xe011db5c;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318dff8 ^ _DAT_180ca34b0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318ded0 ^ _UNK_180ca34b8;
  _DAT_18318e078 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318dff8 + 0xe011db5c) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318ded0 + 0x9bcd3781));
  uVar10 = _DAT_18318e078 ^ 0x1fef14a4;
  uVar11 = uVar10 >> 1 | uVar10;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar11 >> 4) + uVar11 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x40 ^
           uVar10;
  _DAT_18318e028 = _DAT_18318e078 ^ uVar10 ^ 0x10000f000;
  _DAT_18318dbf8 = (_DAT_18318dbf8 ^ uVar10) + 0x10000f000 ^ 0x6d177a358ffb5759;
  _DAT_18318de90 = (_DAT_18318de90 * -0x2f490c5cb1080f3f ^ _DAT_18318dbf8) + uVar10;
  _DAT_18318e038 = _DAT_18318de90 ^ _DAT_18318dbf8;
  _DAT_18318df48 = 0xf000;
  uVar10 = (_DAT_18318dc78 ^ _DAT_180ca34c0) + _DAT_18318ddf0 + 0x7b17d518;
  uVar11 = (_DAT_18318ddf0 ^ _UNK_180ca34c8) + _DAT_18318dc78 + 0x5684ad0d;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318dc78 ^ _DAT_180ca34c0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318ddf0 ^ _UNK_180ca34c8;
  _DAT_18318dc68 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318dc78 + 0x5684ad0d) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318ddf0 + 0x7b17d518));
  uVar10 = (_DAT_18318dc68 ^ 0xffb5ff3d) * 0x2dff78eb0b6c6f0b;
  _DAT_18318df10 = (_DAT_18318df10 ^ uVar10) + 0xa9b15b30 ^ 0x58d39fdfe0936427;
  _DAT_18318dc28 = (_DAT_18318dc28 * 0x313ac1ff8decfe03 ^ _DAT_18318df10) + uVar10;
  _DAT_18318e090 = _DAT_18318dc28 ^ _DAT_18318df10;
  _DAT_18318dd98 = 0xa9b15b30;
  _DAT_18318db78 = func_0x000187886160(_DAT_18318de70 ^ 0x67ffe315008cec);
  uVar10 = (_DAT_18318db78 ^ 0xffb5ff3d) & 0xfffffffff ^ 0xff35f63d;
  _DAT_18318db08 = (_DAT_18318db08 ^ uVar10) + 0x5604a40d ^ 0xcec4bf40bf7e4ace;
  _DAT_18318dfa8 = (_DAT_18318dfa8 * 0x19a60416fe928173 ^ _DAT_18318db08) + uVar10;
  _DAT_18318dc48 = _DAT_18318dfa8 ^ _DAT_18318db08;
  _DAT_18318de98 = 0x5604a40d;
  uVar10 = (~_DAT_18318dd88 + 0x55baa34b) *
           ((_DAT_18318db20 ^ 0xd198806f) + (ulonglong)((uint)_DAT_18318db20 & 0xd198806f) * 2);
  uVar10 = (uVar10 | _DAT_18318df00) + (uVar10 & _DAT_18318df00);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dd38 =
       func_0x000187886160((uVar10 | unaff_RBX) + (ulonglong)((uint)uVar10 & 0x84222325));
  _DAT_18318dc90 = (_DAT_18318dd38 ^ 0x55baa34a) & 0xfffffffffff;
  _DAT_18318e0e0 = _DAT_18318e0e0 ^ _DAT_18318dc90 ^ 0xad45bd37627e3eb5;
  _DAT_18318e068 = (_DAT_18318e068 * -0x404424b1baa9ea75 ^ _DAT_18318e0e0) + _DAT_18318dc90;
  _DAT_18318dc10 = _DAT_18318e068 ^ _DAT_18318e0e0;
  _DAT_18318db28 = 0;
  uVar10 = ((_DAT_18318dff8 ^ 0x8422d325) + (ulonglong)((uint)_DAT_18318dff8 & 0x8422d325) * 2) *
           -_DAT_18318e0e8;
  uVar10 = (uVar10 | _DAT_18318db40) + (uVar10 & _DAT_18318db40);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318e0d0 =
       func_0x000187886160((uVar10 | 0x8422d325) + (ulonglong)((uint)uVar10 & 0x8422d325));
  uVar10 = _DAT_18318e0d0 << 0xf | _DAT_18318e0d0 >> 0x31;
  _DAT_18318dd18 = _DAT_18318db48 ^ uVar10 ^ 0xf000;
  _DAT_18318df28 = (_DAT_18318df28 ^ uVar10) + 0xf000 ^ 0xfbb040f93b3383e0;
  _DAT_18318de48 = (_DAT_18318de48 * -0x1a68e9788d0ecbad ^ _DAT_18318df28) + uVar10;
  _DAT_18318df08 = _DAT_18318de48 ^ _DAT_18318df28;
  _DAT_18318df30 = 0xf000;
  uVar10 = (_DAT_18318df78 ^ _DAT_180ca34d0) + _DAT_18318ddc0 + 0x7b17d518;
  uVar11 = (_DAT_18318ddc0 ^ _UNK_180ca34d8) + _DAT_18318df78 + 0xffffffff;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318df78 ^ _DAT_180ca34d0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318ddc0 ^ _UNK_180ca34d8;
  _DAT_18318de10 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318df78 + 0xffffffff) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318ddc0 + 0x7b17d518));
  uVar10 = _DAT_18318de10 ^ 0xff35f63c00ca09c3;
  uVar11 = uVar10 >> 1 | uVar10;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar11 >> 4) + uVar11 & unaff_R12) * 0x101010101010101 >> 0x38)) * 8 ^ uVar10;
  _DAT_18318df20 = (_DAT_18318df20 ^ uVar10) + 0xca09c2 ^ 0x80f653d0473a1b3f;
  _DAT_18318dda0 = (_DAT_18318dda0 * 0x6276566f9d5d3785 ^ _DAT_18318df20) + uVar10;
  _DAT_18318de20 = _DAT_18318dda0 ^ _DAT_18318df20;
  _DAT_18318e088 = 0xca09c2;
  _DAT_18318dde8 = func_0x000187886160(_DAT_18318dcf8 ^ 0xff32ff841cffdda8);
  uVar10 = _DAT_18318dde8 - (_DAT_18318dde8 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  bVar3 = (byte)(((uVar10 >> 4) + uVar10 & unaff_R12) * 0x101010101010101 >> 0x38);
  uVar10 = (uint)bVar3 + (uint)bVar3 ^ _DAT_18318dde8;
  _DAT_18318e098 = _DAT_18318e030 ^ uVar10 ^ 0xf000;
  _DAT_18318dcd8 = (_DAT_18318dcd8 ^ uVar10) + 0xf000 ^ 0x39c20f9cb0e527c9;
  _DAT_18318db88 = (_DAT_18318db88 * 0x453980e88504b9a5 ^ _DAT_18318dcd8) + uVar10;
  _DAT_18318dde0 = _DAT_18318db88 ^ _DAT_18318dcd8;
  _DAT_18318dc50 = 0xf000;
  _DAT_18318db88 = func_0x000187886160(_DAT_18318dd60 ^ 0xffdeff7c23002173);
  _DAT_18318de98 = _DAT_18318de98 ^ _DAT_18318db88 ^ 0x15ec106fee39ef60;
  _DAT_18318de58 = (_DAT_18318de58 * 0x2010521a7d2c92bf ^ _DAT_18318de98) + _DAT_18318db88;
  _DAT_18318de48 = _DAT_18318de58 ^ _DAT_18318de98;
  _DAT_18318db60 = 0;
  uVar10 = ((_DAT_18318dc20 ^ 0x8422d325) + (ulonglong)((uint)_DAT_18318dc20 & 0x8422d325) * 2) *
           -_DAT_18318e040;
  uVar10 = (uVar10 | _DAT_18318de10) + (uVar10 & _DAT_18318de10);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318ded8 =
       func_0x000187886160((uVar10 | 0x8422d325) + (ulonglong)((uint)uVar10 & 0x8422d325));
  uVar10 = _DAT_18318ded8 & 0x7fffffffffffffff;
  _DAT_18318e0c0 = _DAT_18318dbf8 ^ uVar10 ^ 0xf000;
  _DAT_18318df38 = (_DAT_18318df38 ^ uVar10) + 0xf000 ^ 0x4248969821f35d20;
  _DAT_18318db08 = (_DAT_18318db08 * -0x5ebf416b60b572ad ^ _DAT_18318df38) + uVar10;
  _DAT_18318df40 = _DAT_18318db08 ^ _DAT_18318df38;
  _DAT_18318dfd0 = 0xf000;
  uVar4 = *(uint *)(unaff_RBP + 0x14) & 0xffff;
  uVar9 = uVar9 ^ unaff_RBX;
  uVar10 = ((_DAT_18318dd48 ^ uVar9) + (ulonglong)((uint)_DAT_18318dd48 & (uint)uVar9) * 2) *
           (uVar4 - _DAT_18318dc10);
  uVar10 = (uVar10 | _DAT_18318dd90) + (uVar10 & _DAT_18318dd90);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  uVar9 = uVar9 ^ uVar4;
  _DAT_18318dcd8 = func_0x000187886160((uVar9 | uVar10) + (ulonglong)((uint)uVar9 & (uint)uVar10));
  uVar4 = uVar6 & 0xfc0 | uVar4;
  uVar9 = (ulonglong)uVar4;
  _DAT_18318de00 = (_DAT_18318de00 ^ _DAT_18318dcd8 ^ uVar9) + uVar9 ^ 0xbddd110530dd2faf;
  _DAT_18318dbe0 =
       (_DAT_18318dbe0 * -0x6c69df429863b90b ^ _DAT_18318de00) + (_DAT_18318dcd8 ^ uVar9);
  _DAT_18318de10 = _DAT_18318dbe0 ^ _DAT_18318de00;
  plVar1 = (longlong *)unaff_RBP[2];
  uVar2 = unaff_RBP[4];
  _DAT_18318dca0 = uVar9;
  lVar5 = (**(code **)(plVar1 + JNI->GetPrimitiveArrayCritical /*0x6f0*/))(plVar1,uVar2,0);
  *(int *)(unaff_RBP + 0xe) = (int)*(char *)(lVar5 + *(int *)(unaff_RBP + 0xf));
  (**(code **)(plVar1 + JNI->ReleasePrimitiveArrayCritical /*0x6f8*/))(plVar1,uVar2,lVar5,2);
  unaff_RBP[0x14] = (ulonglong)*(uint *)(unaff_RBP + 0xe);
  uVar10 = (~_DAT_18318dbc0 + 0x3ce1672b) *
           ((_DAT_18318e008 ^ 0x2b11c260) + (ulonglong)((uint)_DAT_18318e008 & 0x2b11c260) * 2);
  uVar10 = (uVar10 | _DAT_18318dd30) + (uVar10 & _DAT_18318dd30);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dfc8 =
       func_0x000187886160((uVar10 | 0x17f0a54a) + (ulonglong)((uint)uVar10 & 0x17f0a54a));
  uVar10 = (_DAT_18318dfc8 ^ 0x29aa6bffc7000000) & 0xffffffffff000000;
  _DAT_18318e068 = (_DAT_18318e068 ^ uVar10) + 0x93d2866f ^ 0x3bd8ed0b6c383bdb;
  _DAT_18318dfa0 = (_DAT_18318dfa0 * -0x4a4dd3d50061f693 ^ _DAT_18318e068) + uVar10;
  _DAT_18318dcf0 = _DAT_18318dfa0 ^ _DAT_18318e068;
  _DAT_18318dd28 = 0x93d2866f;
  uVar10 = (_DAT_18318dee8 ^ _DAT_180ca34e0) + _DAT_18318dbc8 + 0x84222325;
  uVar11 = (_DAT_18318dbc8 ^ _UNK_180ca34e8) + _DAT_18318dee8 + 0x7f767ab8;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318dee8 ^ _DAT_180ca34e0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318dbc8 ^ _UNK_180ca34e8;
  _DAT_18318dcb8 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318dee8 + 0x7f767ab8) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318dbc8 + 0x84222325));
  uVar10 = _DAT_18318dcb8 ^ 0x7f767ab8;
  uVar11 = uVar10 >> 1 | uVar10;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = ((0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4
           ^ uVar10) * -0x21d2753b1d1864f5;
  _DAT_18318ddb0 = (_DAT_18318ddb0 ^ uVar10) - 0x7f767ab8 ^ 0x918fd8443323366;
  _DAT_18318dd68 = (_DAT_18318dd68 * 0x5db115f14eda93ed ^ _DAT_18318ddb0) + uVar10;
  _DAT_18318dcd0 = _DAT_18318dd68 ^ _DAT_18318ddb0;
  _DAT_18318dd58 = 0x80898548;
  uVar10 = (~_DAT_18318e050 + 0x7f767ab9) *
           ((_DAT_18318df30 ^ 0x8422231a) + (ulonglong)((uint)_DAT_18318df30 & 0x8422231a) * 2);
  uVar10 = (uVar10 | _DAT_18318de80) + (uVar10 & _DAT_18318de80);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318e0c8 =
       func_0x000187886160((uVar10 | 0xfb5459a2) + (ulonglong)((uint)uVar10 & 0xfb5459a2));
  uVar10 = _DAT_18318e0c8 - (_DAT_18318e0c8 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
           _DAT_18318e0c8;
  _DAT_18318db50 = _DAT_18318e030 ^ uVar10 ^ 0x7f767af7;
  _DAT_18318dd58 = (_DAT_18318dd58 ^ uVar10) + 0x7f767af7 ^ 0xfcbca91a72c26091;
  _DAT_18318e080 = (_DAT_18318e080 * -0x10616b7cc582981b ^ _DAT_18318dd58) + uVar10;
  _DAT_18318df48 = _DAT_18318e080 ^ _DAT_18318dd58;
  _DAT_18318e0a0 = 0x7f767af7;
  _DAT_18318dc60 = func_0x000187886160(_DAT_18318dd28 ^ 0xffd3ffa48a00ccbd);
  uVar10 = _DAT_18318dc60 & 0x7fffffffffffffff;
  _DAT_18318dd50 = _DAT_18318dbb8 ^ uVar10 ^ 0x10000003f;
  _DAT_18318dd38 = (_DAT_18318dd38 ^ uVar10) + 0x10000003f ^ 0xca1209419d84a364;
  _DAT_18318def0 = (_DAT_18318def0 * -0x50e2cb07f1fa1135 ^ _DAT_18318dd38) + uVar10;
  _DAT_18318dea8 = _DAT_18318def0 ^ _DAT_18318dd38;
  _DAT_18318dc80 = 0x3f;
  uVar10 = (_DAT_18318df20 ^ _DAT_180ca34f0) + _DAT_18318dff8 + 0x84222325;
  uVar11 = (_DAT_18318dff8 ^ _UNK_180ca34f8) + _DAT_18318df20 + 0x4976e59e;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318df20 ^ _DAT_180ca34f0;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318dff8 ^ _UNK_180ca34f8;
  _DAT_18318ded0 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318df20 + 0x4976e59e) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318dff8 + 0x84222325));
  _DAT_18318dce0 = _DAT_18318dce0 - 0x4976e59e ^ 0xf583ecfab44ade4d;
  _DAT_18318e040 = _DAT_18318e060 * -0x6ebb6494f8ff32a1;
  _DAT_18318e060 = _DAT_18318e040 ^ _DAT_18318dce0;
  _DAT_18318def8 = 0xb6891a62;
  _DAT_18318e068 = func_0x000187886160(_DAT_18318db68 + 0xff2c00257a00d2ffU ^ 0x23);
  uVar10 = _DAT_18318e068 ^ 0x4976e5dd;
  _DAT_18318e008 = _DAT_18318ded8 ^ uVar10 ^ 0x10000003f;
  _DAT_18318dd70 = (_DAT_18318dd70 ^ uVar10) + 0x10000003f ^ 0x6d24037a4c7d819;
  _DAT_18318df10 = (_DAT_18318df10 * 0x122883e0d70d2297 ^ _DAT_18318dd70) + uVar10;
  _DAT_18318dfd8 = _DAT_18318df10 ^ _DAT_18318dd70;
  _DAT_18318dbc0 = 0x3f;
  uVar10 = (~_DAT_18318dd20 + 0xbee35955) *
           ((_DAT_18318dbf0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18318dbf0 & 0x84222325) * 2);
  uVar10 = (uVar10 | _DAT_18318dd80) + (uVar10 & _DAT_18318dd80);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dde0 =
       func_0x000187886160((uVar10 | 0x3ac17a71) + (ulonglong)((uint)uVar10 & 0x3ac17a71));
  _DAT_18318dc20 = (_DAT_18318dc20 ^ _DAT_18318dde0) - 0xbee35954 ^ 0x6fc09d65b22e58a3;
  _DAT_18318df98 = (_DAT_18318df98 * -0xa91b95d6f6f6f0f ^ _DAT_18318dc20) + _DAT_18318dde0;
  _DAT_18318dba8 = _DAT_18318df98 ^ _DAT_18318dc20;
  _DAT_18318de28 = 0x411ca6ac;
  uVar10 = (_DAT_18318ddd8 ^ _DAT_180ca3500) + _DAT_18318e0b8 + 0x8422231a;
  uVar11 = (_DAT_18318e0b8 ^ _UNK_180ca3508) + _DAT_18318ddd8 + 0xbee35954;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318ddd8 ^ _DAT_180ca3500;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318e0b8 ^ _UNK_180ca3508;
  _DAT_18318db88 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318ddd8 + 0xbee35954) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318e0b8 + 0x8422231a));
  uVar10 = _DAT_18318db88 ^ 0xbee3596b;
  _DAT_18318de98 = _DAT_18318dcc0 ^ uVar10 ^ 0xbee35993;
  _DAT_18318db58 = (_DAT_18318db58 ^ uVar10) + 0xbee35993 ^ 0x715e875b0d2da6e1;
  _DAT_18318db40 = (_DAT_18318db40 * -0xf437e6569517e45 ^ _DAT_18318db58) + uVar10;
  _DAT_18318dcb8 = _DAT_18318db40 ^ _DAT_18318db58;
  _DAT_18318ded0 = 0xbee35993;
  _DAT_18318db50 = func_0x000187886160(_DAT_18318dc98 ^ 0xa4006b1a0052ab);
  uVar10 = (_DAT_18318db50 & 0xffffffffff000000) << 0xe | _DAT_18318db50 >> 0x32;
  _DAT_18318df20 = _DAT_18318dfd0 ^ uVar10 ^ 0x10000003f;
  _DAT_18318e028 = (_DAT_18318e028 ^ uVar10) + 0x10000003f ^ 0x33d6c77e32c1fb82;
  _DAT_18318dfd0 = (_DAT_18318dfd0 * -0x6b8fc9fc1ecd1e21 ^ _DAT_18318e028) + uVar10;
  _DAT_18318dd80 = _DAT_18318dfd0 ^ _DAT_18318e028;
  _DAT_18318df08 = 0x3f;
  uVar10 = (_DAT_18318de98 ^ _DAT_180ca3510) + _DAT_18318dc20 + 0x79df5ccb;
  uVar11 = (_DAT_18318dc20 ^ _UNK_180ca3518) + _DAT_18318de98 + 0x93d2866f;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318de98 ^ _DAT_180ca3510;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318dc20 ^ _UNK_180ca3518;
  _DAT_18318e020 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318de98 + 0x93d2866f) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318dc20 + 0x79df5ccb));
  uVar6 = ~(uint)_DAT_18318e020 & 0xfdfd7fee;
  uVar8 = uVar6 >> 1 | uVar6;
  uVar8 = uVar8 >> 2 | uVar8;
  uVar8 = uVar8 >> 4 | uVar8;
  uVar8 = uVar8 >> 8 | uVar8;
  uVar8 = uVar8 >> 0x10 | uVar8;
  uVar10 = (ulonglong)uVar8 - (ulonglong)(uVar8 >> 1 & 0x55555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (0x40 - (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
           0x40 ^ (ulonglong)uVar6;
  _DAT_18318dff8 = _DAT_18318df90 ^ uVar10 ^ 0x191d0065d;
  _DAT_18318dcb8 = (_DAT_18318dcb8 ^ uVar10) + 0x191d0065d ^ 0x20f62437162b5205;
  _DAT_18318dca0 = (_DAT_18318dca0 * 0x732ca1547519e88d ^ _DAT_18318dcb8) + uVar10;
  _DAT_18318dd38 = _DAT_18318dca0 ^ _DAT_18318dcb8;
  _DAT_18318db38 = 0x91d0065d;
  uVar10 = (~_DAT_18318e0d8 + 0x93d28670) *
           ((_DAT_18318df38 ^ 0x79df5ccb) + (ulonglong)((uint)_DAT_18318df38 & 0x79df5ccb) * 2);
  uVar10 = (uVar10 | _DAT_18318dba0) + (uVar10 & _DAT_18318dba0);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318db28 =
       func_0x000187886160((uVar10 | 0xea0ddaa4) + (ulonglong)((uint)uVar10 & 0xea0ddaa4));
  uVar10 = (_DAT_18318db28 ^ 0x80000000) & 0xffffffff80000000 ^ 0xfdfd7fee;
  _DAT_18318dfc8 = (_DAT_18318dfc8 ^ uVar10) + 0x6e2ff981 ^ 0xcd21637ccc7e97c3;
  _DAT_18318dc98 = (_DAT_18318dc98 * 0x7d59b919b33b0225 ^ _DAT_18318dfc8) + uVar10;
  _DAT_18318df58 = _DAT_18318dc98 ^ _DAT_18318dfc8;
  _DAT_18318df88 = 0x6e2ff981;
  _DAT_18318dc68 = func_0x000187886160(_DAT_18318dfa8 ^ 0xffaa0025a400049e);
  uVar10 = _DAT_18318dc68 ^ 0xffffffef;
  uVar11 = uVar10 >> 1 | uVar10;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = ((0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) *
            0x20 ^ uVar10) & 0x7ffffffffff00000;
  _DAT_18318dea0 = (_DAT_18318dea0 ^ uVar10) + 0x91d0066e ^ 0x7cb3d9687c74688f;
  _DAT_18318dfe0 = (_DAT_18318dfe0 * -0x6deaae01ac28bb33 ^ _DAT_18318dea0) + uVar10;
  _DAT_18318db28 = _DAT_18318dfe0 ^ _DAT_18318dea0;
  _DAT_18318df80 = 0x91d0066e;
  _DAT_18318dd30 = func_0x000187886160(_DAT_18318de80 ^ 0xffadff475800aa80);
  uVar10 = (_DAT_18318dd30 ^ 0xf5572a1848c76dc) * -0x526e02a3d6d3b6d0 |
           (_DAT_18318dd30 ^ 0xf5572a1848c76dc) * 0x5ad91fd5c292c493 >> 0x3c;
  _DAT_18318dba0 = _DAT_18318ded0 ^ uVar10 ^ 0x91d0065d;
  _DAT_18318dee8 = (_DAT_18318dee8 ^ uVar10) + 0x91d0065d ^ 0x6bf4130146124a64;
  _DAT_18318db20 = (_DAT_18318db20 * 0x23c1f09f3ee0d22f ^ _DAT_18318dee8) + uVar10;
  _DAT_18318df40 = _DAT_18318db20 ^ _DAT_18318dee8;
  _DAT_18318de88 = 0x91d0065d;
  _DAT_18318db70 = func_0x000187886160(_DAT_18318dda0 ^ 0xffdeff83daffdd07);
  uVar10 = _DAT_18318db70 - (_DAT_18318db70 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  _DAT_18318dd08 =
       (((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
       _DAT_18318db70;
  _DAT_18318e078 = _DAT_18318e078 ^ _DAT_18318dd08 ^ 0xe4dcdd41d5768892;
  _DAT_18318de90 = (_DAT_18318de90 * 0x81ffbf78d5b4bf1 ^ _DAT_18318e078) + _DAT_18318dd08;
  _DAT_18318dce0 = _DAT_18318de90 ^ _DAT_18318e078;
  _DAT_18318def0 = 0;
  uVar10 = (_DAT_18318de28 ^ _DAT_180ca3520) + _DAT_18318dfe0 + 0x79df5ccb;
  uVar11 = (_DAT_18318dfe0 ^ _UNK_180ca3528) + _DAT_18318de28 + 0xffffffff;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ _DAT_18318de28 ^ _DAT_180ca3520;
  uVar11 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ _DAT_18318dfe0 ^ _UNK_180ca3528;
  _DAT_18318df10 = _DAT_18318dce0;
  _DAT_18318df10 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318de28 + 0xffffffff) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318dfe0 + 0x79df5ccb));
  _DAT_18318db80 =
       (_DAT_18318db80 ^ _DAT_18318df10 ^ 0xfdfd7fed00000003) + 0x2028011 ^ 0xc563e3aa47626642;
  _DAT_18318ddb0 =
       (_DAT_18318ddb0 * 0x4f6275467ca44753 ^ _DAT_18318db80) +
       (_DAT_18318df10 ^ 0xfdfd7fed00000003);
  _DAT_18318dc20 = _DAT_18318ddb0 ^ _DAT_18318db80;
  _DAT_18318dd60 = 0x2028011;
  uVar10 = (~_DAT_18318dbf8 + 0x2028012) *
           ((_DAT_18318dc78 ^ 0x79df5ccb) + (ulonglong)((uint)_DAT_18318dc78 & 0x79df5ccb) * 2);
  uVar10 = (uVar10 | _DAT_18318dec8) + (uVar10 & _DAT_18318dec8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318dff8 =
       func_0x000187886160((uVar10 | 0x7bdddcda) + (ulonglong)((uint)uVar10 & 0x7bdddcda));
  uVar10 = (_DAT_18318dff8 ^ 0xffffffff) & 0x7fffffffff;
  _DAT_18318db28 = _DAT_18318db28 ^ uVar10 ^ 0xb36244fff719f5e6;
  _DAT_18318dc58 = (_DAT_18318dc58 * -0x2bceff6f44239591 ^ _DAT_18318db28) + uVar10;
  _DAT_18318dd68 = _DAT_18318dc58 ^ _DAT_18318db28;
  _DAT_18318dbf8 = 0;
  uVar10 = (~_DAT_18318de28 + 0xf1746b0b) *
           ((_DAT_18318dd30 ^ 0x7556482f) + (ulonglong)((uint)_DAT_18318dd30 & 0x7556482f) * 2);
  uVar10 = (uVar10 | _DAT_18318dbc8) + (uVar10 & _DAT_18318dbc8);
  uVar10 = uVar10 * 0x2000 ^ uVar10;
  uVar10 = uVar10 >> 7 ^ uVar10;
  uVar10 = uVar10 << 0x11 ^ uVar10;
  _DAT_18318e000 =
       func_0x000187886160((uVar10 | 0x84222325) + (ulonglong)((uint)uVar10 & 0x84222325));
  uVar6 = ~(uint)_DAT_18318e000 & 0xf1746b0a;
  uVar10 = (ulonglong)uVar6 - (ulonglong)(~(uint)_DAT_18318e000 >> 1 & 0x50101505);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar10 = (ulonglong)
           ((uint)((((uVar10 >> 4) + uVar10 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7)
           ^ uVar6);
  _DAT_18318dd38 = _DAT_18318dd38 ^ uVar10 ^ 0x852223c4920d8d8;
  _DAT_18318df10 = (_DAT_18318df10 * 0x5310100efeaead65 ^ _DAT_18318dd38) + uVar10;
  _DAT_18318ddf8 = _DAT_18318df10 ^ _DAT_18318dd38;
  _DAT_18318db00 = _DAT_18318de68;
  _DAT_18318dee8 = 0;
  uVar10 = unaff_RBP[0x14];
  uVar11 = (~_DAT_18318de68 + 0x40) *
           ((uVar10 ^ 0x84222325 ^ _DAT_18318dc70) +
           (ulonglong)((uint)_DAT_18318dc70 & (uint)(uVar10 ^ 0x84222325)) * 2);
  uVar11 = (uVar11 | _DAT_18318dc40) + (uVar11 & _DAT_18318dc40);
  uVar11 = uVar11 * 0x2000 ^ uVar11;
  uVar11 = uVar11 >> 7 ^ uVar11;
  uVar11 = uVar11 << 0x11 ^ uVar11;
  _DAT_18318dd60 =
       func_0x000187886160((uVar10 ^ 0x8422231a | uVar11) +
                           (ulonglong)((uint)(uVar10 ^ 0x8422231a) & (uint)uVar11));
  uVar11 = (uVar10 * 0x3f ^ _DAT_18318dd60) << 8 | _DAT_18318dd60 >> 0x38;
  uVar6 = (uint)uVar10 & 0x3f;
  _DAT_18318dd58 = (ulonglong)uVar6;
  _DAT_18318dbe8 = (_DAT_18318dbe8 ^ uVar11) + _DAT_18318dd58 ^ 0xf46e71d947a02be;
  _DAT_18318dc88 = (_DAT_18318dc88 * 0x72eff2e3890c10bf ^ _DAT_18318dbe8) + uVar11;
  _DAT_18318dc50 = _DAT_18318dc88 ^ _DAT_18318dbe8;
  uVar10 = _DAT_18318dd58 ^ 0x84222325 ^ _DAT_18318dd60;
  lVar5 = (_DAT_18318dd58 ^ 0x84222325) + _DAT_18318e0d0;
  uVar11 = uVar10 + lVar5;
  uVar12 = (uVar9 ^ _DAT_18318e0d0) + _DAT_18318dd60 + uVar9;
  uVar10 = (uVar11 * 0x2000 | uVar11 >> 0x33) ^ uVar10;
  uVar11 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar9 ^ _DAT_18318e0d0;
  _DAT_18318dd08 =
       func_0x000187886160((uVar11 << 0x1d | uVar11 >> 0x23) - (_DAT_18318dd60 + uVar9) ^
                           (uVar10 << 0x1d | uVar10 >> 0x23) - lVar5);
  uVar10 = _DAT_18318dd08 << 0x3d | _DAT_18318dd08 >> 3;
  uVar4 = uVar4 | uVar6;
  _DAT_18318dfe0 = (ulonglong)uVar4;
  _DAT_18318de28 = (_DAT_18318de28 ^ uVar10) + _DAT_18318dfe0 ^ 0xa5464c7151627679;
  _DAT_18318e0f8 = (_DAT_18318e0f8 * 0x20d82cad402cc1e9 ^ _DAT_18318de28) + uVar10;
  _DAT_18318dbc0 = _DAT_18318e0f8 ^ _DAT_18318de28;
  unaff_RBP[0xe] = *unaff_RBP;
  uVar6 = *(uint *)(unaff_RBP + 0xc);
  *(uint *)(unaff_RBP + 0xf) = uVar6;
  uVar10 = (ulonglong)uVar6 ^ 0x84222325;
  uVar11 = uVar10 ^ _DAT_18318de90;
  lVar5 = uVar10 + _DAT_18318df08;
  uVar10 = uVar11 + lVar5;
  uVar9 = (_DAT_18318df08 ^ 1) + _DAT_18318de90 + 1;
  uVar11 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar11;
  uVar10 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _DAT_18318df08 ^ 1;
  _DAT_18318dcd8 =
       func_0x000187886160((uVar10 << 0x1d | uVar10 >> 0x23) - (_DAT_18318de90 + 1) ^
                           (uVar11 << 0x1d | uVar11 >> 0x23) - lVar5);
  uVar13 = uVar6 & unaff_XMM7_Da;
  uVar8 = uVar6 | unaff_XMM7_Da;
  uVar14 = uVar6 ^ unaff_XMM7_Da;
  lVar5 = ((ulonglong)uVar6 * (ulonglong)_DAT_180ca35c0 << 0x20) +
          (ulonglong)uVar6 * (ulonglong)_DAT_180ca35b0;
  uVar10 = _DAT_18318dcd8 ^ uVar6;
  uVar11 = uVar10 - (uVar10 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar10 = ((((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^ uVar10
           ) * -0x26593e81a4173d5b;
  _DAT_18318dee0 =
       ((((ulonglong)uVar14 * (ulonglong)_DAT_180ca35a0 << 0x20) +
         (ulonglong)uVar14 * (ulonglong)_DAT_180ca3590 +
         ((ulonglong)uVar8 * (ulonglong)_DAT_180ca3580 << 0x20) +
         (ulonglong)uVar8 * (ulonglong)_DAT_180ca3570 +
         ((ulonglong)uVar13 * (ulonglong)_DAT_180ca3560 << 0x20 |
         (ulonglong)uVar13 * (ulonglong)_DAT_180ca3550) +
         ((ulonglong)uVar6 * (ulonglong)_DAT_180ca3540 << 0x20) +
         (ulonglong)uVar6 * (ulonglong)_DAT_180ca3530 + lVar5) -
       (((ulonglong)uVar14 * (ulonglong)_DAT_180ca3640 << 0x20) +
        (ulonglong)uVar14 * (ulonglong)_DAT_180ca3630 +
        ((ulonglong)uVar8 * (ulonglong)_DAT_180ca3620 << 0x20) +
        (ulonglong)uVar8 * (ulonglong)_DAT_180ca3610 +
        ((ulonglong)uVar13 * (ulonglong)_DAT_180ca3600 << 0x20 |
        (ulonglong)uVar13 * (ulonglong)_DAT_180ca35f0) +
        ((ulonglong)uVar6 * (ulonglong)_DAT_180ca35e0 << 0x20) +
        (ulonglong)uVar6 * (ulonglong)_DAT_180ca35d0 + lVar5)) + 0x43dd73d35556ae65;
  _DAT_18318dd80 = _DAT_18318ddd8 ^ uVar10 ^ _DAT_18318dee0;
  _DAT_18318de60 = (_DAT_18318de60 ^ uVar10) + _DAT_18318dee0 ^ 0xe9a07ecc637e4401;
  _DAT_18318dba8 = (_DAT_18318dba8 * 0x22e905ec21c022a3 ^ _DAT_18318de60) + uVar10;
  _DAT_18318df00 = _DAT_18318dba8 ^ _DAT_18318de60;
  _DAT_18318dee0 = _DAT_18318dee0 & 0xffffffff;
  *(uint *)(unaff_RBP + 0x10) = uVar4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(unaff_RBP + 8)) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 1:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 2:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 3:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x786fb04 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18786fb04(void)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong unaff_RBP;
  ulonglong uVar6;
  longlong *unaff_R13;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  uint unaff_XMM7_Da;
  uint uVar10;
  
  *(undefined2 *)(unaff_RBP + 0x5a) = *(undefined2 *)(unaff_RBP + 0x80);
  lVar8 = unaff_RBP + 0x5a;
  (**(code **)(unaff_R13 + JNI->SetCharArrayRegion /*0x688*/))();
  uVar1 = *(uint *)(unaff_RBP + -4);
  uVar3 = (ulonglong)uVar1 ^ 0x84222325;
  lVar2 = (ulonglong)((uint)_DAT_18318dd08 & (uint)uVar3) * 2;
  uVar3 = (~_DAT_18318dba8 + 2) * ((_DAT_18318dd08 ^ uVar3) + lVar2);
  uVar6 = (uVar3 | _DAT_18318de58) + (uVar3 & _DAT_18318de58);
  uVar4 = uVar6 * 0x2000 ^ uVar6;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  uVar3 = (ulonglong)uVar1 ^ 0x84222324;
  uVar5 = uVar3 | uVar4;
  _DAT_18318de50 = func_0x000187886160(uVar5 + ((uint)uVar3 & (uint)uVar4),uVar5,uVar6,lVar2,lVar8);
  uVar9 = uVar1 & unaff_XMM7_Da;
  uVar7 = uVar1 | unaff_XMM7_Da;
  uVar10 = uVar1 ^ unaff_XMM7_Da;
  lVar8 = ((ulonglong)uVar1 * (ulonglong)_DAT_180ca36e0 << 0x20) +
          (ulonglong)uVar1 * (ulonglong)_DAT_180ca36d0;
  uVar3 = _DAT_18318de50 - (_DAT_18318de50 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = ((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ _DAT_18318de50;
  uVar3 = ((((ulonglong)uVar10 * (ulonglong)_DAT_180ca36c0 << 0x20) +
            (ulonglong)uVar10 * (ulonglong)_DAT_180ca36b0 +
            ((ulonglong)uVar7 * (ulonglong)_DAT_180ca36a0 << 0x20) +
            (ulonglong)uVar7 * (ulonglong)_DAT_180ca3690 +
            ((ulonglong)uVar9 * (ulonglong)_DAT_180ca3680 << 0x20 |
            (ulonglong)uVar9 * (ulonglong)_DAT_180ca3670) +
            ((ulonglong)uVar1 * (ulonglong)_DAT_180ca3660 << 0x20) +
            (ulonglong)uVar1 * (ulonglong)_DAT_180ca3650 + lVar8) -
          (((ulonglong)uVar10 * (ulonglong)_DAT_180ca3760 << 0x20) +
           (ulonglong)uVar10 * (ulonglong)_DAT_180ca3750 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_180ca3740 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_180ca3730 +
           ((ulonglong)uVar9 * (ulonglong)_DAT_180ca3720 << 0x20 |
           (ulonglong)uVar9 * (ulonglong)_DAT_180ca3710) +
           ((ulonglong)uVar1 * (ulonglong)_DAT_180ca3700 << 0x20) +
           (ulonglong)uVar1 * (ulonglong)_DAT_180ca36f0 + lVar8)) + 0xb3f8f960c387b24a;
  _DAT_18318e020 = _DAT_18318dda0 ^ uVar4 ^ uVar3;
  _DAT_18318dbc0 = (_DAT_18318dbc0 ^ uVar4) + uVar3 ^ 0xa98d1b816eb3d91e;
  _DAT_18318e0a0 = (_DAT_18318e0a0 * -0x5b5e59995815a151 ^ _DAT_18318dbc0) + uVar4;
  _DAT_18318dff8 = _DAT_18318e0a0 ^ _DAT_18318dbc0;
  _DAT_18318de38 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x70) = (int)uVar3;
  *(int *)(unaff_RBP + 0x78) = *(int *)(unaff_RBP + -0xc);
  switch((int)uVar3 < *(int *)(unaff_RBP + -0xc)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7873b5b -----

undefined8 thunk_FUN_18785f01d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x7873c6e -----

undefined8 thunk_FUN_18785f01d(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x7873c73 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187873cb2 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187873c73(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7873d00 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187873d00(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7873d47 -----

void FUN_187873d47(void)

{
  return;
}


// ----- block @ rva 0x78888a8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878888a8(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x788897f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788897f(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x78889d3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878889d3(void)

{
  int iVar1;
  longlong *unaff_R13;
  int in_stack_00000038;
  
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(in_stack_00000038 < 0 || iVar1 <= in_stack_00000038) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7888a4c -----

undefined8 FUN_187888a4c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x7888a63 -----

void FUN_187888a63(void)

{
  return;
}


// ----- block @ rva 0x78892d5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_1878892d5(void)

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


// ----- block @ rva 0x7889314 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187889314(void)

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


// ----- block @ rva 0x788978c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788978c(void)

{
  char cVar1;
  longlong in_RAX;
  longlong *unaff_R13;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7889c5d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187889c5d(void)

{
  char cVar1;
  longlong *unaff_R13;
  undefined4 uStack000000000000009c;
  
  (**(code **)(unaff_R13 + JNI->NewObjectArray /*0x560*/))();
  uStack000000000000009c = 0x4d105a40;
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  rdtsc();
  (**(code **)(unaff_R13 + JNI->NewString /*0x518*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7889f7a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187889f7a(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x788ad96 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187888e94(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x788af46 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187888e94(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x788cdba -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788cdba(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_1;
  (*_DAT_180ca9158)(param_1,param_2,*param_2);
  return;
}


// ----- block @ rva 0x788cdc6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18788cdc6(undefined8 param_1,undefined8 param_2,longlong param_3)

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


// ----- block @ rva 0x788cde3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788cde3(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_RAX;
  
  *in_RAX = param_2;
  (*_DAT_180ca9148)();
  return;
}


// ----- block @ rva 0x788cdec -----

void FUN_18788cdec(void)

{
  return;
}


// ----- block @ rva 0x788cded -----

undefined4 * FUN_18788cded(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_1;
  return param_2;
}


// ----- block @ rva 0x788ce4f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788ce4f(void)

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


// ----- block @ rva 0x788cea3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18788cea3(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x788cf8d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18788cf8d(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  cVar1 = (**(code **)(unaff_RSI + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x788d0bd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788d0bd(void)

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


// ----- block @ rva 0x788d111 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18788d111(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184194800();
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


// ----- block @ rva 0x788d63c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788d63c(void)

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


// ----- block @ rva 0x788d7e4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788d7e4(void)

{
  FUN_190dd72e0();
  (*_DAT_180ca9258)();
  return;
}


// ----- block @ rva 0x788d84a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788d84a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180ca93d8)();
  return;
}


// ----- block @ rva 0x788d98a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18788d98a(void)

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


// ----- block @ rva 0x788dac4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788dac4(void)

{
  FUN_190dd72e0();
  (*_DAT_180ca9648)();
  return;
}


// ----- block @ rva 0x788db0d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788db0d(void)

{
  FUN_190ddfc90();
  (*_DAT_180ca95b8)();
  return;
}


// ----- block @ rva 0x788dbd3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788dbd3(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180ca94c8)();
  return;
}


// ----- block @ rva 0x788dc08 -----

void FUN_18788dc08(void)

{
  return;
}


// ----- block @ rva 0x788dc16 -----

void FUN_18788dc16(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x788dd80 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788dd80(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180ca9ba8)();
  return;
}


// ----- block @ rva 0x788e84b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788e84b(void)

{
  (*_DAT_180caa4e8)();
  return;
}


// ----- block @ rva 0x788eac9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788eac9(void)

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


// ----- block @ rva 0x788ee9d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18788ee9d(void)

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


// ----- block @ rva 0x788f118 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788f118(void)

{
  FUN_190ddfc90();
  (*_DAT_180caa448)();
  return;
}


// ----- block @ rva 0x788f267 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788f267(void)

{
  FUN_190ddfc90();
  (*_DAT_180caa1c8)();
  return;
}


// ----- block @ rva 0x788f465 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788f465(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180caa378)();
  return;
}


// ----- block @ rva 0x788f59a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18788f59a(void)

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


// ----- block @ rva 0x788fe60 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18788fe60(void)

{
  FUN_190dd72e0();
  (*_DAT_180caa298)();
  return;
}


// ----- block @ rva 0x78901d7 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878901d7(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180caa008)();
  return;
}


// ----- block @ rva 0x7890602 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187890602(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180ca9cd8)();
  return;
}


// ----- block @ rva 0x789065d -----

void FUN_18789065d(void)

{
  return;
}


// ----- block @ rva 0x789067c -----

void FUN_18789067c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7892be4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187892be4(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7892d83 -----

void FUN_187892d83(void)

{
  return;
}


// ----- block @ rva 0x789302e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18789302e(void)

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


// ----- block @ rva 0x7895177 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187895177(void)

{
  longlong in_stack_00000058;
  
  switch(in_stack_00000058 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x78953cc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878953cc(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7895988 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187895988(void)

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


// ----- block @ rva 0x7895cfd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187895cfd(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x78962d1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1878962d1(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  
  (**(code **)(in_stack_00000030 + JNI->ThrowNew /*0x70*/))(in_stack_00000030,in_stack_00000038,&UNK_182f702a8);
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7896508 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187896508(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_stack_00000030 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000030);
  uVar3 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x784,0x25);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))(in_stack_00000030,uVar2,uVar3);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x789658e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18789658e(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,param_2,0x2f);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x78977f9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187897857(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  (**(code **)(in_stack_00000030 + JNI->ExceptionClear /*0x88*/))();
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
  cVar1 = (**(code **)(in_stack_00000030 + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x789b63e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18789b63e(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  FUN_190dd72e0();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x789b68e -----

undefined4 FUN_18789b68e(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong *unaff_R12;
  
  uVar2 = FUN_184194800();
  cVar1 = (**(code **)(unaff_R12 + JNI->ExceptionCheck /*0x720*/))();
  uVar3 = 0;
  if (cVar1 == '\0') {
    uVar3 = uVar2;
  }
  return uVar3;
}


// ----- block @ rva 0x789b93e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18789b93e(void)

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


// ----- block @ rva 0x789b992 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18789b992(void)

{
  int iVar1;
  longlong *unaff_RSI;
  
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iVar1 < 1) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x789bd7b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18789bd7b(void)

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


// ----- block @ rva 0x789bdd3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18789bdd3(void)

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


// ----- block @ rva 0x789be0e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18789be0e(void)

{
  FUN_190ddfc90();
  (*_DAT_180caca38)();
  return;
}


// ----- block @ rva 0x789c0db -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18789c0db(void)

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


// ----- block @ rva 0x789c1ac -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18789c1ac(void)

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


// ----- block @ rva 0x789c1d0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18789c1d0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallStaticObjectMethodA /*0x3a0*/))();
  (*_DAT_180cac968)();
  return;
}


// ----- block @ rva 0x789c323 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18789c323(void)

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


// ----- block @ rva 0x789c5a9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18789c5a9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180cacac8)();
  return;
}


// ----- block @ rva 0x789c7d1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18789c7d1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180cac9e8)();
  return;
}


// ----- block @ rva 0x789c805 -----

void FUN_18789c805(void)

{
  return;
}


// ----- block @ rva 0x789c814 -----

void FUN_18789c814(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

