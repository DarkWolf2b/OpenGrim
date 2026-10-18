package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.util.math.Vec3d;

class cW$sq {
   double xMyWF;
   double cEUji;
   double ISKzQ;
   int YJdti;
   private static final long ZgxSr = gb.aYR(-2453933091906176889L, 5006717760716821246L, MethodHandles.lookup().lookupClass()).a(36111101765380L);

   private cW$sq() {
   }

   private static MatchException dnI(MatchException var0) {
      return var0;
   }

   Vec3d dnH() {
      long var1 = ZgxSr ^ 41328561340019L;

      try {
         if (this.YJdti == 0) {
            return Vec3d.ZERO;
         }
      } catch (MatchException var3) {
         throw dnI(var3);
      }

      return new Vec3d(this.xMyWF / this.YJdti, this.cEUji / this.YJdti, this.ISKzQ / this.YJdti);
   }

   void dnG(Vec3d var1) {
      this.xMyWF = this.xMyWF + var1.x;
      this.cEUji = this.cEUji + var1.y;
      this.ISKzQ = this.ISKzQ + var1.z;
      this.YJdti++;
   }
}
