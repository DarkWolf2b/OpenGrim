package sixtwo;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.Map;

public class cE extends cB {
   private static final long ZvRsv = gb.aYR(-7229280345741605547L, 3343296497802533714L, MethodHandles.lookup().lookupClass()).a(265290631921713L);

   public cE(mr var1) {
      super(var1);
   }

   public cE(iS var1, mr var2) {
      this(var2);
      this.Vg(var1);
   }

   @Override
   public void SS(JsonElement var1) {
      long var2 = ZvRsv ^ 13116045673953L;

      try {
         if (!var1.isJsonObject()) {
            return;
         }
      } catch (MatchException var5) {
         throw VR(var5);
      }

      try {
         if (rD.dlS() == null) {
            return;
         }
      } catch (MatchException var6) {
         throw VR(var6);
      }

      pG var4 = new pG();
      var4.fromJson(var1.getAsJsonObject());
      rD.dlS().cSS(var4);
      this.Vk();
   }

   @Override
   public void SR(Map<String, Object> var1) {
      JsonObject var2 = rD.dlS().cSQ().toJson();
      var1.put(Arrays.toString(this.NwlSF), var2);
   }

   private static MatchException VR(MatchException var0) {
      return var0;
   }
}
