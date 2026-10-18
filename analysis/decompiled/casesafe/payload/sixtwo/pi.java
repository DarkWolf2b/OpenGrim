package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Iterator;
import java.util.List;
import net.minecraft.class_1297;

public record pi(lc bounds, List<pN> placements, class_1297 entity, boolean preview) {
   private static final long a = gb.aYR(-7120916945110568301L, 3023444059066624338L, MethodHandles.lookup().lookupClass()).a(222244175474110L);

   public pi(lc bounds, List<pN> placements, class_1297 entity, boolean preview) {
      long var5 = a ^ 111345280115046L;
      boolean var10000 = pj.cNz();
      super();
      boolean var7 = var10000;

      try {
         this.bounds = bounds;
         this.placements = placements;
         this.entity = entity;
         this.preview = preview;
         if (var7) {
            iS.bwK("Xnvnv");
         }
      } catch (MatchException var8) {
         throw a(var8);
      }
   }

   private static MatchException a(MatchException var0) {
      return var0;
   }

   public void render(lC var1) {
      long var2 = a ^ 89828709991310L;
      boolean var10000 = pj.cNA();
      Iterator var5 = this.placements.iterator();
      boolean var4 = var10000;

      while (var5.hasNext()) {
         pN var6 = (pN)var5.next();
         var6.render(var1, this.bounds, this.entity, this.preview);
         if (!var4) {
            break;
         }
      }
   }
}
