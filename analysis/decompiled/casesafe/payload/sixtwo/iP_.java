package sixtwo;

import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import native.Loader;

public class iP {
   private final Map<String, iO> kHIxx = new ConcurrentHashMap<>();
   private final Map<String, int[]> POcAW = new ConcurrentHashMap<>();
   private static long vJphY;

   public native void buJ(iO var1);

   public native iO buK(String var1);

   public native boolean buL(String var1);

   public native void buM(String var1);

   public native void buI(iM var1);

   private static native MatchException buR(MatchException var0);

   public native Map<String, iO> buN();

   public native Map<String, int[]> buO();

   static {
      Loader.doInit(iP.class);
      _f128db71b91b598847d95e7f5457b384();
   }

   private static native void _f128db71b91b598847d95e7f5457b384();
}
