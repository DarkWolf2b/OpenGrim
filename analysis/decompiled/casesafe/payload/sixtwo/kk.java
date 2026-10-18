package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.nio.FloatBuffer;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_276;

public final class kk {
   private static final ls jvICx;
   private static final ls VfaRL;
   private static final ls zBYfN;
   private static final ls Nuddf;
   private static final kk$uf xOjZJ;
   private static final kk$uf KRReU;
   private static String RgAjr;
   private static final long mwola = gb.aYR(8821854909566432664L, -1788264787193477957L, MethodHandles.lookup().lookupClass()).a(156986702028158L);
   private static final String[] hFFWl;
   private static final String[] sIrhS;
   private static final Map ZwhFz = new HashMap(13);

   private static void bPM(class_276 var0, ls var1, float var2, float var3, kk$uf var4) {
      FloatBuffer var5 = var4.dsw(var2);
      jvICx.caL(var0);
      kn.bQq(kR.jnQZa, jvICx, var4x -> {
         long var5x = mwola ^ 34082314884201L;
         var4x.bindTexture(bPZ<"j">(23670, 734112193265295394L ^ var5x), var0.method_71639(), lt.caX());
         jL.rPrcM.bJl();
         jL.rPrcM.bJr(bPZ<"j">(29754, 375602236691925100L ^ var5x), 1.0F / var0.field_1482, 1.0F / var0.field_1481);
         jL.rPrcM.bJq(bPZ<"j">(12799, 268676546394295726L ^ var5x), var2);
         jL.rPrcM.bJr(bPZ<"j">(15464, 8240754088174551093L ^ var5x), var3, 0.0F);
         jL.rPrcM.bJy(bPZ<"j">(16951, 8210176433873059426L ^ var5x), var5);
      });
      var1.caL(var0);
      kn.bQq(kR.jnQZa, var1, var4x -> {
         long var5x = mwola ^ 18556450875790L;
         var4x.bindTexture(bPZ<"j">(12458, 1190219731646853402L ^ var5x), jvICx.method_71639(), lt.caX());
         jL.rPrcM.bJl();
         jL.rPrcM.bJr(bPZ<"j">(7191, 156994464596499874L ^ var5x), 1.0F / var0.field_1482, 1.0F / var0.field_1481);
         jL.rPrcM.bJq(bPZ<"j">(3307, 5491732022847475036L ^ var5x), var2);
         jL.rPrcM.bJr(bPZ<"j">(10735, 4290310025315592276L ^ var5x), 0.0F, var3);
         jL.rPrcM.bJy(bPZ<"j">(4067, 6924345244572585559L ^ var5x), var5);
      });
   }

   private static MatchException bPV(MatchException var0) {
      return var0;
   }

   private static class_276 bPI(class_276 param0) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kk.mwola J
      // 03: ldc2_w 102084251141427
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/kk.bPU ()Ljava/lang/String;
      // 0b: invokestatic sixtwo/jo.bEi ()Lnet/minecraft/class_276;
      // 0e: astore 4
      // 10: astore 3
      // 11: invokestatic sixtwo/jo.bEj ()Lnet/minecraft/class_276;
      // 14: astore 5
      // 16: aload 4
      // 18: aload 3
      // 19: ifnull 4c
      // 1c: ifnonnull 3d
      // 1f: goto 26
      // 22: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 25: athrow
      // 26: aload 5
      // 28: aload 3
      // 29: ifnull 50
      // 2c: goto 33
      // 2f: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: ifnull 4d
      // 36: goto 3d
      // 39: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 3c: athrow
      // 3d: aload 0
      // 3e: aload 4
      // 40: aload 5
      // 42: invokestatic sixtwo/kk.bPJ (Lnet/minecraft/class_276;Lnet/minecraft/class_276;Lnet/minecraft/class_276;)Lnet/minecraft/class_276;
      // 45: goto 4c
      // 48: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4b: athrow
      // 4c: areturn
      // 4d: invokestatic sixtwo/jo.bEl ()Lnet/minecraft/class_276;
      // 50: astore 6
      // 52: aload 6
      // 54: aload 3
      // 55: ifnull 8b
      // 58: ifnull 83
      // 5b: goto 62
      // 5e: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: aload 6
      // 64: aload 3
      // 65: ifnull 8b
      // 68: goto 6f
      // 6b: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6e: athrow
      // 6f: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 72: ifnull 83
      // 75: goto 7c
      // 78: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7b: athrow
      // 7c: aload 6
      // 7e: areturn
      // 7f: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 82: athrow
      // 83: aload 0
      // 84: invokestatic sixtwo/jo.bEk ()Lnet/minecraft/class_276;
      // 87: aconst_null
      // 88: invokestatic sixtwo/kk.bPJ (Lnet/minecraft/class_276;Lnet/minecraft/class_276;Lnet/minecraft/class_276;)Lnet/minecraft/class_276;
      // 8b: areturn
   }

   public static class_276 bPO() {
      return zBYfN;
   }

   public static void bPT(String var0) {
      RgAjr = var0;
   }

   private static void bPL(class_276 var0, float var1, float var2) {
      bPM(var0, zBYfN, var1, var2, KRReU);
   }

   private static float bPP(float var0, float var1) {
      double var2 = 1.0 / Math.sqrt((Math.PI * 2) * (var1 * var1));
      return (float)(var2 * Math.exp(-(var0 * var0) / (2.0 * (var1 * var1))));
   }

   private static void bPK(RenderPipeline param0, class_276 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kk.mwola J
      // 03: ldc2_w 8593035280318
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/kk.bPU ()Ljava/lang/String;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: ifnull 2f
      // 11: aload 1
      // 12: aload 4
      // 14: ifnull 29
      // 17: goto 1e
      // 1a: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1d: athrow
      // 1e: ifnull 2f
      // 21: goto 28
      // 24: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 27: athrow
      // 28: aload 1
      // 29: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 2c: ifnonnull 34
      // 2f: return
      // 30: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 33: athrow
      // 34: aload 0
      // 35: getstatic sixtwo/kk.Nuddf Lsixtwo/ls;
      // 38: aload 1
      // 39: invokedynamic accept (Lnet/minecraft/class_276;)Ljava/util/function/Consumer; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)V, sixtwo/kk.bPS (Lnet/minecraft/class_276;Lcom/mojang/blaze3d/systems/RenderPass;)V, (Lcom/mojang/blaze3d/systems/RenderPass;)V ]
      // 3e: invokestatic sixtwo/kn.bQq (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_276;Ljava/util/function/Consumer;)V
      // 41: return
   }

   private static String bPX(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 9053;
      if (sIrhS[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])ZwhFz.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               ZwhFz.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kk", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = hFFWl[var5].getBytes("ISO-8859-1");
         sIrhS[var5] = bPW(((Cipher)var4[0]).doFinal(var9));
      }

      return sIrhS[var5];
   }

   private static Object bPY(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bPX(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static CallSite bPZ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bPY".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kk" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static class_276 bPJ(class_276 param0, class_276 param1, class_276 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kk.mwola J
      // 03: ldc2_w 40840369634840
      // 06: lxor
      // 07: lstore 3
      // 08: invokestatic sixtwo/kk.bPU ()Ljava/lang/String;
      // 0b: astore 5
      // 0d: aload 1
      // 0e: aload 5
      // 10: ifnull 50
      // 13: ifnull 4f
      // 16: goto 1d
      // 19: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: aload 1
      // 1e: aload 5
      // 20: ifnull 50
      // 23: goto 2a
      // 26: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 29: athrow
      // 2a: aload 0
      // 2b: if_acmpeq 4f
      // 2e: goto 35
      // 31: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 34: athrow
      // 35: aload 1
      // 36: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 39: aload 5
      // 3b: ifnull a0
      // 3e: goto 45
      // 41: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 44: athrow
      // 45: ifnonnull 93
      // 48: goto 4f
      // 4b: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 4e: athrow
      // 4f: aload 2
      // 50: aload 5
      // 52: ifnull 92
      // 55: ifnull 91
      // 58: goto 5f
      // 5b: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5e: athrow
      // 5f: aload 2
      // 60: aload 5
      // 62: ifnull 92
      // 65: goto 6c
      // 68: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 6b: athrow
      // 6c: aload 0
      // 6d: if_acmpeq 91
      // 70: goto 77
      // 73: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 76: athrow
      // 77: aload 2
      // 78: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 7b: aload 5
      // 7d: ifnull a0
      // 80: goto 87
      // 83: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 86: athrow
      // 87: ifnonnull 93
      // 8a: goto 91
      // 8d: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 90: athrow
      // 91: aload 0
      // 92: areturn
      // 93: getstatic sixtwo/kk.Nuddf Lsixtwo/ls;
      // 96: aload 0
      // 97: invokevirtual sixtwo/ls.caL (Lnet/minecraft/class_276;)V
      // 9a: getstatic sixtwo/kk.Nuddf Lsixtwo/ls;
      // 9d: invokevirtual sixtwo/ls.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // a0: aload 5
      // a2: ifnull b9
      // a5: ifnonnull b5
      // a8: goto af
      // ab: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ae: athrow
      // af: aload 0
      // b0: areturn
      // b1: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b4: athrow
      // b5: aload 0
      // b6: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // b9: getstatic sixtwo/kk.Nuddf Lsixtwo/ls;
      // bc: invokevirtual sixtwo/ls.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // bf: bipush 0
      // c0: bipush 0
      // c1: bipush 0
      // c2: bipush 0
      // c3: bipush 0
      // c4: aload 0
      // c5: getfield net/minecraft/class_276.field_1482 I
      // c8: aload 0
      // c9: getfield net/minecraft/class_276.field_1481 I
      // cc: invokestatic sixtwo/lu.cbf (Lcom/mojang/blaze3d/textures/GpuTexture;Lcom/mojang/blaze3d/textures/GpuTexture;IIIIIII)V
      // cf: getstatic sixtwo/kR.cSPla Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // d2: aload 1
      // d3: invokestatic sixtwo/kk.bPK (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_276;)V
      // d6: getstatic sixtwo/kR.VkokZ Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // d9: aload 2
      // da: invokestatic sixtwo/kk.bPK (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_276;)V
      // dd: getstatic sixtwo/kk.Nuddf Lsixtwo/ls;
      // e0: areturn
   }

   private static String bPW(byte[] var0) {
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

   static {
      bPT("TtXFt");
      long var0 = mwola ^ 58735732727662L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var9 = new String[10];
      int var7 = 0;
      String var6 = "@\u0001!\u001f-├Ź├ëK\u0084W├ť\u008f├║├ľ\u0091├Á\u0018\u0005[Z┬¬\t\u000e├ĺ┬┤├ő├ź├ś\n\u0091\u009fu|├░├Ě'├ž9R├│z J├î;`├ôk]\u0085\u0013\u0082\t\u0098├║\u007f┬Ěd┬«lk┬žY\u001b$┬ó├é┬Ş9\u001e├ľ├É\u0093S ├░\u001f├â3┬Č┬Ž├ąAZ^04┬»├ä├ęi\u0010\u0000├ó\u008e%├×U\u0089┬╗├ť├░┬┐2├ćVb\u0010\u0094gi2┬ĚH├Ł┬«ve├Ä├ĽOL\u00028\u0010\u009e├á├Ťj\u008c├śx├▓┬Ą|!├Ż\u0095&'├ë\u0010┬ę┬ą\u0080\u000b\u0085├Ě├č├î┬Ád\u00138├ľ├č├ąv \u0095s\u0099├ç├Ś#├¬0┬ž├╣├ę┬Á]├Ť┬Ě├Ä-┬ę├î~#┬Č2\u008d>├ś*├ąG├ľ├Ť┬Č";
      int var8 = "@\u0001!\u001f-├Ź├ëK\u0084W├ť\u008f├║├ľ\u0091├Á\u0018\u0005[Z┬¬\t\u000e├ĺ┬┤├ő├ź├ś\n\u0091\u009fu|├░├Ě'├ž9R├│z J├î;`├ôk]\u0085\u0013\u0082\t\u0098├║\u007f┬Ěd┬«lk┬žY\u001b$┬ó├é┬Ş9\u001e├ľ├É\u0093S ├░\u001f├â3┬Č┬Ž├ąAZ^04┬»├ä├ęi\u0010\u0000├ó\u008e%├×U\u0089┬╗├ť├░┬┐2├ćVb\u0010\u0094gi2┬ĚH├Ł┬«ve├Ä├ĽOL\u00028\u0010\u009e├á├Ťj\u008c├śx├▓┬Ą|!├Ż\u0095&'├ë\u0010┬ę┬ą\u0080\u000b\u0085├Ě├č├î┬Ád\u00138├ľ├č├ąv \u0095s\u0099├ç├Ś#├¬0┬ž├╣├ę┬Á]├Ť┬Ě├Ä-┬ę├î~#┬Č2\u008d>├ś*├ąG├ľ├Ť┬Č"
         .length();
      char var5 = 16;
      int var12 = -1;

      label27:
      while (true) {
         String var13 = var6.substring(++var12, var12 + var5);
         byte var10001 = -1;

         while (true) {
            byte[] var10 = var2.doFinal(var13.getBytes("ISO-8859-1"));
            String var19 = bPW(var10).intern();
            switch (var10001) {
               case 0:
                  var9[var7++] = var19;
                  if ((var12 += var5) >= var8) {
                     hFFWl = var9;
                     sIrhS = new String[10];
                     jvICx = new ls();
                     VfaRL = new ls();
                     zBYfN = new ls();
                     Nuddf = new ls();
                     xOjZJ = new kk$uf();
                     KRReU = new kk$uf();
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

                  var6 = "\u007f┬╣\u001fI\u007ftJi┬Ş┬Ş>├ž├Čs┬ó\n\u001a┬ą├ü┬Ż|\"├âwCjh┬┐┬║├áf├Ľ \u0087\u001b\u0086\u0019\u0096├Ľ┬í'8┬ĄQn├ë*\u0019M├ú├Ę9\u0015sq\f┬░├ĆdBb\u007f+├▒8";
                  var8 = "\u007f┬╣\u001fI\u007ftJi┬Ş┬Ş>├ž├Čs┬ó\n\u001a┬ą├ü┬Ż|\"├âwCjh┬┐┬║├áf├Ľ \u0087\u001b\u0086\u0019\u0096├Ľ┬í'8┬ĄQn├ë*\u0019M├ú├Ę9\u0015sq\f┬░├ĆdBb\u007f+├▒8"
                     .length();
                  var5 = ' ';
                  var12 = -1;
            }

            var13 = var6.substring(++var12, var12 + var5);
            var10001 = 0;
         }
      }
   }

   public static void bPH() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/kk.mwola J
      // 03: ldc2_w 2148706168810
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/kk.bPU ()Ljava/lang/String;
      // 0b: invokestatic sixtwo/rD.dlM ()Lsixtwo/ii;
      // 0e: astore 3
      // 0f: astore 2
      // 10: aload 3
      // 11: invokevirtual sixtwo/ii.bjh ()F
      // 14: fstore 4
      // 16: invokestatic sixtwo/jo.bEh ()Lnet/minecraft/class_276;
      // 19: astore 5
      // 1b: aload 5
      // 1d: aload 2
      // 1e: ifnull 38
      // 21: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 24: ifnonnull 33
      // 27: goto 2e
      // 2a: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: return
      // 2f: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 32: athrow
      // 33: aload 5
      // 35: invokestatic sixtwo/kk.bPI (Lnet/minecraft/class_276;)Lnet/minecraft/class_276;
      // 38: astore 6
      // 3a: aload 6
      // 3c: aload 2
      // 3d: ifnull 4c
      // 40: ifnull 5d
      // 43: goto 4a
      // 46: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 49: athrow
      // 4a: aload 6
      // 4c: aload 2
      // 4d: ifnull 64
      // 50: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 53: ifnonnull 62
      // 56: goto 5d
      // 59: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 5c: athrow
      // 5d: return
      // 5e: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 61: athrow
      // 62: aload 6
      // 64: getstatic sixtwo/kk.VfaRL Lsixtwo/ls;
      // 67: aload 3
      // 68: invokevirtual sixtwo/ii.bjg ()F
      // 6b: fload 4
      // 6d: getstatic sixtwo/kk.xOjZJ Lsixtwo/kk$uf;
      // 70: invokestatic sixtwo/kk.bPM (Lnet/minecraft/class_276;Lsixtwo/ls;FFLsixtwo/kk$uf;)V
      // 73: aload 3
      // 74: invokevirtual sixtwo/ii.bjm ()F
      // 77: fconst_0
      // 78: aload 2
      // 79: ifnull ea
      // 7c: fcmpl
      // 7d: ifne d2
      // 80: goto 87
      // 83: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 86: athrow
      // 87: getstatic sixtwo/kk.zBYfN Lsixtwo/ls;
      // 8a: aload 6
      // 8c: invokevirtual sixtwo/ls.caL (Lnet/minecraft/class_276;)V
      // 8f: getstatic sixtwo/kk.zBYfN Lsixtwo/ls;
      // 92: invokevirtual sixtwo/ls.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // 95: aload 2
      // 96: ifnull b6
      // 99: goto a0
      // 9c: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 9f: athrow
      // a0: ifnull f6
      // a3: goto aa
      // a6: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // a9: athrow
      // aa: aload 6
      // ac: invokevirtual net/minecraft/class_276.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // af: goto b6
      // b2: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // b5: athrow
      // b6: getstatic sixtwo/kk.zBYfN Lsixtwo/ls;
      // b9: invokevirtual sixtwo/ls.method_30277 ()Lcom/mojang/blaze3d/textures/GpuTexture;
      // bc: bipush 0
      // bd: bipush 0
      // be: bipush 0
      // bf: bipush 0
      // c0: bipush 0
      // c1: aload 6
      // c3: getfield net/minecraft/class_276.field_1482 I
      // c6: aload 6
      // c8: getfield net/minecraft/class_276.field_1481 I
      // cb: invokestatic sixtwo/lu.cbf (Lcom/mojang/blaze3d/textures/GpuTexture;Lcom/mojang/blaze3d/textures/GpuTexture;IIIIIII)V
      // ce: aload 2
      // cf: ifnonnull f6
      // d2: ldc 32.0
      // d4: aload 3
      // d5: invokevirtual sixtwo/ii.bjm ()F
      // d8: ldc 100.0
      // da: fdiv
      // db: f2d
      // dc: ldc2_w 0.4300000071525574
      // df: invokestatic java/lang/Math.pow (DD)D
      // e2: d2f
      // e3: goto ea
      // e6: invokestatic sixtwo/kk.bPV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // e9: athrow
      // ea: fmul
      // eb: fstore 7
      // ed: aload 6
      // ef: fload 7
      // f1: fload 4
      // f3: invokestatic sixtwo/kk.bPL (Lnet/minecraft/class_276;FF)V
      // f6: return
   }

   public static String bPU() {
      return RgAjr;
   }

   public static class_276 bPN() {
      return VfaRL;
   }
}
