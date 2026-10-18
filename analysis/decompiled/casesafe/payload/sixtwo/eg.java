package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class eg extends gg {
   private final cJ DdQgn;
   private final cJ WgBhf;
   private static long uaZhk;
   private static long[] xbZpE;
   private static Integer[] ZWlNe;
   private static Map hTouB;

   public eg() {
      long var1 = uaZhk ^ 57034707451473L;
      super(gf.aZL(asx<"a">(6176, 6890432372616930078L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[asx<"a">(14578, 6190224088966038464L ^ var1)];
      var10004[0] = asx<"a">(21596, 3866092768228110191L ^ var1);
      var10004[1] = asx<"a">(9418, 8096650564578549747L ^ var1);
      var10004[2] = asx<"a">(1121, 6018995090218794843L ^ var1);
      var10004[3] = asx<"a">(12475, 399741918158424964L ^ var1);
      var10004[4] = asx<"a">(3369, 4684660693955425812L ^ var1);
      var10004[5] = asx<"a">(4628, 2680164615519414572L ^ var1);
      this.DdQgn = new cJ(this, mr.clS(var10004)).WE(true);
      this.WgBhf = new cJ(
            this,
            mr.clS(
               new int[]{
                  asx<"a">(21900, 6458123654671593148L ^ var1),
                  asx<"a">(28580, 6598013349549298837L ^ var1),
                  asx<"a">(23085, 4455533875062694161L ^ var1),
                  asx<"a">(19682, 130201823211616217L ^ var1)
               }
            )
         )
         .WE(false);
   }

   static {
      Loader.doInit(eg.class);
      _bcedad5687c09f069cce1f935fb3cfb5();
   }

   private static native void _bcedad5687c09f069cce1f935fb3cfb5();

   public native cJ ast();

   public native cJ asu();

   private static native int asw(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int asv(int var0, long var1);

   private static native CallSite asx(Lookup var0, String var1, MethodType var2);
}
