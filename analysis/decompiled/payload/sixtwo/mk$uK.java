package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_10185;
import net.minecraft.class_241;
import net.minecraft.class_744;
import net.minecraft.class_746;

class mk$uK extends class_744 {
   final mv DYvln;
   final class_746 NpYIL;
   private static final long qbKPs = gb.aYR(4156954222303847609L, 2050517343560288004L, MethodHandles.lookup().lookupClass()).a(99568747978715L);

   mk$uK(mv var1, class_746 var2) {
      this.DYvln = var1;
      this.NpYIL = var2;
   }

   public class_241 method_3128() {
      return this.DYvln.cmC();
   }

   public void method_3129() {
      long var1 = qbKPs ^ 88522520548292L;

      mk$uK var10000;
      class_10185 var10001;
      class_10185 var10002;
      boolean var10003;
      label32: {
         try {
            var10000 = this;
            var10001 = new class_10185;
            var10002 = var10001;
            if (this.DYvln.vGEel > 0.0F) {
               var10003 = true;
               break label32;
            }
         } catch (MatchException var3) {
            throw dvv(var3);
         }

         var10003 = false;
      }

      var10002./* $VF: Unable to resugar constructor */<init>(
         var10003, this.DYvln.vGEel < 0.0F, this.DYvln.mgoqe > 0.0F, this.DYvln.mgoqe < 0.0F, this.DYvln.GgKkk, this.DYvln.SuYKY, this.NpYIL.method_5624()
      );
      var10000.field_54155 = var10001;
      this.field_55868 = this.DYvln.cmC();
   }

   private static MatchException dvv(MatchException var0) {
      return var0;
   }
}
