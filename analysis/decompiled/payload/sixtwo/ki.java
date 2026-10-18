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

public final class ki {
   private static final ls ZtWVe;
   private static final long JCqrB = gb.aYR(-5208542502108741218L, -8669767044779108340L, MethodHandles.lookup().lookupClass()).a(238865853452436L);
   private static final String[] TCdfE;
   private static final String[] RYmvf;
   private static final Map uOZOd = new HashMap(13);

   static {
      long var0 = JCqrB ^ 121051625201303L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[13];
      int var7 = 0;
      String var6 = "SÝ\u008c¼BËAfÌ®<)A£÷Q\u0096\u00823\u0015\f\u0095¯>´¯ì¾Aæ?.\u0018\u0085ò;¬ÿ\u001eB\u001d2(¦<N!\t«}\u001a\u0019`6\u0098O\u0002\u0010Cò Õfè:¼Á\u0012\u0092j/\u009b\u008a\u000f U¿ä\u0085\u0004\u0005áðì³\u001cæý<²{PÔ¢\u009fcn\u0090µá\u001fÒcß\u001fÑX\u0018\u009a~Lùk{«\u000fë q\u001aÏO\u0001\u0007#åÚÄÌ2Å¹ 3\u0004\u0091\\¾\u0014Áï¥\u008eXà±C\u0016\b¾\u009ecÃ\\\u008cÙ¨µÝ\u0007ß/>_% ºÏ\u009dQ\u0004cÞ±\u009dâË\u008fËÏÛ\u008b,Îqs\u00070%\r{ wè9ãÆk\u0018\u0017~S»{`jëÎ\u008cs\"A\u001cá\u001c\u001eír\u009d5dÌµ ÿgo\u009c\u0081»\u0013\u0097\u007f\u008e\u0083\u0001çó\u0083Ã)HÞ\u009c\u0087LÊÖ\u0005ÌVê+a \u009c \u0012o®ÒLê\u0010\u0088ßjq6\u0099Í$éZzSm\\wzãz\u008bÈ\u008f\u009e¸#ù À\u0094Ó\u009bpË¡µÝ\u0087\u000f\u000b¹\u0011Ñæ$®láÑG\u0014Nº¢]\u001a©\u0092æx";
      int var8 = "SÝ\u008c¼BËAfÌ®<)A£÷Q\u0096\u00823\u0015\f\u0095¯>´¯ì¾Aæ?.\u0018\u0085ò;¬ÿ\u001eB\u001d2(¦<N!\t«}\u001a\u0019`6\u0098O\u0002\u0010Cò Õfè:¼Á\u0012\u0092j/\u009b\u008a\u000f U¿ä\u0085\u0004\u0005áðì³\u001cæý<²{PÔ¢\u009fcn\u0090µá\u001fÒcß\u001fÑX\u0018\u009a~Lùk{«\u000fë q\u001aÏO\u0001\u0007#åÚÄÌ2Å¹ 3\u0004\u0091\\¾\u0014Áï¥\u008eXà±C\u0016\b¾\u009ecÃ\\\u008cÙ¨µÝ\u0007ß/>_% ºÏ\u009dQ\u0004cÞ±\u009dâË\u008fËÏÛ\u008b,Îqs\u00070%\r{ wè9ãÆk\u0018\u0017~S»{`jëÎ\u008cs\"A\u001cá\u001c\u001eír\u009d5dÌµ ÿgo\u009c\u0081»\u0013\u0097\u007f\u008e\u0083\u0001çó\u0083Ã)HÞ\u009c\u0087LÊÖ\u0005ÌVê+a \u009c \u0012o®ÒLê\u0010\u0088ßjq6\u0099Í$éZzSm\\wzãz\u008bÈ\u008f\u009e¸#ù À\u0094Ó\u009bpË¡µÝ\u0087\u000f\u000b¹\u0011Ñæ$®láÑG\u0014Nº¢]\u001a©\u0092æx"
         .length();
      char var5 = ' ';
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bPn(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     TCdfE = var9;
                     RYmvf = new String[13];
                     ZtWVe = new ls();
                     return;
                  }

                  var5 = var6.charAt(var12);
                  break;
               default:
                  var9[var7++] = var19;
                  if ((var12 += var5) < var8) {
                     var5 = var6.charAt(var12);
                     continue label27;
                  }

                  var6 = "ðWã#\u001c\bkT×Ò\u0012\u0094x¸\u008eåÉ\u001dhMñ3\u0083ÐÔ;úæ\u009cê¸q ô\u009e\u001eÅ\u0087\u0013m\u0086\u0004Ô\u0095\rî@Í¸\u000e¹[+«£f0\u0001$\u0082\u007f®[¤\u0094";
                  var8 = "ðWã#\u001c\bkT×Ò\u0012\u0094x¸\u008eåÉ\u001dhMñ3\u0083ÐÔ;úæ\u009cê¸q ô\u009e\u001eÅ\u0087\u0013m\u0086\u0004Ô\u0095\rî@Í¸\u000e¹[+«£f0\u0001$\u0082\u007f®[¤\u0094"
                     .length();
                  var5 = ' ';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   private static String bPn(byte[] var0) {
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

   private static String bPo(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 15789;
      if (RYmvf[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])uOZOd.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               uOZOd.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/ki", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = TCdfE[var5].getBytes("ISO-8859-1");
         RYmvf[var5] = bPn(((Cipher)var4[0]).doFinal(var9));
      }

      return RYmvf[var5];
   }

   private static Object bPp(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bPo(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static void bPk(
      Runnable param0,
      mG param1,
      mG param2,
      int param3,
      int param4,
      float param5,
      float param6,
      float param7,
      float param8,
      float param9,
      float param10,
      boolean param11
   ) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/ki.JCqrB J
      // 03: ldc2_w 48229373829776
      // 06: lxor
      // 07: lstore 12
      // 09: aload 1
      // 0a: invokevirtual sixtwo/mG.con ()[F
      // 0d: astore 15
      // 0f: invokestatic sixtwo/kk.bPU ()Ljava/lang/String;
      // 12: aload 2
      // 13: invokevirtual sixtwo/mG.con ()[F
      // 16: astore 16
      // 18: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1b: invokevirtual net/minecraft/class_310.method_1522 ()Lnet/minecraft/class_276;
      // 1e: astore 17
      // 20: getstatic sixtwo/ki.ZtWVe Lsixtwo/ls;
      // 23: invokevirtual sixtwo/ls.caK ()V
      // 26: astore 14
      // 28: getstatic sixtwo/ki.ZtWVe Lsixtwo/ls;
      // 2b: aload 14
      // 2d: ifnull 49
      // 30: invokevirtual sixtwo/ls.caM ()V
      // 33: iload 11
      // 35: ifeq 4e
      // 38: goto 3f
      // 3b: invokestatic sixtwo/ki.bPm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3e: athrow
      // 3f: getstatic sixtwo/ki.ZtWVe Lsixtwo/ls;
      // 42: goto 49
      // 45: invokestatic sixtwo/ki.bPm (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 48: athrow
      // 49: aload 17
      // 4b: invokevirtual sixtwo/ls.method_29329 (Lnet/minecraft/class_276;)V
      // 4e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 51: checkcast mixin/accessors/MinecraftAccessor
      // 54: astore 18
      // 56: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 59: invokevirtual net/minecraft/class_310.method_1522 ()Lnet/minecraft/class_276;
      // 5c: astore 19
      // 5e: aload 18
      // 60: getstatic sixtwo/ki.ZtWVe Lsixtwo/ls;
      // 63: invokeinterface mixin/accessors/MinecraftAccessor.setMainRenderTarget (Lnet/minecraft/class_276;)V 2
      // 68: aload 0
      // 69: invokestatic sixtwo/kn.bQo (Ljava/lang/Runnable;)V
      // 6c: aload 18
      // 6e: aload 19
      // 70: invokeinterface mixin/accessors/MinecraftAccessor.setMainRenderTarget (Lnet/minecraft/class_276;)V 2
      // 75: goto 86
      // 78: astore 20
      // 7a: aload 18
      // 7c: aload 19
      // 7e: invokeinterface mixin/accessors/MinecraftAccessor.setMainRenderTarget (Lnet/minecraft/class_276;)V 2
      // 83: aload 20
      // 85: athrow
      // 86: invokestatic org/lwjgl/glfw/GLFW.glfwGetTime ()D
      // 89: fload 6
      // 8b: f2d
      // 8c: dmul
      // 8d: d2f
      // 8e: fstore 20
      // 90: getstatic sixtwo/kR.MNKWu Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 93: aload 17
      // 95: fload 20
      // 97: aload 15
      // 99: aload 16
      // 9b: iload 3
      // 9c: iload 4
      // 9e: fload 5
      // a0: fload 7
      // a2: fload 8
      // a4: fload 9
      // a6: fload 10
      // a8: invokedynamic accept (F[F[FIIFFFFF)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/ki.bPl (F[F[FIIFFFFFLcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // ad: invokestatic sixtwo/kn.bQr (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_276;Ljava/util/function/Consumer;)V
      // b0: return
   }

   public static void bPj(Runnable var0, mG var1, mG var2, int var3, int var4, float var5, float var6, float var7, float var8, float var9, float var10) {
      bPk(var0, var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, true);
   }

   private static MatchException bPm(MatchException var0) {
      return var0;
   }

   private static CallSite bPq(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bPp".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/ki" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   public static void bPi(Runnable var0, mG var1, mG var2, int var3, int var4, float var5, float var6, float var7, float var8, float var9, float var10) {
      bPk(var0, var1, var2, var3, var4, var5, var6, var7, var8, var9, var10, false);
   }
}
