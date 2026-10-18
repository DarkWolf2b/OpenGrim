package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.List;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.Vec3d;

public record mg(List<Vec3d> positions, Vec3d finalPosition, HitResult hitResult, mf termination) {
   private static final long a = gb.aYR(-7403550115351378519L, -2043538162424936169L, MethodHandles.lookup().lookupClass()).a(94792783578772L);

   public mg(List<Vec3d> positions, Vec3d finalPosition, HitResult hitResult, mf termination) {
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
