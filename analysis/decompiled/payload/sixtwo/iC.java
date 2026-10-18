package sixtwo;

import java.util.ArrayList;
import java.util.List;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import native.Loader;

public class iC {
   private volatile iz oGlJN;
   private final Set<String> ZfUZZ = ConcurrentHashMap.newKeySet();
   private final List<iz> gHFYR = new ArrayList<>();
   private static long pCyOc;

   static {
      Loader.doInit(iC.class);
      _edcaa3034d725d5fb4641f753cf52629();
   }

   public native boolean bqL(String var1);

   public native iz bqM();

   public native iz bqJ(String var1);

   public native void bqP(iz var1);

   public native Set<String> bqN();

   private static native MatchException bqR(MatchException var0);

   public native List<iz> bqO();

   private static native void _edcaa3034d725d5fb4641f753cf52629();

   public native boolean bqK(String var1);

   public native iz bqI(String var1);
}
