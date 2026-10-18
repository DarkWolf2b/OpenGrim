// ===== Lsixtwo/eO; YO ()V (handler @ image 18c06d210, runtime 6ffff3c7d210) =====

void FUN_18c06d210(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x3806,0xbf);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c06d25c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181db4f50 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eO; _bd3b7df63a6bf9bfb887cf3169c6ebf3 ()V (handler @ image 18c091590, runtime 6ffff3ca1590) =====

void FUN_18c091590(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c091678 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181dbf248 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eO; aBt (Lsixtwo/gA;)V (handler @ image 18c06d720, runtime 6ffff3c7d720) =====

void FUN_18c06d720(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf3df,0x29a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c06d7ef did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181db5130 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eO; aBu (Lsixtwo/gv;)V (handler @ image 18c074540, runtime 6ffff3c84540) =====

void FUN_18c074540(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf3df,0x29a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c074601 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181db73c0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eO; aBv (Lsixtwo/gH$th;)V (handler @ image 18c078bd0, runtime 6ffff3c88bd0) =====

void FUN_18c078bd0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf3df,0x29a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c078c9a did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181db87b0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eO; aBw (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18c082530, runtime 6ffff3c92530) =====

undefined8 FUN_18c082530(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  return param_3;
}



// ===== Lsixtwo/eO; aBx (IJ)I (handler @ image 18c0825c0, runtime 6ffff3c925c0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18c0825c0(longlong *param_1,undefined8 param_2,uint param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  ulonglong uVar6;
  ulonglong uVar8;
  undefined1 auVar7 [16];
  
  uVar6 = (uRam00000001832e97a8 ^ _UNK_181dbda40) + uRam00000001832e9878 + 0x7492a148b9d82021;
  uVar8 = (uRam00000001832e9878 ^ _UNK_181dbda48) + uRam00000001832e97a8 + 0xb7b6e9f3d7cfdc42;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e97a8 ^ _UNK_181dbda40;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832e9878 ^ _UNK_181dbda48;
  uRam00000001832e95d8 =
       func_0x00018c08d7e0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001832e97a8 + 0xb7b6e9f3d7cfdc42) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832e9878 + 0x7492a148b9d82021));
  uVar6 = (uRam00000001832e95d8 ^ 0x87c6405fa1483708) * -0x6a1eb4a100daaba9 ^ 0xb7b6e9f3d7cfdc42;
  uRam00000001832e9768 = (uRam00000001832e9768 ^ uVar6) + 0xf7b6e9fbffffdf46 ^ 0x48f5d971cd567a91;
  uRam00000001832e9760 = (uRam00000001832e9760 * -0x39db5341b3b83c71 ^ uRam00000001832e9768) + uVar6
  ;
  uRam00000001832e96f8 = uRam00000001832e9760 ^ uRam00000001832e9768;
  uRam00000001832e9820 = 0xf7b6e9fbffffdf46;
  uVar6 = (uRam00000001832e9400 ^ _UNK_181dbda50) + uRam00000001832e94d8 + 0xd75fa7e1f3f3ca19;
  uVar8 = (uRam00000001832e94d8 ^ _UNK_181dbda58) + uRam00000001832e9400 + 0xc10739afc0dd41f7;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e9400 ^ _UNK_181dbda50;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832e94d8 ^ _UNK_181dbda58;
  uRam00000001832e9470 =
       func_0x00018c08d7e0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001832e9400 + 0xc10739afc0dd41f7) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832e94d8 + 0xd75fa7e1f3f3ca19));
  uVar6 = uRam00000001832e9470 << 0x35 | uRam00000001832e9470 >> 0xb;
  uVar8 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar8 = (uVar8 & 0x3333333333333333) + (uVar8 >> 2 & 0x3333333333333333);
  uVar6 = (((uVar8 >> 4) + uVar8 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar6;
  uRam00000001832e95b0 = (uRam00000001832e95b0 ^ uVar6) + 0x16589e4eb70ca8cb ^ 0xf8465735b94d86ca;
  uRam00000001832e97f0 = (uRam00000001832e97f0 * -0x390ecc0a6e9bd7c1 ^ uRam00000001832e95b0) + uVar6
  ;
  uRam00000001832e9838 = uRam00000001832e97f0 ^ uRam00000001832e95b0;
  uRam00000001832e9350 = 0x16589e4eb70ca8cb;
  uVar6 = (uRam00000001832e9818 ^ _UNK_181dbda60) + uRam00000001832e9538 + 0x84222325;
  uVar8 = (uRam00000001832e9538 ^ _UNK_181dbda68) + uRam00000001832e9818 + 0xd1195e5e0b968d10;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e9818 ^ _UNK_181dbda60;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832e9538 ^ _UNK_181dbda68;
  uRam00000001832e96e0 =
       func_0x00018c08d7e0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001832e9818 + 0xd1195e5e0b968d10) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e9538 + 0x84222325));
  uRam00000001832e97c8 =
       (uRam00000001832e97c8 ^ uRam00000001832e96e0 & 0x7fffffffff) + 0x2ee6a1a1f46972f0 ^
       0x2bc10e750b4eff71;
  uRam00000001832e9490 =
       (uRam00000001832e9490 * -0x6d324925f4c6851d ^ uRam00000001832e97c8) +
       (uRam00000001832e96e0 & 0x7fffffffff);
  uRam00000001832e94d8 = uRam00000001832e9490 ^ uRam00000001832e97c8;
  uRam00000001832e9488 = 0x2ee6a1a1f46972f0;
  uRam00000001832e93d8 = func_0x00018c08d7e0(uRam00000001832e9868 ^ 0x83d4eb785d101983);
  uRam00000001832e9528 =
       (uRam00000001832e9528 ^ uRam00000001832e93d8) + 0x7bebef7bf3f2f1c0 ^ 0x8ad5ef8bb6b3f6a2;
  uRam00000001832e9660 =
       (uRam00000001832e9660 * -0x57061055657f47dd ^ uRam00000001832e9528) + uRam00000001832e93d8;
  uRam00000001832e96d8 = uRam00000001832e9660 ^ uRam00000001832e9528;
  uRam00000001832e96e8 = 0x7bebef7bf3f2f1c0;
  uVar6 = (~uRam00000001832e9450 + 0x841410840c0d0e41) *
          ((uRam00000001832e95e0 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832e95e0 & 0x84225cda) * 2);
  uVar6 = (uVar6 | uRam00000001832e95f0) + (uVar6 & uRam00000001832e95f0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e97e8 =
       func_0x00018c08d7e0((uVar6 | 0x84141084882f529a) + (uVar6 & 0x84141084882f529a));
  uRam00000001832e9650 = uRam00000001832e94e8 ^ uRam00000001832e96a8 ^ 0x841410840c0d8e3f;
  uRam00000001832e98b0 =
       (uRam00000001832e98b0 ^ uRam00000001832e96a8) + 0x841410840c0d8e3f ^ 0xde1c6c207a451e1a;
  uRam00000001832e9720 =
       (uRam00000001832e9720 * -0x1874e132d5cb8611 ^ uRam00000001832e98b0) + uRam00000001832e96a8;
  uRam00000001832e9700 = uRam00000001832e9720 ^ uRam00000001832e98b0;
  uRam00000001832e9588 = 0x841410840c0d8e3f;
  uVar6 = (~uRam00000001832e9570 + 0x7bebef7bf3f2f1c1) *
          ((uRam00000001832e9468 ^ 0x84141084882fad1a) +
          (uRam00000001832e9468 & 0x4141084882fad1a) * 2);
  uVar6 = (uVar6 | uRam00000001832e9400) + (uVar6 & uRam00000001832e9400);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e96b0 =
       func_0x00018c08d7e0((uVar6 | 0xffffffff7bdd5cda) + (uVar6 & 0xffffffff7bdd5cda));
  uVar6 = (uRam00000001832e96b0 ^ 0x32021e7d11a1fe40) * 0x5be13cfb2bda768b ^ 0x841410840c0d8e3f;
  uVar6 = uVar6 << 5 | uVar6 >> 0x3b;
  uRam00000001832e94a8 = uRam00000001832e9708 ^ uVar6 ^ 0x7fff;
  uRam00000001832e93e8 = (uRam00000001832e93e8 ^ uVar6) + 0x7fff ^ 0x9bdba83e263f4a04;
  uRam00000001832e9540 = (uRam00000001832e9540 * -0x69d24e01893a7657 ^ uRam00000001832e93e8) + uVar6
  ;
  uRam00000001832e98f0 = uRam00000001832e9540 ^ uRam00000001832e93e8;
  uRam00000001832e97d8 = 0x7fff;
  uVar6 = (~uRam00000001832e9728 + 0x3b6f05689620e131) *
          ((uRam00000001832e9738 ^ 0xc490fa97edfdbdea) +
          (uRam00000001832e9738 & 0x4490fa97edfdbdea) * 2);
  uVar6 = (uVar6 | uRam00000001832e97c8) + (uVar6 & uRam00000001832e97c8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e9558 =
       func_0x00018c08d7e0((uVar6 | 0xffffffff7bdd5cda) + (uVar6 & 0xffffffff7bdd5cda));
  uVar6 = ~(uRam00000001832e9558 << 0x28 | uRam00000001832e9558 >> 0x18) & 0xc490fa9769df9ecf;
  uRam00000001832e9828 = uRam00000001832e9500 ^ uVar6 ^ 0x7fff;
  uRam00000001832e98b0 = (uRam00000001832e98b0 ^ uVar6) + 0x7fff ^ 0x309bbbb3dc105b94;
  uRam00000001832e98b8 = (uRam00000001832e98b8 * 0x18e6bca53e5e65d7 ^ uRam00000001832e98b0) + uVar6;
  uRam00000001832e94b0 = uRam00000001832e98b8 ^ uRam00000001832e98b0;
  uRam00000001832e9550 = 0x7fff;
  uVar6 = (uRam00000001832e9568 ^ _UNK_181dbda70) + uRam00000001832e9668 + 0xf7b6e9fb7bddfc63;
  uVar8 = (uRam00000001832e9668 ^ _UNK_181dbda78) + uRam00000001832e9568 + 0x16589e4eb70ca8cb;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e9568 ^ _UNK_181dbda70;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832e9668 ^ _UNK_181dbda78;
  uRam00000001832e9590 =
       func_0x00018c08d7e0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001832e9568 + 0x16589e4eb70ca8cb) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832e9668 + 0xf7b6e9fb7bddfc63));
  uVar8 = uRam00000001832e9590 ^ 0x433c0ec16bb3fc82;
  uVar6 = uVar8 >> 1 | uVar8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          uVar8;
  uRam00000001832e9638 = (uRam00000001832e9638 ^ uVar8) + 0xe1ee77b548f3778d ^ 0x9c513a9c6820e7a;
  uRam00000001832e97c0 = (uRam00000001832e97c0 * -0x435dd4437796ec5f ^ uRam00000001832e9638) + uVar8
  ;
  uRam00000001832e9530 = uRam00000001832e97c0 ^ uRam00000001832e9638;
  uRam00000001832e93b0 = 0xe1ee77b548f3778d;
  uVar6 = (uRam00000001832e9328 ^ _UNK_181dbda80) + uRam00000001832e9590 + 0xe1ee77b5ccd154a8;
  uVar8 = (uRam00000001832e9590 ^ _UNK_181dbda88) + uRam00000001832e9328 + 0x2c2110956e191084;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e9328 ^ _UNK_181dbda80;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832e9590 ^ _UNK_181dbda88;
  uRam00000001832e9710 =
       func_0x00018c08d7e0((uVar8 << 0x1d | uVar8 >> 0x23) -
                           (uRam00000001832e9328 + 0x2c2110956e191084) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) -
                           (uRam00000001832e9590 + 0xe1ee77b5ccd154a8));
  uVar6 = uRam00000001832e9710 ^ 0x4ed8303f17c774b4;
  uRam00000001832e9640 = uRam00000001832e98a8 ^ uVar6 ^ 0xe0f884ab70c8811;
  uRam00000001832e9668 = (uRam00000001832e9668 ^ uVar6) + 0xe0f884ab70c8811 ^ 0x1e328621a9253fbb;
  uRam00000001832e9608 = (uRam00000001832e9608 * -0x1ba32ab88dcfe2e9 ^ uRam00000001832e9668) + uVar6
  ;
  uRam00000001832e9720 = uRam00000001832e9608 ^ uRam00000001832e9668;
  uRam00000001832e9738 = 0xe0f884ab70c8811;
  uRam00000001832e9808 = func_0x00018c08d7e0(uRam00000001832e9808 + 0x230083db001dff ^ 0x2d);
  uRam00000001832e96c0 = uRam00000001832e9808 & 0xffffffffffc00000;
  uRam00000001832e9888 = uRam00000001832e9888 ^ uRam00000001832e96c0 ^ 0x63d78a6a5f3c2dd6;
  uRam00000001832e97f0 =
       (uRam00000001832e97f0 * -0x8a590e6dc299763 ^ uRam00000001832e9888) + uRam00000001832e96c0;
  uRam00000001832e9408 = uRam00000001832e97f0 ^ uRam00000001832e9888;
  uRam00000001832e96a8 = 0;
  uVar6 = ((uRam00000001832e9808 ^ 0x84225cda) +
          (ulonglong)((uint)uRam00000001832e9808 & 0x84225cda) * 2) * -lRam00000001832e9778;
  uVar6 = (uVar6 | uRam00000001832e9570) + (uVar6 & uRam00000001832e9570);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e9720 =
       func_0x00018c08d7e0((uVar6 | 0x84225cda) + (ulonglong)((uint)uVar6 & 0x84225cda));
  uVar6 = uRam00000001832e9720 & 0x1ffffffffffffff;
  uRam00000001832e9560 = uRam00000001832e9800 ^ uVar6 ^ 0x7fff;
  uRam00000001832e9520 = (uRam00000001832e9520 ^ uVar6) + 0x7fff ^ 0x47b1564480992706;
  uRam00000001832e93e8 = (uRam00000001832e93e8 * -0x14f83e25542c81ed ^ uRam00000001832e9520) + uVar6
  ;
  uRam00000001832e97f8 = uRam00000001832e93e8 ^ uRam00000001832e9520;
  uRam00000001832e9478 = 0x7fff;
  uRam00000001832e9680 = func_0x00018c08d7e0(uRam00000001832e95b0 ^ 0x3feb97c63f621b9);
  uRam00000001832e96d0 =
       (uRam00000001832e96d0 ^ uRam00000001832e9680 ^ 0x8491604000020b9) + 0x8491604000020b9 ^
       0xc3e4efa8751dcf99;
  uRam00000001832e9708 =
       (uRam00000001832e9708 * -0x310267b22b65fbbb ^ uRam00000001832e96d0) +
       (uRam00000001832e9680 ^ 0x8491604000020b9);
  uRam00000001832e93d8 = uRam00000001832e9708 ^ uRam00000001832e96d0;
  uRam00000001832e9840 = uRam00000001832e98d0 ^ 0x8491604000020b9;
  uRam00000001832e9460 = 0x8491604000020b9;
  uRam00000001832e94a0 = func_0x00018c08d7e0(lRam00000001832e9628 + 0x9a436c9726663518U ^ 0xb3);
  uVar6 = (uRam00000001832e94a0 ^ 0x4f22f1c8042ec6c0) & 0xffffffffffffffe0;
  uRam00000001832e9660 = uRam00000001832e97a8 ^ uVar6 ^ 0x6061bc65b4cdabf9;
  uRam00000001832e9848 = (uRam00000001832e9848 * -0x6f05c7ea1dbfb72d ^ uRam00000001832e9660) + uVar6
  ;
  uRam00000001832e9660 = uRam00000001832e9848 ^ uRam00000001832e9660;
  uRam00000001832e97a8 = 0;
  uRam00000001832e9330 = func_0x00018c08d7e0(uRam00000001832e9408 ^ 0x4c0083b6001d30);
  uRam00000001832e9520 = uRam00000001832e96e0 ^ uRam00000001832e9330 ^ 0x7fff;
  uRam00000001832e9808 = (uRam00000001832e9808 ^ uRam00000001832e9330) + 0x7fff ^ 0x631b89937c7a8a6a
  ;
  uRam00000001832e9638 =
       (uRam00000001832e9638 * -0x785ed44ea9da771f ^ uRam00000001832e9808) + uRam00000001832e9330;
  uRam00000001832e96c0 = uRam00000001832e9638 ^ uRam00000001832e9808;
  lRam00000001832e9628 = 0x7fff;
  uVar6 = (uRam00000001832e9578 ^ 0x84225cda) + uRam00000001832e9400 + 0x84225cda;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e9578 ^ 0x84225cda;
  uVar8 = ((uRam00000001832e9400 + uRam00000001832e9578) * 0x2000 |
          uRam00000001832e9400 + uRam00000001832e9578 >> 0x33) ^ uRam00000001832e9400;
  uRam00000001832e9450 =
       func_0x00018c08d7e0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001832e9578 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e9400 + 0x84225cda));
  auVar7 = _UNK_1800170c0;
  uVar6 = uRam00000001832e9450 << 0x12 | uRam00000001832e9450 >> 0x2e;
  uRam00000001832e9560 = uRam00000001832e97f0 ^ uVar6 ^ 0x7fff;
  uRam00000001832e9388 = (uRam00000001832e9388 ^ uVar6) + 0x7fff ^ 0xa035e37c1d7d0b19;
  uRam00000001832e94c0 = (uRam00000001832e94c0 * 0x1c035c61c4cd3b ^ uRam00000001832e9388) + uVar6;
  uRam00000001832e9348 = uRam00000001832e94c0 ^ uRam00000001832e9388;
  auVar4._8_8_ = _UNK_18019c088;
  auVar4._0_8_ = param_4 ^ 0x84222325;
  uRam00000001832e96b0 = 0x7fff;
  auVar5 = pshufb(auVar4 ^ _UNK_181dbda90,_UNK_1800170c0);
  uVar8 = auVar5._8_8_ + auVar5._0_8_;
  uVar6 = uVar8 + uRam00000001832e98c0;
  if (auVar5._4_4_ < 0) {
    uVar6 = uRam00000001832e95f8 ^ uVar8;
  }
  uRam00000001832e9520 = func_0x00018c08d7e0(SUB161(auVar4 ^ _UNK_181dbda90,5) ^ uVar6);
  uVar2 = (uint)param_4 & 0x7fff;
  uVar8 = (ulonglong)uVar2;
  uRam00000001832e9818 =
       (uRam00000001832e9818 ^ ~uRam00000001832e9520 & param_4) + uVar8 ^ 0xc3e57bb363206ce3;
  uRam00000001832e9530 =
       (uRam00000001832e9530 * 0x5c890bcc9186b4c5 ^ uRam00000001832e9818) +
       (~uRam00000001832e9520 & param_4);
  uRam00000001832e93b0 = uRam00000001832e9530 ^ uRam00000001832e9818;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar2 ^ 0x84222325;
  auVar5._8_4_ = param_3;
  auVar5._12_4_ = 0;
  auVar7 = pshufb(auVar5 ^ _UNK_181dbdaa0,auVar7);
  uVar3 = auVar7._8_8_ + auVar7._0_8_;
  uVar6 = uVar3 + lRam00000001832e9670;
  if (auVar7._4_4_ < 0) {
    uVar6 = uRam00000001832e9340 ^ uVar3;
  }
  uRam00000001832e9870 = uVar8;
  uRam00000001832e9818 = func_0x00018c08d7e0(SUB161(auVar5 ^ _UNK_181dbdaa0,5) ^ uVar6);
  uVar6 = uRam00000001832e9818 << 0x11 | uRam00000001832e9818 >> 0x2f;
  uVar3 = (uVar8 + param_3) - (ulonglong)((param_3 & uVar2) * 2);
  uRam00000001832e98d8 = (uRam00000001832e98d8 ^ uVar6) + uVar3 ^ 0x689a0070c962e00a;
  uRam00000001832e9720 = (uRam00000001832e9720 * 0x501e89c7e955235 ^ uRam00000001832e98d8) + uVar6;
  uRam00000001832e9368 = uRam00000001832e9720 ^ uRam00000001832e98d8;
  uVar3 = uVar3 & 0xffffffff;
  uRam00000001832e9848 = uVar3;
  uRam00000001832e9490 = func_0x00018c08d7e0(lRam00000001832e9510 + 0x7effbb530020ffU ^ 0x44);
  uVar6 = (uRam00000001832e9490 ^ 0xb0000000) & 0xfffffffff0000000;
  uRam00000001832e9578 = (uRam00000001832e9578 ^ uVar6) + 0xfbd9ed76 ^ 0x5a296677a9fef02d;
  uRam00000001832e93e0 = (uRam00000001832e93e0 * 0x3b6d20127c935f6f ^ uRam00000001832e9578) + uVar6;
  uRam00000001832e9618 = uRam00000001832e93e0 ^ uRam00000001832e9578;
  uRam00000001832e93f8 = 0xfbd9ed76;
  uRam00000001832e97a0 = func_0x00018c08d7e0(uRam00000001832e9680 + 0xfff7ffdde6ffb7ff ^ 0xaa);
  uVar6 = uRam00000001832e97a0 >> 1 | uRam00000001832e97a0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          uRam00000001832e97a0;
  uRam00000001832e9480 = (uRam00000001832e9480 ^ uVar6) + 0xa1fa3bca ^ 0xbb68889ff5ee5b56;
  uRam00000001832e9738 = (uRam00000001832e9738 * -0x2e0e28266ab5f61f ^ uRam00000001832e9480) + uVar6
  ;
  uRam00000001832e9530 = uRam00000001832e9738 ^ uRam00000001832e9480;
  uRam00000001832e9620 = 0xa1fa3bca;
  uVar6 = (~uRam00000001832e9868 + 0x622ae015) *
          ((uRam00000001832e98c8 ^ 0x842228e7) +
          (ulonglong)((uint)uRam00000001832e98c8 & 0x842228e7) * 2);
  uVar6 = (uVar6 | uRam00000001832e9740) + (uVar6 & uRam00000001832e9740);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e98e0 =
       func_0x00018c08d7e0((uVar6 | 0xe608c8f3) + (ulonglong)((uint)uVar6 & 0xe608c8f3));
  uVar6 = uRam00000001832e98e0 ^ 0x622ae014;
  uRam00000001832e94c0 = uRam00000001832e9880 ^ uVar6 ^ 0x622aebd6;
  uRam00000001832e95e0 = (uRam00000001832e95e0 ^ uVar6) + 0x622aebd6 ^ 0x497e36f2074712dd;
  uRam00000001832e9668 = (uRam00000001832e9668 * -0x38ece397ffece3f9 ^ uRam00000001832e95e0) + uVar6
  ;
  uRam00000001832e9308 = uRam00000001832e9668 ^ uRam00000001832e95e0;
  uRam00000001832e9648 = 0x622aebd6;
  uRam00000001832e94b8 = func_0x00018c08d7e0(uRam00000001832e9340 + 0x35004aeeff2cff ^ 0x73);
  uVar6 = (uRam00000001832e94b8 ^ 0x3c860c96292e4000) & 0xffffffffffffe000;
  uRam00000001832e9730 = uRam00000001832e93f0 ^ uVar6 ^ 0x100000bc2;
  uRam00000001832e9310 = (uRam00000001832e9310 ^ uVar6) + 0x100000bc2 ^ 0xbe63635f3cb5ee20;
  uRam00000001832e98c0 = (uRam00000001832e98c0 * 0x16a82fda6b3b8f09 ^ uRam00000001832e9310) + uVar6;
  uRam00000001832e98a0 = uRam00000001832e98c0 ^ uRam00000001832e9310;
  uRam00000001832e9870 = 0xbc2;
  uVar6 = (~uRam00000001832e94f0 + 0x4c73245) *
          ((uRam00000001832e9360 ^ 0x7f1afa5b) +
          (ulonglong)((uint)uRam00000001832e9360 & 0x7f1afa5b) * 2);
  uVar6 = (uVar6 | uRam00000001832e9640) + (uVar6 & uRam00000001832e9640);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e9478 =
       func_0x00018c08d7e0((uVar6 | 0x7bddc81f) + (ulonglong)((uint)uVar6 & 0x7bddc81f));
  uVar6 = uRam00000001832e9478 ^ 0xfffffb7e;
  uRam00000001832e9428 = uRam00000001832e9320 ^ uVar6 ^ 0x100000bc2;
  uRam00000001832e9410 = (uRam00000001832e9410 ^ uVar6) + 0x100000bc2 ^ 0x2fb727cf37f70ae2;
  uRam00000001832e95d0 = (uRam00000001832e95d0 * 0x478e5d1275dbde29 ^ uRam00000001832e9410) + uVar6;
  uRam00000001832e9538 = uRam00000001832e95d0 ^ uRam00000001832e9410;
  uRam00000001832e96a8 = 0xbc2;
  uVar6 = (uRam00000001832e9590 ^ _UNK_181dbdab0) + uRam00000001832e95a0 + 0x84222325;
  uVar8 = (uRam00000001832e95a0 ^ _UNK_181dbdab8) + uRam00000001832e9590 + 0xdcf8b06c;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e9590 ^ _UNK_181dbdab0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832e95a0 ^ _UNK_181dbdab8;
  uRam00000001832e9660 =
       func_0x00018c08d7e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001832e9590 + 0xdcf8b06c) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e95a0 + 0x84222325));
  uRam00000001832e9550 =
       (uRam00000001832e9550 ^ uRam00000001832e9660 * 0x38496a816766122f) - 0xdcf8b06c ^
       0x6ac2384731f6b8e4;
  uRam00000001832e9490 =
       (uRam00000001832e9490 * 0x1f49bd3fb90152ab ^ uRam00000001832e9550) +
       uRam00000001832e9660 * 0x38496a816766122f;
  uRam00000001832e95c0 = uRam00000001832e9490 ^ uRam00000001832e9550;
  uRam00000001832e9388 = 0x23074f94;
  uRam00000001832e9498 = func_0x00018c08d7e0(uRam00000001832e9740 ^ 0xffb000149effb2a0);
  uVar6 = uRam00000001832e9498 ^ 0xffffffbe;
  uRam00000001832e9788 = uRam00000001832e96b8 ^ uVar6 ^ 0x100000bc2;
  uRam00000001832e9358 = (uRam00000001832e9358 ^ uVar6) + 0x100000bc2 ^ 0xd9cf85da450dbb9f;
  uRam00000001832e9530 = (uRam00000001832e9530 * 0x5bbc94b0845aa527 ^ uRam00000001832e9358) + uVar6;
  uRam00000001832e93b8 = uRam00000001832e9530 ^ uRam00000001832e9358;
  uRam00000001832e94f8 = 0xbc2;
  uVar6 = (~uRam00000001832e98c8 + 0xa1fa3bcb) *
          ((uRam00000001832e9608 ^ 0x7ffbce53) +
          (ulonglong)((uint)uRam00000001832e9608 & 0x7ffbce53) * 2);
  uVar6 = (uVar6 | uRam00000001832e9768) + (uVar6 & uRam00000001832e9768);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e9498 =
       func_0x00018c08d7e0((uVar6 | 0xde01f599) + (ulonglong)((uint)uVar6 & 0xde01f599));
  uVar6 = uRam00000001832e9498 << 0xc | uRam00000001832e9498 >> 0x34;
  uRam00000001832e9308 = (uRam00000001832e9308 ^ uVar6) + 0xa1d82942 ^ 0x71f95eedbd0fb5b3;
  uRam00000001832e9410 = (uRam00000001832e9410 * -0x6777cdb31d8ac745 ^ uRam00000001832e9308) + uVar6
  ;
  uRam00000001832e9798 = uRam00000001832e9410 ^ uRam00000001832e9308;
  uRam00000001832e9698 = 0xa1d82942;
  uVar6 = (uRam00000001832e94b8 ^ _UNK_181dbdac0) + uRam00000001832e9520 + 0x19f60a65;
  uVar8 = (uRam00000001832e9520 ^ _UNK_181dbdac8) + uRam00000001832e94b8 + 0x9dd42940;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e94b8 ^ _UNK_181dbdac0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832e9520 ^ _UNK_181dbdac8;
  uRam00000001832e9318 =
       func_0x00018c08d7e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001832e94b8 + 0x9dd42940) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e9520 + 0x19f60a65));
  uRam00000001832e9308 = (ulonglong)(~(uint)uRam00000001832e9318 & 0x9dd42940) * 0x1d34811c1156dff1;
  uVar6 = uRam00000001832e9308 >> 1 | uRam00000001832e9308;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uRam00000001832e9308 =
       (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
       uRam00000001832e9308;
  uRam00000001832e9440 = uRam00000001832e9440 ^ uRam00000001832e9308 ^ 0x93ae8eb07db35893;
  uRam00000001832e9888 =
       (uRam00000001832e9888 * -0x5779ea3c848f6eb9 ^ uRam00000001832e9440) + uRam00000001832e9308;
  uRam00000001832e9800 = uRam00000001832e9888 ^ uRam00000001832e9440;
  lRam00000001832e9510 = 0;
  uVar6 = (uRam00000001832e9740 ^ 0x842228e7) + uRam00000001832e9708 + 0x842228e7;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e9740 ^ 0x842228e7;
  uVar8 = ((uRam00000001832e9708 + uRam00000001832e9740) * 0x2000 |
          uRam00000001832e9708 + uRam00000001832e9740 >> 0x33) ^ uRam00000001832e9708;
  lRam00000001832e97e0 =
       func_0x00018c08d7e0((uVar8 << 0x1d | uVar8 >> 0x23) - uRam00000001832e9740 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e9708 + 0x842228e7));
  uVar8 = lRam00000001832e97e0 * 0x3fe6730a692fd985;
  uVar6 = uVar8 >> 1 | uVar8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar8 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar8;
  uRam00000001832e9430 = uRam00000001832e97a0 ^ uVar8 ^ 0xbc2;
  uRam00000001832e9310 = (uRam00000001832e9310 ^ uVar8) + 0xbc2 ^ 0xc46756da4c9fd4b;
  uRam00000001832e95c0 = (uRam00000001832e95c0 * -0x1258fda1930697a1 ^ uRam00000001832e9310) + uVar8
  ;
  uRam00000001832e9750 = uRam00000001832e95c0 ^ uRam00000001832e9310;
  uRam00000001832e96e8 = 0xbc2;
  uVar6 = (~uRam00000001832e9858 + 0x100000000) *
          ((uRam00000001832e9590 ^ 0x7ffbce53) +
          (ulonglong)((uint)uRam00000001832e9590 & 0x7ffbce53) * 2);
  uVar6 = (uVar6 | uRam00000001832e9580) + (uVar6 & uRam00000001832e9580);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e9730 =
       func_0x00018c08d7e0((uVar6 | 0x800431ac) + (ulonglong)((uint)uVar6 & 0x800431ac));
  uVar6 = (uRam00000001832e9730 ^ 0xfbd9ed750426128a) << 0x22 |
          (uRam00000001832e9730 ^ 0xfbd9ed750426128a) >> 0x1e;
  uRam00000001832e9430 = (uRam00000001832e9430 ^ uVar6) + 0x4261289 ^ 0xd3ad3fc1dc8d99e4;
  uRam00000001832e96e0 = (uRam00000001832e96e0 * 0x8379c8689ff120b ^ uRam00000001832e9430) + uVar6;
  uRam00000001832e9840 = uRam00000001832e96e0 ^ uRam00000001832e9430;
  uRam00000001832e9680 = 0x4261289;
  uVar6 = (uRam00000001832e97c8 ^ _UNK_181dbdad0) + uRam00000001832e97b8 + 0x7ffbce53;
  uVar8 = (uRam00000001832e97b8 ^ _UNK_181dbdad8) + uRam00000001832e97c8 + 0x4261289;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uRam00000001832e97c8 ^ _UNK_181dbdad0;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ uRam00000001832e97b8 ^ _UNK_181dbdad8;
  uRam00000001832e94a8 =
       func_0x00018c08d7e0((uVar8 << 0x1d | uVar8 >> 0x23) - (uRam00000001832e97c8 + 0x4261289) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (uRam00000001832e97b8 + 0x7ffbce53));
  uRam00000001832e93e0 =
       uRam00000001832e93e0 ^ uRam00000001832e94a8 ^ 0xffffffff ^ 0x736585d1299692cb;
  uRam00000001832e97c0 =
       (uRam00000001832e97c0 * 0x6175da105bf6c82f ^ uRam00000001832e93e0) +
       (uRam00000001832e94a8 ^ 0xffffffff);
  uRam00000001832e93a0 = uRam00000001832e97c0 ^ uRam00000001832e93e0;
  uRam00000001832e97d8 = 0;
  uRam00000001832e9318 = func_0x00018c08d7e0(uRam00000001832e93e0 + 0x17ff7ce5001dff ^ 0x38);
  uVar6 = uRam00000001832e9318 ^ 0xbc2;
  uRam00000001832e9710 = uRam00000001832e9758 ^ uVar6 ^ 0xbc2;
  uRam00000001832e9810 = (uRam00000001832e9810 ^ uVar6) + 0xbc2 ^ 0x64b634d7674adc2f;
  uRam00000001832e9548 = (uRam00000001832e9548 * 0x1175da3d4ea3245f ^ uRam00000001832e9810) + uVar6;
  uRam00000001832e9478 = uRam00000001832e9548 ^ uRam00000001832e9810;
  uRam00000001832e9690 = 0xbc2;
  uVar6 = (~uRam00000001832e9758 + 0xbc3) *
          ((uVar3 ^ 0x84222325 ^ uRam00000001832e97a0) +
          (ulonglong)((uint)uRam00000001832e97a0 & (uint)(uVar3 ^ 0x84222325)) * 2);
  uVar6 = (uVar6 | uRam00000001832e93c0) + (uVar6 & uRam00000001832e93c0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  uRam00000001832e93c0 =
       func_0x00018c08d7e0((uVar3 ^ 0x842228e7 | uVar6) +
                           (ulonglong)((uint)(uVar3 ^ 0x842228e7) & (uint)uVar6));
  uRam00000001832e95b0 = uVar3 ^ 0xbc2;
  uRam00000001832e9390 =
       (uRam00000001832e9390 ^ uRam00000001832e93c0 & 0x3ffffffff) + uRam00000001832e95b0 ^
       0xdaf4fe242ae4d5e2;
  uRam00000001832e9410 =
       (uRam00000001832e9410 * 0x64c25c25d3a77e2b ^ uRam00000001832e9390) +
       (uRam00000001832e93c0 & 0x3ffffffff);
  uRam00000001832e9300 = uRam00000001832e9410 ^ uRam00000001832e9390;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0xf3df,0x29a);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c084558 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181dbbbe0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/eO; aBy (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18c08d870, runtime 6ffff3c9d870) =====

void FUN_18c08d870(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x00018c08d8bb did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181dbdc40 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/eO; aBz (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18c08e880, runtime 6ffff3c9e880) =====

void FUN_18c08e880(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x00018c08e909 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_181dbe200 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



