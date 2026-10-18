// ===== Lsixtwo/li$ux; _d62d9ba3b29fc28df4edc7de2b8c4e04 ()V (handler @ image 187d4f130, runtime 6fffef95f130) =====

void FUN_187d4f130(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187d4f20c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dbb720 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/li$ux; dvj ()F (handler @ image 187d1a6e0, runtime 6fffef92a6e0) =====

void FUN_187d1a6e0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187d1a705 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180db2b90 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/li$ux; dvk ()F (handler @ image 187d1a8f0, runtime 6fffef92a8f0) =====

void FUN_187d1a8f0(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187d1a915 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180db2c70 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/li$ux; dvl ()F (handler @ image 187d1ab00, runtime 6fffef92ab00) =====

void FUN_187d1ab00(undefined8 param_1,longlong param_2)

{
                    /* WARNING: Jumptable at 0x000187d1ab25 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180db2d50 + (ulonglong)(param_2 == 0) * 8))();
  return;
}



// ===== Lsixtwo/li$ux; dvm ([B)Ljava/lang/String; (handler @ image 187d1ad10, runtime 6fffef92ad10) =====

void FUN_187d1ad10(undefined8 param_1,undefined8 param_2,longlong param_3)

{
                    /* WARNING: Jumptable at 0x000187d1adb3 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180db2f70 + (ulonglong)(param_3 == 0) * 8))();
  return;
}



// ===== Lsixtwo/li$ux; dvn (IJ)Ljava/lang/String; (handler @ image 187d443d0, runtime 6fffef9543d0) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d443d0(longlong *param_1,undefined8 param_2,ulonglong param_3,ulonglong param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar7;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  uRam000000018319f610 = func_0x000187d4b6e0(uRam000000018319fa18 ^ 0x31731175982e97da);
  uRam000000018319f5e0 =
       (uRam000000018319f5e0 ^ uRam000000018319f610 ^ 0x42112230895028d) + 0xfdf9f777cfddffad ^
       0xc63d29196790613e;
  uRam000000018319f768 =
       (uRam000000018319f768 * -0x646108eb820058d7 ^ uRam000000018319f5e0) +
       (uRam000000018319f610 ^ 0x42112230895028d);
  uRam000000018319f528 = uRam000000018319f768 ^ uRam000000018319f5e0;
  uRam000000018319f960 = 0xfdf9f777cfddffad;
  uVar3 = (~uRam000000018319f5a8 + 0xf81a421da2883d13) *
          ((uRam000000018319f9c8 ^ 0x2967aef30b354a0c) +
          (uRam000000018319f9c8 & 0x2967aef30b354a0c) * 2);
  uVar3 = (uVar3 | uRam000000018319f968) + (uVar3 & uRam000000018319f968);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f9d8 =
       func_0x000187d4b6e0((uVar3 | 0xd17deceea9bd771e) + (uVar3 & 0xd17deceea9bd771e));
  uRam000000018319f5a8 =
       (uRam000000018319f5a8 ^ uRam000000018319f9d8 * -0xfeb9b0fe396057f) + 0xd17decee2d9f543b ^
       0xd2aab5beaa92c1c1;
  uRam000000018319f8f8 =
       (uRam000000018319f8f8 * -0x2054ea2261e88b0b ^ uRam000000018319f5a8) +
       uRam000000018319f9d8 * -0xfeb9b0fe396057f;
  uRam000000018319f500 = uRam000000018319f8f8 ^ uRam000000018319f5a8;
  uRam000000018319f698 = 0xd17decee2d9f543b;
  uVar3 = (uRam000000018319f590 ^ _UNK_180dba0a0) + uRam000000018319f6c8 + 0x84222325;
  uVar7 = (uRam000000018319f6c8 ^ _UNK_180dba0a8) + uRam000000018319f590 + 0x2634326604a9ac00;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f590 ^ _UNK_180dba0a0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319f6c8 ^ _UNK_180dba0a8;
  uRam000000018319f898 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018319f590 + 0x2634326604a9ac00) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319f6c8 + 0x84222325));
  uRam000000018319f6a8 =
       (uRam000000018319f6a8 ^ uRam000000018319f898) + 0xd9cbcd99fb565400 ^ 0x4a2a9d2fb1f6194;
  uRam000000018319f5c8 =
       (uRam000000018319f5c8 * 0x1ad49067ccce25d ^ uRam000000018319f6a8) + uRam000000018319f898;
  uRam000000018319f870 = uRam000000018319f5c8 ^ uRam000000018319f6a8;
  uRam000000018319f860 = 0xd9cbcd99fb565400;
  uRam000000018319f998 = func_0x000187d4b6e0(uRam000000018319f6b0 ^ 0x592feb7fda2d8a25);
  uVar3 = ((uRam000000018319f998 ^ 0x2634326604a9ffff) << 0x22 |
          (uRam000000018319f998 ^ 0x2634326604a9ffff) >> 0x1e) ^ 0x7fff;
  uRam000000018319fad0 = uRam000000018319f940 ^ uVar3 ^ 0x2634326604aa2bff;
  uRam000000018319f830 = (uRam000000018319f830 ^ uVar3) + 0x2634326604aa2bff ^ 0xebb56111b9b3022b;
  uRam000000018319f6e0 = (uRam000000018319f6e0 * -0x2a73b4a4cacfdc93 ^ uRam000000018319f830) + uVar3
  ;
  uRam000000018319f730 = uRam000000018319f6e0 ^ uRam000000018319f830;
  uRam000000018319f5a8 = 0x2634326604aa2bff;
  uVar3 = (uRam000000018319f590 ^ _UNK_180dba0b0) + uRam000000018319f8d8 + 0x26343266808808da;
  uVar7 = (uRam000000018319f8d8 ^ _UNK_180dba0b8) + uRam000000018319f590 + 0xd9cbcd99fb565400;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f590 ^ _UNK_180dba0b0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319f8d8 ^ _UNK_180dba0b8;
  uRam000000018319f518 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018319f590 + 0xd9cbcd99fb565400) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018319f8d8 + 0x26343266808808da));
  uVar3 = uRam000000018319f518 & 0xffffffffffffffe0;
  uRam000000018319fa70 = uRam000000018319f530 ^ uVar3 ^ 0x7fff;
  uRam000000018319f5f0 = (uRam000000018319f5f0 ^ uVar3) + 0x7fff ^ 0xd1ed13d587352fcd;
  uRam000000018319f9d8 = (uRam000000018319f9d8 * -0x4ff3af1ed6726e9d ^ uRam000000018319f5f0) + uVar3
  ;
  uRam000000018319f5c8 = uRam000000018319f9d8 ^ uRam000000018319f5f0;
  uRam000000018319f9b0 = 0x7fff;
  uVar3 = (uRam000000018319f6a8 ^ _UNK_180dba0c0) + uRam000000018319f828 + 0x84222325;
  uVar7 = (uRam000000018319f828 ^ _UNK_180dba0c8) + uRam000000018319f6a8 + 0x9bb995bb627bbf23;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f6a8 ^ _UNK_180dba0c0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319f828 ^ _UNK_180dba0c8;
  uRam000000018319f948 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018319f6a8 + 0x9bb995bb627bbf23) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319f828 + 0x84222325));
  uVar3 = (uRam000000018319f948 ^ 0x9bb995bb627bbf23) << 0x27 |
          (uRam000000018319f948 ^ 0x9bb995bb627bbf23) >> 0x19;
  uRam000000018319faa8 = (uRam000000018319faa8 ^ uVar3) + 0x64466a449d8440dd ^ 0xc6cbffafc9844f7e;
  uRam000000018319f6c0 = (uRam000000018319f6c0 * 0x13b8e04c780e9fe1 ^ uRam000000018319faa8) + uVar3;
  uRam000000018319f7d8 = uRam000000018319f6c0 ^ uRam000000018319faa8;
  uRam000000018319f510 = 0x64466a449d8440dd;
  uRam000000018319fa78 = func_0x000187d4b6e0(lRam000000018319f658 + 0x761e46617695368aU ^ 0x35);
  uVar3 = uRam000000018319fa78 * 0x3dc79aca1bda1909;
  uRam000000018319f568 = uRam000000018319f720 ^ uVar3 ^ 0x9bb995bb627c3f22;
  uRam000000018319f538 = (uRam000000018319f538 ^ uVar3) + 0x9bb995bb627c3f22 ^ 0x2e1f08bba2cdf3c;
  uRam000000018319f620 = (uRam000000018319f620 * 0x112de08f0560bc35 ^ uRam000000018319f538) + uVar3;
  uRam000000018319fa30 = uRam000000018319f620 ^ uRam000000018319f538;
  uRam000000018319f7e0 = 0x9bb995bb627c3f22;
  uRam000000018319f980 = func_0x000187d4b6e0(uRam000000018319f868 ^ 0x252324e4ba9fa9cd);
  uVar3 = uRam000000018319f980 & 0xffffffffffffe000;
  uRam000000018319f700 = uRam000000018319f528 ^ uVar3 ^ 0x7fff;
  uRam000000018319f778 = (uRam000000018319f778 ^ uVar3) + 0x7fff ^ 0x17fe9b489e0cd331;
  uRam000000018319f5e8 = (uRam000000018319f5e8 * -0x678e44f9aa10a2a3 ^ uRam000000018319f778) + uVar3
  ;
  uRam000000018319f930 = uRam000000018319f5e8 ^ uRam000000018319f778;
  uRam000000018319f868 = 0x7fff;
  uVar3 = (uRam000000018319fa40 ^ _UNK_180dba0d0) + uRam000000018319f898 + 0x84225cda;
  uVar7 = (uRam000000018319f898 ^ _UNK_180dba0d8) + uRam000000018319fa40 + 0xd11b9fbd042c91c0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319fa40 ^ _UNK_180dba0d0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319f898 ^ _UNK_180dba0d8;
  uRam000000018319f5b8 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018319fa40 + 0xd11b9fbd042c91c0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319f898 + 0x84225cda));
  uRam000000018319f6c8 = uRam000000018319f6c0 ^ 0xd11b9fbd042d6e40;
  uRam000000018319f7d0 = (uRam000000018319f7d0 ^ 0x7fff) + 0xd11b9fbd042d11bf ^ 0xc1d381ee0e82c391;
  uRam000000018319f9a0 =
       (uRam000000018319f9a0 * -0x6af4b743885cb4b1 ^ uRam000000018319f7d0) + 0x7fff;
  uRam000000018319f688 = uRam000000018319f9a0 ^ uRam000000018319f7d0;
  uRam000000018319f960 = 0xd11b9fbd042d11bf;
  uVar3 = (~uRam000000018319f680 + 0x2ee46042fbd36e41) *
          ((uRam000000018319fa90 ^ 0xd11b9fbd800f329a) +
          (uRam000000018319fa90 & 0x511b9fbd800f329a) * 2);
  uVar3 = (uVar3 | uRam000000018319f610) + (uVar3 & uRam000000018319f610);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f6d8 =
       func_0x000187d4b6e0((uVar3 | 0xffffffff7bdc5cda) + (uVar3 & 0xffffffff7bdc5cda));
  uVar3 = (uRam000000018319f6d8 << 0x18 | uRam000000018319f6d8 >> 0x28) ^ 0x2ee46042fbd36e40;
  uRam000000018319f748 = uRam000000018319f620 ^ uVar3 ^ 0x7fff;
  uRam000000018319faf0 = (uRam000000018319faf0 ^ uVar3) + 0x7fff ^ 0x5ed8222546ebb812;
  uRam000000018319f880 = (uRam000000018319f880 * 0x4ea10b3459b5a141 ^ uRam000000018319faf0) + uVar3;
  uRam000000018319f740 = uRam000000018319f880 ^ uRam000000018319faf0;
  uRam000000018319fa38 = 0x7fff;
  uVar3 = (~uRam000000018319f758 + 0xd17decee2d9f543c) *
          ((uRam000000018319f698 ^ 0xfdf9f7774bffdc88) +
          (uRam000000018319f698 & 0x7df9f7774bffdc88) * 2);
  uVar3 = (uVar3 | uRam000000018319faf8) + (uVar3 & uRam000000018319faf8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f660 =
       func_0x000187d4b6e0((uVar3 | 0x2c841b99666088b3) + (uVar3 & 0x2c841b99666088b3));
  uVar3 = (uRam000000018319f660 ^ 0x153a87af581b0df) & 0x1ffffffffffffff;
  uRam000000018319f5e0 = uRam000000018319f890 ^ uVar3 ^ 0xcf77e465fd7d53e8;
  uRam000000018319f578 = (uRam000000018319f578 ^ uVar3) + 0xcf77e465fd7d53e8 ^ 0xa2fd37ed241f58de;
  uRam000000018319fac0 = (uRam000000018319fac0 * -0x189da9f3d2b4f319 ^ uRam000000018319f578) + uVar3
  ;
  uRam000000018319fab0 = uRam000000018319fac0 ^ uRam000000018319f578;
  uRam000000018319f640 = 0xcf77e465fd7d53e8;
  uRam000000018319f8d0 = func_0x000187d4b6e0(uRam000000018319f538 ^ 0x878783a56ef920f1);
  uRam000000018319f820 =
       (uRam000000018319f820 ^ uRam000000018319f8d0 ^ 0xfdf9f777cfddffad) + 0x2c841b99e242ab96 ^
       0xdd0f18f796637637;
  uRam000000018319f5c0 =
       (uRam000000018319f5c0 * 0x47b4aa6898477607 ^ uRam000000018319f820) +
       (uRam000000018319f8d0 ^ 0xfdf9f777cfddffad);
  uRam000000018319f5d0 = uRam000000018319f5c0 ^ uRam000000018319f820;
  uRam000000018319f950 = 0x2c841b99e242ab96;
  uRam000000018319f6d8 = func_0x000187d4b6e0(uRam000000018319fae8 ^ 0x79877c624ef55fd7);
  uVar3 = uRam000000018319f6d8 << 0x3c | uRam000000018319f6d8 >> 4;
  uRam000000018319f820 = (uRam000000018319f820 ^ uVar3) + 0xd179e4660d9d5429 ^ 0x3915764ef7dd43dc;
  uRam000000018319f7d8 = (uRam000000018319f7d8 * 0x25fd4e8a70adec69 ^ uRam000000018319f820) + uVar3;
  uRam000000018319f9f0 = uRam000000018319f7d8 ^ uRam000000018319f820;
  uRam000000018319f808 = -0x2e861b99f262abd7;
  uVar3 = (uRam000000018319f728 ^ _UNK_180dba0e0) + uRam000000018319f7c8 + 0x2c841b99666088b3;
  uVar7 = (uRam000000018319f7c8 ^ _UNK_180dba0e8) + uRam000000018319f728 + 0xa2f3c8cc1b3aa852;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f728 ^ _UNK_180dba0e0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319f7c8 ^ _UNK_180dba0e8;
  uRam000000018319f5e0 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018319f728 + 0xa2f3c8cc1b3aa852) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018319f7c8 + 0x2c841b99666088b3));
  uVar3 = uRam000000018319f5e0 * 0x247e167567902793;
  uRam000000018319f860 =
       (uRam000000018319f510 ^ uVar3 ^ 0xcf77e465fd7d53e8 ^ uVar3) + 0xcf77e465fd7d53e8 ^
       0x8d5305788ac8262a;
  uRam000000018319f570 = (uRam000000018319f570 * 0x3a05ff7124b4b28f ^ uRam000000018319f860) + uVar3;
  uRam000000018319f5c0 = uRam000000018319f570 ^ uRam000000018319f860;
  uRam000000018319fad0 = 0xcf77e465fd7d53e8;
  uVar3 = (uRam000000018319f758 ^ _UNK_180dba0f0) + uRam000000018319f978 + 0xcf77e465795f70cd;
  uVar7 = (uRam000000018319f978 ^ _UNK_180dba0f8) + uRam000000018319f758 + 0xcf77e465fd7d53e8;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f758 ^ _UNK_180dba0f0;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319f978 ^ _UNK_180dba0f8;
  uRam000000018319f878 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018319f758 + 0xcf77e465fd7d53e8) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018319f978 + 0xcf77e465795f70cd));
  uRam000000018319f790 = uRam000000018319f878 ^ 0xcf77e465fd7d53e8;
  uRam000000018319f990 = uRam000000018319f990 ^ uRam000000018319f790 ^ 0xafa46712f989d969;
  uRam000000018319f8c8 =
       (uRam000000018319f8c8 * -0x68788c04bd424db7 ^ uRam000000018319f990) + uRam000000018319f790;
  uRam000000018319fa98 = uRam000000018319f8c8 ^ uRam000000018319f990;
  uRam000000018319f898 = 0;
  uVar3 = (uRam000000018319fae8 ^ 0x84225cda) + uRam000000018319f790 + 0x84225cda;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319fae8 ^ 0x84225cda;
  uVar7 = ((uRam000000018319f790 + uRam000000018319fae8) * 0x2000 |
          uRam000000018319f790 + uRam000000018319fae8 >> 0x33) ^ uRam000000018319f790;
  uRam000000018319f7a8 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) - uRam000000018319fae8 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319f790 + 0x84225cda));
  uVar3 = (uRam000000018319f7a8 << 0xd | uRam000000018319f7a8 >> 0x33) * -0xef8159f0ce1e8e3;
  uRam000000018319f830 = uRam000000018319f5c0 ^ uVar3 ^ 0x7fff;
  uRam000000018319f7d8 = (uRam000000018319f7d8 ^ uVar3) + 0x7fff ^ 0xc2723b9fbd6da48f;
  uRam000000018319f820 = (uRam000000018319f820 * 0x129dc0f6c9ba903 ^ uRam000000018319f7d8) + uVar3;
  uRam000000018319fab8 = uRam000000018319f820 ^ uRam000000018319f7d8;
  uRam000000018319f950 = 0x7fff;
  uRam000000018319fa08 = func_0x000187d4b6e0(uRam000000018319f5a8 ^ 0x87dcfd544d08000c);
  uVar3 = uRam000000018319fa08 >> 1 | uRam000000018319fa08;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          uRam000000018319fa08;
  uVar3 = (uVar3 & 0x1ffffffffffff) << 0xe | uVar3 >> 0x32;
  uRam000000018319fa78 = (uRam000000018319fa78 ^ uVar3) + 0x206088830220052 ^ 0xfba96a8fe821385;
  uRam000000018319f8e0 = (uRam000000018319f8e0 * -0x1cb3dc9a41361a77 ^ uRam000000018319fa78) + uVar3
  ;
  uRam000000018319f5b0 = uRam000000018319f8e0 ^ uRam000000018319fa78;
  uRam000000018319f900 = 0x206088830220052;
  uVar3 = ((uRam000000018319fa18 ^ 0x84225cda) +
          (ulonglong)((uint)uRam000000018319fa18 & 0x84225cda) * 2) * -uRam000000018319f7e0;
  uVar3 = (uVar3 | uRam000000018319f7e0) + (uVar3 & uRam000000018319f7e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319faa8 =
       func_0x000187d4b6e0((uVar3 | 0x84225cda) + (ulonglong)((uint)uVar3 & 0x84225cda));
  uVar3 = (uRam000000018319faa8 ^ 0x7fff) & 0x7fffffffffffffff ^ 0x7fff;
  uRam000000018319fa68 = uRam000000018319f630 ^ uVar3 ^ 0x7fff;
  uRam000000018319fa20 = (uRam000000018319fa20 ^ uVar3) + 0x7fff ^ 0xc4ce2678f08d01dc;
  uRam000000018319fae8 = (uRam000000018319fae8 * 0x77baa77e6fff026d ^ uRam000000018319fa20) + uVar3;
  uRam000000018319f900 = uRam000000018319fae8 ^ uRam000000018319fa20;
  uRam000000018319f958 = 0x7fff;
  uVar3 = (uRam000000018319f998 ^ _UNK_180dba100) + uRam000000018319f678 + 0xf9d8e554436ade05;
  uVar7 = (uRam000000018319f678 ^ _UNK_180dba108) + uRam000000018319f998 + 0xf9d8e554c748fd20;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f998 ^ _UNK_180dba100;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319f678 ^ _UNK_180dba108;
  uRam000000018319fa90 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) -
                           (uRam000000018319f998 + 0xf9d8e554c748fd20) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) -
                           (uRam000000018319f678 + 0xf9d8e554436ade05));
  uVar3 = (uRam000000018319fa90 ^ 0xf9d8e554c748fd20) * -0x5970a1657a8d76cb & 0xfffffffffffffffe ^
          0xf9d8e554c748fd20;
  uRam000000018319f818 = uRam000000018319f818 ^ uVar3 ^ 0x2402f46d4ac2a72a;
  uRam000000018319f708 = (uRam000000018319f708 * -0x4b3c6d67402e0de1 ^ uRam000000018319f818) + uVar3
  ;
  uRam000000018319f8e0 = uRam000000018319f708 ^ uRam000000018319f818;
  uRam000000018319f9b8 = uRam000000018319f820;
  uRam000000018319f500 = 0;
  uRam000000018319f750 = func_0x000187d4b6e0(uRam000000018319f7d8 + 0xffa4007c260021ff ^ 0x9c);
  uVar3 = (ulonglong)(~(uint)uRam000000018319f750 & 0x7fff);
  uRam000000018319f938 = (uRam000000018319f938 ^ uVar3) + 0x7fff ^ 0x4d04ba8a29bacf78;
  uRam000000018319f770 = (uRam000000018319f770 * 0x16e65a5cc6e7adab ^ uRam000000018319f938) + uVar3;
  uRam000000018319f9f0 = uRam000000018319f770 ^ uRam000000018319f938;
  uRam000000018319f598 = 0x7fff;
  uVar3 = (~uRam000000018319f5f0 + 0x8000) *
          ((param_4 ^ 0x84222325 ^ uRam000000018319f758) +
          ((param_4 ^ 0x84222325) & uRam000000018319f758) * 2);
  uVar3 = (uVar3 | uRam000000018319f810) + (uVar3 & uRam000000018319f810);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f538 =
       func_0x000187d4b6e0((param_4 ^ 0x84225cda | uVar3) + (uVar3 & (param_4 ^ 0x84225cda)));
  uVar3 = uRam000000018319f538 >> 1 | uRam000000018319f538;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          uRam000000018319f538;
  uVar2 = (uint)param_4 & 0x7fff;
  uVar7 = (ulonglong)uVar2;
  uRam000000018319f768 = (uRam000000018319f768 ^ uVar3) + uVar7 ^ 0x12ffdf89d5c8e8b0;
  uRam000000018319fa48 = (uRam000000018319fa48 * 0x2356c63a5968c1e7 ^ uRam000000018319f768) + uVar3;
  uRam000000018319f608 = uRam000000018319fa48 ^ uRam000000018319f768;
  auVar5._4_4_ = 0;
  auVar5._0_4_ = uVar2 ^ 0x84222325;
  auVar5._8_8_ = param_3 & 0xffffffff;
  auVar6 = pshufb(auVar5 ^ _UNK_180dba110,_UNK_1800170c0);
  uVar4 = auVar6._8_8_ + auVar6._0_8_;
  uVar3 = uVar4 + uRam000000018319f938;
  if (auVar6._4_4_ < 0) {
    uVar3 = uRam000000018319f7a8 ^ uVar4;
  }
  uRam000000018319f900 = uVar7;
  uRam000000018319f6a8 = func_0x000187d4b6e0(SUB161(auVar5 ^ _UNK_180dba110,5) ^ uVar3);
  uRam000000018319fa08 = uVar7 ^ param_3 & 0xffffffff;
  uRam000000018319f710 =
       (uRam000000018319f9c8 ^ uRam000000018319f6a8 * -0x322676eeaeb91ff) + uRam000000018319fa08 ^
       0x25187f0ebf3817c5;
  uRam000000018319f9c8 =
       (uRam000000018319f9c8 * 0x5908b4f20d23b017 ^ uRam000000018319f710) +
       uRam000000018319f6a8 * -0x322676eeaeb91ff;
  uRam000000018319f710 = uRam000000018319f9c8 ^ uRam000000018319f710;
  uVar3 = (~uRam000000018319f6b8 + 0xfa754101) *
          ((uRam000000018319f958 ^ 0x53849fd9) +
          (ulonglong)((uint)uRam000000018319f958 & 0x53849fd9) * 2);
  uVar3 = (uVar3 | uRam000000018319f9b8) + (uVar3 & uRam000000018319f9b8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f740 =
       func_0x000187d4b6e0((uVar3 | 0xa9f1ded9) + (ulonglong)((uint)uVar3 & 0xa9f1ded9));
  uRam000000018319f690 =
       (uRam000000018319f690 ^ uRam000000018319f740 ^ 0xfa754100) + 0xfff7fdfc ^ 0x5a2280e791450363;
  uRam000000018319f9b0 =
       (uRam000000018319f9b0 * -0x2dc80d2f39a45865 ^ uRam000000018319f690) +
       (uRam000000018319f740 ^ 0xfa754100);
  uRam000000018319f570 = uRam000000018319f9b0 ^ uRam000000018319f690;
  uRam000000018319f9b8 = 0xfff7fdfc;
  uRam000000018319f6f0 = func_0x000187d4b6e0(uRam000000018319f7f8 ^ 0x2bff37bdffc2aa);
  uVar3 = (uRam000000018319f6f0 ^ 0xd89fc27e) & 0x7ffffffff;
  uRam000000018319f730 = (uRam000000018319f730 ^ uVar3) + 0x4c6fd7e7 ^ 0x60034220c7f263ba;
  uRam000000018319f620 = (uRam000000018319f620 * 0x6306c65a407e4d07 ^ uRam000000018319f730) + uVar3;
  uRam000000018319faa8 = uRam000000018319f620 ^ uRam000000018319f730;
  uRam000000018319f538 = 0x4c6fd7e7;
  uRam000000018319f8c8 = func_0x000187d4b6e0(uRam000000018319f830 + 0xfff7009e72ff5eff ^ 0x24);
  uRam000000018319f530 =
       (uRam000000018319f530 ^ uRam000000018319f8c8 & 0x7fffffffffffffff) - 0x27815490 ^
       0x926a6dc27f95d1c0;
  uRam000000018319f500 =
       (uRam000000018319f500 * 0x541b70608096d877 ^ uRam000000018319f530) +
       (uRam000000018319f8c8 & 0x7fffffffffffffff);
  uRam000000018319f870 = uRam000000018319f500 ^ uRam000000018319f530;
  uRam000000018319f9e8 = 0xd87eab70;
  uVar3 = (~uRam000000018319f528 + 0xd87eab71) *
          ((uRam000000018319f9a0 ^ 0xa3a384c8) +
          (ulonglong)((uint)uRam000000018319f9a0 & 0xa3a384c8) * 2);
  uVar3 = (uVar3 | uRam000000018319f878) + (uVar3 & uRam000000018319f878);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f708 =
       func_0x000187d4b6e0((uVar3 | 0x7bdd2fb8) + (ulonglong)((uint)uVar3 & 0x7bdd2fb8));
  uVar3 = uRam000000018319f708 ^ 0x2781a7ed;
  uRam000000018319fa40 = uRam000000018319f548 ^ uVar3 ^ 0x10000535d;
  uRam000000018319f770 = (uRam000000018319f770 ^ uVar3) + 0x10000535d ^ 0x6fdd58caeea73af9;
  uRam000000018319f808 = (uRam000000018319f808 * 0x639abf2c17e2f405 ^ uRam000000018319f770) + uVar3;
  uRam000000018319faf8 = uRam000000018319f808 ^ uRam000000018319f770;
  uRam000000018319f7c0 = 0x535d;
  uVar3 = (uRam000000018319f588 ^ _UNK_180dba120) + uRam000000018319fa38 + 0x84222325;
  uVar7 = (uRam000000018319fa38 ^ _UNK_180dba128) + uRam000000018319f588 + 0x6a7ee653;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f588 ^ _UNK_180dba120;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319fa38 ^ _UNK_180dba128;
  uRam000000018319f528 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018319f588 + 0x6a7ee653) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319fa38 + 0x84222325));
  uVar3 = (uRam000000018319f528 * 0x47f6480f3e292879 << 0x20 |
          uRam000000018319f528 * 0x47f6480f3e292879 >> 0x20) * 0x1ec9e429fb505035;
  uRam000000018319f6e0 = (uRam000000018319f6e0 ^ uVar3) - 0x6a7ee653 ^ 0x734daf311841e34e;
  uRam000000018319f6d8 = (uRam000000018319f6d8 * 0xbe6c942c1290ec1 ^ uRam000000018319f6e0) + uVar3;
  uRam000000018319fa48 = uRam000000018319f6d8 ^ uRam000000018319f6e0;
  uRam000000018319f920 = 0x958119ad;
  uVar3 = (~uRam000000018319f7b8 + 0x6a7ee654) *
          ((uRam000000018319fae8 ^ 0x84227078) +
          (ulonglong)((uint)uRam000000018319fae8 & 0x84227078) * 2);
  uVar3 = (uVar3 | uRam000000018319f8e0) + (uVar3 & uRam000000018319f8e0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f690 =
       func_0x000187d4b6e0((uVar3 | 0xee5c962b) + (ulonglong)((uint)uVar3 & 0xee5c962b));
  uVar3 = (ulonglong)(~(uint)uRam000000018319f690 & 0x535d);
  uRam000000018319f850 = uRam000000018319f720 ^ uVar3 ^ 0x6a7f39b0;
  uRam000000018319f940 = (uRam000000018319f940 ^ uVar3) + 0x6a7f39b0 ^ 0x2b52732b92828c8f;
  uRam000000018319f558 = (uRam000000018319f558 * 0x262d9226ff6060e1 ^ uRam000000018319f940) + uVar3;
  uRam000000018319fa00 = uRam000000018319f558 ^ uRam000000018319f940;
  uRam000000018319f8c8 = 0x6a7f39b0;
  uVar3 = (~uRam000000018319f568 + 0x958119ae) *
          ((uRam000000018319f760 ^ 0xee5d1a95) +
          (ulonglong)((uint)uRam000000018319f760 & 0xee5d1a95) * 2);
  uVar3 = (uVar3 | uRam000000018319f8c0) + (uVar3 & uRam000000018319f8c0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319fad0 =
       func_0x000187d4b6e0((uVar3 | 0x7bdc0338) + (ulonglong)((uint)uVar3 & 0x7bdc0338));
  uVar3 = uRam000000018319fad0 ^ 0xffff39bd;
  uRam000000018319f500 = uRam000000018319f730 ^ uVar3 ^ 0x10000535d;
  uRam000000018319f9b8 = (uRam000000018319f9b8 ^ uVar3) + 0x10000535d ^ 0x3f76e9bdf8f08407;
  uRam000000018319f848 = (uRam000000018319f848 * 0x3156084e13c0acef ^ uRam000000018319f9b8) + uVar3;
  uRam000000018319f798 = uRam000000018319f848 ^ uRam000000018319f9b8;
  uRam000000018319f7e8 = 0x535d;
  uVar3 = (~uRam000000018319fad8 + 0xb18c539d) *
          ((uRam000000018319fae8 ^ 0x84222325) +
          (ulonglong)((uint)uRam000000018319fae8 & 0x84222325) * 2);
  uVar3 = (uVar3 | uRam000000018319f728) + (uVar3 & uRam000000018319f728);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f530 =
       func_0x000187d4b6e0((uVar3 | 0x35ae70b9) + (ulonglong)((uint)uVar3 & 0x35ae70b9));
  uVar3 = (uRam000000018319f530 & 0xffffffff) << 0x1f | uRam000000018319f530 >> 0x21;
  uRam000000018319f980 = (uRam000000018319f980 ^ uVar3) - 0xb18c539c ^ 0x1a31a73f52f38c54;
  uRam000000018319f848 = (uRam000000018319f848 * -0x3f7f51695d5ad86d ^ uRam000000018319f980) + uVar3
  ;
  uRam000000018319f9a0 = uRam000000018319f848 ^ uRam000000018319f980;
  uRam000000018319f738 = 0x4e73ac64;
  uVar3 = (uRam000000018319fa48 ^ _UNK_180dba130) + uRam000000018319f7d8 + 0x84227078;
  uVar7 = (uRam000000018319f7d8 ^ _UNK_180dba138) + uRam000000018319fa48 + 0xb18c539c;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319fa48 ^ _UNK_180dba130;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319f7d8 ^ _UNK_180dba138;
  uRam000000018319f750 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018319fa48 + 0xb18c539c) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319f7d8 + 0x84227078));
  uVar3 = (uRam000000018319f750 & 0x7fffffffff) * -0x2b529c1c1cd86f3d;
  uRam000000018319f570 = uRam000000018319f6e0 ^ uVar3 ^ 0xb18ca6f9;
  uRam000000018319f670 = (uRam000000018319f670 ^ uVar3) + 0xb18ca6f9 ^ 0x24fa25f292256b1f;
  uRam000000018319f680 = (uRam000000018319f680 * -0x532ab10349038d77 ^ uRam000000018319f670) + uVar3
  ;
  uRam000000018319f558 = uRam000000018319f680 ^ uRam000000018319f670;
  uRam000000018319fa70 = 0xb18ca6f9;
  uVar3 = (~uRam000000018319fa88 + 0x4c6fd7e8) *
          ((uRam000000018319f678 ^ 0x7bd5ded9) +
          (ulonglong)((uint)uRam000000018319f678 & 0x7bd5ded9) * 2);
  uVar3 = (uVar3 | uRam000000018319f718) + (uVar3 & uRam000000018319f718);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f918 =
       func_0x000187d4b6e0((uVar3 | 0x37ba093e) + (ulonglong)((uint)uVar3 & 0x37ba093e));
  uVar7 = uRam000000018319f918 ^ 0x4c6d73ced0af2f98;
  uVar3 = uVar7 >> 1 | uVar7;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar7 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x10 ^
          uVar7;
  uRam000000018319f810 = uRam000000018319f6a8 ^ uVar7 ^ 0x14c67d5e3;
  uRam000000018319f938 = (uRam000000018319f938 ^ uVar7) + 0x14c67d5e3 ^ 0x6e2b7c28c2203628;
  uRam000000018319f870 = (uRam000000018319f870 * 0x64d2d53c47f1c207 ^ uRam000000018319f938) + uVar7;
  uRam000000018319fa88 = uRam000000018319f870 ^ uRam000000018319f938;
  uRam000000018319f5a0 = 0x4c67d5e3;
  uVar3 = (uRam000000018319f550 ^ _UNK_180dba140) + uRam000000018319f550 + 0x7bd5ded9;
  uVar7 = (uRam000000018319f550 ^ _UNK_180dba148) + uRam000000018319f550 + 0x4c6fd7e7;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f550 ^ _UNK_180dba140;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319f550 ^ _UNK_180dba148;
  uRam000000018319f710 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018319f550 + 0x4c6fd7e7) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319f550 + 0x7bd5ded9));
  uVar3 = uRam000000018319f710 & 0x7ffffffff ^ 0xfff7fdfc;
  uRam000000018319f900 = (uRam000000018319f900 ^ uVar3) + 0xb3982a1b ^ 0x79343c23ce6a3b27;
  uRam000000018319f7d0 = (uRam000000018319f7d0 * 0x538437a6e3f9ae47 ^ uRam000000018319f900) + uVar3;
  uRam000000018319f568 = uRam000000018319f7d0 ^ uRam000000018319f900;
  uRam000000018319f8a8 = 0xb3982a1b;
  uVar3 = (~uRam000000018319f5a8 + 0x4c6fd7e8) *
          ((uRam000000018319fa10 ^ 0x7bd5ded9) +
          (ulonglong)((uint)uRam000000018319fa10 & 0x7bd5ded9) * 2);
  uVar3 = (uVar3 | uRam000000018319f790) + (uVar3 & uRam000000018319f790);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f6a8 =
       func_0x000187d4b6e0((uVar3 | 0x37ba093e) + (ulonglong)((uint)uVar3 & 0x37ba093e));
  uVar3 = uRam000000018319f6a8 ^ 0xffffffff;
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
  uRam000000018319fa98 = (uRam000000018319fa98 ^ uVar3) + 0x4c67d5e4 ^ 0x95aa852bc135ee6;
  uRam000000018319f920 = (uRam000000018319f920 * -0x7a94f8072e2a7c71 ^ uRam000000018319fa98) + uVar3
  ;
  uRam000000018319f5d0 = uRam000000018319f920 ^ uRam000000018319fa98;
  uRam000000018319fac0 = 0x4c67d5e4;
  uRam000000018319f958 = func_0x000187d4b6e0(lRam000000018319f5d8 + 0xff5dff6a8dffecffU ^ 0x92);
  uVar3 = uRam000000018319f958 & 0x3ffffffffffffffe;
  uRam000000018319f570 = uRam000000018319f9e8 ^ uVar3 ^ 0x14c67d5e3;
  uRam000000018319f748 = (uRam000000018319f748 ^ uVar3) + 0x14c67d5e3 ^ 0xfaa2320c9a86ae0e;
  uRam000000018319f558 = (uRam000000018319f558 * 0x10fda837cd24437d ^ uRam000000018319f748) + uVar3;
  uRam000000018319f8d8 = uRam000000018319f558 ^ uRam000000018319f748;
  uRam000000018319fa08 = 0x4c67d5e3;
  uVar3 = (~uRam000000018319fa80 + 0x4c67d5e4) *
          ((uRam000000018319f8b0 ^ 0xc845f6c6) +
          (ulonglong)((uint)uRam000000018319f8b0 & 0xc845f6c6) * 2);
  uVar3 = (uVar3 | uRam000000018319f6d8) + (uVar3 & uRam000000018319f6d8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319fac8 =
       func_0x000187d4b6e0((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325));
  uRam000000018319f528 = uRam000000018319fac8 << 0xe | uRam000000018319fac8 >> 0x32;
  uRam000000018319f910 = uRam000000018319f910 ^ uRam000000018319f528 ^ 0x667afdde34d6caaa;
  uRam000000018319f990 =
       (uRam000000018319f990 * -0x224432959ce26f17 ^ uRam000000018319f910) + uRam000000018319f528;
  uRam000000018319fa98 = uRam000000018319f990 ^ uRam000000018319f910;
  uRam000000018319f558 = 0;
  uVar3 = (uRam000000018319f590 ^ 0x84227078) + uRam000000018319f530 + 0x84227078;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f590 ^ 0x84227078;
  uVar7 = ((uRam000000018319f530 + uRam000000018319f590) * 0x2000 |
          uRam000000018319f530 + uRam000000018319f590 >> 0x33) ^ uRam000000018319f530;
  uRam000000018319fa50 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) - uRam000000018319f590 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319f530 + 0x84227078));
  uVar3 = uRam000000018319fa50 & 0x1fffffffffffffff;
  uRam000000018319f900 = uRam000000018319f530 ^ uVar3 ^ 0x535d;
  uRam000000018319f530 = (uRam000000018319f530 ^ uVar3) + 0x535d ^ 0x4e78e9e13a6ad83f;
  uRam000000018319f970 = (uRam000000018319f970 * -0xcc8b829bd2c8d77 ^ uRam000000018319f530) + uVar3;
  uRam000000018319f558 = uRam000000018319f970 ^ uRam000000018319f530;
  uRam000000018319f608 = 0x535d;
  uVar3 = (uRam000000018319f550 ^ _UNK_180dba150) + uRam000000018319faf8 + 0x7bd5ded9;
  uVar7 = (uRam000000018319faf8 ^ _UNK_180dba158) + uRam000000018319f550 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f550 ^ _UNK_180dba150;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319faf8 ^ _UNK_180dba158;
  uRam000000018319f6d0 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018319f550 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319faf8 + 0x7bd5ded9));
  uVar3 = (uRam000000018319f6d0 ^ 0xfff7fdfb00080204) & 0x7fffffffffffffff;
  uRam000000018319f5c8 = (uRam000000018319f5c8 ^ uVar3) + 0x80203 ^ 0x577008cd0a7e869e;
  uRam000000018319f628 = (uRam000000018319f628 * -0x49c3f51935057663 ^ uRam000000018319f5c8) + uVar3
  ;
  uRam000000018319f970 = uRam000000018319f628 ^ uRam000000018319f5c8;
  uRam000000018319f9a8 = uRam000000018319f9c0 ^ 0x80203;
  uRam000000018319f508 = 0x80203;
  uRam000000018319f888 = func_0x000187d4b6e0(uRam000000018319f680 ^ 0x5bff8739ffb4dc);
  uRam000000018319f6b0 = uRam000000018319f6b0 ^ uRam000000018319f888 ^ 0x80203 ^ 0x33b29543196361bc;
  uRam000000018319fae0 =
       (uRam000000018319fae0 * 0x7d0775647089fca3 ^ uRam000000018319f6b0) +
       (uRam000000018319f888 ^ 0x80203);
  uRam000000018319f928 = uRam000000018319fae0 ^ uRam000000018319f6b0;
  uRam000000018319f7b8 = 0;
  uVar3 = (uRam000000018319f6d0 ^ _UNK_180dba160) + uRam000000018319f808 + 0x53849fd9;
  uVar7 = (uRam000000018319f808 ^ _UNK_180dba168) + uRam000000018319f6d0 + 0xd7a6bcfc;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ uRam000000018319f6d0 ^ _UNK_180dba160;
  uVar7 = (uVar7 * 0x2000 | uVar7 >> 0x33) ^ uRam000000018319f808 ^ _UNK_180dba168;
  uRam000000018319fa48 =
       func_0x000187d4b6e0((uVar7 << 0x1d | uVar7 >> 0x23) - (uRam000000018319f6d0 + 0xd7a6bcfc) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (uRam000000018319f808 + 0x53849fd9));
  uVar3 = ((uRam000000018319fa48 ^ 0xd7a6bcfc) << 3 | uRam000000018319fa48 >> 0x3d) *
          0x4ece17f3107a9835;
  uRam000000018319f598 = uRam000000018319f598 ^ uVar3 ^ 0xb146c1a3bb297310;
  uRam000000018319f5a8 = (uRam000000018319f5a8 * 0x7b1002f29928d537 ^ uRam000000018319f598) + uVar3;
  uRam000000018319f860 = uRam000000018319f5a8 ^ uRam000000018319f598;
  uRam000000018319fa00 = 0;
  uVar3 = ((uRam000000018319f5b0 ^ 0x84227078) +
          (ulonglong)((uint)uRam000000018319f5b0 & 0x84227078) * 2) * -lRam000000018319f988;
  uVar3 = (uVar3 | uRam000000018319f610) + (uVar3 & uRam000000018319f610);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  uRam000000018319f780 =
       func_0x000187d4b6e0((uVar3 | 0x84227078) + (ulonglong)((uint)uVar3 & 0x84227078));
  uVar3 = (ulonglong)(~(uint)uRam000000018319f780 & 0x535d);
  uRam000000018319f880 = uRam000000018319f7c8 ^ uVar3 ^ 0x535d;
  uRam000000018319f980 = (uRam000000018319f980 ^ uVar3) + 0x535d ^ 0xed3bedd292053568;
  uRam000000018319fa30 = (uRam000000018319fa30 * 0x1260793dd3375ae9 ^ uRam000000018319f980) + uVar3;
  uRam000000018319f788 = uRam000000018319fa30 ^ uRam000000018319f980;
  uRam000000018319f908 = 0x535d;
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b291,0x439);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187d46d89 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180db8718 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/li$ux; dvo (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 187d4b770, runtime 6fffef95b770) =====

void FUN_187d4b770(void)

{
  longlong in_stack_00000030;
  
                    /* WARNING: Jumptable at 0x000187d4b7ac did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dba2f0 + (ulonglong)(in_stack_00000030 == 0) * 8))();
  return;
}



// ===== Lsixtwo/li$ux; dvp (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 187d4c660, runtime 6fffef95c660) =====

void FUN_187d4c660(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187d4c6dd did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dba830 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/li$ux; fromJson (Lcom/google/gson/JsonObject;)V (handler @ image 187cfe6c0, runtime 6fffef90e6c0) =====

void FUN_187cfe6c0(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b291,0x439);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187cfe79f did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180dab110 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



// ===== Lsixtwo/li$ux; toJson ()Lcom/google/gson/JsonObject; (handler @ image 187d0c460, runtime 6fffef91c460) =====

void FUN_187d0c460(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b291,0x439);
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187d0c53c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180daeea0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}



