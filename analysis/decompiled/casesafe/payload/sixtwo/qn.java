package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class qn implements rp {
   private String YYziD;
   private String XdVDB;
   private qn$vM jZDhQ;
   private qn$vL oHlYm;
   private static boolean IBDPw;
   private static long bfSHa;
   private static String[] pBVGF;
   private static String[] lKeog;
   private static Map WBAek;

   static {
      Loader.doInit(qn.class);
      _0a00388d13a333bb5f6e9ff1f3c751b0();
   }

   @Override
   public native void fromJson(JsonObject var1);

   @Override
   public native JsonObject toJson();

   public static native boolean cXx();

   private static native Object cXC(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native void cXs(long var1);

   public native void cXq(String var1, String var2);

   public static native void cXw(boolean var0);

   public static native boolean cXy();

   private static native String cXB(int var0, long var1);

   private static native CallSite cXD(Lookup var0, String var1, MethodType var2);

   private static native MatchException cXz(MatchException var0);

   public native void cXt(long var1);

   private static native String cXA(byte[] var0);

   public native void cXr(String var1, String var2);

   public native void cXu(String var1);

   public native void cXv(String var1);

   private static native void _0a00388d13a333bb5f6e9ff1f3c751b0();
}
