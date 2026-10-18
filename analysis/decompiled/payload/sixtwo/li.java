package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import native.Loader;

public final class li implements rp {
   private li$ux jrqOK;
   private li$ut YvJxf;
   private List<li$uv> paGtU;
   private List<li$uu> rPcli;
   private static long FRMBe;
   private static String[] BaEbn;
   private static String[] FbSiY;
   private static Map NKduB;

   static {
      Loader.doInit(li.class);
      _bb0a58328670fec40d548b8c03abff75();
   }

   @Override
   public native void fromJson(JsonObject var1);

   @Override
   public native JsonObject toJson();

   public native List<li$uv> bYm();

   public native List<li$uu> bYn();

   private static native MatchException bYo(MatchException var0);

   private static native String bYp(byte[] var0);

   private static native String bYq(int var0, long var1);

   private static native Object bYr(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite bYs(Lookup var0, String var1, MethodType var2);

   private static native void _bb0a58328670fec40d548b8c03abff75();

   public native li$ux bYk();

   public native li$ut bYl();
}
