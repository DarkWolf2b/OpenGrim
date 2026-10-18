package sixtwo;

import com.mojang.blaze3d.systems.RenderSystem;
import com.mojang.blaze3d.textures.GpuTextureView;
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
import net.minecraft.class_10017;
import net.minecraft.class_12075;
import net.minecraft.class_1921;
import net.minecraft.class_243;
import net.minecraft.class_2960;
import net.minecraft.class_4587;
import net.minecraft.class_4608;
import net.minecraft.class_591;
import net.minecraft.class_7833;
import net.minecraft.class_898;
import net.minecraft.class_308.class_11274;
import net.minecraft.class_4597.class_4598;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.joml.Quaternionf;

public final class jr {
   private static final float yNuSl = -10850.0F;
   private static jC ajsvX;
   private static final long xwomO = gb.aYR(-5308184261290161932L, 8937719512333401079L, MethodHandles.lookup().lookupClass()).a(270939487081972L);
   private static final long[] AIvOD;
   private static final Integer[] SIjrl;
   private static final Map avqBf = new HashMap(13);

   static {
      long var0 = xwomO ^ 33864161917475L;
      Cipher var2;
      Cipher var10000 = var2 = Cipher.getInstance("DES/CBC/NoPadding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var0 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var3 = 1; var3 < 8; var3++) {
         var10003[var3] = (byte)(var0 << var3 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var8 = new long[2];
      int var5 = 0;
      String var6 = "R\u0092Å×\u0095RðpÎ\u0080\u0083ºEEDë";
      int var7 = "R\u0092Å×\u0095RðpÎ\u0080\u0083ºEEDë".length();
      byte var4 = 0;

      do {
         int var10001 = var4;
         var4 += 8;
         byte[] var9 = var6.substring(var10001, var4).getBytes("ISO-8859-1");
         var10001 = var5++;
         long var10 = (var9[0] & 255L) << 56
            | (var9[1] & 255L) << 48
            | (var9[2] & 255L) << 40
            | (var9[3] & 255L) << 32
            | (var9[4] & 255L) << 24
            | (var9[5] & 255L) << 16
            | (var9[6] & 255L) << 8
            | var9[7] & 255L;
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
         long var10004 = (var12[0] & 255L) << 56
            | (var12[1] & 255L) << 48
            | (var12[2] & 255L) << 40
            | (var12[3] & 255L) << 32
            | (var12[4] & 255L) << 24
            | (var12[5] & 255L) << 16
            | (var12[6] & 255L) << 8
            | var12[7] & 255L;
         byte var14 = -1;
         var8[var10001] = var10004;
      } while (var4 < var7);

      AIvOD = var8;
      SIjrl = new Integer[2];
   }

   public static void bFt(Matrix3x2fc var0, class_591 var1, class_2960 var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9) {
      long var10 = xwomO ^ 32198564516877L;
      String[] var10000 = js.bFF();
      class_4587 var13 = jI.bIm(var0);
      String[] var12 = var10000;
      var13.method_22903();
      var13.method_46416(var6 + var8 / 2.0F, var7 + var9, -10850.0F);
      var13.method_22905(var3, var3, var3);
      var13.method_46416(0.0F, -0.0625F, 0.0F);
      Matrix4f var14 = var13.method_23760().method_23761();
      var14.rotateAround(class_7833.field_40714.rotationDegrees(var4), 0.0F, -1.0625F, 0.0F);
      var13.method_22907(class_7833.field_40716.rotationDegrees(var5));
      jC var15 = bFv();
      class_4598 var16 = var15.bGU();
      GpuTextureView var17 = RenderSystem.outputColorTextureOverride;
      GpuTextureView var18 = RenderSystem.outputDepthTextureOverride;
      rD.dlmvG.field_1773.method_71114().method_71034(class_11274.field_60029);

      try {
         var13.method_22903();
         var13.method_34425(new Matrix4f().scaling(1.0F, 1.0F, -1.0F));
         var13.method_46416(0.0F, -1.5F, 0.0F);
         class_1921 var19 = var1.method_23500(var2);
         int var20 = mG.hoGuU.coa(255.0F * jF.bHy()).coh();
         var1.method_62100(var13, var16.method_73477(var19), bFz<"k">(24324, 6741020437240621114L ^ var10), class_4608.field_21444, var20);
         var13.method_22909();
      } finally {
         try {
            var15.bGY();
         } finally {
            rD.dlmvG.field_1773.method_71114().method_71034(class_11274.field_60027);
            RenderSystem.outputColorTextureOverride = var17;
            RenderSystem.outputDepthTextureOverride = var18;
         }
      }

      try {
         var13.method_22909();
         if (var12 != null) {
            iS.bwK("zirxw");
         }
      } catch (MatchException var37) {
         throw bFw(var37);
      }
   }

   static void bFu(
      Matrix3x2fc var0, class_10017 var1, float var2, class_243 var3, Quaternionf var4, Quaternionf var5, float var6, float var7, float var8, float var9
   ) {
      long var10 = xwomO ^ 59743156897130L;
      js.bFF();
      class_4587 var13 = jI.bIm(var0);
      var13.method_46416(var6 + var8 / 2.0F, var7 + var9 / 2.0F, -10850.0F);
      var13.method_22905(var2, var2, -var2);
      GpuTextureView var14 = RenderSystem.outputColorTextureOverride;
      GpuTextureView var15 = RenderSystem.outputDepthTextureOverride;
      rD.dlmvG.field_1773.method_71114().method_71034(class_11274.field_60028);
      var1.field_61820 = bFz<"k">(21672, 6362154092957840112L ^ var10);
      jC var16 = bFv();
      js.bFA();

      try {
         var13.method_61958(var3);
         var13.method_22907(var4);
         var13.method_22907(class_7833.field_40718.rotationDegrees(180.0F));
         class_12075 var17 = new class_12075();

         try {
            if (var5 != null) {
               var17.field_63081 = var5.conjugate(new Quaternionf()).rotateY((float) Math.PI);
            }
         } catch (MatchException var39) {
            throw bFw(var39);
         }

         class_898 var18 = rD.dlmvG.method_1561();
         var18.method_72976(var1, var17, 0.0, 0.0, 0.0, var13, var16.bGT());
      } finally {
         try {
            js.bFB();
            var16.bGY();
         } finally {
            rD.dlmvG.field_1773.method_71114().method_71034(class_11274.field_60027);
            RenderSystem.outputColorTextureOverride = var14;
            RenderSystem.outputDepthTextureOverride = var15;
         }
      }

      try {
         if (iS.bwL() == null) {
            js.bFE(new String[2]);
         }
      } catch (MatchException var38) {
         throw bFw(var38);
      }
   }

   private static int bFx(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 21576;
      if (SIjrl[var3] == null) {
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
         long var5 = AIvOD[var3];
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
         Object[] var9 = (Object[])avqBf.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               avqBf.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/jr", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         SIjrl[var3] = var15;
      }

      return SIjrl[var3];
   }

   private static int bFy(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = bFx(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static MatchException bFw(MatchException var0) {
      return var0;
   }

   private static jC bFv() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/jr.xwomO J
      // 03: ldc2_w 133629905690959
      // 06: lxor
      // 07: lstore 0
      // 08: invokestatic sixtwo/js.bFF ()[Ljava/lang/String;
      // 0b: astore 2
      // 0c: getstatic sixtwo/jr.ajsvX Lsixtwo/jC;
      // 0f: aload 2
      // 10: ifnonnull 31
      // 13: ifnonnull 2e
      // 16: goto 1d
      // 19: invokestatic sixtwo/jr.bFw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1c: athrow
      // 1d: new sixtwo/jC
      // 20: dup
      // 21: invokespecial sixtwo/jC.<init> ()V
      // 24: putstatic sixtwo/jr.ajsvX Lsixtwo/jC;
      // 27: goto 2e
      // 2a: invokestatic sixtwo/jr.bFw (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 2d: athrow
      // 2e: getstatic sixtwo/jr.ajsvX Lsixtwo/jC;
      // 31: areturn
   }

   private static CallSite bFz(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bFy".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/jr" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }
}
