package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_243;

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

   class_243 dnH() {
      long var1 = ZgxSr ^ 41328561340019L;

      try {
         if (this.YJdti == 0) {
            return class_243.field_1353;
         }
      } catch (MatchException var3) {
         throw dnI(var3);
      }

      return new class_243(this.xMyWF / this.YJdti, this.cEUji / this.YJdti, this.ISKzQ / this.YJdti);
   }

   void dnG(class_243 var1) {
      this.xMyWF = this.xMyWF + var1.field_1352;
      this.cEUji = this.cEUji + var1.field_1351;
      this.ISKzQ = this.ISKzQ + var1.field_1350;
      this.YJdti++;
   }
}
