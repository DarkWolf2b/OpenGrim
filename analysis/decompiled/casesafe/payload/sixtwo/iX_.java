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
import net.minecraft.class_1297;
import net.minecraft.class_1657;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_304;

public class iX {
   private static mF jomCs;
   public static final class_304[] Ergzg;
   public static final class_304[] HpSlL;
   private static final long UWCYb = gb.aYR(6647284026903975892L, -9119464849414617501L, MethodHandles.lookup().lookupClass()).a(244743953533058L);
   private static final long[] uATfM;
   private static final Integer[] arYfW;
   private static final Map gTDLH = new HashMap(13);

   static {
      long var11 = UWCYb ^ 5648240925718L;
      Cipher var0;
      Cipher var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[6];
      int var3 = 0;
      String var4 = "\u009b├âjq┬Á┬┤├ć┬║├Ę├Ł├Ě\u0091Z├ó^w\u0011┬Ż\u0091w&\r\u0089>├║\u0003├Ü├é@g├ó├Ć";
      int var5 = "\u009b├âjq┬Á┬┤├ć┬║├Ę├Ł├Ě\u0091Z├ó^w\u0011┬Ż\u0091w&\r\u0089>├║\u0003├Ü├é@g├ó├Ć".length();
      byte var2 = 0;

      label23:
      while (true) {
         int var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var14 = var6;
         var10001 = var3++;
         long var18 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var20 = -1;

         while (true) {
            long var8 = var18;
            byte[] var10 = var0.doFinal(
               new byte[]{
                  (byte)(var8 >>> 56),
                  (byte)(var8 >>> 48),
                  (byte)(var8 >>> 40),
                  (byte)(var8 >>> 32),
                  (byte)(var8 >>> 24),
                  (byte)(var8 >>> 16),
                  (byte)(var8 >>> 8),
                  (byte)var8
               }
            );
            long var22 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var20) {
               case 0:
                  var14[var10001] = var22;
                  if (var2 >= var5) {
                     uATfM = var6;
                     arYfW = new Integer[6];
                     jomCs = new mF(false, false, false, false);
                     Ergzg = new class_304[]{
                        rD.dlmvG.field_1690.field_1894, rD.dlmvG.field_1690.field_1881, rD.dlmvG.field_1690.field_1849, rD.dlmvG.field_1690.field_1913
                     };
                     class_304[] var15 = new class_304[bxW<"f">(28084, 756953401922601219L ^ var11)];
                     var15[0] = rD.dlmvG.field_1690.field_1894;
                     var15[1] = rD.dlmvG.field_1690.field_1881;
                     var15[2] = rD.dlmvG.field_1690.field_1913;
                     var15[3] = rD.dlmvG.field_1690.field_1849;
                     var15[4] = rD.dlmvG.field_1690.field_1903;
                     var15[5] = rD.dlmvG.field_1690.field_1832;
                     var15[bxW<"f">(9070, 2424658367421812698L ^ var11)] = rD.dlmvG.field_1690.field_1867;
                     HpSlL = var15;
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var22;
                  if (var2 < var5) {
                     continue label23;
                  }

                  var4 = "!├¬┬ó\u0000<+G┬Á\u0011├ę├ł\u0004┬á\fV┬ú";
                  var5 = "!├¬┬ó\u0000<+G┬Á\u0011├ę├ł\u0004┬á\fV┬ú".length();
                  var2 = 0;
            }

            byte var17 = var2;
            var2 += 8;
            var7 = var4.substring(var17, var2).getBytes("ISO-8859-1");
            var14 = var6;
            var10001 = var3++;
            var18 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var20 = 0;
         }
      }
   }

   public static void bxF(mF param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/iX.UWCYb J
      // 03: ldc2_w 23746578937913
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 2d
      // 11: ifnonnull 30
      // 14: goto 1b
      // 17: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: new sixtwo/mF
      // 1e: dup
      // 1f: bipush 0
      // 20: bipush 0
      // 21: bipush 0
      // 22: bipush 0
      // 23: invokespecial sixtwo/mF.<init> (ZZZZ)V
      // 26: goto 2d
      // 29: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: goto 31
      // 30: aload 0
      // 31: putstatic sixtwo/iX.jomCs Lsixtwo/mF;
      // 34: return
   }

   public static double bxE() {
      class_243 var0 = rD.dlmvG.field_1724.method_18798();
      return Math.hypot(var0.field_1352, var0.field_1350);
   }

   public static boolean bxD(class_1297 var0) {
      long var1 = UWCYb ^ 71625229754359L;
      String[] var3 = jf.bBe();

      try {
         double var5;
         int var10000 = (var5 = var0.method_18798().method_1027() - 0.08) == 0.0 ? 0 : (var5 < 0.0 ? -1 : 1);
         if (var3 == null) {
            return (boolean)var10000;
         }

         if (var10000 >= 0) {
            return (boolean)1;
         }
      } catch (MatchException var4) {
         throw bxT(var4);
      }

      return (boolean)0;
   }

   public static boolean bxC() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/iX.UWCYb J
      // 03: ldc2_w 48556203921509
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 11: getfield net/minecraft/class_746.field_3913 Lnet/minecraft/class_744;
      // 14: invokevirtual net/minecraft/class_744.method_3128 ()Lnet/minecraft/class_241;
      // 17: astore 3
      // 18: astore 2
      // 19: aload 3
      // 1a: getfield net/minecraft/class_241.field_1343 F
      // 1d: fconst_0
      // 1e: fcmpl
      // 1f: aload 2
      // 20: ifnull 49
      // 23: ifne 48
      // 26: goto 2d
      // 29: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 3
      // 2e: getfield net/minecraft/class_241.field_1342 F
      // 31: fconst_0
      // 32: fcmpl
      // 33: aload 2
      // 34: ifnull 49
      // 37: goto 3e
      // 3a: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: ifeq 4c
      // 41: goto 48
      // 44: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 47: athrow
      // 48: bipush 1
      // 49: goto 4d
      // 4c: bipush 0
      // 4d: ireturn
   }

   private static MatchException bxT(MatchException var0) {
      return var0;
   }

   public static mF bxG() {
      return jomCs;
   }

   public static class_241 bxO(double param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/iX.UWCYb J
      // 003: ldc2_w 122557391465579
      // 006: lxor
      // 007: lstore 2
      // 008: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 00b: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 00e: getfield net/minecraft/class_746.field_3913 Lnet/minecraft/class_744;
      // 011: invokevirtual net/minecraft/class_744.method_3128 ()Lnet/minecraft/class_241;
      // 014: astore 5
      // 016: aload 5
      // 018: getfield net/minecraft/class_241.field_1342 F
      // 01b: f2d
      // 01c: dstore 6
      // 01e: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 021: aload 5
      // 023: getfield net/minecraft/class_241.field_1343 F
      // 026: f2d
      // 027: dstore 8
      // 029: invokestatic sixtwo/rD.dlX ()Lsixtwo/qL;
      // 02c: invokevirtual sixtwo/qL.dbC ()Lsixtwo/ov;
      // 02f: invokevirtual sixtwo/ov.cGI ()F
      // 032: fstore 10
      // 034: astore 4
      // 036: dload 6
      // 038: aload 4
      // 03a: ifnull 146
      // 03d: dconst_0
      // 03e: dcmpl
      // 03f: ifeq 139
      // 042: goto 049
      // 045: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 048: athrow
      // 049: dload 8
      // 04b: dconst_0
      // 04c: dcmpl
      // 04d: aload 4
      // 04f: ifnull 0b0
      // 052: goto 059
      // 055: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 058: athrow
      // 059: ifle 0a5
      // 05c: goto 063
      // 05f: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 062: athrow
      // 063: fload 10
      // 065: dload 6
      // 067: dconst_0
      // 068: dcmpl
      // 069: aload 4
      // 06b: ifnull 08c
      // 06e: goto 075
      // 071: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 074: athrow
      // 075: ifle 08f
      // 078: goto 07f
      // 07b: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 07e: athrow
      // 07f: sipush 26366
      // 082: ldc2_w 5290507197931747894
      // 085: lload 2
      // 086: lxor
      // 087: invokedynamic f (IJ)I bsm=sixtwo/iX.bxW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 08c: goto 09c
      // 08f: sipush 3313
      // 092: ldc2_w 3844900860821475388
      // 095: lload 2
      // 096: lxor
      // 097: invokedynamic f (IJ)I bsm=sixtwo/iX.bxW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09c: i2f
      // 09d: fadd
      // 09e: fstore 10
      // 0a0: aload 4
      // 0a2: ifnonnull 0fc
      // 0a5: dload 8
      // 0a7: dconst_0
      // 0a8: dcmpg
      // 0a9: goto 0b0
      // 0ac: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0af: athrow
      // 0b0: aload 4
      // 0b2: ifnull 103
      // 0b5: ifge 0fc
      // 0b8: goto 0bf
      // 0bb: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0be: athrow
      // 0bf: fload 10
      // 0c1: dload 6
      // 0c3: dconst_0
      // 0c4: dcmpl
      // 0c5: aload 4
      // 0c7: ifnull 0e8
      // 0ca: goto 0d1
      // 0cd: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0d0: athrow
      // 0d1: ifle 0eb
      // 0d4: goto 0db
      // 0d7: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0da: athrow
      // 0db: sipush 14791
      // 0de: ldc2_w 2611731505434764556
      // 0e1: lload 2
      // 0e2: lxor
      // 0e3: invokedynamic f (IJ)I bsm=sixtwo/iX.bxW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0e8: goto 0f8
      // 0eb: sipush 21932
      // 0ee: ldc2_w 920338925348800864
      // 0f1: lload 2
      // 0f2: lxor
      // 0f3: invokedynamic f (IJ)I bsm=sixtwo/iX.bxW (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 0f8: i2f
      // 0f9: fadd
      // 0fa: fstore 10
      // 0fc: dconst_0
      // 0fd: dstore 8
      // 0ff: dload 6
      // 101: dconst_0
      // 102: dcmpl
      // 103: aload 4
      // 105: ifnull 131
      // 108: ifle 11a
      // 10b: goto 112
      // 10e: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 111: athrow
      // 112: dconst_1
      // 113: dstore 6
      // 115: aload 4
      // 117: ifnonnull 139
      // 11a: dload 6
      // 11c: aload 4
      // 11e: ifnull 146
      // 121: goto 128
      // 124: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 127: athrow
      // 128: dconst_0
      // 129: dcmpg
      // 12a: goto 131
      // 12d: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 130: athrow
      // 131: ifge 139
      // 134: ldc2_w -1.0
      // 137: dstore 6
      // 139: fload 10
      // 13b: ldc_w 90.0
      // 13e: fadd
      // 13f: f2d
      // 140: invokestatic java/lang/Math.toRadians (D)D
      // 143: invokestatic java/lang/Math.sin (D)D
      // 146: dstore 11
      // 148: fload 10
      // 14a: ldc_w 90.0
      // 14d: fadd
      // 14e: f2d
      // 14f: invokestatic java/lang/Math.toRadians (D)D
      // 152: invokestatic java/lang/Math.cos (D)D
      // 155: dstore 13
      // 157: dload 6
      // 159: dload 0
      // 15a: dmul
      // 15b: dload 13
      // 15d: dmul
      // 15e: dload 8
      // 160: dload 0
      // 161: dmul
      // 162: dload 11
      // 164: dmul
      // 165: dadd
      // 166: dstore 15
      // 168: dload 6
      // 16a: dload 0
      // 16b: dmul
      // 16c: dload 11
      // 16e: dmul
      // 16f: dload 8
      // 171: dload 0
      // 172: dmul
      // 173: dload 13
      // 175: dmul
      // 176: dsub
      // 177: dstore 17
      // 179: new net/minecraft/class_241
      // 17c: dup
      // 17d: dload 15
      // 17f: d2f
      // 180: dload 17
      // 182: d2f
      // 183: invokespecial net/minecraft/class_241.<init> (FF)V
      // 186: areturn
   }

   public static boolean bxH(mF param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/iX.UWCYb J
      // 03: ldc2_w 56368287134191
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: aload 3
      // 0e: ifnull 1c
      // 11: ifnull 54
      // 14: goto 1b
      // 17: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a: athrow
      // 1b: aload 0
      // 1c: invokevirtual sixtwo/mF.cnH ()Z
      // 1f: aload 0
      // 20: invokevirtual sixtwo/mF.cnI ()Z
      // 23: ixor
      // 24: aload 3
      // 25: ifnull 51
      // 28: ifne 50
      // 2b: goto 32
      // 2e: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 31: athrow
      // 32: aload 0
      // 33: invokevirtual sixtwo/mF.cnJ ()Z
      // 36: aload 0
      // 37: invokevirtual sixtwo/mF.cnK ()Z
      // 3a: ixor
      // 3b: aload 3
      // 3c: ifnull 51
      // 3f: goto 46
      // 42: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 45: athrow
      // 46: ifeq 54
      // 49: goto 50
      // 4c: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4f: athrow
      // 50: bipush 1
      // 51: goto 55
      // 54: bipush 0
      // 55: ireturn
   }

   public static float bxS() {
      double var0 = Math.sqrt(
         Math.pow(rD.dlmvG.field_1724.method_23317() - rD.dlmvG.field_1724.field_6038, 2.0)
            + Math.pow(rD.dlmvG.field_1724.method_23318() - rD.dlmvG.field_1724.field_5971, 2.0)
            + Math.pow(rD.dlmvG.field_1724.method_23321() - rD.dlmvG.field_1724.field_5989, 2.0)
      );
      float var2 = (float)(var0 * 20.0);
      return Math.round(var2 * 10.0F) / 10.0F;
   }

   public static class_243 bxJ(class_243 var0, double var1) {
      return bxK(var0, var1, 1.0);
   }

   public static class_243 bxI(class_243 var0) {
      return bxJ(var0, Math.hypot(var0.field_1352, var0.field_1350));
   }

   private static int bxV(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bxU(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite bxW(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bxV".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/iX" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static boolean bxM(class_1657 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/iX.UWCYb J
      // 03: ldc2_w 35150491457200
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: getstatic net/minecraft/class_1294.field_5919 Lnet/minecraft/class_6880;
      // 10: invokevirtual net/minecraft/class_1657.method_6059 (Lnet/minecraft/class_6880;)Z
      // 13: aload 3
      // 14: ifnull be
      // 17: ifne bd
      // 1a: goto 21
      // 1d: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 20: athrow
      // 21: aload 0
      // 22: getstatic net/minecraft/class_1294.field_5902 Lnet/minecraft/class_6880;
      // 25: invokevirtual net/minecraft/class_1657.method_6059 (Lnet/minecraft/class_6880;)Z
      // 28: aload 3
      // 29: ifnull be
      // 2c: goto 33
      // 2f: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: ifne bd
      // 36: goto 3d
      // 39: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 0
      // 3e: invokestatic sixtwo/jg.bBs (Lnet/minecraft/class_1309;)Z
      // 41: aload 3
      // 42: ifnull be
      // 45: goto 4c
      // 48: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: ifne bd
      // 4f: goto 56
      // 52: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 55: athrow
      // 56: aload 0
      // 57: invokevirtual net/minecraft/class_1657.method_5869 ()Z
      // 5a: aload 3
      // 5b: ifnull be
      // 5e: goto 65
      // 61: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: ifne bd
      // 68: goto 6f
      // 6b: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: aload 0
      // 70: invokevirtual net/minecraft/class_1657.method_5771 ()Z
      // 73: aload 3
      // 74: ifnull be
      // 77: goto 7e
      // 7a: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7d: athrow
      // 7e: ifne bd
      // 81: goto 88
      // 84: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 87: athrow
      // 88: aload 0
      // 89: invokevirtual net/minecraft/class_1657.method_6101 ()Z
      // 8c: aload 3
      // 8d: ifnull be
      // 90: goto 97
      // 93: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 96: athrow
      // 97: ifne bd
      // 9a: goto a1
      // 9d: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a0: athrow
      // a1: aload 0
      // a2: invokevirtual net/minecraft/class_1657.method_31549 ()Lnet/minecraft/class_1656;
      // a5: getfield net/minecraft/class_1656.field_7479 Z
      // a8: aload 3
      // a9: ifnull be
      // ac: goto b3
      // af: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b2: athrow
      // b3: ifeq c1
      // b6: goto bd
      // b9: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // bc: athrow
      // bd: bipush 1
      // be: goto c2
      // c1: bipush 0
      // c2: ireturn
   }

   public static float bxQ() {
      return bxR(jomCs);
   }

   public static class_243 bxL(class_243 var0, double var1, double var3, mF var5) {
      long var6 = UWCYb ^ 134206979535886L;

      try {
         if (!bxH(var5)) {
            return new class_243(0.0, var0.field_1351, 0.0);
         }
      } catch (MatchException var22) {
         throw bxT(var22);
      }

      double var8 = 1.0 - var3;
      double var10 = var0.field_1352 * var8;
      double var12 = var0.field_1350 * var8;
      double var14 = var1 * var3;
      double var16 = Math.toRadians(bxR(var5));
      double var18 = var10 - Math.sin(var16) * var14;
      double var20 = var12 + Math.cos(var16) * var14;
      return new class_243(var18, var0.field_1351, var20);
   }

   public static float bxR(mF param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/iX.UWCYb J
      // 03: ldc2_w 30406572095719
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/jf.bBe ()[Ljava/lang/String;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 11: invokevirtual net/minecraft/class_746.method_36454 ()F
      // 14: fstore 4
      // 16: astore 3
      // 17: aload 0
      // 18: invokevirtual sixtwo/mF.cnI ()Z
      // 1b: aload 3
      // 1c: ifnull 5e
      // 1f: ifeq 53
      // 22: goto 29
      // 25: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aload 0
      // 2a: invokevirtual sixtwo/mF.cnH ()Z
      // 2d: aload 3
      // 2e: ifnull 5e
      // 31: goto 38
      // 34: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 37: athrow
      // 38: ifne 53
      // 3b: goto 42
      // 3e: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 41: athrow
      // 42: fload 4
      // 44: ldc_w 180.0
      // 47: fadd
      // 48: fstore 4
      // 4a: ldc_w -0.5
      // 4d: fstore 5
      // 4f: aload 3
      // 50: ifnonnull 86
      // 53: aload 0
      // 54: invokevirtual sixtwo/mF.cnH ()Z
      // 57: goto 5e
      // 5a: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5d: athrow
      // 5e: aload 3
      // 5f: ifnull 77
      // 62: ifeq 83
      // 65: goto 6c
      // 68: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: aload 0
      // 6d: invokevirtual sixtwo/mF.cnI ()Z
      // 70: goto 77
      // 73: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: ifne 83
      // 7a: ldc_w 0.5
      // 7d: fstore 5
      // 7f: aload 3
      // 80: ifnonnull 86
      // 83: fconst_1
      // 84: fstore 5
      // 86: aload 0
      // 87: invokevirtual sixtwo/mF.cnJ ()Z
      // 8a: aload 3
      // 8b: ifnull c0
      // 8e: ifeq bc
      // 91: goto 98
      // 94: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 97: athrow
      // 98: aload 0
      // 99: invokevirtual sixtwo/mF.cnK ()Z
      // 9c: aload 3
      // 9d: ifnull c0
      // a0: goto a7
      // a3: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a6: athrow
      // a7: ifne bc
      // aa: goto b1
      // ad: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b0: athrow
      // b1: fload 4
      // b3: ldc_w 90.0
      // b6: fload 5
      // b8: fmul
      // b9: fsub
      // ba: fstore 4
      // bc: aload 0
      // bd: invokevirtual sixtwo/mF.cnK ()Z
      // c0: aload 3
      // c1: ifnull d9
      // c4: ifeq e7
      // c7: goto ce
      // ca: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // cd: athrow
      // ce: aload 0
      // cf: invokevirtual sixtwo/mF.cnJ ()Z
      // d2: goto d9
      // d5: invokestatic sixtwo/iX.bxT (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // d8: athrow
      // d9: ifne e7
      // dc: fload 4
      // de: ldc_w 90.0
      // e1: fload 5
      // e3: fmul
      // e4: fadd
      // e5: fstore 4
      // e7: fload 4
      // e9: freturn
   }

   public static class_243 bxK(class_243 var0, double var1, double var3) {
      return bxL(var0, var1, var3, jomCs);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   public static double bxP(boolean var0) {
      long var1 = UWCYb ^ 7187022147685L;
      String[] var10000 = jf.bBe();
      float var4 = rD.dlX().dbC().cGI();
      String[] var3 = var10000;

      label109: {
         label108: {
            try {
               var14 = rD.dlmvG.field_1724.field_6250;
               if (var3 == null) {
                  break label109;
               }

               if (!(rD.dlmvG.field_1724.field_6250 < 0.0F)) {
                  break label108;
               }
            } catch (MatchException var13) {
               throw bxT(var13);
            }

            var4 += 180.0F;
         }

         var14 = 1.0F;
      }

      float var5 = var14;

      label99: {
         label113: {
            label97: {
               label114: {
                  try {
                     float var17;
                     var15 = (var17 = rD.dlmvG.field_1724.field_6250 - 0.0F) == 0.0F ? 0 : (var17 < 0.0F ? -1 : 1);
                     if (var3 == null) {
                        break label97;
                     }

                     if (var15 >= 0) {
                        break label114;
                     }
                  } catch (MatchException var12) {
                     throw bxT(var12);
                  }

                  var5 = -0.5F;

                  try {
                     if (var3 != null) {
                        break label113;
                     }
                  } catch (MatchException var11) {
                     throw bxT(var11);
                  }
               }

               try {
                  float var18;
                  var15 = (var18 = rD.dlmvG.field_1724.field_6250 - 0.0F) == 0.0F ? 0 : (var18 < 0.0F ? -1 : 1);
               } catch (MatchException var6) {
                  throw bxT(var6);
               }
            }

            try {
               if (var3 == null) {
                  break label99;
               }

               if (var15 <= 0) {
                  break label113;
               }
            } catch (MatchException var10) {
               throw bxT(var10);
            }

            var5 = 0.5F;
         }

         float var19;
         var15 = (var19 = rD.dlmvG.field_1724.field_6212 - 0.0F) == 0.0F ? 0 : (var19 < 0.0F ? -1 : 1);
      }

      label77: {
         label76: {
            try {
               if (var3 == null) {
                  break label77;
               }

               if (var15 <= 0) {
                  break label76;
               }
            } catch (MatchException var9) {
               throw bxT(var9);
            }

            var4 -= 90.0F * var5;
         }

         float var20;
         var15 = (var20 = rD.dlmvG.field_1724.field_6212 - 0.0F) == 0.0F ? 0 : (var20 < 0.0F ? -1 : 1);
      }

      label68: {
         label67: {
            try {
               if (var3 == null) {
                  break label68;
               }

               if (var15 >= 0) {
                  break label67;
               }
            } catch (MatchException var8) {
               throw bxT(var8);
            }

            var4 += 90.0F * var5;
         }

         var15 = var0;
      }

      try {
         if (var15 != 0) {
            return Math.toRadians(var4);
         }
      } catch (MatchException var7) {
         throw bxT(var7);
      }

      return var4;
   }

   public static void bxN(double var0) {
      long var2 = UWCYb ^ 35253369867848L;
      String[] var4 = jf.bBe();

      boolean var10000;
      label22: {
         try {
            var10000 = bxC();
            if (var4 == null) {
               break label22;
            }

            if (!var10000) {
               return;
            }
         } catch (MatchException var7) {
            throw bxT(var7);
         }

         var10000 = true;
      }

      double var5 = bxP(var10000);
      rD.dlmvG.field_1724.method_18800(-Math.sin(var5) * var0, rD.dlmvG.field_1724.method_18798().field_1351, Math.cos(var5) * var0);
   }

   private static int bxU(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 28762;
      if (arYfW[var3] == null) {
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
         long var5 = uATfM[var3];
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
         Object[] var9 = (Object[])gTDLH.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               gTDLH.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/iX", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         arYfW[var3] = var15;
      }

      return arYfW[var3];
   }
}
