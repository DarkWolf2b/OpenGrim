package sixtwo;

import java.util.Collections;
import java.util.IdentityHashMap;
import java.util.Set;
import native.Loader;

public class qN {
   private qN$vO PpTCt;
   private boolean KCgAH;
   private boolean eQKsE;
   private boolean ANgjg = false;
   private final Set<Object> Dutjh = Collections.newSetFromMap(new IdentityHashMap<>());
   private final Set<Object> MQLAw = Collections.newSetFromMap(new IdentityHashMap<>());
   private static long seqcT;

   public qN() {
      hF.bdI(this);
   }

   static {
      Loader.doInit(qN.class);
      _931d8b2ca5e39d9134fcb07081b421f0();
   }

   @hG
   public native void dcu(gL$tj var1);

   public native rB dcz();

   public native void dcA(Object var1);

   public native void dcB(Object var1);

   public native void dcw(Object var1);

   public native boolean dcC(Object var1);

   public native boolean dcx(gg var1);

   public native boolean dcD();

   public native void dcv(gg var1);

   @hG
   public native void dcr(gM var1);

   @hG(
      priority = mw.LOWEST
   )
   public native void dct(gw var1);

   @hG(
      priority = mw.CRITICAL
   )
   public native void dcs(gH$th var1);

   public static native qN$vO dcE(ct var0);

   public native void dcF(qN$vO var1);

   public native void dcG();

   public native boolean dcy();

   private static native MatchException dcH(MatchException var0);

   private static native void _931d8b2ca5e39d9134fcb07081b421f0();
}
