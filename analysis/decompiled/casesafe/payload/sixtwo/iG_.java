package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.Set;
import java.util.concurrent.ConcurrentHashMap;
import java.util.regex.Pattern;
import native.Loader;
import net.minecraft.class_1044;

public class iG {
   private final Pattern djCtR;
   private final Map<String, class_1044> uZJpH;
   private final Set<String> oMbIM;
   private final Set<String> hQKFV;
   private static int mQdTb;
   private static long nDiFh;
   private static String[] ekZKT;
   private static String[] jFNdx;
   private static Map LxSWA;
   private static long zzOFR;

   public iG() {
      long var1 = nDiFh ^ 81951259621938L;
      int var10000 = bsu();
      super();
      this.djCtR = Pattern.compile(bsz<"j">(28395, 8427303035460676459L ^ var1));
      int var3 = var10000;

      try {
         this.uZJpH = new ConcurrentHashMap<>();
         this.oMbIM = ConcurrentHashMap.newKeySet();
         this.hQKFV = Set.of(
            bsz<"j">(14887, 7526512905692659617L ^ var1),
            bsz<"j">(20928, 5892494048902698051L ^ var1),
            bsz<"j">(6435, 6984961136079543460L ^ var1),
            bsz<"j">(1034, 8792059802312212875L ^ var1),
            bsz<"j">(1735, 7710584057497092931L ^ var1),
            bsz<"j">(14428, 2238663259823291858L ^ var1),
            bsz<"j">(3688, 1577055766385495015L ^ var1),
            bsz<"j">(17383, 155364917861697131L ^ var1)
         );
         if (var3 == 0) {
            iS.bwK("LLCmE");
         }
      } catch (MatchException var4) {
         throw bsv(var4);
      }
   }

   static {
      Loader.doInit(iG.class);
      _ae3cf7208a446e4a6ade47183b731e7c();
   }

   public native void bsm(String var1);

   private native String bsq(String var1);

   private static native String bsx(int var0, long var1);

   private static native MatchException bsv(MatchException var0);

   public static native void bss(int var0);

   private static native Object bsy(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native int bst();

   private static native String bsw(byte[] var0);

   public static native int bsu();

   private static native CallSite bsz(Lookup var0, String var1, MethodType var2);

   public native class_1044 bsn(String var1);

   private native boolean bsp(String var1);

   public native class_1044 bso(String var1, class_1044 var2);

   private static native void _ae3cf7208a446e4a6ade47183b731e7c();
}
