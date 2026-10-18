package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;

public class ib extends iE implements ic {
   private static iS[] cFbIb;
   private static long rULHc;
   private static String[] GYJov;
   private static String[] IjhxK;
   private static Map NyUUY;

   static {
      Loader.doInit(ib.class);
      _9c5314eb978dce02099338ee8671684d();
   }

   @Override
   public native CompletableFuture<ij> createTheme(ig var1);

   @Override
   public native CompletableFuture<List<ij>> fetchThemes();

   @Override
   public native CompletableFuture<iu> deleteTheme(String var1);

   @Override
   public native CompletableFuture<iu> importTheme(String var1);

   @Override
   public native CompletableFuture<ij> fetchTheme(String var1);

   @Override
   public native CompletableFuture<iu> loadTheme(ig var1);

   private static native String bgZ(byte[] var0);

   private static native Object bhb(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native void bgW(iS[] var0);

   private static native CallSite bhc(Lookup var0, String var1, MethodType var2);

   private static native MatchException bgY(MatchException var0);

   private static native String bha(int var0, long var1);

   public static native iS[] bgX();

   private static native void _9c5314eb978dce02099338ee8671684d();
}
