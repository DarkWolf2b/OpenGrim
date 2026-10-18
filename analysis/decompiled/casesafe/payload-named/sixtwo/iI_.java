package sixtwo;

import com.google.gson.Gson;
import com.google.gson.JsonArray;
import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import native.Loader;

public class iI {
   private static int[] YCjGZ;
   private static long rflru;
   private static String[] EgIut;
   private static String[] warqp;
   private static Map nwXIy;
   private static long DhicY;

   public static native int bsQ(gg var0, String var1);

   private static native JsonObject bsE(JsonObject var0, JsonObject var1);

   private static native List<Map<String, Object>> bsH(iS var0);

   private static native String bsZ(byte[] var0);

   public static native int[] bsX();

   private static native JsonElement bsF(JsonElement var0, JsonElement var1);

   public static native boolean bsK(iS var0, cB var1);

   private static native <T extends iS> void bsM(T var0, JsonArray var1);

   private static native String bsT(int[] var0);

   private static native CallSite btc(Lookup var0, String var1, MethodType var2);

   public static native void bsL(String var0, boolean var1);

   private static native iS bsR(cB var0);

   public static native String bsD(Gson var0);

   private static native boolean bsG(JsonArray var0);

   public static native boolean bsJ(cB var0);

   private static native void bsN(JsonObject var0);

   private static native void bsO(boolean var0, JsonObject var1);

   public static native Map<gg, Integer> bsP(String var0);

   private static native String bsS(iS var0);

   public static native void bsW(int[] var0);

   public static native void bsI();

   private static native Exception bsY(Exception var0);

   private static native String bta(int var0, long var1);

   static {
      Loader.doInit(iI.class);
      _b931b0b121db1398e8ac964cf086ee9f();
   }

   private static native Object btb(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native String bsC(Gson var0);

   private static native void _b931b0b121db1398e8ac964cf086ee9f();
}
