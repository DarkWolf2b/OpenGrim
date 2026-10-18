package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;

public class iJ extends iE implements iK {
   private static String dBTIE;
   private static long tpAxI;
   private static String[] GwRhC;
   private static String[] ciYOV;
   private static Map JHeJg;

   private static native MatchException btp(MatchException var0);

   @Override
   public native CompletableFuture<iM> likeConfig(String var1);

   private static native String btr(int var0, long var1);

   public static native String bto();

   private static native String btq(byte[] var0);

   private static native CallSite btt(Lookup var0, String var1, MethodType var2);

   public static native void btn(String var0);

   static {
      Loader.doInit(iJ.class);
      _b1b4166abfe67205bc51989fb8318952();
   }

   @Override
   public native CompletableFuture<iu> loadConfig(iM var1);

   private static native Object bts(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @Override
   public native CompletableFuture<iu> importConfig(String var1);

   @Override
   public native CompletableFuture<iu> deleteConfig(String var1);

   @Override
   public native CompletableFuture<iM> dislikeConfig(String var1);

   @Override
   public native CompletableFuture<iM> createConfig(int[] var1, int[] var2, iL var3);

   @Override
   public native CompletableFuture<iM> downloadConfig(String var1);

   @Override
   public native CompletableFuture<iu> resetLoadedConfig();

   @Override
   public native CompletableFuture<List<iO>> fetchMetadata();

   @Override
   public native CompletableFuture<iM> updateConfig(String var1, int[] var2, int[] var3, iL var4, boolean var5);

   @Override
   public native CompletableFuture<iu> favouriteConfig(String var1);

   private static native void _b1b4166abfe67205bc51989fb8318952();
}
