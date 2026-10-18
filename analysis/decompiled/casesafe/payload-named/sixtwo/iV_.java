package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.network.packet.c2s.play.PlayerMoveC2SPacket.Full;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;

public class iV {
   public static final ov uTmcD = ov.cGx(new Vec3d(0.0, 20.0, 0.0));
   public static final ov XsgMs = ov.cGx(new Vec3d(0.0, -20.0, 0.0));
   public static final ov Qhihw = ov.cGx(new Vec3d(20.0, 0.0, 0.0));
   public static final ov BzuYL = ov.cGx(new Vec3d(-20.0, 0.0, 0.0));
   public static final ov HGROY = ov.cGx(new Vec3d(0.0, 0.0, 20.0));
   public static final ov GDobf = ov.cGx(new Vec3d(0.0, 0.0, -20.0));
   private static final long iPecI = gb.aYR(879203543032306159L, 1449607818855702903L, MethodHandles.lookup().lookupClass()).a(246983329538410L);

   public static Vec3d bxi(float var0, float var1) {
      float var2 = var0 * (float) (Math.PI / 180.0);
      float var3 = -var1 * (float) (Math.PI / 180.0);
      float var4 = MathHelper.cos(var3);
      float var5 = MathHelper.sin(var3);
      float var6 = MathHelper.cos(var2);
      float var7 = MathHelper.sin(var2);
      return new Vec3d(var5 * var6, -var7, var4 * var6);
   }

   public static ov bxe(ov var0, ov var1) {
      long var2 = iPecI ^ 126126880332231L;
      String[] var10000 = jf.bBe();
      float var5 = MathHelper.wrapDegrees(var1.cGI() - var0.cGI());
      String[] var4 = var10000;
      float var6 = MathHelper.wrapDegrees(var1.cGJ() - var0.cGJ());

      label34: {
         label33: {
            try {
               float var11;
               var9 = (var11 = var6 - -180.0F) == 0.0F ? 0 : (var11 < 0.0F ? -1 : 1);
               if (var4 == null) {
                  break label34;
               }

               if (var9) {
                  break label33;
               }
            } catch (MatchException var8) {
               throw bxo(var8);
            }

            var6 = 180.0F;
         }

         try {
            if (var4 == null) {
               return ov.cGv(var5, -180.0F);
            }

            float var12;
            var9 = (var12 = var5 - -180.0F) == 0.0F ? 0 : (var12 < 0.0F ? -1 : 1);
         } catch (MatchException var7) {
            throw bxo(var7);
         }
      }

      if (!var9) {
         var5 = 180.0F;
      }

      return ov.cGv(var5, var6);
   }

   private static MatchException bxo(MatchException var0) {
      return var0;
   }

   public static Vec3d bxh(PlayerEntity var0) {
      float var1 = rD.dlmvG.getRenderTickCounter().getTickProgress(true);
      return bxi(var0.getPitch(var1), var0.getYaw(var1));
   }

   public static double bxf(Vec3d var0, Vec3d var1, ov var2) {
      ov var3 = ov.cGx(var1.subtract(var0));
      ov var4 = bxe(var2, var3);
      return Math.hypot(var4.cGI(), var4.cGJ());
   }

   public static double bxg(ov var0, Entity var1) {
      double var2 = MathHelper.wrapDegrees(var1.getYaw());
      double var4 = MathHelper.wrapDegrees(var1.getPitch());
      double var6 = MathHelper.wrapDegrees(var2 - var0.cGI());
      double var8 = MathHelper.wrapDegrees(var4 - var0.cGJ());
      return Math.sqrt(var6 * var6 + var8 * var8);
   }

   public static double bxj(Vec3d var0) {
      return Math.toDegrees(Math.atan2(var0.getZ(), var0.getX())) - 90.0;
   }

   public static void bxk(Vec3d var0) {
      ov var1 = bxm(var0);
      bxl(var1);
   }

   public static void bxl(ov var0) {
      rD.dlmvG
         .getNetworkHandler()
         .sendPacket(
            new Full(
               rD.dlmvG.player.getX(),
               rD.dlmvG.player.getY(),
               rD.dlmvG.player.getZ(),
               var0.cGI(),
               var0.cGJ(),
               rD.dlmvG.player.isOnGround(),
               rD.dlmvG.player.horizontalCollision
            )
         );
   }

   public static ov bxn(Vec3d var0, Vec3d var1) {
      double var2 = var1.x - var0.x;
      double var4 = var1.y - var0.y;
      double var6 = var1.z - var0.z;
      float var8 = (float)Math.toDegrees(Math.atan2(var6, var2)) - 90.0F;
      double var9 = Math.sqrt(var2 * var2 + var6 * var6);
      float var11 = (float)(-Math.toDegrees(Math.atan2(var4, var9)));
      return ov.cGv(var8, var11);
   }

   public static ov bxm(Vec3d var0) {
      Vec3d var1 = new Vec3d(rD.dlmvG.player.getX(), rD.dlmvG.player.getY() + rD.dlmvG.player.getEyeHeight(rD.dlmvG.player.getPose()), rD.dlmvG.player.getZ());
      return bxn(var1, var0);
   }
}
