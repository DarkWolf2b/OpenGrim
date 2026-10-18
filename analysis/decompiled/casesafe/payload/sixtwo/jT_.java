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

public class jT implements kh<jO> {
   private static boolean GRyFV;
   private static final long OqQyw = gb.aYR(-183791357870024740L, -5914521567213679317L, MethodHandles.lookup().lookupClass()).a(147815586986413L);
   private static final String[] wCgeD;
   private static final String[] fxewg;
   private static final Map BMyRp = new HashMap(13);

   static {
      long var0 = OqQyw ^ 89257100877788L;
      bMP(true);
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[2];
      int var7 = 0;
      String var6 = "├žF┬│┬ź├Ő\u0012\u009e┬Ěr┬▓m┬Ě┬│├Ć\u0084├ö├ľ┬ú~┬ź├ő┬╝R0├â\u009a\u008d\u0002├ćGN^ \u0091┬í;\u0018\u009a>├ö├×├▒├ő\u0000s├ů├Ä┬║9├ć\n$\u0086I\u0015g├¬E\u0085l\u0088z\u001e┬║&";
      int var8 = "├žF┬│┬ź├Ő\u0012\u009e┬Ěr┬▓m┬Ě┬│├Ć\u0084├ö├ľ┬ú~┬ź├ő┬╝R0├â\u009a\u008d\u0002├ćGN^ \u0091┬í;\u0018\u009a>├ö├×├▒├ő\u0000s├ů├Ä┬║9├ć\n$\u0086I\u0015g├¬E\u0085l\u0088z\u001e┬║&"
         .length();
      char var5 = ' ';
      int var4 = -1;

      while (true) {
         byte[] var10 = var2.doFinal(var6.substring(++var4, var4 + var5).getBytes("ISO-8859-1"));
         String var13 = bMT(var10).intern();
         byte var10001 = -1;
         var9[var7++] = var13;
         if ((var4 += var5) >= var8) {
            wCgeD = var9;
            fxewg = new String[2];
            return;
         }

         var5 = var6.charAt(var4);
      }
   }

   public static void bMP(boolean var0) {
      GRyFV = var0;
   }

   private static String bMU(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 18157;
      if (fxewg[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])BMyRp.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               BMyRp.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jT", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = wCgeD[var5].getBytes("ISO-8859-1");
         fxewg[var5] = bMT(((Cipher)var4[0]).doFinal(var9));
      }

      return fxewg[var5];
   }

   public static boolean bMQ() {
      return GRyFV;
   }

   private static String bMT(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   private static Object bMV(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bMU(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite bMW(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bMV".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jT" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public void bMM(jO param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/jT.OqQyw J
      // 003: ldc2_w 38261553496514
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/jT.bMR ()Z
      // 00b: aload 0
      // 00c: aload 1
      // 00d: invokevirtual sixtwo/jT.bMN (Lsixtwo/jO;)I
      // 010: istore 5
      // 012: istore 4
      // 014: iload 5
      // 016: bipush 2
      // 017: if_icmpne 039
      // 01a: aload 1
      // 01b: iload 4
      // 01d: ifne 03a
      // 020: goto 027
      // 023: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 026: athrow
      // 027: invokevirtual sixtwo/jO.bKk ()Lnet/minecraft/class_1044;
      // 02a: ifnonnull 039
      // 02d: goto 034
      // 030: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 033: athrow
      // 034: return
      // 035: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 038: athrow
      // 039: aload 1
      // 03a: invokevirtual sixtwo/jO.bKi ()Lsixtwo/mG;
      // 03d: astore 6
      // 03f: iload 5
      // 041: iload 4
      // 043: ifne 05d
      // 046: bipush 1
      // 047: if_icmpeq 061
      // 04a: goto 051
      // 04d: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 050: athrow
      // 051: aload 6
      // 053: invokevirtual sixtwo/mG.cnW ()Z
      // 056: goto 05d
      // 059: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 05c: athrow
      // 05d: ifeq 061
      // 060: return
      // 061: aload 1
      // 062: invokevirtual sixtwo/jO.bKm ()F
      // 065: fstore 7
      // 067: aload 0
      // 068: aload 1
      // 069: invokevirtual sixtwo/jO.bKb ()F
      // 06c: aload 1
      // 06d: invokevirtual sixtwo/jO.bKc ()F
      // 070: aload 1
      // 071: invokevirtual sixtwo/jO.bKd ()F
      // 074: aload 1
      // 075: invokevirtual sixtwo/jO.bKe ()F
      // 078: fload 7
      // 07a: invokevirtual sixtwo/jT.expandBySmoothness (FFFFF)Lsixtwo/lc;
      // 07d: astore 8
      // 07f: new net/minecraft/class_9799
      // 082: dup
      // 083: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 086: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 089: bipush 4
      // 08a: imul
      // 08b: invokespecial net/minecraft/class_9799.<init> (I)V
      // 08e: astore 9
      // 090: new net/minecraft/class_287
      // 093: dup
      // 094: aload 9
      // 096: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 099: getstatic net/minecraft/class_290.field_1575 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 09c: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 09f: astore 10
      // 0a1: getstatic sixtwo/jT.FroVm Lsixtwo/kb;
      // 0a4: aload 10
      // 0a6: aload 1
      // 0a7: invokevirtual sixtwo/jO.bKa ()Lorg/joml/Matrix3x2fStack;
      // 0aa: aload 8
      // 0ac: invokevirtual sixtwo/lc.bXF ()F
      // 0af: aload 8
      // 0b1: invokevirtual sixtwo/lc.bXG ()F
      // 0b4: aload 8
      // 0b6: invokevirtual sixtwo/lc.bXH ()F
      // 0b9: aload 8
      // 0bb: invokevirtual sixtwo/lc.bXI ()F
      // 0be: aload 1
      // 0bf: invokevirtual sixtwo/jO.bKt ()F
      // 0c2: aload 1
      // 0c3: invokevirtual sixtwo/jO.bKu ()F
      // 0c6: aload 1
      // 0c7: invokevirtual sixtwo/jO.bKv ()F
      // 0ca: aload 1
      // 0cb: invokevirtual sixtwo/jO.bKw ()F
      // 0ce: aload 6
      // 0d0: invokevirtual sixtwo/kb.uv_quad_region_color (Lnet/minecraft/class_287;Lorg/joml/Matrix3x2fStack;FFFFFFFFLsixtwo/mG;)V
      // 0d3: aload 10
      // 0d5: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 0d8: astore 11
      // 0da: iload 5
      // 0dc: bipush 2
      // 0dd: if_icmpne 0ea
      // 0e0: getstatic sixtwo/kR.alRAH Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0e3: goto 0ed
      // 0e6: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e9: athrow
      // 0ea: getstatic sixtwo/kR.cbSJp Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 0ed: aload 11
      // 0ef: iload 5
      // 0f1: aload 1
      // 0f2: invokedynamic accept (ILsixtwo/jO;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/jT.bMO (ILsixtwo/jO;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 0f7: invokestatic sixtwo/lF.cfB (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 0fa: iload 4
      // 0fc: ifne 13c
      // 0ff: aload 11
      // 101: ifnull 137
      // 104: aload 11
      // 106: invokevirtual net/minecraft/class_9801.close ()V
      // 109: goto 137
      // 10c: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10f: athrow
      // 110: astore 12
      // 112: aload 11
      // 114: iload 4
      // 116: ifne 125
      // 119: ifnull 134
      // 11c: goto 123
      // 11f: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 122: athrow
      // 123: aload 11
      // 125: invokevirtual net/minecraft/class_9801.close ()V
      // 128: goto 134
      // 12b: astore 13
      // 12d: aload 12
      // 12f: aload 13
      // 131: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 134: aload 12
      // 136: athrow
      // 137: aload 9
      // 139: invokevirtual net/minecraft/class_9799.close ()V
      // 13c: goto 155
      // 13f: astore 10
      // 141: aload 9
      // 143: invokevirtual net/minecraft/class_9799.close ()V
      // 146: goto 152
      // 149: astore 11
      // 14b: aload 10
      // 14d: aload 11
      // 14f: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 152: aload 10
      // 154: athrow
      // 155: return
   }

   public static boolean bMR() {
      boolean var0 = bMQ();

      try {
         return !var0;
      } catch (MatchException var1) {
         throw bMS(var1);
      }
   }

   private int bMN(jO param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jT.OqQyw J
      // 03: ldc2_w 108092893067247
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/jT.bMQ ()Z
      // 0b: istore 4
      // 0d: aload 1
      // 0e: invokevirtual sixtwo/jO.bJH ()Z
      // 11: iload 4
      // 13: ifeq 2a
      // 16: ifeq 26
      // 19: goto 20
      // 1c: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f: athrow
      // 20: bipush 2
      // 21: ireturn
      // 22: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: aload 1
      // 27: invokevirtual sixtwo/jO.bJG ()Z
      // 2a: iload 4
      // 2c: ifeq 40
      // 2f: ifeq 3f
      // 32: goto 39
      // 35: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 38: athrow
      // 39: bipush 1
      // 3a: ireturn
      // 3b: invokestatic sixtwo/jT.bMS (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3e: athrow
      // 3f: bipush 0
      // 40: ireturn
   }

   private static Throwable bMS(Throwable var0) {
      return var0;
   }
}
