// ===== STITCHED CORPUS: sixtwo.li$ux =====
// handlers: 10  continuation blocks: 111  unresolved table targets: 0
// tables not in tables.json: ['0x170c0', '0x333d68', '0xdb3060', '0xdb3658', '0xdb3668', '0xdb3678', '0xdb3688', '0xdb3698', '0xdb36a8', '0xdb4948', '0xdb4958', '0xdb4968', '0xdb4978', '0xdb4988', '0xdba0a0', '0xdba0a8', '0xdba0b0', '0xdba0b8', '0xdba0c0', '0xdba0c8']

// ===== Lsixtwo/li$ux; _d62d9ba3b29fc28df4edc7de2b8c4e04 ()V (handler @ image 187d4f130, runtime 6fffef95f130) =====

void FUN_187d4f130(longlong *param_1)

{
  char cVar1;
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x226,0xd)
      /* POOL[0x226,0xd]: ang/String; | < */;
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
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b291,0x439)
      /* POOL[0x1b291,0x439]: lIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | strikethrough | sixtwo/lo | IhiKw | cay | caz | cGYYJ | cae | QztRs | cax | join | duL | sixtwo/lp | duM | duN | sixtwo/ll | sixtwo/rq | diJ | ([BLjava/lang/Class;)Ljava/lang/Object; | (Lsixtwo/li$uv;FF)V | bYk | ()Lsixtwo/li$ux; | dvk | whvPK | dvl | bYm | bUPgU | cag | toMap | */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x857,0x26)
      /* POOL[0x857,0x26]: odHandle; | iUrOn | Ljava/util/Map; | java/l */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b291,0x439)
      /* POOL[0x1b291,0x439]: lIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | strikethrough | sixtwo/lo | IhiKw | cay | caz | cGYYJ | cae | QztRs | cax | join | duL | sixtwo/lp | duM | duN | sixtwo/ll | sixtwo/rq | diJ | ([BLjava/lang/Class;)Ljava/lang/Object; | (Lsixtwo/li$uv;FF)V | bYk | ()Lsixtwo/li$ux; | dvk | whvPK | dvl | bYm | bUPgU | cag | toMap | */;
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
  
  BLOB_DECRYPTOR(image-addr,resolved-ptr,len)(param_1,*plRam000000018301ee50 + 0x1b291,0x439)
      /* POOL[0x1b291,0x439]: lIr | VTLGQ | iJoXV | UKEBq | dvg | lIxiX | sixtwo/li$ux | eIyXe | EaEPG | zyFki | dvf | DoUKn | LTFKm | aGqsB | dvn | mREUQ | OGLuw | dvm | sixtwo/li | FRMBe | jrqOK | Lsixtwo/li$ux; | bYo | YvJxf | Lsixtwo/li$ut; | paGtU | rPcli | FbSiY | NKduB | bYq | BaEbn | bYp | sixtwo/lm$uy | color | bold | italic | underlined | strikethrough | sixtwo/lo | IhiKw | cay | caz | cGYYJ | cae | QztRs | cax | join | duL | sixtwo/lp | duM | duN | sixtwo/ll | sixtwo/rq | diJ | ([BLjava/lang/Class;)Ljava/lang/Object; | (Lsixtwo/li$uv;FF)V | bYk | ()Lsixtwo/li$ux; | dvk | whvPK | dvl | bYm | bUPgU | cag | toMap | */;
  cVar1 = JNI->ExceptionCheck(param_1);
                    /* WARNING: Jumptable at 0x000187d0c53c did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180daeea0 + (ulonglong)(cVar1 == '\0') * 8))();
  return;
}




// ===== CONTINUATION BLOCKS =====
// ----- block @ rva 0x7cfe7a2 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187cfe7a2(void)

{
  FUN_190ddce00();
  (*_DAT_180dabb78)();
  return;
}


// ----- block @ rva 0x7d03d4d -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d03d4d(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
  (*_DAT_180dabba8)();
  return;
}


// ----- block @ rva 0x7d03e47 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d03e47(void)

{
  FUN_190ddfc90();
  (*_DAT_180dab838)();
  return;
}


// ----- block @ rva 0x7d044eb -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d044eb(void)

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


// ----- block @ rva 0x7d0797c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d0797c(void)

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


// ----- block @ rva 0x7d07cc3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d07cc3(void)

{
  FUN_190dd72e0();
  (*_DAT_180dac068)();
  return;
}


// ----- block @ rva 0x7d07f87 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d07f87(void)

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


// ----- block @ rva 0x7d0ba03 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d0ba03(void)

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


// ----- block @ rva 0x7d0c300 -----

void FUN_187d0c300(void)

{
  return;
}


// ----- block @ rva 0x7d0c36c -----

void FUN_187d0c36c(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d0c53f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d0c53f(void)

{
  FUN_190ddce00();
  (*_DAT_180daf6c8)();
  return;
}


// ----- block @ rva 0x7d1259f -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1259f(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180daf1f8)();
  return;
}


// ----- block @ rva 0x7d12aa3 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d12aa3(void)

{
  FUN_190de3220();
  (*_DAT_180dafbc8)();
  return;
}


// ----- block @ rva 0x7d162cd -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d162cd(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->SetObjectArrayElement /*0x570*/))();
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


// ----- block @ rva 0x7d19b72 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d19b72(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->NewObjectArray /*0x560*/))();
  (*_DAT_180daf828)();
  return;
}


// ----- block @ rva 0x7d1a02b -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a02b(void)

{
  FUN_190ddfc90();
  (*_DAT_180dafa78)();
  return;
}


// ----- block @ rva 0x7d1a212 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a212(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180dafa88)();
  return;
}


// ----- block @ rva 0x7d1a4b4 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d1a4b4(void)

{
  longlong in_stack_00000060;
  
  switch(in_stack_00000060 == 0) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d1a50c -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a50c(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dafc48)();
  return;
}


// ----- block @ rva 0x7d1a548 -----

void FUN_187d1a548(void)

{
  return;
}


// ----- block @ rva 0x7d1a708 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a708(undefined4 param_1)

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


// ----- block @ rva 0x7d1a744 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a744(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180db2bf8)();
  return;
}


// ----- block @ rva 0x7d1a769 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d1a769(void)

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


// ----- block @ rva 0x7d1a781 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a781(void)

{
  FUN_190dd72e0();
  (*_DAT_180db2bd8)();
  return;
}


// ----- block @ rva 0x7d1a7a9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d1a7a9(void)

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


// ----- block @ rva 0x7d1a7cd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a7cd(void)

{
  FUN_190dd9df0();
  (*_DAT_180db2c28)();
  return;
}


// ----- block @ rva 0x7d1a827 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a827(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180db2c18)();
  return;
}


// ----- block @ rva 0x7d1a85e -----

void FUN_187d1a85e(void)

{
  return;
}


// ----- block @ rva 0x7d1a86b -----

void FUN_187d1a86b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d1a918 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a918(undefined4 param_1)

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


// ----- block @ rva 0x7d1a954 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a954(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180db2ca8)();
  return;
}


// ----- block @ rva 0x7d1a979 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d1a979(void)

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


// ----- block @ rva 0x7d1a991 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a991(void)

{
  FUN_190dd72e0();
  (*_DAT_180db2cd8)();
  return;
}


// ----- block @ rva 0x7d1a9b9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d1a9b9(void)

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


// ----- block @ rva 0x7d1a9dd -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1a9dd(void)

{
  FUN_190dd9df0();
  (*_DAT_180db2cb8)();
  return;
}


// ----- block @ rva 0x7d1aa10 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d1aa10(void)

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


// ----- block @ rva 0x7d1aa37 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1aa37(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180db2ce8)();
  return;
}


// ----- block @ rva 0x7d1aa5e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1aa5e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180db2cf8)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x7d1aa6e -----

void FUN_187d1aa6e(void)

{
  return;
}


// ----- block @ rva 0x7d1aa7b -----

void FUN_187d1aa7b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d1ab28 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1ab28(undefined4 param_1)

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


// ----- block @ rva 0x7d1ab89 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d1ab89(void)

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


// ----- block @ rva 0x7d1aba1 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1aba1(void)

{
  FUN_190dd72e0();
  (*_DAT_180db2d78)();
  return;
}


// ----- block @ rva 0x7d1abc9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d1abc9(void)

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


// ----- block @ rva 0x7d1ac20 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d1ac20(void)

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


// ----- block @ rva 0x7d1ac47 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1ac47(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->GetFloatField /*0x330*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180db2db8)();
  return;
}


// ----- block @ rva 0x7d1ac6e -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d1ac6e(void)

{
  char in_AL;
  undefined4 unaff_XMM6_Da;
  
  if (in_AL != '\0') {
    unaff_XMM6_Da = 0;
  }
  (*_DAT_180db2d88)(unaff_XMM6_Da);
  return;
}


// ----- block @ rva 0x7d1ac7e -----

void FUN_187d1ac7e(void)

{
  return;
}


// ----- block @ rva 0x7d1ac8b -----

void FUN_187d1ac8b(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d1adb6 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Switch with 1 destination removed at 0x000187d1aded */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_187d1adb6(void)

{
  longlong *unaff_R13;
  
  FUN_190dd72e0();
  (**(code **)(unaff_R13 + JNI->ExceptionCheck /*0x720*/))();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// ----- block @ rva 0x7d1ae0b -----

void FUN_187d1ae0b(void)

{
  uint uVar1;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar1 = (**(code **)(unaff_R13 + JNI->GetArrayLength /*0x558*/))();
  *(uint *)(unaff_RBP + 0x90) = uVar1;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x90);
  *(longlong **)(unaff_RBP + 0x88) = unaff_R13;
                    /* WARNING: Could not recover jumptable at 0x000187d1ae47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(&UNK_180db3060 + (ulonglong)(uVar1 >> 0x1f) * 8))();
  return;
}


// ----- block @ rva 0x7d23311 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_187d23311(void)

{
  undefined1 auVar1 [16];
  uint uVar2;
  ulonglong uVar3;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar8;
  undefined1 auVar7 [16];
  uint uVar9;
  uint uVar10;
  
  auVar1 = *(undefined1 (*) [16])(unaff_RBP + 0x30);
  uVar3 = *(ulonglong *)(unaff_RBP + 0x10);
  uVar6 = (_DAT_18319eb30 ^ 0x5c2f50ea828126d1) + _DAT_18319eef8 + 0x5c2f50ea828126d1;
  uVar8 = (_DAT_18319eef8 ^ 0xf433dc8f4b2cf6d6) + _DAT_18319eb30 + 0xf433dc8f4b2cf6d6;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319eb30 ^ 0x5c2f50ea828126d1;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319eef8 ^ 0xf433dc8f4b2cf6d6;
  _DAT_18319ee18 =
       func_0x000187d44340((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319eb30 + 0xf433dc8f4b2cf6d6) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319eef8 + 0x5c2f50ea828126d1));
  _DAT_18319ec50 = (_DAT_18319ec50 ^ _DAT_18319ed98) + 0xfc3fdcef4faff7f6 ^ 0xd7bd07b6156faee7;
  _DAT_18319ed10 = (_DAT_18319ed10 * 0xfd838c4fa4e3251 ^ _DAT_18319ec50) + _DAT_18319ed98;
  _DAT_18319ede0 = _DAT_18319ed10 ^ _DAT_18319ec50;
  _DAT_18319ec30 = 0xfc3fdcef4faff7f6;
  uVar6 = (_DAT_18319ec78 ^ _DAT_180db4940) + _DAT_18319edd8 + 0xf0bf4c9b29c80246;
  uVar8 = (_DAT_18319edd8 ^ _UNK_180db4948) + _DAT_18319ec78 + 0xc06e68253cc64892;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319ec78 ^ _DAT_180db4940;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319edd8 ^ _UNK_180db4948;
  _DAT_18319ecf8 =
       func_0x000187d44340((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319ec78 + 0xc06e68253cc64892) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319edd8 + 0xf0bf4c9b29c80246));
  _DAT_18319ebd0 =
       (_DAT_18319ebd0 ^ _DAT_18319ecf8 ^ 0xf0bf4c9badea2163) + 0x30d124be912c69f1 ^
       0x7c3adaad1d024f29;
  _DAT_18319ed80 =
       (_DAT_18319ed80 * 0x122c40f8da3c000f ^ _DAT_18319ebd0) +
       (_DAT_18319ecf8 ^ 0xf0bf4c9badea2163);
  _DAT_18319ee38 = _DAT_18319ed80 ^ _DAT_18319ebd0;
  _DAT_18319eb00 = 0x30d124be912c69f1;
  _DAT_18319ed08 = func_0x000187d44340(_DAT_18319ed00 + 0x8ab77cedf2e8520bU ^ 0x39);
  uVar6 = (_DAT_18319ed08 & 0x7fffffffffffffff) * -0x1788cda20ca2d6a1;
  _DAT_18319ee08 = (_DAT_18319ee08 ^ uVar6) + 0xcb709670150365f0 ^ 0x72154bb126e29955;
  _DAT_18319ed38 = (_DAT_18319ed38 * 0x2e991d23faaeab8b ^ _DAT_18319ee08) + uVar6;
  _DAT_18319edf8 = _DAT_18319ed38 ^ _DAT_18319ee08;
  _DAT_18319ee40 = 0xcb709670150365f0;
  uVar6 = (_DAT_18319ecc8 ^ _DAT_180db4950) + _DAT_18319ec58 + 0x348f698f6edeb91d;
  uVar8 = (_DAT_18319ec58 ^ _UNK_180db4958) + _DAT_18319ecc8 + 0xcb709670150365f0;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319ecc8 ^ _DAT_180db4950;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319ec58 ^ _UNK_180db4958;
  _DAT_18319ed68 =
       func_0x000187d44340((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319ecc8 + 0xcb709670150365f0) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319ec58 + 0x348f698f6edeb91d));
  uVar6 = (_DAT_18319ed68 ^ 0x348f698feafc8000) & 0xffffffffffffc000;
  _DAT_18319eb48 = _DAT_18319ee70 ^ uVar6 ^ 0x28;
  _DAT_18319ec78 = (_DAT_18319ec78 ^ uVar6) + 0x28 ^ 0x6c0e00b5be4022b1;
  _DAT_18319edc8 = (_DAT_18319edc8 * -0x4fb614f9ad672f1b ^ _DAT_18319ec78) + uVar6;
  _DAT_18319ed88 = _DAT_18319edc8 ^ _DAT_18319ec78;
  _DAT_18319ed58 = 0x28;
  uVar6 = (~_DAT_18319ec10 + 0xeb6571fc56c8a8eb) *
          ((_DAT_18319edc0 ^ 0x84222325) + (ulonglong)((uint)_DAT_18319edc0 & 0x84222325) * 2);
  uVar6 = (uVar6 | _DAT_18319ed90) + (uVar6 & _DAT_18319ed90);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319ecd0 = func_0x000187d44340((uVar6 | 0xeb6571fcd2ea8bcf) + (uVar6 & 0xeb6571fcd2ea8bcf));
  uVar6 = _DAT_18319ecd0 >> 1 | _DAT_18319ecd0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_RBX) + (uVar6 >> 2 & unaff_RBX);
  uVar8 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_18319ecd0;
  uVar6 = uVar8 - (uVar8 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_RBX) + (uVar6 >> 2 & unaff_RBX);
  uVar8 = (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 4 ^ uVar8;
  uVar6 = (_DAT_18319ec08 ^ uVar8) + 0x149a8e03a9375716;
  _DAT_18319ec08 = uVar6 ^ 0x39c7d99cb0098229;
  _DAT_18319ed20 = (_DAT_18319ed20 * -0x10276f22a2ef963f ^ _DAT_18319ec08) + uVar8;
  _DAT_18319edf0 = _DAT_18319ed20 ^ _DAT_18319ec08;
  _DAT_18319eb58 = 0x149a8e03a9375716;
  uVar6 = (~_DAT_18319ec00 + 0x149a8e03a9375717) *
          ((uVar6 ^ 0xd2a2a86062e3081e) + (_DAT_18319ec08 & 0x6b6571fcd2ea8a37) * 2);
  uVar6 = (uVar6 | _DAT_18319eed0) + (uVar6 & _DAT_18319eed0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319ee90 = func_0x000187d44340((uVar6 | 0xffffffff7bdddd21) + (uVar6 & 0xffffffff7bdddd21));
  uVar6 = _DAT_18319ee90 ^ 0xeb6571fc56c8a912;
  _DAT_18319eea0 = _DAT_18319eb40 ^ uVar6 ^ 0x28;
  _DAT_18319ee68 = (_DAT_18319ee68 ^ uVar6) + 0x28 ^ 0xca6e5b182ca1b764;
  _DAT_18319ec18 = (_DAT_18319ec18 * 0x113f7643353e5b9d ^ _DAT_18319ee68) + uVar6;
  _DAT_18319eef0 = _DAT_18319ec18 ^ _DAT_18319ee68;
  _DAT_18319ed30 = 0x28;
  _DAT_18319eb78 = func_0x000187d44340(_DAT_18319ee18 ^ 0xaf456e49e23761a0);
  uVar6 = _DAT_18319edc8 >> 1 | _DAT_18319edc8;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_RBX) + (uVar6 >> 2 & unaff_RBX);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x80 ^
          _DAT_18319edc8;
  _DAT_18319ed28 = _DAT_18319ec08 ^ uVar6 ^ 0x2d1101ade0dc61e7;
  _DAT_18319ebc8 = (_DAT_18319ebc8 ^ uVar6) + 0x2d1101ade0dc61e7 ^ 0xfc4344540bd7d38a;
  _DAT_18319ece8 = (_DAT_18319ece8 * 0x5ee81b793e84e0fd ^ _DAT_18319ebc8) + uVar6;
  _DAT_18319eed0 = _DAT_18319ece8 ^ _DAT_18319ebc8;
  _DAT_18319edd8 = 0x2d1101ade0dc61e7;
  uVar6 = (~_DAT_18319ee40 + 0x30d124be912c69f2) *
          ((_DAT_18319ed40 ^ 0xfc3fdcefcb8dd4d3) + (_DAT_18319ed40 & 0x7c3fdcefcb8dd4d3) * 2);
  uVar6 = (uVar6 | _DAT_18319eca0) + (uVar6 & _DAT_18319eca0);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319edc0 = func_0x000187d44340((uVar6 | 0xcceef8515aa1bd22) + (uVar6 & 0xcceef8515aa1bd22));
  uVar6 = _DAT_18319edc0 >> 1 | _DAT_18319edc0;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_RBX) + (uVar6 >> 2 & unaff_RBX);
  uVar6 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_18319edc0;
  _DAT_18319eb00 = (_DAT_18319eb00 ^ uVar6) + 0xcceef851de839e07 ^ 0xfb023c5fe289a5b2;
  _DAT_18319ec70 = (_DAT_18319ec70 * -0xc1744c3855a7d9b ^ _DAT_18319eb00) + uVar6;
  _DAT_18319ee90 = _DAT_18319ec70 ^ _DAT_18319eb00;
  _DAT_18319eef8 = 0xcceef851de839e07;
  uVar6 = (_DAT_18319eb98 ^ _DAT_180db4960) + _DAT_18319eb30 + 0xfc3fdcefcb8dd4d3;
  uVar8 = (_DAT_18319eb30 ^ _UNK_180db4968) + _DAT_18319eb98 + 0x30d124be912c69f1;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319eb98 ^ _DAT_180db4960;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319eb30 ^ _UNK_180db4968;
  _DAT_18319ec48 =
       func_0x000187d44340((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319eb98 + 0x30d124be912c69f1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319eb30 + 0xfc3fdcefcb8dd4d3));
  uVar6 = _DAT_18319ec48 >> 1 | _DAT_18319ec48;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & unaff_RBX) + (uVar6 >> 2 & unaff_RBX);
  uVar6 = 0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^
          _DAT_18319ec48;
  _DAT_18319ebc8 = (_DAT_18319ed60 ^ uVar6) + 0x301104ae012c61f0 ^ 0x1b88dafcac358a88;
  _DAT_18319ed60 = (_DAT_18319ed60 * -0x3a0063f52ef06de5 ^ _DAT_18319ebc8) + uVar6;
  _DAT_18319ebc8 = _DAT_18319ed60 ^ _DAT_18319ebc8;
  _DAT_18319ec08 = 0x301104ae012c61f0;
  _DAT_18319ee50 = func_0x000187d44340(_DAT_18319ecc8 + 0x336cc3742d1b763 ^ 0xe5);
  uVar6 = ((_DAT_18319ee50 ^ 0x8cea321f54f19b20) << 4 |
          (_DAT_18319ee50 ^ 0x8cea321f54f19b20) >> 0x3c) * -0x4d497744685eb7fd;
  _DAT_18319ecd0 = _DAT_18319edf8 ^ uVar6 ^ 0x2d1101ade0dc61e7;
  _DAT_18319ecb0 = (_DAT_18319ecb0 ^ uVar6) + 0x2d1101ade0dc61e7 ^ 0x5e42a960c83992e3;
  _DAT_18319ecc8 = (_DAT_18319ecc8 * -0x3aff5215030a4779 ^ _DAT_18319ecb0) + uVar6;
  _DAT_18319ee08 = _DAT_18319ecc8 ^ _DAT_18319ecb0;
  _DAT_18319ec70 = 0x2d1101ade0dc61e7;
  uVar6 = (_DAT_18319eb20 ^ _DAT_180db4970) + _DAT_18319ee10 + 0x2d1101ad64fe42c2;
  uVar8 = (_DAT_18319ee10 ^ _UNK_180db4978) + _DAT_18319eb20 + 0x2d1101ade0dc61e7;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319eb20 ^ _DAT_180db4970;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319ee10 ^ _UNK_180db4978;
  _DAT_18319eea8 =
       func_0x000187d44340((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319eb20 + 0x2d1101ade0dc61e7) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319ee10 + 0x2d1101ad64fe42c2));
  _DAT_18319eea0 = _DAT_18319eea8 << 0x24 | _DAT_18319eea8 >> 0x1c;
  _DAT_18319ebb8 = _DAT_18319ebb8 ^ _DAT_18319eea0 ^ 0x8e0e82d0a902b5d9;
  _DAT_18319eb80 = (_DAT_18319eb80 * -0x3810f741baa8d12f ^ _DAT_18319ebb8) + _DAT_18319eea0;
  _DAT_18319eca0 = _DAT_18319eb80 ^ _DAT_18319ebb8;
  _DAT_18319ee20 = 0;
  uVar6 = ((_DAT_18319ee90 ^ 0x8422230d) + (ulonglong)((uint)_DAT_18319ee90 & 0x8422230d) * 2) *
          -_DAT_18319eee8;
  uVar6 = (uVar6 | _DAT_18319ed08) + (uVar6 & _DAT_18319ed08);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319eb00 = func_0x000187d44340((uVar6 | 0x8422230d) + (ulonglong)((uint)uVar6 & 0x8422230d))
  ;
  uVar6 = (ulonglong)((uint)_DAT_18319eb00 & 0x28);
  _DAT_18319edd0 = _DAT_18319ebd8 ^ uVar6 ^ 0x28;
  _DAT_18319ebe0 = (_DAT_18319ebe0 ^ uVar6) + 0x28 ^ 0x6c5cc7e9db4ac3d8;
  _DAT_18319ecd0 = (_DAT_18319ecd0 * -0x10bbabbca6e06903 ^ _DAT_18319ebe0) + uVar6;
  _DAT_18319eb38 = _DAT_18319ecd0 ^ _DAT_18319ebe0;
  _DAT_18319ed98 = 0x28;
  uVar6 = (_DAT_18319eec8 ^ _DAT_180db4980) + _DAT_18319ecc8 + 0xfc3fdcefcb8dd4d3;
  uVar8 = (_DAT_18319ecc8 ^ _UNK_180db4988) + (_DAT_18319eec8 - 1);
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_18319eec8 ^ _DAT_180db4980;
  uVar8 = (uVar8 * 0x2000 | uVar8 >> 0x33) ^ _DAT_18319ecc8 ^ _UNK_180db4988;
  _DAT_18319edb8 =
       func_0x000187d44340((uVar8 << 0x1d | uVar8 >> 0x23) - (_DAT_18319eec8 - 1) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_18319ecc8 + 0xfc3fdcefcb8dd4d3));
  _DAT_18319edd8 =
       (_DAT_18319edd8 ^ _DAT_18319edb8 * 0x4129ae2f0ad9525) + 0x3c02310b0500809 ^
       0xf928dace9200b12a;
  _DAT_18319ec58 =
       (_DAT_18319ec58 * -0x4df0eeda25a78383 ^ _DAT_18319edd8) + _DAT_18319edb8 * 0x4129ae2f0ad9525;
  _DAT_18319ec50 = _DAT_18319ec58 ^ _DAT_18319edd8;
  _DAT_18319eca0 = 0x3c02310b0500809;
  _DAT_18319ebb8 = func_0x000187d44340(_DAT_18319eeb0 + 0x3f3c6907aa26a34aU ^ 0x93);
  uVar6 = _DAT_18319ec88 << 0x24 | _DAT_18319ec88 >> 0x1c;
  _DAT_18319eba0 = _DAT_18319eba0 ^ uVar6 ^ 0xa5a3e713e8307d83;
  _DAT_18319ee68 = (_DAT_18319ee68 * 0x689320154e6a7c6f ^ _DAT_18319eba0) + uVar6;
  _DAT_18319eed8 = _DAT_18319ee68 ^ _DAT_18319eba0;
  _DAT_18319ec78 = 0;
  uVar6 = ((_DAT_18319ec10 ^ 0x8422230d) + (ulonglong)((uint)_DAT_18319ec10 & 0x8422230d) * 2) *
          -_DAT_18319eb28;
  uVar6 = (uVar6 | _DAT_18319eeb8) + (uVar6 & _DAT_18319eeb8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319ec50 = func_0x000187d44340((uVar6 | 0x8422230d) + (ulonglong)((uint)uVar6 & 0x8422230d))
  ;
  uVar6 = (_DAT_18319ec50 << 0x16 | _DAT_18319ec50 >> 0x2a) * 0x5fb1a63031c48fc3;
  _DAT_18319ee30 = _DAT_18319ee38 ^ uVar6 ^ 0x28;
  _DAT_18319ebb0 = (_DAT_18319ebb0 ^ uVar6) + 0x28 ^ 0xb818502ee6bb23e8;
  _DAT_18319ec58 = (_DAT_18319ec58 * -0x3d72ab0b2d300153 ^ _DAT_18319ebb0) + uVar6;
  _DAT_18319ee68 = _DAT_18319ec58 ^ _DAT_18319ebb0;
  _DAT_18319ec20 = 0x28;
  uVar6 = (~_DAT_18319ee40 + 0x5c2f50ea06a305f5) *
          ((_DAT_18319ecd0 ^ 0x5c2f50ea828126d1) + (_DAT_18319ecd0 & 0x5c2f50ea828126d1) * 2);
  uVar6 = (uVar6 | _DAT_18319eb48) + (uVar6 & _DAT_18319eb48);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319ee10 = func_0x000187d44340((uVar6 | 0x84222325) + (ulonglong)((uint)uVar6 & 0x84222325))
  ;
  uVar6 = _DAT_18319ee10 * -0x74e1968290000000 | _DAT_18319ee10 * -0x331ca1074e196829 >> 0x24;
  _DAT_18319eba0 = _DAT_18319eba0 ^ uVar6 ^ 0x892de4b2be017c24;
  _DAT_18319eb90 = (_DAT_18319eb90 * -0x68daf21a81b7c97d ^ _DAT_18319eba0) + uVar6;
  _DAT_18319ecc0 = _DAT_18319eb90 ^ _DAT_18319eba0;
  _DAT_18319eda8 = 0;
  uVar6 = ((_DAT_18319ec50 ^ 0x8422230d) + (ulonglong)((uint)_DAT_18319ec50 & 0x8422230d) * 2) *
          -_DAT_18319eb00;
  uVar6 = (uVar6 | _DAT_18319eb40) + (uVar6 & _DAT_18319eb40);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_18319ee50 = func_0x000187d44340((uVar6 | 0x8422230d) + (ulonglong)((uint)uVar6 & 0x8422230d))
  ;
  _DAT_18319ecb8 = _DAT_18319eee0 ^ _DAT_18319ee50 ^ 0x28;
  _DAT_18319ed48 = (_DAT_18319ed48 ^ _DAT_18319ee50) + 0x28 ^ 0x427badc42b2c2b4a;
  _DAT_18319edb8 = (_DAT_18319edb8 * -0x6cddc773533a860f ^ _DAT_18319ed48) + _DAT_18319ee50;
  _DAT_18319ece0 = _DAT_18319edb8 ^ _DAT_18319ed48;
  _DAT_18319ec88 = 0x28;
  uVar6 = *(ulonglong *)(unaff_RBP + 0x88);
  uVar8 = (~_DAT_18319eef0 + 0x29) *
          ((uVar6 ^ 0x84222325 ^ _DAT_18319ebb8) + ((uVar6 ^ 0x84222325) & _DAT_18319ebb8) * 2);
  uVar8 = (uVar8 | _DAT_18319ec20) + (uVar8 & _DAT_18319ec20);
  uVar8 = uVar8 * 0x2000 ^ uVar8;
  uVar8 = uVar8 >> 7 ^ uVar8;
  uVar8 = uVar8 << 0x11 ^ uVar8;
  _DAT_18319ee18 =
       func_0x000187d44340((uVar6 ^ 0x8422230d | uVar8) + (uVar8 & (uVar6 ^ 0x8422230d)));
  uVar3 = uVar6 * 0x28 ^ _DAT_18319ee18 ^ uVar3;
  uVar2 = auVar1._0_4_;
  uVar4 = uVar2 & (uint)DAT_180063540;
  auVar7._8_4_ = 0xffffffff;
  auVar7._0_8_ = 0xffffffffffffffff;
  auVar7._12_4_ = 0xffffffff;
  uVar10 = SUB164(auVar1 | _DAT_180063540,0);
  uVar9 = SUB164(_DAT_180063540 ^ auVar1,0);
  uVar6 = SUB168(_DAT_180063540 ^ auVar1,0);
  uVar5 = SUB164(auVar7 ^ auVar1,0);
  uVar8 = SUB168(auVar7 ^ auVar1,0);
  _DAT_18319ec98 =
       (ulonglong)_DAT_180db49d0 * (ulonglong)uVar5 +
       ((ulonglong)_DAT_180db4a20 * (ulonglong)uVar5 + (uVar8 >> 0x20) * (ulonglong)_DAT_180db49d0
       << 0x20) +
       (ulonglong)_DAT_180db4a00 * (ulonglong)uVar9 +
       ((ulonglong)_DAT_180db4a10 * (ulonglong)uVar9 + (uVar6 >> 0x20) * (ulonglong)_DAT_180db4a00
       << 0x20) +
       (ulonglong)uVar10 * (ulonglong)_DAT_180db49e0 +
       ((ulonglong)_DAT_180db49f0 * (ulonglong)uVar10 +
        (SUB168(auVar1 | _DAT_180063540,0) >> 0x20) * (ulonglong)_DAT_180db49e0 << 0x20) +
       ((ulonglong)_DAT_180db49c0 * (ulonglong)uVar4 << 0x20 |
       (ulonglong)_DAT_180db49b0 * (ulonglong)uVar4) +
       ((ulonglong)_DAT_180db49a0 * (ulonglong)uVar2 +
        (ulonglong)_DAT_180db4990 * (ulonglong)*(uint *)(unaff_RBP + 0x40) << 0x20) +
       (ulonglong)uVar2 * (ulonglong)_DAT_180db4990 +
       (-((ulonglong)uVar5 * (_DAT_180db4ab0 & 0xffffffff) +
         ((ulonglong)_DAT_180db4ac0 * (ulonglong)uVar5 +
          (uVar8 >> 0x20) * (_DAT_180db4ab0 & 0xffffffff) << 0x20)) -
       ((ulonglong)uVar9 * (ulonglong)_DAT_180db4a90 +
        ((ulonglong)_DAT_180db4aa0 * (ulonglong)uVar9 + (uVar6 >> 0x20) * (ulonglong)_DAT_180db4a90
        << 0x20) +
       ((ulonglong)uVar4 * (ulonglong)_DAT_180db4a80 << 0x20) +
       (ulonglong)_DAT_180db4a70 * (ulonglong)uVar4 +
       ((ulonglong)uVar2 * (ulonglong)_DAT_180db4a60 +
        (ulonglong)*(uint *)(unaff_RBP + 0x40) * (ulonglong)_DAT_180db4a50 << 0x20) +
       (ulonglong)uVar2 * (ulonglong)_DAT_180db4a50)) + 0x696724ff04811298;
  _DAT_18319ecb8 = _DAT_18319edc0 ^ uVar3 ^ _DAT_18319ec98;
  _DAT_18319ed58 = (_DAT_18319ed58 ^ uVar3) + _DAT_18319ec98 ^ 0xa74caada0ccaa321;
  _DAT_18319eb30 = (_DAT_18319eb30 * 0x7e549264ed1c155 ^ _DAT_18319ed58) + uVar3;
  _DAT_18319eed8 = _DAT_18319eb30 ^ _DAT_18319ed58;
  func_0x000180001044(*(undefined8 *)(unaff_RBP + 0x70),_DAT_18319ec98);
  return 0;
}


// ----- block @ rva 0x7d24951 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d24951(void)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 unaff_EBX;
  longlong unaff_RBP;
  undefined8 unaff_RDI;
  uint uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auVar11 [16];
  
  *(undefined4 *)(unaff_RBP + 0x84) = unaff_EBX;
  *(undefined8 *)(unaff_RBP + 0x40) = unaff_RDI;
  _DAT_18319ed88 = func_0x000187d44340(_DAT_18319ed08 ^ 0xff6aff77eeff8f54);
  uVar3 = _DAT_18319ed88 ^ 0xedfbdcff;
  uVar4 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar4 = (uVar4 & 0x3333333333333333) + (uVar4 >> 2 & 0x3333333333333333);
  uVar3 = (((uVar4 >> 4) + uVar4 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) << 6 ^ uVar3;
  _DAT_18319ec28 = (_DAT_18319ec28 ^ uVar3) + 0xedfbdcff ^ 0x6771e65241f9dac3;
  _DAT_18319ec48 = (_DAT_18319ec48 * -0x15aa57fc34a1eea7 ^ _DAT_18319ec28) + uVar3;
  _DAT_18319ee48 = _DAT_18319ec48 ^ _DAT_18319ec28;
  _DAT_18319eb80 = 0xedfbdcff;
  _DAT_18319eb00 = func_0x000187d44340(_DAT_18319ece8 ^ 0x5effc074ffe56f);
  uVar3 = (_DAT_18319eb00 ^ 0x27185402c13b7d04) & 0x7fffffffffffffff ^ 0x2a158fea;
  _DAT_18319ec70 = (_DAT_18319ec70 ^ uVar3) + 0xc7c482d0 ^ 0xc738c4f2ad875104;
  _DAT_18319ec90 = (_DAT_18319ec90 * -0x1933cca5129bec37 ^ _DAT_18319ec70) + uVar3;
  _DAT_18319eef8 = _DAT_18319ec90 ^ _DAT_18319ec70;
  _DAT_18319ec60 = 0xc7c482d0;
  uVar3 = (_DAT_18319ed08 ^ _DAT_180db3650) + _DAT_18319ecf8 + 0x84222325;
  uVar4 = (_DAT_18319ecf8 ^ _UNK_180db3658) + _DAT_18319ed08 + 0x2b1eb066;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319ed08 ^ _DAT_180db3650;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319ecf8 ^ _UNK_180db3658;
  _DAT_18319eba0 =
       func_0x000187d44340((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319ed08 + 0x2b1eb066) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319ecf8 + 0x84222325));
  _DAT_18319ec68 = (_DAT_18319ec68 ^ _DAT_18319eba0 ^ 0x2b1eb066) - 0x2b1eb066 ^ 0xc5700711e62fb6b0;
  _DAT_18319edc0 =
       (_DAT_18319edc0 * -0x479c3ed4fdeca909 ^ _DAT_18319ec68) + (_DAT_18319eba0 ^ 0x2b1eb066);
  _DAT_18319ec78 = _DAT_18319edc0 ^ _DAT_18319ec68;
  _DAT_18319ed00 = 0xd4e14f9a;
  uVar3 = (_DAT_18319ec78 ^ _DAT_180db3660) + _DAT_18319ecf0 + 0x7bdddcdb;
  uVar4 = (_DAT_18319ecf0 ^ _UNK_180db3668) + _DAT_18319ec78 + 0x2b1eb066;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319ec78 ^ _DAT_180db3660;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319ecf0 ^ _UNK_180db3668;
  _DAT_18319ede0 =
       func_0x000187d44340((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319ec78 + 0x2b1eb066) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319ecf0 + 0x7bdddcdb));
  uVar3 = _DAT_18319ede0 >> 1 | _DAT_18319ede0;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 2 ^
          _DAT_18319ede0) & 0x7fffffffffffffff;
  _DAT_18319ee28 = _DAT_18319ed60 ^ uVar3 ^ 0x12b1eb064;
  _DAT_18319ebc0 = (_DAT_18319ebc0 ^ uVar3) + 0x12b1eb064 ^ 0x54b02d20fe442b7c;
  _DAT_18319ebc8 = (_DAT_18319ebc8 * 0x217935e27b7d5ce7 ^ _DAT_18319ebc0) + uVar3;
  _DAT_18319ebe0 = _DAT_18319ebc8 ^ _DAT_18319ebc0;
  _DAT_18319eca8 = 0x2b1eb064;
  _DAT_18319ebe0 = func_0x000187d44340(_DAT_18319ed90 ^ 0xff43ff8556ff4a3a);
  uVar3 = (_DAT_18319ebe0 << 0x2f | _DAT_18319ebe0 >> 0x11) ^ 0xd4e14f9a;
  _DAT_18319eb68 = _DAT_18319eba8 ^ uVar3 ^ 0xfffffffe;
  _DAT_18319ec78 = (_DAT_18319ec78 ^ uVar3) + 0xfffffffe ^ 0xcc00c01e761d7de0;
  _DAT_18319eb00 = (_DAT_18319eb00 * -0x29111d7be5bfa77b ^ _DAT_18319ec78) + uVar3;
  _DAT_18319ed58 = _DAT_18319eb00 ^ _DAT_18319ec78;
  _DAT_18319eb30 = 0xfffffffe;
  _DAT_18319ec88 = func_0x000187d44340(_DAT_18319eef8 + 0xff35ffbf76ff81ff ^ 0xf1);
  _DAT_18319eb88 = (_DAT_18319eb88 ^ _DAT_18319ec88 ^ 0xc7a4e9ac) - 0xc7a4e9ac ^ 0x2db72f4a7e97cd9;
  _DAT_18319eb40 =
       (_DAT_18319eb40 * 0x79832db0ec3fc08b ^ _DAT_18319eb88) + (_DAT_18319ec88 ^ 0xc7a4e9ac);
  _DAT_18319edd0 = _DAT_18319eb40 ^ _DAT_18319eb88;
  _DAT_18319ec98 = 0x385b1654;
  uVar3 = (~_DAT_18319eec0 + 0xc7a4e9ad) *
          ((_DAT_18319eed8 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_18319eed8 & 0x7bdddcdb) * 2);
  uVar3 = (uVar3 | _DAT_18319ebd8) + (uVar3 & _DAT_18319ebd8);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319ed70 = func_0x000187d44340((uVar3 | 0xbc793577) + (ulonglong)((uint)uVar3 & 0xbc793577))
  ;
  uVar3 = _DAT_18319ed70 * -0x5a5f4e94491538b5;
  _DAT_18319ed80 = _DAT_18319ebc8 ^ uVar3 ^ 0x1c7a4e9aa;
  _DAT_18319ed60 = (_DAT_18319ed60 ^ uVar3) + 0x1c7a4e9aa ^ 0xe955729d05e68970;
  _DAT_18319ec38 = (_DAT_18319ec38 * -0x79022fc142739a63 ^ _DAT_18319ed60) + uVar3;
  _DAT_18319ee98 = _DAT_18319ec38 ^ _DAT_18319ed60;
  _DAT_18319ee00 = 0xc7a4e9aa;
  _DAT_18319ece0 = func_0x000187d44340(_DAT_18319ed58 + 0x340067baff4cff ^ 0xe);
  uVar4 = _DAT_18319ece0 ^ 0x2bf31c25ed9f47c8;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = 0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38) ^ uVar4 ^
          0x385b1654;
  _DAT_18319ee80 = _DAT_18319ec88 ^ uVar3 ^ 0xfffffffe;
  _DAT_18319eb38 = (_DAT_18319eb38 ^ uVar3) + 0xfffffffe ^ 0xeb83e6ad5fac4488;
  _DAT_18319eb58 = (_DAT_18319eb58 * -0x57b5586e64aa3e4d ^ _DAT_18319eb38) + uVar3;
  _DAT_18319eb30 = _DAT_18319eb58 ^ _DAT_18319eb38;
  _DAT_18319ed38 = 0xfffffffe;
  uVar3 = (_DAT_18319eca0 ^ _DAT_180db3670) + _DAT_18319ec00 + 0x84222325;
  uVar4 = (_DAT_18319ec00 ^ _UNK_180db3678) + _DAT_18319eca0 + 0x6c25983e;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319eca0 ^ _DAT_180db3670;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319ec00 ^ _UNK_180db3678;
  _DAT_18319ee90 =
       func_0x000187d44340((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319eca0 + 0x6c25983e) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319ec00 + 0x84222325));
  uVar3 = (_DAT_18319ee90 & 0xffffffffffff) >> 1 | _DAT_18319ee90 & 0xffffffffffff;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar3 = ((0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_18319ee90 & 0xffffffffffff) * -0x21a717d5da1aecc5;
  _DAT_18319ee88 = (_DAT_18319ee88 ^ uVar3) - 0x6c25983e ^ 0x9df17c5b498e3197;
  _DAT_18319ecb8 = (_DAT_18319ecb8 * 0x2f87ff00d74c0bff ^ _DAT_18319ee88) + uVar3;
  _DAT_18319ebf0 = _DAT_18319ecb8 ^ _DAT_18319ee88;
  _DAT_18319ee40 = 0x93da67c2;
  uVar3 = (~_DAT_18319ece8 + 0x6c25983f) *
          ((_DAT_18319eea8 ^ 0x7bdddcdb) + (ulonglong)((uint)_DAT_18319eea8 & 0x7bdddcdb) * 2);
  uVar3 = (uVar3 | _DAT_18319ee70) + (uVar3 & _DAT_18319ee70);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319ee38 = func_0x000187d44340((uVar3 | 0x17f844e5) + (ulonglong)((uint)uVar3 & 0x17f844e5))
  ;
  uVar3 = _DAT_18319ee38 ^ 0x6c25983e;
  _DAT_18319ec48 = _DAT_18319eea0 ^ uVar3 ^ 0x16c25983c;
  _DAT_18319ed88 = (_DAT_18319ed88 ^ uVar3) + 0x16c25983c ^ 0x283db602ee91cd3f;
  _DAT_18319ecd8 = (_DAT_18319ecd8 * 0x3baaca0e2a5723d7 ^ _DAT_18319ed88) + uVar3;
  _DAT_18319ee40 = _DAT_18319ecd8 ^ _DAT_18319ed88;
  _DAT_18319ecc0 = 0x6c25983c;
  uVar3 = (_DAT_18319edf0 ^ _DAT_180db3680) + _DAT_18319ed00 + 0xe807bb19;
  uVar4 = (_DAT_18319ed00 ^ _UNK_180db3688) + _DAT_18319edf0 + 0x93da67c2;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319edf0 ^ _DAT_180db3680;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319ed00 ^ _UNK_180db3688;
  _DAT_18319ebe0 =
       func_0x000187d44340((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319edf0 + 0x93da67c2) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319ed00 + 0xe807bb19));
  uVar4 = (_DAT_18319ebe0 ^ 0xfffffffe) << 8 | _DAT_18319ebe0 >> 0x38;
  uVar3 = uVar4 >> 1 | uVar4;
  uVar3 = uVar3 >> 2 | uVar3;
  uVar3 = uVar3 >> 4 | uVar3;
  uVar3 = uVar3 >> 8 | uVar3;
  uVar3 = uVar3 >> 0x10 | uVar3;
  uVar3 = uVar3 >> 0x20 | uVar3;
  uVar3 = uVar3 - (uVar3 >> 1 & 0x5555555555555555);
  uVar3 = (uVar3 & 0x3333333333333333) + (uVar3 >> 2 & 0x3333333333333333);
  uVar4 = (0x40 - (((uVar3 >> 4) + uVar3 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          uVar4;
  _DAT_18319ee28 = _DAT_18319ecc8 ^ uVar4 ^ 0xfffffffe;
  _DAT_18319ecc0 = (_DAT_18319ecc0 ^ uVar4) + 0xfffffffe ^ 0xbab428489d41d309;
  _DAT_18319ee68 = (_DAT_18319ee68 * 0xffb978a3b66d97d ^ _DAT_18319ecc0) + uVar4;
  _DAT_18319ece0 = _DAT_18319ee68 ^ _DAT_18319ecc0;
  _DAT_18319ee08 = 0xfffffffe;
  uVar3 = (_DAT_18319edc0 ^ _DAT_180db3690) + _DAT_18319ee60 + 0x69d9ffda;
  uVar4 = (_DAT_18319ee60 ^ _UNK_180db3698) + _DAT_18319edc0 + 0xc7c482d0;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319edc0 ^ _DAT_180db3690;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319ee60 ^ _UNK_180db3698;
  _DAT_18319ee20 =
       func_0x000187d44340((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319edc0 + 0xc7c482d0) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319ee60 + 0x69d9ffda));
  _DAT_18319ebf8 = _DAT_18319eb60 ^ _DAT_18319ee20 ^ 0x1b5c05fcf;
  _DAT_18319ee18 = (_DAT_18319ee18 ^ _DAT_18319ee20) + 0x1b5c05fcf ^ 0xd7b7baf5b66b835d;
  _DAT_18319eda0 = (_DAT_18319eda0 * -0x50bbdc7c613292d9 ^ _DAT_18319ee18) + _DAT_18319ee20;
  _DAT_18319eb98 = _DAT_18319eda0 ^ _DAT_18319ee18;
  _DAT_18319ee48 = 0xb5c05fcf;
  uVar3 = (~_DAT_18319ec70 + 0xc7c482d1) *
          ((_DAT_18319ed40 ^ 0x69d9ffda) + (ulonglong)((uint)_DAT_18319ed40 & 0x69d9ffda) * 2);
  uVar3 = (uVar3 | 0xb5c05fcf) + (uVar3 & 0xb5c05fcf);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319edb8 = func_0x000187d44340((uVar3 | 0xae1d7d0a) + (ulonglong)((uint)uVar3 & 0xae1d7d0a))
  ;
  _DAT_18319ec90 = (_DAT_18319ec90 ^ _DAT_18319edb8) + 0x2a3f5e2f ^ 0x73f3f98f7cd23a6e;
  _DAT_18319eca8 = (_DAT_18319eca8 * 0x510e9002cbc299e3 ^ _DAT_18319ec90) + _DAT_18319edb8;
  _DAT_18319ee00 = _DAT_18319eca8 ^ _DAT_18319ec90;
  _DAT_18319eb50 = 0x2a3f5e2f;
  _DAT_18319ee40 = func_0x000187d44340(_DAT_18319eb10 + 0x1d0055f5ffecffU ^ 0xb8);
  _DAT_18319ed98 =
       (_DAT_18319ed98 ^ _DAT_18319ee40 & 0xfffffffffffc0000) + 0xc5c080d0 ^ 0x21bff321dab5fd37;
  _DAT_18319ed28 =
       (_DAT_18319ed28 * 0x442ca086dbba4f3d ^ _DAT_18319ed98) +
       (_DAT_18319ee40 & 0xfffffffffffc0000);
  _DAT_18319ed08 = _DAT_18319ed28 ^ _DAT_18319ed98;
  _DAT_18319eb18 = 0xc5c080d0;
  uVar3 = (~_DAT_18319ed40 + 0x8b8101a1) *
          ((_DAT_18319ee70 ^ 0xae1d7d0a) + (ulonglong)((uint)_DAT_18319ee70 & 0xae1d7d0a) * 2);
  uVar3 = (uVar3 | 0xc5c080d0) + (uVar3 & 0xc5c080d0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319ec18 = func_0x000187d44340((uVar3 | 0x259c7caa) + (ulonglong)((uint)uVar3 & 0x259c7caa))
  ;
  uVar3 = _DAT_18319ec18 ^ 0x81800180;
  _DAT_18319ebc8 = _DAT_18319eea0 ^ uVar3 ^ 0xb5c05fcf;
  _DAT_18319ec10 = (_DAT_18319ec10 ^ uVar3) + 0xb5c05fcf ^ 0xf8a8c72660f799e;
  _DAT_18319ec60 = (_DAT_18319ec60 * 0x49f0d5953ef9ddeb ^ _DAT_18319ec10) + uVar3;
  _DAT_18319ee48 = _DAT_18319ec60 ^ _DAT_18319ec10;
  _DAT_18319eb00 = 0xb5c05fcf;
  uVar3 = (_DAT_18319eec8 ^ _DAT_180db36a0) + _DAT_18319ee70 + 0x69d9ffda;
  uVar4 = (_DAT_18319ee70 ^ _UNK_180db36a8) + _DAT_18319eec8 + 0xffffffff;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319eec8 ^ _DAT_180db36a0;
  uVar4 = (uVar4 * 0x2000 | uVar4 >> 0x33) ^ _DAT_18319ee70 ^ _UNK_180db36a8;
  _DAT_18319ec38 =
       func_0x000187d44340((uVar4 << 0x1d | uVar4 >> 0x23) - (_DAT_18319eec8 + 0xffffffff) ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319ee70 + 0x69d9ffda));
  _DAT_18319ed28 = (_DAT_18319ed28 ^ _DAT_18319ec38) + 0x12042300 ^ 0x2e1301451fbe4a9f;
  _DAT_18319eda8 = (_DAT_18319eda8 * -0x76ea8f0e3fbc969f ^ _DAT_18319ed28) + _DAT_18319ec38;
  _DAT_18319ebf8 = _DAT_18319eda8 ^ _DAT_18319ed28;
  _DAT_18319ed88 = 0x12042300;
  uVar3 = (~_DAT_18319ebc8 + 0x12042301) *
          ((_DAT_18319ee48 ^ 0x69d9ffda) + (ulonglong)((uint)_DAT_18319ee48 & 0x69d9ffda) * 2);
  uVar3 = (uVar3 | _DAT_18319ebc0) + (uVar3 & _DAT_18319ebc0);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319edd0 = func_0x000187d44340((uVar3 | 0x7bdddcda) + (ulonglong)((uint)uVar3 & 0x7bdddcda))
  ;
  uVar3 = (_DAT_18319edd0 ^ 0xedfbdcff) << 0x2a |
          ((_DAT_18319edd0 ^ 0xedfbdcff) & 0x7fffffffffffffff) >> 0x16;
  _DAT_18319eca8 = _DAT_18319eca8 ^ uVar3 ^ 0x1a31435f188d3780;
  _DAT_18319eb48 = (_DAT_18319eb48 * 0xd0c9e20d7981b03 ^ _DAT_18319eca8) + uVar3;
  _DAT_18319ee68 = _DAT_18319eb48 ^ _DAT_18319eca8;
  _DAT_18319eb08 = 0;
  uVar3 = (_DAT_18319ec90 ^ 0x7bdddcdb) + _DAT_18319eea8 + 0x7bdddcdb;
  uVar3 = (uVar3 * 0x2000 | uVar3 >> 0x33) ^ _DAT_18319ec90 ^ 0x7bdddcdb;
  uVar4 = ((_DAT_18319eea8 + _DAT_18319ec90) * 0x2000 | _DAT_18319eea8 + _DAT_18319ec90 >> 0x33) ^
          _DAT_18319eea8;
  _DAT_18319ee68 =
       func_0x000187d44340((uVar4 << 0x1d | uVar4 >> 0x23) - _DAT_18319ec90 ^
                           (uVar3 << 0x1d | uVar3 >> 0x23) - (_DAT_18319eea8 + 0x7bdddcdb));
  uVar3 = _DAT_18319ee68 ^ 0xfffffffe;
  _DAT_18319ee38 = _DAT_18319ec08 ^ uVar3 ^ 0xfffffffe;
  _DAT_18319ec28 = (_DAT_18319ec28 ^ uVar3) + 0xfffffffe ^ 0x19a6c40e5320e1cc;
  _DAT_18319eda0 = (_DAT_18319eda0 * 0x4d5abd3f655c2071 ^ _DAT_18319ec28) + uVar3;
  _DAT_18319ee90 = _DAT_18319eda0 ^ _DAT_18319ec28;
  _DAT_18319edd8 = 0xfffffffe;
  uVar3 = (~_DAT_18319eed0 + 0xecf9947c) *
          ((_DAT_18319ee30 ^ 0x68dbb75e) + (ulonglong)((uint)_DAT_18319ee30 & 0x68dbb75e) * 2);
  uVar3 = (uVar3 | _DAT_18319ee20) + (uVar3 & _DAT_18319ee20);
  uVar3 = uVar3 * 0x2000 ^ uVar3;
  uVar3 = uVar3 >> 7 ^ uVar3;
  uVar3 = uVar3 << 0x11 ^ uVar3;
  _DAT_18319ec58 = func_0x000187d44340((uVar3 | 0x84222325) + (ulonglong)((uint)uVar3 & 0x84222325))
  ;
  uVar3 = _DAT_18319ec58 & 0x1fffffffff ^ 0xecf9947b;
  _DAT_18319ec78 = _DAT_18319ec78 ^ uVar3 ^ 0x7731c997533b98ff;
  _DAT_18319ee48 = (_DAT_18319ee48 * 0x2b948c72c29b8df ^ _DAT_18319ec78) + uVar3;
  _DAT_18319eea8 = _DAT_18319ee48 ^ _DAT_18319ec78;
  _DAT_18319ed70 = 0;
  uVar3 = func_0x000187d44340(_DAT_18319ee08 ^ 0x540029cb002c23);
  uVar3 = uVar3 << 0x39 | uVar3 >> 7;
  _DAT_18319ee70 = _DAT_18319ed98 ^ uVar3 ^ 0xfffffffe;
  _DAT_18319eb20 = (_DAT_18319eb20 ^ uVar3) + 0xfffffffe ^ 0x56f6bb3c6bf1513f;
  _DAT_18319eb08 = (_DAT_18319eb08 * 0x5e600d075439a435 ^ _DAT_18319eb20) + uVar3;
  _DAT_18319ece0 = _DAT_18319eb08 ^ _DAT_18319eb20;
  uVar1 = *(uint *)(unaff_RBP + 0x84);
  auVar6._8_8_ = _UNK_180333d68;
  auVar6._0_8_ = CONCAT44(0,uVar1) ^ 0x84222325;
  auVar7 = pshufb(auVar6 ^ _DAT_180db36b0,_DAT_1800170c0);
  _DAT_18319ee88 = 0xfffffffe;
  uVar4 = auVar7._8_8_ + auVar7._0_8_;
  uVar3 = uVar4 + _DAT_18319ed20;
  if (auVar7._4_4_ < 0) {
    uVar3 = _DAT_18319eeb8 ^ uVar4;
  }
  _DAT_18319ecf8 = func_0x000187d44340(SUB161(auVar6 ^ _DAT_180db36b0,5) ^ uVar3);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = CONCAT44(0,uVar1);
  uVar5 = _DAT_18011bc70 ^ uVar1;
  uVar10 = uVar1 & _DAT_18011bc70;
  uVar8 = uVar1 | _DAT_18011bc70;
  auVar11._8_4_ = 0xffffffff;
  auVar11._0_8_ = 0xffffffffffffffff;
  auVar11._12_4_ = 0xffffffff;
  uVar9 = SUB164(auVar7 ^ auVar11,0);
  _DAT_18319ee98 =
       (((ulonglong)uVar9 * (ulonglong)_DAT_180db3700 +
         ((ulonglong)_DAT_180db3750 * (ulonglong)uVar9 +
          (SUB168(auVar7 ^ auVar11,0) >> 0x20) * (ulonglong)_DAT_180db3700 << 0x20) +
        ((ulonglong)_DAT_180db3740 * (ulonglong)uVar5 << 0x20) +
        (ulonglong)_DAT_180db3730 * (ulonglong)uVar5 +
        ((ulonglong)_DAT_180db3720 * (ulonglong)uVar8 << 0x20) +
        (ulonglong)_DAT_180db3710 * (ulonglong)uVar8 +
        ((ulonglong)_DAT_180db36f0 * (ulonglong)uVar10 << 0x20) +
        (ulonglong)_DAT_180db36e0 * (ulonglong)uVar10 +
        ((ulonglong)_DAT_180db36d0 * (ulonglong)uVar1 << 0x20) +
        (ulonglong)_DAT_180db36c0 * (ulonglong)uVar1) -
       (((ulonglong)uVar5 * (ulonglong)_DAT_180db37f0 << 0x20) +
        (ulonglong)_DAT_180db37e0 * (ulonglong)uVar5 +
        ((ulonglong)uVar8 * (ulonglong)_DAT_180db37d0 << 0x20) +
        (ulonglong)_DAT_180db37c0 * (ulonglong)uVar8 +
       ((ulonglong)uVar10 * (ulonglong)_DAT_180db37b0 << 0x20) +
       (ulonglong)_DAT_180db37a0 * (ulonglong)uVar10 +
       ((ulonglong)uVar1 * (ulonglong)_DAT_180db3790 << 0x20) +
       (ulonglong)_DAT_180db3780 * (ulonglong)uVar1)) + 0x1e31046c4a6c2e95;
  _DAT_18319ecb0 = _DAT_18319ee38 ^ _DAT_18319ecf8 ^ _DAT_18319ee98;
  _DAT_18319ed90 = (_DAT_18319ed90 ^ _DAT_18319ecf8) + _DAT_18319ee98 ^ 0xb0fb6f5010a8030f;
  _DAT_18319ebd0 = (_DAT_18319ebd0 * 0x7a7173018308d743 ^ _DAT_18319ed90) + _DAT_18319ecf8;
  _DAT_18319edd8 = _DAT_18319ebd0 ^ _DAT_18319ed90;
  *(int *)(unaff_RBP + -8) = (int)_DAT_18319ee98;
  _DAT_18319ee98 = _DAT_18319ee98 & 0xffffffff;
  *(undefined4 *)(unaff_RBP + 0x90) = 0xff;
  *(undefined8 *)(unaff_RBP + 0x98) = *(undefined8 *)(unaff_RBP + 0x40);
  *(undefined4 *)(unaff_RBP + 0xa0) = 0;
  iVar2 = (**(code **)(**(longlong **)(unaff_RBP + 0x88) + 0x558))
                    (*(longlong **)(unaff_RBP + 0x88),*(undefined8 *)(unaff_RBP + 0x40));
  switch(*(int *)(unaff_RBP + 0xa0) < 0 || iVar2 <= *(int *)(unaff_RBP + 0xa0)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d300ad -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d300ad(void)

{
  int iVar1;
  longlong unaff_RBP;
  
  iVar1 = (**(code **)(**(longlong **)(unaff_RBP + 0x88) + 0x558))(*(longlong **)(unaff_RBP + 0x88))
  ;
  switch(*(int *)(unaff_RBP + 0x98) < 0 || iVar1 <= *(int *)(unaff_RBP + 0x98)) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d30129 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d30129(void)

{
  uint in_EAX;
  ulonglong uVar1;
  ulonglong uVar2;
  int unaff_EBX;
  longlong unaff_RBP;
  ulonglong unaff_R12;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  longlong lVar6;
  uint unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  undefined8 unaff_XMM10_Qb;
  undefined1 unaff_XMM11 [16];
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  auVar3._8_8_ = unaff_XMM10_Qb;
  auVar3._0_8_ = in_EAX ^ unaff_R12;
  auVar4 = pshufb(auVar3 ^ _DAT_180db3fa0,unaff_XMM11);
  uVar2 = auVar4._8_8_ + auVar4._0_8_;
  uVar1 = uVar2 + _DAT_18319ec28;
  if (auVar4._4_4_ < 0) {
    uVar1 = _DAT_18319eb48 ^ uVar2;
  }
  _DAT_18319ed20 = func_0x000187d44340(SUB161(auVar3 ^ _DAT_180db3fa0,5) ^ uVar1);
  uVar9 = in_EAX & unaff_XMM8_Da;
  uVar5 = in_EAX | unaff_XMM8_Da;
  uVar7 = in_EAX ^ unaff_XMM8_Da;
  uVar8 = in_EAX ^ unaff_XMM6_Da;
  lVar6 = ((ulonglong)in_EAX * (ulonglong)_DAT_180db4040 << 0x20) +
          (ulonglong)in_EAX * (ulonglong)_DAT_180db4030;
  uVar1 = (_DAT_18319ed20 & 0x1fffffffffff) >> 1 | _DAT_18319ed20 & 0x1fffffffffff;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_18319ed20 & 0x1fffffffffff;
  uVar1 = ((((ulonglong)uVar8 * (ulonglong)unaff_XMM7_Da + _DAT_180db4020 << 0x20) +
            (ulonglong)uVar8 * (ulonglong)_DAT_180db4010 +
            ((ulonglong)uVar7 * (ulonglong)unaff_XMM13_Da << 0x20) +
            (ulonglong)uVar7 * (ulonglong)unaff_XMM12_Da +
            ((ulonglong)uVar9 * (ulonglong)unaff_XMM13_Da << 0x20 |
            (ulonglong)uVar9 * (ulonglong)unaff_XMM12_Da) +
            (ulonglong)in_EAX * (ulonglong)_DAT_180db3fc0 +
            ((ulonglong)in_EAX * (ulonglong)unaff_XMM7_Da << 0x20) + lVar6 +
           ((ulonglong)uVar5 * (ulonglong)_DAT_180db4000 << 0x20) +
           (ulonglong)uVar5 * (ulonglong)_DAT_180db3ff0) -
          (((ulonglong)uVar8 * (ulonglong)_DAT_180db40e0 + _DAT_180db40f0 << 0x20) +
           (ulonglong)uVar8 * (ulonglong)_DAT_180db40d0 + lVar6 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_180db40c0 << 0x20) +
          (ulonglong)uVar7 * (ulonglong)_DAT_180db40b0 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180db40a0 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_180db4090 +
          ((ulonglong)uVar9 * (ulonglong)_DAT_180db4080 << 0x20 |
          (ulonglong)uVar9 * (ulonglong)_DAT_180db4070) +
          ((ulonglong)in_EAX * (ulonglong)_DAT_180db4060 << 0x20) +
          (ulonglong)in_EAX * (ulonglong)_DAT_180db4050)) + 0x4b48539f2cc79b95;
  _DAT_18319eb60 = (_DAT_18319edb8 ^ uVar2 ^ uVar1 ^ uVar2) + uVar1 ^ 0x9ed60278dba6ac70;
  _DAT_18319ecd8 = (_DAT_18319ecd8 * -0x59fb3daf6adc99ff ^ _DAT_18319eb60) + uVar2;
  _DAT_18319ec28 = _DAT_18319ecd8 ^ _DAT_18319eb60;
  _DAT_18319ec20 = uVar1 & 0xffffffff;
  *(int *)(unaff_RBP + 0x90) = (int)uVar1;
  *(int *)(unaff_RBP + 0x98) = unaff_EBX;
  switch((int)uVar1 < unaff_EBX) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d30151 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d30151(void)

{
  ulonglong uVar1;
  ulonglong uVar2;
  int unaff_EBX;
  longlong unaff_RBP;
  uint unaff_EDI;
  byte in_XMM0_Bf;
  undefined1 in_XMM1 [16];
  uint uVar3;
  longlong lVar4;
  uint unaff_XMM6_Da;
  uint unaff_XMM7_Da;
  uint unaff_XMM8_Da;
  uint unaff_XMM12_Da;
  uint unaff_XMM13_Da;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar2 = in_XMM1._8_8_ + in_XMM1._0_8_;
  uVar1 = uVar2 + _DAT_18319ec28;
  if (in_XMM1._4_4_ < 0) {
    uVar1 = _DAT_18319eb48 ^ uVar2;
  }
  _DAT_18319ed20 = func_0x000187d44340(in_XMM0_Bf ^ uVar1);
  uVar7 = unaff_EDI & unaff_XMM8_Da;
  uVar3 = unaff_EDI | unaff_XMM8_Da;
  uVar5 = unaff_EDI ^ unaff_XMM8_Da;
  uVar6 = unaff_EDI ^ unaff_XMM6_Da;
  lVar4 = ((ulonglong)unaff_EDI * (ulonglong)_DAT_180db4040 << 0x20) +
          (ulonglong)unaff_EDI * (ulonglong)_DAT_180db4030;
  uVar1 = (_DAT_18319ed20 & 0x1fffffffffff) >> 1 | _DAT_18319ed20 & 0x1fffffffffff;
  uVar1 = uVar1 >> 2 | uVar1;
  uVar1 = uVar1 >> 4 | uVar1;
  uVar1 = uVar1 >> 8 | uVar1;
  uVar1 = uVar1 >> 0x20 | uVar1 >> 0x10 | uVar1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x5555555555555555);
  uVar1 = (uVar1 & 0x3333333333333333) + (uVar1 >> 2 & 0x3333333333333333);
  uVar2 = (0x40 - (((uVar1 >> 4) + uVar1 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x20 ^
          _DAT_18319ed20 & 0x1fffffffffff;
  uVar1 = ((((ulonglong)uVar6 * (ulonglong)unaff_XMM7_Da + _DAT_180db4020 << 0x20) +
            (ulonglong)uVar6 * (ulonglong)_DAT_180db4010 +
            ((ulonglong)uVar5 * (ulonglong)unaff_XMM13_Da << 0x20) +
            (ulonglong)uVar5 * (ulonglong)unaff_XMM12_Da +
            ((ulonglong)uVar7 * (ulonglong)unaff_XMM13_Da << 0x20 |
            (ulonglong)uVar7 * (ulonglong)unaff_XMM12_Da) +
            (ulonglong)unaff_EDI * (ulonglong)_DAT_180db3fc0 +
            ((ulonglong)unaff_EDI * (ulonglong)unaff_XMM7_Da << 0x20) + lVar4 +
           ((ulonglong)uVar3 * (ulonglong)_DAT_180db4000 << 0x20) +
           (ulonglong)uVar3 * (ulonglong)_DAT_180db3ff0) -
          (((ulonglong)uVar6 * (ulonglong)_DAT_180db40e0 + _DAT_180db40f0 << 0x20) +
           (ulonglong)uVar6 * (ulonglong)_DAT_180db40d0 + lVar4 +
          ((ulonglong)uVar5 * (ulonglong)_DAT_180db40c0 << 0x20) +
          (ulonglong)uVar5 * (ulonglong)_DAT_180db40b0 +
          ((ulonglong)uVar3 * (ulonglong)_DAT_180db40a0 << 0x20) +
          (ulonglong)uVar3 * (ulonglong)_DAT_180db4090 +
          ((ulonglong)uVar7 * (ulonglong)_DAT_180db4080 << 0x20 |
          (ulonglong)uVar7 * (ulonglong)_DAT_180db4070) +
          ((ulonglong)unaff_EDI * (ulonglong)_DAT_180db4060 << 0x20) +
          (ulonglong)unaff_EDI * (ulonglong)_DAT_180db4050)) + 0x4b48539f2cc79b95;
  _DAT_18319eb60 = (_DAT_18319edb8 ^ uVar2 ^ uVar1 ^ uVar2) + uVar1 ^ 0x9ed60278dba6ac70;
  _DAT_18319ecd8 = (_DAT_18319ecd8 * -0x59fb3daf6adc99ff ^ _DAT_18319eb60) + uVar2;
  _DAT_18319ec28 = _DAT_18319ecd8 ^ _DAT_18319eb60;
  _DAT_18319ec20 = uVar1 & 0xffffffff;
  *(int *)(unaff_RBP + 0x90) = (int)uVar1;
  *(int *)(unaff_RBP + 0x98) = unaff_EBX;
  switch((int)uVar1 < unaff_EBX) {
  case false:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case true:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
}


// ----- block @ rva 0x7d304c4 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d304c4(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  longlong *unaff_R13;
  
  uVar2 = FUN_190dd72e0();
  *(undefined8 *)(unaff_RBP + 0x28) = uVar2;
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


// ----- block @ rva 0x7d3050f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d3050f(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong unaff_RBP;
  undefined4 unaff_EDI;
  longlong *unaff_R13;
  
  uVar2 = (**(code **)(unaff_R13 + JNI->AllocObject /*0xd8*/))();
  *(undefined8 *)(unaff_RBP + 0x90) = uVar2;
  *(undefined8 *)(unaff_RBP + 0x98) = uVar2;
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


// ----- block @ rva 0x7d3075b -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d3075b(void)

{
  longlong *plVar1;
  char cVar2;
  longlong unaff_RBP;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x88);
  FUN_190dd72e0(plVar1,*_DAT_18301ee50,0);
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


// ----- block @ rva 0x7d30870 -----

undefined8 thunk_FUN_187d1adf0(void)

{
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
  return 0;
}


// ----- block @ rva 0x7d30907 -----

void FUN_187d30907(void)

{
  return;
}


// ----- block @ rva 0x7d30969 -----

void FUN_187d30969(void)

{
  code *pcVar1;
  
  FUN_18000544c(0,0,0,0,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d46d8c -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d46d8c(void)

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


// ----- block @ rva 0x7d46f35 -----

void FUN_187d46f35(void)

{
  return;
}


// ----- block @ rva 0x7d477e6 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d477e6(void)

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


// ----- block @ rva 0x7d47fba -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d47fba(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  (**(code **)(unaff_R13 + JNI->ThrowNew /*0x70*/))();
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


// ----- block @ rva 0x7d480f1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187d473c0(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x7d48153 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_187d473c0(void)

{
  char cVar1;
  longlong *unaff_R12;
  
  (**(code **)(unaff_R12 + JNI->ExceptionClear /*0x88*/))();
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


// ----- block @ rva 0x7d4847e -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4847e(void)

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


// ----- block @ rva 0x7d48911 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d48911(void)

{
  char cVar1;
  longlong *unaff_R13;
  
  FUN_190de3220();
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


// ----- block @ rva 0x7d48b45 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d48b45(void)

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


// ----- block @ rva 0x7d4afc7 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4afc7(void)

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


// ----- block @ rva 0x7d4b56c -----

void FUN_187d4b56c(longlong *param_1)

{
  (**(code **)(param_1 + JNI->CallStaticObjectMethodV /*0x398*/))();
  return;
}


// ----- block @ rva 0x7d4b7af -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4b7af(void)

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


// ----- block @ rva 0x7d4b803 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4b803(void)

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


// ----- block @ rva 0x7d4bb12 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4bb12(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180dba6a8)();
  return;
}


// ----- block @ rva 0x7d4bc82 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4bc82(void)

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


// ----- block @ rva 0x7d4bcf5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4bcf5(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  (*_DAT_180dba6a8)();
  return;
}


// ----- block @ rva 0x7d4bd99 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4bd99(void)

{
  FUN_190de3220();
  (*_DAT_180dba588)();
  return;
}


// ----- block @ rva 0x7d4c085 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4c085(void)

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


// ----- block @ rva 0x7d4c0a9 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4c0a9(void)

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


// ----- block @ rva 0x7d4c3b8 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4c3b8(void)

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


// ----- block @ rva 0x7d4c533 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4c533(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallVoidMethodA /*0x1f8*/))();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dba3c8)();
  return;
}


// ----- block @ rva 0x7d4c568 -----

void FUN_187d4c568(void)

{
  return;
}


// ----- block @ rva 0x7d4c576 -----

void FUN_187d4c576(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d4c6e0 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4c6e0(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->AllocObject /*0xd8*/))();
  (*_DAT_180dbaea8)();
  return;
}


// ----- block @ rva 0x7d4cb24 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4cb24(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x570))();
  FUN_190dd72e0();
  (*_DAT_180dba9e8)();
  return;
}


// ----- block @ rva 0x7d4cbc3 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4cbc3(void)

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


// ----- block @ rva 0x7d4d153 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4d153(void)

{
  longlong in_RAX;
  
  (**(code **)(in_RAX + 0x78))();
  FUN_190dd72e0();
  (*_DAT_180dbb518)();
  return;
}


// ----- block @ rva 0x7d4d4f1 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4d4f1(void)

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


// ----- block @ rva 0x7d4d6d6 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4d6d6(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dbb4b8)();
  return;
}


// ----- block @ rva 0x7d4d734 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4d734(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->CallObjectMethodA /*0x120*/))();
  (*_DAT_180dbaad8)();
  return;
}


// ----- block @ rva 0x7d4daf5 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4daf5(void)

{
  longlong *unaff_RSI;
  
  FUN_190dd72e0();
  (**(code **)(unaff_RSI + JNI->ExceptionCheck /*0x720*/))();
  (*_DAT_180dbaaf8)();
  return;
}


// ----- block @ rva 0x7d4de33 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4de33(void)

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


// ----- block @ rva 0x7d4e0bc -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4e0bc(void)

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


// ----- block @ rva 0x7d4e9dd -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4e9dd(void)

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


// ----- block @ rva 0x7d4ef6a -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4ef6a(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ExceptionOccurred /*0x78*/))();
  FUN_190dd72e0();
  (*_DAT_180dbb098)();
  return;
}


// ----- block @ rva 0x7d4efc5 -----

void FUN_187d4efc5(void)

{
  return;
}


// ----- block @ rva 0x7d4efd9 -----

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4efd9(void)

{
  (*_DAT_180dbb678)();
  return;
}


// ----- block @ rva 0x7d4efe4 -----

void FUN_187d4efe4(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// ----- block @ rva 0x7d4f20f -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4f20f(void)

{
  char cVar1;
  longlong *unaff_RSI;
  
  FUN_190de3220();
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


// ----- block @ rva 0x7d4f323 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4f323(void)

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


// ----- block @ rva 0x7d4f559 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4f559(void)

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


// ----- block @ rva 0x7d4f7b7 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d4f7b7(void)

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


// ----- block @ rva 0x7d4f7f5 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d4f7f5(void)

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


// ----- block @ rva 0x7d51611 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d51611(void)

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


// ----- block @ rva 0x7d5164a -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d5164a(void)

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


// ----- block @ rva 0x7d54d50 -----

/* WARNING: Control flow encountered bad instruction data */

void FUN_187d54d50(void)

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


// ----- block @ rva 0x7d54f12 -----

void thunk_FUN_187d51357(void)

{
  longlong *unaff_RSI;
  
  (**(code **)(unaff_RSI + JNI->ThrowNew /*0x70*/))();
  return;
}


// ----- block @ rva 0x7d55061 -----

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_187d55061(void)

{
  char cVar1;
  longlong *unaff_RSI;
  undefined4 uStack0000000000000040;
  
  uStack0000000000000040 = 6;
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


// ----- block @ rva 0x7d552f0 -----

void FUN_187d552f0(void)

{
  return;
}

