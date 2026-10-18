package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;
import sixtwo.am.rS;

public class am extends az {
   private final List<rS> dKgZe = new ArrayList<>();
   private final ah PZcRW = new ah();
   private static long TXFPf;
   private static String[] YbYUL;
   private static String[] zRGKj;
   private static Map ImqWj;
   private static long GqCCj;

   public am(String var1) {
      this.oX(var1);
   }

   static {
      Loader.doInit(am.class);
      _084bbcaff7b3cc723e303c46feb338d2();
   }

   private static native String pc(int var0, long var1);

   private static native MatchException pa(MatchException var0);

   private static native Object pd(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite pe(Lookup var0, String var1, MethodType var2);

   private static native String pb(byte[] var0);

   @Override
   protected native void bV(lC var1);

   @Override
   public native boolean fC(double var1, double var3, double var5);

   private static native void _084bbcaff7b3cc723e303c46feb338d2();

   public native ah oZ();

   public native void oX(String var1);

   public native List<rS> oY();
}
