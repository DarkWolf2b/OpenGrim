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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x74a5,0x148);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ed7fc99 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182774850 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bo; Fw (DD)V (handler @ image 18ed9b260, runtime 6ffff69ab260) =====

void FUN_18ed9b260(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x74a5,0x148);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x74a5,0x148);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018edce1e2 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182780a78 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bo; _59e141878ced10e285ef05299aa3d0d3 ()V (handler @ image 18ed82920, runtime 6ffff6992920) =====

void FUN_18ed82920(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x00018ed82a08 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182775840 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/bo; bV (Lsixtwo/lC;)V (handler @ image 18ed602f0, runtime 6ffff69702f0) =====

void FUN_18ed602f0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x74a5,0x148);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x74a5,0x148);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
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



