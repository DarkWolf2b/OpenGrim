package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

public abstract class mq {
   protected Vec3d vMbcc;
   protected Vec3d fmdTe;
   protected Vec3d AkpJr;
   protected mp XIaIs;
   protected float hMiLh;
   private static int nELfM;
   private static final long fnWhW = gb.aYR(-7470366193575900063L, 157527839226905763L, MethodHandles.lookup().lookupClass()).a(3765218645199L);

   public mq(Vec3d var1, Vec3d var2, mp var3, float var4) {
      long var5 = fnWhW ^ 13866980424024L;
      int var10000 = clO();
      super();
      this.vMbcc = var1;
      this.fmdTe = var1;
      int var7 = var10000;

      try {
         this.AkpJr = var2;
         this.XIaIs = var3;
         this.hMiLh = var4;
         if (iS.bwL() == null) {
            clM(++var7);
         }
      } catch (MatchException var8) {
         throw clP(var8);
      }
   }

   static {
      if (clO() != 0) {
         clM(16);
      }
   }

   public abstract void cls(MatrixStack var1, float var2);

   public static void clM(int var0) {
      nELfM = var0;
   }

   private static MatchException clP(MatchException var0) {
      return var0;
   }

   public static int clO() {
      int var0 = clN();

      try {
         return var0 == 0 ? 24 : 0;
      } catch (MatchException var1) {
         throw clP(var1);
      }
   }

   public static int clN() {
      return nELfM;
   }

   public abstract boolean clp();

   public abstract void clr(MatrixStack var1, float var2, mG var3);

   public Vec3d clL(float var1) {
      long var2 = fnWhW ^ 76646303141266L;
      int var10000 = clN();
      double var5 = MathHelper.lerp((double)var1, this.fmdTe.x, this.vMbcc.x);
      int var4 = var10000;
      double var7 = MathHelper.lerp((double)var1, this.fmdTe.y, this.vMbcc.y);
      double var9 = MathHelper.lerp((double)var1, this.fmdTe.z, this.vMbcc.z);

      try {
         Vec3d var12 = new Vec3d(var5, var7, var9);
         if (var4 == 0) {
            iS.bwK("NMVZ3");
         }

         return var12;
      } catch (MatchException var11) {
         throw clP(var11);
      }
   }

   public abstract void clq(MatrixStack var1, float var2, mG var3);
}
