// ===== STITCHED CORPUS: sixtwo.bo =====
// handlers: 14  continuation blocks: 156  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x27740a0', '0x27740a8', '0x27740b0', '0x27740b8', '0x27740c0', '0x27740d0', '0x27740d8', '0x27740e0', '0x27740e8', '0x27740f0', '0x27740f8', '0x2774100', '0x2774108', '0x2774110', '0x2774118', '0x2774120', '0x2774128', '0x2774130', '0x2774138']

// ===== Lsixtwo/bo; FA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18edd2e50, runtime 6ffff69e2e50) =====

void FUN_18edd2e50(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018edd2e8c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182782610 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/bo; FB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18edd3d40, runtime 6ffff69e3d40) =====

void FUN_18edd3d40(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018edd3dbd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182782b50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/bo; FC (IJ)I (handler @ image 18ed72eb0, runtime 6ffff6982eb0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed72eb0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar8;
  
  uVar3 = (~uRam00000001833d9220 + 0xef1c5e4f9eecb2a3) *
          ((uRam00000001833d9128 ^ 0x453bdb7f73e4e070) +
          (uRam00000001833d9128 & 0x453bdb7f73e4e070) * 2);
  uVar3 = (uVar3 | uRam00000001833d9128) + (uVar3 & uRam00000001833d9128);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833d8f78 =
       func_0x00018ed7eb70((uVar3 | 0xaa278530ed0852d2) + (uVar3 & 0xaa278530ed0852d2));
  uRam00000001833d9238 =
       (uRam00000001833d9238 ^ uRam00000001833d8f78 ^ 0xef1c5e4f9eecb2a2) + 0xef3fdf7fffeef3f7 ^
       0x25037ee9e91ff16d;
  uRam00000001833d8f38 =
       (uRam00000001833d8f38 * -0x46700194b7fdce1b ^ uRam00000001833d9238) +
       (uRam00000001833d8f78 ^ 0xef1c5e4f9eecb2a2);
  uRam00000001833d9088 = uRam00000001833d8f38 ^ uRam00000001833d9238;
  uRam00000001833d9188 = 0xef3fdf7fffeef3f7;
  uVar3 = (uRam00000001833d9070 ^ _UNK_1827740a0) + uRam00000001833d8f60 + 0xd418f29fc3dde83d;
  uVar7 = (uRam00000001833d8f60 ^ _UNK_1827740a8) + uRam00000001833d9070 + 0x86e5286eeb5f5cdb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833d9070 ^ _UNK_1827740a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833d8f60 ^ _UNK_1827740a8;
  uRam00000001833d8f98 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833d9070 + 0x86e5286eeb5f5cdb) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833d8f60 + 0xd418f29fc3dde83d));
  uVar3 = uRam00000001833d8f98 << 5 | uRam00000001833d8f98 >> 0x3b;
  uRam00000001833d8f20 = (uRam00000001833d8f20 ^ uVar3) + 0x52fddaf1aca097c3 ^ 0xff872d193708caf6;
  uRam00000001833d9180 = (uRam00000001833d9180 * 0x3908b7a607c9ec49 ^ uRam00000001833d8f20) + uVar3;
  uRam00000001833d9170 = uRam00000001833d9180 ^ uRam00000001833d8f20;
  uRam00000001833d8f50 = 0x52fddaf1aca097c3;
  uVar3 = (~uRam00000001833d90d8 + 0xe5b8448dcf4c12bf) *
          ((uRam00000001833d9228 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833d9228 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam00000001833d92e8) + (uVar3 & uRam00000001833d92e8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uVar3 = func_0x00018ed7eb70((uVar3 | 0xe5b8448d4b6e319b) + (uVar3 & 0xe5b8448d4b6e319b));
  uVar7 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x33 ^ uVar3) &
          0xfffffffffffff000;
  uRam00000001833d8fd0 = (uVar3 ^ uVar7) + 0x1a47bb7230b3ed42 ^ 0x641ff3c198882f33;
  uRam00000001833d8fa0 = (uRam00000001833d8fa0 * -0x70dc5bad04c0349d ^ uRam00000001833d8fd0) + uVar7
  ;
  uRam00000001833d9278 = uRam00000001833d8fa0 ^ uRam00000001833d8fd0;
  uRam00000001833d9250 = uRam00000001833d90f0 ^ 0x1a47bb7230b3ed42;
  uRam00000001833d9218 = 0x1a47bb7230b3ed42;
  uRam00000001833d90d8 = func_0x00018ed7eb70(uRam00000001833d9000 ^ 0x27249d25cad454b0);
  uVar3 = uRam00000001833d90d8 ^ 0x1a47bb7230b3ed42;
  uRam00000001833d92d0 = uRam00000001833d8fb0 ^ uVar3 ^ 0x7fff;
  uRam00000001833d92e8 = (uRam00000001833d92e8 ^ uVar3) + 0x7fff ^ 0xf6b75572b49238ac;
  uRam00000001833d92a8 = (uRam00000001833d92a8 * 0x2d9e46f4c6188b53 ^ uRam00000001833d92e8) + uVar3;
  uRam00000001833d9170 = uRam00000001833d92a8 ^ uRam00000001833d92e8;
  uRam00000001833d90f8 = 0x7fff;
  uRam00000001833d9018 = func_0x00018ed7eb70(uRam00000001833d9218 + 0x8a915cc4e2441f44 ^ 3);
  uVar3 = (uRam00000001833d9018 & 0xfffffffffffffff) * 0x724f319eedee09e5;
  uRam00000001833d9068 = (uRam00000001833d9068 ^ uVar3) + 0xb25a436abefe2300 ^ 0x56d0338880dfc0f2;
  uRam00000001833d90e0 = (uRam00000001833d90e0 * -0xe3b18e2b84b45ab ^ uRam00000001833d9068) + uVar3;
  uRam00000001833d9070 = uRam00000001833d90e0 ^ uRam00000001833d9068;
  uRam00000001833d9048 = 0xb25a436abefe2300;
  uVar3 = (~uRam00000001833d9078 + 0xb25a436abefe2301) *
          ((uRam00000001833d8f40 ^ 0x4da5bc95c5207fda) +
          (uRam00000001833d8f40 & 0x4da5bc95c5207fda) * 2);
  uVar3 = (uVar3 | uRam00000001833d9238) + (uVar3 & uRam00000001833d9238);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833d9258 =
       func_0x00018ed7eb70((uVar3 | 0xffffffff7bde5cda) + (uVar3 & 0xffffffff7bde5cda));
  uVar3 = (uRam00000001833d9258 ^ 0x4da5bc9541025cff) << 0x11 |
          (uRam00000001833d9258 ^ 0x4da5bc9541025cff) >> 0x2f;
  uRam00000001833d8fc0 = uRam00000001833d9170 ^ uVar3 ^ 0x7fff;
  uRam00000001833d9100 = (uRam00000001833d9100 ^ uVar3) + 0x7fff ^ 0x41f20ce71ad3cce9;
  uRam00000001833d9050 = (uRam00000001833d9050 * -0x486b829534986bb9 ^ uRam00000001833d9100) + uVar3
  ;
  uRam00000001833d90f8 = uRam00000001833d9050 ^ uRam00000001833d9100;
  uRam00000001833d9250 = 0x7fff;
  uRam00000001833d9010 = func_0x00018ed7eb70(uRam00000001833d8f78 ^ 0x92867ccb1318a206);
  uVar3 = uRam00000001833d9010 - (uRam00000001833d9010 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001833d9010;
  uRam00000001833d9120 = (uRam00000001833d9120 ^ uVar3) + 0x9d7ad74d2e605ae8 ^ 0x2f18493b65093f28;
  uRam00000001833d91e0 = (uRam00000001833d91e0 * -0x3f4bff82a9b44d7b ^ uRam00000001833d9120) + uVar3
  ;
  uRam00000001833d91b0 = uRam00000001833d91e0 ^ uRam00000001833d9120;
  uRam00000001833d8f98 = 0x9d7ad74d2e605ae8;
  uRam00000001833d92d0 = func_0x00018ed7eb70(uRam00000001833d92e0 + 0x9208853241d75ca1 ^ 0x97);
  uVar3 = (uRam00000001833d92d0 ^ 0x628528b2d19fa518) << 0x27 |
          (uRam00000001833d92d0 ^ 0x628528b2d19fa518) >> 0x19;
  uRam00000001833d9248 = uRam00000001833d9150 ^ uVar3 ^ 0x628528b2d1a02517;
  uRam00000001833d8fe0 = (uRam00000001833d8fe0 ^ uVar3) + 0x628528b2d1a02517 ^ 0x4c3cc9be4f700b8f;
  uRam00000001833d9178 = (uRam00000001833d9178 * 0x72f2fdcfda3c1e0f ^ uRam00000001833d8fe0) + uVar3;
  uRam00000001833d9140 = uRam00000001833d9178 ^ uRam00000001833d8fe0;
  uRam00000001833d8fc8 = 0x628528b2d1a02517;
  uRam00000001833d8f10 = func_0x00018ed7eb70(uRam00000001833d9220 ^ 0x70cc1a86c9cb223f);
  uRam00000001833d8f50 = uRam00000001833d92d8 ^ uRam00000001833d8f10 ^ 0x7fff;
  uRam00000001833d90a0 = (uRam00000001833d90a0 ^ uRam00000001833d8f10) + 0x7fff ^ 0x8af4c777ac6038b6
  ;
  uRam00000001833d9178 =
       (uRam00000001833d9178 * 0x1c90a85fc33bdc45 ^ uRam00000001833d90a0) + uRam00000001833d8f10;
  uRam00000001833d9248 = uRam00000001833d9178 ^ uRam00000001833d90a0;
  uRam00000001833d91a8 = 0x7fff;
  uVar3 = (_UNK_1827740b0 ^ 0x7fff) + uRam00000001833d90e8 + 0xef3fdf7f7bccd0d2;
  uVar7 = (uRam00000001833d90e8 ^ _UNK_1827740b8) + 0x52fddaf1aca117c2;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _UNK_1827740b0 ^ 0x7fff;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833d90e8 ^ _UNK_1827740b8;
  uRam00000001833d9158 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) + 0xad02250e535ee83e ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam00000001833d90e8 + 0xef3fdf7f7bccd0d2));
  uRam00000001833d8f60 =
       (uRam00000001833d8f60 ^ uRam00000001833d9158 & 0xffffffffffe00000) + 0xbdc2058e534e6434 ^
       0x6a11ff052c2cba0b;
  uRam00000001833d8fd0 =
       (uRam00000001833d8fd0 * 0x6f787cc3d8ef6443 ^ uRam00000001833d8f60) +
       (uRam00000001833d9158 & 0xffffffffffe00000);
  uRam00000001833d9078 = uRam00000001833d8fd0 ^ uRam00000001833d8f60;
  uRam00000001833d9008 = uRam00000001833d8fd8 ^ 0xbdc2058e534e6434;
  uRam00000001833d92a8 = 0xbdc2058e534e6434;
  uVar3 = func_0x00018ed7eb70(uRam00000001833d8f28 + 0x251fb87d89b0eb08 ^ 0xf5);
  uVar3 = (uVar3 & 0x7fffffffffffffff) * -0x55360008fe54900d;
  uRam00000001833d8f98 = uRam00000001833d91f8 ^ uVar3 ^ 0x423dba71ac8f8bba;
  uRam00000001833d8f40 = (uRam00000001833d8f40 ^ uVar3) + 0x423dba71ac8f8bba ^ 0xfa880c3554e09f93;
  uRam00000001833d8ff0 = (uRam00000001833d8ff0 * 0x19cf21d911ed672d ^ uRam00000001833d8f40) + uVar3;
  uRam00000001833d9210 = uRam00000001833d8ff0 ^ uRam00000001833d8f40;
  uRam00000001833d9298 = 0x423dba71ac8f8bba;
  uRam00000001833d8fa0 = func_0x00018ed7eb70(lRam00000001833d9138 + 0x22ff841b001dffU ^ 0x2b);
  uVar3 = uRam00000001833d8fa0 >> 1 | uRam00000001833d8fa0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uRam00000001833d8f40 =
       (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
       uRam00000001833d8fa0;
  uRam00000001833d9238 = uRam00000001833d9238 ^ uRam00000001833d8f40 ^ 0x4667d79c371e7df8;
  uRam00000001833d91a0 =
       (uRam00000001833d91a0 * -0x4c1ccc2434ecd121 ^ uRam00000001833d9238) + uRam00000001833d8f40;
  uRam00000001833d9028 = uRam00000001833d91a0 ^ uRam00000001833d9238;
  uRam00000001833d9190 = 0;
  uRam00000001833d9178 = func_0x00018ed7eb70(uRam00000001833d91a0 ^ 0xffcbff8326001de5);
  uVar3 = uRam00000001833d9178 ^ 0x7fff;
  uVar7 = uVar3 >> 1 | uVar3;
  uVar7 = uVar7 >> 2 | uVar7;
  uVar7 = uVar7 >> 4 | uVar7;
  uVar7 = uVar7 >> 8 | uVar7;
  uVar7 = uVar7 >> 0x10 | uVar7;
  uVar7 = uVar7 >> 0x20 | uVar7;
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar7 >> 4) + uVar7 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar3;
  uRam00000001833d9058 = uRam00000001833d8fd8 ^ uVar3 ^ 0x7fff;
  uRam00000001833d9218 = (uRam00000001833d9218 ^ uVar3) + 0x7fff ^ 0x411b801d52aa70c2;
  uRam00000001833d91c0 = (uRam00000001833d91c0 * 0x552ced225866bec5 ^ uRam00000001833d9218) + uVar3;
  uRam00000001833d91f0 = uRam00000001833d91c0 ^ uRam00000001833d9218;
  uRam00000001833d8f58 = 0x7fff;
  uRam00000001833d91a0 = func_0x00018ed7eb70(uRam00000001833d91b0 ^ 0x7feebf7c252013b9);
  uRam00000001833d8fd8 =
       (uRam00000001833d8fd8 ^ uRam00000001833d91a0 ^ 0xef3fdf7fffeef3f7) + 0x10c0208000110c08 ^
       0x18a14e5298cfc3dc;
  uRam00000001833d9018 =
       (uRam00000001833d9018 * -0x585e1fa39b62a567 ^ uRam00000001833d8fd8) +
       (uRam00000001833d91a0 ^ 0xef3fdf7fffeef3f7);
  uRam00000001833d9220 = uRam00000001833d9018 ^ uRam00000001833d8fd8;
  uRam00000001833d91a8 = 0x10c0208000110c08;
  uVar3 = (~uRam00000001833d91b0 + 0x10c0208000110c09) *
          ((uRam00000001833d9100 ^ 0xef3fdf7f7bccd0d2) +
          (uRam00000001833d9100 & 0x6f3fdf7f7bccd0d2) * 2);
  uVar3 = (uVar3 | uRam00000001833d8f30) + (uVar3 & uRam00000001833d8f30);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833d90f0 =
       func_0x00018ed7eb70((uVar3 | 0xffffffff7bdddcda) + (uVar3 & 0xffffffff7bdddcda));
  uRam00000001833d9030 =
       uRam00000001833d9030 ^ uRam00000001833d90f0 ^ 0xef3fdf7fffeef3f7 ^ 0x45cd79dfb757077a;
  uRam00000001833d8f00 =
       (uRam00000001833d8f00 * 0x7a6a51c5e47b0edd ^ uRam00000001833d9030) +
       (uRam00000001833d90f0 ^ 0xef3fdf7fffeef3f7);
  uRam00000001833d8fc8 = uRam00000001833d8f00 ^ uRam00000001833d9030;
  uRam00000001833d90a8 = 0;
  uVar3 = (uRam00000001833d8f30 ^ 0x84225cda) + uRam00000001833d8fb0 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833d8f30 ^ 0x84225cda;
  uVar7 = ((uRam00000001833d8fb0 + uRam00000001833d8f30) * 0x2000 |
          uRam00000001833d8fb0 + uRam00000001833d8f30 >> 0x33) ^ uRam00000001833d8fb0;
  uRam00000001833d9260 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) - uRam00000001833d8f30 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833d8fb0 + 0x84225cda));
  uVar3 = uRam00000001833d9260 - (uRam00000001833d9260 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^
          uRam00000001833d9260;
  uRam00000001833d9288 = uRam00000001833d9110 ^ uVar3 ^ 0x7fff;
  uRam00000001833d90a8 = (uRam00000001833d90a8 ^ uVar3) + 0x7fff ^ 0x567708048da964df;
  uRam00000001833d9258 = (uRam00000001833d9258 * -0x674a014d6be5074d ^ uRam00000001833d90a8) + uVar3
  ;
  uRam00000001833d9230 = uRam00000001833d9258 ^ uRam00000001833d90a8;
  uRam00000001833d9108 = 0x7fff;
  uVar3 = ((uRam00000001833d9050 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833d9050 & 0x84225cda) * 2) * -uRam00000001833d9248;
  uVar3 = (uVar3 | uRam00000001833d8f78) + (uVar3 & uRam00000001833d8f78);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833d9028 =
       func_0x00018ed7eb70((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = (ulonglong)(~((int)uRam00000001833d9028 * -0x31adbbc3) & 0x7fff);
  uRam00000001833d90d0 = uRam00000001833d92e8 ^ uVar3 ^ 0x7fff;
  uRam00000001833d9060 = (uRam00000001833d9060 ^ uVar3) + 0x7fff ^ 0xa27458facfaf0b08;
  uRam00000001833d9280 = (uRam00000001833d9280 * -0x421930146c94c3b5 ^ uRam00000001833d9060) + uVar3
  ;
  uRam00000001833d8fe0 = uRam00000001833d9280 ^ uRam00000001833d9060;
  uRam00000001833d92e8 = uRam00000001833d8f20 ^ 0x7fff;
  uRam00000001833d90c8 = 0x7fff;
  uVar3 = param_4 ^ 0x84222325 ^ uRam00000001833d92f0;
  lVar4 = (param_4 ^ 0x84222325) + uRam00000001833d9040;
  uVar7 = uVar3 + lVar4;
  uVar8 = (uRam00000001833d9040 ^ 0x7fff) + uRam00000001833d92f0 + 0x7fff;
  uVar3 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uVar3;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833d9040 ^ 0x7fff;
  uRam00000001833d9298 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833d92f0 + 0x7fff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - lVar4);
  uVar2 = (uint)param_4 & 0x7fff;
  uVar7 = (ulonglong)uVar2;
  uRam00000001833d9268 =
       (uRam00000001833d9268 ^ uRam00000001833d9298 & 0x7fffffffffffffff) + uVar7 ^
       0x4e439bbea9a51f26;
  uRam00000001833d9030 =
       (uRam00000001833d9030 * 0x359172ae30aa819 ^ uRam00000001833d9268) +
       (uRam00000001833d9298 & 0x7fffffffffffffff);
  uRam00000001833d92d8 = uRam00000001833d9030 ^ uRam00000001833d9268;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar2 ^ 0x84222325;
  auVar5._8_4_ = param_3;
  auVar5._12_4_ = 0;
  auVar6 = pshufb(auVar5 ^ _UNK_1827740c0,_UNK_1800170c0);
  uVar8 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar8 + uRam00000001833d8f38;
  if (auVar6._4_4_ < 0) {
    uVar3 = uRam00000001833d9110 ^ uVar8;
  }
  uRam00000001833d9190 = uVar7;
  lVar4 = func_0x00018ed7eb70(SUB161(auVar5 ^ _UNK_1827740c0,5) ^ uVar3);
  uRam00000001833d8f98 =
       (uRam00000001833d9158 << 1 | (ulonglong)((longlong)uRam00000001833d9158 < 0)) << 0x1d |
       (uRam00000001833d9158 & 0x7fffffffffffffff) >> 0x22;
  uRam00000001833d9150 = (uVar7 + param_3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001833d8ff0 =
       (uRam00000001833d8ff0 ^ uRam00000001833d8f98) + uRam00000001833d9150 ^ 0x5aa00abaaa7d8791;
  uRam00000001833d8f98 = (lVar4 * -0x2438b9fc705a3961 ^ uRam00000001833d8ff0) + uRam00000001833d8f98
  ;
  uRam00000001833d9188 = uRam00000001833d8f98 ^ uRam00000001833d8ff0;
  uRam00000001833d9150 = uRam00000001833d9150 & 0xffffffff;
  uVar3 = (~uRam00000001833d91c0 + 0xbec1168c) *
          ((uRam00000001833d9170 ^ 0xb8aecd0) +
          (ulonglong)((uint)uRam00000001833d9170 & 0xb8aecd0) * 2);
  uVar3 = (uVar3 | uRam00000001833d92d0) + (uVar3 & uRam00000001833d92d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833d9198 =
       func_0x00018ed7eb70((uVar3 | 0xb54bfa5b) + (ulonglong)((uint)uVar3 & 0xb54bfa5b));
  uRam00000001833d9050 =
       (uRam00000001833d9050 ^ uRam00000001833d9198 ^ 0xbfe9dfff) + 0xbfe9dfff ^ 0xd255d14a5238c4ff;
  uRam00000001833d9130 =
       (uRam00000001833d9130 * 0x352ebe695b70423 ^ uRam00000001833d9050) +
       (uRam00000001833d9198 ^ 0xbfe9dfff);
  uRam00000001833d91a0 = uRam00000001833d9130 ^ uRam00000001833d9050;
  uRam00000001833d8f20 = 0xbfe9dfff;
  uVar3 = (~uRam00000001833d91a0 + 0xab7320a6) *
          ((uRam00000001833d9148 ^ 0xa485329e) +
          (ulonglong)((uint)uRam00000001833d9148 & 0xa485329e) * 2);
  uVar3 = (uVar3 | uRam00000001833d91c8) + (uVar3 & uRam00000001833d91c8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833d90a8 =
       func_0x00018ed7eb70((uVar3 | 0xff6123b) + (ulonglong)((uint)uVar3 & 0xff6123b));
  uRam00000001833d9288 =
       (uRam00000001833d9288 ^ uRam00000001833d90a8) + 0x8bd4311e ^ 0x82918ea451f460f0;
  uRam00000001833d9140 =
       (uRam00000001833d9140 * -0x5cbf510849740329 ^ uRam00000001833d9288) + uRam00000001833d90a8;
  uRam00000001833d8fa0 = uRam00000001833d9140 ^ uRam00000001833d9288;
  uRam00000001833d91d8 = 0x8bd4311e;
  uRam00000001833d9070 = func_0x00018ed7eb70(uRam00000001833d91c0 + 0xc3ffc3b60092ff ^ 0x82);
  uVar3 = (uRam00000001833d9070 << 0x37 | uRam00000001833d9070 >> 9) * 0x1a4adf5308a66159;
  uRam00000001833d8f90 = (uRam00000001833d8f90 ^ uVar3) - 0xc09fef6f ^ 0x313cf260da33af0b;
  uRam00000001833d8fe0 = (uRam00000001833d8fe0 * -0x8f7324fc1a99109 ^ uRam00000001833d8f90) + uVar3;
  uRam00000001833d8fd0 = uRam00000001833d8fe0 ^ uRam00000001833d8f90;
  uRam00000001833d9108 = 0x3f601091;
  uVar3 = (uRam00000001833d9228 ^ _UNK_1827740d0) + uRam00000001833d91d0 + 0x84222f3e;
  uVar7 = (uRam00000001833d91d0 ^ _UNK_1827740d8) + uRam00000001833d9228 + 0xc09fef6f;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833d9228 ^ _UNK_1827740d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833d91d0 ^ _UNK_1827740d8;
  uRam00000001833d90f8 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833d9228 + 0xc09fef6f) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833d91d0 + 0x84222f3e));
  uRam00000001833d90d0 = uRam00000001833d9190 ^ uRam00000001833d90f8 ^ 0xc09ffb8a;
  uRam00000001833d9238 =
       (uRam00000001833d9238 ^ uRam00000001833d90f8) + 0xc09ffb8a ^ 0xd4016e7182a43a14;
  uRam00000001833d8f80 =
       (uRam00000001833d8f80 * 0x41efb995e5706a89 ^ uRam00000001833d9238) + uRam00000001833d90f8;
  uRam00000001833d9050 = uRam00000001833d8f80 ^ uRam00000001833d9238;
  uRam00000001833d9140 = 0xc09ffb8a;
  uVar3 = (~uRam00000001833d9078 + 0x3f601092) *
          ((uRam00000001833d92c0 ^ 0x44bdd8af) +
          (ulonglong)((uint)uRam00000001833d92c0 & 0x44bdd8af) * 2);
  uVar3 = (uVar3 | uRam00000001833d9100) + (uVar3 & uRam00000001833d9100);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833d9080 =
       func_0x00018ed7eb70((uVar3 | 0x7bddc83e) + (ulonglong)((uint)uVar3 & 0x7bddc83e));
  uVar3 = uRam00000001833d9080 >> 1 | uRam00000001833d9080;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uRam00000001833d9080;
  uRam00000001833d8f10 = uRam00000001833d8f40 ^ uVar3 ^ 0x100000c1b;
  uRam00000001833d91f0 = (uRam00000001833d91f0 ^ uVar3) + 0x100000c1b ^ 0xfb08b1c81abba1bc;
  uRam00000001833d9018 = (uRam00000001833d9018 * 0x75dbdc5cab3a57cd ^ uRam00000001833d91f0) + uVar3;
  uRam00000001833d8f88 = uRam00000001833d9018 ^ uRam00000001833d91f0;
  uRam00000001833d9028 = 0xc1b;
  uVar3 = (uRam00000001833d9058 ^ _UNK_1827740e0) + uRam00000001833d92c8 + 0x84222325;
  uVar7 = (uRam00000001833d92c8 ^ _UNK_1827740e8) + uRam00000001833d9058 + 0x619cebd1;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833d9058 ^ _UNK_1827740e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833d92c8 ^ _UNK_1827740e8;
  uRam00000001833d92b0 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833d9058 + 0x619cebd1) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833d92c8 + 0x84222325));
  uRam00000001833d92d0 =
       (uRam00000001833d92d0 ^ uRam00000001833d92b0 & 0x7fffffffffffffff) - 0x619cebd1 ^
       0x7fac99d03717281d;
  uRam00000001833d9288 =
       (uRam00000001833d9288 * 0x7c9d1f2aca0a656d ^ uRam00000001833d92d0) +
       (uRam00000001833d92b0 & 0x7fffffffffffffff);
  uRam00000001833d9268 = uRam00000001833d9288 ^ uRam00000001833d92d0;
  uRam00000001833d9180 = 0x9e63142f;
  uRam00000001833d91a8 = func_0x00018ed7eb70(uRam00000001833d8fd8 + 0x3bff23a2ff7dff ^ 0x14);
  uVar3 = uRam00000001833d91a8 ^ 0x619cebd1;
  uRam00000001833d91b0 = uRam00000001833d9118 ^ uVar3 ^ 0x619cf7ec;
  uRam00000001833d9000 = (uRam00000001833d9000 ^ uVar3) + 0x619cf7ec ^ 0x232f82e33069e556;
  uRam00000001833d92e0 = (uRam00000001833d92e0 * -0x376b5521abbe961b ^ uRam00000001833d9000) + uVar3
  ;
  uRam00000001833d91e0 = uRam00000001833d92e0 ^ uRam00000001833d9000;
  lRam00000001833d9138 = 0x619cf7ec;
  uVar3 = (~uRam00000001833d92e8 + 0x9e631430) *
          ((uRam00000001833d8fe0 ^ 0xe5bed4c9) +
          (ulonglong)((uint)uRam00000001833d8fe0 & 0xe5bed4c9) * 2);
  uVar3 = (uVar3 | uRam00000001833d90d0) + (uVar3 & uRam00000001833d90d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833d9278 =
       func_0x00018ed7eb70((uVar3 | 0x7bddc0e6) + (ulonglong)((uint)uVar3 & 0x7bddc0e6));
  uVar3 = uRam00000001833d9278 >> 1 | uRam00000001833d9278;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 4 ^
          uRam00000001833d9278;
  uRam00000001833d9260 = uRam00000001833d9210 ^ uVar3 ^ 0x100000c1b;
  uRam00000001833d9068 = (uRam00000001833d9068 ^ uVar3) + 0x100000c1b ^ 0xaa22a643ca4820c9;
  uRam00000001833d9040 = (uRam00000001833d9040 * 0x593a250d756240c9 ^ uRam00000001833d9068) + uVar3;
  uRam00000001833d9068 = uRam00000001833d9040 ^ uRam00000001833d9068;
  uRam00000001833d90a8 = 0xc1b;
  uVar3 = (uRam00000001833d9030 ^ _UNK_1827740f0) + uRam00000001833d8fb0 + 0x84222325;
  uVar7 = (uRam00000001833d8fb0 ^ _UNK_1827740f8) + uRam00000001833d9030 + 0x2e1ff31;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833d9030 ^ _UNK_1827740f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833d8fb0 ^ _UNK_1827740f8;
  uRam00000001833d8f40 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833d9030 + 0x2e1ff31) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833d8fb0 + 0x84222325));
  uRam00000001833d8fc8 =
       (uRam00000001833d8fc8 ^ uRam00000001833d9028) - 0x2e1ff31 ^ 0x55a8a9b98856645a;
  uRam00000001833d9128 =
       (uRam00000001833d9128 * 0x370b0ec7d171e4f5 ^ uRam00000001833d8fc8) + uRam00000001833d9028;
  uRam00000001833d8f08 = uRam00000001833d9128 ^ uRam00000001833d8fc8;
  uRam00000001833d90d0 = 0xfd1e00cf;
  uVar3 = (uRam00000001833d9180 ^ _UNK_182774100) + uRam00000001833d8f70 + 0x84222f3e;
  uVar7 = (uRam00000001833d8f70 ^ _UNK_182774108) + uRam00000001833d9180 + 0x2e1ff31;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833d9180 ^ _UNK_182774100;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833d8f70 ^ _UNK_182774108;
  uRam00000001833d9058 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833d9180 + 0x2e1ff31) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833d8f70 + 0x84222f3e));
  uVar3 = uRam00000001833d9058 ^ 0xc1b;
  uRam00000001833d9040 = uRam00000001833d9110 ^ uVar3 ^ 0x2e20b4c;
  uRam00000001833d8ff0 = (uRam00000001833d8ff0 ^ uVar3) + 0x2e20b4c ^ 0xc0730917580f36b6;
  uRam00000001833d8f70 = (uRam00000001833d8f70 * 0x778759faede982f1 ^ uRam00000001833d8ff0) + uVar3;
  uRam00000001833d92d8 = uRam00000001833d8f70 ^ uRam00000001833d8ff0;
  uRam00000001833d8f60 = 0x2e20b4c;
  uRam00000001833d9160 = func_0x00018ed7eb70(lRam00000001833d9038 + 0xbb00b0c3fffaffU ^ 0xd7);
  uRam00000001833d9088 =
       (uRam00000001833d9088 ^ uRam00000001833d9160 ^ 0x68d30f1f35740ee2) + 0x343deee1 ^
       0x1721371584b90222;
  uRam00000001833d9010 =
       (uRam00000001833d9010 * 0x4df21890f7563779 ^ uRam00000001833d9088) +
       (uRam00000001833d9160 ^ 0x68d30f1f35740ee2);
  uRam00000001833d9190 = uRam00000001833d9010 ^ uRam00000001833d9088;
  uRam00000001833d8f38 = 0x343deee1;
  uVar3 = (uRam00000001833d9048 ^ _UNK_182774110) + uRam00000001833d9298 + 0x3bcbfcda;
  uVar7 = (uRam00000001833d9298 ^ _UNK_182774118) + uRam00000001833d9048 + 0x8bd4311e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833d9048 ^ _UNK_182774110;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833d9298 ^ _UNK_182774118;
  uRam00000001833d9250 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833d9048 + 0x8bd4311e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833d9298 + 0x3bcbfcda));
  uVar3 = ((uRam00000001833d9250 ^ 0xbffdffff) << 0x13 | uRam00000001833d9250 >> 0x2d) ^ 0xbfe9dfff;
  uRam00000001833d9178 = (uRam00000001833d9178 ^ uVar3) + 0x8bc0111e ^ 0x21306727da73b2b1;
  uRam00000001833d8f68 = (uRam00000001833d8f68 * -0x533bf8b5bd5afa01 ^ uRam00000001833d9178) + uVar3
  ;
  uRam00000001833d8f08 = uRam00000001833d8f68 ^ uRam00000001833d9178;
  uRam00000001833d9020 = 0x8bc0111e;
  uRam00000001833d8f28 = func_0x00018ed7eb70(uRam00000001833d9288 + 0xff9300a288007aff ^ 0x2b);
  uVar3 = uRam00000001833d8f28 ^ 0x37bdeefd;
  uRam00000001833d8f10 = uRam00000001833d9008 ^ uVar3 ^ 0x4bbe111d;
  uRam00000001833d91e8 = (uRam00000001833d91e8 ^ uVar3) + 0x4bbe111d ^ 0xb17e751f131bcbe0;
  uRam00000001833d8f58 = (uRam00000001833d8f58 * -0x40b19b8208b65397 ^ uRam00000001833d91e8) + uVar3
  ;
  uRam00000001833d92c8 = uRam00000001833d8f58 ^ uRam00000001833d91e8;
  uRam00000001833d9100 = uRam00000001833d9018 ^ 0x4bbe111d;
  uRam00000001833d8f78 = 0x4bbe111d;
  uVar3 = (uRam00000001833d9258 ^ _UNK_182774120) + uRam00000001833d8fe0 + 0xcf9c3238;
  uVar7 = (uRam00000001833d8fe0 ^ _UNK_182774128) + uRam00000001833d9258 + 0x4bbe111d;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833d9258 ^ _UNK_182774120;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833d8fe0 ^ _UNK_182774128;
  uRam00000001833d91c8 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833d9258 + 0x4bbe111d) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833d8fe0 + 0xcf9c3238));
  uRam00000001833d9078 = (uRam00000001833d91c8 ^ 0x1668eb246630dd49) * -0x7ddec8fb636943d7;
  uRam00000001833d9278 = uRam00000001833d9278 ^ uRam00000001833d9078 ^ 0x2cebbcefe07148a1;
  uRam00000001833d9140 =
       (uRam00000001833d9140 * 0x1a384ae43b19486b ^ uRam00000001833d9278) + uRam00000001833d9078;
  uRam00000001833d9180 = uRam00000001833d9140 ^ uRam00000001833d9278;
  uRam00000001833d90c0 = 0;
  uVar3 = (uRam00000001833d92c8 ^ 0x84222f3e) + uRam00000001833d9040 + 0x84222f3e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833d92c8 ^ 0x84222f3e;
  uVar7 = ((uRam00000001833d9040 + uRam00000001833d92c8) * 0x2000 |
          uRam00000001833d9040 + uRam00000001833d92c8 >> 0x33) ^ uRam00000001833d9040;
  uRam00000001833d92f8 =
       func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) - uRam00000001833d92c8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam00000001833d9040 + 0x84222f3e));
  uVar3 = uRam00000001833d92f8 - (uRam00000001833d92f8 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 5 ^
          uRam00000001833d92f8;
  uVar3 = uVar3 * 0x3a34cd43cb9a85c8 | uVar3 * -0x18b96657868caf47 >> 0x3d;
  uRam00000001833d8fd0 = uRam00000001833d91f8 ^ uVar3 ^ 0xc1b;
  uRam00000001833d92d8 = (uRam00000001833d92d8 ^ uVar3) + 0xc1b ^ 0x9787b56816527ae4;
  uRam00000001833d91c0 = (uRam00000001833d91c0 * -0x77dfbee1ef32c643 ^ uRam00000001833d92d8) + uVar3
  ;
  uRam00000001833d9270 = uRam00000001833d91c0 ^ uRam00000001833d92d8;
  uRam00000001833d91d0 = 0xc1b;
  uVar3 = (uRam00000001833d9258 ^ _UNK_182774130) + uRam00000001833d9010 + 0x3bcbfcda;
  uVar7 = (uRam00000001833d9010 ^ _UNK_182774138) + uRam00000001833d9258 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam00000001833d9258 ^ _UNK_182774130;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833d9010 ^ _UNK_182774138;
  uVar3 = func_0x00018ed7eb70((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam00000001833d9258 + 0xffffffff)
                              ^ (uVar3 << 0x1d | uVar3 >> 0x23) -
                                (uRam00000001833d9010 + 0x3bcbfcda));
  uRam00000001833d9208 =
       (uRam00000001833d9208 ^ uVar3 ^ 0xffffffff) + 0x40162000 ^ 0xb9b4fde5dc1668a6;
  uRam00000001833d8f18 =
       (uRam00000001833d8f18 * -0x72f8b8388535f89 ^ uRam00000001833d9208) + (uVar3 ^ 0xffffffff);
  uRam00000001833d9110 = uRam00000001833d8f18 ^ uRam00000001833d9208;
  uRam00000001833d90c0 = 0x40162000;
  uRam00000001833d90f8 = func_0x00018ed7eb70(uRam00000001833d9250 + 0x2400344600aaff ^ 0xa1);
  uVar3 = (uRam00000001833d90f8 ^ 0xffffffff) << 0x36 | (uRam00000001833d90f8 ^ 0xffffffff) >> 10;
  uRam00000001833d9170 = uRam00000001833d9170 ^ uVar3 ^ 0xecfa5f8d4b728dda;
  uRam00000001833d9088 = (uRam00000001833d9088 * -0x724926c10ba4116b ^ uRam00000001833d9170) + uVar3
  ;
  uRam00000001833d8fd8 = uRam00000001833d9088 ^ uRam00000001833d9170;
  uRam00000001833d90d8 = 0;
  uRam00000001833d92c8 = func_0x00018ed7eb70(uRam00000001833d9150 + 0xffd9007c11ffddff ^ 0x9d);
  uVar3 = (ulonglong)((uint)uRam00000001833d92c8 & 0xc1b) * 0x3b0f0cb0e6d1fe1;
  uRam00000001833d8f38 = uRam00000001833d9050 ^ uVar3 ^ 0xc1b;
  uRam00000001833d9090 = (uRam00000001833d9090 ^ uVar3) + 0xc1b ^ 0x533f4e250875ac87;
  uRam00000001833d90b8 = (uRam00000001833d90b8 * -0x7e65c8a466c9b8f5 ^ uRam00000001833d9090) + uVar3
  ;
  uRam00000001833d90a0 = uRam00000001833d90b8 ^ uRam00000001833d9090;
  uRam00000001833d92a0 = 0xc1b;
  uVar3 = ((uRam00000001833d9240 ^ 0x84222f3e) +
          (ulonglong)((uint)uRam00000001833d9240 & 0x84222f3e) * 2) * -uRam00000001833d90f0;
  uVar3 = (uVar3 | uRam00000001833d9298) + (uVar3 & uRam00000001833d9298);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam00000001833d9028 =
       func_0x00018ed7eb70((uVar3 | 0x84222f3e) + (ulonglong)((uint)uVar3 & 0x84222f3e));
  uVar3 = uRam00000001833d9028 >> 1 | uRam00000001833d9028;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam00000001833d9028;
  uVar3 = (uVar3 << 10 | uVar3 >> 0x36) << 0xd | (uVar3 & 0x3fffffffffffff) >> 0x29;
  uRam00000001833d92f0 = uRam00000001833d8f40 ^ uVar3 ^ 0xc1b;
  uRam00000001833d8f88 = (uRam00000001833d8f88 ^ uVar3) + 0xc1b ^ 0x68ba010f858977d8;
  uRam00000001833d91d0 = (uRam00000001833d91d0 * 0x7f94dd355312cabb ^ uRam00000001833d8f88) + uVar3;
  uRam00000001833d9210 = 0xc1b;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x74a5,0x148)
      /* POOL[0x74a5,0x148]: q | kwnpJ | jzoAa | uHZms | ZGPGj | Fp | Ft | sixtwo/bo | ejgBq | UCmRU | jZEcd | Lsixtwo/nf; | sixtwo/nf | ctT | bzz | (Ljava/lang/String;)Lnet/minecraft/class_1792; | bzB | (Lnet/minecraft/class_1792;)Lsixtwo/mG; | jFosN | Fx | lAJLi | Fw | sixtwo/bs | (FFFLjava/lang/String;Ljava/lang/String;Ljava/util/function/Consumer;)V | ceJ | XTYeh | Nufut | Fz | WTtGn | Fy | FC | XLRYu | OXgHV | uTsC */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ed7552b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182772240 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/bo; FD (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18ed7ec00, runtime 6ffff698ec00) =====

void FUN_18ed7ec00(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018ed7ec4b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182774290 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/bo; FE (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ed7fc10, runtime 6ffff698fc10) =====

void FUN_18ed7fc10(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ed7fc99 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182774850 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/bo; Fw (DD)V (handler @ image 18ed9b260, runtime 6ffff69ab260) =====

void FUN_18ed9b260(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x74a5,0x148)
      /* POOL[0x74a5,0x148]: q | kwnpJ | jzoAa | uHZms | ZGPGj | Fp | Ft | sixtwo/bo | ejgBq | UCmRU | jZEcd | Lsixtwo/nf; | sixtwo/nf | ctT | bzz | (Ljava/lang/String;)Lnet/minecraft/class_1792; | bzB | (Lnet/minecraft/class_1792;)Lsixtwo/mG; | jFosN | Fx | lAJLi | Fw | sixtwo/bs | (FFFLjava/lang/String;Ljava/lang/String;Ljava/util/function/Consumer;)V | ceJ | XTYeh | Nufut | Fz | WTtGn | Fy | FC | XLRYu | OXgHV | uTsC */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ed9b34e did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182779050 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/bo; Fx (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18eda39f0, runtime 6ffff69b39f0) =====

undefined8 FUN_18eda39f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/bo; Fy ([B)Ljava/lang/String; (handler @ image 18eda3a80, runtime 6ffff69b3a80) =====

void FUN_18eda3a80(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x00018eda3b23 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18277b7b8 + (ulonglong)(param_3 == 0) * 8))();
  return;
}




// ===== Lsixtwo/bo; Fz (IJ)Ljava/lang/String; (handler @ image 18edcbd70, runtime 6ffff69dbd70) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edcbd70(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  ulonglong uVar9;
  
  uVar2 = (~uRam00000001833db7a0 + 0x5b9889df01b2d7ae) *
          ((uRam00000001833db830 ^ 0x92e39090745fb639) +
          (uRam00000001833db830 & 0x12e39090745fb639) * 2);
  uVar2 = (uVar2 | uRam00000001833db8e0) + (uVar2 & uRam00000001833db8e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001833db8e8 =
       func_0x00018edd2dc0((uVar2 | 0xc97b194f75ed6194) + (uVar2 & 0xc97b194f75ed6194));
  uRam00000001833db8b0 =
       (uRam00000001833db8b0 ^ uRam00000001833db8e8 ^ 0x5b9889df01b2d7ad) + 0xdbfb99dff1ffd7bd ^
       0xaed531fc942b3741;
  uRam00000001833db8e0 =
       (uRam00000001833db8e0 * 0x14ef04b8409bbff7 ^ uRam00000001833db8b0) +
       (uRam00000001833db8e8 ^ 0x5b9889df01b2d7ad);
  uRam00000001833db828 = uRam00000001833db8e0 ^ uRam00000001833db8b0;
  uRam00000001833db818 = 0xdbfb99dff1ffd7bd;
  uVar2 = (~uRam00000001833db7c0 + 0xb22af2769e7313f1) *
          ((uRam00000001833db710 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833db710 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam00000001833db750) + (uVar2 & uRam00000001833db750);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001833db8e0 =
       func_0x00018edd2dc0((uVar2 | 0xb22af2761a5130d5) + (uVar2 & 0xb22af2761a5130d5));
  uVar2 = uRam00000001833db8e0 << 0x33 | uRam00000001833db8e0 >> 0xd & 0xfffffffffff80000;
  uRam00000001833db748 = (uRam00000001833db748 ^ uVar2) + 0x4dd50d89618cec10 ^ 0x3420267b7f94f29f;
  uRam00000001833db848 = (uRam00000001833db848 * -0x7ccfcdd9de542d69 ^ uRam00000001833db748) + uVar2
  ;
  uRam00000001833db8c0 = uRam00000001833db848 ^ uRam00000001833db748;
  uRam00000001833db778 = 0x4dd50d89618cec10;
  uRam00000001833db890 = func_0x00018edd2dc0(uRam00000001833db7f8 ^ 0x6a8acbeba3c41d05);
  uRam00000001833db770 =
       (uRam00000001833db770 ^ uRam00000001833db890 ^ 0x83f4ccebf0c5ac59) + 0x7c0b33140f3a53a7 ^
       0xce3602e3d667c9ec;
  uRam00000001833db820 =
       (uRam00000001833db820 * -0x49fa1271235fb125 ^ uRam00000001833db770) +
       (uRam00000001833db890 ^ 0x83f4ccebf0c5ac59);
  uRam00000001833db850 = uRam00000001833db820 ^ uRam00000001833db770;
  uRam00000001833db878 = 0x7c0b33140f3a53a7;
  uRam00000001833db7d0 = func_0x00018edd2dc0(0xa54478ff8d894a76);
  uVar2 = uRam00000001833db7d0 & 0x1fffffffffffff;
  uRam00000001833db818 = uRam00000001833db878 ^ uVar2 ^ 0x83f4ccebf0c62c58;
  uRam00000001833db828 = (uRam00000001833db828 ^ uVar2) + 0x83f4ccebf0c62c58 ^ 0x6fb1fc899cc69ba8;
  uRam00000001833db7f0 = (uRam00000001833db7f0 * -0x174dd75ecf7b0c95 ^ uRam00000001833db828) + uVar2
  ;
  uRam00000001833db8d8 = uRam00000001833db7f0 ^ uRam00000001833db828;
  uRam00000001833db840 = -0x7c0b33140f39d3a8;
  uVar2 = (uRam00000001833db700 ^ _UNK_182782400) + uRam00000001833db8c8 + 0x83f4cceb74e40f7d;
  uVar7 = (uRam00000001833db8c8 ^ _UNK_182782408) + uRam00000001833db700 + 0x7c0b33140f3a53a7;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db700 ^ _UNK_182782400;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833db8c8 ^ _UNK_182782408;
  uRam00000001833db890 =
       func_0x00018edd2dc0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833db700 + 0x7c0b33140f3a53a7) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001833db8c8 + 0x83f4cceb74e40f7d));
  uVar2 = uRam00000001833db890 - (uRam00000001833db890 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uVar2 = (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^
          uRam00000001833db890;
  uRam00000001833db7b8 = uRam00000001833db8b8 ^ uVar2 ^ 0x7fff;
  uRam00000001833db8b8 = (uRam00000001833db8b8 ^ uVar2) + 0x7fff ^ 0x389fec6dc3afb020;
  uRam00000001833db850 = (uRam00000001833db850 * -0x3468af9c402b0bf ^ uRam00000001833db8b8) + uVar2;
  uRam00000001833db820 = uRam00000001833db850 ^ uRam00000001833db8b8;
  uRam00000001833db8c0 = 0x7fff;
  uVar2 = (uRam00000001833db780 ^ _UNK_182782410) + uRam00000001833db858 + 0x84222325;
  uVar7 = (uRam00000001833db858 ^ _UNK_182782418) + uRam00000001833db780 + 0x22c7a5513ed6430;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db780 ^ _UNK_182782410;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833db858 ^ _UNK_182782418;
  uRam00000001833db848 =
       func_0x00018edd2dc0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833db780 + 0x22c7a5513ed6430) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833db858 + 0x84222325));
  uRam00000001833db870 =
       (uRam00000001833db870 ^ uRam00000001833db848 * -0xccd57826857f4c1) + 0xfdd385aaec129bd0 ^
       0x6956998ec17408ab;
  uRam00000001833db720 =
       (uRam00000001833db720 * -0x300a72edb6b8ffd3 ^ uRam00000001833db870) +
       uRam00000001833db848 * -0xccd57826857f4c1;
  uRam00000001833db830 = uRam00000001833db720 ^ uRam00000001833db870;
  uRam00000001833db878 = 0xfdd385aaec129bd0;
  uRam00000001833db830 = func_0x00018edd2dc0(uRam00000001833db890 + 0x32c7d374258538fd ^ 1);
  uVar2 = uRam00000001833db830 >> 4 & 0xffffffffffffe000;
  uRam00000001833db740 = uRam00000001833db858 ^ uVar2 ^ 0x22c7a5513ede42f;
  uRam00000001833db7c8 = (uRam00000001833db7c8 ^ uVar2) + 0x22c7a5513ede42f ^ 0x661305f922e6fb8e;
  uRam00000001833db718 = (uRam00000001833db718 * 0xb4a58906b99bc05 ^ uRam00000001833db7c8) + uVar2;
  uRam00000001833db7c0 = uRam00000001833db718 ^ uRam00000001833db7c8;
  uRam00000001833db760 = 0x22c7a5513ede42f;
  uRam00000001833db768 = func_0x00018edd2dc0(uRam00000001833db878 ^ 0xf6c34d1855b75ab5);
  uRam00000001833db748 = uRam00000001833db898 ^ uRam00000001833db768 ^ 0x7fff;
  uRam00000001833db770 = (uRam00000001833db770 ^ uRam00000001833db768) + 0x7fff ^ 0xc94ec116cd79fd39
  ;
  uRam00000001833db848 =
       (uRam00000001833db848 * -0x1d7536b0906d3cbf ^ uRam00000001833db770) + uRam00000001833db768;
  uRam00000001833db7f0 = uRam00000001833db848 ^ uRam00000001833db770;
  uRam00000001833db7d8 = 0x7fff;
  uRam00000001833db8e0 = func_0x00018edd2dc0(uRam00000001833db7a0 + 0x285e0db42d102d0 ^ 0xfc);
  uVar7 = _UNK_182782428;
  uVar2 = _UNK_182782420;
  uRam00000001833db710 =
       (uRam00000001833db7f0 ^ uRam00000001833db8e0 ^ 0xc415e8bc50de4993 ^ uRam00000001833db8e0) +
       0xc415e8bc50de4993 ^ 0xca69e258990646dd;
  uRam00000001833db760 =
       (uRam00000001833db760 * 0x7a3cf738885b383 ^ uRam00000001833db710) + uRam00000001833db8e0;
  uRam00000001833db8e8 = uRam00000001833db760 ^ uRam00000001833db710;
  uRam00000001833db8c8 = 0xc415e8bc50de4993;
  uVar4 = (uRam00000001833db898 ^ _UNK_182782420) + uRam00000001833db8a8 + 0xdbfb99df75ddf498;
  uVar8 = (uRam00000001833db8a8 ^ _UNK_182782428) + uRam00000001833db898 + 0xe81a4edc5ede71d6;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833db898 ^ _UNK_182782420;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833db8a8 ^ _UNK_182782428;
  uRam00000001833db8f8 =
       func_0x00018edd2dc0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001833db898 + 0xe81a4edc5ede71d6) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam00000001833db8a8 + 0xdbfb99df75ddf498));
  uVar4 = (uRam00000001833db8f8 ^ 0xbb194486b5fec4f8) & 0xfffffffffffffff8;
  uRam00000001833db790 = (uRam00000001833db790 ^ uVar4) + 0x33e1d703af21a66b ^ 0xc3f25592e3ab1a56;
  uRam00000001833db710 = (uRam00000001833db710 * -0xb5c3c4f0294e065 ^ uRam00000001833db790) + uVar4;
  uRam00000001833db7c0 = uRam00000001833db710 ^ uRam00000001833db790;
  uRam00000001833db720 = 0x33e1d703af21a66b;
  uVar4 = (uRam00000001833db808 ^ uVar2) + uRam00000001833db848 + 0xdbfb99df75ddf498;
  uVar8 = (uRam00000001833db848 ^ uVar7) + uRam00000001833db808 + 0xe81a4edc5ede71d6;
  uVar2 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001833db808 ^ uVar2;
  uVar7 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833db848 ^ uVar7;
  uRam00000001833db8c0 =
       func_0x00018edd2dc0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833db808 + 0xe81a4edc5ede71d6) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001833db848 + 0xdbfb99df75ddf498));
  uRam00000001833db818 =
       (uRam00000001833db818 ^ uRam00000001833db8c0 & 0xdbfb99dff1ffd7bd) + 0xc81a08dc50de5194 ^
       0xcc7c417c82b006a0;
  uRam00000001833db838 =
       (uRam00000001833db838 * -0x139ed2556ff6ab33 ^ uRam00000001833db818) +
       (uRam00000001833db8c0 & 0xdbfb99dff1ffd7bd);
  uRam00000001833db8a8 = uRam00000001833db838 ^ uRam00000001833db818;
  uRam00000001833db7c8 = 0xc81a08dc50de5194;
  uVar2 = (uRam00000001833db838 ^ _UNK_182782430) + uRam00000001833db738 + 0x33e1d7032b03854e;
  uVar7 = (uRam00000001833db738 ^ _UNK_182782438) + uRam00000001833db838 + 0x903411b8a1bca328;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db838 ^ _UNK_182782430;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833db738 ^ _UNK_182782438;
  uVar2 = func_0x00018edd2dc0((uVar7 << 0x1d | uVar7 >> 0x23) -
                              (uRam00000001833db838 + 0x903411b8a1bca328) ^
                              (uVar2 << 0x1d | uVar2 >> 0x23) -
                              (uRam00000001833db738 + 0x33e1d7032b03854e));
  uVar2 = (uVar2 ^ 0x39026f5d4bcc21b8) & 0x7fffffffffffffff;
  uRam00000001833db8a8 = uRam00000001833db730 ^ uVar2 ^ 0xc415e8bc50de4993;
  uRam00000001833db8d0 = (uRam00000001833db8d0 ^ uVar2) + 0xc415e8bc50de4993 ^ 0xff5fb8245d0772aa;
  uRam00000001833db878 = (uRam00000001833db878 * -0x75ddd70556905423 ^ uRam00000001833db8d0) + uVar2
  ;
  uRam00000001833db8e0 = uRam00000001833db878 ^ uRam00000001833db8d0;
  uRam00000001833db830 = 0xc415e8bc50de4993;
  uRam00000001833db888 = func_0x00018edd2dc0(uRam00000001833db840 + 0x2300841d001dff ^ 0x27);
  uRam00000001833db868 = uRam00000001833db888 * -0x6ce7a4efb1c05089;
  uVar2 = uRam00000001833db868 >> 1 | uRam00000001833db868;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uRam00000001833db868 =
       (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
       uRam00000001833db868;
  uRam00000001833db720 = uRam00000001833db720 ^ uRam00000001833db868 ^ 0x661af0c6dac1a8e7;
  uRam00000001833db7c0 =
       (uRam00000001833db7c0 * 0x10ab10a721702f45 ^ uRam00000001833db720) + uRam00000001833db868;
  uRam00000001833db708 = uRam00000001833db7c0 ^ uRam00000001833db720;
  uRam00000001833db778 = 0;
  uRam00000001833db7e0 = func_0x00018edd2dc0(uRam00000001833db858 ^ 0x1ff50475a09de2a1);
  uRam00000001833db798 =
       (uRam00000001833db798 ^ ~uRam00000001833db7e0 & 0xdbfb99dff1ffd7bd) + 0x240466200e002842 ^
       0xa0d945a424915fd3;
  uRam00000001833db7a8 =
       (uRam00000001833db7a8 * -0x297cc7f3cbb01dab ^ uRam00000001833db798) +
       (~uRam00000001833db7e0 & 0xdbfb99dff1ffd7bd);
  uRam00000001833db8b8 = uRam00000001833db7a8 ^ uRam00000001833db798;
  uRam00000001833db708 = 0x240466200e002842;
  uRam00000001833db878 = func_0x00018edd2dc0(uRam00000001833db888 ^ 0x723c12e7c68cdc26);
  uRam00000001833db848 = uRam00000001833db848 ^ uRam00000001833db878 ^ 0x77d9185f95699338;
  uRam00000001833db7e8 =
       (uRam00000001833db7e8 * 0x500e81b6d63c541b ^ uRam00000001833db848) + uRam00000001833db878;
  uRam00000001833db8f8 = uRam00000001833db7e8 ^ uRam00000001833db848;
  uRam00000001833db748 = 0;
  uVar2 = ((uRam00000001833db880 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001833db880 & 0x84225cda) * 2) * -uRam00000001833db7b8;
  uVar2 = (uVar2 | uRam00000001833db810) + (uVar2 & uRam00000001833db810);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001833db868 =
       func_0x00018edd2dc0((uVar2 | 0x84225cda) + (ulonglong)((uint)uVar2 & 0x84225cda));
  uVar2 = uRam00000001833db868 & 0x7ffffffff8000000;
  uRam00000001833db7e8 = uRam00000001833db728 ^ uVar2 ^ 0x7fff;
  uRam00000001833db760 = (uRam00000001833db760 ^ uVar2) + 0x7fff ^ 0xde3b08eef16e7621;
  uRam00000001833db7d8 = (uRam00000001833db7d8 * 0x32e5c2cb706ae27 ^ uRam00000001833db760) + uVar2;
  uRam00000001833db770 = uRam00000001833db7d8 ^ uRam00000001833db760;
  uRam00000001833db740 = 0x7fff;
  uVar2 = (uRam00000001833db880 ^ _UNK_182782440) + uRam00000001833db7f8 + 0x92e39090745fb639;
  uVar7 = (uRam00000001833db7f8 ^ _UNK_182782448) + uRam00000001833db880 + 0x92e39090f07d951c;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db880 ^ _UNK_182782440;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam00000001833db7f8 ^ _UNK_182782448;
  uRam00000001833db768 =
       func_0x00018edd2dc0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam00000001833db880 + 0x92e39090f07d951c) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) -
                           (uRam00000001833db7f8 + 0x92e39090745fb639));
  uRam00000001833db798 = uRam00000001833db798 ^ uRam00000001833db768 ^ 0x1eb8a557b5ba2636;
  uRam00000001833db848 =
       (uRam00000001833db848 * 0x59d6e11b32fc322b ^ uRam00000001833db798) + uRam00000001833db768;
  uRam00000001833db8b0 = uRam00000001833db848 ^ uRam00000001833db798;
  uRam00000001833db8f8 = 0;
  uVar2 = (uRam00000001833db770 ^ 0x84225cda) + uRam00000001833db8e8 + 0x84225cda;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db770 ^ 0x84225cda;
  uVar7 = ((uRam00000001833db8e8 + uRam00000001833db770) * 0x2000 |
          uRam00000001833db8e8 + uRam00000001833db770 >> 0x33) ^ uRam00000001833db8e8;
  uRam00000001833db7a8 =
       func_0x00018edd2dc0((uVar7 << 0x1d | uVar7 >> 0x23) - uRam00000001833db770 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833db8e8 + 0x84225cda));
  uVar2 = uRam00000001833db7a8 & 0xffffffffffe00000;
  uRam00000001833db858 = uRam00000001833db7e0 ^ uVar2 ^ 0x7fff;
  uRam00000001833db848 = (uRam00000001833db848 ^ uVar2) + 0x7fff ^ 0x520eddf806c2c679;
  uRam00000001833db8e8 = (uRam00000001833db8e8 * -0x3fd58f3dd0ace9fd ^ uRam00000001833db848) + uVar2
  ;
  uRam00000001833db8e0 = uRam00000001833db8e8 ^ uRam00000001833db848;
  param_4 = param_4 & 0x7fff;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = param_4 ^ 0x84222325;
  auVar5._8_4_ = param_3;
  auVar5._12_4_ = 0;
  uRam00000001833db7b0 = 0x7fff;
  auVar6 = pshufb(auVar5 ^ _UNK_182782450,_UNK_1800170c0);
  uVar7 = auVar6._8_8_ + auVar6._0_8_;
  uVar2 = uVar7 + uRam00000001833db748;
  if (auVar6._4_4_ < 0) {
    uVar2 = uRam00000001833db7c0 ^ uVar7;
  }
  uRam00000001833db710 = func_0x00018edd2dc0(SUB161(auVar5 ^ _UNK_182782450,5) ^ uVar2);
  uVar7 = ((ulonglong)param_4 + (ulonglong)param_3) - (ulonglong)((param_3 & param_4) * 2);
  uRam00000001833db808 = (uRam00000001833db808 ^ uRam00000001833db710) + uVar7 ^ 0x20bc5c18cc70cc91;
  uRam00000001833db788 =
       (uRam00000001833db788 * 0x24d69dfe19c9c773 ^ uRam00000001833db808) + uRam00000001833db710;
  uRam00000001833db8e0 = uRam00000001833db788 ^ uRam00000001833db808;
  uVar4 = uVar7 & 0xffffffff;
  uRam00000001833db798 = uVar4;
  uRam00000001833db800 = func_0x00018edd2dc0(uRam00000001833db730 + 0xff40ff731effc9ff);
  uRam00000001833db798 =
       (uRam00000001833db798 ^ uRam00000001833db800 & 0xffffffffc0000000) + 0x7be8f6e7 ^
       0xf3e4da33b54be6d2;
  uRam00000001833db880 =
       (uRam00000001833db880 * -0x78ebfdde4f4e855b ^ uRam00000001833db798) +
       (uRam00000001833db800 & 0xffffffffc0000000);
  uRam00000001833db8b8 = uRam00000001833db880 ^ uRam00000001833db798;
  uRam00000001833db770 = uRam00000001833db7b8 ^ 0x7be8f6e7;
  uRam00000001833db808 = 0x7be8f6e7;
  uRam00000001833db7f8 = func_0x00018edd2dc0(uRam00000001833db778 ^ 0xfff400ab6d00baa2);
  uRam00000001833db700 =
       (uRam00000001833db700 ^ uRam00000001833db7f8) + 0x70e517d6 ^ 0x20b27c301cd03ab7;
  uRam00000001833db810 =
       (uRam00000001833db810 * 0x7db4493994c4e3bf ^ uRam00000001833db700) + uRam00000001833db7f8;
  uRam00000001833db7e8 = uRam00000001833db810 ^ uRam00000001833db700;
  uRam00000001833db748 = 0x70e517d6;
  uVar2 = (uRam00000001833db710 ^ _UNK_182782460) + uRam00000001833db7c8 + 0x84222325;
  uVar8 = (uRam00000001833db7c8 ^ _UNK_182782468) + uRam00000001833db710 + 0x84615004;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db710 ^ _UNK_182782460;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833db7c8 ^ _UNK_182782468;
  uRam00000001833db8c8 =
       func_0x00018edd2dc0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833db710 + 0x84615004) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833db7c8 + 0x84222325));
  uRam00000001833db8a0 = uRam00000001833db8a0 - 0x84615004 ^ 0xdce3654a9eb2877d;
  uRam00000001833db8f8 = uRam00000001833db810 * 0xb8f748ec53df0eb;
  uRam00000001833db810 = uRam00000001833db8f8 ^ uRam00000001833db8a0;
  uRam00000001833db720 = 0x7b9eaffc;
  uRam00000001833db8a0 = func_0x00018edd2dc0(uRam00000001833db740 + 0xffee000080ffc0ff ^ 0x79);
  uRam00000001833db7b8 = uRam00000001833db8d8 ^ uRam00000001833db7a8 ^ 0x8461b1a4;
  uRam00000001833db788 =
       (uRam00000001833db788 ^ uRam00000001833db7a8) + 0x8461b1a4 ^ 0x2da67141d70dc2af;
  uRam00000001833db848 =
       (uRam00000001833db848 * 0x44d5989b0d1ab879 ^ uRam00000001833db788) + uRam00000001833db7a8;
  uRam00000001833db898 = uRam00000001833db848 ^ uRam00000001833db788;
  uRam00000001833db730 = uRam00000001833db828 ^ 0x8461b1a4;
  uRam00000001833db8f8 = 0x8461b1a4;
  uVar2 = (uRam00000001833db7f8 ^ _UNK_182782470) + uRam00000001833db8a8 + 0x439281;
  uVar8 = (uRam00000001833db8a8 ^ _UNK_182782478) + uRam00000001833db7f8 + 0x7b9eaffc;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db7f8 ^ _UNK_182782470;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833db8a8 ^ _UNK_182782478;
  uRam00000001833db738 =
       func_0x00018edd2dc0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833db7f8 + 0x7b9eaffc) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833db8a8 + 0x439281));
  uVar2 = uRam00000001833db738 & 0x7fffffffffffffff;
  uRam00000001833db868 = uRam00000001833db850 ^ uVar2 ^ 0x1000061a0;
  uRam00000001833db830 = (uRam00000001833db830 ^ uVar2) + 0x1000061a0 ^ 0xf89aa7fc26519248;
  uRam00000001833db8d0 = (uRam00000001833db8d0 * 0x6a7327f1a21ccde3 ^ uRam00000001833db830) + uVar2;
  uRam00000001833db8c0 = uRam00000001833db8d0 ^ uRam00000001833db830;
  uRam00000001833db848 = 0x61a0;
  uVar2 = (uRam00000001833db8c8 ^ _UNK_182782480) + uRam00000001833db888 + 0x37d9d385;
  uVar8 = (uRam00000001833db888 ^ _UNK_182782488) + uRam00000001833db8c8 + 0x4c047100;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db8c8 ^ _UNK_182782480;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833db888 ^ _UNK_182782488;
  uRam00000001833db788 =
       func_0x00018edd2dc0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833db8c8 + 0x4c047100) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833db888 + 0x37d9d385));
  uVar2 = uRam00000001833db788 ^ 0x4c047100;
  uRam00000001833db738 = uRam00000001833db8b8 ^ uVar2 ^ 0x1000061a0;
  uRam00000001833db8a0 = (uRam00000001833db8a0 ^ uVar2) + 0x1000061a0 ^ 0x50650f392f3e7313;
  uRam00000001833db7e8 = (uRam00000001833db7e8 * -0x6ead30b9dd05cab3 ^ uRam00000001833db8a0) + uVar2
  ;
  uRam00000001833db8c0 = uRam00000001833db7e8 ^ uRam00000001833db8a0;
  uRam00000001833db7c0 = 0x61a0;
  uVar2 = (~uRam00000001833db710 + 0xed15d199) *
          ((uRam00000001833db878 ^ 0x84222325) +
          (ulonglong)((uint)uRam00000001833db878 & 0x84222325) * 2);
  uVar2 = (uVar2 | uRam00000001833db8f8) + (uVar2 & uRam00000001833db8f8);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001833db710 =
       func_0x00018edd2dc0((uVar2 | 0x6937f2bd) + (ulonglong)((uint)uVar2 & 0x6937f2bd));
  uRam00000001833db798 =
       (uRam00000001833db798 ^ uRam00000001833db710 ^ 0xed15d198) - 0xed15d198 ^ 0x39e573cea54d5e60;
  uRam00000001833db840 =
       (uRam00000001833db840 * 0x652705781be4b46b ^ uRam00000001833db798) +
       (uRam00000001833db710 ^ 0xed15d198);
  uRam00000001833db768 = uRam00000001833db840 ^ uRam00000001833db798;
  uRam00000001833db718 = 0x12ea2e68;
  uRam00000001833db878 = func_0x00018edd2dc0(uRam00000001833db838 ^ 0xff730028faffeebe);
  uRam00000001833db8e0 = uRam00000001833db778 ^ uRam00000001833db878 ^ 0xed163338;
  uRam00000001833db848 =
       (uRam00000001833db848 ^ uRam00000001833db878) + 0xed163338 ^ 0x56ecec77d0913cdc;
  uRam00000001833db738 =
       (uRam00000001833db738 * -0x5df50e07468a8cb1 ^ uRam00000001833db848) + uRam00000001833db878;
  uRam00000001833db8c0 = uRam00000001833db738 ^ uRam00000001833db848;
  uRam00000001833db810 = 0xed163338;
  uVar2 = (~uRam00000001833db7f8 + 0x12ea2e69) *
          ((uRam00000001833db830 ^ 0x6934101d) +
          (ulonglong)((uint)uRam00000001833db830 & 0x6934101d) * 2);
  uVar2 = (uVar2 | uRam00000001833db8c0) + (uVar2 & uRam00000001833db8c0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001833db888 =
       func_0x00018edd2dc0((uVar2 | 0x7bde3e75) + (ulonglong)((uint)uVar2 & 0x7bde3e75));
  uVar2 = (uRam00000001833db888 << 0x17 | uRam00000001833db888 >> 0x29) * 0x569e927b33f45dad;
  uRam00000001833db850 = uRam00000001833db8d0 ^ uVar2 ^ 0x1000061a0;
  uRam00000001833db8e0 = (uRam00000001833db8e0 ^ uVar2) + 0x1000061a0 ^ 0xac40ff2b4600bf7d;
  uRam00000001833db838 = (uRam00000001833db838 * -0x16ea9f6d9e7d58d5 ^ uRam00000001833db8e0) + uVar2
  ;
  uRam00000001833db898 = 0x61a0;
  uRam00000001833db750 = func_0x00018edd2dc0(uRam00000001833db7f0 + 0x41ff80f3ffe0ff ^ 0xf1);
  uVar2 = (ulonglong)(((uint)uRam00000001833db750 ^ 0x1068d0e5) & 0x7be8f6e7);
  uRam00000001833db898 = uRam00000001833db8c8 ^ uVar2 ^ 0xecce0ebd;
  uRam00000001833db7f0 = (uRam00000001833db7f0 ^ uVar2) + 0xecce0ebd ^ 0x4e2a632b3e04bff6;
  uRam00000001833db780 = (uRam00000001833db780 * -0x12fbc8a4849a9467 ^ uRam00000001833db7f0) + uVar2
  ;
  uRam00000001833db7e0 = uRam00000001833db780 ^ uRam00000001833db7f0;
  uRam00000001833db700 = 0xecce0ebd;
  uVar2 = (~uRam00000001833db780 + 0x70e517d7) *
          ((uRam00000001833db820 ^ 0xffcad5c2) +
          (ulonglong)((uint)uRam00000001833db820 & 0xffcad5c2) * 2);
  uVar2 = (uVar2 | uRam00000001833db8e0) + (uVar2 & uRam00000001833db8e0);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001833db8f8 =
       func_0x00018edd2dc0((uVar2 | 0x8f2fc214) + (ulonglong)((uint)uVar2 & 0x8f2fc214));
  uVar2 = uRam00000001833db8f8 << 0x32 | uRam00000001833db8f8 >> 0xe;
  uRam00000001833db8d8 = (uRam00000001833db8d8 ^ uVar2) + 0xb0de131 ^ 0x89cf1d4a323142ad;
  uRam00000001833db7e0 = (uRam00000001833db7e0 * -0x64029486c096cecd ^ uRam00000001833db8d8) + uVar2
  ;
  uRam00000001833db770 = uRam00000001833db7e0 ^ uRam00000001833db8d8;
  uRam00000001833db880 = 0xb0de131;
  uVar2 = (~uRam00000001833db888 + 0xecce0ebe) *
          ((uRam00000001833db848 ^ 0x68ec2d98) +
          (ulonglong)((uint)uRam00000001833db848 & 0x68ec2d98) * 2);
  uVar2 = (uVar2 | uRam00000001833db710) + (uVar2 & uRam00000001833db710);
  uVar2 = uVar2 * 0x2000 ^ uVar2;
  uVar2 = uVar2 >> 7 ^ uVar2;
  uVar2 = uVar2 << 0x11 ^ uVar2;
  uRam00000001833db870 =
       func_0x00018edd2dc0((uVar2 | 0x84222325) + (ulonglong)((uint)uVar2 & 0x84222325));
  uVar2 = uRam00000001833db870 >> 1 | uRam00000001833db870;
  uVar2 = uVar2 >> 2 | uVar2;
  uVar2 = uVar2 >> 4 | uVar2;
  uVar2 = uVar2 >> 8 | uVar2;
  uVar2 = uVar2 >> 0x10 | uVar2;
  uVar2 = uVar2 >> 0x20 | uVar2;
  uVar2 = uVar2 - (uVar2 >> 1 & 0x5555555555555555);
  uVar2 = (uVar2 & 0x3333333333333333) + (uVar2 >> 2 & 0x3333333333333333);
  uRam00000001833db7c8 =
       (0x40 - (((uVar2 >> 4) + uVar2 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
       uRam00000001833db870;
  uRam00000001833db7d0 = uRam00000001833db7d0 ^ uRam00000001833db7c8 ^ 0x98bd168edd750c5e;
  uRam00000001833db7f8 =
       (uRam00000001833db7f8 * 0x34a51d0778bd791d ^ uRam00000001833db7d0) + uRam00000001833db7c8;
  uRam00000001833db878 = uRam00000001833db7f8 ^ uRam00000001833db7d0;
  uRam00000001833db820 = 0;
  uVar2 = (uRam00000001833db798 ^ _UNK_182782490) + uRam00000001833db808 + 0xffcad5c2;
  uVar8 = (uRam00000001833db808 ^ _UNK_182782498) + uRam00000001833db798 + 0xffffffff;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db798 ^ _UNK_182782490;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833db808 ^ _UNK_182782498;
  uRam00000001833db8c8 =
       func_0x00018edd2dc0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833db798 + 0xffffffff) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833db808 + 0xffcad5c2));
  uRam00000001833db820 =
       (uRam00000001833db820 ^ uRam00000001833db830) + 0x84170918 ^ 0x8880c35dd44ee0bf;
  uRam00000001833db800 =
       (uRam00000001833db800 * -0x441f1fe72cb994dd ^ uRam00000001833db820) + uRam00000001833db830;
  uRam00000001833db7a0 = uRam00000001833db800 ^ uRam00000001833db820;
  uRam00000001833db778 = 0x84170918;
  uVar2 = (uRam00000001833db7c0 ^ _UNK_1827824a0) + uRam00000001833db868 + 0xffcad5c2;
  uVar8 = (uRam00000001833db868 ^ _UNK_1827824a8) + uRam00000001833db7c0 + 0x84170918;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db7c0 ^ _UNK_1827824a0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833db868 ^ _UNK_1827824a8;
  uRam00000001833db788 =
       func_0x00018edd2dc0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833db7c0 + 0x84170918) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833db868 + 0xffcad5c2));
  uVar2 = (ulonglong)(((uint)uRam00000001833db788 ^ 0x194044a0) & 0x7be8f6e7);
  uRam00000001833db8d0 = uRam00000001833db8d0 ^ uVar2 ^ 0xd151d2800660d8e1;
  uRam00000001833db888 = (uRam00000001833db888 * 0x372d3d72b049522d ^ uRam00000001833db8d0) + uVar2;
  uRam00000001833db708 = uRam00000001833db888 ^ uRam00000001833db8d0;
  uRam00000001833db7d8 = 0;
  uVar2 = (uRam00000001833db8c0 ^ 0x84224285) + uRam00000001833db860 + 0x84224285;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db8c0 ^ 0x84224285;
  uVar8 = ((uRam00000001833db860 + uRam00000001833db8c0) * 0x2000 |
          uRam00000001833db860 + uRam00000001833db8c0 >> 0x33) ^ uRam00000001833db860;
  uRam00000001833db858 =
       func_0x00018edd2dc0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001833db8c0 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833db860 + 0x84224285));
  uRam00000001833db7c8 = uRam00000001833db7c8 ^ 0x61a0;
  uRam00000001833db718 = uRam00000001833db7a8 ^ uRam00000001833db7c8 ^ 0x61a0;
  uRam00000001833db7f0 = (uRam00000001833db7f0 ^ uRam00000001833db7c8) + 0x61a0 ^ 0xcbc14b98fc86cbe;
  uRam00000001833db738 =
       (uRam00000001833db738 * 0x79c8524684857451 ^ uRam00000001833db7f0) + uRam00000001833db7c8;
  uRam00000001833db8d0 = uRam00000001833db738 ^ uRam00000001833db7f0;
  uRam00000001833db7c8 = 0x61a0;
  uVar2 = (uRam00000001833db8b8 ^ _UNK_1827824b0) + uRam00000001833db758 + 0xffa27580;
  uVar8 = (uRam00000001833db758 ^ _UNK_1827824b8) + uRam00000001833db8b8 + 0x7b8056a5;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db8b8 ^ _UNK_1827824b0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001833db758 ^ _UNK_1827824b8;
  uRam00000001833db868 =
       func_0x00018edd2dc0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833db8b8 + 0x7b8056a5) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833db758 + 0xffa27580));
  uRam00000001833db818 =
       uRam00000001833db818 ^ uRam00000001833db868 & 0xfffffffffffff ^ 0x7d9e4caeb388ce04;
  uRam00000001833db8d0 =
       (uRam00000001833db8d0 * -0x30c4f11ede095ef9 ^ uRam00000001833db818) +
       (uRam00000001833db868 & 0xfffffffffffff);
  uRam00000001833db7d8 = uRam00000001833db8d0 ^ uRam00000001833db818;
  uRam00000001833db828 = 0;
  uVar2 = (uRam00000001833db7b0 ^ 0x84224285) + uRam00000001833db730 + 0x84224285;
  uVar2 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ uRam00000001833db7b0 ^ 0x84224285;
  uVar8 = ((uRam00000001833db730 + uRam00000001833db7b0) * 0x2000 |
          uRam00000001833db730 + uRam00000001833db7b0 >> 0x33) ^ uRam00000001833db730;
  uRam00000001833db790 =
       func_0x00018edd2dc0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001833db7b0 ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - (uRam00000001833db730 + 0x84224285));
  uVar2 = uRam00000001833db790 ^ 0x61a0;
  uRam00000001833db830 = uRam00000001833db7e0 ^ uVar2 ^ 0x61a0;
  uRam00000001833db7d8 = (uRam00000001833db7d8 ^ uVar2) + 0x61a0 ^ 0x92fbdb7030c57b84;
  uRam00000001833db8f8 = (uRam00000001833db8f8 * 0x5be518050dbb0023 ^ uRam00000001833db7d8) + uVar2;
  uRam00000001833db708 = uRam00000001833db8f8 ^ uRam00000001833db7d8;
  uRam00000001833db7a8 = 0x61a0;
  uVar2 = uVar4 ^ 0x84222325 ^ uRam00000001833db8a0;
  lVar3 = (uVar4 ^ 0x84222325) + uRam00000001833db800;
  uVar8 = uVar2 + lVar3;
  uVar9 = (uRam00000001833db800 ^ 0x61a0) + uRam00000001833db8a0 + 0x61a0;
  uVar2 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uVar2;
  uVar8 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001833db800 ^ 0x61a0;
  uRam00000001833db760 =
       func_0x00018edd2dc0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001833db8a0 + 0x61a0) ^
                           (uVar2 << 0x1d | uVar2 >> 0x23) - lVar3);
  uVar2 = (uRam00000001833db760 << 0x14 | uRam00000001833db760 >> 0x2c) ^ 0x61a0;
  lVar3 = uVar4 - ((uint)uVar7 & 0x61a0) * 2;
  uRam00000001833db748 = (uRam00000001833db748 ^ uVar2) + lVar3 + 0x61a0 ^ 0xd559a45c114aef16;
  uRam00000001833db870 = (uRam00000001833db870 * 0x67175cc0d3af15b5 ^ uRam00000001833db748) + uVar2;
  uRam00000001833db8a8 = uRam00000001833db870 ^ uRam00000001833db748;
  uRam00000001833db7f0 = lVar3 + 0x61a0U & 0xffffffff;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x74a5,0x148)
      /* POOL[0x74a5,0x148]: q | kwnpJ | jzoAa | uHZms | ZGPGj | Fp | Ft | sixtwo/bo | ejgBq | UCmRU | jZEcd | Lsixtwo/nf; | sixtwo/nf | ctT | bzz | (Ljava/lang/String;)Lnet/minecraft/class_1792; | bzB | (Lnet/minecraft/class_1792;)Lsixtwo/mG; | jFosN | Fx | lAJLi | Fw | sixtwo/bs | (FFFLjava/lang/String;Ljava/lang/String;Ljava/util/function/Consumer;)V | ceJ | XTYeh | Nufut | Fz | WTtGn | Fy | FC | XLRYu | OXgHV | uTsC */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018edce1e2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182780a78 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/bo; _59e141878ced10e285ef05299aa3d0d3 ()V (handler @ image 18ed82920, runtime 6ffff6992920) =====

void FUN_18ed82920(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ed82a08 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182775840 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/bo; bV (Lsixtwo/lC;)V (handler @ image 18ed602f0, runtime 6ffff69702f0) =====

void FUN_18ed602f0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x74a5,0x148)
      /* POOL[0x74a5,0x148]: q | kwnpJ | jzoAa | uHZms | ZGPGj | Fp | Ft | sixtwo/bo | ejgBq | UCmRU | jZEcd | Lsixtwo/nf; | sixtwo/nf | ctT | bzz | (Ljava/lang/String;)Lnet/minecraft/class_1792; | bzB | (Lnet/minecraft/class_1792;)Lsixtwo/mG; | jFosN | Fx | lAJLi | Fw | sixtwo/bs | (FFFLjava/lang/String;Ljava/lang/String;Ljava/util/function/Consumer;)V | ceJ | XTYeh | Nufut | Fz | WTtGn | Fy | FC | XLRYu | OXgHV | uTsC */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ed603e6 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18276c808 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/bo; dY ()V (handler @ image 18ed5fe60, runtime 6ffff696fe60) =====

void FUN_18ed5fe60(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018ed5fe80 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18276c5e0 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== Lsixtwo/bo; dk (DDLsixtwo/mA;)Z (handler @ image 18ed96f50, runtime 6ffff69a6f50) =====

void FUN_18ed96f50(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x74a5,0x148)
      /* POOL[0x74a5,0x148]: q | kwnpJ | jzoAa | uHZms | ZGPGj | Fp | Ft | sixtwo/bo | ejgBq | UCmRU | jZEcd | Lsixtwo/nf; | sixtwo/nf | ctT | bzz | (Ljava/lang/String;)Lnet/minecraft/class_1792; | bzB | (Lnet/minecraft/class_1792;)Lsixtwo/mG; | jFosN | Fx | lAJLi | Fw | sixtwo/bs | (FFFLjava/lang/String;Ljava/lang/String;Ljava/util/function/Consumer;)V | ceJ | XTYeh | Nufut | Fz | WTtGn | Fy | FC | XLRYu | OXgHV | uTsC */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018ed97017 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182777da0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/bo; dn ()F (handler @ image 18eda37d0, runtime 6ffff69b37d0) =====

void FUN_18eda37d0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x00018eda37f5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18277b550 + (ulonglong)(param_2 == 0) * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xed5fe83 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed5fe83(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18276c638)();
  return;
}


// ----- block @ rva 0xed5feb2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed5feb2(void)

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


// ----- block @ rva 0xed5ff01 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed5ff01(void)

{
  FUN_190dd72e0();
  (*_DAT_18276c6e8)();
  return;
}


// ----- block @ rva 0xed5ff4a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed5ff4a(void)

{
  FUN_190dd9df0();
  (*_DAT_18276c6d8)();
  return;
}


// ----- block @ rva 0xed5ffa1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed5ffa1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetFloatField /*0x378*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18276c748)();
  return;
}


// ----- block @ rva 0xed5ffe2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed5ffe2(void)

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


// ----- block @ rva 0xed5fff8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed5fff8(void)

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


// ----- block @ rva 0xed6006b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed6006b(void)

{
  FUN_190dd9df0();
  (*_DAT_18276c698)();
  return;
}


// ----- block @ rva 0xed600c2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed600c2(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetFloatField /*0x378*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18276c678)();
  return;
}


// ----- block @ rva 0xed601a3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed601a3(void)

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


// ----- block @ rva 0xed60230 -----

void FUN_18ed60230(void)

{
  return;
}


// ----- block @ rva 0xed60238 -----

void FUN_18ed60238(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xed603e9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed603e9(void)

{
  FUN_190ddce00();
  (*_DAT_18276e780)();
  return;
}


// ----- block @ rva 0xed63490 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed63490(void)

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


// ----- block @ rva 0xed6368a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed6368a(void)

{
  FUN_190dd72e0();
  (*_DAT_18276d880)();
  return;
}


// ----- block @ rva 0xed68a24 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed68a24(void)

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


// ----- block @ rva 0xed6bbd6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed6bbd6(void)

{
  undefined4 uStack0000000000000050;
  undefined4 uStack0000000000000058;
  undefined4 uStack0000000000000060;
  
  uStack0000000000000050 = 0x3f800000;
  uStack0000000000000058 = 0x3f800000;
  uStack0000000000000060 = 0x3f800000;
  FUN_190dd72e0();
  (*_DAT_18276f120)();
  return;
}


// ----- block @ rva 0xed6fb16 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed6fb16(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->SetObjectArrayElement /*0x570*/))(in_stack_00000038);
  (*_DAT_18276f710)();
  return;
}


// ----- block @ rva 0xed70d4f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed70d4f(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->ExceptionOccurred /*0x78*/))(in_stack_00000038);
  FUN_190dd72e0(in_stack_00000038,*_DAT_18301ee50 + 0x98,4);
  (*_DAT_18276d2d0)();
  return;
}


// ----- block @ rva 0xed710da -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed710da(void)

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


// ----- block @ rva 0xed7166a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed7166a(void)

{
  (*_DAT_18276fe10)();
  return;
}


// ----- block @ rva 0xed72cb1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed72cb1(void)

{
  longlong *in_stack_00000038;
  
  (**(code **)(in_stack_00000038 + JNI->Throw /*0x68*/))();
  (*_DAT_18276fd70)();
  return;
}


// ----- block @ rva 0xed72cc2 -----

void FUN_18ed72cc2(void)

{
  return;
}


// ----- block @ rva 0xed72d2e -----

void FUN_18ed72d2e(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xed7552e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed7552e(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190ddce00();
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xed756cf -----

void FUN_18ed756cf(void)

{
  return;
}


// ----- block @ rva 0xed76c59 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed76c59(void)

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


// ----- block @ rva 0xed785e7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18ed7a1a7(void)

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


// ----- block @ rva 0xed79173 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed79173(void)

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


// ----- block @ rva 0xed79306 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed79306(void)

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


// ----- block @ rva 0xed79815 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed79815(void)

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


// ----- block @ rva 0xed79a05 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed79a05(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (*in_RAX)(in_stack_00000030);
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


// ----- block @ rva 0xed7e51f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed7e51f(void)

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


// ----- block @ rva 0xed7e8dc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed7e8dc(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190ddfc90();
  cVar1 = (**(code **)(unaff_R14 + JNI->ExceptionCheck /*0x720*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xed7ec4e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed7ec4e(void)

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


// ----- block @ rva 0xed7eca2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed7eca2(void)

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


// ----- block @ rva 0xed7ecfb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed7ecfb(void)

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


// ----- block @ rva 0xed7eea8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed7eea8(void)

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


// ----- block @ rva 0xed7f175 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed7f175(void)

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


// ----- block @ rva 0xed7f1c9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed7f1c9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182774748)();
  return;
}


// ----- block @ rva 0xed7f354 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed7f354(void)

{
  FUN_190ddce00();
  (*_DAT_1827743c8)();
  return;
}


// ----- block @ rva 0xed7f504 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed7f504(void)

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


// ----- block @ rva 0xed7f898 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed7f898(void)

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


// ----- block @ rva 0xed7fae1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed7fae1(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182774718)();
  return;
}


// ----- block @ rva 0xed7fb15 -----

void FUN_18ed7fb15(void)

{
  return;
}


// ----- block @ rva 0xed7fb24 -----

void FUN_18ed7fb24(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xed7fc9c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed7fc9c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_182775058)();
  return;
}


// ----- block @ rva 0xed7ffb1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed7ffb1(void)

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


// ----- block @ rva 0xed808de -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed808de(void)

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


// ----- block @ rva 0xed80f2b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed80f2b(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182774dc8)();
  return;
}


// ----- block @ rva 0xed80f89 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed80f89(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_182774f08)();
  return;
}


// ----- block @ rva 0xed81448 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed81448(void)

{
  (*_DAT_182775758)();
  return;
}


// ----- block @ rva 0xed81891 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed81891(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_1827750d8)();
  return;
}


// ----- block @ rva 0xed81bdb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed81bdb(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182775238)();
  return;
}


// ----- block @ rva 0xed81c36 -----

void FUN_18ed81c36(void)

{
  return;
}


// ----- block @ rva 0xed81daf -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed81daf(void)

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


// ----- block @ rva 0xed82287 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed82287(void)

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


// ----- block @ rva 0xed827da -----

void FUN_18ed827da(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xed82a0b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ed82a61 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ed82a0b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xed84adc -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed84adc(void)

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


// ----- block @ rva 0xed84e77 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ed84e92 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ed84e77(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xed85c3c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ed85c6a */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ed85c3c(void)

{
  longlong *unaff_RSI;
  
  FUN_184117d80();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xed86517 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ed8654d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ed86517(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xed86a9e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018ed86ab9 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18ed86a9e(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x720))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xed879c3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed879c3(void)

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


// ----- block @ rva 0xed8ef99 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed8ef99(void)

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


// ----- block @ rva 0xed9691e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed9691e(void)

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


// ----- block @ rva 0xed96ce4 -----

void FUN_18ed96ce4(void)

{
  return;
}


// ----- block @ rva 0xed9701a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed9701a(void)

{
  FUN_190ddce00();
  (*_DAT_182777df8)();
  return;
}


// ----- block @ rva 0xed9704d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed9704d(void)

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


// ----- block @ rva 0xed9a28f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed9a28f(void)

{
  FUN_190de3220();
  (*_DAT_182778298)();
  return;
}


// ----- block @ rva 0xed9a38a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed9a38a(void)

{
  FUN_190ddfc90();
  (*_DAT_182777e98)();
  return;
}


// ----- block @ rva 0xed9a4b5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed9a4b5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1827780f8)();
  return;
}


// ----- block @ rva 0xed9a54a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed9a54a(void)

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


// ----- block @ rva 0xed9a78d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed9a78d(void)

{
  (*_DAT_1827781f8)();
  return;
}


// ----- block @ rva 0xed9a95b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed9a95b(void)

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


// ----- block @ rva 0xed9ae29 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18ed9ae29(void)

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


// ----- block @ rva 0xed9afdb -----

void FUN_18ed9afdb(void)

{
  return;
}


// ----- block @ rva 0xed9b190 -----

void FUN_18ed9b190(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xed9b351 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed9b351(void)

{
  FUN_190ddce00();
  (*_DAT_182779168)();
  return;
}


// ----- block @ rva 0xed9b3c9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ed9b3c9(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticLongField /*0x4b8*/))();
  (*_DAT_182779978)();
  return;
}


// ----- block @ rva 0xeda1513 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18eda1513(void)

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


// ----- block @ rva 0xeda177f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18eda177f(void)

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


// ----- block @ rva 0xeda220c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18eda220c(void)

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


// ----- block @ rva 0xeda2790 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18eda2790(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewStringUTF /*0x538*/))();
  FUN_184117d50();
  (*_DAT_182779a48)();
  return;
}


// ----- block @ rva 0xeda2e1a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18eda2e1a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_1827796b8)();
  return;
}


// ----- block @ rva 0xeda30cd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18eda30cd(void)

{
  FUN_190ddfc90();
  (*_DAT_182779d98)();
  return;
}


// ----- block @ rva 0xeda3668 -----

void FUN_18eda3668(void)

{
  return;
}


// ----- block @ rva 0xeda36d4 -----

void FUN_18eda36d4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xeda37f8 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18eda37f8(undefined4 param_1)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190dd72e0(param_1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0xeda3834 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18eda3834(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18277b5d8)();
  return;
}


// ----- block @ rva 0xeda3871 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18eda3871(void)

{
  FUN_190dd72e0();
  (*_DAT_18277b5c8)();
  return;
}


// ----- block @ rva 0xeda3899 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18eda3899(void)

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


// ----- block @ rva 0xeda38f0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18eda38f0(void)

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


// ----- block @ rva 0xeda3917 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18eda3917(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetFloatField /*0x378*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_18277b5a8)();
  return;
}


// ----- block @ rva 0xeda3946 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18eda3946(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_18277b598)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0xeda3956 -----

void FUN_18eda3956(void)

{
  return;
}


// ----- block @ rva 0xeda3963 -----

void FUN_18eda3963(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xeda3b26 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018eda3b5d */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18eda3b26(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xeda3b7b -----

void FUN_18eda3b7b(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(longlong **)(unaff_RBP + 0x78) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x00018eda3bb5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_18277bb58 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0xeda6f67 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018eda8447 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18eda6f67(void)

{
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + -0x18) = 0xf;
  (**(code **)(**(longlong **)(unaff_RBP + 0x78) + 0x70))
            (*(longlong **)(unaff_RBP + 0x78),*(undefined8 *)(unaff_RBP + 0x80),unaff_RBP + -0x30);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xeda8008 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018eda8447 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18eda8008(void)

{
  ulonglong uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auVar6 [16];
  uint uVar7;
  undefined1 auVar8 [16];
  uint uVar9;
  uint uVar10;
  uint uVar13;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  undefined1 auVar17 [16];
  uint uVar18;
  
  uVar1 = unaff_RBP - 0x3b;
  auVar12._8_8_ = unaff_RDI;
  auVar12._0_8_ = uVar1 ^ 0x84222325;
  plVar2 = *(longlong **)(unaff_RBP + 0x78);
  auVar6 = pshufb(auVar12 ^ _DAT_18277c6f0,_DAT_1800170c0);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar5 = uVar4 + _DAT_1833da638;
  if (auVar6._4_4_ < 0) {
    uVar5 = _DAT_1833da848 ^ uVar4;
  }
  _DAT_1833da568 = func_0x00018edcbce0(SUB161(auVar12 ^ _DAT_18277c6f0,5) ^ uVar5);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar1;
  uVar13 = (uint)(uVar1 >> 0x20);
  auVar8._8_4_ = (int)uVar1;
  auVar8._0_8_ = uVar1;
  auVar8._12_4_ = uVar13;
  uVar15 = (uint)(unaff_RDI >> 0x20);
  auVar6._8_4_ = (int)unaff_RDI;
  auVar6._0_8_ = unaff_RDI;
  auVar6._12_4_ = uVar15;
  *(ulonglong *)(unaff_RBP + 0x60) = unaff_RDI;
  *(undefined8 *)(unaff_RBP + 0x68) = 0;
  uVar18 = SUB164(auVar8 & auVar6,0);
  uVar16 = SUB168(auVar8 & auVar6,0);
  uVar14 = SUB164(auVar8 | auVar6,0);
  uVar5 = SUB168(auVar8 | auVar6,0);
  uVar7 = SUB164(auVar8 ^ auVar6,0);
  uVar4 = SUB168(auVar8 ^ auVar6,0);
  auVar17._8_4_ = 0xffffffff;
  auVar17._0_8_ = 0xffffffffffffffff;
  auVar17._12_4_ = 0xffffffff;
  uVar9 = SUB164(auVar11 ^ auVar17,0);
  auVar12 = *(undefined1 (*) [16])(unaff_RBP + 0x60) ^ auVar17;
  uVar10 = auVar12._0_4_;
  _DAT_1833da890 =
       (((ulonglong)uVar9 * (ulonglong)_DAT_18277c720 +
         ((SUB168(auVar11 ^ auVar17,0) >> 0x20) * (ulonglong)_DAT_18277c720 +
          (ulonglong)_DAT_18277c700 * (ulonglong)uVar9 << 0x20) +
         (ulonglong)_DAT_18277c740 * (ulonglong)uVar7 +
         ((uVar4 >> 0x20) * (ulonglong)_DAT_18277c740 + (ulonglong)_DAT_18277c730 * (ulonglong)uVar7
         << 0x20) +
         (ulonglong)uVar18 * (ulonglong)_DAT_18277c740 +
         (((uVar1 & 0xffffffff) * (ulonglong)_DAT_18277c710 +
          ((ulonglong)uVar13 * (ulonglong)_DAT_18277c710 +
           (uVar1 & 0xffffffff) * (ulonglong)_DAT_18277c700 << 0x20)) - unaff_RDI) +
         ((uVar16 >> 0x20) * (ulonglong)_DAT_18277c740 +
          (ulonglong)uVar18 * (ulonglong)_DAT_18277c730 << 0x20) +
        (ulonglong)_DAT_18277c750 * (ulonglong)uVar14 +
        ((ulonglong)_DAT_18277c760 * (ulonglong)uVar14 + (uVar5 >> 0x20) * (ulonglong)_DAT_18277c750
        << 0x20)) -
       ((ulonglong)uVar10 * (ulonglong)_DAT_18277c7a0 +
        ((auVar12._0_8_ >> 0x20) * (ulonglong)_DAT_18277c7a0 +
         (ulonglong)_DAT_18277c790 * (ulonglong)uVar10 << 0x20) +
        (ulonglong)uVar7 * (ulonglong)_DAT_18277c7c0 +
        ((uVar4 >> 0x20) * (ulonglong)_DAT_18277c7c0 + (ulonglong)_DAT_18277c7b0 * (ulonglong)uVar7
        << 0x20) +
        (ulonglong)uVar18 * (ulonglong)_DAT_18277c7c0 +
        ((uVar16 >> 0x20) * (ulonglong)_DAT_18277c7c0 +
         (ulonglong)uVar18 * (ulonglong)_DAT_18277c7b0 << 0x20) +
        (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_18277c7a0 +
        ((ulonglong)uVar15 * (ulonglong)_DAT_18277c7a0 +
         (unaff_RDI & 0xffffffff) * (ulonglong)_DAT_18277c790 << 0x20) +
       (ulonglong)uVar14 * (ulonglong)_DAT_18277c7d0 +
       ((ulonglong)_DAT_18277c7e0 * (ulonglong)uVar14 + (uVar5 >> 0x20) * (ulonglong)_DAT_18277c7d0
       << 0x20))) + 0xf87717c9b9a39381;
  _DAT_1833da618 = _DAT_1833da890 ^ _DAT_1833da6d8;
  _DAT_1833da820 = (_DAT_1833da820 ^ _DAT_1833da6d8) + _DAT_1833da890 ^ 0xf56ff4f06bc18281;
  _DAT_1833da6d0 = (_DAT_1833da6d0 * 0x5203c98e9ccf96ed ^ _DAT_1833da820) + _DAT_1833da6d8;
  _DAT_1833da708 = _DAT_1833da6d0 ^ _DAT_1833da820;
  lVar3 = unaff_RBP + -0x30;
  FUN_18414b520(lVar3);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar3 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(plVar2 + JNI->ThrowNew /*0x70*/))(plVar2,*(undefined8 *)(unaff_RBP + 0x38),lVar3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xeda802e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018eda8447 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18eda802e(void)

{
  ulonglong unaff_RBX;
  longlong lVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  undefined1 in_XMM0 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar11;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar12;
  uint uVar13;
  undefined1 unaff_XMM7 [16];
  ulonglong uVar14;
  undefined1 auVar15 [16];
  uint uVar16;
  
  auVar5 = pshufb(in_XMM0,_DAT_1800170c0);
  uVar2 = auVar5._8_8_ + auVar5._0_8_;
  uVar3 = uVar2 + _DAT_1833da638;
  if (auVar5._4_4_ < 0) {
    uVar3 = _DAT_1833da848 ^ uVar2;
  }
  _DAT_1833da568 = func_0x00018edcbce0(in_XMM0[5] ^ uVar3);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = unaff_RBX;
  uVar11 = (uint)(unaff_RBX >> 0x20);
  auVar10._8_4_ = (int)unaff_RBX;
  auVar10._0_8_ = unaff_RBX;
  auVar10._12_4_ = uVar11;
  uVar12 = unaff_XMM7._0_4_;
  auVar5._0_8_ = unaff_XMM7._0_8_;
  auVar5._8_4_ = uVar12;
  auVar5._12_4_ = unaff_XMM7._4_4_;
  *(undefined1 (*) [16])(unaff_RBP + 0x60) = unaff_XMM7;
  uVar16 = SUB164(auVar10 & auVar5,0);
  uVar14 = SUB168(auVar10 & auVar5,0);
  uVar13 = SUB164(auVar10 | auVar5,0);
  uVar3 = SUB168(auVar10 | auVar5,0);
  uVar6 = SUB164(auVar10 ^ auVar5,0);
  uVar2 = SUB168(auVar10 ^ auVar5,0);
  auVar15._8_4_ = 0xffffffff;
  auVar15._0_8_ = 0xffffffffffffffff;
  auVar15._12_4_ = 0xffffffff;
  uVar7 = SUB164(auVar9 ^ auVar15,0);
  auVar10 = *(undefined1 (*) [16])(unaff_RBP + 0x60) ^ auVar15;
  uVar8 = auVar10._0_4_;
  _DAT_1833da890 =
       (((ulonglong)uVar7 * (ulonglong)_DAT_18277c720 +
         ((SUB168(auVar9 ^ auVar15,0) >> 0x20) * (ulonglong)_DAT_18277c720 +
          (ulonglong)_DAT_18277c700 * (ulonglong)uVar7 << 0x20) +
         (ulonglong)_DAT_18277c740 * (ulonglong)uVar6 +
         ((uVar2 >> 0x20) * (ulonglong)_DAT_18277c740 + (ulonglong)_DAT_18277c730 * (ulonglong)uVar6
         << 0x20) +
         (ulonglong)uVar16 * (ulonglong)_DAT_18277c740 +
         (((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_18277c710 +
          ((ulonglong)uVar11 * (ulonglong)_DAT_18277c710 +
           (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_18277c700 << 0x20)) - auVar5._0_8_) +
         ((uVar14 >> 0x20) * (ulonglong)_DAT_18277c740 +
          (ulonglong)uVar16 * (ulonglong)_DAT_18277c730 << 0x20) +
        (ulonglong)_DAT_18277c750 * (ulonglong)uVar13 +
        ((ulonglong)_DAT_18277c760 * (ulonglong)uVar13 + (uVar3 >> 0x20) * (ulonglong)_DAT_18277c750
        << 0x20)) -
       ((ulonglong)uVar8 * (ulonglong)_DAT_18277c7a0 +
        ((auVar10._0_8_ >> 0x20) * (ulonglong)_DAT_18277c7a0 +
         (ulonglong)_DAT_18277c790 * (ulonglong)uVar8 << 0x20) +
        (ulonglong)uVar6 * (ulonglong)_DAT_18277c7c0 +
        ((uVar2 >> 0x20) * (ulonglong)_DAT_18277c7c0 + (ulonglong)_DAT_18277c7b0 * (ulonglong)uVar6
        << 0x20) +
        (ulonglong)uVar16 * (ulonglong)_DAT_18277c7c0 +
        ((uVar14 >> 0x20) * (ulonglong)_DAT_18277c7c0 +
         (ulonglong)uVar16 * (ulonglong)_DAT_18277c7b0 << 0x20) +
        (ulonglong)uVar12 * (ulonglong)_DAT_18277c7a0 +
        ((ulonglong)unaff_XMM7._4_4_ * (ulonglong)_DAT_18277c7a0 +
         (ulonglong)uVar12 * (ulonglong)_DAT_18277c790 << 0x20) +
       (ulonglong)uVar13 * (ulonglong)_DAT_18277c7d0 +
       ((ulonglong)_DAT_18277c7e0 * (ulonglong)uVar13 + (uVar3 >> 0x20) * (ulonglong)_DAT_18277c7d0
       << 0x20))) + 0xf87717c9b9a39381;
  _DAT_1833da618 = _DAT_1833da890 ^ _DAT_1833da6d8;
  _DAT_1833da820 = (_DAT_1833da820 ^ _DAT_1833da6d8) + _DAT_1833da890 ^ 0xf56ff4f06bc18281;
  _DAT_1833da6d0 = (_DAT_1833da6d0 * 0x5203c98e9ccf96ed ^ _DAT_1833da820) + _DAT_1833da6d8;
  _DAT_1833da708 = _DAT_1833da6d0 ^ _DAT_1833da820;
  lVar1 = unaff_RBP + -0x30;
  uVar4 = FUN_18414b520(lVar1);
  if (0xf < *(ulonglong *)(unaff_RBP + -0x18)) {
    lVar1 = *(longlong *)(unaff_RBP + -0x30);
  }
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))(uVar4,*(undefined8 *)(unaff_RBP + 0x38),lVar1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xeda9ba7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18eda9ba7(ulonglong param_1)

{
  byte bVar1;
  ulonglong in_RAX;
  longlong lVar2;
  ulonglong unaff_RBX;
  ulonglong uVar3;
  longlong unaff_RBP;
  ulonglong uVar4;
  ulonglong unaff_R12;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar9;
  undefined1 auVar8 [16];
  uint uVar10;
  undefined1 auVar11 [16];
  uint uVar12;
  undefined1 auVar13 [16];
  
  uVar4 = (~in_RAX + 0x2094da4a00d73e01) *
          ((param_1 ^ 0x2696e8986f4ff7f8) + (param_1 & 0x2696e8986f4ff7f8) * 2);
  uVar4 = (uVar4 | _DAT_1833da7c8) + (uVar4 & _DAT_1833da7c8);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833da8a8 = func_0x00018edcbce0((uVar4 | 0x60232d26f98c9f8) + (uVar4 & 0x60232d26f98c9f8));
  uVar4 = _DAT_1833da8a8 >> 1 | _DAT_1833da8a8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x10 ^
          _DAT_1833da8a8;
  _DAT_1833da538 = (_DAT_1833da538 ^ uVar4) + 0x2696fadaebfffedd ^ 0xc011830dc13d924b;
  _DAT_1833da660 = (_DAT_1833da660 * -0x753b78a322f2f05f ^ _DAT_1833da538) + uVar4;
  _DAT_1833da5a0 = _DAT_1833da660 ^ _DAT_1833da538;
  _DAT_1833da530 = 0x2696fadaebfffedd;
  uVar4 = ((_DAT_1833da768 ^ 0x645afbd36876f33d) + (_DAT_1833da768 & 0x645afbd36876f33d) * 2) *
          -0x440d83cab9bd83d7;
  uVar4 = (uVar4 | _DAT_1833da690) + (uVar4 & _DAT_1833da690);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833da610 = func_0x00018edcbce0((uVar4 | 0x86d38cc35a34883b) + (uVar4 & 0x86d38cc35a34883b));
  uVar4 = (_DAT_1833da610 ^ 0xe000000032427b06) << 0x1e |
          (_DAT_1833da610 ^ 0xe000000032427b06) >> 0x22 & 0xfffffffffe000000;
  _DAT_1833da678 = (_DAT_1833da678 ^ uVar4) + 0x86d38cc3de16ab1e ^ 0x48308dd8c29fff59;
  _DAT_1833da838 = (_DAT_1833da838 * -0x2bb47466a80ead99 ^ _DAT_1833da678) + uVar4;
  _DAT_1833da510 = _DAT_1833da838 ^ _DAT_1833da678;
  _DAT_1833da6d8 = 0x86d38cc3de16ab1e;
  _DAT_1833da6d0 = func_0x00018edcbce0(_DAT_1833da5f0 + 0x66925035a9d59ee7U ^ 0x85);
  _DAT_1833da7b0 = _DAT_1833da8b8 * 0x358d34d295bb87d3;
  _DAT_1833da698 = _DAT_1833da698 + 0x978fd506b07a3231 ^ 0xdd1970ac551308dc;
  _DAT_1833da8b8 = _DAT_1833da7b0 ^ _DAT_1833da698;
  _DAT_1833da880 = 0x978fd506b07a3231;
  _DAT_1833da8e0 = func_0x00018edcbce0(_DAT_1833da5b8 ^ 0x51b4152452bebdcb);
  uVar4 = _DAT_1833da8e0 >> 1 | _DAT_1833da8e0;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_1833da6f8 =
       (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38)) * 2 ^
       _DAT_1833da8e0;
  uVar4 = _DAT_1833da6f8 >> 1 | _DAT_1833da6f8;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  _DAT_1833da6f8 =
       (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38)) * 4 ^
       _DAT_1833da6f8;
  _DAT_1833da518 = (_DAT_1833da518 ^ _DAT_1833da6f8) - 8 ^ 0xb8c16e3c1c323856;
  _DAT_1833da6f8 =
       ((_DAT_1833da898 ^ _DAT_1833da6f8 ^ 0xfffffffffffffff8) * -0x285d3ba06652c301 ^
       _DAT_1833da518) + _DAT_1833da6f8;
  _DAT_1833da658 = _DAT_1833da6f8 ^ _DAT_1833da518;
  _DAT_1833da778 = -8;
  uVar4 = (_DAT_1833da5a8 ^ _DAT_18277c960) + _DAT_1833da5a8 + 0x84222325;
  uVar6 = (_DAT_1833da5a8 ^ _UNK_18277c968) + _DAT_1833da5a8 + 0xe0266cf36e2c5bc0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da5a8 ^ _DAT_18277c960;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da5a8 ^ _UNK_18277c968;
  _DAT_1833da790 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da5a8 + 0xe0266cf36e2c5bc0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da5a8 + 0x84222325));
  uVar4 = (_DAT_1833da790 ^ 0xe0266cf36e2c5bc0) & 0x7fffffffffffffff;
  _DAT_1833da788 = (_DAT_1833da788 ^ uVar4) + 0x1fd9930c91d3a440 ^ 0xadb9f8fc158263cf;
  _DAT_1833da848 = (_DAT_1833da848 * 0x67fb930cccf88109 ^ _DAT_1833da788) + uVar4;
  _DAT_1833da510 = _DAT_1833da848 ^ _DAT_1833da788;
  _DAT_1833da7b8 = _DAT_1833da628 ^ 0x1fd9930c91d3a440;
  _DAT_1833da718 = 0x1fd9930c91d3a440;
  _DAT_1833da858 = func_0x00018edcbce0(_DAT_1833da6b8 + 0xf478c6f31b91ceee ^ 0xfe);
  uVar4 = _DAT_1833da858 >> 1 | _DAT_1833da858;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ~((0x40 - (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38)) * 2 ^
           _DAT_1833da858) & 0xfffffffffffffff8;
  _DAT_1833da7e0 = _DAT_1833da7a8 ^ uVar4 ^ 0xe0266cf36e2c5bb8;
  _DAT_1833da6a8 = (_DAT_1833da6a8 ^ uVar4) + 0xe0266cf36e2c5bb8 ^ 0x44cfda2772cb4adc;
  _DAT_1833da8c0 = (_DAT_1833da8c0 * 0x41213799d5ae8f95 ^ _DAT_1833da6a8) + uVar4;
  _DAT_1833da8a0 = _DAT_1833da8c0 ^ _DAT_1833da6a8;
  _DAT_1833da7b8 = -0x1fd9930c91d3a448;
  uVar4 = (~_DAT_1833da6b8 + 0x1fd9930c91d3a441) *
          ((_DAT_1833da6c8 ^ 0xe0266cf3ea0e789d) + (_DAT_1833da6c8 & 0x60266cf3ea0e789d) * 2);
  uVar4 = (uVar4 | _DAT_1833da898) + (uVar4 & _DAT_1833da898);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833da820 = func_0x00018edcbce0((uVar4 | 0xffffffff7bdddcdd) + (uVar4 & 0xffffffff7bdddcdd));
  uVar4 = (_DAT_1833da820 ^ 0x736e2c5bb8) & 0x7fffffffff;
  _DAT_1833da760 = _DAT_1833da6a0 ^ uVar4 ^ 0xfffffffffffffff8;
  _DAT_1833da750 = (_DAT_1833da750 ^ uVar4) - 8 ^ 0x4906ddf7ebe74b25;
  _DAT_1833da878 = (_DAT_1833da878 * 0x6ec784fef9ec3391 ^ _DAT_1833da750) + uVar4;
  _DAT_1833da720 = _DAT_1833da878 ^ _DAT_1833da750;
  _DAT_1833da6e8 = 0xfffffffffffffff8;
  uVar4 = (_DAT_18277c970 ^ 0xfffffffffffffff8) + _DAT_1833da5e8 + 0x84222325;
  uVar6 = (_DAT_1833da5e8 ^ _UNK_18277c978) + 0xf013e185a467c648;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18277c970 ^ 0xfffffffffffffff8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da5e8 ^ _UNK_18277c978;
  _DAT_1833da780 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) + 0xfec1e7a5b9839b8 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da5e8 + 0x84222325));
  uVar4 = _DAT_1833da780 << 0x3e | _DAT_1833da780 >> 2;
  _DAT_1833da800 = (_DAT_1833da800 ^ uVar4) + 0xfec1e7a5b9839b0 ^ 0x9ab26f5ebc3988e7;
  _DAT_1833da5b8 = (_DAT_1833da5b8 * 0x2c78cfc1030be985 ^ _DAT_1833da800) + uVar4;
  _DAT_1833da7e8 = _DAT_1833da5b8 ^ _DAT_1833da800;
  _DAT_1833da6f0 = 0xfec1e7a5b9839b0;
  uVar4 = (_DAT_1833da5b8 ^ _DAT_18277c980) + (_DAT_1833da7d0 - 0x84222323);
  uVar6 = (_DAT_1833da7d0 ^ _UNK_18277c988) + _DAT_1833da5b8 + 0xf013e185a467c650;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da5b8 ^ _DAT_18277c980;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da7d0 ^ _UNK_18277c988;
  _DAT_1833da850 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da5b8 + 0xf013e185a467c650) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da7d0 - 0x84222323));
  uVar4 = _DAT_1833da850 & 0xffffffffff000000;
  _DAT_1833da728 = _DAT_1833da858 ^ uVar4 ^ 0xf013e185a467c648;
  _DAT_1833da760 = (_DAT_1833da760 ^ uVar4) + 0xf013e185a467c648 ^ 0xd95f1aa35294a4c1;
  _DAT_1833da628 = (_DAT_1833da628 * 0x3a7c219b2d2fdf19 ^ _DAT_1833da760) + uVar4;
  _DAT_1833da538 = _DAT_1833da628 ^ _DAT_1833da760;
  _DAT_1833da5e0 = 0xf013e185a467c648;
  uVar4 = func_0x00018edcbce0(_DAT_1833da778 + 0x1689c3b01a2db45f ^ 0x5b);
  uVar6 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar6 >> 4) + uVar6 & unaff_R12) * 0x101010101010101 >> 0x38);
  uVar4 = (uint)bVar1 + (uint)bVar1 ^ uVar4;
  _DAT_1833da6b8 = _DAT_1833da618 ^ uVar4 ^ 0xad6a879eca16a9fb;
  _DAT_1833da8f8 = (_DAT_1833da890 ^ uVar4) + 0xad6a879eca16a9fb ^ 0xcde208040bdbd9d8;
  _DAT_1833da710 = (_DAT_1833da710 * -0x44da2da08b2d026f ^ _DAT_1833da8f8) + uVar4;
  _DAT_1833da8f8 = _DAT_1833da710 ^ _DAT_1833da8f8;
  _DAT_1833da890 = 0xad6a879eca16a9fb;
  uVar4 = (_DAT_1833da7e0 ^ _DAT_18277c990) + _DAT_1833da590 + 0xa0457619b1cb76e6;
  uVar6 = (_DAT_1833da590 ^ _UNK_18277c998) + _DAT_1833da7e0 + 0xd251185942d5438;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da7e0 ^ _DAT_18277c990;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da590 ^ _UNK_18277c998;
  _DAT_1833da870 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da7e0 + 0xd251185942d5438) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da590 + 0xa0457619b1cb76e6));
  uVar4 = _DAT_1833da870 ^ 0xad65779db5ed55fb;
  _DAT_1833da688 = _DAT_1833da538 ^ uVar4 ^ 0xad6a879eca16a9fb;
  _DAT_1833da718 = (_DAT_1833da718 ^ uVar4) + 0xad6a879eca16a9fb ^ 0x16df7c1530db7894;
  _DAT_1833da8b0 = (_DAT_1833da8b0 * 0x1b5f65165446abb3 ^ _DAT_1833da718) + uVar4;
  _DAT_1833da510 = _DAT_1833da8b0 ^ _DAT_1833da718;
  _DAT_1833da530 = 0xad6a879eca16a9fb;
  uVar4 = (~_DAT_1833da7e8 + 0xad6a879eca16a9fc) *
          ((_DAT_1833da6a0 ^ 0xad6a879e4e348ade) + (_DAT_1833da6a0 & 0x2d6a879e4e348ade) * 2);
  uVar4 = (uVar4 | _DAT_1833da758) + (uVar4 & _DAT_1833da758);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833da660 = func_0x00018edcbce0((uVar4 | 0x84222325) + (ulonglong)((uint)uVar4 & 0x84222325))
  ;
  uVar4 = _DAT_1833da660 ^ 0xfca45215c4015c19;
  _DAT_1833da828 =
       (uVar4 >> 1 | (ulonglong)((uVar4 & 1) != 0) << 0x3f) >> 0x21 | (uVar4 >> 1) << 0x1f;
  _DAT_1833da5e8 = _DAT_1833da5e8 ^ _DAT_1833da828 ^ 0x82187f9c528c085b;
  _DAT_1833da580 = (_DAT_1833da580 * -0x319bb3f47688911b ^ _DAT_1833da5e8) + _DAT_1833da828;
  _DAT_1833da5c8 = _DAT_1833da580 ^ _DAT_1833da5e8;
  _DAT_1833da698 = 0;
  uVar4 = (_DAT_1833da550 ^ 0xffffffff7bdddcdd) + (_DAT_1833da720 - 0x84222323);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da550 ^ 0xffffffff7bdddcdd;
  uVar6 = ((_DAT_1833da720 + _DAT_1833da550) * 0x2000 | _DAT_1833da720 + _DAT_1833da550 >> 0x33) ^
          _DAT_1833da720;
  _DAT_1833da5b8 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_1833da550 ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da720 - 0x84222323));
  uVar4 = _DAT_1833da5b8 & 0x7fffffffffffffff;
  _DAT_1833da6b0 = _DAT_1833da538 ^ uVar4 ^ 0xfffffffffffffff8;
  _DAT_1833da618 = (_DAT_1833da618 ^ uVar4) - 8 ^ 0x56c648a35867379a;
  _DAT_1833da660 = (_DAT_1833da660 * -0x14773780e8256eb9 ^ _DAT_1833da618) + uVar4;
  _DAT_1833da828 = _DAT_1833da660 ^ _DAT_1833da618;
  _DAT_1833da5d0 = 0xfffffffffffffff8;
  _DAT_1833da6b8 = func_0x00018edcbce0(_DAT_1833da828 ^ 0xe31dd98ff8fd1db1);
  uVar6 = _DAT_1833da6b8 ^ 0xd969052514000123;
  uVar4 = uVar6 >> 1 | uVar6;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x80 ^ uVar6;
  _DAT_1833da6f0 = (_DAT_1833da6f0 ^ uVar6) + 0xd969052514000122 ^ 0xddceb3e12ec2238;
  _DAT_1833da808 = (_DAT_1833da808 * 0x1979f20b9410f15d ^ _DAT_1833da6f0) + uVar6;
  _DAT_1833da6f8 = _DAT_1833da808 ^ _DAT_1833da6f0;
  _DAT_1833da8a8 = 0xd969052514000122;
  uVar4 = (_DAT_1833da630 ^ _DAT_18277c9a0) + _DAT_1833da800 + 0x2696fada6fddddf8;
  uVar6 = (_DAT_1833da800 ^ _UNK_18277c9a8) + _DAT_1833da630 + 0xd969052514000122;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da630 ^ _DAT_18277c9a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da800 ^ _UNK_18277c9a8;
  _DAT_1833da760 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da630 + 0xd969052514000122) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da800 + 0x2696fada6fddddf8));
  uVar4 = _DAT_1833da760 << 0x23 | _DAT_1833da760 >> 0x1d & 0xffffffffff000000;
  _DAT_1833da730 = _DAT_1833da730 ^ uVar4 ^ 0x905cf51cbe8a9e44;
  _DAT_1833da7e8 = (_DAT_1833da7e8 * 0x26cf37d1c5661455 ^ _DAT_1833da730) + uVar4;
  _DAT_1833da518 = _DAT_1833da7e8 ^ _DAT_1833da730;
  _DAT_1833da7a0 = 0;
  uVar4 = ((_DAT_1833da538 ^ 0xffffffff7bdddcdd) + (_DAT_1833da538 & 0x7fffffff7bdddcdd) * 2) *
          -_DAT_1833da538;
  uVar4 = (uVar4 | _DAT_1833da708) + (uVar4 & _DAT_1833da708);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833da570 = func_0x00018edcbce0((uVar4 | 0xffffffff7bdddcdd) + (uVar4 & 0xffffffff7bdddcdd));
  uVar6 = (_DAT_1833da570 ^ 0xfffffffffffffff8) & 0x7fffffffffffffff;
  uVar4 = ((_DAT_1833da570 ^ 0xfffffffffffffff8) & 0x7fffffffffffffff) >> 1 | uVar6;
  uVar4 = uVar4 >> 2 | uVar4;
  uVar4 = uVar4 >> 4 | uVar4;
  uVar4 = uVar4 >> 8 | uVar4;
  uVar4 = uVar4 >> 0x10 | uVar4;
  uVar4 = uVar4 >> 0x20 | uVar4;
  uVar4 = uVar4 - (uVar4 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38)) * 0x80 ^ uVar6;
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38) << 3 ^ uVar6;
  _DAT_1833da7a0 = _DAT_1833da700 ^ uVar6 ^ 0xfffffffffffffff8;
  _DAT_1833da728 = (_DAT_1833da728 ^ uVar6) - 8 ^ 0x5f2bd3de6a6a0764;
  _DAT_1833da878 = (_DAT_1833da878 * 0x5407d09268b12edb ^ _DAT_1833da728) + uVar6;
  _DAT_1833da6d0 = _DAT_1833da878 ^ _DAT_1833da728;
  _DAT_1833da8e8 = 0xfffffffffffffff8;
  _DAT_1833da6a8 = func_0x00018edcbce0(_DAT_1833da5d8 + 0xffdcff7be4ffddff ^ 0xf3);
  uVar4 = _DAT_1833da6a8 << 0xe | _DAT_1833da6a8 >> 0x32;
  _DAT_1833da6f8 = _DAT_1833da6f8 ^ uVar4 ^ 0x3552445707f51f47;
  _DAT_1833da898 = (_DAT_1833da898 * -0x6288a58b355f883f ^ _DAT_1833da6f8) + uVar4;
  _DAT_1833da8e8 = _DAT_1833da898 ^ _DAT_1833da6f8;
  _DAT_1833da6d8 = 0;
  uVar4 = (~_DAT_1833da850 - 7) *
          ((unaff_RBX ^ 0x84222325 ^ _DAT_1833da8f0) +
          ((unaff_RBX ^ 0x84222325) & _DAT_1833da8f0) * 2);
  uVar4 = (uVar4 | _DAT_1833da670) + (uVar4 & _DAT_1833da670);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833da758 =
       func_0x00018edcbce0((unaff_RBX ^ 0xffffffff7bdddcdd | uVar4) +
                           (uVar4 & (unaff_RBX ^ 0xffffffff7bdddcdd)));
  uVar4 = _DAT_1833da758 - (_DAT_1833da758 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = unaff_RBX;
  uVar4 = (((uVar4 >> 4) + uVar4 & unaff_R12) * 0x101010101010101 >> 0x38) << 6 ^ _DAT_1833da758 ^
          unaff_RBX;
  uVar9 = (uint)(unaff_RBX >> 0x20);
  auVar13._8_4_ = (uint)unaff_RBX;
  auVar13._0_8_ = unaff_RBX;
  auVar13._12_4_ = uVar9;
  uVar7 = (uint)DAT_1800627b0 | (uint)unaff_RBX;
  auVar11._8_4_ = 0xffffffff;
  auVar11._0_8_ = 0xffffffffffffffff;
  auVar11._12_4_ = 0xffffffff;
  uVar12 = SUB164(auVar13 & _DAT_1800627b0,0);
  uVar6 = SUB168(auVar13 & _DAT_1800627b0,0);
  uVar5 = SUB164(auVar13 ^ _DAT_1800627b0,0);
  uVar3 = SUB168(auVar13 ^ _DAT_1800627b0,0);
  uVar10 = SUB164(auVar11 ^ auVar8,0);
  _DAT_1833da668 =
       (((ulonglong)uVar10 * (ulonglong)_DAT_18277ca10 +
         ((ulonglong)_DAT_18277ca20 * (ulonglong)uVar10 +
          (SUB168(auVar11 ^ auVar8,0) >> 0x20) * (ulonglong)_DAT_18277ca10 << 0x20) +
         (ulonglong)_DAT_18277c9f0 * (ulonglong)uVar5 +
         ((ulonglong)_DAT_18277ca00 * (ulonglong)uVar5 + (uVar3 >> 0x20) * (ulonglong)_DAT_18277c9f0
         << 0x20) +
        (ulonglong)_DAT_18277c9d0 * (ulonglong)uVar12 +
        ((ulonglong)_DAT_18277c9e0 * (ulonglong)uVar12 + (uVar6 >> 0x20) * (ulonglong)_DAT_18277c9d0
        << 0x20) +
        ((ulonglong)_DAT_18277c9c0 * (unaff_RBX & 0xffffffff) +
         (ulonglong)_DAT_18277c9b0 * (ulonglong)uVar9 << 0x20) +
        (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_18277c9b0) -
       ((ulonglong)uVar5 * (_DAT_18277cac0 & 0xffffffff) +
        ((ulonglong)_DAT_18277cad0 * (ulonglong)uVar5 +
         (uVar3 >> 0x20) * (_DAT_18277cac0 & 0xffffffff) << 0x20) +
        ((ulonglong)uVar7 * (ulonglong)_DAT_18277caa0 + _DAT_18277cab0 << 0x20) +
        (ulonglong)_DAT_18277ca90 * (ulonglong)uVar7 +
       (ulonglong)uVar12 * (ulonglong)_DAT_18277ca70 +
       ((ulonglong)_DAT_18277ca80 * (ulonglong)uVar12 + (uVar6 >> 0x20) * (ulonglong)_DAT_18277ca70
       << 0x20) +
       ((unaff_RBX & 0xffffffff) * (ulonglong)_DAT_18277ca60 +
        (ulonglong)uVar9 * (ulonglong)_DAT_18277ca50 << 0x20) +
       (unaff_RBX & 0xffffffff) * (ulonglong)_DAT_18277ca50)) + 0x82cdb947f2e44d80;
  _DAT_1833da830 = _DAT_1833da6f0 ^ uVar4 ^ _DAT_1833da668;
  _DAT_1833da550 = (_DAT_1833da550 ^ uVar4) + _DAT_1833da668 ^ 0x6a6423f45d496b31;
  _DAT_1833da870 = (_DAT_1833da870 * -0x763c02b23f8742ad ^ _DAT_1833da550) + uVar4;
  _DAT_1833da718 = _DAT_1833da870 ^ _DAT_1833da550;
  uVar3 = _DAT_1833da668 - *(longlong *)(unaff_RBP + 0x60);
  _DAT_1833da8f0 = func_0x00018edcbce0(_DAT_1833da878 + 0xe27fa86969121446 ^ 0x6a);
  uVar4 = (ulonglong)((uint)_DAT_1833da8f0 & 0x20);
  _DAT_1833da688 = _DAT_1833da650 ^ uVar4 ^ 0x597832e5135ea41c;
  _DAT_1833da728 = (_DAT_1833da728 ^ uVar4) + 0x597832e5135ea41c ^ 0x105be35bd917cb30;
  _DAT_1833da600 = (_DAT_1833da600 * -0x650ea55f2a165c0b ^ _DAT_1833da728) + uVar4;
  _DAT_1833da8e0 = _DAT_1833da600 ^ _DAT_1833da728;
  _DAT_1833da8c0 = 0x597832e5135ea41c;
  uVar4 = (_DAT_1833da580 ^ _DAT_18277cae0) + _DAT_1833da580 + 0x597832e5977c8739;
  uVar6 = (_DAT_1833da580 ^ _UNK_18277cae8) + _DAT_1833da580 + 0xa687cd1aeca15c04;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da580 ^ _DAT_18277cae0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da580 ^ _UNK_18277cae8;
  _DAT_1833da890 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da580 + 0xa687cd1aeca15c04) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da580 + 0x597832e5977c8739));
  uVar4 = _DAT_1833da890 << 0x3e | _DAT_1833da890 >> 2;
  _DAT_1833da778 = _DAT_1833da780 ^ uVar4 ^ 0x20;
  _DAT_1833da6e8 = (_DAT_1833da6e8 ^ uVar4) + 0x20 ^ 0x51457393589cf1de;
  _DAT_1833da798 = (_DAT_1833da798 * 0x519fdd8d4cf4db5d ^ _DAT_1833da6e8) + uVar4;
  _DAT_1833da7a0 = _DAT_1833da798 ^ _DAT_1833da6e8;
  _DAT_1833da588 = 0x20;
  uVar4 = (_DAT_1833da8d0 ^ _DAT_18277caf0) + _DAT_1833da7d0 + 0x84222325;
  uVar6 = (_DAT_1833da7d0 ^ _UNK_18277caf8) + _DAT_1833da8d0 + 0xe3666d3b5198c1c0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da8d0 ^ _DAT_18277caf0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da7d0 ^ _UNK_18277caf8;
  _DAT_1833da610 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da8d0 + 0xe3666d3b5198c1c0) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da7d0 + 0x84222325));
  _DAT_1833da680 = _DAT_1833da680 + 0x1c9992c4ae673e40 ^ 0x5de63670dd31b7ac;
  _DAT_1833da780 = _DAT_1833da688 * -0x2a30e2dea653cff9;
  _DAT_1833da688 = _DAT_1833da780 ^ _DAT_1833da680;
  _DAT_1833da528 = 0x1c9992c4ae673e40;
  uVar4 = (_DAT_1833da8b8 ^ _DAT_18277cb00) + _DAT_1833da6a0 + 0xe3666d3bd5bae2c5;
  uVar6 = (_DAT_1833da6a0 ^ _UNK_18277cb08) + _DAT_1833da8b8 + 0x1c9992c4ae673e40;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da8b8 ^ _DAT_18277cb00;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da6a0 ^ _UNK_18277cb08;
  _DAT_1833da850 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da8b8 + 0x1c9992c4ae673e40) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da6a0 + 0xe3666d3bd5bae2c5));
  uVar4 = _DAT_1833da850 & 0xffffffffff000000;
  _DAT_1833da808 = _DAT_1833da738 ^ uVar4 ^ 0x20;
  _DAT_1833da8f8 = (_DAT_1833da8f8 ^ uVar4) + 0x20 ^ 0xeb55ec37aac58dd3;
  _DAT_1833da518 = (_DAT_1833da518 * 0x42f8424340fe4471 ^ _DAT_1833da8f8) + uVar4;
  _DAT_1833da860 = _DAT_1833da518 ^ _DAT_1833da8f8;
  _DAT_1833da738 = 0x20;
  uVar4 = (_DAT_1833da610 ^ _DAT_18277cb10) + _DAT_1833da710 + 0x84222325;
  uVar6 = (_DAT_1833da710 ^ _UNK_18277cb18) + _DAT_1833da610 + 0x19f0408efc6a8e74;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da610 ^ _DAT_18277cb10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da710 ^ _UNK_18277cb18;
  _DAT_1833da698 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da610 + 0x19f0408efc6a8e74) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da710 + 0x84222325));
  _DAT_1833da6c0 =
       (_DAT_1833da6c0 ^ _DAT_1833da698 & 0x3fffffffff8000) + 0xe60fbf710395718c ^
       0x3c6fd5ebad3195b0;
  _DAT_1833da7e0 =
       (_DAT_1833da7e0 * -0x12170763ce432ed9 ^ _DAT_1833da6c0) + (_DAT_1833da698 & 0x3fffffffff8000)
  ;
  _DAT_1833da838 = _DAT_1833da7e0 ^ _DAT_1833da6c0;
  _DAT_1833da8d0 = 0xe60fbf710395718c;
  uVar4 = (~_DAT_1833da700 + 0x19f0408efc6a8e75) *
          ((_DAT_1833da630 ^ 0x84222305) + (ulonglong)((uint)_DAT_1833da630 & 0x84222305) * 2);
  uVar4 = (uVar4 | _DAT_1833da7d0) + (uVar4 & _DAT_1833da7d0);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833da6f8 = func_0x00018edcbce0((uVar4 | 0x19f0408e7848ad71) + (uVar4 & 0x19f0408e7848ad71));
  _DAT_1833da648 = _DAT_1833da528 ^ _DAT_1833da6f8 ^ 0x19f0408efc6a8e94;
  _DAT_1833da698 = (_DAT_1833da698 ^ _DAT_1833da6f8) + 0x19f0408efc6a8e94 ^ 0x7f28296fd1149f2c;
  _DAT_1833da850 = (_DAT_1833da850 * 0x745bc581c7759d9b ^ _DAT_1833da698) + _DAT_1833da6f8;
  _DAT_1833da828 = _DAT_1833da850 ^ _DAT_1833da698;
  _DAT_1833da548 = 0x19f0408efc6a8e94;
  uVar4 = func_0x00018edcbce0(_DAT_1833da8f8 + 0x5cc3d5192b83234a ^ 0xc1);
  uVar6 = uVar4 ^ 0x19f0408efc6a8e94;
  _DAT_1833da668 = uVar4 ^ uVar6 ^ 0x20;
  _DAT_1833da5c0 = (_DAT_1833da5c0 ^ uVar6) + 0x20 ^ 0x493d5bfffa2bca79;
  _DAT_1833da700 = (_DAT_1833da700 * 0x475782125d0ca0a1 ^ _DAT_1833da5c0) + uVar6;
  _DAT_1833da5f8 = _DAT_1833da700 ^ _DAT_1833da5c0;
  _DAT_1833da8c8 = 0x20;
  uVar4 = (_DAT_1833da828 ^ _DAT_18277cb20) + _DAT_1833da600 + 0xb073efdf4bcd4e0a;
  uVar6 = (_DAT_1833da600 ^ _UNK_18277cb28) + _DAT_1833da828 + 0x4a3da40578286586;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da828 ^ _DAT_18277cb20;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da600 ^ _UNK_18277cb28;
  _DAT_1833da778 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da828 + 0x4a3da40578286586) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da600 + 0xb073efdf4bcd4e0a));
  uVar4 = _DAT_1833da778 ^ 0xb073efdfcfef6d2f;
  _DAT_1833da500 = _DAT_1833da7b0 ^ uVar4 ^ 0xfab193e54817d2b5;
  _DAT_1833da878 = (_DAT_1833da878 ^ uVar4) + 0xfab193e54817d2b5 ^ 0x42aa12759b553f7a;
  _DAT_1833da5f8 = (_DAT_1833da5f8 * 0x7a343defa4eba033 ^ _DAT_1833da878) + uVar4;
  _DAT_1833da610 = _DAT_1833da5f8 ^ _DAT_1833da878;
  _DAT_1833da820 = 0xfab193e54817d2b5;
  _DAT_1833da618 = func_0x00018edcbce0(_DAT_1833da8c0 + 0xd9e6c1d38c4a9db9 ^ 0x4f);
  uVar4 = (_DAT_1833da618 << 0x16 | _DAT_1833da618 >> 0x2a) * 0x199e469d1161bd3;
  _DAT_1833da668 = (_DAT_1833da668 ^ uVar4) + 0xfa4e4bdab7c708a9 ^ 0x52b003740b8fbeb;
  _DAT_1833da680 = (_DAT_1833da680 * -0x4920fb84570b2e57 ^ _DAT_1833da668) + uVar4;
  _DAT_1833da768 = _DAT_1833da680 ^ _DAT_1833da668;
  _DAT_1833da8e8 = 0xfa4e4bdab7c708a9;
  uVar4 = (_DAT_1833da6a8 ^ _DAT_18277cb30) + _DAT_1833da608 + 0xfab193e5cc35f190;
  uVar6 = (_DAT_1833da608 ^ _UNK_18277cb38) + _DAT_1833da6a8 + 0xfab193e54817d2b5;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da6a8 ^ _DAT_18277cb30;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da608 ^ _UNK_18277cb38;
  _DAT_1833da6a8 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da6a8 + 0xfab193e54817d2b5) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da608 + 0xfab193e5cc35f190));
  _DAT_1833da598 = _DAT_1833da6a8 & 0x1ffffffffffff;
  _DAT_1833da828 = _DAT_1833da828 ^ _DAT_1833da598 ^ 0x60f4c7fdd13760ea;
  _DAT_1833da7f8 = (_DAT_1833da7f8 * 0x7946dfc9f971533 ^ _DAT_1833da828) + _DAT_1833da598;
  _DAT_1833da650 = _DAT_1833da7f8 ^ _DAT_1833da828;
  _DAT_1833da5f0 = 0;
  _DAT_1833da770 = func_0x00018edcbce0(_DAT_1833da560 ^ 0x22ff7bfcffdda6);
  uVar4 = _DAT_1833da770 & 0xffffffffffe00000;
  uVar6 = uVar4 - (_DAT_1833da770 >> 1 & 0x5555555555500000);
  uVar6 = (uVar6 & 0x3333333333300000) + (uVar6 >> 2 & 0x3333333333300000);
  lVar2 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f070000) * 0x101010101010101 >> 0x38) * 0x80;
  uVar6 = uVar4 + lVar2 + 0x20;
  _DAT_1833da5e8 = (uVar6 ^ _DAT_1833da7b0 ^ uVar6 ^ 0x20) + 0x20 ^ 0x59b61afb5b340edc;
  _DAT_1833da800 = uVar4 + lVar2 + (_DAT_1833da800 * 0x59361b071f163d73 ^ _DAT_1833da5e8) + 0x20;
  _DAT_1833da6b0 = _DAT_1833da5e8 ^ _DAT_1833da800;
  _DAT_1833da548 = 0x20;
  uVar4 = (_DAT_1833da6f0 ^ _DAT_18277cb40) + _DAT_1833da5d8 + 0xb073efdf4bcd4e0a;
  uVar6 = (_DAT_1833da5d8 ^ _UNK_18277cb48) + (_DAT_1833da6f0 - 1);
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_1833da6f0 ^ _DAT_18277cb40;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1833da5d8 ^ _UNK_18277cb48;
  _DAT_1833da8e8 =
       func_0x00018edcbce0((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1833da6f0 - 1) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_1833da5d8 + 0xb073efdf4bcd4e0a));
  _DAT_1833da6a0 =
       (_DAT_1833da6a0 ^ ~_DAT_1833da8e8 & 0xb073efdfcfef6d2f) + 0x4f8c1020301092d0 ^
       0xb6d272f74ddff17a;
  _DAT_1833da8b8 =
       (_DAT_1833da8b8 * 0x1c9196d5305bf1d ^ _DAT_1833da6a0) +
       (~_DAT_1833da8e8 & 0xb073efdfcfef6d2f);
  _DAT_1833da878 = _DAT_1833da8b8 ^ _DAT_1833da6a0;
  _DAT_1833da828 = 0x4f8c1020301092d0;
  _DAT_1833da540 = func_0x00018edcbce0(_DAT_1833da8f0 ^ 0xfca36d04d6263a27);
  uVar6 = _DAT_1833da540 ^ 0x9d6f03bf21bd8430;
  uVar4 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar4 = ((((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^ uVar6) <<
          0x29 | uVar6 >> 0x17;
  _DAT_1833da5f8 = _DAT_1833da5f8 ^ uVar4 ^ 0x9af78ae6b8444eae;
  _DAT_1833da7d8 = (_DAT_1833da7d8 * 0x717fae2dc611ba11 ^ _DAT_1833da5f8) + uVar4;
  _DAT_1833da610 = _DAT_1833da7d8 ^ _DAT_1833da5f8;
  _DAT_1833da800 = 0;
  uVar4 = ((_DAT_1833da628 ^ 0x84222305) + (ulonglong)((uint)_DAT_1833da628 & 0x84222305) * 2) *
          -_DAT_1833da5a8;
  uVar4 = (uVar4 | _DAT_1833da708) + (uVar4 & _DAT_1833da708);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833da608 = func_0x00018edcbce0((uVar4 | 0x84222305) + (ulonglong)((uint)uVar4 & 0x84222305))
  ;
  uVar4 = (ulonglong)(~(uint)_DAT_1833da608 & 0x20);
  _DAT_1833da5b8 = _DAT_1833da548 ^ uVar4 ^ 0x20;
  _DAT_1833da5f8 = (_DAT_1833da5f8 ^ uVar4) + 0x20 ^ 0xeec11d67d50028ae;
  _DAT_1833da7b8 = (_DAT_1833da7b8 * 0x63a333558d99c2c5 ^ _DAT_1833da5f8) + uVar4;
  _DAT_1833da5f8 = _DAT_1833da7b8 ^ _DAT_1833da5f8;
  _DAT_1833da840 = 0x20;
  _DAT_1833da500 = func_0x00018edcbce0(_DAT_1833da858 ^ 0xffdd0084250021f6);
  _DAT_1833da6d0 = _DAT_1833da7a0 ^ _DAT_1833da500 ^ 0xfd0ea89d07f662db;
  _DAT_1833da6e8 = (_DAT_1833da6e8 * 0x639c393467f1d2fb ^ _DAT_1833da6d0) + _DAT_1833da500;
  _DAT_1833da6d0 = _DAT_1833da6e8 ^ _DAT_1833da6d0;
  _DAT_1833da7a0 = 0;
  uVar4 = ((_DAT_1833da710 ^ 0x84222305) + (ulonglong)((uint)_DAT_1833da710 & 0x84222305) * 2) *
          -_DAT_1833da678;
  uVar4 = (uVar4 | _DAT_1833da550) + (uVar4 & _DAT_1833da550);
  uVar4 = uVar4 * 0x2000 ^ uVar4;
  uVar4 = uVar4 >> 7 ^ uVar4;
  uVar4 = uVar4 << 0x11 ^ uVar4;
  _DAT_1833da508 = func_0x00018edcbce0((uVar4 | 0x84222305) + (ulonglong)((uint)uVar4 & 0x84222305))
  ;
  _DAT_1833da528 = _DAT_1833da6b0 ^ _DAT_1833da508 ^ 0x20;
  _DAT_1833da6c0 = (_DAT_1833da6c0 ^ _DAT_1833da508) + 0x20 ^ 0x83080539614e0db9;
  _DAT_1833da7e8 = (_DAT_1833da7e8 * 0x4f7f7f86a8fe648f ^ _DAT_1833da6c0) + _DAT_1833da508;
  _DAT_1833da870 = _DAT_1833da7e8 ^ _DAT_1833da6c0;
  _DAT_1833da798 = 0x20;
  switch(uVar3 < 0x20) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xedb0f74 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edb0f74(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  int iVar1;
  longlong in_RAX;
  longlong in_RCX;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong *unaff_R13;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar2 = param_1 + in_RAX + param_2;
  uVar3 = param_3 + in_RCX + 1;
  param_1 = (uVar2 * 0x2000 | uVar2 >> 0x33) ^ param_1;
  param_3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ param_3;
  _DAT_1833da5b0 =
       func_0x00018edcbce0((param_3 << 0x1d | param_3 >> 0x23) - (in_RCX + 1) ^
                           (param_1 << 0x1d | param_1 >> 0x23) - (in_RAX + param_2));
  uVar6 = unaff_ESI & _DAT_18001a990;
  uVar7 = unaff_ESI | _DAT_18001a990;
  uVar8 = unaff_ESI ^ _DAT_18001a990;
  uVar4 = unaff_ESI ^ (uint)DAT_18001a710;
  lVar5 = ((ulonglong)unaff_ESI * (ulonglong)_DAT_18277c2c0 << 0x20) +
          (ulonglong)unaff_ESI * (ulonglong)_DAT_18277c2b0;
  uVar2 = (_DAT_1833da5b0 ^ unaff_ESI) & 0x7fffffffffffff;
  uVar3 = ((((ulonglong)uVar4 * (ulonglong)_DAT_18277c290 + _DAT_18277c2a0 << 0x20) +
            (ulonglong)uVar4 * (ulonglong)_DAT_18277c280 + lVar5 +
           ((ulonglong)uVar8 * (ulonglong)_DAT_18277c270 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_18277c260 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_18277c250 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_18277c240 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_18277c230 << 0x20 |
           (ulonglong)uVar6 * (ulonglong)_DAT_18277c220) +
           ((ulonglong)unaff_ESI * (ulonglong)_DAT_18277c210 << 0x20) +
           (ulonglong)unaff_ESI * (ulonglong)_DAT_18277c200) -
          (((ulonglong)uVar8 * (ulonglong)_DAT_18277c340 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_18277c330 +
           ((ulonglong)uVar7 * (ulonglong)_DAT_18277c320 << 0x20) +
           (ulonglong)uVar7 * (ulonglong)_DAT_18277c310 +
           ((ulonglong)uVar6 * (ulonglong)_DAT_18277c300 << 0x20 |
           (ulonglong)uVar6 * (ulonglong)_DAT_18277c2f0) +
           ((ulonglong)unaff_ESI * (ulonglong)_DAT_18277c2e0 << 0x20) +
           (ulonglong)unaff_ESI * (ulonglong)_DAT_18277c2d0 + lVar5)) + 0x5743a107911cfb15;
  _DAT_1833da758 = _DAT_1833da568 ^ uVar2 ^ uVar3;
  _DAT_1833da6d8 = (_DAT_1833da6d8 ^ uVar2) + uVar3 ^ 0xa554bbd90ddeee2f;
  _DAT_1833da6c0 = (_DAT_1833da6c0 * -0x1de1d494ce4fb5bf ^ _DAT_1833da6d8) + uVar2;
  _DAT_1833da838 = _DAT_1833da6c0 ^ _DAT_1833da6d8;
  _DAT_1833da6d0 = uVar3 & 0xffffffff;
  *(int *)(unaff_RBP + 0x98) = (int)uVar3;
  iVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  switch(*(int *)(unaff_RBP + 0x98) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x98)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xedb8860 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edb8860(void)

{
  char cVar1;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  
  *(undefined8 *)(unaff_RBP + 0xa0) = *(undefined8 *)(unaff_RBP + 0x10);
  *(undefined4 *)(unaff_RBP + 0xa8) = 0;
  *(undefined4 *)(unaff_RBP + 0xb0) = unaff_EDI;
  FUN_190ddfc90();
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


// ----- block @ rva 0xedb8d72 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edb8d72(longlong param_1)

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


// ----- block @ rva 0xedce1e5 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edce1e5(void)

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


// ----- block @ rva 0xedce384 -----

void FUN_18edce384(void)

{
  return;
}


// ----- block @ rva 0xedcf662 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edcf662(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 in_stack_00000040;
  undefined4 uStack00000000000000ac;
  undefined8 in_stack_000000f0;
  undefined8 in_stack_000000f8;
  undefined8 in_stack_00000100;
  undefined8 in_stack_00000108;
  undefined8 in_stack_00000110;
  
  (**(code **)(in_stack_00000030 + JNI->NewObjectArray /*0x560*/))(in_stack_00000030,in_stack_00000040,in_stack_00000038,0)
  ;
  uStack00000000000000ac = 0x3e864f9e;
  rdtsc();
  in_stack_000000f0 = 0x2f005300450044;
  rdtsc();
  in_stack_000000f8 = 0x2f004300420043;
  rdtsc();
  in_stack_00000100 = 0x530043004b0050;
  rdtsc();
  in_stack_00000108 = 0x64006100500035;
  rdtsc();
  in_stack_00000110 = 0x67006e00690064;
  (**(code **)(in_stack_00000030 + JNI->NewString /*0x518*/))(in_stack_00000030,&stack0x000000f0,0x14);
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb4a,0x2e);
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


// ----- block @ rva 0xedcf7b2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edcf7b2(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190de3220(in_stack_00000030,&stack0x00000078,*_DAT_18301ee50 + 0xb5e,*_DAT_18301ee50 + 0xb6a,
                0x35);
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


// ----- block @ rva 0xedcf991 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edcf991(void)

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


// ----- block @ rva 0xedcfa5b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edcfa5b(void)

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


// ----- block @ rva 0xedd01f9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd01f9(void)

{
  char cVar1;
  code *in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (*in_RAX)(in_stack_00000030);
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


// ----- block @ rva 0xedd04b6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd04b6(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  (**(code **)(in_RAX + 0x70))(in_stack_00000030);
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


// ----- block @ rva 0xedd0844 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd0844(void)

{
  char cVar1;
  longlong in_RAX;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong *in_stack_00000030;
  
  uVar2 = (**(code **)(in_RAX + 0x78))(in_stack_00000030);
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


// ----- block @ rva 0xedd1c1b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd1c1b(void)

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


// ----- block @ rva 0xedd21db -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd21db(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined8 in_stack_00000030;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  cVar1 = (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))(in_stack_00000030);
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xedd246d -----

undefined8 thunk_FUN_18edd185f(void)

{
  longlong *unaff_R14;
  
  (**(code **)(unaff_R14 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xedd2e8f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd2e8f(void)

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


// ----- block @ rva 0xedd2ee3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd2ee3(void)

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


// ----- block @ rva 0xedd30fd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd30fd(void)

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


// ----- block @ rva 0xedd3136 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd3136(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_182782868)();
  return;
}


// ----- block @ rva 0xedd3151 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd3151(void)

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


// ----- block @ rva 0xedd326c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd326c(void)

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


// ----- block @ rva 0xedd35bb -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd35bb(void)

{
  FUN_190de3220();
  (*_DAT_1827826b8)();
  return;
}


// ----- block @ rva 0xedd367c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd367c(void)

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


// ----- block @ rva 0xedd37ea -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd37ea(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  (*_DAT_182782778)();
  return;
}


// ----- block @ rva 0xedd3947 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd3947(void)

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


// ----- block @ rva 0xedd3c13 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd3c13(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182782ab8)();
  return;
}


// ----- block @ rva 0xedd3c48 -----

void FUN_18edd3c48(void)

{
  return;
}


// ----- block @ rva 0xedd3dc0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd3dc0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_182783318)();
  return;
}


// ----- block @ rva 0xedd42c7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd42c7(void)

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


// ----- block @ rva 0xedd4313 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd4313(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182783368)();
  return;
}


// ----- block @ rva 0xedd48fc -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd48fc(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182782cc8)();
  return;
}


// ----- block @ rva 0xedd4962 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd4962(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1827833f8)();
  return;
}


// ----- block @ rva 0xedd4f2c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd4f2c(void)

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


// ----- block @ rva 0xedd56e9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd56e9(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int iStack0000000000000078;
  
  iStack0000000000000078 = 0;
  iVar1 = (**(code **)(unaff_RSI + JNI->GetArrayLength /*0x558*/))();
  switch(iStack0000000000000078 < 0 || iVar1 <= iStack0000000000000078) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xedd57ea -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd57ea(void)

{
  (*_DAT_1827839b8)();
  return;
}


// ----- block @ rva 0xedd5899 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd5899(void)

{
  FUN_190ddfc90();
  (*_DAT_182783648)();
  return;
}


// ----- block @ rva 0xedd6150 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd6150(void)

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


// ----- block @ rva 0xedd6642 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd6642(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182782cf8)();
  return;
}


// ----- block @ rva 0xedd669d -----

void FUN_18edd669d(void)

{
  return;
}


// ----- block @ rva 0xedd66bc -----

void FUN_18edd66bc(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xedd6823 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd6823(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182783b18)();
  return;
}


// ----- block @ rva 0xedd6867 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd6867(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182783ac8)();
  return;
}


// ----- block @ rva 0xedd68a1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd68a1(void)

{
  FUN_190dd72e0();
  (*_DAT_182783ae8)();
  return;
}


// ----- block @ rva 0xedd696d -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd696d(void)

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


// ----- block @ rva 0xedd6a0b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd6a0b(void)

{
  FUN_190dd9df0();
  (*_DAT_182783a68)();
  return;
}


// ----- block @ rva 0xedd6a3e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd6a3e(void)

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


// ----- block @ rva 0xedd6a8e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd6a8e(void)

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


// ----- block @ rva 0xedd6b1f -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd6b1f(void)

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


// ----- block @ rva 0xedd6b43 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18edd6b43(void)

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


// ----- block @ rva 0xedd6bab -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18edd6bab(void)

{
  longlong *unaff_RSI;
  
  FUN_184117db0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_182783b48)();
  return;
}


// ----- block @ rva 0xedd6bd0 -----

void FUN_18edd6bd0(void)

{
  return;
}


// ----- block @ rva 0xedd6bd8 -----

void FUN_18edd6bd8(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

