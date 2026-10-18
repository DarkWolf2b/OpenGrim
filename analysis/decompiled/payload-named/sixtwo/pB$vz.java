package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.item.ItemStack;

public record pB$vz(ItemStack stack, String label) {
   private static final long a = gb.aYR(6989389040712857272L, -8873593874275429605L, MethodHandles.lookup().lookupClass()).a(158348626770598L);

   public pB$vz(ItemStack stack, String label) {
      long var3 = a ^ 3195639878403L;
      boolean var10000 = pA.cRP();
      super();
      boolean var5 = var10000;

      label22: {
         label21: {
            try {
               var8 = label;
               if (var5) {
                  break label22;
               }

               if (label == null) {
                  break label21;
               }
            } catch (MatchException var6) {
               throw a(var6);
            }

            var8 = label;
            break label22;
         }

         var8 = "";
      }

      label = var8;
      this.stack = stack;
      this.label = label;
   }

   private static MatchException a(MatchException var0) {
      return var0;
   }
}
