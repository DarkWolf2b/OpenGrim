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
      super(gf.aZL(77, false, gh.qBzlZ));
      int[] var10004 = new int[6];
      var10004[0] = 67;
      var10004[1] = 108;
      var10004[2] = 105;
      var10004[3] = 101;
      var10004[4] = 110;
      var10004[5] = 116;
      this.DdQgn = new cJ(this, mr.clS(var10004)).WE(true);
      this.WgBhf = new cJ(
            this,
            mr.clS(
               new int[]{
                  66,
                  111,
                  116,
                  104
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
