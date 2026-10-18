package sixtwo;

import com.mojang.blaze3d.pipeline.RenderPipeline;
import com.mojang.blaze3d.vertex.VertexFormat.DrawMode;
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
import net.minecraft.client.render.BuiltBuffer;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Vector3f;

public class kL extends kQ<kF> {
   private static final kS KtzKR;
   private kS BqxhS;
   private static final long kQaAU = gb.aYR(-2390169667897376212L, -1954908186537105610L, MethodHandles.lookup().lookupClass()).a(147860847569689L);
   private static final String[] aMlMg;
   private static final String[] xcFLb;
   private static final Map DpEGO = new HashMap(13);

   static {
      long var0 = kQaAU ^ 40914106012534L;
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
      String var6 = "\"hRÝ^\u0091E\t¾{k\u00012;\nFÂ\u0015c\u0004M\u001au`n\u008eã\u0095«²:W p½?m[\u0010Ó\u0092\u0014eñ@â=\u007f§`\u009d ÉöÊPÉ\u0094;ÄÝé\u0006Øÿ";
      int var8 = "\"hRÝ^\u0091E\t¾{k\u00012;\nFÂ\u0015c\u0004M\u001au`n\u008eã\u0095«²:W p½?m[\u0010Ó\u0092\u0014eñ@â=\u007f§`\u009d ÉöÊPÉ\u0094;ÄÝé\u0006Øÿ"
         .length();
      char var5 = ' ';
      int var4 = -1;

      while (true) {
         byte[] var10 = var2.doFinal(var6.substring(++var4, var4 + var5).getBytes("ISO-8859-1"));
         String var13 = bUC(var10).intern();
         byte var10001 = -1;
         var9[var7++] = var13;
         if ((var4 += var5) >= var8) {
            aMlMg = var9;
            xcFLb = new String[2];
            KtzKR = kS.bVE().duk(lh.GpGUc).duo(false).dul(false).dun(true).dup();
            return;
         }

         var5 = var6.charAt(var4);
      }
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   @Override
   public void flush() {
      long var1 = kQaAU ^ 44307588403171L;
      boolean var10000 = kJ.bUi();
      this.bVj();
      BuiltBuffer var4 = this.WfBOj.endNullable();
      boolean var3 = var10000;

      label64: {
         try {
            label62: {
               try {
                  var14 = var4;
                  if (var3) {
                     break label64;
                  }

                  if (var4 == null) {
                     break label62;
                  }
               } catch (Throwable var11) {
                  throw bUB(var11);
               }

               RenderPipeline var5 = kR.hvBSz.bUZ(this.BqxhS);
               lF.cfQ(var5, var4, var1x -> this.bUy());
            }
         } catch (Throwable var12) {
            label43: {
               try {
                  var13 = var4;
                  if (var3) {
                     break label43;
                  }

                  if (var4 == null) {
                     throw var12;
                  }
               } catch (Throwable var9) {
                  throw bUB(var9);
               }

               try {
                  var13 = var4;
               } catch (Throwable var8) {
                  var12.addSuppressed(var8);
                  throw var12;
               }
            }

            try {
               var13.close();
            } catch (Throwable var7) {
               var12.addSuppressed(var7);
            }

            throw var12;
         }

         var14 = var4;
      }

      label54: {
         label53: {
            try {
               if (var3) {
                  break label53;
               }

               if (var14 == null) {
                  break label54;
               }
            } catch (Throwable var10) {
               throw bUB(var10);
            }

            var14 = var4;
         }

         var14.close();
      }

      this.bVi(DrawMode.LINES, VertexFormats.POSITION_COLOR_NORMAL_LINE_WIDTH);
   }

   @Override
   public kS defaultState() {
      return KtzKR;
   }

   @Override
   public void startBatch(kS var1) {
      this.BqxhS = var1;
      this.bVi(DrawMode.LINES, VertexFormats.POSITION_COLOR_NORMAL_LINE_WIDTH);
   }

   // $VF: Handled exception range with multiple entry points by splitting it
   // $VF: Duplicated exception handlers to handle obfuscated exceptions
   @Override
   public void endBatch() {
      long var1 = kQaAU ^ 27522784980062L;
      boolean var10000 = kJ.bUj();
      this.bVj();
      boolean var3 = var10000;
      BuiltBuffer var4 = this.WfBOj.endNullable();

      label64: {
         try {
            label62: {
               try {
                  var14 = var4;
                  if (!var3) {
                     break label64;
                  }

                  if (var4 == null) {
                     break label62;
                  }
               } catch (Throwable var11) {
                  throw bUB(var11);
               }

               RenderPipeline var5 = kR.hvBSz.bUZ(this.BqxhS);
               lF.cfQ(var5, var4, var1x -> this.bUy());
            }
         } catch (Throwable var12) {
            label43: {
               try {
                  var13 = var4;
                  if (!var3) {
                     break label43;
                  }

                  if (var4 == null) {
                     throw var12;
                  }
               } catch (Throwable var9) {
                  throw bUB(var9);
               }

               try {
                  var13 = var4;
               } catch (Throwable var8) {
                  var12.addSuppressed(var8);
                  throw var12;
               }
            }

            try {
               var13.close();
            } catch (Throwable var7) {
               var12.addSuppressed(var7);
            }

            throw var12;
         }

         var14 = var4;
      }

      label54: {
         label53: {
            try {
               if (!var3) {
                  break label53;
               }

               if (var14 == null) {
                  break label54;
               }
            } catch (Throwable var10) {
               throw bUB(var10);
            }

            var14 = var4;
         }

         var14.close();
      }

      this.bVl();
   }

   private static String bUD(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 31101;
      if (xcFLb[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])DpEGO.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               DpEGO.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/kL", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = aMlMg[var5].getBytes("ISO-8859-1");
         xcFLb[var5] = bUC(((Cipher)var4[0]).doFinal(var9));
      }

      return xcFLb[var5];
   }

   private static String bUC(byte[] var0) {
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

   private static Throwable bUB(Throwable var0) {
      return var0;
   }

   private void bUy() {
      long var1 = kQaAU ^ 120567231845825L;
      jL.ARZDF.bJl();
      jL.ARZDF.bJr(bUF<"w">(9909, 6034573516308475036L ^ var1), rD.dlmvG.getFramebuffer().textureWidth, rD.dlmvG.getFramebuffer().textureHeight);
      jL.ARZDF.bJu(bUF<"w">(21379, 5240950752128833963L ^ var1), jF.bHw());
   }

   private void bUw(MatrixStack var1, float var2, float var3, float var4, float var5, float var6, float var7, int var8, float var9) {
      Matrix4f var10 = var1.peek().getPositionMatrix();
      Vector3f var11 = this.bUx(var2, var3, var4, var5, var6, var7);
      this.WfBOj.vertex(var10, var2, var3, var4).color(var8).normal(var1.peek(), var11.x(), var11.y(), var11.z()).lineWidth(var9);
      this.WfBOj.vertex(var10, var5, var6, var7).color(var8).normal(var1.peek(), var11.x(), var11.y(), var11.z()).lineWidth(var9);
   }

   private static CallSite bUF(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("bUE".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/kL" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private Vector3f bUx(float var1, float var2, float var3, float var4, float var5, float var6) {
      float var7 = var4 - var1;
      float var8 = var5 - var2;
      float var9 = var6 - var3;
      float var10 = MathHelper.sqrt(var7 * var7 + var8 * var8 + var9 * var9);
      return new Vector3f(var7 / var10, var8 / var10, var9 / var10);
   }

   private static Object bUE(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = bUD(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   public void bUv(kF var1) {
      this.bVj();
      Vec3d var2 = var1.bTr();
      Vec3d var3 = var1.bTs();
      MatrixStack var4 = jI.bIo(var2);
      int var5 = var1.bTt().coh();
      float var6 = var1.bTu();
      Vec3d var7 = var3.subtract(var2);
      this.bUw(var4, 0.0F, 0.0F, 0.0F, (float)var7.x, (float)var7.y, (float)var7.z, var5, var6);
   }
}
