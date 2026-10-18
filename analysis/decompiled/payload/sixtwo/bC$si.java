package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_591;

record bC$si(pY emote) implements pX {
   private static final long a = gb.aYR(1815704216569069388L, -7975721906260477380L, MethodHandles.lookup().lookupClass()).a(62026947645471L);

   @Override
   public void apply(class_591 var1) {
      long var2 = a ^ 29058653280328L;
      int[] var4 = bB.b();

      pY var10000;
      label22: {
         try {
            var10000 = this.emote;
            if (var4 != null) {
               break label22;
            }

            if (this.emote == null) {
               return;
            }
         } catch (MatchException var5) {
            throw a(var5);
         }

         var10000 = this.emote;
      }

      var10000.applyPreviewKeyframe(var1);
   }

   private static MatchException a(MatchException var0) {
      return var0;
   }

   @Override
   public boolean finished() {
      return false;
   }
}
