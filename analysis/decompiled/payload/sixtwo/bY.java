package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1799;
import net.minecraft.class_241;
import net.minecraft.class_9779;

public class bY extends cp {
   private static final float WCYGX = 0.8F;
   private static final float AzaIL = 12.8F;
   private static final long FwqDO = gb.aYR(2925985723345337069L, -3629615129369220686L, MethodHandles.lookup().lookupClass()).a(269555676370922L);
   private static final long[] MujRV;
   private static final Integer[] VtGWK;
   private static final Map kIeWJ = new HashMap(13);

   public bY() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bY.FwqDO J
      // 03: ldc2_w 60376075821085
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/bX.Ov ()Z
      // 0b: aload 0
      // 0c: sipush 3968
      // 0f: ldc2_w 6533787948341599840
      // 12: lload 1
      // 13: lxor
      // 14: invokedynamic u (IJ)I bsm=sixtwo/bY.OF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 19: newarray 10
      // 1b: dup
      // 1c: bipush 0
      // 1d: sipush 3390
      // 20: ldc2_w 7813540886787988701
      // 23: lload 1
      // 24: lxor
      // 25: invokedynamic u (IJ)I bsm=sixtwo/bY.OF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 2a: iastore
      // 2b: dup
      // 2c: bipush 1
      // 2d: sipush 24795
      // 30: ldc2_w 6897439668628746553
      // 33: lload 1
      // 34: lxor
      // 35: invokedynamic u (IJ)I bsm=sixtwo/bY.OF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3a: iastore
      // 3b: dup
      // 3c: bipush 2
      // 3d: sipush 8307
      // 40: ldc2_w 7450929093915914644
      // 43: lload 1
      // 44: lxor
      // 45: invokedynamic u (IJ)I bsm=sixtwo/bY.OF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 4a: iastore
      // 4b: dup
      // 4c: bipush 3
      // 4d: sipush 5724
      // 50: ldc2_w 8642667504657205177
      // 53: lload 1
      // 54: lxor
      // 55: invokedynamic u (IJ)I bsm=sixtwo/bY.OF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 5a: iastore
      // 5b: dup
      // 5c: bipush 4
      // 5d: sipush 12419
      // 60: ldc2_w 5875227218961277287
      // 63: lload 1
      // 64: lxor
      // 65: invokedynamic u (IJ)I bsm=sixtwo/bY.OF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 6a: iastore
      // 6b: dup
      // 6c: bipush 5
      // 6d: sipush 30012
      // 70: ldc2_w 4155359857385563354
      // 73: lload 1
      // 74: lxor
      // 75: invokedynamic u (IJ)I bsm=sixtwo/bY.OF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 7a: iastore
      // 7b: getstatic sixtwo/lf.OxOQo Lsixtwo/lf;
      // 7e: invokespecial sixtwo/cp.<init> ([ILsixtwo/lf;)V
      // 81: istore 3
      // 82: invokestatic sixtwo/iS.bwL ()Ljava/lang/String;
      // 85: ifnonnull 9f
      // 88: iload 3
      // 89: ifeq 9b
      // 8c: goto 93
      // 8f: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 92: athrow
      // 93: bipush 0
      // 94: goto 9c
      // 97: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9a: athrow
      // 9b: bipush 1
      // 9c: invokestatic sixtwo/bX.Ot (Z)V
      // 9f: return
   }

   static {
      long var0 = FwqDO ^ 110017288961692L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[9];
      int var5 = 0;
      String var6 = "M\u0092\u0010+\n\u0005úõZLb ìÛJ×\u0081è±%¬\u009fÅÖ Æ¢¥1l±\u0096\u0010\u0080ØÎxª¤\u0007®dÈ{ÈñÁ:\u0081T\u0096\u008e\n#7\u000b";
      int var7 = "M\u0092\u0010+\n\u0005úõZLb ìÛJ×\u0081è±%¬\u009fÅÖ Æ¢¥1l±\u0096\u0010\u0080ØÎxª¤\u0007®dÈ{ÈñÁ:\u0081T\u0096\u008e\n#7\u000b".length();
      byte var4 = 0;

      label23:
      while (true) {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         long[] var14 = var8;
         var10001 = var5++;
         long var17 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
         byte var19 = -1;

         while (true) {
            long var10 = var17;
            byte[] var12 = var2.doFinal(
               new byte[]{
                  (byte)(var10 >>> 56),
                  (byte)(var10 >>> 48),
                  (byte)(var10 >>> 40),
                  (byte)(var10 >>> 32),
                  (byte)(var10 >>> 24),
                  (byte)(var10 >>> 16),
                  (byte)(var10 >>> 8),
                  (byte)var10
               }
            );
            long var21 = (var12[0] & 255L) << 56
               | (var12[1] & 255L) << 48
               | (var12[2] & 255L) << 40
               | (var12[3] & 255L) << 32
               | (var12[4] & 255L) << 24
               | (var12[5] & 255L) << 16
               | (var12[6] & 255L) << 8
               | var12[7] & 255L;
            switch (var19) {
               case 0:
                  var14[var10001] = var21;
                  if (var4 >= var7) {
                     MujRV = var8;
                     VtGWK = new Integer[9];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "ä£â\u00ad\u008e\u0081T\u0019F]\u0099\u0088«\u0019£\u0019";
                  var7 = "ä£â\u00ad\u008e\u0081T\u0019F]\u0099\u0088«\u0019£\u0019".length();
                  var4 = 0;
            }

            byte var16 = var4;
            var4 += 8;
            var9 = var6.substring(var16, var4).getBytes("ISO-8859-1");
            var14 = var8;
            var10001 = var5++;
            var17 = (var9[0] & 255L) << 56
               | (var9[1] & 255L) << 48
               | (var9[2] & 255L) << 40
               | (var9[3] & 255L) << 32
               | (var9[4] & 255L) << 24
               | (var9[5] & 255L) << 16
               | (var9[6] & 255L) << 8
               | var9[7] & 255L;
            var19 = 0;
         }
      }
   }

   @Override
   protected void NV(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/bY.FwqDO J
      // 003: ldc2_w 134806315495566
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/bX.Ov ()Z
      // 00b: istore 4
      // 00d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 010: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 013: ifnonnull 01b
      // 016: return
      // 017: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01a: athrow
      // 01b: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 01e: astore 5
      // 020: invokestatic sixtwo/fX.aYe ()Z
      // 023: istore 6
      // 025: aload 0
      // 026: getfield sixtwo/bY.ormBS Lsixtwo/rk;
      // 029: invokevirtual sixtwo/rk.dhj ()F
      // 02c: fstore 7
      // 02e: aload 0
      // 02f: getfield sixtwo/bY.gILqY Lsixtwo/rk;
      // 032: invokevirtual sixtwo/rk.dhj ()F
      // 035: fstore 8
      // 037: ldc 7.0
      // 039: fstore 9
      // 03b: aload 5
      // 03d: invokevirtual sixtwo/ii.bjd ()Lsixtwo/mG;
      // 040: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 043: ldc 0.25
      // 045: invokevirtual sixtwo/mG.coc (Lsixtwo/mG;F)Lsixtwo/mG;
      // 048: fload 7
      // 04a: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 04d: astore 10
      // 04f: aload 5
      // 051: invokevirtual sixtwo/ii.bjf ()Lsixtwo/mG;
      // 054: ldc 0.25
      // 056: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 059: astore 11
      // 05b: aload 1
      // 05c: aload 0
      // 05d: getfield sixtwo/bY.toIeR F
      // 060: aload 0
      // 061: getfield sixtwo/bY.QWaAn F
      // 064: aload 0
      // 065: getfield sixtwo/bY.jTsqG F
      // 068: aload 0
      // 069: getfield sixtwo/bY.Xtjvx F
      // 06c: fload 7
      // 06e: fload 8
      // 070: invokevirtual sixtwo/lC.ccU (FFFFFF)V
      // 073: aload 0
      // 074: getfield sixtwo/bY.QWaAn F
      // 077: ldc 12.8
      // 079: aload 0
      // 07a: getfield sixtwo/bY.Xtjvx F
      // 07d: invokestatic sixtwo/jf.bAH (FF)F
      // 080: fadd
      // 081: fstore 12
      // 083: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 086: invokevirtual net/minecraft/class_310.method_61966 ()Lnet/minecraft/class_9779;
      // 089: astore 13
      // 08b: bipush 0
      // 08c: istore 14
      // 08e: iload 14
      // 090: sipush 18475
      // 093: ldc2_w 1045260118094956884
      // 096: lload 2
      // 097: lxor
      // 098: invokedynamic u (IJ)I bsm=sixtwo/bY.OF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09d: if_icmpge 1cc
      // 0a0: aload 0
      // 0a1: getfield sixtwo/bY.toIeR F
      // 0a4: iload 14
      // 0a6: i2f
      // 0a7: ldc 20.0
      // 0a9: fmul
      // 0aa: fadd
      // 0ab: fstore 15
      // 0ad: fload 15
      // 0af: ldc 12.8
      // 0b1: ldc 21.0
      // 0b3: invokestatic sixtwo/jf.bAH (FF)F
      // 0b6: fadd
      // 0b7: fstore 16
      // 0b9: iload 14
      // 0bb: iload 4
      // 0bd: ifne 189
      // 0c0: invokestatic sixtwo/rD.dlZ ()Lsixtwo/qJ;
      // 0c3: invokevirtual sixtwo/qJ.dbr ()I
      // 0c6: if_icmpne 162
      // 0c9: goto 0d0
      // 0cc: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cf: athrow
      // 0d0: iload 14
      // 0d2: iload 4
      // 0d4: ifne 116
      // 0d7: goto 0de
      // 0da: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0dd: athrow
      // 0de: ifne 10d
      // 0e1: goto 0e8
      // 0e4: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e7: athrow
      // 0e8: aload 1
      // 0e9: fload 15
      // 0eb: aload 0
      // 0ec: getfield sixtwo/bY.QWaAn F
      // 0ef: ldc 21.0
      // 0f1: ldc 22.0
      // 0f3: ldc 7.0
      // 0f5: fload 9
      // 0f7: fload 9
      // 0f9: invokestatic sixtwo/ld.left (FF)Lsixtwo/ld;
      // 0fc: aload 11
      // 0fe: invokevirtual sixtwo/lC.cdm (FFFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 101: iload 4
      // 103: ifeq 162
      // 106: goto 10d
      // 109: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 10c: athrow
      // 10d: iload 14
      // 10f: goto 116
      // 112: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 115: athrow
      // 116: sipush 10835
      // 119: ldc2_w 8931391143366470433
      // 11c: lload 2
      // 11d: lxor
      // 11e: invokedynamic u (IJ)I bsm=sixtwo/bY.OF (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 123: if_icmpne 14b
      // 126: aload 1
      // 127: fload 15
      // 129: aload 0
      // 12a: getfield sixtwo/bY.QWaAn F
      // 12d: ldc 22.0
      // 12f: ldc 22.0
      // 131: ldc 7.0
      // 133: fload 9
      // 135: fload 9
      // 137: invokestatic sixtwo/ld.right (FF)Lsixtwo/ld;
      // 13a: aload 11
      // 13c: invokevirtual sixtwo/lC.cdm (FFFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 13f: iload 4
      // 141: ifeq 162
      // 144: goto 14b
      // 147: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14a: athrow
      // 14b: aload 1
      // 14c: fload 15
      // 14e: aload 0
      // 14f: getfield sixtwo/bY.QWaAn F
      // 152: ldc 21.0
      // 154: ldc 22.0
      // 156: aload 11
      // 158: invokevirtual sixtwo/lC.cdi (FFFFLsixtwo/mG;)V
      // 15b: goto 162
      // 15e: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 161: athrow
      // 162: aload 0
      // 163: aload 1
      // 164: fload 16
      // 166: fload 12
      // 168: aload 13
      // 16a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 16d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 170: invokevirtual net/minecraft/class_746.method_31548 ()Lnet/minecraft/class_1661;
      // 173: iload 14
      // 175: invokevirtual net/minecraft/class_1661.method_5438 (I)Lnet/minecraft/class_1799;
      // 178: invokevirtual sixtwo/bY.OB (Lsixtwo/lC;FFLnet/minecraft/class_9779;Lnet/minecraft/class_1799;)V
      // 17b: iload 4
      // 17d: ifne 1c7
      // 180: iload 14
      // 182: goto 189
      // 185: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 188: athrow
      // 189: ifeq 1c4
      // 18c: iload 6
      // 18e: ifne 1c4
      // 191: goto 198
      // 194: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 197: athrow
      // 198: aload 0
      // 199: getfield sixtwo/bY.toIeR F
      // 19c: iload 14
      // 19e: i2f
      // 19f: ldc 20.0
      // 1a1: fmul
      // 1a2: fadd
      // 1a3: fstore 17
      // 1a5: aload 1
      // 1a6: fload 17
      // 1a8: aload 0
      // 1a9: getfield sixtwo/bY.QWaAn F
      // 1ac: fconst_2
      // 1ad: fadd
      // 1ae: fconst_1
      // 1af: aload 0
      // 1b0: getfield sixtwo/bY.Xtjvx F
      // 1b3: ldc_w 4.0
      // 1b6: fsub
      // 1b7: ldc 0.25
      // 1b9: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 1bc: aload 10
      // 1be: ldc_w 0.5
      // 1c1: invokevirtual sixtwo/lC.cdh (FFFFLsixtwo/ld;Lsixtwo/mG;F)V
      // 1c4: iinc 14 1
      // 1c7: iload 4
      // 1c9: ifeq 08e
      // 1cc: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1cf: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1d2: invokevirtual net/minecraft/class_746.method_6079 ()Lnet/minecraft/class_1799;
      // 1d5: astore 14
      // 1d7: iload 4
      // 1d9: ifne 256
      // 1dc: aload 14
      // 1de: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 1e1: ifne 253
      // 1e4: goto 1eb
      // 1e7: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1ea: athrow
      // 1eb: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1ee: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1f1: invokevirtual net/minecraft/class_746.method_6068 ()Lnet/minecraft/class_1306;
      // 1f4: invokevirtual net/minecraft/class_1306.method_5928 ()Lnet/minecraft/class_1306;
      // 1f7: astore 17
      // 1f9: ldc 22.0
      // 1fb: fstore 18
      // 1fd: aload 17
      // 1ff: getstatic net/minecraft/class_1306.field_6182 Lnet/minecraft/class_1306;
      // 202: if_acmpne 217
      // 205: aload 0
      // 206: getfield sixtwo/bY.toIeR F
      // 209: fload 18
      // 20b: fsub
      // 20c: ldc_w 8.0
      // 20f: fsub
      // 210: fstore 15
      // 212: iload 4
      // 214: ifeq 226
      // 217: aload 0
      // 218: getfield sixtwo/bY.toIeR F
      // 21b: aload 0
      // 21c: getfield sixtwo/bY.jTsqG F
      // 21f: fadd
      // 220: ldc_w 8.0
      // 223: fadd
      // 224: fstore 15
      // 226: fload 15
      // 228: ldc 12.8
      // 22a: fload 18
      // 22c: invokestatic sixtwo/jf.bAH (FF)F
      // 22f: fadd
      // 230: fstore 16
      // 232: aload 1
      // 233: fload 15
      // 235: aload 0
      // 236: getfield sixtwo/bY.QWaAn F
      // 239: fload 18
      // 23b: aload 0
      // 23c: getfield sixtwo/bY.Xtjvx F
      // 23f: fload 7
      // 241: fload 8
      // 243: invokevirtual sixtwo/lC.ccU (FFFFFF)V
      // 246: aload 0
      // 247: aload 1
      // 248: fload 16
      // 24a: fload 12
      // 24c: aload 13
      // 24e: aload 14
      // 250: invokevirtual sixtwo/bY.OB (Lsixtwo/lC;FFLnet/minecraft/class_9779;Lnet/minecraft/class_1799;)V
      // 253: invokestatic sixtwo/ju.bFV ()V
      // 256: return
   }

   @Override
   public void LX(lC var1) {
      this.jTsqG = 182.0F;
      this.Xtjvx = 22.0F;
      super.LX(var1);
   }

   private static CallSite OF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("OE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/bY" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static int OD(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 26787;
      if (VtGWK[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = MujRV[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])kIeWJ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               kIeWJ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/bY", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         VtGWK[var3] = var15;
      }

      return VtGWK[var3];
   }

   private void OB(lC param1, float param2, float param3, class_9779 param4, class_1799 param5) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/bY.FwqDO J
      // 03: ldc2_w 55978366313484
      // 06: lxor
      // 07: lstore 6
      // 09: invokestatic sixtwo/bX.Ou ()Z
      // 0c: istore 8
      // 0e: aload 5
      // 10: invokevirtual net/minecraft/class_1799.method_7960 ()Z
      // 13: iload 8
      // 15: ifeq 2e
      // 18: ifne cf
      // 1b: goto 22
      // 1e: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: aload 5
      // 24: invokevirtual net/minecraft/class_1799.method_7965 ()I
      // 27: goto 2e
      // 2a: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: i2f
      // 2f: aload 4
      // 31: bipush 0
      // 32: invokeinterface net/minecraft/class_9779.method_60637 (Z)F 2
      // 37: fsub
      // 38: fstore 9
      // 3a: fload 9
      // 3c: fconst_0
      // 3d: fcmpl
      // 3e: iload 8
      // 40: ifeq ad
      // 43: ifle 89
      // 46: goto 4d
      // 49: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4c: athrow
      // 4d: fconst_1
      // 4e: fload 9
      // 50: ldc_w 5.0
      // 53: fdiv
      // 54: fadd
      // 55: fstore 10
      // 57: fload 2
      // 58: ldc_w 6.4
      // 5b: fadd
      // 5c: fstore 11
      // 5e: fload 3
      // 5f: ldc_w 6.4
      // 62: fadd
      // 63: fstore 12
      // 65: aload 1
      // 66: invokevirtual sixtwo/lC.ceV ()V
      // 69: aload 1
      // 6a: fload 11
      // 6c: fload 12
      // 6e: invokevirtual sixtwo/lC.ceX (FF)V
      // 71: aload 1
      // 72: fconst_1
      // 73: fload 10
      // 75: fdiv
      // 76: fload 10
      // 78: fconst_1
      // 79: fadd
      // 7a: fconst_2
      // 7b: fdiv
      // 7c: invokevirtual sixtwo/lC.ceY (FF)V
      // 7f: aload 1
      // 80: fload 11
      // 82: fneg
      // 83: fload 12
      // 85: fneg
      // 86: invokevirtual sixtwo/lC.ceX (FF)V
      // 89: aload 1
      // 8a: aload 5
      // 8c: fload 2
      // 8d: fload 3
      // 8e: ldc 0.8
      // 90: invokevirtual sixtwo/lC.cea (Lnet/minecraft/class_1799;FFF)Lsixtwo/jv;
      // 93: invokevirtual sixtwo/jv.bGw ()Lsixtwo/jy;
      // 96: checkcast sixtwo/jv
      // 99: invokevirtual sixtwo/jv.bGv ()Lsixtwo/jy;
      // 9c: iload 8
      // 9e: ifeq ce
      // a1: pop
      // a2: fload 9
      // a4: fconst_0
      // a5: fcmpl
      // a6: goto ad
      // a9: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ac: athrow
      // ad: ifle bb
      // b0: aload 1
      // b1: invokevirtual sixtwo/lC.ceW ()V
      // b4: goto bb
      // b7: invokestatic sixtwo/bY.OC (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ba: athrow
      // bb: aload 1
      // bc: aload 5
      // be: fload 2
      // bf: fload 3
      // c0: ldc 0.8
      // c2: invokevirtual sixtwo/lC.ceb (Lnet/minecraft/class_1799;FFF)Lsixtwo/jw;
      // c5: invokevirtual sixtwo/jw.bGw ()Lsixtwo/jy;
      // c8: checkcast sixtwo/jw
      // cb: invokevirtual sixtwo/jw.bGv ()Lsixtwo/jy;
      // ce: pop
      // cf: return
   }

   private static int OE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = OD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @Override
   protected void Ol() {
      long var1 = FwqDO ^ 92717206852525L;
      if (this.mZZzJ.WF()) {
         class_241 var3 = rm.dip();
         this.toIeR = jf.bAH(this.RU(), var3.field_1343);
         this.QWaAn = var3.field_1342 - this.RV();
      }
   }

   private static MatchException OC(MatchException var0) {
      return var0;
   }

   @Override
   public boolean Om() {
      long var1 = FwqDO ^ 133138014287268L;

      try {
         if (rD.dlmvG.field_1687 != null) {
            return true;
         }
      } catch (MatchException var3) {
         throw OC(var3);
      }

      return false;
   }
}
