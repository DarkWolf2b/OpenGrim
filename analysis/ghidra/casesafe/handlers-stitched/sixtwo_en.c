// ===== STITCHED CORPUS: sixtwo.en =====
// handlers: 7  continuation blocks: 66  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x2168370', '0x2168378', '0x2168380', '0x2168388', '0x2168390', '0x2168398', '0x21683a0', '0x21683a8', '0x21683b0', '0x21683b8', '0x21683c0', '0x21683c8', '0x21683d0', '0x21683d8', '0x21683e0', '0x21683f0', '0x2168400', '0x2168408', '0x2168418']

// ===== Lsixtwo/en; _d1779fc2e4e3d22bd315c72dfeecf1c8 ()V (handler @ image 18d184470, runtime 6ffff4d94470) =====

void FUN_18d184470(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d184558 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182169b58 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/en; aaj ()V (handler @ image 18d0135a0, runtime 6ffff4c235a0) =====

void FUN_18d0135a0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd0d7,0x240)
      /* POOL[0xd0d7,0x240]: BkK | atm | field_6017 | method_11312 | sixtwo/en | XGcHI | cPtuD | kpGmO | atq | net/minecraft/class_2846 | net/minecraft/class_2846$class_2847 | field_12971 | Lnet/minecraft/class_2846$class_2847; | (III)V | (Lnet/minecraft/class_2846$class_2847;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)V | BCAKr | VqNdz | pFvmE | atr | sixtwo/eo | tIzmy | atT | method_3144 | lKIKk | method_6058 | net/minecraft/class_2868 | DVCYL | method_6048 | net/minecraft/class_2596 | net/minecraft/class_7204 | field_3913 | Lnet/minecraft/class_744; | bAo | (Lnet/minecraft/class_7204;)V | net/minecraft/class_7 */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d013652 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_1821138e8 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/en; atp ()V (handler @ image 18d165410, runtime 6ffff4d75410) =====

void FUN_18d165410(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd0d7,0x240)
      /* POOL[0xd0d7,0x240]: BkK | atm | field_6017 | method_11312 | sixtwo/en | XGcHI | cPtuD | kpGmO | atq | net/minecraft/class_2846 | net/minecraft/class_2846$class_2847 | field_12971 | Lnet/minecraft/class_2846$class_2847; | (III)V | (Lnet/minecraft/class_2846$class_2847;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)V | BCAKr | VqNdz | pFvmE | atr | sixtwo/eo | tIzmy | atT | method_3144 | lKIKk | method_6058 | net/minecraft/class_2868 | DVCYL | method_6048 | net/minecraft/class_2596 | net/minecraft/class_7204 | field_3913 | Lnet/minecraft/class_744; | bAo | (Lnet/minecraft/class_7204;)V | net/minecraft/class_7 */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1654ec did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182161900 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/en; atq (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18d1755a0, runtime 6ffff4d855a0) =====

undefined8 FUN_18d1755a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}




// ===== Lsixtwo/en; atr (IJ)I (handler @ image 18d175630, runtime 6ffff4d85630) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d175630(longlong *param_1,undefined8 param_2,uint param_3,uint param_4)

{
  char cVar1;
  ulonglong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  
  uVar5 = (uRam000000018334c188 ^ _UNK_182168370) + uRam000000018334c2f0 + 0xd61e25041f802996;
  uVar6 = (uRam000000018334c2f0 ^ _UNK_182168378) + uRam000000018334c188 + 0xb562524f1576b819;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334c188 ^ _UNK_182168370;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018334c2f0 ^ _UNK_182168378;
  uRam000000018334c050 =
       func_0x00018d1806c0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018334c188 + 0xb562524f1576b819) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334c2f0 + 0xd61e25041f802996));
  uRam000000018334c450 =
       (uRam000000018334c450 ^ uRam000000018334c050 ^ 0x4c7bbd1ad3a7b9c8) + 0xf77e774f9ff6babb ^
       0x486e9920959f369f;
  uRam000000018334c128 =
       (uRam000000018334c128 * -0x5c3bf6243e4f0eef ^ uRam000000018334c450) +
       (uRam000000018334c050 ^ 0x4c7bbd1ad3a7b9c8);
  uRam000000018334c0e0 = uRam000000018334c128 ^ uRam000000018334c450;
  uRam000000018334bf10 = 0xf77e774f9ff6babb;
  uVar5 = (uRam000000018334c140 ^ _UNK_182168380) + uRam000000018334c148 + 0x68e551afaf9e97ea;
  uVar6 = (uRam000000018334c148 ^ _UNK_182168388) + uRam000000018334c140 + 0xfe1b910bb4232dd;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334c140 ^ _UNK_182168380;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018334c148 ^ _UNK_182168388;
  uRam000000018334c368 =
       func_0x00018d1806c0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018334c140 + 0xfe1b910bb4232dd) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334c148 + 0x68e551afaf9e97ea));
  uVar5 = (uRam000000018334c368 ^ 0x6fe5f9bfbbfeb6df) << 0x2b |
          (uRam000000018334c368 ^ 0x6fe5f9bfbbfeb6df) >> 0x15;
  uRam000000018334c3e0 = (uRam000000018334c3e0 ^ uVar5) + 0x6704e8bf90fe8612 ^ 0x8c7f09735971269b;
  uRam000000018334c4f8 = (uRam000000018334c4f8 * 0x76590b939d9e055d ^ uRam000000018334c3e0) + uVar5;
  uRam000000018334c2d0 = uRam000000018334c4f8 ^ uRam000000018334c3e0;
  uRam000000018334c3d8 = 0x6704e8bf90fe8612;
  uVar5 = (uRam000000018334bf10 ^ _UNK_182168390) + uRam000000018334c290 + 0x84222325;
  uVar6 = (uRam000000018334c290 ^ _UNK_182168398) + uRam000000018334bf10 + 0xc89904d449761734;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334bf10 ^ _UNK_182168390;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018334c290 ^ _UNK_182168398;
  uRam000000018334c090 =
       func_0x00018d1806c0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018334bf10 + 0xc89904d449761734) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334c290 + 0x84222325));
  uVar5 = uRam000000018334c090 << 2 | uRam000000018334c090 >> 0x3e;
  uRam000000018334c078 = (uRam000000018334c078 ^ uVar5) + 0x3766fb2bb689e8cc ^ 0x23c7a383cf7a5bb6;
  uRam000000018334c570 = (uRam000000018334c570 * 0x49763429238448d1 ^ uRam000000018334c078) + uVar5;
  uRam000000018334c5a0 = uRam000000018334c570 ^ uRam000000018334c078;
  uRam000000018334c588 = 0x3766fb2bb689e8cc;
  uVar5 = (~uRam000000018334c130 + 0x3766fb2bb689e8cd) *
          ((uRam000000018334c618 ^ 0xc89904d4cd54b416) +
          (uRam000000018334c618 & 0x489904d4cd54b416) * 2);
  uVar5 = (uVar5 | uRam000000018334c048) + (uVar5 & uRam000000018334c048);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334bf28 =
       func_0x00018d1806c0((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = uRam000000018334bf28 & 0x104d449769733;
  uRam000000018334c100 = uRam000000018334c308 ^ uVar5 ^ 0x7fff;
  uRam000000018334c020 = (uRam000000018334c020 ^ uVar5) + 0x7fff ^ 0x6b9ce1dd5384ef4b;
  uRam000000018334c2f8 = (uRam000000018334c2f8 * -0x65920853fd7a1903 ^ uRam000000018334c020) + uVar5
  ;
  uRam000000018334c360 = uRam000000018334c2f8 ^ uRam000000018334c020;
  uRam000000018334bf38 = 0x7fff;
  uRam000000018334c360 = func_0x00018d1806c0(lRam000000018334c500 + 0xd4df6063d8ed58f0U ^ 0x34);
  uRam000000018334c130 =
       (uRam000000018334c130 ^ uRam000000018334c480) + 0xec588c22d8b4a334 ^ 0xb2c93b334d67aadf;
  uRam000000018334c3b8 =
       (uRam000000018334c3b8 * -0x758caded2e5808e5 ^ uRam000000018334c130) + uRam000000018334c480;
  uRam000000018334c388 = uRam000000018334c3b8 ^ uRam000000018334c130;
  uRam000000018334c180 = 0xec588c22d8b4a334;
  uVar5 = (~uRam000000018334bf88 + 0xec588c22d8b4a335) *
          ((uRam000000018334c2c0 ^ 0x13a773dda369ffee) +
          (uRam000000018334c2c0 & 0x13a773dda369ffee) * 2);
  uVar5 = (uVar5 | uRam000000018334c440) + (uVar5 & uRam000000018334c440);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c018 =
       func_0x00018d1806c0((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = ((uRam000000018334c018 ^ 0x6c0b5389cfba1a3c) & 0x7fffffffffffffff) * -0x6af70fb20880c47f;
  uRam000000018334c2a8 = uRam000000018334c1b0 ^ uVar5 ^ 0x7fff;
  uRam000000018334bfd8 = (uRam000000018334bfd8 ^ uVar5) + 0x7fff ^ 0x48d3999b95ccd4ad;
  uRam000000018334c008 = (uRam000000018334c008 * 0x673796377c122e69 ^ uRam000000018334bfd8) + uVar5;
  uRam000000018334c180 = uRam000000018334c008 ^ uRam000000018334bfd8;
  uRam000000018334c350 = 0x7fff;
  uVar5 = (~uRam000000018334c1a0 + 0x3a3d14a6cca0657) *
          ((uRam000000018334c050 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018334c050 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018334c398) + (uVar5 & uRam000000018334c398);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c2c8 =
       func_0x00018d1806c0((uVar5 | 0x3a3d14ae8e82573) + (uVar5 & 0x3a3d14ae8e82573));
  uVar5 = (uRam000000018334c2c8 ^ 0x3a3d14a6cca0656) << 0x31 |
          (uRam000000018334c2c8 ^ 0x3a3d14a6cca0656) >> 0xf;
  uRam000000018334c548 = (uRam000000018334c548 ^ uVar5) + 0xfc5c2eb59335f9aa ^ 0x31958df4788af57;
  uRam000000018334c0a8 = (uRam000000018334c0a8 * 0x4de6c79f93208ccf ^ uRam000000018334c548) + uVar5;
  uRam000000018334c200 = uRam000000018334c0a8 ^ uRam000000018334c548;
  uRam000000018334c208 = 0xfc5c2eb59335f9aa;
  uVar5 = (~uRam000000018334c668 + 0x3a3d14a6cca0657) *
          ((uRam000000018334bf08 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018334bf08 & 0x84225cda) * 2);
  uVar5 = (uVar5 | uRam000000018334c670) + (uVar5 & uRam000000018334c670);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334bf38 =
       func_0x00018d1806c0((uVar5 | 0x3a3d14ae8e85a8c) + (uVar5 & 0x3a3d14ae8e85a8c));
  uVar5 = (ulonglong)(~(uint)uRam000000018334bf38 & 0x7fff);
  uRam000000018334bf70 = uRam000000018334c380 ^ uVar5 ^ 0x3a3d14a6cca8655;
  uRam000000018334c5c0 = (uRam000000018334c5c0 ^ uVar5) + 0x3a3d14a6cca8655 ^ 0x77a63cd91a57c9e;
  uRam000000018334c520 = (uRam000000018334c520 * -0x3199d34b7c21fc19 ^ uRam000000018334c5c0) + uVar5
  ;
  uRam000000018334c6a0 = uRam000000018334c520 ^ uRam000000018334c5c0;
  uRam000000018334bf80 = uRam000000018334c0b8 ^ 0x3a3d14a6cca8655;
  uRam000000018334c490 = 0x3a3d14a6cca8655;
  uVar5 = (~uRam000000018334bf48 + 0xfc5c2eb59335f9ab) *
          ((uRam000000018334c0d8 ^ 0x3a3d14ae8e8a570) +
          (uRam000000018334c0d8 & 0x3a3d14ae8e8a570) * 2);
  uVar5 = (uVar5 | uRam000000018334c480) + (uVar5 & uRam000000018334c480);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c058 =
       func_0x00018d1806c0((uVar5 | 0xffffffff7bdd5cda) + (uVar5 & 0xffffffff7bdd5cda));
  uVar5 = ~uRam000000018334c058 & 0x3a3d14a6cca8655;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uVar5;
  uRam000000018334c390 = uRam000000018334c1e8 ^ uVar5 ^ 0x7fff;
  uRam000000018334c128 = (uRam000000018334c128 ^ uVar5) + 0x7fff ^ 0x78571ccc19a91fc0;
  uRam000000018334c1c0 = (uRam000000018334c1c0 * 0x7fb4e1b7d56667bb ^ uRam000000018334c128) + uVar5;
  uRam000000018334c0f8 = uRam000000018334c1c0 ^ uRam000000018334c128;
  uRam000000018334bf00 = 0x7fff;
  uVar5 = func_0x00018d1806c0(uRam000000018334c6f8 ^ 0x2fee89857c7b2a22);
  uRam000000018334c140 = uRam000000018334bf98 ^ uVar5 ^ 0x5e83600f30f540cd;
  uRam000000018334c470 = (uRam000000018334c470 ^ uVar5) + 0x5e83600f30f540cd ^ 0xff039d3bb6e42fd6;
  uRam000000018334c3e0 = (uRam000000018334c3e0 * 0x6c5697863a9eea87 ^ uRam000000018334c470) + uVar5;
  uRam000000018334bfe8 = uRam000000018334c3e0 ^ uRam000000018334c470;
  uRam000000018334c338 = 0x5e83600f30f540cd;
  uVar5 = (uRam000000018334c458 ^ _UNK_1821683a0) + uRam000000018334c250 + 0xf77e774f1bd4999e;
  uVar6 = (uRam000000018334c250 ^ _UNK_1821683a8) + uRam000000018334c458 + 0x6704e8bf90fe8612;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334c458 ^ _UNK_1821683a0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018334c250 ^ _UNK_1821683a8;
  uRam000000018334c100 =
       func_0x00018d1806c0((uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam000000018334c458 + 0x6704e8bf90fe8612) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) -
                           (uRam000000018334c250 + 0xf77e774f1bd4999e));
  uVar5 = (uRam000000018334c100 ^ 0xf77effff9ffebebb) * -0x18cbbca046b4acbd;
  uRam000000018334c070 = (uRam000000018334c070 ^ uVar5) + 0x6704600f90f68212 ^ 0x1c43e5af29931834;
  uRam000000018334c248 = (uRam000000018334c248 * 0x2ce1b1e2fd88f013 ^ uRam000000018334c070) + uVar5;
  uRam000000018334c5a0 = uRam000000018334c248 ^ uRam000000018334c070;
  uRam000000018334c4c8 = 0x6704600f90f68212;
  uRam000000018334c3e8 = func_0x00018d1806c0(uRam000000018334c520 + 0x22f4f2a6a7c3b8ad ^ 0x91);
  uVar5 = (uRam000000018334c3e8 ^ 0x1250e72f902bc4) & 0x1fffffffffffff;
  uRam000000018334c2a0 = uRam000000018334c2f0 ^ uVar5 ^ 0x5e83600f30f540cd;
  uRam000000018334bff8 = (uRam000000018334bff8 ^ uVar5) + 0x5e83600f30f540cd ^ 0x26d855909233209;
  uRam000000018334c220 = (uRam000000018334c220 * -0x28abebea07e2ae35 ^ uRam000000018334bff8) + uVar5
  ;
  uRam000000018334c460 = uRam000000018334c220 ^ uRam000000018334bff8;
  uRam000000018334bf68 = 0x5e83600f30f540cd;
  uRam000000018334bf70 = func_0x00018d1806c0(uRam000000018334bfe8 ^ 0x902581241f87d67a);
  uRam000000018334c320 =
       (uRam000000018334c320 ^ uRam000000018334bf70 ^ 0x88188b060094544) + 0x88188b060094544 ^
       0x4e276816dbade490;
  uRam000000018334c6a8 =
       (uRam000000018334c6a8 * -0x2d03289a8e626639 ^ uRam000000018334c320) +
       (uRam000000018334bf70 ^ 0x88188b060094544);
  uRam000000018334c400 = uRam000000018334c6a8 ^ uRam000000018334c320;
  uRam000000018334c1a0 = 0x88188b060094544;
  uVar5 = (uRam000000018334c548 ^ 0x84225cda) + uRam000000018334c2f8 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334c548 ^ 0x84225cda;
  uVar6 = ((uRam000000018334c2f8 + uRam000000018334c548) * 0x2000 |
          uRam000000018334c2f8 + uRam000000018334c548 >> 0x33) ^ uRam000000018334c2f8;
  uRam000000018334c600 =
       func_0x00018d1806c0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam000000018334c548 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334c2f8 + 0x84225cda));
  uVar5 = uRam000000018334c600 ^ 0x7fff;
  uRam000000018334c338 = uRam000000018334c5c0 ^ uVar5 ^ 0x7fff;
  uRam000000018334c0b8 = (uRam000000018334c0b8 ^ uVar5) + 0x7fff ^ 0x86b2e57fae105f0c;
  uRam000000018334c530 = (uRam000000018334c530 * 0x2298bac5f905d731 ^ uRam000000018334c0b8) + uVar5;
  uRam000000018334c2c8 = uRam000000018334c530 ^ uRam000000018334c0b8;
  uRam000000018334c5a0 = 0x7fff;
  uVar5 = (~uRam000000018334c698 + 0xd61e25049ba20ab4) *
          ((uRam000000018334bf18 ^ 0xd61e25041f802996) +
          (uRam000000018334bf18 & 0x561e25041f802996) * 2);
  uVar5 = (uVar5 | uRam000000018334c5e8) + (uVar5 & uRam000000018334c5e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c150 =
       func_0x00018d1806c0((uVar5 | 0x84222325) + (ulonglong)((uint)uVar5 & 0x84222325));
  uVar5 = (uRam000000018334c150 ^ 0xd61e25049ba20000) & 0xffffffffffffc000;
  uRam000000018334c378 = uRam000000018334c378 ^ uVar5 ^ 0x42664e239fb73c39;
  uRam000000018334c310 = (uRam000000018334c310 * 0x8f344690d928ac1 ^ uRam000000018334c378) + uVar5;
  uRam000000018334c6b8 = uRam000000018334c310 ^ uRam000000018334c378;
  uRam000000018334c208 = 0;
  uVar5 = (uRam000000018334c4d8 ^ 0x84225cda) + uRam000000018334c1d0 + 0x84225cda;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334c4d8 ^ 0x84225cda;
  uVar6 = ((uRam000000018334c1d0 + uRam000000018334c4d8) * 0x2000 |
          uRam000000018334c1d0 + uRam000000018334c4d8 >> 0x33) ^ uRam000000018334c1d0;
  uRam000000018334c688 =
       func_0x00018d1806c0((uVar6 << 0x1d | uVar6 >> 0x23) - uRam000000018334c4d8 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334c1d0 + 0x84225cda));
  uVar5 = uRam000000018334c688 - (uRam000000018334c688 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 7 ^
          uRam000000018334c688;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar6;
  uRam000000018334bfe8 =
       (uRam000000018334c690 ^ uVar6 ^ 0x7fff ^ uVar6) + 0x7fff ^ 0x70018d4298e64300;
  uRam000000018334bf70 = (uRam000000018334bf70 * -0x242c1a0481d2dfc5 ^ uRam000000018334bfe8) + uVar6
  ;
  uRam000000018334c420 = uRam000000018334bf70 ^ uRam000000018334bfe8;
  uRam000000018334c5a8 = 0x7fff;
  uVar5 = (~uRam000000018334c198 + 0x7b42a158) *
          ((uRam000000018334c108 ^ 0xeeccf62f) +
          (ulonglong)((uint)uRam000000018334c108 & 0xeeccf62f) * 2);
  uVar5 = (uVar5 | uRam000000018334c428) + (uVar5 & uRam000000018334c428);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c438 =
       func_0x00018d1806c0((uVar5 | 0x958e5778) + (ulonglong)((uint)uVar5 & 0x958e5778));
  uRam000000018334c300 =
       (uRam000000018334c300 ^ uRam000000018334c438 ^ 0x6aeed50a) + 0x7beef55f ^ 0x2abefc5a74f9e610;
  uRam000000018334c2f0 =
       (uRam000000018334c2f0 * -0x3335fe7436611777 ^ uRam000000018334c300) +
       (uRam000000018334c438 ^ 0x6aeed50a);
  uRam000000018334c068 = uRam000000018334c2f0 ^ uRam000000018334c300;
  uRam000000018334c2c8 = 0x7beef55f;
  uVar5 = (~uRam000000018334c360 + 0x6848897f) *
          ((uRam000000018334c640 ^ 0x6e6ffec7) +
          (ulonglong)((uint)uRam000000018334c640 & 0x6e6ffec7) * 2);
  uVar5 = (uVar5 | uRam000000018334bf40) + (uVar5 & uRam000000018334bf40);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c258 =
       func_0x00018d1806c0((uVar5 | 0x62777b9) + (ulonglong)((uint)uVar5 & 0x62777b9));
  uVar5 = (uRam000000018334c258 ^ 0x5f7205e135a1273c) << 0x36 |
          (uRam000000018334c258 ^ 0x5f7205e135a1273c) >> 10;
  uRam000000018334c060 = (uRam000000018334c060 ^ uVar5) + 0x8205549c ^ 0xbdbee3c7fd4c7c99;
  uRam000000018334c580 = (uRam000000018334c580 * -0x2e0658531dfa0bbb ^ uRam000000018334c060) + uVar5
  ;
  uRam000000018334c2a8 = uRam000000018334c580 ^ uRam000000018334c060;
  uRam000000018334c5b0 = 0x8205549c;
  uVar5 = (~uRam000000018334c4e0 + 0x2757265) *
          ((uRam000000018334c290 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018334c290 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018334c208) + (uVar5 & uRam000000018334c208);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c280 =
       func_0x00018d1806c0((uVar5 | 0x86575141) + (ulonglong)((uint)uVar5 & 0x86575141));
  uRam000000018334c5c0 =
       (uRam000000018334c5c0 ^ uRam000000018334c280 ^ 0x2757264) - 0x2757264 ^ 0x51b52859e61ffb7f;
  uRam000000018334c208 =
       (uRam000000018334c208 * 0x444d433ff9e72947 ^ uRam000000018334c5c0) +
       (uRam000000018334c280 ^ 0x2757264);
  uRam000000018334c230 = uRam000000018334c208 ^ uRam000000018334c5c0;
  uRam000000018334c220 = 0xfd8a8d9c;
  uRam000000018334c0d0 = func_0x00018d1806c0(lRam000000018334c170 + 0x6ff81530056ffU ^ 0x19);
  uVar5 = (uRam000000018334c0d0 ^ 0x649e251430) >> 2 | uRam000000018334c0d0 << 0x3e;
  uRam000000018334bfa0 = uRam000000018334c028 ^ uVar5 ^ 0x2759b50;
  uRam000000018334c658 = (uRam000000018334c658 ^ uVar5) + 0x2759b50 ^ 0x93bc1801c78e55ba;
  uRam000000018334c0e0 = (uRam000000018334c0e0 * -0x793346587999090f ^ uRam000000018334c658) + uVar5
  ;
  uRam000000018334c040 = uRam000000018334c0e0 ^ uRam000000018334c658;
  uRam000000018334c2e0 = 0x2759b50;
  uVar5 = (uRam000000018334bfd0 ^ _UNK_1821683b0) + uRam000000018334c050 + 0x8657b875;
  uVar6 = (uRam000000018334c050 ^ _UNK_1821683b8) + uRam000000018334bfd0 + 0xfd8a8d9c;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334bfd0 ^ _UNK_1821683b0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018334c050 ^ _UNK_1821683b8;
  uRam000000018334c4d8 =
       func_0x00018d1806c0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018334bfd0 + 0xfd8a8d9c) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334c050 + 0x8657b875));
  uRam000000018334c298 = uRam000000018334c428 ^ uRam000000018334c278 ^ 0x1000028ec;
  uRam000000018334c030 =
       (uRam000000018334c030 ^ uRam000000018334c278) + 0x1000028ec ^ 0xea3d9ee568aae25c;
  uRam000000018334c420 =
       (uRam000000018334c420 * -0x491b4665ecced121 ^ uRam000000018334c030) + uRam000000018334c278;
  uRam000000018334c198 = uRam000000018334c420 ^ uRam000000018334c030;
  uRam000000018334c200 = 0x28ec;
  uVar5 = (~uRam000000018334c168 + 0x9afe0885) *
          ((uRam000000018334c578 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018334c578 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018334c4a8) + (uVar5 & uRam000000018334c4a8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c038 =
       func_0x00018d1806c0((uVar5 | 0x1edc2ba1) + (ulonglong)((uint)uVar5 & 0x1edc2ba1));
  uVar5 = uRam000000018334c038 << 0x3a | uRam000000018334c038 >> 6;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar5) * 0x345b459c7f8891bd;
  uRam000000018334c1e8 = (uRam000000018334c1e8 ^ uVar5) - 0x9afe0884 ^ 0x252b39b74dc24c66;
  uRam000000018334c3c8 = (uRam000000018334c3c8 * -0x683f6d6d9ccf5167 ^ uRam000000018334c1e8) + uVar5
  ;
  uRam000000018334c6a8 = uRam000000018334c3c8 ^ uRam000000018334c1e8;
  uRam000000018334c0d8 = 0x6501f77c;
  uVar5 = (~uRam000000018334c310 + 0x9afe0885) *
          ((uRam000000018334c010 ^ 0x84220bc9) +
          (ulonglong)((uint)uRam000000018334c010 & 0x84220bc9) * 2);
  uVar5 = (uVar5 | uRam000000018334c6e8) + (uVar5 & uRam000000018334c6e8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uVar5 = func_0x00018d1806c0((uVar5 | 0x1edc034d) + (ulonglong)((uint)uVar5 & 0x1edc034d));
  uRam000000018334c2d0 = uRam000000018334c1c8 ^ uVar5 ^ 0x9afe3170;
  uRam000000018334c668 = (uRam000000018334c668 ^ uVar5) + 0x9afe3170 ^ 0xe6b36d0daebe97c6;
  uRam000000018334c480 = (uRam000000018334c480 * -0x68c6677b453e3c33 ^ uRam000000018334c668) + uVar5
  ;
  uRam000000018334c1f0 = uRam000000018334c480 ^ uRam000000018334c668;
  uRam000000018334c6a8 = 0x9afe3170;
  uRam000000018334bf48 = func_0x00018d1806c0(uRam000000018334c570 + 0x23001b16ffd4ff ^ 0x8c);
  uVar5 = uRam000000018334bf48 * -0x2041870411324e67;
  uRam000000018334bf30 = uRam000000018334c388 ^ uVar5 ^ 0x1000028ec;
  uRam000000018334c020 = (uRam000000018334c020 ^ uVar5) + 0x1000028ec ^ 0xd19ec08754a1dfce;
  uRam000000018334c0e8 = (uRam000000018334c0e8 * -0x44d97f485d43045f ^ uRam000000018334c020) + uVar5
  ;
  uRam000000018334c148 = uRam000000018334c0e8 ^ uRam000000018334c020;
  uRam000000018334c038 = 0x28ec;
  uVar5 = (~uRam000000018334c150 + 0x8388ea41) *
          ((uRam000000018334c528 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018334c528 & 0x84222325) * 2);
  uVar5 = (uVar5 | uRam000000018334c1d8) + (uVar5 & uRam000000018334c1d8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334bfd8 =
       func_0x00018d1806c0((uVar5 | 0x7aac965) + (ulonglong)((uint)uVar5 & 0x7aac965));
  uVar5 = uRam000000018334bfd8 << 0x22 | uRam000000018334bfd8 >> 0x1e;
  uRam000000018334c268 = (uRam000000018334c268 ^ uVar5) - 0x8388ea40 ^ 0xd5145405e17a00a0;
  uRam000000018334c048 = (uRam000000018334c048 * -0xe784fb01705d571 ^ uRam000000018334c268) + uVar5;
  uRam000000018334c6a8 = uRam000000018334c048 ^ uRam000000018334c268;
  uRam000000018334c108 = 0x7c7715c0;
  uRam000000018334c5b8 = func_0x00018d1806c0(uRam000000018334c160 ^ 0xe1000086ff6909);
  uVar6 = uRam000000018334c5b8 ^ 0x1506a6d1f300;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar5 = ((0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar6) & 0xffffffffffffffc0;
  uRam000000018334c030 = uRam000000018334c4b0 ^ uVar5 ^ 0x8389132c;
  uRam000000018334c5e0 = (uRam000000018334c5e0 ^ uVar5) + 0x8389132c ^ 0xc11896163e8b8137;
  uRam000000018334c160 = (uRam000000018334c160 * 0x633b24a939af574d ^ uRam000000018334c5e0) + uVar5;
  uRam000000018334c4f0 = uRam000000018334c160 ^ uRam000000018334c5e0;
  uRam000000018334c148 = 0x8389132c;
  uVar5 = (uRam000000018334bf28 ^ _UNK_1821683c0) + uRam000000018334c310 + 0x7ab3009;
  uVar6 = (uRam000000018334c310 ^ _UNK_1821683c8) + uRam000000018334bf28 + 0x7c7715c0;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334bf28 ^ _UNK_1821683c0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018334c310 ^ _UNK_1821683c8;
  uRam000000018334c6c8 =
       func_0x00018d1806c0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018334bf28 + 0x7c7715c0) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334c310 + 0x7ab3009));
  uVar5 = (uRam000000018334c6c8 ^ 0x3ff3952e1ed4fd00) & 0x7fffffffffffffff;
  uRam000000018334c4c0 = uRam000000018334c0a8 ^ uVar5 ^ 0x1000028ec;
  uRam000000018334c588 = (uRam000000018334c588 ^ uVar5) + 0x1000028ec ^ 0x63fc879202307568;
  uRam000000018334c658 = (uRam000000018334c658 * 0x396e312f3dd89eb5 ^ uRam000000018334c588) + uVar5;
  uRam000000018334bf18 = uRam000000018334c658 ^ uRam000000018334c588;
  uRam000000018334c2e8 = 0x28ec;
  uVar5 = (~uRam000000018334c038 + 0x408a839) *
          ((uRam000000018334c2c0 ^ 0x7dc982e6) +
          (ulonglong)((uint)uRam000000018334c2c0 & 0x7dc982e6) * 2);
  uVar5 = (uVar5 | uRam000000018334c580) + (uVar5 & uRam000000018334c580);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c558 =
       func_0x00018d1806c0((uVar5 | 0x79c12ade) + (ulonglong)((uint)uVar5 & 0x79c12ade));
  uVar5 = (uRam000000018334c558 ^ 0x3f0221d9e20fb6b) << 0x1b |
          (uRam000000018334c558 ^ 0x3f0221d9e20fb6b) >> 0x25;
  uRam000000018334c4d0 = uRam000000018334c290 ^ uVar5 ^ 0xfdf449fb;
  uRam000000018334c1b8 = (uRam000000018334c1b8 ^ uVar5) + 0xfdf449fb ^ 0xad1da3e5526e9202;
  uRam000000018334c110 = (uRam000000018334c110 * 0x6f6eaf5d0cc3ab47 ^ uRam000000018334c1b8) + uVar5;
  uRam000000018334c300 = uRam000000018334c110 ^ uRam000000018334c1b8;
  uRam000000018334bf20 = 0xfdf449fb;
  uVar5 = (uRam000000018334c050 ^ _UNK_1821683d0) + uRam000000018334c138 + 0x79d66ade;
  uVar6 = (uRam000000018334c138 ^ _UNK_1821683d8) + uRam000000018334c050 + 0xfdf449fb;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uRam000000018334c050 ^ _UNK_1821683d0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018334c138 ^ _UNK_1821683d8;
  uRam000000018334c638 =
       func_0x00018d1806c0((uVar6 << 0x1d | uVar6 >> 0x23) - (uRam000000018334c050 + 0xfdf449fb) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334c138 + 0x79d66ade));
  uVar5 = uRam000000018334c638 ^ 0xfbecc35739d91c19;
  uRam000000018334c3e8 =
       (uVar5 & 0xffffffff) * (_UNK_1821683e0 & 0xffffffff) +
       ((ulonglong)_UNK_1821683f0 * (uVar5 & 0xffffffff) +
        (uVar5 >> 0x20) * (_UNK_1821683e0 & 0xffffffff) << 0x20) & 0x7fffffffffffffff;
  uRam000000018334c0f8 = uRam000000018334c0f8 ^ uRam000000018334c3e8 ^ 0x6f5c00ec2990e526;
  uRam000000018334c1b8 =
       (uRam000000018334c1b8 * 0x77353db4f20f2837 ^ uRam000000018334c0f8) + uRam000000018334c3e8;
  uRam000000018334c628 = uRam000000018334c1b8 ^ uRam000000018334c0f8;
  uRam000000018334c550 = 0;
  uRam000000018334c5b8 = func_0x00018d1806c0(uRam000000018334c448 + 0xfffb0084390021ff ^ 0x68);
  uRam000000018334bff8 = uRam000000018334c180 ^ uRam000000018334c6d8 ^ 0x28ec;
  uRam000000018334c440 = (uRam000000018334c440 ^ uRam000000018334c6d8) + 0x28ec ^ 0x62916654b0be6345
  ;
  uRam000000018334c168 =
       (uRam000000018334c168 * -0x7b6920fd031f1a6f ^ uRam000000018334c440) + uRam000000018334c6d8;
  uRam000000018334c568 = uRam000000018334c168 ^ uRam000000018334c440;
  uRam000000018334c240 = 0x28ec;
  uVar5 = (~uRam000000018334c498 + 0x100000000) *
          ((uRam000000018334bf18 ^ 0xffccd67a) +
          (ulonglong)((uint)uRam000000018334bf18 & 0xffccd67a) * 2);
  uVar5 = (uVar5 | uRam000000018334c4a8) + (uVar5 & uRam000000018334c4a8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c128 =
       func_0x00018d1806c0((uVar5 | 0x332985) + (ulonglong)((uint)uVar5 & 0x332985));
  uRam000000018334c5c0 =
       (uRam000000018334c5c0 ^ uRam000000018334c128) + 0x84110aa0 ^ 0xce897767d4eeea5c;
  uRam000000018334c5c8 =
       (uRam000000018334c5c8 * -0x70d95ed166f1be27 ^ uRam000000018334c5c0) + uRam000000018334c128;
  uRam000000018334c388 = uRam000000018334c5c8 ^ uRam000000018334c5c0;
  uRam000000018334c228 = 0x84110aa0;
  uVar5 = (_UNK_182168400 ^ 0x84110aa0) + uRam000000018334c2c8 + 0xffccd67a;
  uVar6 = (uRam000000018334c2c8 ^ _UNK_182168408) + 0x108221540;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _UNK_182168400 ^ 0x84110aa0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam000000018334c2c8 ^ _UNK_182168408;
  uRam000000018334c5b0 =
       func_0x00018d1806c0((uVar6 << 0x1d | uVar6 >> 0x23) - 0x108221540 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (uRam000000018334c2c8 + 0xffccd67a));
  uRam000000018334c158 = uRam000000018334c158 ^ uRam000000018334c5b0 ^ 0x5539b85f56603ec9;
  uRam000000018334c660 =
       (uRam000000018334c660 * -0x4a0790770713c945 ^ uRam000000018334c158) + uRam000000018334c5b0;
  uRam000000018334c1b8 = uRam000000018334c660 ^ uRam000000018334c158;
  uRam000000018334c228 = 0;
  uVar5 = ((uRam000000018334c550 ^ 0x84220bc9) +
          (ulonglong)((uint)uRam000000018334c550 & 0x84220bc9) * 2) * -uRam000000018334c150;
  uVar5 = (uVar5 | uRam000000018334c5a0) + (uVar5 & uRam000000018334c5a0);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  uRam000000018334c6d0 =
       func_0x00018d1806c0((uVar5 | 0x84220bc9) + (ulonglong)((uint)uVar5 & 0x84220bc9));
  uRam000000018334bfe8 = uRam000000018334c448 ^ uRam000000018334c460 ^ 0x28ec;
  uRam000000018334c128 = (uRam000000018334c128 ^ uRam000000018334c460) + 0x28ec ^ 0x9e1df1fabe78232e
  ;
  uRam000000018334c4e0 =
       (uRam000000018334c4e0 * -0x1fd0149c37291e91 ^ uRam000000018334c128) + uRam000000018334c460 ^
       uRam000000018334c128;
  uVar6 = (ulonglong)(param_4 & 0x7fff ^ param_3);
  auVar3._8_8_ = _UNK_182168418;
  auVar3._0_8_ = uVar6 ^ 0x84222325;
  auVar4 = pshufb(auVar3 ^ _UNK_182168420,_UNK_1800170c0);
  uRam000000018334c1b8 = 0x28ec;
  uVar2 = auVar4._8_8_ + auVar4._0_8_;
  uVar5 = uVar2 + uRam000000018334c640;
  if (auVar4._4_4_ < 0) {
    uVar5 = uRam000000018334c660 ^ uVar2;
  }
  uRam000000018334c4a0 = func_0x00018d1806c0(SUB161(auVar3 ^ _UNK_182168420,5) ^ uVar5);
  uRam000000018334c3d8 = uVar6 ^ 0x28ec;
  uRam000000018334c2f8 =
       (uRam000000018334c2f8 ^ uRam000000018334c4a0) + uRam000000018334c3d8 ^ 0x2205bdc6a8803e52;
  uRam000000018334c410 =
       (uRam000000018334c410 * -0x1b6b649d679f42c9 ^ uRam000000018334c2f8) + uRam000000018334c4a0;
  uRam000000018334bf58 = uRam000000018334c410 ^ uRam000000018334c2f8;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xd0d7,0x240)
      /* POOL[0xd0d7,0x240]: BkK | atm | field_6017 | method_11312 | sixtwo/en | XGcHI | cPtuD | kpGmO | atq | net/minecraft/class_2846 | net/minecraft/class_2846$class_2847 | field_12971 | Lnet/minecraft/class_2846$class_2847; | (III)V | (Lnet/minecraft/class_2846$class_2847;Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)V | BCAKr | VqNdz | pFvmE | atr | sixtwo/eo | tIzmy | atT | method_3144 | lKIKk | method_6058 | net/minecraft/class_2868 | DVCYL | method_6048 | net/minecraft/class_2596 | net/minecraft/class_7204 | field_3913 | Lnet/minecraft/class_744; | bAo | (Lnet/minecraft/class_7204;)V | net/minecraft/class_7 */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1779cf did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182166510 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== Lsixtwo/en; ats (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18d180750, runtime 6ffff4d90750) =====

void FUN_18d180750(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018d18079b did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182168550 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}




// ===== Lsixtwo/en; att (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18d181760, runtime 6ffff4d91760) =====

void FUN_18d181760(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018d1817e9 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_182168b10 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0xd013655 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d013655(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190ddce00();
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


// ----- block @ rva 0xd015c1a -----

void FUN_18d015c1a(void)

{
  return;
}


// ----- block @ rva 0xd025d97 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18d02c5b2(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(unaff_RBP + 0x110) = unaff_RDI;
  plVar1 = *(longlong **)(unaff_RBP + 0x180);
  (**(code **)(plVar1 + JNI->ExceptionClear /*0x88*/))(plVar1);
  uVar3 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0xd0d7,0x240);
  *(undefined8 *)(unaff_RBP + 0x178) = uVar3;
  cVar2 = (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd04603a -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d046069 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d04603a(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0x178) = in_RAX;
  (**(code **)(**(longlong **)(unaff_RBP + 0x180) + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd09d06c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d09d09b */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d09d06c(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0x178) = in_RAX;
  (**(code **)(**(longlong **)(unaff_RBP + 0x180) + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd0c12e4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d0c1313 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d0c12e4(void)

{
  undefined8 in_RAX;
  longlong unaff_RBP;
  
  *(undefined8 *)(unaff_RBP + 0x178) = in_RAX;
  (**(code **)(**(longlong **)(unaff_RBP + 0x180) + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd0f11d9 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d0f1201 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d0f11d9(void)

{
  longlong unaff_RBP;
  
  (**(code **)(**(longlong **)(unaff_RBP + 0x180) + 0x100))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd1080bb -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18d10e604(void)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  
  *(undefined8 *)(unaff_RBP + 0x110) = unaff_RDI;
  plVar1 = *(longlong **)(unaff_RBP + 0x180);
  (**(code **)(plVar1 + JNI->ExceptionClear /*0x88*/))(plVar1);
  uVar3 = FUN_190dd72e0(plVar1,*_DAT_18301ee50 + 0xd0d7,0x240);
  *(undefined8 *)(unaff_RBP + 0x178) = uVar3;
  cVar2 = (**(code **)(plVar1 + JNI->ExceptionCheck /*0x720*/))(plVar1);
  switch(cVar2 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd110f32 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d110f32(void)

{
  char cVar1;
  code *in_RAX;
  longlong unaff_RBP;
  
  cVar1 = (*in_RAX)(*(undefined8 *)(unaff_RBP + 0x180));
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd1654ef -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1654ef(void)

{
  FUN_190ddce00();
  (*_DAT_182163208)();
  return;
}


// ----- block @ rva 0xd1685b1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1685b1(void)

{
  int in_stack_00000060;
  
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd16894d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d16894d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_1821630c8)();
  return;
}


// ----- block @ rva 0xd168a0b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d168a0b(void)

{
  (*_DAT_182163148)();
  return;
}


// ----- block @ rva 0xd168a25 -----

void FUN_18d168a25(void)

{
  return;
}


// ----- block @ rva 0xd171875 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d171875(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetStaticObjectField /*0x488*/))();
  (*_DAT_1821623c8)();
  return;
}


// ----- block @ rva 0xd172161 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d172161(void)

{
  int in_stack_00000060;
  
  switch(4 < in_stack_00000060) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd172de4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d172de4(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_184117d80();
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


// ----- block @ rva 0xd1747a2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1747a2(void)

{
  FUN_190dd9df0();
  (*_DAT_182162488)();
  return;
}


// ----- block @ rva 0xd174b2b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d174b2b(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1821630d8)();
  return;
}


// ----- block @ rva 0xd1779d2 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1779d2(void)

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


// ----- block @ rva 0xd177b73 -----

void FUN_18d177b73(void)

{
  return;
}


// ----- block @ rva 0xd178736 -----

undefined8 thunk_FUN_18d178b7b(void)

{
  longlong *unaff_RBP;
  
  (**(code **)(unaff_RBP + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xd178c6b -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d178c6b(void)

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


// ----- block @ rva 0xd179c67 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_18d17c64c(void)

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


// ----- block @ rva 0xd17a999 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d17a999(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  cVar1 = (**(code **)(in_stack_00000030 + JNI->IsInstanceOf /*0x100*/))();
  switch(cVar1 == '\0') {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd17ba9d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d17ba9d(void)

{
  char cVar1;
  longlong *in_stack_00000030;
  
  FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0x724,0x22);
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


// ----- block @ rva 0xd17bc29 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d17bc29(void)

{
  int iVar1;
  longlong *in_stack_00000030;
  undefined4 uStack0000000000000048;
  int iStack0000000000000060;
  
  uStack0000000000000048 = 2;
  iStack0000000000000060 = 2;
  iVar1 = (**(code **)(in_stack_00000030 + JNI->GetArrayLength /*0x558*/))(in_stack_00000030);
  switch(iStack0000000000000060 < 0 || iVar1 <= iStack0000000000000060) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0xd18020f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d18020f(void)

{
  char cVar1;
  longlong *unaff_R14;
  
  FUN_190dd72e0();
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


// ----- block @ rva 0xd1804dc -----

undefined8 FUN_18d1804dc(void)

{
  longlong *unaff_R14;
  
  (**(code **)(unaff_R14 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0xd18079e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d18079e(void)

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


// ----- block @ rva 0xd1807f2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1807f2(void)

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


// ----- block @ rva 0xd180898 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d180898(void)

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


// ----- block @ rva 0xd180e36 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d180e36(void)

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


// ----- block @ rva 0xd180ed7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d180ed7(void)

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


// ----- block @ rva 0xd1810dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1810dd(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_182168a98)();
  return;
}


// ----- block @ rva 0xd181183 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d181183(void)

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


// ----- block @ rva 0xd1813c0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1813c0(void)

{
  FUN_190dd72e0();
  (*_DAT_182168668)();
  return;
}


// ----- block @ rva 0xd181426 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d181426(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_1821686e8)();
  return;
}


// ----- block @ rva 0xd18159e -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d18159e(void)

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


// ----- block @ rva 0xd181631 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d181631(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_1821689c8)();
  return;
}


// ----- block @ rva 0xd181665 -----

void FUN_18d181665(void)

{
  return;
}


// ----- block @ rva 0xd181674 -----

void FUN_18d181674(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xd1817ec -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1817ec(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_182169358)();
  return;
}


// ----- block @ rva 0xd1819f1 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d1819f1(void)

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


// ----- block @ rva 0xd181abe -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d181abe(void)

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


// ----- block @ rva 0xd1821a5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1821a5(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_182168d28)();
  return;
}


// ----- block @ rva 0xd182b63 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d182b63(void)

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


// ----- block @ rva 0xd182dd8 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d182dd8(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_1821699e8)();
  return;
}


// ----- block @ rva 0xd182e71 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d182e71(void)

{
  FUN_190ddfc90();
  (*_DAT_182169118)();
  return;
}


// ----- block @ rva 0xd182f98 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d182f98(void)

{
  (*_DAT_182169a28)();
  return;
}


// ----- block @ rva 0xd183170 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d183170(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182169a48)();
  return;
}


// ----- block @ rva 0xd183786 -----

void FUN_18d183786(void)

{
  return;
}


// ----- block @ rva 0xd183da7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d183da7(void)

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


// ----- block @ rva 0xd1842c4 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18d1842c4(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_182169388)();
  return;
}


// ----- block @ rva 0xd18432a -----

void FUN_18d18432a(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0xd18455b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d1845b1 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d18455b(void)

{
  longlong *unaff_RSI;
  
  FUN_190de3220();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd184b0f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d184b45 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d184b0f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd184b4d -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d184b87 */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d184b4d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd19dbfd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d19dbfd(void)

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


// ----- block @ rva 0xd19e3c0 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d19e3c0(void)

{
  int iVar1;
  longlong *unaff_RSI;
  int iStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined4 uStack0000000000000078;
  undefined8 in_stack_00000098;
  undefined4 in_stack_00000118;
  
  iStack0000000000000068 = 0;
  uStack0000000000000078 = 0x38;
  uStack0000000000000070 = CONCAT44((int)((ulonglong)in_stack_00000098 >> 0x20),in_stack_00000118);
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


// ----- block @ rva 0xd19ec74 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d19ec74(void)

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


// ----- block @ rva 0xd19ed79 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x00018d19edaf */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_18d19ed79(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0xd19edb2 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d19edb2(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallNonvirtualVoidMethodA /*0x2e8*/))();
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


// ----- block @ rva 0xd19f19c -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_18d19f19c(void)

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


// ----- block @ rva 0xd1a6cad -----

void FUN_18d1a6cad(void)

{
  return;
}


// ----- block @ rva 0xd1a6d19 -----

void FUN_18d1a6d19(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}

