package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.render.BufferBuilder;
import org.joml.Matrix3x2fStack;

public class kb implements kc {
   private static int[] XoDvl;
   private static final long dzPrA = gb.aYR(3512256792401566856L, -5836583734373741107L, MethodHandles.lookup().lookupClass()).a(13982792772499L);

   @Override
   public void uv_quad_region_color(
      BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9, float var10, mG var11
   ) {
      long var12 = dzPrA ^ 125031148427593L;
      int var15 = var11.coh();
      var1.vertex(var2, var3, var4).texture(var7, var8).color(var15);
      var1.vertex(var2, var3, var4 + var6).texture(var7, var10).color(var15);
      int[] var10000 = bOb();
      var1.vertex(var2, var3 + var5, var4 + var6).texture(var9, var10).color(var15);
      int[] var14 = var10000;

      try {
         var1.vertex(var2, var3 + var5, var4).texture(var9, var8).color(var15);
         if (var14 != null) {
            iS.bwK("LdyUFb");
         }
      } catch (MatchException var16) {
         throw bOc(var16);
      }
   }

   static {
      if (bOb() != null) {
         bOa(new int[5]);
      }
   }

   private static MatchException bOc(MatchException var0) {
      return var0;
   }

   public static int[] bOb() {
      return XoDvl;
   }

   @Override
   public void uv_quad(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6) {
      var1.vertex(var2, var3, var4).texture(0.0F, 0.0F);
      var1.vertex(var2, var3, var4 + var6).texture(0.0F, 1.0F);
      var1.vertex(var2, var3 + var5, var4 + var6).texture(1.0F, 1.0F);
      var1.vertex(var2, var3 + var5, var4).texture(1.0F, 0.0F);
   }

   @Override
   public void quad(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6) {
      var1.vertex(var2, var3, var4);
      var1.vertex(var2, var3, var4 + var6);
      var1.vertex(var2, var3 + var5, var4 + var6);
      var1.vertex(var2, var3 + var5, var4);
   }

   @Override
   public void quad_color(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6, mG var7) {
      int var8 = var7.coh();
      var1.vertex(var2, var3, var4).color(var8);
      var1.vertex(var2, var3, var4 + var6).color(var8);
      var1.vertex(var2, var3 + var5, var4 + var6).color(var8);
      var1.vertex(var2, var3 + var5, var4).color(var8);
   }

   @Override
   public void quad_color(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6, la var7) {
      var1.vertex(var2, var3, var4).color(var7.bXe().coh());
      var1.vertex(var2, var3, var4 + var6).color(var7.bXg().coh());
      var1.vertex(var2, var3 + var5, var4 + var6).color(var7.bXh().coh());
      var1.vertex(var2, var3 + var5, var4).color(var7.bXf().coh());
   }

   public static void bOa(int[] var0) {
      XoDvl = var0;
   }

   @Override
   public void uv_quad_color(BufferBuilder var1, Matrix3x2fStack var2, float var3, float var4, float var5, float var6, mG var7) {
      long var8 = dzPrA ^ 60648780115500L;
      int var11 = var7.coh();
      bOb();
      var1.vertex(var2, var3, var4).texture(0.0F, 0.0F).color(var11);

      try {
         var1.vertex(var2, var3, var4 + var6).texture(0.0F, 1.0F).color(var11);
         var1.vertex(var2, var3 + var5, var4 + var6).texture(1.0F, 1.0F).color(var11);
         var1.vertex(var2, var3 + var5, var4).texture(1.0F, 0.0F).color(var11);
         if (iS.bwL() == null) {
            bOa(new int[4]);
         }
      } catch (MatchException var12) {
         throw bOc(var12);
      }
   }
}
