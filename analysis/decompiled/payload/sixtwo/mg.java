package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import net.minecraft.class_239;
import net.minecraft.class_243;

public record mg(List<class_243> positions, class_243 finalPosition, class_239 hitResult, mf termination) {
   private static final long a = gb.aYR(-7403550115351378519L, -2043538162424936169L, MethodHandles.lookup().lookupClass()).a(94792783578772L);

   public mg(List<class_243> positions, class_243 finalPosition, class_239 hitResult, mf termination) {
      positions = List.copyOf(positions);
      this.positions = positions;
      this.finalPosition = finalPosition;
      this.hitResult = hitResult;
      this.termination = termination;
   }

   private static MatchException a(MatchException var0) {
      return var0;
   }

   public boolean hitBlock() {
      long var1 = a ^ 94582410327229L;

      try {
         if (this.termination == mf.juSGK) {
            return true;
         }
      } catch (MatchException var3) {
         throw a(var3);
      }

      return false;
   }

   public int simulatedSteps() {
      return Math.max(this.positions.size() - 1, 0);
   }
}
