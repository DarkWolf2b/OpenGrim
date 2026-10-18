package sixtwo;

import com.mojang.blaze3d.platform.DepthTestFunction;
import java.lang.invoke.MethodHandles;

public final class kS$ur {
   private lh QzklF = lh.GpGUc;
   private DepthTestFunction NpNot = DepthTestFunction.LEQUAL_DEPTH_TEST;
   private boolean bEunq = true;
   private boolean wgMTt = true;
   private static final long imTUe = gb.aYR(-3947192174411393372L, 6095874698076732744L, MethodHandles.lookup().lookupClass()).a(217868700101829L);

   public kS dup() {
      return new kS(this);
   }

   public kS$ur duo(boolean var1) {
      this.wgMTt = var1;
      return this;
   }

   public kS$ur duk(lh var1) {
      this.QzklF = var1;
      return this;
   }

   public kS$ur dun(boolean var1) {
      this.bEunq = var1;
      return this;
   }

   public kS$ur dul(boolean var1) {
      long var2 = imTUe ^ 119249479958683L;

      kS$ur var10000;
      DepthTestFunction var10001;
      label17: {
         try {
            var10000 = this;
            if (var1) {
               var10001 = DepthTestFunction.LEQUAL_DEPTH_TEST;
               break label17;
            }
         } catch (MatchException var4) {
            throw duq(var4);
         }

         var10001 = DepthTestFunction.NO_DEPTH_TEST;
      }

      var10000.NpNot = var10001;
      return this;
   }

   private static MatchException duq(MatchException var0) {
      return var0;
   }

   public kS$ur dum(DepthTestFunction var1) {
      this.NpNot = var1;
      return this;
   }
}
