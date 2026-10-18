package sixtwo;

import java.lang.invoke.MethodHandles;

public class rj$vX extends rj$vZ {
   private static final long IbjMW = gb.aYR(4086739908687189420L, 8116594302885162020L, MethodHandles.lookup().lookupClass()).a(88831567327829L);

   public rj$vX() {
   }

   public rj$vX(float var1) {
      super(var1);
   }

   @Override
   public float dga(float var1, float var2, float var3, float var4) {
      long var5 = IbjMW ^ 435330306351L;
      float var8 = this.dyE();
      String[] var10000 = rk.dhz();
      var1 /= var4 / 2.0F;
      String[] var7 = var10000;

      label30: {
         float var10001;
         label29: {
            try {
               var15 = var1;
               var10001 = 1.0F;
               if (var7 != null) {
                  break label29;
               }

               if (var1 < 1.0F) {
                  break label30;
               }
            } catch (MatchException var10) {
               throw dyC(var10);
            }

            var8 *= 1.525F;
            float var12;
            var15 = var3 / 2.0F * ((var12 = var1 - 2.0F) * var12 * ((var8 + 1.0F) * var12 + var8) + 2.0F);
            var10001 = var2;
         }

         try {
            float var16 = var15 + var10001;
            if (var7 != null) {
               iS.bwK("EC2xfc");
            }

            return var16;
         } catch (MatchException var9) {
            throw dyC(var9);
         }
      }

      var8 *= 1.525F;
      return var3 / 2.0F * (var1 * var1 * ((var8 + 1.0F) * var1 - var8)) + var2;
   }

   private static MatchException dyC(MatchException var0) {
      return var0;
   }
}
