// ===== Lsixtwo/oH; _1e65200583226e7e83e116e0481e0fbd ()V (handler @ image 1862f17a0, runtime 6fffedf017a0) =====

void FUN_1862f17a0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001862f1888 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807f6a10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oH; cIA (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 1862eda80, runtime 6fffedefda80) =====

void FUN_1862eda80(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x0001862edacb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807f5460 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/oH; cIB (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 1862eea90, runtime 6fffedefea90) =====

void FUN_1862eea90(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001862eeb19 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807f5a20 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oH; cIu ()Lnet/minecraft/class_1799; (handler @ image 1862ab810, runtime 6fffedebb810) =====

void FUN_1862ab810(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xc8c3,0x221);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001862ab8ef did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807e99a0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oH; cIv ()I (handler @ image 1862b4af0, runtime 6fffedec4af0) =====

void FUN_1862b4af0(longlong *param_1)

{
  char cVar1;
  
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xc8c3,0x221);
  cVar1 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001862b4bcc did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807ec4b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/oH; cIx (Ljava/lang/IllegalArgumentException;)Ljava/lang/IllegalArgumentException; (handler @ image 1862b98d0, runtime 6fffedec98d0) =====

undefined8 FUN_1862b98d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/oH; cIy ([B)Ljava/lang/String; (handler @ image 1862b9960, runtime 6fffedec9960) =====

void FUN_1862b9960(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x0001862b9a03 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807edc60 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/oH; cIz (IJ)I (handler @ image 1862e27b0, runtime 6fffedef27b0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1862e27b0(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar6 = (~uRam0000000183126848 + 0xa6a30ee4b1df262) *
          ((uRam00000001831267b0 ^ 0x688bb94466b3bad5) +
          (uRam00000001831267b0 & 0x688bb94466b3bad5) * 2);
  uVar6 = (uVar6 | uRam0000000183126840) + (uVar6 & uRam0000000183126840);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831268e8 =
       func_0x0001862ed9f0((uVar6 | 0x62e189aa2dae48b4) + (uVar6 & 0x62e189aa2dae48b4));
  uVar6 = uRam00000001831268e8 >> 1 | uRam00000001831268e8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam00000001831268e8;
  uRam0000000183126800 = (uRam0000000183126800 ^ uVar6) + 0x6aebb9eeeb9dfbf1 ^ 0x105b23dd92044536;
  uRam0000000183126808 = (uRam0000000183126808 * 0x10f057973ccc3529 ^ uRam0000000183126800) + uVar6;
  uRam0000000183126870 = uRam0000000183126808 ^ uRam0000000183126800;
  uRam0000000183126730 = 0x6aebb9eeeb9dfbf1;
  uVar6 = (~uRam0000000183126700 + 0x6a481f41eb413b60) *
          ((uRam00000001831267f0 ^ 0xc9520d1cdfd9801) +
          (uRam00000001831267f0 & 0xc9520d1cdfd9801) * 2);
  uVar6 = (uVar6 | uRam00000001831267e0) + (uVar6 & uRam00000001831267e0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831268c8 =
       func_0x0001862ed9f0((uVar6 | 0x66dd3f9026bca35e) + (uVar6 & 0x66dd3f9026bca35e));
  uRam00000001831267b0 =
       (uRam00000001831267b0 ^ uRam00000001831268c8 ^ 0x62481f00a200005b) + 0x66dd3f90a29e807b ^
       0xc4eb8c94ca76344;
  uRam00000001831268f0 =
       (uRam00000001831268f0 * 0x606e98a033ac7555 ^ uRam00000001831267b0) +
       (uRam00000001831268c8 ^ 0x62481f00a200005b);
  uRam00000001831267d0 = uRam00000001831268f0 ^ uRam00000001831267b0;
  uRam0000000183126718 = 0x66dd3f90a29e807b;
  uRam00000001831267d8 = func_0x0001862ed9f0(uRam00000001831267a8 ^ 0xcbf7dc8b1b26b440);
  uVar6 = (uRam00000001831267d8 << 7 | uRam00000001831267d8 >> 0x39) * -0x4f85d83ad6e9b215;
  uRam0000000183126780 = (uRam0000000183126780 ^ uVar6) + 0xd218d10bf601d600 ^ 0x59406ea2723223ca;
  uRam00000001831267a8 = (uRam00000001831267a8 * -0x1356ca9baf90ca23 ^ uRam0000000183126780) + uVar6
  ;
  uRam0000000183126880 = uRam00000001831267a8 ^ uRam0000000183126780;
  uRam0000000183126848 = 0xd218d10bf601d600;
  uVar6 = (~uRam00000001831268a8 + 0x6abaad701b36b3e1) *
          ((uRam0000000183126728 ^ 0x84222325) +
          (ulonglong)((uint)uRam0000000183126728 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam0000000183126770) + (uVar6 & uRam0000000183126770);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183126878 =
       func_0x0001862ed9f0((uVar6 | 0x6abaad709f1490c5) + (uVar6 & 0x6abaad709f1490c5));
  uRam00000001831267d8 =
       (uRam00000001831267d8 ^ uRam0000000183126878 ^ 0x6abaad701b36b3e0) + 0x9545528fe4c94c20 ^
       0x522d2263e3b2652d;
  uRam0000000183126828 =
       (uRam0000000183126828 * -0x19e4a25e968938e3 ^ uRam00000001831267d8) +
       (uRam0000000183126878 ^ 0x6abaad701b36b3e0);
  uRam0000000183126760 = uRam0000000183126828 ^ uRam00000001831267d8;
  uRam00000001831267c0 = -0x6abaad701b36b3e0;
  uVar6 = (~uRam00000001831268a8 + 0x9545528fe4c94c21) *
          ((uRam00000001831268c8 ^ 0x6abaad709f1510fa) +
          (uRam00000001831268c8 & 0x6abaad709f1510fa) * 2);
  uVar6 = (uVar6 | uRam0000000183126750) + (uVar6 & uRam0000000183126750);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183126758 =
       func_0x0001862ed9f0((uVar6 | 0xffffffff7bdc5cda) + (uVar6 & 0xffffffff7bdc5cda));
  uVar6 = uRam0000000183126758 - (uRam0000000183126758 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 3 ^
          uRam0000000183126758;
  uRam0000000183126808 =
       (uRam0000000183126728 ^ uVar6 ^ 0x7fff ^ uVar6) + 0x7fff ^ 0xd9522fc06fc4216c;
  uRam0000000183126710 = (uRam0000000183126710 * -0x50103e9f697a2645 ^ uRam0000000183126808) + uVar6
  ;
  uRam00000001831267e8 = uRam0000000183126710 ^ uRam0000000183126808;
  uRam0000000183126748 = uRam0000000183126848 ^ 0x7fff;
  uRam00000001831267b0 = 0x7fff;
  uVar6 = (uRam0000000183126778 ^ _UNK_1807f5280) + uRam0000000183126870 + 0x84222325;
  uVar9 = (uRam0000000183126870 ^ _UNK_1807f5288) + uRam0000000183126778 + 0xdc4e5eda44f2c580;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183126778 ^ _UNK_1807f5280;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183126870 ^ _UNK_1807f5288;
  uRam00000001831267a8 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183126778 + 0xdc4e5eda44f2c580) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183126870 + 0x84222325));
  uRam0000000183126760 =
       (uRam0000000183126760 ^ uRam0000000183126868 & 0xffffffffff) + 0x23b1a125bb0d3a80 ^
       0x2b5922da4236d9c3;
  uRam0000000183126840 =
       (uRam0000000183126840 * 0x7a38fddf80999295 ^ uRam0000000183126760) +
       (uRam0000000183126868 & 0xffffffffff);
  uRam0000000183126788 = uRam0000000183126840 ^ uRam0000000183126760;
  uRam0000000183126718 = 0x23b1a125bb0d3a80;
  uVar6 = (uRam00000001831268d8 ^ _UNK_1807f5290) + uRam00000001831268e0 + 0x84225cda;
  uVar9 = (uRam00000001831268e0 ^ _UNK_1807f5298) + uRam00000001831268d8 + 0xdc4e5eda44f2c580;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831268d8 ^ _UNK_1807f5290;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831268e0 ^ _UNK_1807f5298;
  uRam0000000183126878 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam00000001831268d8 + 0xdc4e5eda44f2c580) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831268e0 + 0x84225cda));
  uVar6 = uRam0000000183126878 & 0x7fffffffffffffff;
  uRam00000001831268c0 = uRam0000000183126870 ^ uVar6 ^ 0xdc4e5eda44f3457f;
  uRam00000001831267b8 = (uRam00000001831267b8 ^ uVar6) + 0xdc4e5eda44f3457f ^ 0x5fe65c53d5c0feb;
  uRam00000001831267b0 = (uRam00000001831267b0 * -0x141d9c87e573f85b ^ uRam00000001831267b8) + uVar6
  ;
  uRam00000001831267a8 = uRam00000001831267b0 ^ uRam00000001831267b8;
  uRam0000000183126818 = -0x23b1a125bb0cba81;
  uVar6 = (uRam0000000183126878 ^ _UNK_1807f52a0) + uRam0000000183126700 + 0xdc4e5edac0d1665a;
  uVar9 = (uRam0000000183126700 ^ _UNK_1807f52a8) + uRam0000000183126878 + 0x23b1a125bb0d3a80;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183126878 ^ _UNK_1807f52a0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183126700 ^ _UNK_1807f52a8;
  uRam0000000183126810 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183126878 + 0x23b1a125bb0d3a80) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183126700 + 0xdc4e5edac0d1665a));
  uVar9 = _UNK_1807f52b8;
  uVar6 = _UNK_1807f52b0;
  uVar4 = (uRam0000000183126810 ^ 0x23b1a125bb0d3a80) << 0x29 |
          (uRam0000000183126810 ^ 0x23b1a125bb0d3a80) >> 0x17;
  uRam0000000183126750 = uRam0000000183126790 ^ uVar4 ^ 0x7fff;
  uRam00000001831267b0 = (uRam00000001831267b0 ^ uVar4) + 0x7fff ^ 0x75d18cdc2364057c;
  uRam00000001831267c0 = (uRam00000001831267c0 * -0x7d9e22eb7aef4afd ^ uRam00000001831267b0) + uVar4
  ;
  uRam0000000183126768 = uRam00000001831267c0 ^ uRam00000001831267b0;
  uRam00000001831267d0 = 0x7fff;
  uVar4 = (uRam00000001831267a8 ^ _UNK_1807f52b0) + uRam0000000183126718 + 0x6aebb9ee6fbfd8d4;
  uVar10 = (uRam0000000183126718 ^ _UNK_1807f52b8) + uRam00000001831267a8 + 0x66dd3f90a29e807b;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam00000001831267a8 ^ _UNK_1807f52b0;
  uVar10 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183126718 ^ _UNK_1807f52b8;
  uRam00000001831267e0 =
       func_0x0001862ed9f0((uVar10 << 0x1d | uVar10 >> 0x23) -
                           (uRam00000001831267a8 + 0x66dd3f90a29e807b) ^
                           (uVar4 << 0x1d | uVar4 >> 0x23) -
                           (uRam0000000183126718 + 0x6aebb9ee6fbfd8d4));
  uVar4 = ((uRam00000001831267e0 ^ 0x1db4371a33800000) >> 0x17) * 0x3d08cc2a01800000;
  uRam0000000183126710 =
       (uRam00000001831267c8 ^ uVar4 ^ 0xd1c8f97f8e3c7c6c ^ uVar4) + 0xd1c8f97f8e3c7c6c ^
       0x88e12252d9b123da;
  uRam0000000183126758 = (uRam0000000183126758 * 0x3a73af0b722d3169 ^ uRam0000000183126710) + uVar4;
  uRam0000000183126888 = uRam0000000183126758 ^ uRam0000000183126710;
  uRam00000001831268b8 = -0x2e37068071c38394;
  uVar4 = (uRam0000000183126778 ^ uVar6) + uRam0000000183126848 + 0x6aebb9ee6fbfd8d4;
  uVar10 = (uRam0000000183126848 ^ uVar9) + uRam0000000183126778 + 0x66dd3f90a29e807b;
  uVar6 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ uRam0000000183126778 ^ uVar6;
  uVar9 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uRam0000000183126848 ^ uVar9;
  uRam00000001831268c0 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) -
                           (uRam0000000183126778 + 0x66dd3f90a29e807b) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam0000000183126848 + 0x6aebb9ee6fbfd8d4));
  uRam0000000183126700 =
       (uRam0000000183126700 ^ uRam00000001831268c0 ^ 0x1db4371a339e8ccb) + 0xc36867e49037b8a ^
       0x648b5dd9d6d9d62f;
  uRam00000001831268e8 =
       (uRam00000001831268e8 * -0x7293bf79db1da049 ^ uRam0000000183126700) +
       (uRam00000001831268c0 ^ 0x1db4371a339e8ccb);
  uRam0000000183126788 = uRam00000001831268e8 ^ uRam0000000183126700;
  uRam00000001831267a8 = 0xc36867e49037b8a;
  uVar6 = (~uRam0000000183126830 + 0x66dd3f90a29e807c) *
          ((uRam00000001831268e8 ^ 0x6aebb9ee6fbfd8d4) +
          (uRam00000001831268e8 & 0x6aebb9ee6fbfd8d4) * 2);
  uVar6 = (uVar6 | uRam0000000183126770) + (uVar6 & uRam0000000183126770);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183126850 =
       func_0x0001862ed9f0((uVar6 | 0xc36867ecd2158af) + (uVar6 & 0xc36867ecd2158af));
  uRam0000000183126800 =
       (uRam0000000183126800 ^ uRam0000000183126850 & 0x3ffffffffffff) + 0x62c93980a29c8071 ^
       0xcf86edd3f98e91c8;
  uRam0000000183126880 =
       (uRam0000000183126880 * -0x1e920ce639e519dd ^ uRam0000000183126800) +
       (uRam0000000183126850 & 0x3ffffffffffff);
  uRam00000001831268b0 = uRam0000000183126880 ^ uRam0000000183126800;
  uRam00000001831267e0 = 0x62c93980a29c8071;
  uVar6 = (~uRam00000001831268f8 + 0xc5927301453900e3) *
          ((uRam0000000183126798 ^ 0xc36867ecd2158af) +
          (uRam0000000183126798 & 0xc36867ecd2158af) * 2);
  uVar6 = (uVar6 | uRam0000000183126888) + (uVar6 & uRam0000000183126888);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183126738 =
       func_0x0001862ed9f0((uVar6 | 0xc9a4f57f8818584d) + (uVar6 & 0xc9a4f57f8818584d));
  uRam00000001831267f8 = uRam0000000183126860 ^ uRam0000000183126738 ^ 0xd1c8f97f8e3c7c6c;
  uRam0000000183126720 =
       (uRam0000000183126720 ^ uRam0000000183126738) + 0xd1c8f97f8e3c7c6c ^ 0xa53afac75d6f5d5c;
  uRam0000000183126818 =
       (uRam0000000183126818 * 0x6b39ba8f0474b6a3 ^ uRam0000000183126720) + uRam0000000183126738;
  uRam0000000183126760 = uRam0000000183126818 ^ uRam0000000183126720;
  uRam00000001831267d0 = 0xd1c8f97f8e3c7c6c;
  uVar6 = (uRam0000000183126760 ^ 0x84225cda) + uRam00000001831267c8 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183126760 ^ 0x84225cda;
  uVar9 = ((uRam00000001831267c8 + uRam0000000183126760) * 0x2000 |
          uRam00000001831267c8 + uRam0000000183126760 >> 0x33) ^ uRam00000001831267c8;
  uRam0000000183126890 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183126760 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831267c8 + 0x84225cda));
  uRam00000001831267f0 = uRam00000001831267b0 ^ uRam0000000183126890 ^ 0x7fff;
  uRam0000000183126780 = (uRam0000000183126780 ^ uRam0000000183126890) + 0x7fff ^ 0x6e7eb2edb7a77456
  ;
  uRam0000000183126798 =
       (uRam0000000183126798 * -0x64463cc99506e7af ^ uRam0000000183126780) + uRam0000000183126890;
  uRam0000000183126710 = uRam0000000183126798 ^ uRam0000000183126780;
  uRam0000000183126728 = 0x7fff;
  uRam00000001831267f8 = func_0x0001862ed9f0(uRam0000000183126700 ^ 0xffdeff8425001db8);
  uRam0000000183126778 = uRam0000000183126778 ^ uRam00000001831267f8 ^ 0xdafffe8c58d3f88;
  uRam0000000183126768 =
       (uRam0000000183126768 * 0x3c2ad56d887e5555 ^ uRam0000000183126778) + uRam00000001831267f8;
  uRam0000000183126840 = uRam0000000183126768 ^ uRam0000000183126778;
  uRam0000000183126738 = 0;
  param_3 = param_4 & 0x7fff ^ param_3;
  uVar6 = (~uRam00000001831268d0 + 0xf44b3beb) *
          ((uRam0000000183126768 ^ 0x89149ecd) +
          (ulonglong)((uint)uRam0000000183126768 & 0x89149ecd) * 2);
  uVar6 = (uVar6 | uRam0000000183126870) + (uVar6 & uRam0000000183126870);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  lVar5 = func_0x0001862ed9f0((uVar6 | 0x7d5fa527) + (ulonglong)((uint)uVar6 & 0x7d5fa527));
  uRam0000000183126850 = 0x605e09d05ce5504a;
  uRam0000000183126870 = (uRam0000000183126870 * -0x6d7059da13a21f49 ^ 0x605e09d05ce5504a) + lVar5;
  uRam0000000183126890 = uRam0000000183126870 ^ 0x605e09d05ce5504a;
  uRam0000000183126740 = 0xf97d8602;
  uRam0000000183126858 = func_0x0001862ed9f0(uRam0000000183126868 + 0x2cff8ca7001cff ^ 0x24);
  uRam00000001831268a8 =
       (uRam00000001831268a8 ^ uRam0000000183126858 * 0x59d986e124809875) - 0x1745767c ^
       0xf12a1ef7847b5722;
  uRam0000000183126708 =
       (uRam00000001831267c0 * 0x32d16511d1cdb0bf ^ uRam00000001831268a8) +
       uRam0000000183126858 * 0x59d986e124809875 ^ uRam00000001831268a8;
  uRam00000001831267c0 = 0xe8ba8984;
  uVar6 = (uRam00000001831268f8 ^ _UNK_1807f52c0) + uRam0000000183126840 + 0x8422034d;
  uVar9 = (uRam0000000183126840 ^ _UNK_1807f52c8) + uRam00000001831268f8 + 0x1745767c;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831268f8 ^ _UNK_1807f52c0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183126840 ^ _UNK_1807f52c8;
  uRam00000001831267e8 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831268f8 + 0x1745767c) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam0000000183126840 + 0x8422034d));
  uVar6 = (ulonglong)(~(((uint)uRam00000001831267e8 ^ 0x1745767c) * 2) >> 1 & 0x2068);
  uRam0000000183126758 = uRam00000001831267d8 ^ uVar6 ^ 0x174596e4;
  uRam0000000183126858 = (uRam0000000183126858 ^ uVar6) + 0x174596e4 ^ 0x54ee0e95833c5e1b;
  uRam00000001831268e8 = (uRam00000001831268e8 * -0x1f7a29f26a45ef03 ^ uRam0000000183126858) + uVar6
  ;
  uRam0000000183126850 = uRam00000001831268e8 ^ uRam0000000183126858;
  uRam0000000183126718 = 0x174596e4;
  uRam0000000183126780 = func_0x0001862ed9f0(uRam0000000183126860 ^ 0x1c0036c2ff42e9);
  uVar6 = (ulonglong)(((uint)uRam0000000183126780 ^ 0x40664) & 0x174596e4);
  uRam00000001831268a8 = uRam0000000183126748 ^ uVar6 ^ 0x100002068;
  uVar9 = (uRam00000001831268a0 ^ uVar6) + 0x100002068;
  uRam00000001831268a0 = uVar9 ^ 0x279a0af50c843517;
  uRam0000000183126868 = (uRam0000000183126868 * -0x15b00a48d1c7d751 ^ uRam00000001831268a0) + uVar6
  ;
  uRam0000000183126768 = uRam0000000183126868 ^ uRam00000001831268a0;
  uRam00000001831267a0 = 0x2068;
  uVar6 = (~uRam00000001831268d0 + 0x4d069981) *
          ((uVar9 ^ 0x279a0af588a61632) + (ulonglong)((uint)uRam00000001831268a0 & 0x84222325) * 2);
  uVar6 = (uVar6 | uRam0000000183126798) + (uVar6 & uRam0000000183126798);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001831268b0 =
       func_0x0001862ed9f0((uVar6 | 0xc924baa5) + (ulonglong)((uint)uVar6 & 0xc924baa5));
  uRam0000000183126740 =
       (uRam0000000183126740 ^ uRam00000001831268b0 ^ 0x4d069980) - 0x4d069980 ^ 0xb1cea70c83923d7e;
  uRam0000000183126830 =
       (uRam0000000183126830 * 0x54851f91e6f7f3a9 ^ uRam0000000183126740) +
       (uRam00000001831268b0 ^ 0x4d069980);
  uRam0000000183126898 = uRam0000000183126830 ^ uRam0000000183126740;
  uRam00000001831267c0 = 0xb2f96680;
  uVar6 = (uRam0000000183126708 ^ _UNK_1807f52d0) + uRam0000000183126838 + 0x8422034d;
  uVar9 = (uRam0000000183126838 ^ _UNK_1807f52d8) + uRam0000000183126708 + 0x4d069980;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183126708 ^ _UNK_1807f52d0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam0000000183126838 ^ _UNK_1807f52d8;
  uVar3 = func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183126708 + 0x4d069980)
                              ^ (uVar6 << 0x1d | uVar6 >> 0x23) -
                                (uRam0000000183126838 + 0x8422034d));
  uVar6 = (ulonglong)(~uVar3 & 0x2068);
  uRam0000000183126760 = uRam00000001831267b0 ^ uVar6 ^ 0x4d06b9e8;
  uRam0000000183126808 = (uRam0000000183126808 ^ uVar6) + 0x4d06b9e8 ^ 0x861d5526b96e73;
  uRam00000001831267f8 = (uRam00000001831267f8 * -0xd2fa056f497fe43 ^ uRam0000000183126808) + uVar6;
  uRam0000000183126748 = uRam00000001831267f8 ^ uRam0000000183126808;
  uRam0000000183126810 = 0x4d06b9e8;
  uVar6 = (uRam00000001831268e8 ^ _UNK_1807f52e0) + uRam00000001831268c8 + 0xc9249acd;
  uVar9 = (uRam00000001831268c8 ^ _UNK_1807f52e8) + uRam00000001831268e8 + 0xb2f96680;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001831268e8 ^ _UNK_1807f52e0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831268c8 ^ _UNK_1807f52e8;
  uRam0000000183126720 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam00000001831268e8 + 0xb2f96680) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831268c8 + 0xc9249acd));
  uRam0000000183126750 = uRam00000001831268c8 ^ 0x100002068;
  uRam00000001831268b8 = uRam00000001831268b8 + 0x100002068 ^ 0x6b669240bb601a35;
  uRam0000000183126780 = uRam0000000183126848 * 0x1e25bf09a7fa513d;
  uRam0000000183126848 = uRam0000000183126780 ^ uRam00000001831268b8;
  uRam0000000183126808 = 0x2068;
  uRam00000001831267d8 = func_0x0001862ed9f0(uRam00000001831267f8 + 0x8bffb92500d0ff ^ 0xf);
  uVar6 = (uRam00000001831267d8 ^ 0xcdd1b700) & 0x7fffffffffffffff;
  uRam0000000183126808 = (uRam0000000183126808 ^ uVar6) - 0xcdd1b700 ^ 0x19e5cc05b4f474cc;
  uRam0000000183126710 = (uRam0000000183126710 * -0x5ef5d3e676b03837 ^ uRam0000000183126808) + uVar6
  ;
  uRam00000001831267e8 = uRam0000000183126710 ^ uRam0000000183126808;
  uRam00000001831268c0 = 0x322e4900;
  uRam0000000183126860 = func_0x0001862ed9f0(uRam0000000183126780 ^ 0xffac0036bb004e36);
  uVar6 = (uRam0000000183126860 ^ 0xcdd19700) << 0xd | uRam0000000183126860 >> 0x33;
  uRam00000001831268a0 = uRam00000001831268a8 ^ uVar6 ^ 0xcdd1d768;
  uRam00000001831267f0 = (uRam00000001831267f0 ^ uVar6) + 0xcdd1d768 ^ 0x6486914f64377180;
  uRam00000001831268b0 = (uRam00000001831268b0 * -0x7c84994284f0cba1 ^ uRam00000001831267f0) + uVar6
  ;
  uRam0000000183126808 = uRam00000001831268b0 ^ uRam00000001831267f0;
  uRam00000001831267e8 = 0xcdd1d768;
  uVar6 = (uRam0000000183126770 ^ _UNK_1807f52f0) + uRam00000001831268e8 + 0x49f3f44d;
  uVar9 = (uRam00000001831268e8 ^ _UNK_1807f52f8) + uRam0000000183126770 + 0x322e4900;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183126770 ^ _UNK_1807f52f0;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831268e8 ^ _UNK_1807f52f8;
  uRam0000000183126830 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183126770 + 0x322e4900) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831268e8 + 0x49f3f44d));
  uRam0000000183126750 = uRam00000001831267a8 ^ uRam00000001831267f0 ^ 0x100002068;
  uRam00000001831268f8 =
       (uRam00000001831268f8 ^ uRam00000001831267f0) + 0x100002068 ^ 0xc5a4b652e06fa228;
  uRam0000000183126700 =
       (uRam0000000183126700 * -0x68dcad28a85aef9b ^ uRam00000001831268f8) + uRam00000001831267f0;
  uRam0000000183126850 = uRam0000000183126700 ^ uRam00000001831268f8;
  uRam00000001831267e0 = 0x2068;
  uRam0000000183126870 = func_0x0001862ed9f0(uRam00000001831267f8 + 0x51ff9838ff5fff ^ 0xa1);
  uVar6 = uRam0000000183126870 << 0x2e | (uRam0000000183126870 & 0x7fffffffffffff) >> 0x12;
  uRam00000001831267c0 = uRam00000001831267c8 ^ uVar6 ^ 0x1cf7d7df0;
  uRam0000000183126788 = (uRam0000000183126788 ^ uVar6) + 0x1cf7d7df0 ^ 0xe34052ff519f0086;
  uRam0000000183126790 = (uRam0000000183126790 * -0x2f9cb74528aac2e3 ^ uRam0000000183126788) + uVar6
  ;
  uRam0000000183126868 = uRam0000000183126790 ^ uRam0000000183126788;
  uRam00000001831268f0 = 0xcf7d7df0;
  uVar6 = (uRam0000000183126740 ^ _UNK_1807f5300) + uRam00000001831267f8 + 0x51ddd4cb;
  uVar9 = (uRam00000001831267f8 ^ _UNK_1807f5308) + uRam0000000183126740 + 0xf97d8602;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183126740 ^ _UNK_1807f5300;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831267f8 ^ _UNK_1807f5308;
  uRam0000000183126818 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183126740 + 0xf97d8602) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831267f8 + 0x51ddd4cb));
  uVar6 = uRam0000000183126818 ^ 0xd08ee62834fc83dc;
  uVar9 = uVar6 >> 1 | uVar6;
  uVar9 = uVar9 >> 2 | uVar9;
  uVar9 = uVar9 >> 4 | uVar9;
  uVar9 = uVar9 >> 8 | uVar9;
  uVar9 = uVar9 >> 0x10 | uVar9;
  uVar9 = uVar9 >> 0x20 | uVar9;
  uVar9 = uVar9 - (uVar9 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar6;
  uRam00000001831268b0 = (uRam00000001831268b0 ^ uVar6) + 0x2c8271ec ^ 0x455b316f6c637ae2;
  uRam0000000183126888 = (uRam0000000183126888 * -0x2a6043a82ce6a361 ^ uRam00000001831268b0) + uVar6
  ;
  uRam0000000183126800 = uRam0000000183126888 ^ uRam00000001831268b0;
  uRam00000001831268e8 = 0x2c8271ec;
  uRam00000001831267e0 = func_0x0001862ed9f0(uRam00000001831268b8 + 0x2dff67b7009fff ^ 0x38);
  uVar6 = uRam00000001831267e0 ^ 0xd08ee62834fc83dc;
  uVar9 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar9 = (uVar9 & 0x3333333333333333) + (uVar9 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar9 >> 4) + uVar9 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar6 = (uint)bVar1 + (uint)bVar1 ^ uVar6;
  uRam0000000183126728 = (uRam0000000183126728 ^ uVar6) + 0xd17d8602 ^ 0x1ef4239f66cd73a2;
  uRam0000000183126740 = (uRam0000000183126740 * 0x83ab404595c58b3 ^ uRam0000000183126728) + uVar6;
  uRam00000001831268e0 = uRam0000000183126740 ^ uRam0000000183126728;
  uRam0000000183126720 = 0xd17d8602;
  uVar6 = (uRam0000000183126830 ^ _UNK_1807f5310) + uRam00000001831268c0 + 0xa8a052c9;
  uVar9 = (uRam00000001831268c0 ^ _UNK_1807f5318) + uRam0000000183126830 + 0xa2fb0c04;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183126830 ^ _UNK_1807f5310;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ uRam00000001831268c0 ^ _UNK_1807f5318;
  uRam0000000183126768 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183126830 + 0xa2fb0c04) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831268c0 + 0xa8a052c9));
  uVar6 = ((uRam0000000183126768 ^ 0xaefb7dec) << 0x2b | (uRam0000000183126768 ^ 0xaefb7dec) >> 0x15
          ) ^ 0x2c8271ec;
  uRam0000000183126848 =
       (uRam00000001831268e8 ^ uVar6 ^ 0xcf7d7df0 ^ uVar6) + 0xcf7d7df0 ^ 0xf23e40420ecf4d06;
  uRam00000001831268c0 = (uRam00000001831268c0 * 0x2e404510a7f993cd ^ uRam0000000183126848) + uVar6;
  uRam0000000183126810 = uRam00000001831268c0 ^ uRam0000000183126848;
  uRam00000001831268a8 = 0xcf7d7df0;
  uRam0000000183126830 = func_0x0001862ed9f0(uRam0000000183126828 ^ 0x230083dd001dc8);
  uVar6 = uRam0000000183126830 - (uRam0000000183126830 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uRam0000000183126880 =
       ((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38 ^ uRam0000000183126830
  ;
  uRam00000001831267f0 = uRam00000001831267f0 ^ uRam0000000183126880 ^ 0xc4aca4426ebf1d48;
  uRam00000001831268b8 =
       (uRam00000001831268b8 * -0x3635ad7f979cbdb7 ^ uRam00000001831267f0) + uRam0000000183126880;
  uRam00000001831267c8 = uRam00000001831268b8 ^ uRam00000001831267f0;
  uRam0000000183126758 = 0;
  uVar6 = (uRam0000000183126888 ^ 0x8422034d) + uRam00000001831268a8 + 0x8422034d;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183126888 ^ 0x8422034d;
  uVar9 = ((uRam00000001831268a8 + uRam0000000183126888) * 0x2000 |
          uRam00000001831268a8 + uRam0000000183126888 >> 0x33) ^ uRam00000001831268a8;
  uRam0000000183126860 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) - uRam0000000183126888 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001831268a8 + 0x8422034d));
  uRam0000000183126798 = uRam0000000183126740 ^ uRam0000000183126860 ^ 0x2068;
  uRam00000001831268f8 = (uRam00000001831268f8 ^ uRam0000000183126860) + 0x2068 ^ 0x2e0522fb326a0f8d
  ;
  uRam0000000183126860 =
       (uRam0000000183126860 * -0x55767ae2e02a0ea7 ^ uRam00000001831268f8) + uRam0000000183126860;
  uRam0000000183126760 = uRam0000000183126860 ^ uRam00000001831268f8;
  uRam0000000183126738 = 0x2068;
  uRam0000000183126888 = func_0x0001862ed9f0(uRam0000000183126790 + 0x1900a6340021ff ^ 0x13);
  uVar6 = (ulonglong)(~(uint)uRam0000000183126888 & 0xd5fff7ee);
  uRam00000001831268e0 = (uRam00000001831268e0 ^ uVar6) + 0x2a000811 ^ 0x1b2acef0b2f8762d;
  uRam00000001831268b0 = (uRam00000001831268b0 * -0x5646ca6c01c1344f ^ uRam00000001831268e0) + uVar6
  ;
  uRam00000001831267a0 = uRam00000001831268b0 ^ uRam00000001831268e0;
  uRam0000000183126740 = 0x2a000811;
  uVar6 = (uRam0000000183126870 ^ _UNK_1807f5320) + 0x7bdddcdc;
  uVar9 = (_UNK_1807f5328 ^ 0x2a000811) + uRam0000000183126870 + 0x2a000811;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam0000000183126870 ^ _UNK_1807f5320;
  uVar9 = (uVar9 * 0x2000 | uVar9 >> 0x33) ^ _UNK_1807f5328 ^ 0x2a000811;
  uRam00000001831268f0 =
       func_0x0001862ed9f0((uVar9 << 0x1d | uVar9 >> 0x23) - (uRam0000000183126870 + 0x2a000811) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - 0x7bdddcdc);
  uRam0000000183126760 =
       uRam0000000183126760 ^ uRam00000001831268f0 ^ 0xd5fff7ee ^ 0x3aaf8da75ce8a37e;
  uRam0000000183126808 =
       (uRam0000000183126808 * 0x7670115df4947265 ^ uRam0000000183126760) +
       (uRam00000001831268f0 ^ 0xd5fff7ee);
  uRam0000000183126810 = uRam0000000183126808 ^ uRam0000000183126760;
  uRam00000001831267e0 = uRam0000000183126818;
  uRam0000000183126878 = 0;
  uRam00000001831268d0 = func_0x0001862ed9f0(uRam0000000183126888 ^ 0xfffeff7c4affe183);
  uVar6 = uRam00000001831268d0 & 0x7fffffffffffffff;
  uRam0000000183126730 = uRam00000001831267c8 ^ uVar6 ^ 0x2068;
  uRam0000000183126898 = (uRam0000000183126898 ^ uVar6) + 0x2068 ^ 0x2f1dfd0b9c7a02cd;
  uRam0000000183126860 = (uRam0000000183126860 * -0x50a8829639e6ade9 ^ uRam0000000183126898) + uVar6
  ;
  uRam0000000183126700 = uRam0000000183126860 ^ uRam0000000183126898;
  uRam0000000183126888 = 0x2068;
  uRam0000000183126890 = func_0x0001862ed9f0(uRam0000000183126830 + 0xffdd008422ffddff ^ 0x50);
  uVar6 = uRam0000000183126890 * -0x913926da87cf3f3 ^ 0x41bcf6c2;
  uRam00000001831268c8 = uRam00000001831268c8 ^ uVar6 ^ 0xa96d488ad0369821;
  uRam0000000183126738 = (uRam0000000183126738 * -0x7d3346d02b5d242d ^ uRam00000001831268c8) + uVar6
  ;
  uRam0000000183126760 = uRam0000000183126738 ^ uRam00000001831268c8;
  uRam00000001831267d0 = 0;
  uVar6 = ((uRam0000000183126770 ^ 0x8422034d) +
          (ulonglong)((uint)uRam0000000183126770 & 0x8422034d) * 2) * -uRam0000000183126890;
  uVar6 = (uVar6 | uRam0000000183126880) + (uVar6 & uRam0000000183126880);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam0000000183126808 =
       func_0x0001862ed9f0((uVar6 | 0x8422034d) + (ulonglong)((uint)uVar6 & 0x8422034d));
  uRam00000001831267d0 = uRam0000000183126818 ^ uRam0000000183126808 ^ 0x2068;
  uRam0000000183126748 = (uRam0000000183126748 ^ uRam0000000183126808) + 0x2068 ^ 0xc46b18a0f3493496
  ;
  uRam0000000183126750 =
       (uRam0000000183126750 * 0x751354a74f8c6d5f ^ uRam0000000183126748) + uRam0000000183126808;
  uRam00000001831267a0 = uRam0000000183126750 ^ uRam0000000183126748;
  uVar9 = (ulonglong)param_3;
  auVar7._8_8_ = _UNK_1807f5338;
  auVar7._0_8_ = uVar9 ^ 0x84222325;
  auVar8 = pshufb(auVar7 ^ _UNK_1807f5340,_UNK_1800170c0);
  uRam0000000183126738 = 0x2068;
  uVar4 = auVar8._8_8_ + auVar8._0_8_;
  uVar6 = uVar4 + uRam0000000183126748;
  if (auVar8._4_4_ < 0) {
    uVar6 = uRam0000000183126878 ^ uVar4;
  }
  uRam00000001831268e8 = func_0x0001862ed9f0(SUB161(auVar7 ^ _UNK_1807f5340,5) ^ uVar6);
  uVar6 = (uVar9 | 0x2068) ^ uRam00000001831268e8;
  uVar6 = uVar9 ^ (uVar6 << 0x23 | uVar6 >> 0x1d);
  lVar5 = uVar9 - (param_3 & 0x2068) * 2;
  uRam00000001831268b0 = (uRam00000001831268b0 ^ uVar6) + lVar5 + 0x2068 ^ 0x7f416d55ef1fbc80;
  uRam0000000183126850 = (uRam0000000183126850 * 0x74d394fdb151c311 ^ uRam00000001831268b0) + uVar6;
  uRam0000000183126860 = uRam0000000183126850 ^ uRam00000001831268b0;
  uRam0000000183126750 = lVar5 + 0x2068U & 0xffffffff;
  FUN_190dd72e0(param_1,*plRam000000018301ee50 + 0xc8c3,0x221);
  cVar2 = (**(code **)(*param_1 + 0x720))(param_1);
                    /* WARNING: Jumptable at 0x0001862e4bc5 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1807f3420 + (ulonglong)(cVar2 == '\0') * 8))();
  return;
}



