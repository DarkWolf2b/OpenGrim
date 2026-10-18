package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Map;

public class cI extends cB {
   private Runnable sAiGw = () -> {};
   private static final long CGjNX = gb.aYR(5579284435811150568L, -1393473000424632907L, MethodHandles.lookup().lookupClass()).a(260687920679028L);

   public cI(mr var1) {
      super(var1);
      this.sAiGw = () -> {};
   }

   public cI(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   @Override
   public void SS(JsonElement var1) {
   }

   @Override
   public void SR(Map<String, Object> var1) {
   }

   public cI Wx(Runnable var1) {
      long var2 = CGjNX ^ 37030608099245L;
      boolean var4 = cB.Vt();

      cI var10000;
      Runnable var10001;
      label22: {
         label21: {
            try {
               var10000 = this;
               var10001 = var1;
               if (!var4) {
                  break label22;
               }

               if (var1 == null) {
                  break label21;
               }
            } catch (MatchException var5) {
               throw WC(var5);
            }

            var10001 = var1;
            break label22;
         }

         var10001 = () -> {};
      }

      var10000.sAiGw = var10001;
      return this;
   }

   private static MatchException WC(MatchException var0) {
      return var0;
   }

   public Runnable Wy() {
      return this.sAiGw;
   }
}
