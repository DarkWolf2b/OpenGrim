package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class qn$vL implements rp {
   public Long QGGrl;
   public Long YPkah;
   private static long yrBAH;
   private static String[] UPXcN;
   private static String[] baFMt;
   private static Map biiVj;

   static {
      Loader.doInit(qn$vL.class);
      _3c25e1aef704a17614af26139d780545();
   }

   @Override
   public native void fromJson(JsonObject var1);

   @Override
   public native JsonObject toJson();

   private static native Object dye(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String dyc(byte[] var0);

   private static native CallSite dyf(Lookup var0, String var1, MethodType var2);

   private static native MatchException dyb(MatchException var0);

   private static native String dyd(int var0, long var1);

   private static native void _3c25e1aef704a17614af26139d780545();
}
