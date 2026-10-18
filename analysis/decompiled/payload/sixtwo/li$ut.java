package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public final class li$ut implements rp {
   private float qKoUX;
   private float UAYjd;
   private float XzVle;
   private static long yoVgv;
   private static String[] qjUBr;
   private static String[] hJzfF;
   private static Map abhdR;

   static {
      Loader.doInit(li$ut.class);
      _21da57d59134a6a5e8fb76f3a1cb4a2d();
   }

   private static native void _21da57d59134a6a5e8fb76f3a1cb4a2d();

   @Override
   public native void fromJson(JsonObject var1);

   @Override
   public native JsonObject toJson();

   public native float duE();

   private static native String duI(int var0, long var1);

   private static native Object duJ(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite duK(Lookup var0, String var1, MethodType var2);

   public native float duF();

   public native float duG();

   private static native String duH(byte[] var0);
}
