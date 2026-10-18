package sixtwo;

import it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap;
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
import net.minecraft.class_11540;
import net.minecraft.class_11661;
import net.minecraft.class_11684;
import net.minecraft.class_12249;
import net.minecraft.class_1309;
import net.minecraft.class_1799;
import net.minecraft.class_1921;
import net.minecraft.class_1937;
import net.minecraft.class_310;
import net.minecraft.class_4587;
import net.minecraft.class_4597;
import net.minecraft.class_4608;
import net.minecraft.class_4618;
import net.minecraft.class_4722;
import net.minecraft.class_811;
import net.minecraft.class_9799;
import net.minecraft.class_308.class_11274;
import net.minecraft.class_4597.class_4598;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix3x2fc;
import org.jspecify.annotations.Nullable;

public final class ju implements lA {
   private static final float vMVWK = -10850.0F;
   private static final float wSuGG = 16.0F;
   @Nullable
   private static jx EZsoO;
   private static String XBcvw;
   private static final long SIlUv = gb.aYR(-1711104809145699340L, 5991162868861888221L, MethodHandles.lookup().lookupClass()).a(17282826408841L);
   private static final long[] WageH;
   private static final Integer[] jOCMz;
   private static final Map VSGjo = new HashMap(13);

   static {
      bGm("Ie0B1b");
      long var0 = SIlUv ^ 44549190952295L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[6];
      int var5 = 0;
      String var6 = "Án{÷\u008bOô)Í\u0001Øço\u001fìDÑ\u0088Ë\u0089^Ðº(*Déí\u001e\u000b\u0080é";
      int var7 = "Án{÷\u008bOô)Í\u0001Øço\u001fìDÑ\u0088Ë\u0089^Ðº(*Déí\u001e\u000b\u0080é".length();
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
                     WageH = var8;
                     jOCMz = new Integer[6];
                     return;
                  }
                  break;
               default:
                  var14[var10001] = var21;
                  if (var4 < var7) {
                     continue label23;
                  }

                  var6 = "HêÆÞ7uèõ»Þ·Pµ\u0005\u008bë";
                  var7 = "HêÆÞ7uèõ»Þ·Pµ\u0005\u008bë".length();
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

   public static void bFO(
      @Nullable Matrix3x2fc var0, @Nullable class_1309 var1, @Nullable class_1937 var2, class_1799 var3, float var4, float var5, float var6, ju$tT var7
   ) {
      long var8 = SIlUv ^ 7658747971832L;

      try {
         if (var3.method_7960()) {
            return;
         }
      } catch (MatchException var11) {
         throw bGo(var11);
      }

      class_11540 var10 = bFW(var1, var2, var3);
      bFX(var10, var0, var4, var5, var6, var7);
   }

   public static String bGn() {
      return XBcvw;
   }

   public static void bFT(@Nullable Matrix3x2fc var0, class_1799 var1, float var2, float var3, @Nullable String var4, ju$tT var5) {
      long var6 = SIlUv ^ 61220943629572L;

      try {
         if (var1.method_7960()) {
            return;
         }
      } catch (MatchException var9) {
         throw bGo(var9);
      }

      Matrix3x2fStack var8 = jI.bIn(var0);
      var8.translate(var2, var3);
      bGf(var8, var1);
      bGg(var8, var1);
      bGh(var8, var1, var4, var5);
   }

   public static void bFU(@Nullable Matrix3x2fc var0, class_1799 var1, int var2, int var3, int var4, @Nullable String var5, ju$tT var6) {
      long var7 = SIlUv ^ 30700435793798L;

      try {
         if (var1.method_7960()) {
            return;
         }
      } catch (MatchException var10) {
         throw bGo(var10);
      }

      Matrix3x2fStack var9 = jI.bIn(var0);
      var9.translate(var2, var3);
      var9.scale(var4 / 16.0F, var4 / 16.0F);
      bGf(var9, var1);
      bGg(var9, var1);
      bGh(var9, var1, var5, var6);
   }

   private static boolean bFZ(class_11540 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ju.SIlUv J
      // 03: ldc2_w 6556693632666
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/ju.bGn ()Ljava/lang/String;
      // 0b: astore 3
      // 0c: aload 0
      // 0d: invokevirtual net/minecraft/class_11540.method_65608 ()Z
      // 10: aload 3
      // 11: ifnull 1f
      // 14: ifne 22
      // 17: goto 1e
      // 1a: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: bipush 1
      // 1f: goto 23
      // 22: bipush 0
      // 23: istore 4
      // 25: aload 3
      // 26: ifnull 4b
      // 29: iload 4
      // 2b: ifeq 4f
      // 2e: goto 35
      // 31: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34: athrow
      // 35: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 38: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 3b: invokevirtual net/minecraft/class_757.method_71114 ()Lnet/minecraft/class_308;
      // 3e: getstatic net/minecraft/class_308$class_11274.field_60026 Lnet/minecraft/class_308$class_11274;
      // 41: invokevirtual net/minecraft/class_308.method_71034 (Lnet/minecraft/class_308$class_11274;)V
      // 44: goto 4b
      // 47: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4a: athrow
      // 4b: aload 3
      // 4c: ifnonnull 65
      // 4f: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 52: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 55: invokevirtual net/minecraft/class_757.method_71114 ()Lnet/minecraft/class_308;
      // 58: getstatic net/minecraft/class_308$class_11274.field_60027 Lnet/minecraft/class_308$class_11274;
      // 5b: invokevirtual net/minecraft/class_308.method_71034 (Lnet/minecraft/class_308$class_11274;)V
      // 5e: goto 65
      // 61: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 64: athrow
      // 65: iload 4
      // 67: ireturn
   }

   private static void bGl(Object2ObjectLinkedOpenHashMap<class_1921, class_9799> var0, class_1921 var1) {
      var0.put(var1, new class_9799(var1.method_22722()));
   }

   private static int bGq(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bGp(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public static void bGm(String var0) {
      XBcvw = var0;
   }

   public static void bFP(lC var0, class_1799 var1, float var2, float var3, @Nullable String var4, ju$tT var5) {
      bFT(var0.cfc(), var1, var2, var3, var4, var5);
   }

   private static void bFX(class_11540 var0, @Nullable Matrix3x2fc var1, float var2, float var3, float var4, ju$tT var5) {
      bFY(var0, var1, var2, var3, var4, var5);
   }

   private static void bFY(class_11540 var0, @Nullable Matrix3x2fc var1, float var2, float var3, float var4, ju$tT var5) {
      long var6 = SIlUv ^ 111609305133328L;
      class_4587 var8 = bGc(var1);
      jx var9 = bGj();
      var8.method_22903();
      bGb(var8, var2, var3, var4);
      boolean var10 = bFZ(var0);

      try {
         bGd(var0, var8, var9.submitNodeStorage());
         if (var5 == ju$tT.yDoOO) {
            bFV();
         }
      } catch (MatchException var11) {
         throw bGo(var11);
      }

      try {
         if (var10) {
            bGa();
         }
      } catch (MatchException var12) {
         throw bGo(var12);
      }

      var8.method_22909();
   }

   private static void bGe(jx var0) {
      var0.featureRenderDispatcher().method_73002();
      var0.bufferSource().method_22993();
      var0.crumblingBufferSource().method_22993();
      var0.outlineBufferSource().method_23285();
   }

   public static void bFR(@Nullable Matrix3x2fc var0, lC var1, class_1799 var2, int var3, int var4, int var5, @Nullable String var6) {
      bFS(var0, var1, var2, var3, var4, var5, var6, ju$tT.yDoOO);
   }

   private static void bGg(Matrix3x2fStack param0, class_1799 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ju.SIlUv J
      // 03: ldc2_w 77538651439403
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ju.bGn ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 10: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 13: aload 4
      // 15: ifnull 30
      // 18: ifnonnull 2a
      // 1b: goto 22
      // 1e: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 21: athrow
      // 22: fconst_0
      // 23: goto 43
      // 26: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2d: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 30: invokevirtual net/minecraft/class_746.method_7357 ()Lnet/minecraft/class_1796;
      // 33: aload 1
      // 34: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 37: invokevirtual net/minecraft/class_310.method_61966 ()Lnet/minecraft/class_9779;
      // 3a: bipush 1
      // 3b: invokeinterface net/minecraft/class_9779.method_60637 (Z)F 2
      // 40: invokevirtual net/minecraft/class_1796.method_7905 (Lnet/minecraft/class_1799;F)F
      // 43: fstore 5
      // 45: fload 5
      // 47: fconst_0
      // 48: fcmpg
      // 49: aload 4
      // 4b: ifnull 63
      // 4e: ifgt 59
      // 51: goto 58
      // 54: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 57: athrow
      // 58: return
      // 59: ldc 16.0
      // 5b: fconst_1
      // 5c: fload 5
      // 5e: fsub
      // 5f: fmul
      // 60: invokestatic net/minecraft/class_3532.method_15375 (F)I
      // 63: istore 6
      // 65: iload 6
      // 67: ldc 16.0
      // 69: fload 5
      // 6b: fmul
      // 6c: invokestatic net/minecraft/class_3532.method_15386 (F)I
      // 6f: iadd
      // 70: istore 7
      // 72: aload 0
      // 73: fconst_0
      // 74: iload 6
      // 76: i2f
      // 77: ldc 16.0
      // 79: iload 7
      // 7b: iload 6
      // 7d: isub
      // 7e: i2f
      // 7f: sipush 27453
      // 82: ldc2_w 5488763918059445983
      // 85: lload 2
      // 86: lxor
      // 87: invokedynamic v (IJ)I bsm=sixtwo/ju.bGr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 8c: invokestatic sixtwo/mG.cnQ (I)Lsixtwo/mG;
      // 8f: invokestatic sixtwo/ju.bGi (Lorg/joml/Matrix3x2fStack;FFFFLsixtwo/mG;)V
      // 92: return
   }

   private static void bGi(Matrix3x2fStack var0, float var1, float var2, float var3, float var4, mG var5) {
      ntCFX.bMM(jO.bJI(var0, var1, var2, var3, var4).dqh(kd.AhlXN).dqk(var5).dqz());
   }

   private static int bGp(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 9066;
      if (jOCMz[var3] == null) {
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
         long var5 = WageH[var3];
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
         Object[] var9 = (Object[])VSGjo.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               VSGjo.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/ju", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         jOCMz[var3] = var15;
      }

      return jOCMz[var3];
   }

   private static void bGb(class_4587 var0, float var1, float var2, float var3) {
      var0.method_46416(var1 + var3 / 2.0F, var2 + var3 / 2.0F, -10850.0F);
      var0.method_22905(var3, -var3, var3);
   }

   private static Object2ObjectLinkedOpenHashMap<class_1921, class_9799> bGk() {
      Object2ObjectLinkedOpenHashMap var0 = new Object2ObjectLinkedOpenHashMap();
      bGl(var0, class_4722.method_24074());
      bGl(var0, class_4722.method_76545());
      bGl(var0, class_4722.method_29382());
      jE.bHu(var0);
      bGl(var0, class_12249.method_75985());
      return var0;
   }

   private static void bGf(Matrix3x2fStack param0, class_1799 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ju.SIlUv J
      // 03: ldc2_w 80656593623157
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/ju.bGn ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 4
      // 0f: ifnull 64
      // 12: aload 1
      // 13: invokevirtual net/minecraft/class_1799.method_31578 ()Z
      // 16: ifne 25
      // 19: goto 20
      // 1c: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1f: athrow
      // 20: return
      // 21: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 24: athrow
      // 25: aload 0
      // 26: fconst_2
      // 27: ldc_w 13.0
      // 2a: ldc_w 13.0
      // 2d: fconst_2
      // 2e: sipush 9573
      // 31: ldc2_w 2743837833639381470
      // 34: lload 2
      // 35: lxor
      // 36: invokedynamic v (IJ)I bsm=sixtwo/ju.bGr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 3b: invokestatic sixtwo/mG.cnQ (I)Lsixtwo/mG;
      // 3e: invokestatic sixtwo/ju.bGi (Lorg/joml/Matrix3x2fStack;FFFFLsixtwo/mG;)V
      // 41: aload 0
      // 42: fconst_2
      // 43: ldc_w 13.0
      // 46: aload 1
      // 47: invokevirtual net/minecraft/class_1799.method_31579 ()I
      // 4a: i2f
      // 4b: fconst_1
      // 4c: sipush 695
      // 4f: ldc2_w 4306689455431020047
      // 52: lload 2
      // 53: lxor
      // 54: invokedynamic v (IJ)I bsm=sixtwo/ju.bGr (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 59: aload 1
      // 5a: invokevirtual net/minecraft/class_1799.method_31580 ()I
      // 5d: ior
      // 5e: invokestatic sixtwo/mG.cnQ (I)Lsixtwo/mG;
      // 61: invokestatic sixtwo/ju.bGi (Lorg/joml/Matrix3x2fStack;FFFFLsixtwo/mG;)V
      // 64: return
   }

   public static void bFQ(@Nullable Matrix3x2fc var0, lC var1, class_1799 var2, int var3, int var4, int var5) {
      bFR(var0, var1, var2, var3, var4, var5, null);
   }

   private static void bGa() {
      class_310.method_1551().field_1773.method_71114().method_71034(class_11274.field_60027);
   }

   private static void bGd(class_11540 var0, class_4587 var1, class_11661 var2) {
      long var3 = SIlUv ^ 63401113781185L;
      var0.method_65604(var1, var2, bGr<"v">(17821, 9173408858155889296L ^ var3), class_4608.field_21444, 0);
   }

   private static void bGh(Matrix3x2fStack param0, class_1799 param1, @Nullable String param2, ju$tT param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ju.SIlUv J
      // 03: ldc2_w 106067096257636
      // 06: lxor
      // 07: lstore 4
      // 09: invokestatic sixtwo/ju.bGn ()Ljava/lang/String;
      // 0c: astore 6
      // 0e: aload 1
      // 0f: invokevirtual net/minecraft/class_1799.method_7947 ()I
      // 12: bipush 1
      // 13: if_icmpne 2e
      // 16: aload 2
      // 17: aload 6
      // 19: ifnull 2f
      // 1c: goto 23
      // 1f: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 22: athrow
      // 23: ifnonnull 2e
      // 26: goto 2d
      // 29: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2c: athrow
      // 2d: return
      // 2e: aload 2
      // 2f: aload 6
      // 31: ifnull 3f
      // 34: ifnull 42
      // 37: goto 3e
      // 3a: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3d: athrow
      // 3e: aload 2
      // 3f: goto 49
      // 42: aload 1
      // 43: invokevirtual net/minecraft/class_1799.method_7947 ()I
      // 46: invokestatic java/lang/String.valueOf (I)Ljava/lang/String;
      // 49: astore 7
      // 4b: getstatic sixtwo/lE.WTzbi Lsixtwo/lj;
      // 4e: ldc_w 8.0
      // 51: invokevirtual sixtwo/lj.bYM (F)Lsixtwo/lq;
      // 54: astore 8
      // 56: ldc_w 17.0
      // 59: aload 8
      // 5b: aload 7
      // 5d: invokevirtual sixtwo/lq.cao (Ljava/lang/String;)F
      // 60: fsub
      // 61: fstore 9
      // 63: ldc_w 17.0
      // 66: aload 8
      // 68: invokevirtual sixtwo/lq.cat ()F
      // 6b: fsub
      // 6c: fstore 10
      // 6e: aload 6
      // 70: ifnull d0
      // 73: aload 3
      // 74: getstatic sixtwo/ju$tT.IHKNQ Lsixtwo/ju$tT;
      // 77: if_acmpne b5
      // 7a: goto 81
      // 7d: invokestatic sixtwo/ju.bGo (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 80: athrow
      // 81: invokestatic sixtwo/ju.bGj ()Lsixtwo/jx;
      // 84: invokevirtual sixtwo/jx.textBatch ()Lsixtwo/kJ;
      // 87: astore 11
      // 89: aload 11
      // 8b: aload 8
      // 8d: invokevirtual sixtwo/kJ.bUc (Lsixtwo/lq;)V
      // 90: aload 11
      // 92: aload 0
      // 93: fload 9
      // 95: f2d
      // 96: fload 10
      // 98: f2d
      // 99: dconst_0
      // 9a: aload 8
      // 9c: invokevirtual sixtwo/lq.caw ()F
      // 9f: f2d
      // a0: aload 7
      // a2: invokestatic sixtwo/mZ.csh (Ljava/lang/String;)[I
      // a5: invokestatic sixtwo/kD.bST (Lorg/joml/Matrix3x2fStack;DDDD[I)Lsixtwo/kD$ul;
      // a8: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // ab: invokevirtual sixtwo/kD$ul.dsX (Lsixtwo/mG;)Lsixtwo/kD$ul;
      // ae: invokevirtual sixtwo/kD$ul.dsY ()Lsixtwo/kD;
      // b1: invokevirtual sixtwo/kJ.bUd (Lsixtwo/kD;)V
      // b4: return
      // b5: aload 8
      // b7: invokevirtual sixtwo/lq.cav ()Lsixtwo/lj;
      // ba: aload 7
      // bc: aload 8
      // be: invokevirtual sixtwo/lq.caw ()F
      // c1: getstatic sixtwo/mG.hoGuU Lsixtwo/mG;
      // c4: aload 0
      // c5: invokestatic sixtwo/jI.bIl (Lorg/joml/Matrix3x2fc;)Lorg/joml/Matrix4f;
      // c8: fload 9
      // ca: fload 10
      // cc: fconst_0
      // cd: invokestatic sixtwo/ln.bZG (Lsixtwo/lj;Ljava/lang/String;FLsixtwo/mG;Lorg/joml/Matrix4f;FFF)V
      // d0: return
   }

   private static class_4587 bGc(@Nullable Matrix3x2fc var0) {
      long var1 = SIlUv ^ 85996625071700L;
      class_4587 var3 = new class_4587();

      try {
         if (var0 != null) {
            var3.method_34425(jI.bIl(var0));
         }

         return var3;
      } catch (MatchException var4) {
         throw bGo(var4);
      }
   }

   private static MatchException bGo(MatchException var0) {
      return var0;
   }

   private static CallSite bGr(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bGq".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ju" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static void bFN(@Nullable Matrix3x2fc var0, @Nullable class_1309 var1, @Nullable class_1937 var2, class_1799 var3, float var4, float var5, float var6) {
      bFO(var0, var1, var2, var3, var4, var5, var6, ju$tT.yDoOO);
   }

   public static void bFS(@Nullable Matrix3x2fc var0, lC var1, class_1799 var2, int var3, int var4, int var5, @Nullable String var6, ju$tT var7) {
      bFU(var0, var2, var3, var4, var5, var6, var7);
   }

   private static class_11540 bFW(@Nullable class_1309 var0, @Nullable class_1937 var1, class_1799 var2) {
      class_11540 var3 = new class_11540();
      rD.dlmvG.method_65386().method_65598(var3, var2, class_811.field_4317, var1, var0, 0);
      return var3;
   }

   private static jx bGj() {
      long var0 = SIlUv ^ 51869981463092L;
      String var2 = bGn();

      try {
         if (var2 == null) {
            return EZsoO;
         }

         if (EZsoO != null) {
            return EZsoO;
         }
      } catch (MatchException var7) {
         throw bGo(var7);
      }

      class_11661 var3 = new class_11661();
      class_4598 var4 = class_4597.method_22992(bGk(), new class_9799(bGr<"v">(2265, 4365815548527357474L ^ var0)));
      class_4618 var5 = new class_4618();
      class_4598 var6 = class_4597.method_22991(new class_9799(bGr<"v">(3415, 2912981032540089259L ^ var0)));
      EZsoO = new jx(
         var3, var4, var5, var6, new class_11684(var3, rD.dlmvG.method_1541(), var4, rD.dlmvG.method_72703(), var5, var6, rD.dlmvG.field_1772), new kJ()
      );
      return EZsoO;
   }

   public static void bFV() {
      long var0 = SIlUv ^ 15791793224417L;
      String var10000 = bGn();
      jx var3 = EZsoO;
      String var2 = var10000;

      label22: {
         try {
            var5 = var3;
            if (var2 == null) {
               break label22;
            }

            if (var3 == null) {
               return;
            }
         } catch (MatchException var4) {
            throw bGo(var4);
         }

         bGe(var3);
         var5 = var3;
      }

      var5.textBatch().endBatch();
   }
}
