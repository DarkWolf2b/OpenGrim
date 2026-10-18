package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_1297;
import net.minecraft.class_1657;
import net.minecraft.class_243;
import net.minecraft.class_3532;
import net.minecraft.class_2828.class_2830;

public class iV {
   public static final ov uTmcD = ov.cGx(new class_243(0.0, 20.0, 0.0));
   public static final ov XsgMs = ov.cGx(new class_243(0.0, -20.0, 0.0));
   public static final ov Qhihw = ov.cGx(new class_243(20.0, 0.0, 0.0));
   public static final ov BzuYL = ov.cGx(new class_243(-20.0, 0.0, 0.0));
   public static final ov HGROY = ov.cGx(new class_243(0.0, 0.0, 20.0));
   public static final ov GDobf = ov.cGx(new class_243(0.0, 0.0, -20.0));
   private static final long iPecI = gb.aYR(879203543032306159L, 1449607818855702903L, MethodHandles.lookup().lookupClass()).a(246983329538410L);

   public static class_243 bxi(float var0, float var1) {
      float var2 = var0 * (float) (Math.PI / 180.0);
      float var3 = -var1 * (float) (Math.PI / 180.0);
      float var4 = class_3532.method_15362(var3);
      float var5 = class_3532.method_15374(var3);
      float var6 = class_3532.method_15362(var2);
      float var7 = class_3532.method_15374(var2);
      return new class_243(var5 * var6, -var7, var4 * var6);
   }

   public static ov bxe(ov var0, ov var1) {
      long var2 = iPecI ^ 126126880332231L;
      String[] var10000 = jf.bBe();
      float var5 = class_3532.method_15393(var1.cGI() - var0.cGI());
      String[] var4 = var10000;
      float var6 = class_3532.method_15393(var1.cGJ() - var0.cGJ());

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

   public static class_243 bxh(class_1657 var0) {
      float var1 = rD.dlmvG.method_61966().method_60637(true);
      return bxi(var0.method_5695(var1), var0.method_5705(var1));
   }

   public static double bxf(class_243 var0, class_243 var1, ov var2) {
      ov var3 = ov.cGx(var1.method_1020(var0));
      ov var4 = bxe(var2, var3);
      return Math.hypot(var4.cGI(), var4.cGJ());
   }

   public static double bxg(ov var0, class_1297 var1) {
      double var2 = class_3532.method_15393(var1.method_36454());
      double var4 = class_3532.method_15393(var1.method_36455());
      double var6 = class_3532.method_15338(var2 - var0.cGI());
      double var8 = class_3532.method_15338(var4 - var0.cGJ());
      return Math.sqrt(var6 * var6 + var8 * var8);
   }

   public static double bxj(class_243 var0) {
      return Math.toDegrees(Math.atan2(var0.method_10215(), var0.method_10216())) - 90.0;
   }

   public static void bxk(class_243 var0) {
      ov var1 = bxm(var0);
      bxl(var1);
   }

   public static void bxl(ov var0) {
      rD.dlmvG
         .method_1562()
         .method_52787(
            new class_2830(
               rD.dlmvG.field_1724.method_23317(),
               rD.dlmvG.field_1724.method_23318(),
               rD.dlmvG.field_1724.method_23321(),
               var0.cGI(),
               var0.cGJ(),
               rD.dlmvG.field_1724.method_24828(),
               rD.dlmvG.field_1724.field_5976
            )
         );
   }

   public static ov bxn(class_243 var0, class_243 var1) {
      double var2 = var1.field_1352 - var0.field_1352;
      double var4 = var1.field_1351 - var0.field_1351;
      double var6 = var1.field_1350 - var0.field_1350;
      float var8 = (float)Math.toDegrees(Math.atan2(var6, var2)) - 90.0F;
      double var9 = Math.sqrt(var2 * var2 + var6 * var6);
      float var11 = (float)(-Math.toDegrees(Math.atan2(var4, var9)));
      return ov.cGv(var8, var11);
   }

   public static ov bxm(class_243 var0) {
      class_243 var1 = new class_243(
         rD.dlmvG.field_1724.method_23317(),
         rD.dlmvG.field_1724.method_23318() + rD.dlmvG.field_1724.method_18381(rD.dlmvG.field_1724.method_18376()),
         rD.dlmvG.field_1724.method_23321()
      );
      return bxn(var1, var0);
   }
}
