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
import net.minecraft.class_1657;

public class cd extends cr {
   private class_1657 odadG;
   private static final long VZGld = gb.aYR(-2967259400486583939L, -5313034043029862719L, MethodHandles.lookup().lookupClass()).a(106816448148740L);
   private static final long[] AItKg;
   private static final Integer[] NVeYL;
   private static final Map wxQxQ = new HashMap(13);

   public cd() {
      long var1 = VZGld ^ 26374367568469L;
      int[] var10001 = new int[PN<"d">(15471, 1386757760720439261L ^ var1)];
      var10001[0] = PN<"d">(20266, 6155604105057563785L ^ var1);
      var10001[1] = PN<"d">(13600, 2320409420354588309L ^ var1);
      var10001[2] = PN<"d">(20972, 4842332229175994957L ^ var1);
      var10001[3] = PN<"d">(25275, 7290830578441738503L ^ var1);
      var10001[4] = PN<"d">(6855, 5602284329247646071L ^ var1);
      var10001[5] = PN<"d">(18391, 3626148648968518773L ^ var1);
      var10001[PN<"d">(8019, 7840878229991695592L ^ var1)] = PN<"d">(27098, 2118913036944396908L ^ var1);
      var10001[PN<"d">(12521, 4580968651848584030L ^ var1)] = PN<"d">(30443, 5261803791544110417L ^ var1);
      var10001[PN<"d">(30611, 7515094503818251310L ^ var1)] = PN<"d">(27089, 8500910289844392553L ^ var1);
      var10001[PN<"d">(48, 6774374237552032655L ^ var1)] = PN<"d">(3696, 995385130607195598L ^ var1);
      var10001[PN<"d">(31796, 6503208317259106181L ^ var1)] = PN<"d">(18287, 6229010024332491995L ^ var1);
      var10001[PN<"d">(20355, 2913115077773816870L ^ var1)] = PN<"d">(5280, 6597151854736846617L ^ var1);
      var10001[PN<"d">(23914, 8957559123458844377L ^ var1)] = PN<"d">(4254, 9017178063377869630L ^ var1);
      super(var10001, lf.RUgvb);
   }

   static {
      long var0 = VZGld ^ 11701433383107L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[21];
      int var5 = 0;
      String var6 = "\u0000\u009a\u0017±õa>µü¨\u0003¬6\u009e>Xä3\u0017\báÞ,\b\u0082þ£@\u007f\r6Aç|÷mÁò:\u0019\u009a\u0017|ã¸\u0007ö.#¥#¶\"ñMSä/z|Æ,»µ´Fñ\u0098O\u0016þzíÈ\u001chÙ\u0088\u0015&\ty\u0088ß´ÃL8%\u0003ÆQ\u0081\u008eºd\u0015kÚÁ\u008b\u009cÇ0\u0090Óq\u001duç\u0012o\u0088ÎJ9²ÿ:\u007fy¢Öÿs\u009bñ\u0090òÚ@7×Z!\u009emI%EdÚ_Ys>eâ\u007fB\u009e³";
      int var7 = "\u0000\u009a\u0017±õa>µü¨\u0003¬6\u009e>Xä3\u0017\báÞ,\b\u0082þ£@\u007f\r6Aç|÷mÁò:\u0019\u009a\u0017|ã¸\u0007ö.#¥#¶\"ñMSä/z|Æ,»µ´Fñ\u0098O\u0016þzíÈ\u001chÙ\u0088\u0015&\ty\u0088ß´ÃL8%\u0003ÆQ\u0081\u008eºd\u0015kÚÁ\u008b\u009cÇ0\u0090Óq\u001duç\u0012o\u0088ÎJ9²ÿ:\u007fy¢Öÿs\u009bñ\u0090òÚ@7×Z!\u009emI%EdÚ_Ys>eâ\u007fB\u009e³"
         .length();
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
                     AItKg = var8;
                     NVeYL = new Integer[21];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "Rb\u0082\u0085¼\u0003+w\u0098«yñ\u009fpgË";
                  var7 = "Rb\u0082\u0085¼\u0003+w\u0098«yñ\u009fpgË".length();
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

   private String PI() {
      long var1 = VZGld ^ 72139737636867L;
      String var3 = this.odadG.method_7334().name();
      if (this.odadG == rD.dlmvG.field_1724) {
         var3 = rD.dlJ().aZx(fS.class).aWP(var3);
      }

      return var3;
   }

   private static int PM(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = PL(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int PL(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 4815;
      if (NVeYL[var3] == null) {
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
         long var5 = AItKg[var3];
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
         Object[] var9 = (Object[])wxQxQ.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               wxQxQ.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cd", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         NVeYL[var3] = var15;
      }

      return NVeYL[var3];
   }

   private class_1657 PJ() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cd.VZGld J
      // 03: ldc2_w 40363042723569
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ca.OY ()Z
      // 0b: invokestatic sixtwo/rD.dlJ ()Lsixtwo/ge;
      // 0e: ldc_w sixtwo/fg
      // 11: invokevirtual sixtwo/ge.aZx (Ljava/lang/Class;)Lsixtwo/gg;
      // 14: checkcast sixtwo/fg
      // 17: astore 4
      // 19: istore 3
      // 1a: aload 4
      // 1c: invokevirtual sixtwo/fg.bag ()Z
      // 1f: iload 3
      // 20: ifeq 68
      // 23: ifeq 54
      // 26: goto 2d
      // 29: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: aload 4
      // 2f: invokevirtual sixtwo/fg.aIU ()Lnet/minecraft/class_1657;
      // 32: iload 3
      // 33: ifeq 53
      // 36: goto 3d
      // 39: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: ifnull 54
      // 40: goto 47
      // 43: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 46: athrow
      // 47: aload 4
      // 49: invokevirtual sixtwo/fg.aIU ()Lnet/minecraft/class_1657;
      // 4c: goto 53
      // 4f: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 52: athrow
      // 53: areturn
      // 54: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 57: iload 3
      // 58: ifeq 6e
      // 5b: getfield net/minecraft/class_310.field_1755 Lnet/minecraft/class_437;
      // 5e: instanceof net/minecraft/class_408
      // 61: goto 68
      // 64: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 67: athrow
      // 68: ifeq 72
      // 6b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 6e: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 71: areturn
      // 72: aconst_null
      // 73: areturn
   }

   private static MatchException PK(MatchException var0) {
      return var0;
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
      // 000: getstatic sixtwo/cd.VZGld J
      // 003: ldc2_w 115757086253823
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/ca.OY ()Z
      // 00b: aload 0
      // 00c: invokevirtual sixtwo/cd.PJ ()Lnet/minecraft/class_1657;
      // 00f: astore 5
      // 011: istore 4
      // 013: aload 5
      // 015: iload 4
      // 017: ifeq 035
      // 01a: ifnull 031
      // 01d: goto 024
      // 020: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 023: athrow
      // 024: aload 0
      // 025: aload 5
      // 027: putfield sixtwo/cd.odadG Lnet/minecraft/class_1657;
      // 02a: goto 031
      // 02d: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 030: athrow
      // 031: aload 0
      // 032: getfield sixtwo/cd.odadG Lnet/minecraft/class_1657;
      // 035: ifnonnull 039
      // 038: return
      // 039: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 03c: astore 6
      // 03e: aload 6
      // 040: invokevirtual sixtwo/ii.bjb ()Lsixtwo/mG;
      // 043: ldc 255.0
      // 045: aload 0
      // 046: getfield sixtwo/cd.ormBS Lsixtwo/rk;
      // 049: invokevirtual sixtwo/rk.dhj ()F
      // 04c: fmul
      // 04d: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 050: astore 7
      // 052: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // 055: ldc 255.0
      // 057: aload 0
      // 058: getfield sixtwo/cd.ormBS Lsixtwo/rk;
      // 05b: invokevirtual sixtwo/rk.dhj ()F
      // 05e: fmul
      // 05f: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 062: astore 8
      // 064: getstatic sixtwo/mG.QHTxQ Lsixtwo/mG;
      // 067: ldc 63.75
      // 069: aload 0
      // 06a: getfield sixtwo/cd.gILqY Lsixtwo/rk;
      // 06d: invokevirtual sixtwo/rk.dhj ()F
      // 070: fmul
      // 071: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 074: astore 9
      // 076: aload 1
      // 077: aload 0
      // 078: getfield sixtwo/cd.toIeR F
      // 07b: ldc 5.0
      // 07d: fsub
      // 07e: aload 0
      // 07f: getfield sixtwo/cd.QWaAn F
      // 082: ldc 5.0
      // 084: fsub
      // 085: aload 0
      // 086: getfield sixtwo/cd.jTsqG F
      // 089: ldc 10.0
      // 08b: fadd
      // 08c: aload 0
      // 08d: getfield sixtwo/cd.Xtjvx F
      // 090: ldc 10.0
      // 092: fadd
      // 093: ldc 15.0
      // 095: ldc 6.0
      // 097: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 09a: aload 9
      // 09c: invokevirtual sixtwo/lC.ccY (FFFFFLsixtwo/ld;Lsixtwo/mG;)V
      // 09f: aload 1
      // 0a0: aload 0
      // 0a1: getfield sixtwo/cd.toIeR F
      // 0a4: aload 0
      // 0a5: getfield sixtwo/cd.QWaAn F
      // 0a8: aload 0
      // 0a9: getfield sixtwo/cd.jTsqG F
      // 0ac: aload 0
      // 0ad: getfield sixtwo/cd.Xtjvx F
      // 0b0: aload 0
      // 0b1: getfield sixtwo/cd.ormBS Lsixtwo/rk;
      // 0b4: invokevirtual sixtwo/rk.dhj ()F
      // 0b7: aload 0
      // 0b8: getfield sixtwo/cd.gILqY Lsixtwo/rk;
      // 0bb: invokevirtual sixtwo/rk.dhj ()F
      // 0be: invokevirtual sixtwo/lC.ccU (FFFFFF)V
      // 0c1: getstatic sixtwo/lE.SVnNc Lsixtwo/lj;
      // 0c4: ldc 7.0
      // 0c6: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 0c9: astore 10
      // 0cb: aload 0
      // 0cc: invokevirtual sixtwo/cd.PI ()Ljava/lang/String;
      // 0cf: astore 11
      // 0d1: aload 0
      // 0d2: getfield sixtwo/cd.toIeR F
      // 0d5: ldc 6.0
      // 0d7: fadd
      // 0d8: fstore 12
      // 0da: ldc 12.0
      // 0dc: fstore 13
      // 0de: aload 0
      // 0df: getfield sixtwo/cd.odadG Lnet/minecraft/class_1657;
      // 0e2: astore 15
      // 0e4: aload 15
      // 0e6: iload 4
      // 0e8: ifeq 101
      // 0eb: instanceof net/minecraft/class_742
      // 0ee: ifeq 125
      // 0f1: goto 0f8
      // 0f4: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f7: athrow
      // 0f8: aload 15
      // 0fa: goto 101
      // 0fd: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 100: athrow
      // 101: checkcast net/minecraft/class_742
      // 104: astore 14
      // 106: aload 1
      // 107: aload 14
      // 109: fload 12
      // 10b: aload 0
      // 10c: getfield sixtwo/cd.QWaAn F
      // 10f: fload 13
      // 111: aload 0
      // 112: getfield sixtwo/cd.Xtjvx F
      // 115: invokestatic sixtwo/jf.bAH (FF)F
      // 118: fadd
      // 119: fload 13
      // 11b: ldc 5.0
      // 11d: invokestatic sixtwo/ld.all (F)Lsixtwo/ld;
      // 120: aload 8
      // 122: invokevirtual sixtwo/lC.ccZ (Lnet/minecraft/class_742;FFFLsixtwo/ld;Lsixtwo/mG;)V
      // 125: fload 12
      // 127: fload 13
      // 129: fadd
      // 12a: ldc 5.0
      // 12c: fadd
      // 12d: fstore 14
      // 12f: aload 0
      // 130: getfield sixtwo/cd.QWaAn F
      // 133: aload 10
      // 135: invokevirtual sixtwo/lq.cat ()F
      // 138: aload 0
      // 139: getfield sixtwo/cd.Xtjvx F
      // 13c: invokestatic sixtwo/jf.bAH (FF)F
      // 13f: fadd
      // 140: fstore 15
      // 142: aload 1
      // 143: aload 10
      // 145: aload 11
      // 147: fload 14
      // 149: fload 15
      // 14b: aload 7
      // 14d: invokevirtual sixtwo/lC.cez (Lsixtwo/lq;Ljava/lang/String;FFLsixtwo/mG;)V
      // 150: return
   }

   @Override
   public void LX(lC param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cd.VZGld J
      // 03: ldc2_w 138521923046719
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ca.OX ()Z
      // 0b: aload 0
      // 0c: aload 1
      // 0d: invokespecial sixtwo/cr.LX (Lsixtwo/lC;)V
      // 10: istore 4
      // 12: aload 0
      // 13: invokevirtual sixtwo/cd.PJ ()Lnet/minecraft/class_1657;
      // 16: astore 5
      // 18: aload 5
      // 1a: iload 4
      // 1c: ifne 3a
      // 1f: ifnull 36
      // 22: goto 29
      // 25: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 28: athrow
      // 29: aload 0
      // 2a: aload 5
      // 2c: putfield sixtwo/cd.odadG Lnet/minecraft/class_1657;
      // 2f: goto 36
      // 32: invokestatic sixtwo/cd.PK (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 35: athrow
      // 36: aload 0
      // 37: getfield sixtwo/cd.odadG Lnet/minecraft/class_1657;
      // 3a: ifnonnull 3e
      // 3d: return
      // 3e: getstatic sixtwo/lE.SVnNc Lsixtwo/lj;
      // 41: ldc 7.0
      // 43: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 46: astore 6
      // 48: aload 0
      // 49: invokevirtual sixtwo/cd.PI ()Ljava/lang/String;
      // 4c: astore 7
      // 4e: aload 0
      // 4f: ldc 23.0
      // 51: aload 6
      // 53: aload 7
      // 55: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 58: fadd
      // 59: ldc 6.0
      // 5b: fadd
      // 5c: putfield sixtwo/cd.jTsqG F
      // 5f: aload 0
      // 60: ldc 20.0
      // 62: putfield sixtwo/cd.Xtjvx F
      // 65: return
   }

   @Override
   public boolean Om() {
      long var1 = VZGld ^ 117417334400981L;

      try {
         if (this.PJ() != null) {
            return true;
         }
      } catch (MatchException var3) {
         throw PK(var3);
      }

      return false;
   }

   private static CallSite PN(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("PM".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cd" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
