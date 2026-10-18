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

public class jZ implements kh<jR> {
   private static final long LTRFg = gb.aYR(7466836197581158375L, 3893015216397398207L, MethodHandles.lookup().lookupClass()).a(9669060195444L);
   private static final String[] UWJdS;
   private static final String[] ROtOT;
   private static final Map xWhJl = new HashMap(13);

   static {
      long var0 = LTRFg ^ 38530150501962L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[6];
      int var7 = 0;
      String var6 = "a├╗┬░\u0096\u000bw┬ó+┬▒cP├ś┬á┬ó^a\u0018├Č\\\tN├é\n\u0085qu&\u0084Z\u0088┬Ż\u008f|*\u0000\u0010S├«T├╗├Ľ\u0018┬░e├ö^├Ę┬│@├Ĺ\u0013┬żC├ů┬Á┬ž[├×\u0018\u009d$!S\u008d┬«├ô ├×\u0081├ö\u009e\u0015\u0094├ő\u0003├Ő9┬».├Ç+┬ę├ś\u0081┬ĘI-P\u00077]N7├ô┬Č┬▒t\u00953";
      int var8 = "a├╗┬░\u0096\u000bw┬ó+┬▒cP├ś┬á┬ó^a\u0018├Č\\\tN├é\n\u0085qu&\u0084Z\u0088┬Ż\u008f|*\u0000\u0010S├«T├╗├Ľ\u0018┬░e├ö^├Ę┬│@├Ĺ\u0013┬żC├ů┬Á┬ž[├×\u0018\u009d$!S\u008d┬«├ô ├×\u0081├ö\u009e\u0015\u0094├ő\u0003├Ő9┬».├Ç+┬ę├ś\u0081┬ĘI-P\u00077]N7├ô┬Č┬▒t\u00953"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bNN(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     UWJdS = var9;
                     ROtOT = new String[6];
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

                  var6 = "J\u0095#'g├ç┬«r├Ł├▓\u0095p\u009c_`\t\u0095y├│├Ľ├╣q\u009f+ ^8├Á\u009bq7┬Ž\u0015\u0016/\u000f3┬║├ą\u001a\u0099a├Ľ,J>\u00ad├ô┬ĚD├¬\u0080\u0089T\u000597";
                  var8 = "J\u0095#'g├ç┬«r├Ł├▓\u0095p\u009c_`\t\u0095y├│├Ľ├╣q\u009f+ ^8├Á\u009bq7┬Ž\u0015\u0016/\u000f3┬║├ą\u001a\u0099a├Ľ,J>\u00ad├ô┬ĚD├¬\u0080\u0089T\u000597"
                     .length();
                  var5 = 24;
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public void bNK(jR param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jZ.LTRFg J
      // 03: ldc2_w 129947678142494
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/jT.bMR ()Z
      // 0b: aload 1
      // 0c: invokevirtual sixtwo/jR.bLZ ()Lsixtwo/mG;
      // 0f: astore 5
      // 11: istore 4
      // 13: aload 5
      // 15: invokevirtual sixtwo/mG.cnW ()Z
      // 18: ifeq 20
      // 1b: return
      // 1c: invokestatic sixtwo/jZ.bNM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f: athrow
      // 20: new net/minecraft/class_9799
      // 23: dup
      // 24: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 27: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 2a: bipush 4
      // 2b: imul
      // 2c: invokespecial net/minecraft/class_9799.<init> (I)V
      // 2f: astore 6
      // 31: new net/minecraft/class_287
      // 34: dup
      // 35: aload 6
      // 37: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 3a: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 3d: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 40: astore 7
      // 42: getstatic sixtwo/jZ.FroVm Lsixtwo/kb;
      // 45: aload 7
      // 47: aload 1
      // 48: invokevirtual sixtwo/jR.bLQ ()Lorg/joml/Matrix3x2fStack;
      // 4b: aload 1
      // 4c: invokevirtual sixtwo/jR.bLR ()F
      // 4f: aload 1
      // 50: invokevirtual sixtwo/jR.bLS ()F
      // 53: aload 1
      // 54: invokevirtual sixtwo/jR.bLT ()F
      // 57: aload 1
      // 58: invokevirtual sixtwo/jR.bLU ()F
      // 5b: aload 5
      // 5d: invokevirtual sixtwo/kb.quad_color (Lnet/minecraft/class_287;Lorg/joml/Matrix3x2fStack;FFFFLsixtwo/mG;)V
      // 60: aload 7
      // 62: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 65: astore 8
      // 67: getstatic sixtwo/kR.Esowy Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 6a: aload 8
      // 6c: aload 1
      // 6d: invokedynamic accept (Lsixtwo/jR;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/jZ.bNL (Lsixtwo/jR;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 72: invokestatic sixtwo/lF.cfB (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;Ljava/util/function/Consumer;)V
      // 75: iload 4
      // 77: ifne b7
      // 7a: aload 8
      // 7c: ifnull b2
      // 7f: aload 8
      // 81: invokevirtual net/minecraft/class_9801.close ()V
      // 84: goto b2
      // 87: invokestatic sixtwo/jZ.bNM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 8a: athrow
      // 8b: astore 9
      // 8d: aload 8
      // 8f: iload 4
      // 91: ifne a0
      // 94: ifnull af
      // 97: goto 9e
      // 9a: invokestatic sixtwo/jZ.bNM (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 9d: athrow
      // 9e: aload 8
      // a0: invokevirtual net/minecraft/class_9801.close ()V
      // a3: goto af
      // a6: astore 10
      // a8: aload 9
      // aa: aload 10
      // ac: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // af: aload 9
      // b1: athrow
      // b2: aload 6
      // b4: invokevirtual net/minecraft/class_9799.close ()V
      // b7: goto d0
      // ba: astore 7
      // bc: aload 6
      // be: invokevirtual net/minecraft/class_9799.close ()V
      // c1: goto cd
      // c4: astore 8
      // c6: aload 7
      // c8: aload 8
      // ca: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // cd: aload 7
      // cf: athrow
      // d0: return
   }

   private static Object bNP(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bNO(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static Throwable bNM(Throwable var0) {
      return var0;
   }

   private static String bNN(byte[] var0) {
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

   private static String bNO(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 32040;
      if (ROtOT[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])xWhJl.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               xWhJl.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/jZ", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = UWJdS[var5].getBytes("ISO-8859-1");
         ROtOT[var5] = bNN(((Cipher)var4[0]).doFinal(var9));
      }

      return ROtOT[var5];
   }

   private static CallSite bNQ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bNP".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jZ" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
