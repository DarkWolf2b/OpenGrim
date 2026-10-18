package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class en extends gg {
   private final mT cPtuD;
   private static long XGcHI;
   private static long[] VqNdz;
   private static Integer[] BCAKr;
   private static Map pFvmE;
   private static long kpGmO;

   private static native void _d1779fc2e4e3d22bd315c72dfeecf1c8();

   public en() {
      long var1 = XGcHI ^ 139603776702640L;
      super(gf.aZL(46, false, gh.xgeEn));
      this.cPtuD = mT.cpA();
   }

   static {
      Loader.doInit(en.class);
      _d1779fc2e4e3d22bd315c72dfeecf1c8();
   }

   private static native CallSite att(Lookup var0, String var1, MethodType var2);

   private static native int ats(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @Override
   public native void aaj();

   private native void atp();

   private static native MatchException atq(MatchException var0);

   private static native int atr(int var0, long var1);
}
