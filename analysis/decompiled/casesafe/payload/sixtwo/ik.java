package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;

public class ik extends iE implements il {
   private static int SCcct;
   private static long xUpkE;
   private static String[] xAjOK;
   private static String[] KhoFn;
   private static Map leVFY;

   static {
      Loader.doInit(ik.class);
      _9fdcfeafceb72cd1905fd6f41467b7f1();
   }

   @Override
   public native CompletableFuture<ir> fetchPreset(String var1);

   @Override
   public native CompletableFuture<iu> importPreset(String var1);

   @Override
   public native CompletableFuture<iu> deletePreset(String var1);

   @Override
   public native CompletableFuture<List<ir>> fetchPresets();

   @Override
   public native CompletableFuture<ir> createPreset(in var1);

   private static native CallSite bkx(Lookup var0, String var1, MethodType var2);

   private static native String bku(byte[] var0);

   public static native int bks();

   @Override
   public native CompletableFuture<iu> loadPreset(in var1);

   private static native String bkv(int var0, long var1);

   public static native void bkq(int var0);

   private static native MatchException bkt(MatchException var0);

   private static native Object bkw(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native int bkr();

   private static native void _9fdcfeafceb72cd1905fd6f41467b7f1();
}
