// ===== Lsixtwo/fF; aST (Lsixtwo/gH$th;)V (handler @ image 18adfc850, runtime 6ffff285c850) =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18adfc850(void)

{
  char cVar1;
  undefined8 uVar2;
  longlong *unaff_RSI;
  undefined8 in_stack_00000020;
  undefined4 uVar3;
  longlong *in_stack_00000030;
  undefined8 in_stack_00000038;
  longlong in_stack_00000040;
  longlong in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined4 uStack00000000000000b4;
  undefined8 in_stack_000000c0;
  undefined8 in_stack_000000c8;
  undefined2 in_stack_000000d0;
  
  uVar3 = (undefined4)((ulonglong)in_stack_00000020 >> 0x20);
  uVar2 = (**(code **)(*unaff_RSI + 0x78))();
  in_stack_00000038 = FUN_190dd72e0();
  cVar1 = (**(code **)(*in_stack_00000030 + 0x100))(in_stack_00000030,uVar2,in_stack_00000038);
  switch(cVar1 == '\0') {
  case false:
    in_stack_00000040 = uVar2;
    (**(code **)(*in_stack_00000030 + 0x88))();
    uVar2 = in_stack_00000040;
    in_stack_00000038 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50 + 0xb15,0x2c);
    cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
    switch(cVar1 == '\0') {
    case true:
      in_stack_00000040 =
           (**(code **)(*in_stack_00000030 + 0xd8))(in_stack_00000030,in_stack_00000038);
      uStack00000000000000b4 = 0xb89ba9eb;
      rdtsc();
      in_stack_000000c0 = 0x74007800690073;
      rdtsc();
      in_stack_000000c8 = 0x66002f006f0077;
      rdtsc();
      in_stack_000000d0 = 0x47;
      in_stack_00000048 = in_stack_00000040;
      in_stack_00000050 =
           (**(code **)(*in_stack_00000030 + 0x518))(in_stack_00000030,&stack0x000000c0,9);
      in_stack_00000058 = uVar2;
      uVar2 = FUN_190ddfc90(in_stack_00000030,&stack0x00000038,*_DAT_18301ee50 + 0x212,
                            *_DAT_18301ee50 + 0xdad,CONCAT44(uVar3,0x43));
      cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
      switch(cVar1 == '\0') {
      case true:
        switch(in_stack_00000048 == 0) {
        case false:
          (**(code **)(*in_stack_00000030 + 0x2e8))
                    (in_stack_00000030,in_stack_00000048,in_stack_00000038,uVar2,&stack0x00000050);
          cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
          switch(cVar1 == '\0') {
          case true:
            (**(code **)(*in_stack_00000030 + 0x68))(in_stack_00000030,in_stack_00000040);
          }
          break;
        case true:
          uVar2 = FUN_190dd72e0(in_stack_00000030,*_DAT_18301ee50,0);
          cVar1 = (**(code **)(*in_stack_00000030 + 0x720))(in_stack_00000030);
          switch(cVar1 == '\0') {
          case true:
            (**(code **)(*in_stack_00000030 + 0x70))(in_stack_00000030,uVar2,&UNK_182f702a8);
          }
        }
      }
    }
  }
  return 0;
}



// ===== Lsixtwo/fF; aSU ()Ljava/lang/Boolean; (handler @ image 18ae14330, runtime 6ffff2874330) =====
/* decompile failed: Exception while decompiling 18ae14330: process: timeout
 */

// ===== Lsixtwo/fF; aSV ()Ljava/lang/Boolean; (handler @ image 18ae347f0, runtime 6ffff28947f0) =====

/* WARNING: Switch with 1 destination removed at 0x00018ae34808 */
/* WARNING: Switch with 1 destination removed at 0x00018ae34861 */
/* WARNING: Switch with 1 destination removed at 0x00018ae348ae */
/* WARNING: Switch with 1 destination removed at 0x00018ae3491b */
/* WARNING: Switch with 1 destination removed at 0x00018ae34950 */
/* WARNING: Switch with 1 destination removed at 0x00018ae349ef */
/* WARNING: Switch with 1 destination removed at 0x00018ae34a26 */
/* WARNING: Switch with 1 destination removed at 0x00018ae34a5a */
/* WARNING: Switch with 1 destination removed at 0x00018ae34a91 */
/* WARNING: Switch with 1 destination removed at 0x00018ae34ac5 */
/* WARNING: Switch with 1 destination removed at 0x00018ae34afc */
/* WARNING: Switch with 1 destination removed at 0x00018ae34b10 */
/* WARNING: Switch with 1 destination removed at 0x00018ae34b3f */
/* WARNING: Switch with 1 destination removed at 0x00018ae34b76 */
/* WARNING: Switch with 1 destination removed at 0x00018ae34baa */
/* WARNING: Switch with 1 destination removed at 0x00018ae34be1 */
/* WARNING: Switch with 1 destination removed at 0x00018ae34c10 */
/* WARNING: Switch with 1 destination removed at 0x00018ae34c69 */
/* WARNING: Switch with 1 destination removed at 0x00018ae34cb1 */
/* WARNING: Switch with 1 destination removed at 0x00018ae34d1e */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ae347f0(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined8 in_stack_00000038;
  longlong *in_stack_00000040;
  undefined8 in_stack_00000058;
  longlong in_stack_00000060;
  
  plVar3 = in_stack_00000040;
  in_stack_00000058 = FUN_190dd72e0(in_stack_00000040,param_2,0x32b);
  cVar1 = (**(code **)(*plVar3 + 0x720))(plVar3);
  plVar3 = in_stack_00000040;
  switch(cVar1 == '\0') {
  case false:
    uVar2 = (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
    in_stack_00000038 = FUN_190dd72e0(plVar3,*_DAT_18301ee50 + 0x98,4);
    cVar1 = (**(code **)(*plVar3 + 0x100))(plVar3,uVar2,in_stack_00000038);
    switch(cVar1 == '\0') {
    case false:
      in_stack_00000060 = uVar2;
      break;
    case true:
      goto code_r0x00018ae24c92;
    }
    break;
  case true:
    uVar2 = FUN_190de3220(in_stack_00000040,&stack0x00000058,*_DAT_18301ee50 + 0x14486,
                          *_DAT_18301ee50 + 0xf4,0xf43);
    cVar1 = (**(code **)(*plVar3 + 0x720))(plVar3);
    plVar3 = in_stack_00000040;
    switch(cVar1 == '\0') {
    case false:
      uVar2 = (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
      in_stack_00000038 = FUN_190dd72e0(plVar3,*_DAT_18301ee50 + 0x98,4);
      cVar1 = (**(code **)(*plVar3 + 0x100))(plVar3,uVar2,in_stack_00000038);
      switch(cVar1 == '\0') {
      case false:
        in_stack_00000060 = uVar2;
        break;
      case true:
        goto code_r0x00018ae24c92;
      }
      break;
    case true:
      in_stack_00000060 =
           (**(code **)(*in_stack_00000040 + 0x3a0))
                     (in_stack_00000040,in_stack_00000038,uVar2,&stack0x00000060);
      cVar1 = (**(code **)(*plVar3 + 0x720))(plVar3);
      plVar3 = in_stack_00000040;
      switch(cVar1 == '\0') {
      case false:
        uVar2 = (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
        in_stack_00000038 = FUN_190dd72e0(plVar3,*_DAT_18301ee50 + 0x98,4);
        cVar1 = (**(code **)(*plVar3 + 0x100))(plVar3,uVar2,in_stack_00000038);
        switch(cVar1 == '\0') {
        case false:
          in_stack_00000060 = uVar2;
          break;
        case true:
          goto code_r0x00018ae24c92;
        }
        break;
      case true:
        switch(in_stack_00000060 == 0) {
        case false:
          (**(code **)(*in_stack_00000040 + 0x68))(in_stack_00000040);
          break;
        case true:
          in_stack_00000038 = FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50,0);
          cVar1 = (**(code **)(*plVar3 + 0x720))(plVar3);
          plVar3 = in_stack_00000040;
          switch(cVar1 == '\0') {
          case false:
            uVar2 = (**(code **)(*in_stack_00000040 + 0x78))(in_stack_00000040);
            in_stack_00000038 = FUN_190dd72e0(plVar3,*_DAT_18301ee50 + 0x98,4);
            cVar1 = (**(code **)(*plVar3 + 0x100))(plVar3,uVar2,in_stack_00000038);
            switch(cVar1 == '\0') {
            case false:
              in_stack_00000060 = uVar2;
              break;
            case true:
              goto code_r0x00018ae24c92;
            }
            goto code_r0x00018ae34be7;
          case true:
            (**(code **)(*in_stack_00000040 + 0x70))
                      (in_stack_00000040,in_stack_00000038,&UNK_182f702a8);
          }
        }
        uVar2 = (**(code **)(*plVar3 + 0x78))(plVar3);
        in_stack_00000038 = FUN_190dd72e0(plVar3,*_DAT_18301ee50 + 0x98,4);
        cVar1 = (**(code **)(*plVar3 + 0x100))(plVar3,uVar2,in_stack_00000038);
        switch(cVar1 == '\0') {
        case false:
          in_stack_00000060 = uVar2;
          break;
        case true:
          goto code_r0x00018ae24c92;
        }
      }
    }
  }
code_r0x00018ae34be7:
  (**(code **)(*plVar3 + 0x88))(plVar3);
  in_stack_00000038 = FUN_190dd72e0(plVar3,*_DAT_18301ee50 + 0x14458,0x32b);
  cVar1 = (**(code **)(*plVar3 + 0x720))(plVar3);
  switch(cVar1 == '\0') {
  case true:
    uVar2 = FUN_190de3220(plVar3,&stack0x00000038,*_DAT_18301ee50 + 0x14486,*_DAT_18301ee50 + 0xf4,
                          0xf43);
    cVar1 = (**(code **)(*plVar3 + 0x720))(plVar3);
    switch(cVar1 == '\0') {
    case true:
      in_stack_00000060 =
           (**(code **)(*plVar3 + 0x3a0))(plVar3,in_stack_00000038,uVar2,&stack0x00000060);
      cVar1 = (**(code **)(*plVar3 + 0x720))(plVar3);
      plVar3 = in_stack_00000040;
      switch(cVar1 == '\0') {
      case true:
        switch(in_stack_00000060 == 0) {
        case false:
          (**(code **)(*in_stack_00000040 + 0x68))();
          (*_UNK_1819d39a8)();
          return;
        }
        in_stack_00000038 = FUN_190dd72e0(in_stack_00000040,*_DAT_18301ee50,0);
        cVar1 = (**(code **)(*plVar3 + 0x720))(plVar3);
        switch(cVar1 == '\0') {
        case true:
          (**(code **)(*plVar3 + 0x70))(plVar3,in_stack_00000038,&UNK_182f702a8);
          (*_UNK_1819d32f8)();
          return;
        }
      }
    }
  }
code_r0x00018ae24c92:
  return;
}



// ===== Lsixtwo/fF; aSW ()Ljava/lang/Boolean; (handler @ image 18ae34c40, runtime 6ffff2894c40) =====

void FUN_18ae34c40(void)

{
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}



// ===== Lsixtwo/fF; aSX (Ljava/lang/MatchException;)Ljava/lang/MatchException; (handler @ image 18ae35090, runtime 6ffff2895090) =====

/* WARNING: Switch with 1 destination removed at 0x00018ae37fae */
/* WARNING: Switch with 1 destination removed at 0x00018ae38002 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38066 */
/* WARNING: Switch with 1 destination removed at 0x00018ae380cc */
/* WARNING: Switch with 1 destination removed at 0x00018ae380fc */
/* WARNING: Switch with 1 destination removed at 0x00018ae38145 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38199 */
/* WARNING: Switch with 1 destination removed at 0x00018ae381dc */
/* WARNING: Switch with 1 destination removed at 0x00018ae38242 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38272 */
/* WARNING: Switch with 1 destination removed at 0x00018ae382bb */
/* WARNING: Switch with 1 destination removed at 0x00018ae3830f */
/* WARNING: Switch with 1 destination removed at 0x00018ae38352 */
/* WARNING: Switch with 1 destination removed at 0x00018ae383a3 */
/* WARNING: Switch with 1 destination removed at 0x00018ae383f7 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38460 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38497 */
/* WARNING: Switch with 1 destination removed at 0x00018ae384ef */
/* WARNING: Switch with 1 destination removed at 0x00018ae3851e */
/* WARNING: Switch with 1 destination removed at 0x00018ae38555 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38584 */
/* WARNING: Switch with 1 destination removed at 0x00018ae385bb */
/* WARNING: Switch with 1 destination removed at 0x00018ae385ec */
/* WARNING: Switch with 1 destination removed at 0x00018ae3861e */
/* WARNING: Switch with 1 destination removed at 0x00018ae3864d */
/* WARNING: Switch with 1 destination removed at 0x00018ae38684 */
/* WARNING: Switch with 1 destination removed at 0x00018ae386b3 */
/* WARNING: Switch with 1 destination removed at 0x00018ae386ea */
/* WARNING: Switch with 1 destination removed at 0x00018ae38719 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38750 */
/* WARNING: Switch with 1 destination removed at 0x00018ae3877f */
/* WARNING: Switch with 1 destination removed at 0x00018ae387b6 */
/* WARNING: Switch with 1 destination removed at 0x00018ae387e5 */
/* WARNING: Switch with 1 destination removed at 0x00018ae3881c */
/* WARNING: Switch with 1 destination removed at 0x00018ae3884b */
/* WARNING: Switch with 1 destination removed at 0x00018ae38882 */
/* WARNING: Switch with 1 destination removed at 0x00018ae388b1 */
/* WARNING: Switch with 1 destination removed at 0x00018ae388e8 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38917 */
/* WARNING: Switch with 1 destination removed at 0x00018ae3894e */
/* WARNING: Switch with 1 destination removed at 0x00018ae3897d */
/* WARNING: Switch with 1 destination removed at 0x00018ae389b4 */
/* WARNING: Switch with 1 destination removed at 0x00018ae389e3 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38a1a */
/* WARNING: Switch with 1 destination removed at 0x00018ae38a49 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38a80 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38aaf */
/* WARNING: Switch with 1 destination removed at 0x00018ae38ae6 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38b15 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38b4c */
/* WARNING: Switch with 1 destination removed at 0x00018ae38b7b */
/* WARNING: Switch with 1 destination removed at 0x00018ae38bb2 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38be1 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38c3a */
/* WARNING: Switch with 1 destination removed at 0x00018ae38c82 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38cea */
/* WARNING: Switch with 1 destination removed at 0x00018ae38d1a */
/* WARNING: Switch with 1 destination removed at 0x00018ae38d29 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38dbe */
/* WARNING: Switch with 1 destination removed at 0x00018ae38e25 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38e79 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38ee2 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38f19 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38f71 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38fa2 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38fd4 */
/* WARNING: Switch with 1 destination removed at 0x00018ae39003 */
/* WARNING: Switch with 1 destination removed at 0x00018ae3903a */
/* WARNING: Switch with 1 destination removed at 0x00018ae39069 */
/* WARNING: Switch with 1 destination removed at 0x00018ae390a0 */
/* WARNING: Switch with 1 destination removed at 0x00018ae390cf */
/* WARNING: Switch with 1 destination removed at 0x00018ae39106 */
/* WARNING: Switch with 1 destination removed at 0x00018ae3912a */
/* WARNING: Switch with 1 destination removed at 0x00018ae3916e */
/* WARNING: Switch with 1 destination removed at 0x00018ae391a5 */
/* WARNING: Switch with 1 destination removed at 0x00018ae391d6 */
/* WARNING: Switch with 1 destination removed at 0x00018ae39208 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ae35090(int *param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined8 param_5,ulonglong param_6,undefined4 param_7)

{
  byte bVar1;
  int *piVar2;
  char cVar3;
  ulonglong in_RAX;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char unaff_BL;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong unaff_R13;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  byte in_CF;
  uint uVar13;
  uint uVar20;
  longlong lVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined8 extraout_XMM0_Qa_23;
  undefined8 extraout_XMM0_Qa_24;
  undefined8 extraout_XMM0_Qa_25;
  undefined8 extraout_XMM0_Qa_26;
  undefined8 extraout_XMM0_Qa_27;
  undefined8 extraout_XMM0_Qa_28;
  undefined8 extraout_XMM0_Qa_29;
  undefined8 extraout_XMM0_Qa_30;
  undefined8 extraout_XMM0_Qa_31;
  undefined8 extraout_XMM0_Qa_32;
  undefined8 extraout_XMM0_Qa_33;
  undefined8 extraout_XMM0_Qa_34;
  undefined8 extraout_XMM0_Qa_35;
  undefined8 extraout_XMM0_Qa_36;
  undefined8 extraout_XMM0_Qa_37;
  undefined8 extraout_XMM0_Qa_38;
  undefined8 extraout_XMM0_Qa_39;
  undefined8 extraout_XMM0_Qa_40;
  undefined8 extraout_XMM0_Qa_41;
  undefined8 extraout_XMM0_Qa_42;
  undefined8 extraout_XMM0_Qa_43;
  undefined8 extraout_XMM0_Qa_44;
  undefined8 extraout_XMM0_Qa_45;
  undefined8 extraout_XMM0_Qa_46;
  undefined8 extraout_XMM0_Qa_47;
  undefined8 extraout_XMM0_Qa_48;
  undefined8 extraout_XMM0_Qa_49;
  undefined8 extraout_XMM0_Qa_50;
  undefined8 extraout_XMM0_Qa_51;
  undefined8 extraout_XMM0_Qa_52;
  undefined8 extraout_XMM0_Qa_53;
  undefined8 extraout_XMM0_Qa_54;
  undefined8 extraout_XMM0_Qa_55;
  undefined8 extraout_XMM0_Qa_56;
  undefined8 extraout_XMM0_Qa_57;
  undefined8 extraout_XMM0_Qa_58;
  undefined8 extraout_XMM0_Qa_59;
  undefined8 extraout_XMM0_Qa_60;
  undefined8 extraout_XMM0_Qa_61;
  undefined8 extraout_XMM0_Qa_62;
  undefined8 extraout_XMM0_Qa_63;
  undefined8 extraout_XMM0_Qa_64;
  undefined8 extraout_XMM0_Qa_65;
  undefined8 extraout_XMM0_Qa_66;
  undefined8 extraout_XMM0_Qa_67;
  undefined8 extraout_XMM0_Qa_68;
  undefined8 extraout_XMM0_Qa_69;
  undefined8 extraout_XMM0_Qa_70;
  undefined8 extraout_XMM0_Qa_71;
  undefined8 extraout_XMM0_Qa_72;
  undefined8 extraout_XMM0_Qa_73;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  uint uVar21;
  uint uVar26;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  uint uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  uint uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  ulonglong uVar43;
  uint uVar45;
  ulonglong uVar46;
  undefined1 auVar44 [16];
  undefined1 auVar47 [16];
  ulonglong uVar48;
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined8 in_stack_00000058;
  uint uStack0000000000000060;
  uint uStack0000000000000064;
  ulonglong in_stack_00000068;
  ulonglong in_stack_00000070;
  ulonglong in_stack_00000078;
  int *piStack0000000000000088;
  undefined1 in_stack_00000090 [16];
  uint uStack00000000000000a0;
  ulonglong in_stack_000000a8;
  longlong in_stack_000000b0;
  ulonglong in_stack_000000b8;
  undefined1 in_stack_000000c0 [16];
  ulonglong in_stack_000000d0;
  ulonglong in_stack_000000d8;
  
  *param_1 = *param_1 + (int)unaff_RBP + (uint)in_CF;
  *(byte *)(param_1 + -0xbbdadcb) = *(byte *)(param_1 + -0xbbdadcb) ^ (byte)param_1;
  param_3 = unaff_R13 ^ param_3;
  uVar6 = ((in_RAX ^ param_3) + (param_3 & in_RAX) * 2) * (0xfdee30176dd5bb6 - _DAT_183279158);
  uVar6 = (uVar6 | _DAT_1832793f8) + (uVar6 & _DAT_1832793f8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  piStack0000000000000088 = param_1;
  _DAT_183279340 =
       func_0x00018ae39210((param_3 ^ 0xfdee30176dd5bb6 | uVar6) +
                           (uVar6 & (param_3 ^ 0xfdee30176dd5bb6)));
  uVar6 = _DAT_183279340 >> 1 | _DAT_183279340;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          _DAT_183279340;
  uVar6 = uVar5 >> 1 | uVar5;
  uVar6 = uVar6 >> 2 | uVar6;
  uVar6 = uVar6 >> 4 | uVar6;
  uVar6 = uVar6 >> 8 | uVar6;
  uVar6 = uVar6 >> 0x10 | uVar6;
  uVar6 = uVar6 >> 0x20 | uVar6;
  uVar6 = uVar6 - (uVar6 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar5 = (0x40 - (((uVar6 >> 4) + uVar6 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar5;
  uVar10 = unaff_R13 ^ 0xfdee30176dd5bb6;
  _DAT_1832793b0 = (_DAT_1832793b0 ^ uVar5) + uVar10 ^ 0xef89ae047bc773d4;
  _DAT_1832791f0 = (_DAT_1832791f0 * 0x5c4d53bb959d48f ^ _DAT_1832793b0) + uVar5;
  _DAT_183279360 = _DAT_1832791f0 ^ _DAT_1832793b0;
  param_2 = param_2 * param_2;
  uVar11 = param_2 * 0x225689db5c579bcc;
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = _DAT_18001b640;
  auVar15 = pshufb(auVar15 ^ _DAT_1819d7180,_DAT_1800170c0);
  uVar5 = auVar15._8_8_ + auVar15._0_8_;
  uVar6 = uVar5 + _DAT_183279350;
  if (auVar15._4_4_ < 0) {
    uVar6 = _DAT_1832792e0 ^ uVar5;
  }
  _DAT_183279328 = uVar10;
  _DAT_183279118 = func_0x00018ae39210(uVar6 ^ 0x3b);
  _DAT_183279480 = param_2 * -0x225689db5c579bcc;
  _DAT_183279178 = _DAT_183279178 + param_2 * -0x225689db5c579bcc ^ 0xc2789c26c4ff4a15;
  _DAT_183279448 = _DAT_183279270 * -0xe36487da01b96f3;
  _DAT_183279270 = _DAT_183279448 ^ _DAT_183279178;
  uVar6 = (unaff_RBP ^ _DAT_1832793d8) + unaff_RBP + _DAT_183279408;
  uVar5 = (uVar11 ^ _DAT_183279408) + _DAT_1832793d8 + uVar11;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ unaff_RBP ^ _DAT_1832793d8;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar11 ^ _DAT_183279408;
  auVar49._8_4_ = 0xffffffff;
  auVar49._0_8_ = 0xffffffffffffffff;
  auVar49._12_4_ = 0xffffffff;
  _DAT_183279278 =
       func_0x00018ae39210((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832793d8 + uVar11) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (unaff_RBP + _DAT_183279408));
  uVar20 = (uint)(uVar11 >> 0x20);
  auVar47._8_4_ = (int)uVar11;
  auVar47._0_8_ = uVar11;
  auVar47._12_4_ = uVar20;
  in_stack_00000070 = (ulonglong)uVar20;
  in_stack_00000078 = auVar47._8_8_ >> 0x20;
  uVar27 = SUB164(auVar47 & _DAT_1819d7190,0);
  uVar7 = SUB168(auVar47 & _DAT_1819d7190,0);
  uVar21 = SUB164(auVar47 | _DAT_1819d7190,0);
  uVar5 = SUB168(auVar47 | _DAT_1819d7190,0);
  uVar26 = SUB164(_DAT_1819d7190 ^ auVar47,0);
  uVar13 = SUB164(auVar47 ^ auVar49,0);
  uVar9 = SUB168(auVar47 ^ auVar49,0);
  uVar6 = _DAT_183279278 << 0x1c | _DAT_183279278 >> 0x24;
  uVar11 = (ulonglong)_DAT_1819d7220 * (ulonglong)uVar13 +
           ((ulonglong)_DAT_1819d7230 * (ulonglong)uVar13 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_1819d7220 << 0x20) +
           (ulonglong)uVar26 * (ulonglong)_DAT_1819d7200 +
           ((ulonglong)_DAT_1819d7210 * (ulonglong)uVar26 +
            (SUB168(_DAT_1819d7190 ^ auVar47,0) >> 0x20) * (ulonglong)_DAT_1819d7200 << 0x20) +
           (ulonglong)_DAT_1819d71e0 * (ulonglong)uVar21 +
           ((ulonglong)_DAT_1819d71f0 * (ulonglong)uVar21 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_1819d71e0 << 0x20) +
           (ulonglong)_DAT_1819d71c0 * (ulonglong)uVar27 +
           ((ulonglong)_DAT_1819d71d0 * (ulonglong)uVar27 +
            (uVar7 >> 0x20) * (ulonglong)_DAT_1819d71c0 << 0x20) +
           (ulonglong)_DAT_1819d71a0 * (uVar11 & 0xffffffff) +
           ((ulonglong)_DAT_1819d71b0 * (uVar11 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1819d71a0 << 0x20) +
           (-((ulonglong)uVar21 * (_DAT_1819d7290 & 0xffffffff) +
              ((uVar5 >> 0x20) * (_DAT_1819d7290 & 0xffffffff) +
               (ulonglong)_DAT_1819d7280 * (ulonglong)uVar21 << 0x20) +
              (ulonglong)uVar27 * (_DAT_1819d7290 & 0xffffffff) +
              ((uVar7 >> 0x20) * (_DAT_1819d7290 & 0xffffffff) +
               (ulonglong)uVar27 * (ulonglong)_DAT_1819d7280 << 0x20) +
              (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d7260 +
             ((ulonglong)_DAT_1819d7270 * (uVar11 & 0xffffffff) +
              (ulonglong)uVar20 * (ulonglong)_DAT_1819d7260 << 0x20)) -
           ((ulonglong)uVar13 * (_DAT_1819d72a0 & 0xffffffff) +
           ((ulonglong)_DAT_1819d72b0 * (ulonglong)uVar13 +
            (uVar9 >> 0x20) * (_DAT_1819d72a0 & 0xffffffff) << 0x20))) + 0x36993da8bd20c530;
  _DAT_183279348 = _DAT_183279368 ^ uVar6 ^ uVar11;
  _DAT_183279450 = (_DAT_183279450 ^ uVar6) + uVar11 ^ 0x263c9f5b5d34b17f;
  _DAT_1832791a0 = (_DAT_183279398 * -0xb5a61d2c4d239a9 ^ _DAT_183279450) + uVar6 ^ _DAT_183279450;
  uVar9 = uVar11 + param_2 * -0x225689db5c579bcc;
  uVar7 = unaff_R13 * unaff_R13 * 0x5428b508d296d7c7;
  uVar12 = unaff_R13 * unaff_R13 * -0x5428b508d296d7c7;
  uVar5 = uVar9 ^ 0x84222325;
  uVar6 = ((_DAT_183279150 ^ uVar5) + (uVar5 & _DAT_183279150) * 2) * (uVar7 - _DAT_183279310);
  uVar6 = (uVar6 | _DAT_1832794a8) + (uVar6 & _DAT_1832794a8);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_183279398 = uVar11;
  _DAT_1832792b0 = func_0x00018ae39210((uVar5 ^ uVar7 | uVar6) + (uVar6 & (uVar5 ^ uVar7)));
  uVar20 = (uint)(uVar9 >> 0x20);
  auVar17._8_4_ = (int)uVar9;
  auVar17._0_8_ = uVar9;
  auVar17._12_4_ = uVar20;
  uVar26 = (uint)(uVar7 >> 0x20);
  auVar39._8_4_ = (int)uVar7;
  auVar39._0_8_ = uVar7;
  auVar39._12_4_ = uVar26;
  uVar32 = SUB164(auVar17 & auVar39,0);
  uVar11 = SUB168(auVar17 & auVar39,0);
  uVar27 = SUB164(auVar17 | auVar39,0);
  uVar5 = SUB168(auVar17 | auVar39,0);
  uVar21 = SUB164(auVar17 ^ auVar39,0);
  uVar6 = SUB168(auVar17 ^ auVar39,0);
  uVar13 = SUB164(auVar17 ^ _DAT_18001a710,0);
  uVar11 = (((ulonglong)_DAT_1819d7320 * (ulonglong)uVar21 +
             ((ulonglong)_DAT_1819d7330 * (ulonglong)uVar21 +
              (uVar6 >> 0x20) * (ulonglong)_DAT_1819d7320 << 0x20) +
             (ulonglong)_DAT_1819d7300 * (ulonglong)uVar27 +
             ((ulonglong)_DAT_1819d7310 * (ulonglong)uVar27 +
              (uVar5 >> 0x20) * (ulonglong)_DAT_1819d7300 << 0x20) +
            (ulonglong)_DAT_1819d72e0 * (ulonglong)uVar32 +
            ((ulonglong)_DAT_1819d72f0 * (ulonglong)uVar32 +
             (uVar11 >> 0x20) * (ulonglong)_DAT_1819d72e0 << 0x20) +
            (uVar7 & 0xffffffff) * (ulonglong)_DAT_1819d72d0 +
            ((ulonglong)uVar26 * (ulonglong)_DAT_1819d72d0 +
             (ulonglong)_DAT_1819d72c0 * (uVar7 & 0xffffffff) << 0x20) +
            (uVar9 & 0xffffffff) * (ulonglong)_DAT_1819d72d0 +
            ((ulonglong)uVar20 * (ulonglong)_DAT_1819d72d0 +
             (uVar9 & 0xffffffff) * (ulonglong)_DAT_1819d72c0 << 0x20)) -
           ((ulonglong)uVar13 * (_DAT_1819d7370 & 0xffffffff) +
            ((SUB168(auVar17 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_1819d7370 & 0xffffffff) +
             (ulonglong)_DAT_1819d7360 * (ulonglong)uVar13 << 0x20) +
            (ulonglong)uVar21 * (ulonglong)_DAT_1819d7390 +
            ((uVar6 >> 0x20) * (ulonglong)_DAT_1819d7390 +
             (ulonglong)_DAT_1819d7380 * (ulonglong)uVar21 << 0x20) +
            (ulonglong)uVar32 * (ulonglong)_DAT_1819d7390 +
            ((uVar11 >> 0x20) * (ulonglong)_DAT_1819d7390 +
             (ulonglong)uVar32 * (ulonglong)_DAT_1819d7380 << 0x20) +
            (uVar9 & 0xffffffff) * (_DAT_1819d7370 & 0xffffffff) +
            ((ulonglong)uVar20 * (_DAT_1819d7370 & 0xffffffff) +
             (uVar9 & 0xffffffff) * (ulonglong)_DAT_1819d7360 << 0x20) +
           (ulonglong)uVar27 * (ulonglong)_DAT_1819d73a0 +
           ((ulonglong)_DAT_1819d73b0 * (ulonglong)uVar27 +
            (uVar5 >> 0x20) * (ulonglong)_DAT_1819d73a0 << 0x20))) - _DAT_1819d7370;
  auVar30._8_8_ = uVar12;
  auVar30._0_8_ = uVar11 ^ 0x84222325;
  auVar15 = pshufb(auVar30 ^ _DAT_1819d73c0,_DAT_1800170c0);
  uVar6 = _DAT_1832792b0 << 0x37 | _DAT_1832792b0 >> 9 & 0xffffffffffffffe0;
  _DAT_183279240 = _DAT_1832794e0 ^ uVar6 ^ uVar11;
  _DAT_183279370 = (_DAT_183279370 ^ uVar6) + uVar11 ^ 0x64ac2270565e31d;
  _DAT_183279110 = (_DAT_183279110 * -0xab19eed27f5493d ^ _DAT_183279370) + uVar6;
  _DAT_183279208 = _DAT_183279110 ^ _DAT_183279370;
  uVar5 = auVar15._8_8_ + auVar15._0_8_;
  uVar6 = uVar5 + _DAT_1832791a0;
  if (auVar15._4_4_ < 0) {
    uVar6 = _DAT_1832792e0 ^ uVar5;
  }
  _DAT_183279210 = uVar11;
  _DAT_183279480 = func_0x00018ae39210(SUB161(auVar30 ^ _DAT_1819d73c0,5) ^ uVar6);
  uVar20 = (uint)(uVar11 >> 0x20);
  auVar22._8_4_ = (int)uVar11;
  auVar22._0_8_ = uVar11;
  auVar22._12_4_ = uVar20;
  uVar21 = (uint)(uVar12 >> 0x20);
  auVar28._8_4_ = (int)uVar12;
  auVar28._0_8_ = uVar12;
  auVar28._12_4_ = uVar21;
  in_stack_00000070 = (ulonglong)uVar20;
  in_stack_00000078 = auVar22._8_8_ >> 0x20;
  in_stack_00000090 = auVar22 | auVar28;
  uVar6 = (uVar11 & 0xffffffff) * (uVar12 & 0xffffffff) +
          ((ulonglong)uVar20 * (uVar12 & 0xffffffff) + (uVar11 & 0xffffffff) * (ulonglong)uVar21 <<
          0x20);
  uVar27 = SUB164(auVar22 & auVar28,0);
  uVar9 = SUB168(auVar22 & auVar28,0);
  uVar13 = in_stack_00000090._0_4_;
  in_stack_00000068 = in_stack_00000090._8_8_ >> 0x20;
  auVar15 = auVar22 ^ auVar28;
  uVar26 = auVar15._0_4_;
  in_stack_000000a8 = auVar15._8_8_ >> 0x20;
  auVar36._8_4_ = 0xffffffff;
  auVar36._0_8_ = 0xffffffffffffffff;
  auVar36._12_4_ = 0xffffffff;
  uVar32 = SUB164(auVar22 ^ auVar36,0);
  uVar7 = SUB168(auVar22 ^ auVar36,0);
  uVar45 = SUB164(auVar28 ^ auVar36,0);
  uVar5 = SUB168(auVar28 ^ auVar36,0);
  lVar14 = (uVar6 & 0xffffffff) * (ulonglong)_DAT_1819d7470 +
           ((ulonglong)_DAT_1819d7480 * (uVar6 & 0xffffffff) +
            (uVar6 >> 0x20) * (ulonglong)_DAT_1819d7470 << 0x20);
  uStack0000000000000060 = in_stack_00000090._4_4_;
  uStack00000000000000a0 = auVar15._4_4_;
  uVar12 = (((ulonglong)_DAT_1819d7460 * (ulonglong)uVar45 +
             ((uVar5 >> 0x20) * (ulonglong)_DAT_1819d7460 +
              (ulonglong)_DAT_1819d73f0 * (ulonglong)uVar45 << 0x20) +
             (ulonglong)_DAT_1819d7450 * (ulonglong)uVar32 +
             ((uVar7 >> 0x20) * (ulonglong)_DAT_1819d7450 +
              (ulonglong)_DAT_1819d73d0 * (ulonglong)uVar32 << 0x20) +
             (ulonglong)_DAT_1819d7420 * (ulonglong)uVar26 +
             ((auVar15._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7420 +
              (ulonglong)_DAT_1819d7410 * (ulonglong)uVar26 << 0x20) +
             (ulonglong)uVar27 * (ulonglong)_DAT_1819d7420 +
             ((uVar9 >> 0x20) * (ulonglong)_DAT_1819d7420 +
              (ulonglong)uVar27 * (ulonglong)_DAT_1819d7410 << 0x20) +
             (ulonglong)_DAT_1819d7400 * (uVar12 & 0xffffffff) +
             ((ulonglong)uVar21 * (ulonglong)_DAT_1819d7400 +
              (uVar12 & 0xffffffff) * (ulonglong)_DAT_1819d73f0 << 0x20) +
             (ulonglong)_DAT_1819d73e0 * (uVar11 & 0xffffffff) +
             ((ulonglong)uVar20 * (ulonglong)_DAT_1819d73e0 +
              (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d73d0 << 0x20) +
             (ulonglong)_DAT_1819d7430 * (ulonglong)uVar13 +
             ((ulonglong)_DAT_1819d7440 * (ulonglong)uVar13 +
              (in_stack_00000090._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7430 << 0x20) + lVar14) -
           ((ulonglong)uVar45 * (ulonglong)_DAT_1819d74c0 +
            ((uVar5 >> 0x20) * (ulonglong)_DAT_1819d74c0 +
             (ulonglong)_DAT_1819d74b0 * (ulonglong)uVar45 << 0x20) +
            (ulonglong)uVar32 * (ulonglong)_DAT_1819d74a0 +
            ((uVar7 >> 0x20) * (ulonglong)_DAT_1819d74a0 +
             (ulonglong)_DAT_1819d7490 * (ulonglong)uVar32 << 0x20) +
            (ulonglong)uVar26 * (ulonglong)_DAT_1819d74e0 +
            ((ulonglong)uStack00000000000000a0 * (ulonglong)_DAT_1819d74e0 +
             (ulonglong)_DAT_1819d74d0 * (ulonglong)uVar26 << 0x20) +
            (ulonglong)uVar27 * (ulonglong)_DAT_1819d74e0 +
            ((uVar9 >> 0x20) * (ulonglong)_DAT_1819d74e0 +
             (ulonglong)uVar27 * (ulonglong)_DAT_1819d74d0 << 0x20) +
            (uVar12 & 0xffffffff) * (ulonglong)_DAT_1819d74c0 +
            ((ulonglong)uVar21 * (ulonglong)_DAT_1819d74c0 +
             (uVar12 & 0xffffffff) * (ulonglong)_DAT_1819d74b0 << 0x20) +
            (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d74a0 +
            ((ulonglong)uVar20 * (ulonglong)_DAT_1819d74a0 +
             (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d7490 << 0x20) +
            (ulonglong)uVar13 * (ulonglong)_DAT_1819d74f0 +
            ((ulonglong)_DAT_1819d7500 * (ulonglong)uVar13 +
             (ulonglong)uStack0000000000000060 * (ulonglong)_DAT_1819d74f0 << 0x20) + lVar14)) +
           _DAT_1819d7510;
  _DAT_183279288 = _DAT_1832793b8 ^ _DAT_183279480 ^ uVar12;
  _DAT_183279388 = (_DAT_183279388 ^ _DAT_183279480) + uVar12 ^ 0xf40f840c691492d2;
  _DAT_183279468 = (_DAT_183279468 * -0x2e88c6e63e4eee4b ^ _DAT_183279388) + _DAT_183279480;
  _DAT_183279368 = _DAT_183279468 ^ _DAT_183279388;
  lVar14 = _DAT_1819d69c0 * unaff_R13;
  uVar11 = lVar14 * 0x1972130e0719784d;
  uVar6 = (_DAT_1832793a8 ^ 0x84222325) + _DAT_183279160 + 0x84222325;
  uVar5 = (uVar11 ^ _DAT_183279160) + _DAT_1832793a8 + uVar11;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ _DAT_1832793a8 ^ 0x84222325;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar11 ^ _DAT_183279160;
  _DAT_1832792e8 = uVar12;
  _uStack0000000000000060 = in_stack_00000090._0_8_ >> 0x20;
  _uStack00000000000000a0 = (int *)(auVar15._0_8_ >> 0x20);
  _DAT_1832792e0 =
       func_0x00018ae39210((uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_1832793a8 + uVar11) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_183279160 + 0x84222325));
  uVar6 = _DAT_1832792e0 << 0x1f | (_DAT_1832792e0 & 0x7fffffffffffffff) >> 0x21;
  _DAT_183279150 = lVar14 * -0x1972130e0719784d;
  _DAT_1832792d8 = (_DAT_1832792d8 ^ uVar6) + lVar14 * -0x1972130e0719784d ^ 0xf47a8aad1ec81596;
  _DAT_183279358 = (_DAT_183279358 * 0x5946e24a7fa86841 ^ _DAT_1832792d8) + uVar6;
  _DAT_1832792a0 = _DAT_183279358 ^ _DAT_1832792d8;
  _DAT_1832793e0 = _DAT_1832792e0 ^ _DAT_183279150;
  uVar5 = uVar12 ^ 0x84222325;
  uVar6 = ((_DAT_183279150 ^ uVar5) + (uVar5 & _DAT_183279150) * 2) * (uVar11 - _DAT_1832794e0);
  uVar6 = (uVar6 | _DAT_183279418) + (uVar6 & _DAT_183279418);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1832792f0 = func_0x00018ae39210((uVar5 ^ uVar11 | uVar6) + (uVar6 & (uVar5 ^ uVar11)));
  piVar2 = piStack0000000000000088;
  uVar27 = (uint)(uVar12 >> 0x20);
  auVar33._8_4_ = (int)uVar12;
  auVar33._0_8_ = uVar12;
  auVar33._12_4_ = uVar27;
  uVar20 = (uint)(uVar11 >> 0x20);
  auVar29._8_4_ = (int)uVar11;
  auVar29._0_8_ = uVar11;
  auVar29._12_4_ = uVar20;
  uVar26 = SUB164(auVar33 & auVar29,0);
  uVar7 = SUB168(auVar33 & auVar29,0);
  uVar21 = SUB164(auVar33 | auVar29,0);
  uVar9 = SUB168(auVar33 | auVar29,0);
  uVar13 = SUB164(auVar33 ^ auVar29,0);
  uVar5 = SUB168(auVar33 ^ auVar29,0);
  uVar6 = (_DAT_1832792f0 & 0x1fffffff00) * 0x400;
  _DAT_183279440 =
       ((ulonglong)_DAT_1819d7580 * (ulonglong)uVar13 +
        ((ulonglong)_DAT_1819d7590 * (ulonglong)uVar13 + (uVar5 >> 0x20) * (ulonglong)_DAT_1819d7580
        << 0x20) +
        (ulonglong)_DAT_1819d7560 * (ulonglong)uVar21 +
        ((ulonglong)_DAT_1819d7570 * (ulonglong)uVar21 + (uVar9 >> 0x20) * (ulonglong)_DAT_1819d7560
        << 0x20) +
       (ulonglong)_DAT_1819d7540 * (ulonglong)uVar26 +
       ((ulonglong)_DAT_1819d7550 * (ulonglong)uVar26 + (uVar7 >> 0x20) * (ulonglong)_DAT_1819d7540
       << 0x20) +
       (ulonglong)_DAT_1819d7530 * (uVar11 & 0xffffffff) +
       ((ulonglong)uVar20 * (ulonglong)_DAT_1819d7530 +
        (ulonglong)_DAT_1819d7520 * (uVar11 & 0xffffffff) << 0x20) +
       (uVar12 & 0xffffffff) * (ulonglong)_DAT_1819d7530 +
       ((ulonglong)uVar27 * (ulonglong)_DAT_1819d7530 +
        (uVar12 & 0xffffffff) * (ulonglong)_DAT_1819d7520 << 0x20)) -
       ((ulonglong)uVar13 * (_DAT_1819d7620 & 0xffffffff) +
        ((ulonglong)_DAT_1819d7630 * (ulonglong)uVar13 +
         (uVar5 >> 0x20) * (_DAT_1819d7620 & 0xffffffff) << 0x20) +
        (ulonglong)uVar21 * (ulonglong)_DAT_1819d7600 +
        ((ulonglong)_DAT_1819d7610 * (ulonglong)uVar21 + (uVar9 >> 0x20) * (ulonglong)_DAT_1819d7600
        << 0x20) +
       (ulonglong)uVar26 * (ulonglong)_DAT_1819d75e0 +
       ((ulonglong)_DAT_1819d75f0 * (ulonglong)uVar26 + (uVar7 >> 0x20) * (ulonglong)_DAT_1819d75e0
       << 0x20) +
       (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d75d0 +
       ((ulonglong)uVar20 * (ulonglong)_DAT_1819d75d0 +
        (ulonglong)_DAT_1819d75c0 * (uVar11 & 0xffffffff) << 0x20) +
       (uVar12 & 0xffffffff) * (ulonglong)_DAT_1819d75d0 +
       ((ulonglong)uVar27 * (ulonglong)_DAT_1819d75d0 +
        (uVar12 & 0xffffffff) * (ulonglong)_DAT_1819d75c0 << 0x20));
  _DAT_183279200 = _DAT_1832793d0 ^ uVar6 ^ _DAT_183279440;
  _DAT_183279170 = (_DAT_183279170 ^ uVar6) + _DAT_183279440 ^ 0x72865128ef560e67;
  _DAT_1832791d8 = (_DAT_1832791d8 * -0x46d8f6907445973b ^ _DAT_183279170) + uVar6;
  _DAT_1832793a8 = _DAT_1832791d8 ^ _DAT_183279170;
  in_stack_00000070 = (ulonglong)piStack0000000000000088 ^ 0x84222325;
  in_stack_00000078 = 0;
  in_stack_00000090._8_8_ = uVar10;
  in_stack_00000090._0_8_ = in_stack_00000070;
  auVar15 = pshufb(_DAT_1819d7640 ^ in_stack_00000090,_DAT_1800170c0);
  uVar11 = _DAT_183279440 + lVar14 * -0x1972130e0719784d;
  uVar5 = auVar15._8_8_ + auVar15._0_8_;
  uVar6 = uVar5 + _DAT_183279220;
  if (auVar15._4_4_ < 0) {
    uVar6 = _DAT_183279330 ^ uVar5;
  }
  _DAT_183279158 = func_0x00018ae39210(SUB161(_DAT_1819d7640 ^ in_stack_00000090,5) ^ uVar6);
  auVar17 = in_stack_00000090;
  auVar15 = _DAT_1800170c0;
  _uStack00000000000000a0 = piVar2;
  in_stack_000000a8 = 0;
  uVar13 = (uint)((ulonglong)piVar2 >> 0x20);
  auVar23._8_4_ = (int)piVar2;
  auVar23._0_8_ = piVar2;
  auVar23._12_4_ = uVar13;
  uVar20 = (uint)(uVar10 >> 0x20);
  auVar44._8_4_ = (int)uVar10;
  auVar44._0_8_ = uVar10;
  auVar44._12_4_ = uVar20;
  uVar12 = auVar23._8_8_;
  auVar47 = auVar23 & auVar44;
  in_stack_000000c0 = auVar23 | auVar44;
  uVar9 = auVar44._8_8_;
  uVar6 = ((ulonglong)piVar2 & 0xffffffff) * (uVar10 & 0xffffffff) +
          (((ulonglong)piVar2 & 0xffffffff) * (ulonglong)uVar20 +
           (ulonglong)uVar13 * (uVar10 & 0xffffffff) << 0x20);
  uVar27 = auVar47._0_4_;
  uVar46 = auVar47._8_8_;
  uVar7 = in_stack_000000c0._0_8_;
  uVar48 = in_stack_000000c0._8_8_;
  auVar44 = auVar23 ^ auVar44;
  uVar32 = auVar44._0_4_;
  uVar45 = auVar44._8_4_;
  uVar43 = auVar44._8_8_ >> 0x20;
  auVar23 = auVar23 ^ _DAT_18001a710;
  uVar21 = auVar23._0_4_;
  uVar26 = auVar23._8_4_;
  in_stack_000000d0 = auVar23._0_8_ >> 0x20;
  in_stack_000000d8 = auVar23._8_8_ >> 0x20;
  lVar14 = (uVar6 & 0xffffffff) * (ulonglong)_DAT_1819d76c0 +
           ((ulonglong)_DAT_1819d76d0 * (uVar6 & 0xffffffff) +
            (uVar6 >> 0x20) * (ulonglong)_DAT_1819d76c0 << 0x20);
  auVar30 = pshufb(_DAT_1819d77b0 ^ in_stack_00000090,_DAT_1800170c0);
  uVar6 = _DAT_183279158 & 0xffffffffffc00000;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar7 = (((_DAT_1819d7670 & 0xffffffff) * (ulonglong)uVar21 +
            ((auVar23._0_8_ >> 0x20) * (_DAT_1819d7670 & 0xffffffff) +
             (ulonglong)_DAT_1819d7650 * (ulonglong)uVar21 << 0x20) +
            (_DAT_1819d7690 & 0xffffffff) * (ulonglong)uVar32 +
            ((auVar44._0_8_ >> 0x20) * (_DAT_1819d7690 & 0xffffffff) +
             (_DAT_1819d7680 & 0xffffffff) * (ulonglong)uVar32 << 0x20) +
            (ulonglong)uVar27 * (_DAT_1819d7690 & 0xffffffff) +
            ((auVar47._0_8_ >> 0x20) * (_DAT_1819d7690 & 0xffffffff) +
             (ulonglong)uVar27 * (_DAT_1819d7680 & 0xffffffff) << 0x20) +
            (_DAT_1819d7660 & 0xffffffff) * ((ulonglong)piVar2 & 0xffffffff) + uVar10 +
            ((ulonglong)uVar13 * (_DAT_1819d7660 & 0xffffffff) +
             ((ulonglong)piVar2 & 0xffffffff) * (ulonglong)_DAT_1819d7650 << 0x20) +
            (_DAT_1819d76a0 & 0xffffffff) * (ulonglong)in_stack_000000c0._0_4_ +
            ((_DAT_1819d76b0 & 0xffffffff) * (ulonglong)in_stack_000000c0._0_4_ +
             (uVar7 >> 0x20) * (_DAT_1819d76a0 & 0xffffffff) << 0x20) + lVar14) -
          ((ulonglong)uVar21 * (ulonglong)_DAT_1819d7720 +
           ((_DAT_1819d7790 & 0xffffffff) * (ulonglong)uVar21 + in_stack_000000d0 * _DAT_1819d7720
           << 0x20) +
           (ulonglong)uVar32 * (ulonglong)_DAT_1819d7770 +
           ((_DAT_1819d7780 & 0xffffffff) * (ulonglong)uVar32 +
            (auVar44._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7770 << 0x20) +
           (uVar7 & 0xffffffff) * (ulonglong)_DAT_1819d7750 +
           ((_DAT_1819d7760 & 0xffffffff) * (uVar7 & 0xffffffff) +
            (uVar7 >> 0x20) * (ulonglong)_DAT_1819d7750 << 0x20) +
           (ulonglong)uVar27 * (ulonglong)_DAT_1819d7730 +
           ((_DAT_1819d7740 & 0xffffffff) * (ulonglong)uVar27 +
            (auVar47._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7730 << 0x20) +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d7700 +
           ((_DAT_1819d7710 & 0xffffffff) * (uVar10 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1819d7700 << 0x20) +
           (((ulonglong)piVar2 & 0xffffffff) * (ulonglong)_DAT_1819d76f0 +
            (ulonglong)uVar13 * (ulonglong)_DAT_1819d76e0 << 0x20) +
           ((ulonglong)piVar2 & 0xffffffff) * (ulonglong)_DAT_1819d76e0 + lVar14)) + _DAT_1819d77a0;
  in_stack_00000068 =
       (((_UNK_1819d7678 & 0xffffffff) * (ulonglong)uVar26 +
         (in_stack_000000d8 * (_UNK_1819d7678 & 0xffffffff) +
          (ulonglong)_UNK_1819d7658 * (ulonglong)uVar26 << 0x20) +
         (_UNK_1819d7698 & 0xffffffff) * (ulonglong)uVar45 +
         (uVar43 * (_UNK_1819d7698 & 0xffffffff) + (_UNK_1819d7688 & 0xffffffff) * (ulonglong)uVar45
         << 0x20) +
         (uVar46 & 0xffffffff) * (_UNK_1819d7698 & 0xffffffff) +
         ((uVar46 >> 0x20) * (_UNK_1819d7698 & 0xffffffff) +
          (uVar46 & 0xffffffff) * (_UNK_1819d7688 & 0xffffffff) << 0x20) +
         (_UNK_1819d7668 & 0xffffffff) * ((ulonglong)piVar2 & 0xffffffff) + uVar9 +
         ((uVar12 >> 0x20) * (_UNK_1819d7668 & 0xffffffff) +
          (uVar12 & 0xffffffff) * (ulonglong)_UNK_1819d7658 << 0x20) +
        (_UNK_1819d76a8 & 0xffffffff) * (ulonglong)in_stack_000000c0._8_4_ +
        ((_UNK_1819d76b8 & 0xffffffff) * (ulonglong)in_stack_000000c0._8_4_ +
         (uVar48 >> 0x20) * (_UNK_1819d76a8 & 0xffffffff) << 0x20)) -
       ((auVar23._8_8_ & 0xffffffff) * (ulonglong)_UNK_1819d7728 +
        ((_UNK_1819d7798 & 0xffffffff) * (ulonglong)uVar26 + in_stack_000000d8 * _UNK_1819d7728 <<
        0x20) + (auVar44._8_8_ & 0xffffffff) * (ulonglong)_UNK_1819d7778 +
                ((_UNK_1819d7788 & 0xffffffff) * (ulonglong)uVar45 + uVar43 * _UNK_1819d7778 << 0x20
                ) + (uVar48 & 0xffffffff) * (ulonglong)_UNK_1819d7758 +
                    ((_UNK_1819d7768 & 0xffffffff) * (uVar48 & 0xffffffff) +
                     (uVar48 >> 0x20) * (ulonglong)_UNK_1819d7758 << 0x20) +
                (uVar46 & 0xffffffff) * (ulonglong)_UNK_1819d7738 +
                ((_UNK_1819d7748 & 0xffffffff) * (ulonglong)auVar47._8_4_ +
                 (uVar46 >> 0x20) * (ulonglong)_UNK_1819d7738 << 0x20) +
                (uVar9 & 0xffffffff) * (ulonglong)_UNK_1819d7708 +
                ((_UNK_1819d7718 & 0xffffffff) * (uVar10 & 0xffffffff) +
                 (uVar9 >> 0x20) * (ulonglong)_UNK_1819d7708 << 0x20) +
                ((uVar12 & 0xffffffff) * (ulonglong)_UNK_1819d76f8 +
                 (uVar12 >> 0x20) * (ulonglong)_UNK_1819d76e8 << 0x20) +
                (uVar12 & 0xffffffff) * (ulonglong)_UNK_1819d76e8)) + _UNK_1819d77a8;
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar6;
  _DAT_183279370 = _DAT_183279468 ^ uVar6 ^ uVar7;
  _DAT_183279100 = (_DAT_183279100 ^ uVar6) + uVar7 ^ 0x1b9ac89c23cc5e9a;
  _DAT_1832792b8 = (_DAT_1832792b8 * 0x63fd76b4ce0f29f7 ^ _DAT_183279100) + uVar6;
  _DAT_183279430 = _DAT_1832792b8 ^ _DAT_183279100;
  uVar5 = auVar30._8_8_ + auVar30._0_8_;
  uVar6 = uVar5 + _DAT_1832791d0;
  if (auVar30._4_4_ < 0) {
    uVar6 = _DAT_183279440 ^ uVar5;
  }
  _DAT_183279360 = uVar7;
  _uStack0000000000000060 = uVar7;
  _DAT_183279238 = func_0x00018ae39210(SUB161(_DAT_1819d77b0 ^ in_stack_00000090,5) ^ uVar6);
  uVar5 = (((ulonglong)piVar2 | uVar10) ^ _DAT_183279238) * 0x58dcceec86278d1d;
  uVar6 = uVar10 & (ulonglong)piVar2;
  uVar10 = (longlong)piVar2 + uVar6 * -2 + uVar10;
  _DAT_1832793c8 = (_DAT_1832793c8 ^ uVar5) + uVar10 ^ 0x78d2ea13ad8cec36;
  _DAT_183279280 = (_DAT_183279280 * -0x1993160d99c88f67 ^ _DAT_1832793c8) + uVar5;
  _DAT_183279130 = _DAT_183279280 ^ _DAT_1832793c8;
  auVar15 = pshufb(auVar17 ^ _DAT_1819d77c0,auVar15);
  uVar9 = auVar15._8_8_ + auVar15._0_8_;
  uVar5 = uVar9 + _DAT_183279168;
  if (auVar15._4_4_ < 0) {
    uVar5 = _DAT_1832794b0 ^ uVar9;
  }
  _DAT_1832792b0 = uVar10;
  _DAT_1832791f8 = func_0x00018ae39210(SUB161(auVar17 ^ _DAT_1819d77c0,5) ^ uVar5);
  _DAT_1832793d8 = (_DAT_1832793d8 ^ _DAT_183279220) + uVar6 ^ 0x930b9103b0256c30;
  _DAT_183279488 = (_DAT_183279488 * 0x507ff3ddc3618675 ^ _DAT_1832793d8) + _DAT_183279220;
  _DAT_183279110 = _DAT_183279488 ^ _DAT_1832793d8;
  uVar5 = uVar10 ^ 0x84222325 ^ _DAT_1832794f0;
  uVar9 = uVar6 * 2 ^ _DAT_1832794d0;
  lVar8 = (uVar10 ^ 0x84222325) + _DAT_1832794d0;
  lVar14 = _DAT_1832794f0 + uVar6 * 2;
  uVar12 = uVar5 + lVar8;
  uVar43 = uVar9 + lVar14;
  uVar5 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar5;
  uVar9 = (uVar43 * 0x2000 | uVar43 >> 0x33) ^ uVar9;
  _DAT_183279498 = uVar6;
  _DAT_183279258 =
       func_0x00018ae39210((uVar9 << 0x1d | uVar9 >> 0x23) - lVar14 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar8);
  uVar13 = (uint)(uVar10 >> 0x20);
  auVar40._8_4_ = (int)uVar10;
  auVar40._0_8_ = uVar10;
  auVar40._12_4_ = uVar13;
  auVar37._8_4_ = (int)uVar6;
  auVar37._0_8_ = uVar6;
  auVar37._12_4_ = (int)(uVar6 >> 0x20);
  uVar6 = uVar6 * 2;
  auVar38._8_8_ = auVar37._8_8_ * 2;
  auVar38._0_8_ = uVar6;
  uVar45 = (uint)(uVar6 >> 0x20);
  uVar32 = SUB164(auVar40 & auVar38,0);
  uVar20 = SUB164(auVar40 | auVar38,0);
  uVar27 = SUB164(auVar40 ^ auVar38,0);
  uVar5 = (_DAT_183279258 & 0x7fffffffff) -
          ((_DAT_183279258 & 0x7fffffffff) >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (ulonglong)((uint)bVar1 + (uint)bVar1) ^ _DAT_183279258 & 0x7fffffffff;
  auVar31._8_4_ = 0xffffffff;
  auVar31._0_8_ = 0xffffffffffffffff;
  auVar31._12_4_ = 0xffffffff;
  uVar21 = SUB164(auVar40 ^ auVar31,0);
  uVar26 = SUB164(auVar38 ^ auVar31,0);
  uVar9 = (((ulonglong)uVar27 * (ulonglong)_DAT_1819d7830 +
            ((ulonglong)_DAT_1819d7840 * (ulonglong)uVar27 +
             (SUB168(auVar40 ^ auVar38,0) >> 0x20) * (ulonglong)_DAT_1819d7830 << 0x20) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1819d7810 +
            ((ulonglong)_DAT_1819d7820 * (ulonglong)uVar20 +
             (SUB168(auVar40 | auVar38,0) >> 0x20) * (ulonglong)_DAT_1819d7810 << 0x20) +
           (ulonglong)uVar32 * (ulonglong)_DAT_1819d77f0 +
           ((ulonglong)_DAT_1819d7800 * (ulonglong)uVar32 +
            (SUB168(auVar40 & auVar38,0) >> 0x20) * (ulonglong)_DAT_1819d77f0 << 0x20) +
           (ulonglong)_DAT_1819d77e0 * (uVar6 & 0xffffffff) +
           ((ulonglong)uVar45 * (ulonglong)_DAT_1819d77e0 +
            (ulonglong)_DAT_1819d77d0 * (uVar6 & 0xffffffff) << 0x20) +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d77e0 +
           ((ulonglong)uVar13 * (ulonglong)_DAT_1819d77e0 +
            (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d77d0 << 0x20)) -
          ((ulonglong)uVar26 * (ulonglong)_DAT_1819d78a0 +
           ((SUB168(auVar38 ^ auVar31,0) >> 0x20) * (ulonglong)_DAT_1819d78a0 +
            (ulonglong)_DAT_1819d7890 * (ulonglong)uVar26 << 0x20) +
          (ulonglong)uVar21 * (ulonglong)_DAT_1819d7880 +
          ((SUB168(auVar40 ^ auVar31,0) >> 0x20) * (ulonglong)_DAT_1819d7880 +
           (ulonglong)_DAT_1819d7870 * (ulonglong)uVar21 << 0x20) +
          (uVar6 & 0xffffffff) * (ulonglong)_DAT_1819d78a0 +
          ((ulonglong)uVar45 * (ulonglong)_DAT_1819d78a0 +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_1819d7890 << 0x20) +
          (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d7880 +
          ((ulonglong)uVar13 * (ulonglong)_DAT_1819d7880 +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d7870 << 0x20))) - _DAT_1819d78b0;
  _DAT_1832791d0 = _DAT_1832792c8 ^ uVar5 ^ uVar9;
  _DAT_1832793f8 = (_DAT_1832793f8 ^ uVar5) + uVar9 ^ 0xbe41541aa2a79630;
  _DAT_183279338 = (_DAT_183279338 * -0x30fe3b7f5b3673e1 ^ _DAT_1832793f8) + uVar5;
  _DAT_183279390 = _DAT_183279338 ^ _DAT_1832793f8;
  uVar6 = uVar7 ^ 0x84222325 ^ _DAT_183279458;
  lVar14 = (uVar7 ^ 0x84222325) + _DAT_183279210;
  uVar5 = uVar6 + lVar14;
  uVar10 = (uVar9 ^ _DAT_183279210) + uVar9 + _DAT_183279458;
  uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
  uVar5 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar9 ^ _DAT_183279210;
  _DAT_183279348 = uVar9;
  _DAT_1832791d8 =
       func_0x00018ae39210((uVar5 << 0x1d | uVar5 >> 0x23) - (uVar9 + _DAT_183279458) ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
  auVar41._8_4_ = uStack0000000000000060;
  auVar41._0_8_ = _uStack0000000000000060;
  auVar41._12_4_ = uStack0000000000000064;
  uVar21 = (uint)(uVar9 >> 0x20);
  auVar34._8_4_ = (int)uVar9;
  auVar34._0_8_ = uVar9;
  auVar34._12_4_ = uVar21;
  in_stack_00000068 = auVar34._8_8_ >> 0x20;
  uVar26 = SUB164(auVar41 & auVar34,0);
  uVar5 = SUB168(auVar41 & auVar34,0);
  uVar13 = SUB164(auVar41 | auVar34,0);
  uVar7 = SUB168(auVar41 | auVar34,0);
  uVar20 = SUB164(auVar41 ^ auVar34,0);
  uVar10 = SUB168(auVar41 ^ auVar34,0);
  uVar6 = (_DAT_1832791d8 & 0x1ffffffffff) << 1 | (ulonglong)((longlong)_DAT_1832791d8 < 0);
  uVar7 = ((ulonglong)_DAT_1819d78d0 * (ulonglong)uVar20 +
           ((uVar10 >> 0x20) * (ulonglong)_DAT_1819d78d0 +
            (ulonglong)_DAT_1819d78c0 * (ulonglong)uVar20 << 0x20) +
           (ulonglong)uVar26 * (ulonglong)_DAT_1819d78d0 + (_uStack0000000000000060 - uVar9) +
           ((uVar5 >> 0x20) * (ulonglong)_DAT_1819d78d0 +
            (ulonglong)uVar26 * (ulonglong)_DAT_1819d78c0 << 0x20) +
          (ulonglong)_DAT_1819d78e0 * (ulonglong)uVar13 +
          ((ulonglong)_DAT_1819d78f0 * (ulonglong)uVar13 +
           (uVar7 >> 0x20) * (ulonglong)_DAT_1819d78e0 << 0x20)) -
          ((ulonglong)uVar20 * (_DAT_1819d7980 & 0xffffffff) +
           ((ulonglong)_DAT_1819d7990 * (ulonglong)uVar20 +
            (uVar10 >> 0x20) * (_DAT_1819d7980 & 0xffffffff) << 0x20) +
           (ulonglong)uVar13 * (ulonglong)_DAT_1819d7960 +
           ((ulonglong)_DAT_1819d7970 * (ulonglong)uVar13 +
            (uVar7 >> 0x20) * (ulonglong)_DAT_1819d7960 << 0x20) +
          (ulonglong)uVar26 * (ulonglong)_DAT_1819d7940 +
          ((ulonglong)_DAT_1819d7950 * (ulonglong)uVar26 +
           (uVar5 >> 0x20) * (ulonglong)_DAT_1819d7940 << 0x20) +
          (uVar9 & 0xffffffff) * (ulonglong)_DAT_1819d7930 +
          ((ulonglong)uVar21 * (ulonglong)_DAT_1819d7930 +
           (ulonglong)_DAT_1819d7920 * (uVar9 & 0xffffffff) << 0x20) +
          (_uStack0000000000000060 & 0xffffffff) * (ulonglong)_DAT_1819d7930 +
          ((ulonglong)uStack0000000000000064 * (ulonglong)_DAT_1819d7930 +
           (_uStack0000000000000060 & 0xffffffff) * (ulonglong)_DAT_1819d7920 << 0x20));
  _DAT_1832793b8 = uVar7 ^ uVar6;
  _DAT_1832794b8 = (_DAT_1832794b8 ^ uVar6) + uVar7 ^ 0xad720c6291bfd982;
  _DAT_183279320 = (_DAT_183279320 * -0x612449fa2cd60cf9 ^ _DAT_1832794b8) + uVar6;
  _DAT_1832791a0 = _DAT_183279320 ^ _DAT_1832794b8;
  uVar6 = uVar11 ^ 0x84222325;
  uVar5 = ((_DAT_1832792f0 ^ uVar6) + (uVar6 & _DAT_1832792f0) * 2) * (uVar7 - _DAT_183279440);
  uVar5 = (uVar5 | _DAT_183279230) + (uVar5 & _DAT_183279230);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832791a8 = uVar7;
  _uStack0000000000000060 = (ulonglong)uVar21;
  uVar6 = func_0x00018ae39210((uVar6 ^ uVar7 | uVar5) + (uVar5 & (uVar6 ^ uVar7)));
  piVar2 = piStack0000000000000088;
  auVar15 = _DAT_1800170c0;
  uVar6 = uVar6 ^ uVar7;
  uVar20 = (uint)(uVar11 >> 0x20);
  auVar35._8_4_ = (int)uVar11;
  auVar35._0_8_ = uVar11;
  auVar35._12_4_ = uVar20;
  uVar21 = (uint)(uVar7 >> 0x20);
  auVar24._8_4_ = (int)uVar7;
  auVar24._0_8_ = uVar7;
  auVar24._12_4_ = uVar21;
  uVar32 = SUB164(auVar35 & auVar24,0);
  uVar5 = SUB168(auVar35 & auVar24,0);
  uVar13 = SUB164(auVar35 | auVar24,0);
  uVar9 = SUB168(auVar35 | auVar24,0);
  uVar45 = SUB164(auVar35 ^ auVar24,0);
  auVar50._8_4_ = 0xffffffff;
  auVar50._0_8_ = 0xffffffffffffffff;
  auVar50._12_4_ = 0xffffffff;
  uVar26 = SUB164(auVar35 ^ auVar50,0);
  uVar27 = SUB164(auVar24 ^ auVar50,0);
  uVar10 = ~(ulonglong)piStack0000000000000088;
  auVar16._8_8_ = uVar10;
  auVar16._0_8_ = in_stack_00000070;
  auVar17 = pshufb(auVar16 ^ _DAT_1819d7ac0,_DAT_1800170c0);
  uVar11 = (((ulonglong)uVar26 * (ulonglong)_DAT_1819d79c0 +
             ((SUB168(auVar35 ^ auVar50,0) >> 0x20) * (ulonglong)_DAT_1819d79c0 +
              (ulonglong)_DAT_1819d79a0 * (ulonglong)uVar26 << 0x20) +
             (ulonglong)uVar45 * (ulonglong)_DAT_1819d79e0 +
             ((SUB168(auVar35 ^ auVar24,0) >> 0x20) * (ulonglong)_DAT_1819d79e0 +
              (ulonglong)_DAT_1819d79d0 * (ulonglong)uVar45 << 0x20) +
             (ulonglong)uVar32 * (ulonglong)_DAT_1819d79e0 +
             ((uVar5 >> 0x20) * (ulonglong)_DAT_1819d79e0 +
              (ulonglong)uVar32 * (ulonglong)_DAT_1819d79d0 << 0x20) +
             (ulonglong)_DAT_1819d79b0 * (uVar11 & 0xffffffff) + uVar7 +
             ((ulonglong)uVar20 * (ulonglong)_DAT_1819d79b0 +
              (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d79a0 << 0x20) +
            (ulonglong)_DAT_1819d79f0 * (ulonglong)uVar13 +
            ((ulonglong)_DAT_1819d7a00 * (ulonglong)uVar13 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_1819d79f0 << 0x20)) -
           ((ulonglong)uVar27 * (_DAT_1819d7a70 & 0xffffffff) +
            ((ulonglong)_DAT_1819d7aa0 * (ulonglong)uVar27 +
             (SUB168(auVar24 ^ auVar50,0) >> 0x20) * (_DAT_1819d7a70 & 0xffffffff) << 0x20) +
           (ulonglong)uVar13 * (ulonglong)_DAT_1819d7a90 +
           ((uVar9 >> 0x20) * (ulonglong)_DAT_1819d7a90 +
            (ulonglong)_DAT_1819d7a80 * (ulonglong)uVar13 << 0x20) +
           (ulonglong)uVar32 * (ulonglong)_DAT_1819d7a90 +
           ((uVar5 >> 0x20) * (ulonglong)_DAT_1819d7a90 +
            (ulonglong)uVar32 * (ulonglong)_DAT_1819d7a80 << 0x20) +
           (uVar7 & 0xffffffff) * (ulonglong)_DAT_1819d7a50 +
           ((ulonglong)_DAT_1819d7a60 * (uVar7 & 0xffffffff) +
            (ulonglong)uVar21 * (ulonglong)_DAT_1819d7a50 << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d7a30 +
           ((ulonglong)_DAT_1819d7a40 * (uVar11 & 0xffffffff) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1819d7a30 << 0x20))) + _DAT_1819d7ab0;
  _DAT_183279170 = _DAT_183279398 ^ uVar6 ^ uVar11;
  _DAT_183279108 = (_DAT_183279108 ^ uVar6) + uVar11 ^ 0x32c1647e4397d7bb;
  _DAT_183279488 = (_DAT_183279488 * 0x5f9e17b0a1f9b0cb ^ _DAT_183279108) + uVar6;
  _DAT_183279348 = _DAT_183279488 ^ _DAT_183279108;
  uVar5 = auVar17._8_8_ + auVar17._0_8_;
  uVar6 = uVar5 + _DAT_183279428;
  if (auVar17._4_4_ < 0) {
    uVar6 = _DAT_1832792b0 ^ uVar5;
  }
  _DAT_1832792c8 = uVar11;
  _DAT_1832794f8 = func_0x00018ae39210(SUB161(auVar16 ^ _DAT_1819d7ac0,5) ^ uVar6);
  uVar6 = ~(uVar10 * (longlong)piVar2 ^ _DAT_1832794f8) & (ulonglong)_uStack00000000000000a0;
  _DAT_183279220 = _DAT_183279220 ^ uVar6 ^ 0x5ab6b6b436b51fbf;
  _DAT_1832793c8 = (_DAT_1832793c8 * -0x7e2c15b681b4493 ^ _DAT_183279220) + uVar6;
  _DAT_183279230 = _DAT_1832793c8 ^ _DAT_183279220;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar11 ^ 0x84222325;
  _DAT_1832794d8 = 0;
  auVar15 = pshufb(auVar18 ^ _DAT_1819d7ad0,auVar15);
  uVar5 = auVar15._8_8_ + auVar15._0_8_;
  uVar6 = uVar5 + _DAT_183279480;
  if (auVar15._4_4_ < 0) {
    uVar6 = _DAT_183279250 ^ uVar5;
  }
  _DAT_183279220 = func_0x00018ae39210(SUB161(auVar18 ^ _DAT_1819d7ad0,5) ^ uVar6);
  uVar13 = (uint)(uVar11 >> 0x20);
  auVar19._8_4_ = (int)uVar11;
  auVar19._0_8_ = uVar11;
  auVar19._12_4_ = uVar13;
  uVar6 = auVar19._8_8_ >> 0x20;
  auVar42._0_8_ =
       ((_DAT_1819d7b20 & 0xffffffff) * (uVar11 & 0xffffffff) +
        ((_DAT_1819d7b30 & 0xffffffff) * (uVar11 & 0xffffffff) +
         (ulonglong)uVar13 * (_DAT_1819d7b20 & 0xffffffff) << 0x20) +
       (_DAT_1819d7b00 & 0xffffffff) * (uVar11 & 0xffffffff) +
       ((_DAT_1819d7b10 & 0xffffffff) * (uVar11 & 0xffffffff) +
        (ulonglong)uVar13 * (_DAT_1819d7b00 & 0xffffffff) << 0x20) +
       (_DAT_1819d7ae0 & 0xffffffff) * (uVar11 & 0xffffffff) +
       ((_DAT_1819d7af0 & 0xffffffff) * (uVar11 & 0xffffffff) +
        (ulonglong)uVar13 * (_DAT_1819d7ae0 & 0xffffffff) << 0x20)) -
       ((uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d7b80 +
        ((_DAT_1819d7b90 & 0xffffffff) * (uVar11 & 0xffffffff) +
         (ulonglong)uVar13 * (ulonglong)_DAT_1819d7b80 << 0x20) +
       (_DAT_1819d7b60 & 0xffffffff) * (uVar11 & 0xffffffff) +
       ((_DAT_1819d7b70 & 0xffffffff) * (uVar11 & 0xffffffff) +
        (ulonglong)uVar13 * (_DAT_1819d7b60 & 0xffffffff) << 0x20) +
       (_DAT_1819d7b40 & 0xffffffff) * (uVar11 & 0xffffffff) +
       ((_DAT_1819d7b50 & 0xffffffff) * (uVar11 & 0xffffffff) +
        (ulonglong)uVar13 * (_DAT_1819d7b40 & 0xffffffff) << 0x20));
  auVar42._8_8_ =
       ((_UNK_1819d7b28 & 0xffffffff) * (uVar11 & 0xffffffff) +
        ((_UNK_1819d7b38 & 0xffffffff) * (uVar11 & 0xffffffff) +
         uVar6 * (_UNK_1819d7b28 & 0xffffffff) << 0x20) +
       (_UNK_1819d7b08 & 0xffffffff) * (uVar11 & 0xffffffff) +
       ((_UNK_1819d7b18 & 0xffffffff) * (uVar11 & 0xffffffff) +
        uVar6 * (_UNK_1819d7b08 & 0xffffffff) << 0x20) +
       (_UNK_1819d7ae8 & 0xffffffff) * (uVar11 & 0xffffffff) +
       ((_UNK_1819d7af8 & 0xffffffff) * (uVar11 & 0xffffffff) +
        uVar6 * (_UNK_1819d7ae8 & 0xffffffff) << 0x20)) -
       ((auVar19._8_8_ & 0xffffffff) * (ulonglong)_UNK_1819d7b88 +
        ((_UNK_1819d7b98 & 0xffffffff) * (uVar11 & 0xffffffff) + uVar6 * _UNK_1819d7b88 << 0x20) +
       (_UNK_1819d7b68 & 0xffffffff) * (uVar11 & 0xffffffff) +
       ((_UNK_1819d7b78 & 0xffffffff) * (uVar11 & 0xffffffff) +
        uVar6 * (_UNK_1819d7b68 & 0xffffffff) << 0x20) +
       (_UNK_1819d7b48 & 0xffffffff) * (uVar11 & 0xffffffff) +
       ((_UNK_1819d7b58 & 0xffffffff) * (uVar11 & 0xffffffff) +
        uVar6 * (_UNK_1819d7b48 & 0xffffffff) << 0x20));
  _DAT_183279430 =
       (_DAT_183279250 ^ _DAT_183279220 ^ auVar42._0_8_ ^ _DAT_183279220) + auVar42._0_8_ ^
       0x67109f5e54f15cd8;
  _DAT_1832792d0 = (_DAT_1832792d0 * -0x3b9f468fe577d83b ^ _DAT_183279430) + _DAT_183279220;
  _DAT_183279228 = _DAT_1832792d0 ^ _DAT_183279430;
  uVar6 = auVar42._0_8_ ^ 0x84222325 ^ _DAT_183279430;
  lVar14 = (auVar42._0_8_ ^ 0x84222325) + _DAT_183279128;
  uVar5 = uVar6 + lVar14;
  uVar6 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ uVar6;
  uVar5 = ((_DAT_183279128 + _DAT_183279430) * 0x2000 | _DAT_183279128 + _DAT_183279430 >> 0x33) ^
          _DAT_183279128;
  _DAT_183279440 = auVar42._0_8_;
  _DAT_183279428 =
       func_0x00018ae39210((uVar5 << 0x1d | uVar5 >> 0x23) - _DAT_183279430 ^
                           (uVar6 << 0x1d | uVar6 >> 0x23) - lVar14);
  uVar6 = _DAT_183279428 ^ auVar42._0_8_;
  auVar25._8_4_ = 0xffffffff;
  auVar25._0_8_ = 0xffffffffffffffff;
  auVar25._12_4_ = 0xffffffff;
  uVar13 = SUB164(auVar25 ^ auVar42,0);
  lVar14 = ((ulonglong)_DAT_1819d7be0 * (auVar42._0_8_ & 0xffffffff) +
            ((ulonglong)_DAT_1819d7bf0 * (auVar42._0_8_ & 0xffffffff) +
             (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7be0 << 0x20) +
           (ulonglong)_DAT_1819d7bc0 * (auVar42._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_1819d7bd0 * (auVar42._0_8_ & 0xffffffff) +
            (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7bc0 << 0x20) +
           (ulonglong)_DAT_1819d7ba0 * (auVar42._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_1819d7bb0 * (auVar42._0_8_ & 0xffffffff) +
            (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7ba0 << 0x20)) -
           ((ulonglong)uVar13 * (_DAT_1819d7c20 & 0xffffffff) +
            ((ulonglong)_DAT_1819d7c70 * (ulonglong)uVar13 +
             (SUB168(auVar25 ^ auVar42,0) >> 0x20) * (_DAT_1819d7c20 & 0xffffffff) << 0x20) +
           (auVar42._0_8_ & 0xffffffff) * (ulonglong)_DAT_1819d7c50 +
           ((ulonglong)_DAT_1819d7c60 * (auVar42._0_8_ & 0xffffffff) +
            (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7c50 << 0x20) +
           (ulonglong)_DAT_1819d7c30 * (auVar42._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_1819d7c40 * (auVar42._0_8_ & 0xffffffff) +
            (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7c30 << 0x20) +
           (ulonglong)_DAT_1819d7c00 * (auVar42._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_1819d7c10 * (auVar42._0_8_ & 0xffffffff) +
            (auVar42._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7c00 << 0x20));
  _DAT_183279230 = lVar14 + 0x1b8aa9565e3fd672;
  _DAT_1832794a8 = _DAT_183279300 ^ uVar6 ^ _DAT_183279230;
  _DAT_183279150 = (_DAT_183279150 ^ uVar6) + _DAT_183279230 ^ 0x7659fe48bde42d3;
  _DAT_183279318 = (_DAT_183279318 * -0x265c6bf68754c1cd ^ _DAT_183279150) + uVar6;
  _DAT_183279310 = _DAT_183279318 ^ _DAT_183279150;
  param_6 = in_stack_000000b8 ^ _DAT_183279230;
  param_5 = FUN_190dd72e0(lVar14,*_DAT_18301ee50 + 0xb1,5);
  cVar3 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar3 == '\0') {
  case false:
    uVar4 = (**(code **)(*unaff_RSI + 0x78))();
    param_5 = FUN_190dd72e0(extraout_XMM0_Qa_18,*_DAT_18301ee50 + 0x98,4);
    cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_19,uVar4,param_5);
    switch(cVar3 == '\0') {
    case false:
      param_6 = uVar4;
      break;
    case true:
      goto code_r0x00018ae38d2f;
    }
    break;
  case true:
    in_stack_00000058 = FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0xb1,5);
    cVar3 = (**(code **)(*unaff_RSI + 0x720))();
    switch(cVar3 == '\0') {
    case false:
      uVar4 = (**(code **)(*unaff_RSI + 0x78))();
      param_5 = FUN_190dd72e0(extraout_XMM0_Qa_20,*_DAT_18301ee50 + 0x98,4);
      cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_21,uVar4,param_5);
      switch(cVar3 == '\0') {
      case false:
        param_6 = uVar4;
        break;
      case true:
        goto code_r0x00018ae38d2f;
      }
      break;
    case true:
      uVar4 = FUN_190ddce00(extraout_XMM0_Qa_00,&stack0x00000058,*_DAT_18301ee50 + 0x10d0,
                            *_DAT_18301ee50 + 0x10d6,0x16);
      cVar3 = (**(code **)(*unaff_RSI + 0x720))();
      switch(cVar3 == '\0') {
      case false:
        uVar4 = (**(code **)(*unaff_RSI + 0x78))();
        param_5 = FUN_190dd72e0(extraout_XMM0_Qa_22,*_DAT_18301ee50 + 0x98,4);
        cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_23,uVar4,param_5);
        switch(cVar3 == '\0') {
        case false:
          param_6 = uVar4;
          break;
        case true:
          goto code_r0x00018ae38d2f;
        }
        break;
      case true:
        cVar3 = (**(code **)(*unaff_RSI + 0x720))();
        switch(cVar3 == '\0') {
        case false:
          uVar4 = (**(code **)(*unaff_RSI + 0x78))();
          param_5 = FUN_190dd72e0(extraout_XMM0_Qa_24,*_DAT_18301ee50 + 0x98,4);
          cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_25,uVar4,param_5);
          switch(cVar3 == '\0') {
          case false:
            param_6 = uVar4;
            break;
          case true:
            goto code_r0x00018ae38d2f;
          }
          break;
        case true:
          param_6 = (**(code **)(*unaff_RSI + 0x488))(extraout_XMM0_Qa_01,param_5,uVar4);
          cVar3 = (**(code **)(*unaff_RSI + 0x720))();
          switch(cVar3 == '\0') {
          case false:
            uVar4 = (**(code **)(*unaff_RSI + 0x78))();
            param_5 = FUN_190dd72e0(extraout_XMM0_Qa_26,*_DAT_18301ee50 + 0x98,4);
            cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_27,uVar4,param_5);
            switch(cVar3 == '\0') {
            case false:
              param_6 = uVar4;
              break;
            case true:
              goto code_r0x00018ae38d2f;
            }
            break;
          case true:
            uVar4 = extraout_XMM0_Qa_02;
            switch(param_6 == 0) {
            case false:
code_r0x00018ae38123:
              in_stack_00000058 = FUN_190dd72e0(uVar4,*_DAT_18301ee50 + 0x10f0,0x3f);
              cVar3 = (**(code **)(*unaff_RSI + 0x720))();
              switch(cVar3 == '\0') {
              case false:
                uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                param_5 = FUN_190dd72e0(extraout_XMM0_Qa_28,*_DAT_18301ee50 + 0x98,4);
                cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_29,uVar4,param_5);
                switch(cVar3 == '\0') {
                case false:
                  param_6 = uVar4;
                  break;
                case true:
                  goto code_r0x00018ae38d2f;
                }
                break;
              case true:
                uVar4 = FUN_190dd9df0(extraout_XMM0_Qa_05,&stack0x00000058,*_DAT_18301ee50 + 0x9066,
                                      *_DAT_18301ee50 + 0x9071,0x65a);
                cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                switch(cVar3 == '\0') {
                case false:
                  uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                  param_5 = FUN_190dd72e0(extraout_XMM0_Qa_32,*_DAT_18301ee50 + 0x98,4);
                  cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_33,uVar4,param_5);
                  switch(cVar3 == '\0') {
                  case false:
                    param_6 = uVar4;
                    break;
                  case true:
                    goto code_r0x00018ae38d2f;
                  }
                  break;
                case true:
                  param_6 = (**(code **)(*unaff_RSI + 0x2f8))(extraout_XMM0_Qa_06,param_6,uVar4);
                  cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                  switch(cVar3 == '\0') {
                  case false:
                    uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                    param_5 = FUN_190dd72e0(extraout_XMM0_Qa_36,*_DAT_18301ee50 + 0x98,4);
                    cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_37,uVar4,param_5);
                    switch(cVar3 == '\0') {
                    case false:
                      param_6 = uVar4;
                      break;
                    case true:
                      goto code_r0x00018ae38d2f;
                    }
                    break;
                  case true:
                    uVar4 = extraout_XMM0_Qa_07;
                    switch(param_6 == 0) {
                    case false:
code_r0x00018ae38299:
                      in_stack_00000058 = FUN_190dd72e0(uVar4,*_DAT_18301ee50 + 0x908b,0x198);
                      cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                      switch(cVar3 == '\0') {
                      case false:
                        uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                        param_5 = FUN_190dd72e0(extraout_XMM0_Qa_38,*_DAT_18301ee50 + 0x98,4);
                        cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_39,uVar4,param_5)
                        ;
                        switch(cVar3 == '\0') {
                        case false:
                          param_6 = uVar4;
                          break;
                        case true:
                          goto code_r0x00018ae38d2f;
                        }
                        break;
                      case true:
                        uVar4 = FUN_190dd9df0(extraout_XMM0_Qa_10,&stack0x00000058,
                                              *_DAT_18301ee50 + 0xbc23,*_DAT_18301ee50 + 40000,0x771
                                             );
                        cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                        switch(cVar3 == '\0') {
                        case false:
                          uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                          param_5 = FUN_190dd72e0(extraout_XMM0_Qa_42,*_DAT_18301ee50 + 0x98,4);
                          cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                            (extraout_XMM0_Qa_43,uVar4,param_5);
                          switch(cVar3 == '\0') {
                          case false:
                            param_6 = uVar4;
                            break;
                          case true:
                            goto code_r0x00018ae38d2f;
                          }
                          break;
                        case true:
                          param_6 = (**(code **)(*unaff_RSI + 0x2f8))
                                              (extraout_XMM0_Qa_11,param_6,uVar4);
                          cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                          switch(cVar3 == '\0') {
                          case false:
                            uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                            param_5 = FUN_190dd72e0(extraout_XMM0_Qa_46,*_DAT_18301ee50 + 0x98,4);
                            cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                              (extraout_XMM0_Qa_47,uVar4,param_5);
                            switch(cVar3 == '\0') {
                            case false:
                              param_6 = uVar4;
                              break;
                            case true:
                              goto code_r0x00018ae38d2f;
                            }
                            break;
                          case true:
                            param_7 = 0;
                            in_stack_00000058 =
                                 FUN_190dd72e0(extraout_XMM0_Qa_12,*_DAT_18301ee50 + 0x9c5a,0x1bd);
                            cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                            switch(cVar3 == '\0') {
                            case false:
                              uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                              param_5 = FUN_190dd72e0(extraout_XMM0_Qa_48,*_DAT_18301ee50 + 0x98,4);
                              cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                                (extraout_XMM0_Qa_49,uVar4,param_5);
                              switch(cVar3 == '\0') {
                              case false:
                                param_6 = uVar4;
                                break;
                              case true:
                                goto code_r0x00018ae38d2f;
                              }
                              break;
                            case true:
                              uVar4 = FUN_190ddfc90(extraout_XMM0_Qa_13,&stack0x00000058,
                                                    *_DAT_18301ee50 + 0x9c72,
                                                    *_DAT_18301ee50 + 0x1984,0x8f7);
                              cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                              switch(cVar3 == '\0') {
                              case false:
                                uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                param_5 = FUN_190dd72e0(extraout_XMM0_Qa_50,*_DAT_18301ee50 + 0x98,4
                                                       );
                                cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                                  (extraout_XMM0_Qa_51,uVar4,param_5);
                                switch(cVar3 == '\0') {
                                case false:
                                  param_6 = uVar4;
                                  break;
                                case true:
                                  goto code_r0x00018ae38d2f;
                                }
                                break;
                              case true:
                                switch(param_6 == 0) {
                                case false:
                                  (**(code **)(*unaff_RSI + 0x1f8))
                                            (extraout_XMM0_Qa_14,param_6,uVar4,&param_7);
                                  cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                                  switch(cVar3 == '\0') {
                                  case false:
                                    uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                    param_5 = FUN_190dd72e0(extraout_XMM0_Qa_64,
                                                            *_DAT_18301ee50 + 0x98,4);
                                    cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                                      (extraout_XMM0_Qa_65,uVar4,param_5);
                                    switch(cVar3 == '\0') {
                                    case false:
                                      param_6 = uVar4;
                                      break;
                                    case true:
                                      goto code_r0x00018ae38d2f;
                                    }
                                    break;
                                  case true:
                                    switch(unaff_BL == '\0') {
                                    case true:
                                      goto code_r0x00018ae38d2f;
                                    }
                                    param_6 = in_stack_000000b0;
                                    param_7 = 1;
                                    in_stack_00000058 =
                                         FUN_190dd72e0(extraout_XMM0_Qa_56,*_DAT_18301ee50 + 0xe23f,
                                                       0x27a);
                                    cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                                    switch(cVar3 == '\0') {
                                    case false:
                                      uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                      param_5 = FUN_190dd72e0(extraout_XMM0_Qa_66,
                                                              *_DAT_18301ee50 + 0x98,4);
                                      cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                                        (extraout_XMM0_Qa_67,uVar4,param_5);
                                      switch(cVar3 == '\0') {
                                      case false:
                                        param_6 = uVar4;
                                        break;
                                      case true:
                                        goto code_r0x00018ae38d2f;
                                      }
                                      break;
                                    case true:
                                      uVar4 = FUN_190ddfc90(extraout_XMM0_Qa_57,&stack0x00000058,
                                                            *_DAT_18301ee50 + 0x9506,
                                                            *_DAT_18301ee50 + 0x1984,0xf44);
                                      cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                                      switch(cVar3 == '\0') {
                                      case false:
                                        uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                        param_5 = FUN_190dd72e0(extraout_XMM0_Qa_68,
                                                                *_DAT_18301ee50 + 0x98,4);
                                        cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                                          (extraout_XMM0_Qa_69,uVar4,param_5);
                                        switch(cVar3 == '\0') {
                                        case false:
                                          param_6 = uVar4;
                                          break;
                                        case true:
                                          goto code_r0x00018ae38d2f;
                                        }
                                        break;
                                      case true:
                                        switch(param_6 == 0) {
                                        case false:
                                          (**(code **)(*unaff_RSI + 0x1f8))
                                                    (extraout_XMM0_Qa_58,param_6,uVar4,&param_7);
                                          cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                                          switch(cVar3 == '\0') {
                                          case false:
                                            uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                            param_5 = FUN_190dd72e0(extraout_XMM0_Qa_70,
                                                                    *_DAT_18301ee50 + 0x98,4);
                                            cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                                              (extraout_XMM0_Qa_71,uVar4,param_5);
                                            switch(cVar3 == '\0') {
                                            case false:
                                              param_6 = uVar4;
                                              break;
                                            case true:
                                              goto code_r0x00018ae38d2f;
                                            }
                                            break;
                                          case true:
                                            goto code_r0x00018ae38d2f;
                                          }
                                          break;
                                        case true:
                                          uVar4 = FUN_190dd72e0(extraout_XMM0_Qa_58,*_DAT_18301ee50,
                                                                0);
                                          cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                                          switch(cVar3 == '\0') {
                                          case false:
                                            uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                            param_5 = FUN_190dd72e0(extraout_XMM0_Qa_72,
                                                                    *_DAT_18301ee50 + 0x98,4);
                                            cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                                              (extraout_XMM0_Qa_73,uVar4,param_5);
                                            switch(cVar3 == '\0') {
                                            case false:
                                              param_6 = uVar4;
                                              break;
                                            case true:
                                              goto code_r0x00018ae38d2f;
                                            }
                                            break;
                                          case true:
                                            (**(code **)(*unaff_RSI + 0x70))
                                                      (extraout_XMM0_Qa_59,uVar4,&UNK_182f702a8);
                                            uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                            param_5 = FUN_190dd72e0(extraout_XMM0_Qa_60,
                                                                    *_DAT_18301ee50 + 0x98,4);
                                            cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                                              (extraout_XMM0_Qa_61,uVar4,param_5);
                                            switch(cVar3 == '\0') {
                                            case false:
                                              param_6 = uVar4;
                                              break;
                                            case true:
                                              goto code_r0x00018ae38d2f;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  break;
                                case true:
                                  uVar4 = FUN_190dd72e0(extraout_XMM0_Qa_14,*_DAT_18301ee50,0);
                                  cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                                  switch(cVar3 == '\0') {
                                  case false:
                                    uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                    param_5 = FUN_190dd72e0(extraout_XMM0_Qa_62,
                                                            *_DAT_18301ee50 + 0x98,4);
                                    cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                                      (extraout_XMM0_Qa_63,uVar4,param_5);
                                    switch(cVar3 == '\0') {
                                    case false:
                                      param_6 = uVar4;
                                      break;
                                    case true:
                                      goto code_r0x00018ae38d2f;
                                    }
                                    break;
                                  case true:
                                    (**(code **)(*unaff_RSI + 0x70))
                                              (extraout_XMM0_Qa_15,uVar4,&UNK_182f702a8);
                                    uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                    param_5 = FUN_190dd72e0(extraout_XMM0_Qa_16,
                                                            *_DAT_18301ee50 + 0x98,4);
                                    cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                                      (extraout_XMM0_Qa_17,uVar4,param_5);
                                    switch(cVar3 == '\0') {
                                    case false:
                                      param_6 = uVar4;
                                      break;
                                    case true:
                                      goto code_r0x00018ae38d2f;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case true:
                      param_5 = FUN_190dd72e0(extraout_XMM0_Qa_07,*_DAT_18301ee50,0);
                      cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                      switch(cVar3 == '\0') {
                      case false:
                        uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                        param_5 = FUN_190dd72e0(extraout_XMM0_Qa_40,*_DAT_18301ee50 + 0x98,4);
                        cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_41,uVar4,param_5)
                        ;
                        switch(cVar3 == '\0') {
                        case false:
                          param_6 = uVar4;
                          break;
                        case true:
                          goto code_r0x00018ae38d2f;
                        }
                        break;
                      case true:
                        (**(code **)(*unaff_RSI + 0x70))(extraout_XMM0_Qa_08,param_5,&UNK_182f702a8)
                        ;
                        cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                        uVar4 = extraout_XMM0_Qa_09;
                        switch(cVar3 == '\0') {
                        case false:
                          uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                          param_5 = FUN_190dd72e0(extraout_XMM0_Qa_44,*_DAT_18301ee50 + 0x98,4);
                          cVar3 = (**(code **)(*unaff_RSI + 0x100))
                                            (extraout_XMM0_Qa_45,uVar4,param_5);
                          switch(cVar3 == '\0') {
                          case false:
                            param_6 = uVar4;
                            break;
                          case true:
                            goto code_r0x00018ae38d2f;
                          }
                          break;
                        case true:
                          goto code_r0x00018ae38299;
                        }
                      }
                    }
                  }
                }
              }
              break;
            case true:
              param_5 = FUN_190dd72e0(extraout_XMM0_Qa_02,*_DAT_18301ee50,0);
              cVar3 = (**(code **)(*unaff_RSI + 0x720))();
              switch(cVar3 == '\0') {
              case false:
                uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                param_5 = FUN_190dd72e0(extraout_XMM0_Qa_30,*_DAT_18301ee50 + 0x98,4);
                cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_31,uVar4,param_5);
                switch(cVar3 == '\0') {
                case false:
                  param_6 = uVar4;
                  break;
                case true:
                  goto code_r0x00018ae38d2f;
                }
                break;
              case true:
                (**(code **)(*unaff_RSI + 0x70))(extraout_XMM0_Qa_03,param_5,&UNK_182f702a8);
                cVar3 = (**(code **)(*unaff_RSI + 0x720))();
                uVar4 = extraout_XMM0_Qa_04;
                switch(cVar3 == '\0') {
                case false:
                  uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                  param_5 = FUN_190dd72e0(extraout_XMM0_Qa_34,*_DAT_18301ee50 + 0x98,4);
                  cVar3 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_35,uVar4,param_5);
                  switch(cVar3 == '\0') {
                  case false:
                    param_6 = uVar4;
                    break;
                  case true:
                    goto code_r0x00018ae38d2f;
                  }
                  break;
                case true:
                  goto code_r0x00018ae38123;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = (**(code **)(*unaff_RSI + 0x88))();
  param_5 = FUN_190dd72e0(uVar4,*_DAT_18301ee50 + 0x14458,0x32b);
  cVar3 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar3 == '\0') {
  case true:
    uVar4 = FUN_190de3220(extraout_XMM0_Qa_52,&param_5,*_DAT_18301ee50 + 0x14486,
                          *_DAT_18301ee50 + 0xf4,0xf43);
    cVar3 = (**(code **)(*unaff_RSI + 0x720))();
    switch(cVar3 == '\0') {
    case true:
      param_6 = (**(code **)(*unaff_RSI + 0x3a0))(extraout_XMM0_Qa_53,param_5,uVar4,&param_6);
      cVar3 = (**(code **)(*unaff_RSI + 0x720))();
      switch(cVar3 == '\0') {
      case true:
        switch(param_6 == 0) {
        case false:
          (**(code **)(*unaff_RSI + 0x68))();
          break;
        case true:
          param_5 = FUN_190dd72e0(extraout_XMM0_Qa_54,*_DAT_18301ee50,0);
          cVar3 = (**(code **)(*unaff_RSI + 0x720))();
          switch(cVar3 == '\0') {
          case true:
            (**(code **)(*unaff_RSI + 0x70))(extraout_XMM0_Qa_55,param_5,&UNK_182f702a8);
          }
        }
      }
    }
  }
code_r0x00018ae38d2f:
  return;
}



// ===== Lsixtwo/fF; aSY ([B)Ljava/lang/String; (handler @ image 18ae35120, runtime 6ffff2895120) =====

/* WARNING: Switch with 1 destination removed at 0x00018ae37fae */
/* WARNING: Switch with 1 destination removed at 0x00018ae38002 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38066 */
/* WARNING: Switch with 1 destination removed at 0x00018ae380cc */
/* WARNING: Switch with 1 destination removed at 0x00018ae380fc */
/* WARNING: Switch with 1 destination removed at 0x00018ae38145 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38199 */
/* WARNING: Switch with 1 destination removed at 0x00018ae381dc */
/* WARNING: Switch with 1 destination removed at 0x00018ae38242 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38272 */
/* WARNING: Switch with 1 destination removed at 0x00018ae382bb */
/* WARNING: Switch with 1 destination removed at 0x00018ae3830f */
/* WARNING: Switch with 1 destination removed at 0x00018ae38352 */
/* WARNING: Switch with 1 destination removed at 0x00018ae383a3 */
/* WARNING: Switch with 1 destination removed at 0x00018ae383f7 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38460 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38497 */
/* WARNING: Switch with 1 destination removed at 0x00018ae384ef */
/* WARNING: Switch with 1 destination removed at 0x00018ae3851e */
/* WARNING: Switch with 1 destination removed at 0x00018ae38555 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38584 */
/* WARNING: Switch with 1 destination removed at 0x00018ae385bb */
/* WARNING: Switch with 1 destination removed at 0x00018ae385ec */
/* WARNING: Switch with 1 destination removed at 0x00018ae3861e */
/* WARNING: Switch with 1 destination removed at 0x00018ae3864d */
/* WARNING: Switch with 1 destination removed at 0x00018ae38684 */
/* WARNING: Switch with 1 destination removed at 0x00018ae386b3 */
/* WARNING: Switch with 1 destination removed at 0x00018ae386ea */
/* WARNING: Switch with 1 destination removed at 0x00018ae38719 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38750 */
/* WARNING: Switch with 1 destination removed at 0x00018ae3877f */
/* WARNING: Switch with 1 destination removed at 0x00018ae387b6 */
/* WARNING: Switch with 1 destination removed at 0x00018ae387e5 */
/* WARNING: Switch with 1 destination removed at 0x00018ae3881c */
/* WARNING: Switch with 1 destination removed at 0x00018ae3884b */
/* WARNING: Switch with 1 destination removed at 0x00018ae38882 */
/* WARNING: Switch with 1 destination removed at 0x00018ae388b1 */
/* WARNING: Switch with 1 destination removed at 0x00018ae388e8 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38917 */
/* WARNING: Switch with 1 destination removed at 0x00018ae3894e */
/* WARNING: Switch with 1 destination removed at 0x00018ae3897d */
/* WARNING: Switch with 1 destination removed at 0x00018ae389b4 */
/* WARNING: Switch with 1 destination removed at 0x00018ae389e3 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38a1a */
/* WARNING: Switch with 1 destination removed at 0x00018ae38a49 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38a80 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38aaf */
/* WARNING: Switch with 1 destination removed at 0x00018ae38ae6 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38b15 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38b4c */
/* WARNING: Switch with 1 destination removed at 0x00018ae38b7b */
/* WARNING: Switch with 1 destination removed at 0x00018ae38bb2 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38be1 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38c3a */
/* WARNING: Switch with 1 destination removed at 0x00018ae38c82 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38cea */
/* WARNING: Switch with 1 destination removed at 0x00018ae38d1a */
/* WARNING: Switch with 1 destination removed at 0x00018ae38d29 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38dbe */
/* WARNING: Switch with 1 destination removed at 0x00018ae38e25 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38e79 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38ee2 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38f19 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38f71 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38fa2 */
/* WARNING: Switch with 1 destination removed at 0x00018ae38fd4 */
/* WARNING: Switch with 1 destination removed at 0x00018ae39003 */
/* WARNING: Switch with 1 destination removed at 0x00018ae3903a */
/* WARNING: Switch with 1 destination removed at 0x00018ae39069 */
/* WARNING: Switch with 1 destination removed at 0x00018ae390a0 */
/* WARNING: Switch with 1 destination removed at 0x00018ae390cf */
/* WARNING: Switch with 1 destination removed at 0x00018ae39106 */
/* WARNING: Switch with 1 destination removed at 0x00018ae3912a */
/* WARNING: Switch with 1 destination removed at 0x00018ae3916e */
/* WARNING: Switch with 1 destination removed at 0x00018ae391a5 */
/* WARNING: Switch with 1 destination removed at 0x00018ae391d6 */
/* WARNING: Switch with 1 destination removed at 0x00018ae39208 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ae35120(ulonglong param_1)

{
  byte bVar1;
  char cVar2;
  ulonglong in_RAX;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  char unaff_BL;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  longlong *unaff_RSI;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong unaff_R13;
  ulonglong unaff_R14;
  ulonglong uVar10;
  longlong unaff_R15;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined8 extraout_XMM0_Qa_21;
  undefined8 extraout_XMM0_Qa_22;
  undefined8 extraout_XMM0_Qa_23;
  undefined8 extraout_XMM0_Qa_24;
  undefined8 extraout_XMM0_Qa_25;
  undefined8 extraout_XMM0_Qa_26;
  undefined8 extraout_XMM0_Qa_27;
  undefined8 extraout_XMM0_Qa_28;
  undefined8 extraout_XMM0_Qa_29;
  undefined8 extraout_XMM0_Qa_30;
  undefined8 extraout_XMM0_Qa_31;
  undefined8 extraout_XMM0_Qa_32;
  undefined8 extraout_XMM0_Qa_33;
  undefined8 extraout_XMM0_Qa_34;
  undefined8 extraout_XMM0_Qa_35;
  undefined8 extraout_XMM0_Qa_36;
  undefined8 extraout_XMM0_Qa_37;
  undefined8 extraout_XMM0_Qa_38;
  undefined8 extraout_XMM0_Qa_39;
  undefined8 extraout_XMM0_Qa_40;
  undefined8 extraout_XMM0_Qa_41;
  undefined8 extraout_XMM0_Qa_42;
  undefined8 extraout_XMM0_Qa_43;
  undefined8 extraout_XMM0_Qa_44;
  undefined8 extraout_XMM0_Qa_45;
  undefined8 extraout_XMM0_Qa_46;
  undefined8 extraout_XMM0_Qa_47;
  undefined8 extraout_XMM0_Qa_48;
  undefined8 extraout_XMM0_Qa_49;
  undefined8 extraout_XMM0_Qa_50;
  undefined8 extraout_XMM0_Qa_51;
  undefined8 extraout_XMM0_Qa_52;
  undefined8 extraout_XMM0_Qa_53;
  undefined8 extraout_XMM0_Qa_54;
  undefined8 extraout_XMM0_Qa_55;
  undefined8 extraout_XMM0_Qa_56;
  undefined8 extraout_XMM0_Qa_57;
  undefined8 extraout_XMM0_Qa_58;
  undefined8 extraout_XMM0_Qa_59;
  undefined8 extraout_XMM0_Qa_60;
  undefined8 extraout_XMM0_Qa_61;
  undefined8 extraout_XMM0_Qa_62;
  undefined8 extraout_XMM0_Qa_63;
  undefined8 extraout_XMM0_Qa_64;
  undefined8 extraout_XMM0_Qa_65;
  undefined8 extraout_XMM0_Qa_66;
  undefined8 extraout_XMM0_Qa_67;
  undefined8 extraout_XMM0_Qa_68;
  undefined8 extraout_XMM0_Qa_69;
  undefined8 extraout_XMM0_Qa_70;
  undefined8 extraout_XMM0_Qa_71;
  undefined8 extraout_XMM0_Qa_72;
  undefined8 extraout_XMM0_Qa_73;
  undefined1 auVar14 [16];
  uint uVar19;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  uint uVar20;
  uint uVar25;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  ulonglong uVar42;
  uint uVar44;
  ulonglong uVar45;
  undefined1 auVar43 [16];
  undefined1 auVar46 [16];
  ulonglong uVar47;
  undefined1 auVar48 [16];
  ulonglong uVar49;
  undefined1 auVar50 [16];
  undefined8 in_stack_00000028;
  ulonglong in_stack_00000030;
  undefined4 in_stack_00000038;
  undefined8 in_stack_00000058;
  uint uStack0000000000000060;
  uint uStack0000000000000064;
  ulonglong in_stack_00000068;
  ulonglong in_stack_00000070;
  ulonglong in_stack_00000078;
  ulonglong in_stack_00000088;
  undefined1 in_stack_00000090 [16];
  uint uStack00000000000000a0;
  ulonglong in_stack_000000a8;
  longlong in_stack_000000b0;
  ulonglong in_stack_000000b8;
  undefined1 in_stack_000000c0 [16];
  ulonglong in_stack_000000d0;
  ulonglong in_stack_000000d8;
  
  uVar5 = param_1 >> 1 | in_RAX;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 8 ^
          in_RAX;
  uVar5 = uVar6 >> 1 | uVar6;
  uVar5 = uVar5 >> 2 | uVar5;
  uVar5 = uVar5 >> 4 | uVar5;
  uVar5 = uVar5 >> 8 | uVar5;
  uVar5 = uVar5 >> 0x10 | uVar5;
  uVar5 = uVar5 >> 0x20 | uVar5;
  uVar5 = uVar5 - (uVar5 >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  uVar6 = (0x40 - (((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40 ^
          uVar6;
  uVar10 = unaff_R14 ^ unaff_R13;
  _DAT_1832793b0 = (_DAT_1832793b0 ^ uVar6) + uVar10 ^ 0xef89ae047bc773d4;
  _DAT_1832791f0 = (_DAT_1832791f0 * 0x5c4d53bb959d48f ^ _DAT_1832793b0) + uVar6;
  _DAT_183279360 = _DAT_1832791f0 ^ _DAT_1832793b0;
  lVar3 = unaff_R15 * unaff_R15;
  uVar11 = lVar3 * 0x225689db5c579bcc;
  auVar14._8_8_ = uVar11;
  auVar14._0_8_ = _DAT_18001b640;
  auVar14 = pshufb(auVar14 ^ _DAT_1819d7180,_DAT_1800170c0);
  uVar6 = auVar14._8_8_ + auVar14._0_8_;
  uVar5 = uVar6 + _DAT_183279350;
  if (auVar14._4_4_ < 0) {
    uVar5 = _DAT_1832792e0 ^ uVar6;
  }
  _DAT_183279328 = uVar10;
  _DAT_183279118 = func_0x00018ae39210(uVar5 ^ 0x3b);
  _DAT_183279480 = lVar3 * -0x225689db5c579bcc;
  _DAT_183279178 = _DAT_183279178 + lVar3 * -0x225689db5c579bcc ^ 0xc2789c26c4ff4a15;
  _DAT_183279448 = _DAT_183279270 * -0xe36487da01b96f3;
  _DAT_183279270 = _DAT_183279448 ^ _DAT_183279178;
  uVar5 = (unaff_RBP ^ _DAT_1832793d8) + unaff_RBP + _DAT_183279408;
  uVar6 = (uVar11 ^ _DAT_183279408) + _DAT_1832793d8 + uVar11;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ unaff_RBP ^ _DAT_1832793d8;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar11 ^ _DAT_183279408;
  auVar48._8_4_ = 0xffffffff;
  auVar48._0_8_ = 0xffffffffffffffff;
  auVar48._12_4_ = 0xffffffff;
  _DAT_183279278 =
       func_0x00018ae39210((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832793d8 + uVar11) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (unaff_RBP + _DAT_183279408));
  uVar19 = (uint)(uVar11 >> 0x20);
  auVar46._8_4_ = (int)uVar11;
  auVar46._0_8_ = uVar11;
  auVar46._12_4_ = uVar19;
  in_stack_00000070 = (ulonglong)uVar19;
  in_stack_00000078 = auVar46._8_8_ >> 0x20;
  uVar26 = SUB164(auVar46 & _DAT_1819d7190,0);
  uVar7 = SUB168(auVar46 & _DAT_1819d7190,0);
  uVar20 = SUB164(auVar46 | _DAT_1819d7190,0);
  uVar6 = SUB168(auVar46 | _DAT_1819d7190,0);
  uVar25 = SUB164(_DAT_1819d7190 ^ auVar46,0);
  uVar13 = SUB164(auVar46 ^ auVar48,0);
  uVar9 = SUB168(auVar46 ^ auVar48,0);
  uVar5 = _DAT_183279278 << 0x1c | _DAT_183279278 >> 0x24;
  uVar11 = (ulonglong)_DAT_1819d7220 * (ulonglong)uVar13 +
           ((ulonglong)_DAT_1819d7230 * (ulonglong)uVar13 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_1819d7220 << 0x20) +
           (ulonglong)uVar25 * (ulonglong)_DAT_1819d7200 +
           ((ulonglong)_DAT_1819d7210 * (ulonglong)uVar25 +
            (SUB168(_DAT_1819d7190 ^ auVar46,0) >> 0x20) * (ulonglong)_DAT_1819d7200 << 0x20) +
           (ulonglong)_DAT_1819d71e0 * (ulonglong)uVar20 +
           ((ulonglong)_DAT_1819d71f0 * (ulonglong)uVar20 +
            (uVar6 >> 0x20) * (ulonglong)_DAT_1819d71e0 << 0x20) +
           (ulonglong)_DAT_1819d71c0 * (ulonglong)uVar26 +
           ((ulonglong)_DAT_1819d71d0 * (ulonglong)uVar26 +
            (uVar7 >> 0x20) * (ulonglong)_DAT_1819d71c0 << 0x20) +
           (ulonglong)_DAT_1819d71a0 * (uVar11 & 0xffffffff) +
           ((ulonglong)_DAT_1819d71b0 * (uVar11 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_1819d71a0 << 0x20) +
           (-((ulonglong)uVar20 * (_DAT_1819d7290 & 0xffffffff) +
              ((uVar6 >> 0x20) * (_DAT_1819d7290 & 0xffffffff) +
               (ulonglong)_DAT_1819d7280 * (ulonglong)uVar20 << 0x20) +
              (ulonglong)uVar26 * (_DAT_1819d7290 & 0xffffffff) +
              ((uVar7 >> 0x20) * (_DAT_1819d7290 & 0xffffffff) +
               (ulonglong)uVar26 * (ulonglong)_DAT_1819d7280 << 0x20) +
              (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d7260 +
             ((ulonglong)_DAT_1819d7270 * (uVar11 & 0xffffffff) +
              (ulonglong)uVar19 * (ulonglong)_DAT_1819d7260 << 0x20)) -
           ((ulonglong)uVar13 * (_DAT_1819d72a0 & 0xffffffff) +
           ((ulonglong)_DAT_1819d72b0 * (ulonglong)uVar13 +
            (uVar9 >> 0x20) * (_DAT_1819d72a0 & 0xffffffff) << 0x20))) + 0x36993da8bd20c530;
  _DAT_183279348 = _DAT_183279368 ^ uVar5 ^ uVar11;
  _DAT_183279450 = (_DAT_183279450 ^ uVar5) + uVar11 ^ 0x263c9f5b5d34b17f;
  _DAT_1832791a0 = (_DAT_183279398 * -0xb5a61d2c4d239a9 ^ _DAT_183279450) + uVar5 ^ _DAT_183279450;
  uVar9 = uVar11 + lVar3 * -0x225689db5c579bcc;
  uVar7 = unaff_R13 * unaff_R13 * 0x5428b508d296d7c7;
  uVar12 = unaff_R13 * unaff_R13 * -0x5428b508d296d7c7;
  uVar6 = uVar9 ^ 0x84222325;
  uVar5 = ((_DAT_183279150 ^ uVar6) + (uVar6 & _DAT_183279150) * 2) * (uVar7 - _DAT_183279310);
  uVar5 = (uVar5 | _DAT_1832794a8) + (uVar5 & _DAT_1832794a8);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_183279398 = uVar11;
  _DAT_1832792b0 = func_0x00018ae39210((uVar6 ^ uVar7 | uVar5) + (uVar5 & (uVar6 ^ uVar7)));
  uVar19 = (uint)(uVar9 >> 0x20);
  auVar16._8_4_ = (int)uVar9;
  auVar16._0_8_ = uVar9;
  auVar16._12_4_ = uVar19;
  uVar25 = (uint)(uVar7 >> 0x20);
  auVar38._8_4_ = (int)uVar7;
  auVar38._0_8_ = uVar7;
  auVar38._12_4_ = uVar25;
  uVar31 = SUB164(auVar16 & auVar38,0);
  uVar11 = SUB168(auVar16 & auVar38,0);
  uVar26 = SUB164(auVar16 | auVar38,0);
  uVar6 = SUB168(auVar16 | auVar38,0);
  uVar20 = SUB164(auVar16 ^ auVar38,0);
  uVar5 = SUB168(auVar16 ^ auVar38,0);
  uVar13 = SUB164(auVar16 ^ _DAT_18001a710,0);
  uVar11 = (((ulonglong)_DAT_1819d7320 * (ulonglong)uVar20 +
             ((ulonglong)_DAT_1819d7330 * (ulonglong)uVar20 +
              (uVar5 >> 0x20) * (ulonglong)_DAT_1819d7320 << 0x20) +
             (ulonglong)_DAT_1819d7300 * (ulonglong)uVar26 +
             ((ulonglong)_DAT_1819d7310 * (ulonglong)uVar26 +
              (uVar6 >> 0x20) * (ulonglong)_DAT_1819d7300 << 0x20) +
            (ulonglong)_DAT_1819d72e0 * (ulonglong)uVar31 +
            ((ulonglong)_DAT_1819d72f0 * (ulonglong)uVar31 +
             (uVar11 >> 0x20) * (ulonglong)_DAT_1819d72e0 << 0x20) +
            (uVar7 & 0xffffffff) * (ulonglong)_DAT_1819d72d0 +
            ((ulonglong)uVar25 * (ulonglong)_DAT_1819d72d0 +
             (ulonglong)_DAT_1819d72c0 * (uVar7 & 0xffffffff) << 0x20) +
            (uVar9 & 0xffffffff) * (ulonglong)_DAT_1819d72d0 +
            ((ulonglong)uVar19 * (ulonglong)_DAT_1819d72d0 +
             (uVar9 & 0xffffffff) * (ulonglong)_DAT_1819d72c0 << 0x20)) -
           ((ulonglong)uVar13 * (_DAT_1819d7370 & 0xffffffff) +
            ((SUB168(auVar16 ^ _DAT_18001a710,0) >> 0x20) * (_DAT_1819d7370 & 0xffffffff) +
             (ulonglong)_DAT_1819d7360 * (ulonglong)uVar13 << 0x20) +
            (ulonglong)uVar20 * (ulonglong)_DAT_1819d7390 +
            ((uVar5 >> 0x20) * (ulonglong)_DAT_1819d7390 +
             (ulonglong)_DAT_1819d7380 * (ulonglong)uVar20 << 0x20) +
            (ulonglong)uVar31 * (ulonglong)_DAT_1819d7390 +
            ((uVar11 >> 0x20) * (ulonglong)_DAT_1819d7390 +
             (ulonglong)uVar31 * (ulonglong)_DAT_1819d7380 << 0x20) +
            (uVar9 & 0xffffffff) * (_DAT_1819d7370 & 0xffffffff) +
            ((ulonglong)uVar19 * (_DAT_1819d7370 & 0xffffffff) +
             (uVar9 & 0xffffffff) * (ulonglong)_DAT_1819d7360 << 0x20) +
           (ulonglong)uVar26 * (ulonglong)_DAT_1819d73a0 +
           ((ulonglong)_DAT_1819d73b0 * (ulonglong)uVar26 +
            (uVar6 >> 0x20) * (ulonglong)_DAT_1819d73a0 << 0x20))) - _DAT_1819d7370;
  auVar29._8_8_ = uVar12;
  auVar29._0_8_ = uVar11 ^ 0x84222325;
  auVar14 = pshufb(auVar29 ^ _DAT_1819d73c0,_DAT_1800170c0);
  uVar5 = _DAT_1832792b0 << 0x37 | _DAT_1832792b0 >> 9 & 0xffffffffffffffe0;
  _DAT_183279240 = _DAT_1832794e0 ^ uVar5 ^ uVar11;
  _DAT_183279370 = (_DAT_183279370 ^ uVar5) + uVar11 ^ 0x64ac2270565e31d;
  _DAT_183279110 = (_DAT_183279110 * -0xab19eed27f5493d ^ _DAT_183279370) + uVar5;
  _DAT_183279208 = _DAT_183279110 ^ _DAT_183279370;
  uVar6 = auVar14._8_8_ + auVar14._0_8_;
  uVar5 = uVar6 + _DAT_1832791a0;
  if (auVar14._4_4_ < 0) {
    uVar5 = _DAT_1832792e0 ^ uVar6;
  }
  _DAT_183279210 = uVar11;
  _DAT_183279480 = func_0x00018ae39210(SUB161(auVar29 ^ _DAT_1819d73c0,5) ^ uVar5);
  uVar19 = (uint)(uVar11 >> 0x20);
  auVar21._8_4_ = (int)uVar11;
  auVar21._0_8_ = uVar11;
  auVar21._12_4_ = uVar19;
  uVar20 = (uint)(uVar12 >> 0x20);
  auVar27._8_4_ = (int)uVar12;
  auVar27._0_8_ = uVar12;
  auVar27._12_4_ = uVar20;
  in_stack_00000070 = (ulonglong)uVar19;
  in_stack_00000078 = auVar21._8_8_ >> 0x20;
  in_stack_00000090 = auVar21 | auVar27;
  uVar5 = (uVar11 & 0xffffffff) * (uVar12 & 0xffffffff) +
          ((ulonglong)uVar19 * (uVar12 & 0xffffffff) + (uVar11 & 0xffffffff) * (ulonglong)uVar20 <<
          0x20);
  uVar26 = SUB164(auVar21 & auVar27,0);
  uVar9 = SUB168(auVar21 & auVar27,0);
  uVar13 = in_stack_00000090._0_4_;
  in_stack_00000068 = in_stack_00000090._8_8_ >> 0x20;
  auVar14 = auVar21 ^ auVar27;
  uVar25 = auVar14._0_4_;
  in_stack_000000a8 = auVar14._8_8_ >> 0x20;
  auVar35._8_4_ = 0xffffffff;
  auVar35._0_8_ = 0xffffffffffffffff;
  auVar35._12_4_ = 0xffffffff;
  uVar31 = SUB164(auVar21 ^ auVar35,0);
  uVar7 = SUB168(auVar21 ^ auVar35,0);
  uVar44 = SUB164(auVar27 ^ auVar35,0);
  uVar6 = SUB168(auVar27 ^ auVar35,0);
  lVar3 = (uVar5 & 0xffffffff) * (ulonglong)_DAT_1819d7470 +
          ((ulonglong)_DAT_1819d7480 * (uVar5 & 0xffffffff) +
           (uVar5 >> 0x20) * (ulonglong)_DAT_1819d7470 << 0x20);
  uStack0000000000000060 = in_stack_00000090._4_4_;
  uStack00000000000000a0 = auVar14._4_4_;
  uVar49 = (((ulonglong)_DAT_1819d7460 * (ulonglong)uVar44 +
             ((uVar6 >> 0x20) * (ulonglong)_DAT_1819d7460 +
              (ulonglong)_DAT_1819d73f0 * (ulonglong)uVar44 << 0x20) +
             (ulonglong)_DAT_1819d7450 * (ulonglong)uVar31 +
             ((uVar7 >> 0x20) * (ulonglong)_DAT_1819d7450 +
              (ulonglong)_DAT_1819d73d0 * (ulonglong)uVar31 << 0x20) +
             (ulonglong)_DAT_1819d7420 * (ulonglong)uVar25 +
             ((auVar14._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7420 +
              (ulonglong)_DAT_1819d7410 * (ulonglong)uVar25 << 0x20) +
             (ulonglong)uVar26 * (ulonglong)_DAT_1819d7420 +
             ((uVar9 >> 0x20) * (ulonglong)_DAT_1819d7420 +
              (ulonglong)uVar26 * (ulonglong)_DAT_1819d7410 << 0x20) +
             (ulonglong)_DAT_1819d7400 * (uVar12 & 0xffffffff) +
             ((ulonglong)uVar20 * (ulonglong)_DAT_1819d7400 +
              (uVar12 & 0xffffffff) * (ulonglong)_DAT_1819d73f0 << 0x20) +
             (ulonglong)_DAT_1819d73e0 * (uVar11 & 0xffffffff) +
             ((ulonglong)uVar19 * (ulonglong)_DAT_1819d73e0 +
              (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d73d0 << 0x20) +
             (ulonglong)_DAT_1819d7430 * (ulonglong)uVar13 +
             ((ulonglong)_DAT_1819d7440 * (ulonglong)uVar13 +
              (in_stack_00000090._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7430 << 0x20) + lVar3) -
           ((ulonglong)uVar44 * (ulonglong)_DAT_1819d74c0 +
            ((uVar6 >> 0x20) * (ulonglong)_DAT_1819d74c0 +
             (ulonglong)_DAT_1819d74b0 * (ulonglong)uVar44 << 0x20) +
            (ulonglong)uVar31 * (ulonglong)_DAT_1819d74a0 +
            ((uVar7 >> 0x20) * (ulonglong)_DAT_1819d74a0 +
             (ulonglong)_DAT_1819d7490 * (ulonglong)uVar31 << 0x20) +
            (ulonglong)uVar25 * (ulonglong)_DAT_1819d74e0 +
            ((ulonglong)uStack00000000000000a0 * (ulonglong)_DAT_1819d74e0 +
             (ulonglong)_DAT_1819d74d0 * (ulonglong)uVar25 << 0x20) +
            (ulonglong)uVar26 * (ulonglong)_DAT_1819d74e0 +
            ((uVar9 >> 0x20) * (ulonglong)_DAT_1819d74e0 +
             (ulonglong)uVar26 * (ulonglong)_DAT_1819d74d0 << 0x20) +
            (uVar12 & 0xffffffff) * (ulonglong)_DAT_1819d74c0 +
            ((ulonglong)uVar20 * (ulonglong)_DAT_1819d74c0 +
             (uVar12 & 0xffffffff) * (ulonglong)_DAT_1819d74b0 << 0x20) +
            (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d74a0 +
            ((ulonglong)uVar19 * (ulonglong)_DAT_1819d74a0 +
             (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d7490 << 0x20) +
            (ulonglong)uVar13 * (ulonglong)_DAT_1819d74f0 +
            ((ulonglong)_DAT_1819d7500 * (ulonglong)uVar13 +
             (ulonglong)uStack0000000000000060 * (ulonglong)_DAT_1819d74f0 << 0x20) + lVar3)) +
           _DAT_1819d7510;
  _DAT_183279288 = _DAT_1832793b8 ^ _DAT_183279480 ^ uVar49;
  _DAT_183279388 = (_DAT_183279388 ^ _DAT_183279480) + uVar49 ^ 0xf40f840c691492d2;
  _DAT_183279468 = (_DAT_183279468 * -0x2e88c6e63e4eee4b ^ _DAT_183279388) + _DAT_183279480;
  _DAT_183279368 = _DAT_183279468 ^ _DAT_183279388;
  lVar3 = _DAT_1819d69c0 * unaff_R13;
  uVar11 = lVar3 * 0x1972130e0719784d;
  uVar5 = (_DAT_1832793a8 ^ 0x84222325) + _DAT_183279160 + 0x84222325;
  uVar6 = (uVar11 ^ _DAT_183279160) + _DAT_1832793a8 + uVar11;
  uVar5 = (uVar5 * 0x2000 | uVar5 >> 0x33) ^ _DAT_1832793a8 ^ 0x84222325;
  uVar6 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar11 ^ _DAT_183279160;
  _DAT_1832792e8 = uVar49;
  _uStack0000000000000060 = in_stack_00000090._0_8_ >> 0x20;
  _uStack00000000000000a0 = auVar14._0_8_ >> 0x20;
  _DAT_1832792e0 =
       func_0x00018ae39210((uVar6 << 0x1d | uVar6 >> 0x23) - (_DAT_1832793a8 + uVar11) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - (_DAT_183279160 + 0x84222325));
  uVar5 = _DAT_1832792e0 << 0x1f | (_DAT_1832792e0 & 0x7fffffffffffffff) >> 0x21;
  _DAT_183279150 = lVar3 * -0x1972130e0719784d;
  _DAT_1832792d8 = (_DAT_1832792d8 ^ uVar5) + lVar3 * -0x1972130e0719784d ^ 0xf47a8aad1ec81596;
  _DAT_183279358 = (_DAT_183279358 * 0x5946e24a7fa86841 ^ _DAT_1832792d8) + uVar5;
  _DAT_1832792a0 = _DAT_183279358 ^ _DAT_1832792d8;
  _DAT_1832793e0 = _DAT_1832792e0 ^ _DAT_183279150;
  uVar6 = uVar49 ^ 0x84222325;
  uVar5 = ((_DAT_183279150 ^ uVar6) + (uVar6 & _DAT_183279150) * 2) * (uVar11 - _DAT_1832794e0);
  uVar5 = (uVar5 | _DAT_183279418) + (uVar5 & _DAT_183279418);
  uVar5 = uVar5 * 0x2000 ^ uVar5;
  uVar5 = uVar5 >> 7 ^ uVar5;
  uVar5 = uVar5 << 0x11 ^ uVar5;
  _DAT_1832792f0 = func_0x00018ae39210((uVar6 ^ uVar11 | uVar5) + (uVar5 & (uVar6 ^ uVar11)));
  uVar5 = in_stack_00000088;
  uVar26 = (uint)(uVar49 >> 0x20);
  auVar32._8_4_ = (int)uVar49;
  auVar32._0_8_ = uVar49;
  auVar32._12_4_ = uVar26;
  uVar19 = (uint)(uVar11 >> 0x20);
  auVar28._8_4_ = (int)uVar11;
  auVar28._0_8_ = uVar11;
  auVar28._12_4_ = uVar19;
  uVar25 = SUB164(auVar32 & auVar28,0);
  uVar9 = SUB168(auVar32 & auVar28,0);
  uVar20 = SUB164(auVar32 | auVar28,0);
  uVar12 = SUB168(auVar32 | auVar28,0);
  uVar13 = SUB164(auVar32 ^ auVar28,0);
  uVar7 = SUB168(auVar32 ^ auVar28,0);
  uVar6 = (_DAT_1832792f0 & 0x1fffffff00) * 0x400;
  _DAT_183279440 =
       ((ulonglong)_DAT_1819d7580 * (ulonglong)uVar13 +
        ((ulonglong)_DAT_1819d7590 * (ulonglong)uVar13 + (uVar7 >> 0x20) * (ulonglong)_DAT_1819d7580
        << 0x20) +
        (ulonglong)_DAT_1819d7560 * (ulonglong)uVar20 +
        ((ulonglong)_DAT_1819d7570 * (ulonglong)uVar20 +
         (uVar12 >> 0x20) * (ulonglong)_DAT_1819d7560 << 0x20) +
       (ulonglong)_DAT_1819d7540 * (ulonglong)uVar25 +
       ((ulonglong)_DAT_1819d7550 * (ulonglong)uVar25 + (uVar9 >> 0x20) * (ulonglong)_DAT_1819d7540
       << 0x20) +
       (ulonglong)_DAT_1819d7530 * (uVar11 & 0xffffffff) +
       ((ulonglong)uVar19 * (ulonglong)_DAT_1819d7530 +
        (ulonglong)_DAT_1819d7520 * (uVar11 & 0xffffffff) << 0x20) +
       (uVar49 & 0xffffffff) * (ulonglong)_DAT_1819d7530 +
       ((ulonglong)uVar26 * (ulonglong)_DAT_1819d7530 +
        (uVar49 & 0xffffffff) * (ulonglong)_DAT_1819d7520 << 0x20)) -
       ((ulonglong)uVar13 * (_DAT_1819d7620 & 0xffffffff) +
        ((ulonglong)_DAT_1819d7630 * (ulonglong)uVar13 +
         (uVar7 >> 0x20) * (_DAT_1819d7620 & 0xffffffff) << 0x20) +
        (ulonglong)uVar20 * (ulonglong)_DAT_1819d7600 +
        ((ulonglong)_DAT_1819d7610 * (ulonglong)uVar20 +
         (uVar12 >> 0x20) * (ulonglong)_DAT_1819d7600 << 0x20) +
       (ulonglong)uVar25 * (ulonglong)_DAT_1819d75e0 +
       ((ulonglong)_DAT_1819d75f0 * (ulonglong)uVar25 + (uVar9 >> 0x20) * (ulonglong)_DAT_1819d75e0
       << 0x20) +
       (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d75d0 +
       ((ulonglong)uVar19 * (ulonglong)_DAT_1819d75d0 +
        (ulonglong)_DAT_1819d75c0 * (uVar11 & 0xffffffff) << 0x20) +
       (uVar49 & 0xffffffff) * (ulonglong)_DAT_1819d75d0 +
       ((ulonglong)uVar26 * (ulonglong)_DAT_1819d75d0 +
        (uVar49 & 0xffffffff) * (ulonglong)_DAT_1819d75c0 << 0x20));
  _DAT_183279200 = _DAT_1832793d0 ^ uVar6 ^ _DAT_183279440;
  _DAT_183279170 = (_DAT_183279170 ^ uVar6) + _DAT_183279440 ^ 0x72865128ef560e67;
  _DAT_1832791d8 = (_DAT_1832791d8 * -0x46d8f6907445973b ^ _DAT_183279170) + uVar6;
  _DAT_1832793a8 = _DAT_1832791d8 ^ _DAT_183279170;
  in_stack_00000070 = in_stack_00000088 ^ 0x84222325;
  in_stack_00000078 = 0;
  in_stack_00000090._8_8_ = uVar10;
  in_stack_00000090._0_8_ = in_stack_00000070;
  auVar14 = pshufb(_DAT_1819d7640 ^ in_stack_00000090,_DAT_1800170c0);
  uVar7 = _DAT_183279440 + lVar3 * -0x1972130e0719784d;
  uVar11 = auVar14._8_8_ + auVar14._0_8_;
  uVar6 = uVar11 + _DAT_183279220;
  if (auVar14._4_4_ < 0) {
    uVar6 = _DAT_183279330 ^ uVar11;
  }
  _DAT_183279158 = func_0x00018ae39210(SUB161(_DAT_1819d7640 ^ in_stack_00000090,5) ^ uVar6);
  auVar16 = in_stack_00000090;
  auVar14 = _DAT_1800170c0;
  _uStack00000000000000a0 = uVar5;
  in_stack_000000a8 = 0;
  uVar13 = (uint)(uVar5 >> 0x20);
  auVar22._8_4_ = (int)uVar5;
  auVar22._0_8_ = uVar5;
  auVar22._12_4_ = uVar13;
  uVar19 = (uint)(uVar10 >> 0x20);
  auVar43._8_4_ = (int)uVar10;
  auVar43._0_8_ = uVar10;
  auVar43._12_4_ = uVar19;
  uVar49 = auVar22._8_8_;
  auVar46 = auVar22 & auVar43;
  in_stack_000000c0 = auVar22 | auVar43;
  uVar12 = auVar43._8_8_;
  uVar6 = (uVar5 & 0xffffffff) * (uVar10 & 0xffffffff) +
          ((uVar5 & 0xffffffff) * (ulonglong)uVar19 + (ulonglong)uVar13 * (uVar10 & 0xffffffff) <<
          0x20);
  uVar26 = auVar46._0_4_;
  uVar45 = auVar46._8_8_;
  uVar9 = in_stack_000000c0._0_8_;
  uVar47 = in_stack_000000c0._8_8_;
  auVar43 = auVar22 ^ auVar43;
  uVar31 = auVar43._0_4_;
  uVar44 = auVar43._8_4_;
  uVar42 = auVar43._8_8_ >> 0x20;
  auVar22 = auVar22 ^ _DAT_18001a710;
  uVar20 = auVar22._0_4_;
  uVar25 = auVar22._8_4_;
  in_stack_000000d0 = auVar22._0_8_ >> 0x20;
  in_stack_000000d8 = auVar22._8_8_ >> 0x20;
  lVar3 = (uVar6 & 0xffffffff) * (ulonglong)_DAT_1819d76c0 +
          ((ulonglong)_DAT_1819d76d0 * (uVar6 & 0xffffffff) +
           (uVar6 >> 0x20) * (ulonglong)_DAT_1819d76c0 << 0x20);
  auVar29 = pshufb(_DAT_1819d77b0 ^ in_stack_00000090,_DAT_1800170c0);
  uVar6 = _DAT_183279158 & 0xffffffffffc00000;
  uVar11 = uVar6 >> 1 | uVar6;
  uVar11 = uVar11 >> 2 | uVar11;
  uVar11 = uVar11 >> 4 | uVar11;
  uVar11 = uVar11 >> 8 | uVar11;
  uVar11 = uVar11 >> 0x10 | uVar11;
  uVar11 = uVar11 >> 0x20 | uVar11;
  uVar11 = uVar11 - (uVar11 >> 1 & 0x5555555555555555);
  uVar11 = (uVar11 & 0x3333333333333333) + (uVar11 >> 2 & 0x3333333333333333);
  uVar9 = (((_DAT_1819d7670 & 0xffffffff) * (ulonglong)uVar20 +
            ((auVar22._0_8_ >> 0x20) * (_DAT_1819d7670 & 0xffffffff) +
             (ulonglong)_DAT_1819d7650 * (ulonglong)uVar20 << 0x20) +
            (_DAT_1819d7690 & 0xffffffff) * (ulonglong)uVar31 +
            ((auVar43._0_8_ >> 0x20) * (_DAT_1819d7690 & 0xffffffff) +
             (_DAT_1819d7680 & 0xffffffff) * (ulonglong)uVar31 << 0x20) +
            (ulonglong)uVar26 * (_DAT_1819d7690 & 0xffffffff) +
            ((auVar46._0_8_ >> 0x20) * (_DAT_1819d7690 & 0xffffffff) +
             (ulonglong)uVar26 * (_DAT_1819d7680 & 0xffffffff) << 0x20) +
            (_DAT_1819d7660 & 0xffffffff) * (uVar5 & 0xffffffff) + uVar10 +
            ((ulonglong)uVar13 * (_DAT_1819d7660 & 0xffffffff) +
             (uVar5 & 0xffffffff) * (ulonglong)_DAT_1819d7650 << 0x20) +
            (_DAT_1819d76a0 & 0xffffffff) * (ulonglong)in_stack_000000c0._0_4_ +
            ((_DAT_1819d76b0 & 0xffffffff) * (ulonglong)in_stack_000000c0._0_4_ +
             (uVar9 >> 0x20) * (_DAT_1819d76a0 & 0xffffffff) << 0x20) + lVar3) -
          ((ulonglong)uVar20 * (ulonglong)_DAT_1819d7720 +
           ((_DAT_1819d7790 & 0xffffffff) * (ulonglong)uVar20 + in_stack_000000d0 * _DAT_1819d7720
           << 0x20) +
           (ulonglong)uVar31 * (ulonglong)_DAT_1819d7770 +
           ((_DAT_1819d7780 & 0xffffffff) * (ulonglong)uVar31 +
            (auVar43._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7770 << 0x20) +
           (uVar9 & 0xffffffff) * (ulonglong)_DAT_1819d7750 +
           ((_DAT_1819d7760 & 0xffffffff) * (uVar9 & 0xffffffff) +
            (uVar9 >> 0x20) * (ulonglong)_DAT_1819d7750 << 0x20) +
           (ulonglong)uVar26 * (ulonglong)_DAT_1819d7730 +
           ((_DAT_1819d7740 & 0xffffffff) * (ulonglong)uVar26 +
            (auVar46._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7730 << 0x20) +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d7700 +
           ((_DAT_1819d7710 & 0xffffffff) * (uVar10 & 0xffffffff) +
            (ulonglong)uVar19 * (ulonglong)_DAT_1819d7700 << 0x20) +
           ((uVar5 & 0xffffffff) * (ulonglong)_DAT_1819d76f0 +
            (ulonglong)uVar13 * (ulonglong)_DAT_1819d76e0 << 0x20) +
           (uVar5 & 0xffffffff) * (ulonglong)_DAT_1819d76e0 + lVar3)) + _DAT_1819d77a0;
  in_stack_00000068 =
       (((_UNK_1819d7678 & 0xffffffff) * (ulonglong)uVar25 +
         (in_stack_000000d8 * (_UNK_1819d7678 & 0xffffffff) +
          (ulonglong)_UNK_1819d7658 * (ulonglong)uVar25 << 0x20) +
         (_UNK_1819d7698 & 0xffffffff) * (ulonglong)uVar44 +
         (uVar42 * (_UNK_1819d7698 & 0xffffffff) + (_UNK_1819d7688 & 0xffffffff) * (ulonglong)uVar44
         << 0x20) +
         (uVar45 & 0xffffffff) * (_UNK_1819d7698 & 0xffffffff) +
         ((uVar45 >> 0x20) * (_UNK_1819d7698 & 0xffffffff) +
          (uVar45 & 0xffffffff) * (_UNK_1819d7688 & 0xffffffff) << 0x20) +
         (_UNK_1819d7668 & 0xffffffff) * (uVar5 & 0xffffffff) + uVar12 +
         ((uVar49 >> 0x20) * (_UNK_1819d7668 & 0xffffffff) +
          (uVar49 & 0xffffffff) * (ulonglong)_UNK_1819d7658 << 0x20) +
        (_UNK_1819d76a8 & 0xffffffff) * (ulonglong)in_stack_000000c0._8_4_ +
        ((_UNK_1819d76b8 & 0xffffffff) * (ulonglong)in_stack_000000c0._8_4_ +
         (uVar47 >> 0x20) * (_UNK_1819d76a8 & 0xffffffff) << 0x20)) -
       ((auVar22._8_8_ & 0xffffffff) * (ulonglong)_UNK_1819d7728 +
        ((_UNK_1819d7798 & 0xffffffff) * (ulonglong)uVar25 + in_stack_000000d8 * _UNK_1819d7728 <<
        0x20) + (auVar43._8_8_ & 0xffffffff) * (ulonglong)_UNK_1819d7778 +
                ((_UNK_1819d7788 & 0xffffffff) * (ulonglong)uVar44 + uVar42 * _UNK_1819d7778 << 0x20
                ) + (uVar47 & 0xffffffff) * (ulonglong)_UNK_1819d7758 +
                    ((_UNK_1819d7768 & 0xffffffff) * (uVar47 & 0xffffffff) +
                     (uVar47 >> 0x20) * (ulonglong)_UNK_1819d7758 << 0x20) +
                (uVar45 & 0xffffffff) * (ulonglong)_UNK_1819d7738 +
                ((_UNK_1819d7748 & 0xffffffff) * (ulonglong)auVar46._8_4_ +
                 (uVar45 >> 0x20) * (ulonglong)_UNK_1819d7738 << 0x20) +
                (uVar12 & 0xffffffff) * (ulonglong)_UNK_1819d7708 +
                ((_UNK_1819d7718 & 0xffffffff) * (uVar10 & 0xffffffff) +
                 (uVar12 >> 0x20) * (ulonglong)_UNK_1819d7708 << 0x20) +
                ((uVar49 & 0xffffffff) * (ulonglong)_UNK_1819d76f8 +
                 (uVar49 >> 0x20) * (ulonglong)_UNK_1819d76e8 << 0x20) +
                (uVar49 & 0xffffffff) * (ulonglong)_UNK_1819d76e8)) + _UNK_1819d77a8;
  uVar6 = (0x40 - (((uVar11 >> 4) + uVar11 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)) * 0x40
          ^ uVar6;
  _DAT_183279370 = _DAT_183279468 ^ uVar6 ^ uVar9;
  _DAT_183279100 = (_DAT_183279100 ^ uVar6) + uVar9 ^ 0x1b9ac89c23cc5e9a;
  _DAT_1832792b8 = (_DAT_1832792b8 * 0x63fd76b4ce0f29f7 ^ _DAT_183279100) + uVar6;
  _DAT_183279430 = _DAT_1832792b8 ^ _DAT_183279100;
  uVar11 = auVar29._8_8_ + auVar29._0_8_;
  uVar6 = uVar11 + _DAT_1832791d0;
  if (auVar29._4_4_ < 0) {
    uVar6 = _DAT_183279440 ^ uVar11;
  }
  _DAT_183279360 = uVar9;
  _uStack0000000000000060 = uVar9;
  _DAT_183279238 = func_0x00018ae39210(SUB161(_DAT_1819d77b0 ^ in_stack_00000090,5) ^ uVar6);
  uVar11 = ((uVar5 | uVar10) ^ _DAT_183279238) * 0x58dcceec86278d1d;
  uVar6 = uVar10 & uVar5;
  uVar10 = uVar5 + uVar10 + uVar6 * -2;
  _DAT_1832793c8 = (_DAT_1832793c8 ^ uVar11) + uVar10 ^ 0x78d2ea13ad8cec36;
  _DAT_183279280 = (_DAT_183279280 * -0x1993160d99c88f67 ^ _DAT_1832793c8) + uVar11;
  _DAT_183279130 = _DAT_183279280 ^ _DAT_1832793c8;
  auVar14 = pshufb(auVar16 ^ _DAT_1819d77c0,auVar14);
  uVar11 = auVar14._8_8_ + auVar14._0_8_;
  uVar5 = uVar11 + _DAT_183279168;
  if (auVar14._4_4_ < 0) {
    uVar5 = _DAT_1832794b0 ^ uVar11;
  }
  _DAT_1832792b0 = uVar10;
  _DAT_1832791f8 = func_0x00018ae39210(SUB161(auVar16 ^ _DAT_1819d77c0,5) ^ uVar5);
  _DAT_1832793d8 = (_DAT_1832793d8 ^ _DAT_183279220) + uVar6 ^ 0x930b9103b0256c30;
  _DAT_183279488 = (_DAT_183279488 * 0x507ff3ddc3618675 ^ _DAT_1832793d8) + _DAT_183279220;
  _DAT_183279110 = _DAT_183279488 ^ _DAT_1832793d8;
  uVar5 = uVar10 ^ 0x84222325 ^ _DAT_1832794f0;
  uVar11 = uVar6 * 2 ^ _DAT_1832794d0;
  lVar8 = (uVar10 ^ 0x84222325) + _DAT_1832794d0;
  lVar3 = _DAT_1832794f0 + uVar6 * 2;
  uVar12 = uVar5 + lVar8;
  uVar49 = uVar11 + lVar3;
  uVar5 = (uVar12 * 0x2000 | uVar12 >> 0x33) ^ uVar5;
  uVar11 = (uVar49 * 0x2000 | uVar49 >> 0x33) ^ uVar11;
  _DAT_183279498 = uVar6;
  _DAT_183279258 =
       func_0x00018ae39210((uVar11 << 0x1d | uVar11 >> 0x23) - lVar3 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar8);
  uVar13 = (uint)(uVar10 >> 0x20);
  auVar39._8_4_ = (int)uVar10;
  auVar39._0_8_ = uVar10;
  auVar39._12_4_ = uVar13;
  auVar36._8_4_ = (int)uVar6;
  auVar36._0_8_ = uVar6;
  auVar36._12_4_ = (int)(uVar6 >> 0x20);
  uVar6 = uVar6 * 2;
  auVar37._8_8_ = auVar36._8_8_ * 2;
  auVar37._0_8_ = uVar6;
  uVar44 = (uint)(uVar6 >> 0x20);
  uVar31 = SUB164(auVar39 & auVar37,0);
  uVar19 = SUB164(auVar39 | auVar37,0);
  uVar26 = SUB164(auVar39 ^ auVar37,0);
  uVar5 = (_DAT_183279258 & 0x7fffffffff) -
          ((_DAT_183279258 & 0x7fffffffff) >> 1 & 0x5555555555555555);
  uVar5 = (uVar5 & 0x3333333333333333) + (uVar5 >> 2 & 0x3333333333333333);
  bVar1 = (byte)(((uVar5 >> 4) + uVar5 & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
  uVar5 = (ulonglong)((uint)bVar1 + (uint)bVar1) ^ _DAT_183279258 & 0x7fffffffff;
  auVar30._8_4_ = 0xffffffff;
  auVar30._0_8_ = 0xffffffffffffffff;
  auVar30._12_4_ = 0xffffffff;
  uVar20 = SUB164(auVar39 ^ auVar30,0);
  uVar25 = SUB164(auVar37 ^ auVar30,0);
  uVar11 = (((ulonglong)uVar26 * (ulonglong)_DAT_1819d7830 +
             ((ulonglong)_DAT_1819d7840 * (ulonglong)uVar26 +
              (SUB168(auVar39 ^ auVar37,0) >> 0x20) * (ulonglong)_DAT_1819d7830 << 0x20) +
             (ulonglong)uVar19 * (ulonglong)_DAT_1819d7810 +
             ((ulonglong)_DAT_1819d7820 * (ulonglong)uVar19 +
              (SUB168(auVar39 | auVar37,0) >> 0x20) * (ulonglong)_DAT_1819d7810 << 0x20) +
            (ulonglong)uVar31 * (ulonglong)_DAT_1819d77f0 +
            ((ulonglong)_DAT_1819d7800 * (ulonglong)uVar31 +
             (SUB168(auVar39 & auVar37,0) >> 0x20) * (ulonglong)_DAT_1819d77f0 << 0x20) +
            (ulonglong)_DAT_1819d77e0 * (uVar6 & 0xffffffff) +
            ((ulonglong)uVar44 * (ulonglong)_DAT_1819d77e0 +
             (ulonglong)_DAT_1819d77d0 * (uVar6 & 0xffffffff) << 0x20) +
            (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d77e0 +
            ((ulonglong)uVar13 * (ulonglong)_DAT_1819d77e0 +
             (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d77d0 << 0x20)) -
           ((ulonglong)uVar25 * (ulonglong)_DAT_1819d78a0 +
            ((SUB168(auVar37 ^ auVar30,0) >> 0x20) * (ulonglong)_DAT_1819d78a0 +
             (ulonglong)_DAT_1819d7890 * (ulonglong)uVar25 << 0x20) +
           (ulonglong)uVar20 * (ulonglong)_DAT_1819d7880 +
           ((SUB168(auVar39 ^ auVar30,0) >> 0x20) * (ulonglong)_DAT_1819d7880 +
            (ulonglong)_DAT_1819d7870 * (ulonglong)uVar20 << 0x20) +
           (uVar6 & 0xffffffff) * (ulonglong)_DAT_1819d78a0 +
           ((ulonglong)uVar44 * (ulonglong)_DAT_1819d78a0 +
            (uVar6 & 0xffffffff) * (ulonglong)_DAT_1819d7890 << 0x20) +
           (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d7880 +
           ((ulonglong)uVar13 * (ulonglong)_DAT_1819d7880 +
            (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d7870 << 0x20))) - _DAT_1819d78b0;
  _DAT_1832791d0 = _DAT_1832792c8 ^ uVar5 ^ uVar11;
  _DAT_1832793f8 = (_DAT_1832793f8 ^ uVar5) + uVar11 ^ 0xbe41541aa2a79630;
  _DAT_183279338 = (_DAT_183279338 * -0x30fe3b7f5b3673e1 ^ _DAT_1832793f8) + uVar5;
  _DAT_183279390 = _DAT_183279338 ^ _DAT_1832793f8;
  uVar5 = uVar9 ^ 0x84222325 ^ _DAT_183279458;
  lVar3 = (uVar9 ^ 0x84222325) + _DAT_183279210;
  uVar6 = uVar5 + lVar3;
  uVar10 = (uVar11 ^ _DAT_183279210) + uVar11 + _DAT_183279458;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = (uVar10 * 0x2000 | uVar10 >> 0x33) ^ uVar11 ^ _DAT_183279210;
  _DAT_183279348 = uVar11;
  _DAT_1832791d8 =
       func_0x00018ae39210((uVar6 << 0x1d | uVar6 >> 0x23) - (uVar11 + _DAT_183279458) ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  auVar40._8_4_ = uStack0000000000000060;
  auVar40._0_8_ = _uStack0000000000000060;
  auVar40._12_4_ = uStack0000000000000064;
  uVar20 = (uint)(uVar11 >> 0x20);
  auVar33._8_4_ = (int)uVar11;
  auVar33._0_8_ = uVar11;
  auVar33._12_4_ = uVar20;
  in_stack_00000068 = auVar33._8_8_ >> 0x20;
  uVar25 = SUB164(auVar40 & auVar33,0);
  uVar6 = SUB168(auVar40 & auVar33,0);
  uVar13 = SUB164(auVar40 | auVar33,0);
  uVar9 = SUB168(auVar40 | auVar33,0);
  uVar19 = SUB164(auVar40 ^ auVar33,0);
  uVar10 = SUB168(auVar40 ^ auVar33,0);
  uVar5 = (_DAT_1832791d8 & 0x1ffffffffff) << 1 | (ulonglong)((longlong)_DAT_1832791d8 < 0);
  uVar10 = ((ulonglong)_DAT_1819d78d0 * (ulonglong)uVar19 +
            ((uVar10 >> 0x20) * (ulonglong)_DAT_1819d78d0 +
             (ulonglong)_DAT_1819d78c0 * (ulonglong)uVar19 << 0x20) +
            (ulonglong)uVar25 * (ulonglong)_DAT_1819d78d0 + (_uStack0000000000000060 - uVar11) +
            ((uVar6 >> 0x20) * (ulonglong)_DAT_1819d78d0 +
             (ulonglong)uVar25 * (ulonglong)_DAT_1819d78c0 << 0x20) +
           (ulonglong)_DAT_1819d78e0 * (ulonglong)uVar13 +
           ((ulonglong)_DAT_1819d78f0 * (ulonglong)uVar13 +
            (uVar9 >> 0x20) * (ulonglong)_DAT_1819d78e0 << 0x20)) -
           ((ulonglong)uVar19 * (_DAT_1819d7980 & 0xffffffff) +
            ((ulonglong)_DAT_1819d7990 * (ulonglong)uVar19 +
             (uVar10 >> 0x20) * (_DAT_1819d7980 & 0xffffffff) << 0x20) +
            (ulonglong)uVar13 * (ulonglong)_DAT_1819d7960 +
            ((ulonglong)_DAT_1819d7970 * (ulonglong)uVar13 +
             (uVar9 >> 0x20) * (ulonglong)_DAT_1819d7960 << 0x20) +
           (ulonglong)uVar25 * (ulonglong)_DAT_1819d7940 +
           ((ulonglong)_DAT_1819d7950 * (ulonglong)uVar25 +
            (uVar6 >> 0x20) * (ulonglong)_DAT_1819d7940 << 0x20) +
           (uVar11 & 0xffffffff) * (ulonglong)_DAT_1819d7930 +
           ((ulonglong)uVar20 * (ulonglong)_DAT_1819d7930 +
            (ulonglong)_DAT_1819d7920 * (uVar11 & 0xffffffff) << 0x20) +
           (_uStack0000000000000060 & 0xffffffff) * (ulonglong)_DAT_1819d7930 +
           ((ulonglong)uStack0000000000000064 * (ulonglong)_DAT_1819d7930 +
            (_uStack0000000000000060 & 0xffffffff) * (ulonglong)_DAT_1819d7920 << 0x20));
  _DAT_1832793b8 = uVar10 ^ uVar5;
  _DAT_1832794b8 = (_DAT_1832794b8 ^ uVar5) + uVar10 ^ 0xad720c6291bfd982;
  _DAT_183279320 = (_DAT_183279320 * -0x612449fa2cd60cf9 ^ _DAT_1832794b8) + uVar5;
  _DAT_1832791a0 = _DAT_183279320 ^ _DAT_1832794b8;
  uVar5 = uVar7 ^ 0x84222325;
  uVar6 = ((_DAT_1832792f0 ^ uVar5) + (uVar5 & _DAT_1832792f0) * 2) * (uVar10 - _DAT_183279440);
  uVar6 = (uVar6 | _DAT_183279230) + (uVar6 & _DAT_183279230);
  uVar6 = uVar6 * 0x2000 ^ uVar6;
  uVar6 = uVar6 >> 7 ^ uVar6;
  uVar6 = uVar6 << 0x11 ^ uVar6;
  _DAT_1832791a8 = uVar10;
  _uStack0000000000000060 = (ulonglong)uVar20;
  uVar6 = func_0x00018ae39210((uVar5 ^ uVar10 | uVar6) + (uVar6 & (uVar5 ^ uVar10)));
  uVar5 = in_stack_00000088;
  auVar14 = _DAT_1800170c0;
  uVar6 = uVar6 ^ uVar10;
  uVar19 = (uint)(uVar7 >> 0x20);
  auVar34._8_4_ = (int)uVar7;
  auVar34._0_8_ = uVar7;
  auVar34._12_4_ = uVar19;
  uVar20 = (uint)(uVar10 >> 0x20);
  auVar23._8_4_ = (int)uVar10;
  auVar23._0_8_ = uVar10;
  auVar23._12_4_ = uVar20;
  uVar31 = SUB164(auVar34 & auVar23,0);
  uVar9 = SUB168(auVar34 & auVar23,0);
  uVar13 = SUB164(auVar34 | auVar23,0);
  uVar12 = SUB168(auVar34 | auVar23,0);
  uVar44 = SUB164(auVar34 ^ auVar23,0);
  auVar50._8_4_ = 0xffffffff;
  auVar50._0_8_ = 0xffffffffffffffff;
  auVar50._12_4_ = 0xffffffff;
  uVar25 = SUB164(auVar34 ^ auVar50,0);
  uVar26 = SUB164(auVar23 ^ auVar50,0);
  uVar11 = ~in_stack_00000088;
  auVar15._8_8_ = uVar11;
  auVar15._0_8_ = in_stack_00000070;
  auVar16 = pshufb(auVar15 ^ _DAT_1819d7ac0,_DAT_1800170c0);
  uVar7 = (((ulonglong)uVar25 * (ulonglong)_DAT_1819d79c0 +
            ((SUB168(auVar34 ^ auVar50,0) >> 0x20) * (ulonglong)_DAT_1819d79c0 +
             (ulonglong)_DAT_1819d79a0 * (ulonglong)uVar25 << 0x20) +
            (ulonglong)uVar44 * (ulonglong)_DAT_1819d79e0 +
            ((SUB168(auVar34 ^ auVar23,0) >> 0x20) * (ulonglong)_DAT_1819d79e0 +
             (ulonglong)_DAT_1819d79d0 * (ulonglong)uVar44 << 0x20) +
            (ulonglong)uVar31 * (ulonglong)_DAT_1819d79e0 +
            ((uVar9 >> 0x20) * (ulonglong)_DAT_1819d79e0 +
             (ulonglong)uVar31 * (ulonglong)_DAT_1819d79d0 << 0x20) +
            (ulonglong)_DAT_1819d79b0 * (uVar7 & 0xffffffff) + uVar10 +
            ((ulonglong)uVar19 * (ulonglong)_DAT_1819d79b0 +
             (uVar7 & 0xffffffff) * (ulonglong)_DAT_1819d79a0 << 0x20) +
           (ulonglong)_DAT_1819d79f0 * (ulonglong)uVar13 +
           ((ulonglong)_DAT_1819d7a00 * (ulonglong)uVar13 +
            (uVar12 >> 0x20) * (ulonglong)_DAT_1819d79f0 << 0x20)) -
          ((ulonglong)uVar26 * (_DAT_1819d7a70 & 0xffffffff) +
           ((ulonglong)_DAT_1819d7aa0 * (ulonglong)uVar26 +
            (SUB168(auVar23 ^ auVar50,0) >> 0x20) * (_DAT_1819d7a70 & 0xffffffff) << 0x20) +
          (ulonglong)uVar13 * (ulonglong)_DAT_1819d7a90 +
          ((uVar12 >> 0x20) * (ulonglong)_DAT_1819d7a90 +
           (ulonglong)_DAT_1819d7a80 * (ulonglong)uVar13 << 0x20) +
          (ulonglong)uVar31 * (ulonglong)_DAT_1819d7a90 +
          ((uVar9 >> 0x20) * (ulonglong)_DAT_1819d7a90 +
           (ulonglong)uVar31 * (ulonglong)_DAT_1819d7a80 << 0x20) +
          (uVar10 & 0xffffffff) * (ulonglong)_DAT_1819d7a50 +
          ((ulonglong)_DAT_1819d7a60 * (uVar10 & 0xffffffff) +
           (ulonglong)uVar20 * (ulonglong)_DAT_1819d7a50 << 0x20) +
          (uVar7 & 0xffffffff) * (ulonglong)_DAT_1819d7a30 +
          ((ulonglong)_DAT_1819d7a40 * (uVar7 & 0xffffffff) +
           (ulonglong)uVar19 * (ulonglong)_DAT_1819d7a30 << 0x20))) + _DAT_1819d7ab0;
  _DAT_183279170 = _DAT_183279398 ^ uVar6 ^ uVar7;
  _DAT_183279108 = (_DAT_183279108 ^ uVar6) + uVar7 ^ 0x32c1647e4397d7bb;
  _DAT_183279488 = (_DAT_183279488 * 0x5f9e17b0a1f9b0cb ^ _DAT_183279108) + uVar6;
  _DAT_183279348 = _DAT_183279488 ^ _DAT_183279108;
  uVar10 = auVar16._8_8_ + auVar16._0_8_;
  uVar6 = uVar10 + _DAT_183279428;
  if (auVar16._4_4_ < 0) {
    uVar6 = _DAT_1832792b0 ^ uVar10;
  }
  _DAT_1832792c8 = uVar7;
  _DAT_1832794f8 = func_0x00018ae39210(SUB161(auVar15 ^ _DAT_1819d7ac0,5) ^ uVar6);
  uVar5 = ~(uVar11 * uVar5 ^ _DAT_1832794f8) & _uStack00000000000000a0;
  _DAT_183279220 = _DAT_183279220 ^ uVar5 ^ 0x5ab6b6b436b51fbf;
  _DAT_1832793c8 = (_DAT_1832793c8 * -0x7e2c15b681b4493 ^ _DAT_183279220) + uVar5;
  _DAT_183279230 = _DAT_1832793c8 ^ _DAT_183279220;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar7 ^ 0x84222325;
  _DAT_1832794d8 = 0;
  auVar14 = pshufb(auVar17 ^ _DAT_1819d7ad0,auVar14);
  uVar6 = auVar14._8_8_ + auVar14._0_8_;
  uVar5 = uVar6 + _DAT_183279480;
  if (auVar14._4_4_ < 0) {
    uVar5 = _DAT_183279250 ^ uVar6;
  }
  _DAT_183279220 = func_0x00018ae39210(SUB161(auVar17 ^ _DAT_1819d7ad0,5) ^ uVar5);
  uVar13 = (uint)(uVar7 >> 0x20);
  auVar18._8_4_ = (int)uVar7;
  auVar18._0_8_ = uVar7;
  auVar18._12_4_ = uVar13;
  uVar5 = auVar18._8_8_ >> 0x20;
  auVar41._0_8_ =
       ((_DAT_1819d7b20 & 0xffffffff) * (uVar7 & 0xffffffff) +
        ((_DAT_1819d7b30 & 0xffffffff) * (uVar7 & 0xffffffff) +
         (ulonglong)uVar13 * (_DAT_1819d7b20 & 0xffffffff) << 0x20) +
       (_DAT_1819d7b00 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_DAT_1819d7b10 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (ulonglong)uVar13 * (_DAT_1819d7b00 & 0xffffffff) << 0x20) +
       (_DAT_1819d7ae0 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_DAT_1819d7af0 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (ulonglong)uVar13 * (_DAT_1819d7ae0 & 0xffffffff) << 0x20)) -
       ((uVar7 & 0xffffffff) * (ulonglong)_DAT_1819d7b80 +
        ((_DAT_1819d7b90 & 0xffffffff) * (uVar7 & 0xffffffff) +
         (ulonglong)uVar13 * (ulonglong)_DAT_1819d7b80 << 0x20) +
       (_DAT_1819d7b60 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_DAT_1819d7b70 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (ulonglong)uVar13 * (_DAT_1819d7b60 & 0xffffffff) << 0x20) +
       (_DAT_1819d7b40 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_DAT_1819d7b50 & 0xffffffff) * (uVar7 & 0xffffffff) +
        (ulonglong)uVar13 * (_DAT_1819d7b40 & 0xffffffff) << 0x20));
  auVar41._8_8_ =
       ((_UNK_1819d7b28 & 0xffffffff) * (uVar7 & 0xffffffff) +
        ((_UNK_1819d7b38 & 0xffffffff) * (uVar7 & 0xffffffff) +
         uVar5 * (_UNK_1819d7b28 & 0xffffffff) << 0x20) +
       (_UNK_1819d7b08 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_UNK_1819d7b18 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar5 * (_UNK_1819d7b08 & 0xffffffff)
       << 0x20) +
       (_UNK_1819d7ae8 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_UNK_1819d7af8 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar5 * (_UNK_1819d7ae8 & 0xffffffff)
       << 0x20)) -
       ((auVar18._8_8_ & 0xffffffff) * (ulonglong)_UNK_1819d7b88 +
        ((_UNK_1819d7b98 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar5 * _UNK_1819d7b88 << 0x20) +
       (_UNK_1819d7b68 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_UNK_1819d7b78 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar5 * (_UNK_1819d7b68 & 0xffffffff)
       << 0x20) +
       (_UNK_1819d7b48 & 0xffffffff) * (uVar7 & 0xffffffff) +
       ((_UNK_1819d7b58 & 0xffffffff) * (uVar7 & 0xffffffff) + uVar5 * (_UNK_1819d7b48 & 0xffffffff)
       << 0x20));
  _DAT_183279430 =
       (_DAT_183279250 ^ _DAT_183279220 ^ auVar41._0_8_ ^ _DAT_183279220) + auVar41._0_8_ ^
       0x67109f5e54f15cd8;
  _DAT_1832792d0 = (_DAT_1832792d0 * -0x3b9f468fe577d83b ^ _DAT_183279430) + _DAT_183279220;
  _DAT_183279228 = _DAT_1832792d0 ^ _DAT_183279430;
  uVar5 = auVar41._0_8_ ^ 0x84222325 ^ _DAT_183279430;
  lVar3 = (auVar41._0_8_ ^ 0x84222325) + _DAT_183279128;
  uVar6 = uVar5 + lVar3;
  uVar5 = (uVar6 * 0x2000 | uVar6 >> 0x33) ^ uVar5;
  uVar6 = ((_DAT_183279128 + _DAT_183279430) * 0x2000 | _DAT_183279128 + _DAT_183279430 >> 0x33) ^
          _DAT_183279128;
  _DAT_183279440 = auVar41._0_8_;
  _DAT_183279428 =
       func_0x00018ae39210((uVar6 << 0x1d | uVar6 >> 0x23) - _DAT_183279430 ^
                           (uVar5 << 0x1d | uVar5 >> 0x23) - lVar3);
  uVar5 = _DAT_183279428 ^ auVar41._0_8_;
  auVar24._8_4_ = 0xffffffff;
  auVar24._0_8_ = 0xffffffffffffffff;
  auVar24._12_4_ = 0xffffffff;
  uVar13 = SUB164(auVar24 ^ auVar41,0);
  lVar3 = ((ulonglong)_DAT_1819d7be0 * (auVar41._0_8_ & 0xffffffff) +
           ((ulonglong)_DAT_1819d7bf0 * (auVar41._0_8_ & 0xffffffff) +
            (auVar41._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7be0 << 0x20) +
          (ulonglong)_DAT_1819d7bc0 * (auVar41._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_1819d7bd0 * (auVar41._0_8_ & 0xffffffff) +
           (auVar41._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7bc0 << 0x20) +
          (ulonglong)_DAT_1819d7ba0 * (auVar41._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_1819d7bb0 * (auVar41._0_8_ & 0xffffffff) +
           (auVar41._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7ba0 << 0x20)) -
          ((ulonglong)uVar13 * (_DAT_1819d7c20 & 0xffffffff) +
           ((ulonglong)_DAT_1819d7c70 * (ulonglong)uVar13 +
            (SUB168(auVar24 ^ auVar41,0) >> 0x20) * (_DAT_1819d7c20 & 0xffffffff) << 0x20) +
          (auVar41._0_8_ & 0xffffffff) * (ulonglong)_DAT_1819d7c50 +
          ((ulonglong)_DAT_1819d7c60 * (auVar41._0_8_ & 0xffffffff) +
           (auVar41._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7c50 << 0x20) +
          (ulonglong)_DAT_1819d7c30 * (auVar41._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_1819d7c40 * (auVar41._0_8_ & 0xffffffff) +
           (auVar41._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7c30 << 0x20) +
          (ulonglong)_DAT_1819d7c00 * (auVar41._0_8_ & 0xffffffff) +
          ((ulonglong)_DAT_1819d7c10 * (auVar41._0_8_ & 0xffffffff) +
           (auVar41._0_8_ >> 0x20) * (ulonglong)_DAT_1819d7c00 << 0x20));
  _DAT_183279230 = lVar3 + 0x1b8aa9565e3fd672;
  _DAT_1832794a8 = _DAT_183279300 ^ uVar5 ^ _DAT_183279230;
  _DAT_183279150 = (_DAT_183279150 ^ uVar5) + _DAT_183279230 ^ 0x7659fe48bde42d3;
  _DAT_183279318 = (_DAT_183279318 * -0x265c6bf68754c1cd ^ _DAT_183279150) + uVar5;
  _DAT_183279310 = _DAT_183279318 ^ _DAT_183279150;
  in_stack_00000030 = in_stack_000000b8 ^ _DAT_183279230;
  in_stack_00000028 = FUN_190dd72e0(lVar3,*_DAT_18301ee50 + 0xb1,5);
  cVar2 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar2 == '\0') {
  case false:
    uVar4 = (**(code **)(*unaff_RSI + 0x78))();
    in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_18,*_DAT_18301ee50 + 0x98,4);
    cVar2 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_19,uVar4,in_stack_00000028);
    switch(cVar2 == '\0') {
    case false:
      in_stack_00000030 = uVar4;
      break;
    case true:
      goto code_r0x00018ae38d2f;
    }
    break;
  case true:
    in_stack_00000058 = FUN_190dd72e0(extraout_XMM0_Qa,*_DAT_18301ee50 + 0xb1,5);
    cVar2 = (**(code **)(*unaff_RSI + 0x720))();
    switch(cVar2 == '\0') {
    case false:
      uVar4 = (**(code **)(*unaff_RSI + 0x78))();
      in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_20,*_DAT_18301ee50 + 0x98,4);
      cVar2 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_21,uVar4,in_stack_00000028);
      switch(cVar2 == '\0') {
      case false:
        in_stack_00000030 = uVar4;
        break;
      case true:
        goto code_r0x00018ae38d2f;
      }
      break;
    case true:
      uVar4 = FUN_190ddce00(extraout_XMM0_Qa_00,&stack0x00000058,*_DAT_18301ee50 + 0x10d0,
                            *_DAT_18301ee50 + 0x10d6,0x16);
      cVar2 = (**(code **)(*unaff_RSI + 0x720))();
      switch(cVar2 == '\0') {
      case false:
        uVar4 = (**(code **)(*unaff_RSI + 0x78))();
        in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_22,*_DAT_18301ee50 + 0x98,4);
        cVar2 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_23,uVar4,in_stack_00000028);
        switch(cVar2 == '\0') {
        case false:
          in_stack_00000030 = uVar4;
          break;
        case true:
          goto code_r0x00018ae38d2f;
        }
        break;
      case true:
        cVar2 = (**(code **)(*unaff_RSI + 0x720))();
        switch(cVar2 == '\0') {
        case false:
          uVar4 = (**(code **)(*unaff_RSI + 0x78))();
          in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_24,*_DAT_18301ee50 + 0x98,4);
          cVar2 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_25,uVar4,in_stack_00000028);
          switch(cVar2 == '\0') {
          case false:
            in_stack_00000030 = uVar4;
            break;
          case true:
            goto code_r0x00018ae38d2f;
          }
          break;
        case true:
          in_stack_00000030 =
               (**(code **)(*unaff_RSI + 0x488))(extraout_XMM0_Qa_01,in_stack_00000028,uVar4);
          cVar2 = (**(code **)(*unaff_RSI + 0x720))();
          switch(cVar2 == '\0') {
          case false:
            uVar4 = (**(code **)(*unaff_RSI + 0x78))();
            in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_26,*_DAT_18301ee50 + 0x98,4);
            cVar2 = (**(code **)(*unaff_RSI + 0x100))(extraout_XMM0_Qa_27,uVar4,in_stack_00000028);
            switch(cVar2 == '\0') {
            case false:
              in_stack_00000030 = uVar4;
              break;
            case true:
              goto code_r0x00018ae38d2f;
            }
            break;
          case true:
            uVar4 = extraout_XMM0_Qa_02;
            switch(in_stack_00000030 == 0) {
            case false:
code_r0x00018ae38123:
              in_stack_00000058 = FUN_190dd72e0(uVar4,*_DAT_18301ee50 + 0x10f0,0x3f);
              cVar2 = (**(code **)(*unaff_RSI + 0x720))();
              switch(cVar2 == '\0') {
              case false:
                uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_28,*_DAT_18301ee50 + 0x98,4);
                cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                  (extraout_XMM0_Qa_29,uVar4,in_stack_00000028);
                switch(cVar2 == '\0') {
                case false:
                  in_stack_00000030 = uVar4;
                  break;
                case true:
                  goto code_r0x00018ae38d2f;
                }
                break;
              case true:
                uVar4 = FUN_190dd9df0(extraout_XMM0_Qa_05,&stack0x00000058,*_DAT_18301ee50 + 0x9066,
                                      *_DAT_18301ee50 + 0x9071,0x65a);
                cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                switch(cVar2 == '\0') {
                case false:
                  uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                  in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_32,*_DAT_18301ee50 + 0x98,4);
                  cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                    (extraout_XMM0_Qa_33,uVar4,in_stack_00000028);
                  switch(cVar2 == '\0') {
                  case false:
                    in_stack_00000030 = uVar4;
                    break;
                  case true:
                    goto code_r0x00018ae38d2f;
                  }
                  break;
                case true:
                  in_stack_00000030 =
                       (**(code **)(*unaff_RSI + 0x2f8))
                                 (extraout_XMM0_Qa_06,in_stack_00000030,uVar4);
                  cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                  switch(cVar2 == '\0') {
                  case false:
                    uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                    in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_36,*_DAT_18301ee50 + 0x98,4);
                    cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                      (extraout_XMM0_Qa_37,uVar4,in_stack_00000028);
                    switch(cVar2 == '\0') {
                    case false:
                      in_stack_00000030 = uVar4;
                      break;
                    case true:
                      goto code_r0x00018ae38d2f;
                    }
                    break;
                  case true:
                    uVar4 = extraout_XMM0_Qa_07;
                    switch(in_stack_00000030 == 0) {
                    case false:
code_r0x00018ae38299:
                      in_stack_00000058 = FUN_190dd72e0(uVar4,*_DAT_18301ee50 + 0x908b,0x198);
                      cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                      switch(cVar2 == '\0') {
                      case false:
                        uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                        in_stack_00000028 =
                             FUN_190dd72e0(extraout_XMM0_Qa_38,*_DAT_18301ee50 + 0x98,4);
                        cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                          (extraout_XMM0_Qa_39,uVar4,in_stack_00000028);
                        switch(cVar2 == '\0') {
                        case false:
                          in_stack_00000030 = uVar4;
                          break;
                        case true:
                          goto code_r0x00018ae38d2f;
                        }
                        break;
                      case true:
                        uVar4 = FUN_190dd9df0(extraout_XMM0_Qa_10,&stack0x00000058,
                                              *_DAT_18301ee50 + 0xbc23,*_DAT_18301ee50 + 40000,0x771
                                             );
                        cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                        switch(cVar2 == '\0') {
                        case false:
                          uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                          in_stack_00000028 =
                               FUN_190dd72e0(extraout_XMM0_Qa_42,*_DAT_18301ee50 + 0x98,4);
                          cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                            (extraout_XMM0_Qa_43,uVar4,in_stack_00000028);
                          switch(cVar2 == '\0') {
                          case false:
                            in_stack_00000030 = uVar4;
                            break;
                          case true:
                            goto code_r0x00018ae38d2f;
                          }
                          break;
                        case true:
                          in_stack_00000030 =
                               (**(code **)(*unaff_RSI + 0x2f8))
                                         (extraout_XMM0_Qa_11,in_stack_00000030,uVar4);
                          cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                          switch(cVar2 == '\0') {
                          case false:
                            uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                            in_stack_00000028 =
                                 FUN_190dd72e0(extraout_XMM0_Qa_46,*_DAT_18301ee50 + 0x98,4);
                            cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                              (extraout_XMM0_Qa_47,uVar4,in_stack_00000028);
                            switch(cVar2 == '\0') {
                            case false:
                              in_stack_00000030 = uVar4;
                              break;
                            case true:
                              goto code_r0x00018ae38d2f;
                            }
                            break;
                          case true:
                            in_stack_00000038 = 0;
                            in_stack_00000058 =
                                 FUN_190dd72e0(extraout_XMM0_Qa_12,*_DAT_18301ee50 + 0x9c5a,0x1bd);
                            cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                            switch(cVar2 == '\0') {
                            case false:
                              uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                              in_stack_00000028 =
                                   FUN_190dd72e0(extraout_XMM0_Qa_48,*_DAT_18301ee50 + 0x98,4);
                              cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                                (extraout_XMM0_Qa_49,uVar4,in_stack_00000028);
                              switch(cVar2 == '\0') {
                              case false:
                                in_stack_00000030 = uVar4;
                                break;
                              case true:
                                goto code_r0x00018ae38d2f;
                              }
                              break;
                            case true:
                              uVar4 = FUN_190ddfc90(extraout_XMM0_Qa_13,&stack0x00000058,
                                                    *_DAT_18301ee50 + 0x9c72,
                                                    *_DAT_18301ee50 + 0x1984,0x8f7);
                              cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                              switch(cVar2 == '\0') {
                              case false:
                                uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                in_stack_00000028 =
                                     FUN_190dd72e0(extraout_XMM0_Qa_50,*_DAT_18301ee50 + 0x98,4);
                                cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                                  (extraout_XMM0_Qa_51,uVar4,in_stack_00000028);
                                switch(cVar2 == '\0') {
                                case false:
                                  in_stack_00000030 = uVar4;
                                  break;
                                case true:
                                  goto code_r0x00018ae38d2f;
                                }
                                break;
                              case true:
                                switch(in_stack_00000030 == 0) {
                                case false:
                                  (**(code **)(*unaff_RSI + 0x1f8))
                                            (extraout_XMM0_Qa_14,in_stack_00000030,uVar4,
                                             &stack0x00000038);
                                  cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                                  switch(cVar2 == '\0') {
                                  case false:
                                    uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                    in_stack_00000028 =
                                         FUN_190dd72e0(extraout_XMM0_Qa_64,*_DAT_18301ee50 + 0x98,4)
                                    ;
                                    cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                                      (extraout_XMM0_Qa_65,uVar4,in_stack_00000028);
                                    switch(cVar2 == '\0') {
                                    case false:
                                      in_stack_00000030 = uVar4;
                                      break;
                                    case true:
                                      goto code_r0x00018ae38d2f;
                                    }
                                    break;
                                  case true:
                                    switch(unaff_BL == '\0') {
                                    case true:
                                      goto code_r0x00018ae38d2f;
                                    }
                                    in_stack_00000030 = in_stack_000000b0;
                                    in_stack_00000038 = 1;
                                    in_stack_00000058 =
                                         FUN_190dd72e0(extraout_XMM0_Qa_56,*_DAT_18301ee50 + 0xe23f,
                                                       0x27a);
                                    cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                                    switch(cVar2 == '\0') {
                                    case false:
                                      uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                      in_stack_00000028 =
                                           FUN_190dd72e0(extraout_XMM0_Qa_66,*_DAT_18301ee50 + 0x98,
                                                         4);
                                      cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                                        (extraout_XMM0_Qa_67,uVar4,in_stack_00000028
                                                        );
                                      switch(cVar2 == '\0') {
                                      case false:
                                        in_stack_00000030 = uVar4;
                                        break;
                                      case true:
                                        goto code_r0x00018ae38d2f;
                                      }
                                      break;
                                    case true:
                                      uVar4 = FUN_190ddfc90(extraout_XMM0_Qa_57,&stack0x00000058,
                                                            *_DAT_18301ee50 + 0x9506,
                                                            *_DAT_18301ee50 + 0x1984,0xf44);
                                      cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                                      switch(cVar2 == '\0') {
                                      case false:
                                        uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                        in_stack_00000028 =
                                             FUN_190dd72e0(extraout_XMM0_Qa_68,
                                                           *_DAT_18301ee50 + 0x98,4);
                                        cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                                          (extraout_XMM0_Qa_69,uVar4,
                                                           in_stack_00000028);
                                        switch(cVar2 == '\0') {
                                        case false:
                                          in_stack_00000030 = uVar4;
                                          break;
                                        case true:
                                          goto code_r0x00018ae38d2f;
                                        }
                                        break;
                                      case true:
                                        switch(in_stack_00000030 == 0) {
                                        case false:
                                          (**(code **)(*unaff_RSI + 0x1f8))
                                                    (extraout_XMM0_Qa_58,in_stack_00000030,uVar4,
                                                     &stack0x00000038);
                                          cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                                          switch(cVar2 == '\0') {
                                          case false:
                                            uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                            in_stack_00000028 =
                                                 FUN_190dd72e0(extraout_XMM0_Qa_70,
                                                               *_DAT_18301ee50 + 0x98,4);
                                            cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                                              (extraout_XMM0_Qa_71,uVar4,
                                                               in_stack_00000028);
                                            switch(cVar2 == '\0') {
                                            case false:
                                              in_stack_00000030 = uVar4;
                                              break;
                                            case true:
                                              goto code_r0x00018ae38d2f;
                                            }
                                            break;
                                          case true:
                                            goto code_r0x00018ae38d2f;
                                          }
                                          break;
                                        case true:
                                          uVar4 = FUN_190dd72e0(extraout_XMM0_Qa_58,*_DAT_18301ee50,
                                                                0);
                                          cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                                          switch(cVar2 == '\0') {
                                          case false:
                                            uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                            in_stack_00000028 =
                                                 FUN_190dd72e0(extraout_XMM0_Qa_72,
                                                               *_DAT_18301ee50 + 0x98,4);
                                            cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                                              (extraout_XMM0_Qa_73,uVar4,
                                                               in_stack_00000028);
                                            switch(cVar2 == '\0') {
                                            case false:
                                              in_stack_00000030 = uVar4;
                                              break;
                                            case true:
                                              goto code_r0x00018ae38d2f;
                                            }
                                            break;
                                          case true:
                                            (**(code **)(*unaff_RSI + 0x70))
                                                      (extraout_XMM0_Qa_59,uVar4,&UNK_182f702a8);
                                            uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                            in_stack_00000028 =
                                                 FUN_190dd72e0(extraout_XMM0_Qa_60,
                                                               *_DAT_18301ee50 + 0x98,4);
                                            cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                                              (extraout_XMM0_Qa_61,uVar4,
                                                               in_stack_00000028);
                                            switch(cVar2 == '\0') {
                                            case false:
                                              in_stack_00000030 = uVar4;
                                              break;
                                            case true:
                                              goto code_r0x00018ae38d2f;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  break;
                                case true:
                                  uVar4 = FUN_190dd72e0(extraout_XMM0_Qa_14,*_DAT_18301ee50,0);
                                  cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                                  switch(cVar2 == '\0') {
                                  case false:
                                    uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                    in_stack_00000028 =
                                         FUN_190dd72e0(extraout_XMM0_Qa_62,*_DAT_18301ee50 + 0x98,4)
                                    ;
                                    cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                                      (extraout_XMM0_Qa_63,uVar4,in_stack_00000028);
                                    switch(cVar2 == '\0') {
                                    case false:
                                      in_stack_00000030 = uVar4;
                                      break;
                                    case true:
                                      goto code_r0x00018ae38d2f;
                                    }
                                    break;
                                  case true:
                                    (**(code **)(*unaff_RSI + 0x70))
                                              (extraout_XMM0_Qa_15,uVar4,&UNK_182f702a8);
                                    uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                                    in_stack_00000028 =
                                         FUN_190dd72e0(extraout_XMM0_Qa_16,*_DAT_18301ee50 + 0x98,4)
                                    ;
                                    cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                                      (extraout_XMM0_Qa_17,uVar4,in_stack_00000028);
                                    switch(cVar2 == '\0') {
                                    case false:
                                      in_stack_00000030 = uVar4;
                                      break;
                                    case true:
                                      goto code_r0x00018ae38d2f;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      break;
                    case true:
                      in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_07,*_DAT_18301ee50,0);
                      cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                      switch(cVar2 == '\0') {
                      case false:
                        uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                        in_stack_00000028 =
                             FUN_190dd72e0(extraout_XMM0_Qa_40,*_DAT_18301ee50 + 0x98,4);
                        cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                          (extraout_XMM0_Qa_41,uVar4,in_stack_00000028);
                        switch(cVar2 == '\0') {
                        case false:
                          in_stack_00000030 = uVar4;
                          break;
                        case true:
                          goto code_r0x00018ae38d2f;
                        }
                        break;
                      case true:
                        (**(code **)(*unaff_RSI + 0x70))
                                  (extraout_XMM0_Qa_08,in_stack_00000028,&UNK_182f702a8);
                        cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                        uVar4 = extraout_XMM0_Qa_09;
                        switch(cVar2 == '\0') {
                        case false:
                          uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                          in_stack_00000028 =
                               FUN_190dd72e0(extraout_XMM0_Qa_44,*_DAT_18301ee50 + 0x98,4);
                          cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                            (extraout_XMM0_Qa_45,uVar4,in_stack_00000028);
                          switch(cVar2 == '\0') {
                          case false:
                            in_stack_00000030 = uVar4;
                            break;
                          case true:
                            goto code_r0x00018ae38d2f;
                          }
                          break;
                        case true:
                          goto code_r0x00018ae38299;
                        }
                      }
                    }
                  }
                }
              }
              break;
            case true:
              in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_02,*_DAT_18301ee50,0);
              cVar2 = (**(code **)(*unaff_RSI + 0x720))();
              switch(cVar2 == '\0') {
              case false:
                uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_30,*_DAT_18301ee50 + 0x98,4);
                cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                  (extraout_XMM0_Qa_31,uVar4,in_stack_00000028);
                switch(cVar2 == '\0') {
                case false:
                  in_stack_00000030 = uVar4;
                  break;
                case true:
                  goto code_r0x00018ae38d2f;
                }
                break;
              case true:
                (**(code **)(*unaff_RSI + 0x70))
                          (extraout_XMM0_Qa_03,in_stack_00000028,&UNK_182f702a8);
                cVar2 = (**(code **)(*unaff_RSI + 0x720))();
                uVar4 = extraout_XMM0_Qa_04;
                switch(cVar2 == '\0') {
                case false:
                  uVar4 = (**(code **)(*unaff_RSI + 0x78))();
                  in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_34,*_DAT_18301ee50 + 0x98,4);
                  cVar2 = (**(code **)(*unaff_RSI + 0x100))
                                    (extraout_XMM0_Qa_35,uVar4,in_stack_00000028);
                  switch(cVar2 == '\0') {
                  case false:
                    in_stack_00000030 = uVar4;
                    break;
                  case true:
                    goto code_r0x00018ae38d2f;
                  }
                  break;
                case true:
                  goto code_r0x00018ae38123;
                }
              }
            }
          }
        }
      }
    }
  }
  uVar4 = (**(code **)(*unaff_RSI + 0x88))();
  in_stack_00000028 = FUN_190dd72e0(uVar4,*_DAT_18301ee50 + 0x14458,0x32b);
  cVar2 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar2 == '\0') {
  case true:
    uVar4 = FUN_190de3220(extraout_XMM0_Qa_52,&stack0x00000028,*_DAT_18301ee50 + 0x14486,
                          *_DAT_18301ee50 + 0xf4,0xf43);
    cVar2 = (**(code **)(*unaff_RSI + 0x720))();
    switch(cVar2 == '\0') {
    case true:
      in_stack_00000030 =
           (**(code **)(*unaff_RSI + 0x3a0))
                     (extraout_XMM0_Qa_53,in_stack_00000028,uVar4,&stack0x00000030);
      cVar2 = (**(code **)(*unaff_RSI + 0x720))();
      switch(cVar2 == '\0') {
      case true:
        switch(in_stack_00000030 == 0) {
        case false:
          (**(code **)(*unaff_RSI + 0x68))();
          break;
        case true:
          in_stack_00000028 = FUN_190dd72e0(extraout_XMM0_Qa_54,*_DAT_18301ee50,0);
          cVar2 = (**(code **)(*unaff_RSI + 0x720))();
          switch(cVar2 == '\0') {
          case true:
            (**(code **)(*unaff_RSI + 0x70))(extraout_XMM0_Qa_55,in_stack_00000028,&UNK_182f702a8);
          }
        }
      }
    }
  }
code_r0x00018ae38d2f:
  return;
}



// ===== Lsixtwo/fF; aSZ (IJ)Ljava/lang/String; (handler @ image 18ae633c0, runtime 6ffff28c33c0) =====

/* WARNING: Switch with 1 destination removed at 0x00018ae633e5 */
/* WARNING: Switch with 1 destination removed at 0x00018ae6341c */
/* WARNING: Switch with 1 destination removed at 0x00018ae63bce */
/* WARNING: Switch with 1 destination removed at 0x00018ae63c1c */
/* WARNING: Switch with 1 destination removed at 0x00018ae63c70 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63cb8 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63d20 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63d50 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63d7f */
/* WARNING: Switch with 1 destination removed at 0x00018ae63db6 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63de5 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63e1c */
/* WARNING: Switch with 1 destination removed at 0x00018ae63e4b */
/* WARNING: Switch with 1 destination removed at 0x00018ae63e82 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63eb1 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63ee8 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63ef7 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63f26 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63f5d */
/* WARNING: Switch with 1 destination removed at 0x00018ae63f8c */
/* WARNING: Switch with 1 destination removed at 0x00018ae63fc3 */
/* WARNING: Switch with 1 destination removed at 0x00018ae63ff2 */
/* WARNING: Switch with 1 destination removed at 0x00018ae6404b */
/* WARNING: Switch with 1 destination removed at 0x00018ae64093 */
/* WARNING: Switch with 1 destination removed at 0x00018ae640fb */
/* WARNING: Switch with 1 destination removed at 0x00018ae6412b */
/* WARNING: Switch with 1 destination removed at 0x00018ae6413a */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18ae633c0(void)

{
  char cVar1;
  longlong in_RAX;
  longlong lVar2;
  longlong *unaff_RSI;
  
  (**(code **)(in_RAX + 0x78))((ulonglong)unaff_RSI & 0xffffffff);
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x100))();
  switch(cVar1 == '\0') {
  case true:
    goto code_r0x00018ae64140;
  }
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case false:
    (**(code **)(*unaff_RSI + 0x78))();
    FUN_190dd72e0();
    cVar1 = (**(code **)(*unaff_RSI + 0x100))();
    switch(cVar1 == '\0') {
    case false:
      break;
    case true:
      goto code_r0x00018ae64140;
    }
    break;
  case true:
    FUN_190dd72e0();
    cVar1 = (**(code **)(*unaff_RSI + 0x720))();
    switch(cVar1 == '\0') {
    case false:
      (**(code **)(*unaff_RSI + 0x78))();
      FUN_190dd72e0();
      cVar1 = (**(code **)(*unaff_RSI + 0x100))();
      switch(cVar1 == '\0') {
      case false:
        break;
      case true:
        goto code_r0x00018ae64140;
      }
      break;
    case true:
      FUN_190de3220();
      cVar1 = (**(code **)(*unaff_RSI + 0x720))();
      switch(cVar1 == '\0') {
      case false:
        (**(code **)(*unaff_RSI + 0x78))();
        FUN_190dd72e0();
        cVar1 = (**(code **)(*unaff_RSI + 0x100))();
        switch(cVar1 == '\0') {
        case false:
          break;
        case true:
          goto code_r0x00018ae64140;
        }
        break;
      case true:
        lVar2 = (**(code **)(*unaff_RSI + 0x3a0))();
        cVar1 = (**(code **)(*unaff_RSI + 0x720))();
        switch(cVar1 == '\0') {
        case false:
          (**(code **)(*unaff_RSI + 0x78))();
          FUN_190dd72e0();
          cVar1 = (**(code **)(*unaff_RSI + 0x100))();
          switch(cVar1 == '\0') {
          case false:
            break;
          case true:
            goto code_r0x00018ae64140;
          }
          break;
        case true:
          switch(lVar2 == 0) {
          case false:
            (**(code **)(*unaff_RSI + 0x68))();
            break;
          case true:
            FUN_190dd72e0();
            cVar1 = (**(code **)(*unaff_RSI + 0x720))();
            switch(cVar1 == '\0') {
            case false:
              (**(code **)(*unaff_RSI + 0x78))();
              FUN_190dd72e0();
              cVar1 = (**(code **)(*unaff_RSI + 0x100))();
              switch(cVar1 == '\0') {
              case false:
                break;
              case true:
                goto code_r0x00018ae64140;
              }
              goto code_r0x00018ae63fc9;
            case true:
              (**(code **)(*unaff_RSI + 0x70))();
            }
          }
          (**(code **)(*unaff_RSI + 0x78))();
          FUN_190dd72e0();
          cVar1 = (**(code **)(*unaff_RSI + 0x100))();
          switch(cVar1 == '\0') {
          case false:
            break;
          case true:
            goto code_r0x00018ae64140;
          }
        }
      }
    }
  }
code_r0x00018ae63fc9:
  (**(code **)(*unaff_RSI + 0x88))();
  FUN_190dd72e0();
  cVar1 = (**(code **)(*unaff_RSI + 0x720))();
  switch(cVar1 == '\0') {
  case true:
    FUN_190de3220();
    cVar1 = (**(code **)(*unaff_RSI + 0x720))();
    switch(cVar1 == '\0') {
    case true:
      lVar2 = (**(code **)(*unaff_RSI + 0x3a0))();
      cVar1 = (**(code **)(*unaff_RSI + 0x720))();
      switch(cVar1 == '\0') {
      case true:
        switch(lVar2 == 0) {
        case false:
          (**(code **)(*unaff_RSI + 0x68))();
          break;
        case true:
          FUN_190dd72e0();
          cVar1 = (**(code **)(*unaff_RSI + 0x720))();
          switch(cVar1 == '\0') {
          case true:
            (**(code **)(*unaff_RSI + 0x70))();
          }
        }
      }
    }
  }
code_r0x00018ae64140:
  return;
}



// ===== Lsixtwo/fF; aTa (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object; (handler @ image 18ae69c10, runtime 6ffff28c9c10) =====
/* decompile failed: 
Low-level Error: Cannot properly adjust input varnodes */

// ===== Lsixtwo/fF; aTb (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ae6ab00, runtime 6ffff28cab00) =====
/* decompile failed: 
Low-level Error: Cannot properly adjust input varnodes */

// ===== Lsixtwo/fF; aTc (IJ)I (handler @ image 18ae6d5c0, runtime 6ffff28cd5c0) =====
/* decompile failed: Exception while decompiling 18ae6d5c0: process: timeout
 */

// ===== Lsixtwo/fF; aTd (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I (handler @ image 18ae14780, runtime 6ffff2874780) =====
/* decompile failed: Exception while decompiling 18ae14780: process: timeout
 */

// ===== Lsixtwo/fF; aTe (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; (handler @ image 18ae15790, runtime 6ffff2875790) =====
/* exception: no function */

// ===== Lsixtwo/fF; _a8e2baaa9a1887663570348d5ce6a137 ()V (handler @ image 18ae184a0, runtime 6ffff28784a0) =====
/* decompile failed: Exception while decompiling 18ae184a0: process: timeout
 */

