package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.client.texture.AbstractTexture;

public class mI$uR implements rp {
   private String ifqaN;
   private AbstractTexture oNXYB;
   private static long hANFx;
   private static String[] vrJkQ;
   private static String[] fjSMH;
   private static Map IhVao;

   static {
      Loader.doInit(mI$uR.class);
      _5a48bfb10d959cf978eba36b60a8a90b();
   }

   @Override
   public native void fromJson(JsonObject var1);

   public native String dvz();

   public native AbstractTexture dvA();

   public native mI$uR dvB(String var1);

   public native mI$uR dvC(AbstractTexture var1);

   private static native MatchException dvD(MatchException var0);

   private static native String dvE(byte[] var0);

   private static native Object dvG(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String dvF(int var0, long var1);

   private static native CallSite dvH(Lookup var0, String var1, MethodType var2);

   @Override
   public native JsonObject toJson();

   private static native void _5a48bfb10d959cf978eba36b60a8a90b();
}
