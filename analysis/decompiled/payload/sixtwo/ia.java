package sixtwo;

import com.mojang.brigadier.context.StringRange;
import com.mojang.brigadier.suggestion.Suggestion;
import com.mojang.brigadier.suggestion.Suggestions;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import native.Loader;

public class ia {
   private static Object UckPC;
   private final List<hZ> HjCSP;
   private String MHBfP;
   private static String zBIZu;
   private static long MYMbZ;
   private static String[] MKAAg;
   private static String[] bmPjW;
   private static Map uujNg;
   private static long HuQOe;

   public ia() {
      long var1 = MYMbZ ^ 24953691899526L;
      bgL();
      super();

      try {
         this.HjCSP = new ArrayList<>();
         this.MHBfP = ".";
         if (iS.bwL() == null) {
            bgK("A8PTpc");
         }
      } catch (MatchException var4) {
         throw bgM(var4);
      }
   }

   static {
      Loader.doInit(ia.class);
      _960882a417015a51b6e696ca2a69b59b();
   }

   public static native String bgL();

   public static native void bgK(String var0);

   public native boolean bgz(String var1);

   private native Object bgD(hM<?> var1, String var2);

   private static native String bgN(byte[] var0);

   public native String bgI();

   private static native String bgH(String var0);

   private static native Object bgP(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native List<Object> bgC(hZ var1, String[] var2, int var3);

   private native hZ bgG(List<hZ> var1, String var2);

   public native void bgu();

   private static native MatchException bgM(MatchException var0);

   private native ia$tF bgB(List<String> var1, hZ var2, int var3);

   private static native CallSite bgQ(Lookup var0, String var1, MethodType var2);

   public native void bgv();

   public native void bgx(hZ var1);

   public native void bgJ(String var1);

   private static native String bgO(int var0, long var1);

   @hG
   public native void bgw(gU var1);

   private native hM<?> bgF(List<hM<?>> var1, int var2, boolean var3);

   private native void bgE(List<hZ> var1, String var2, StringRange var3, List<Suggestion> var4);

   public native CompletableFuture<Suggestions> bgA(String var1, int var2);

   public native List<hZ> bgy();

   private static native void _960882a417015a51b6e696ca2a69b59b();
}
