package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1268;
import net.minecraft.class_1792;

public class hU {
   private static iS[] NriVM;
   private static long GTcDz;
   private static String[] uFMkg;
   private static String[] NKWRI;
   private static Map jCjYb;
   private static long[] UtYAl;
   private static Integer[] lVWdM;
   private static Map nIIHT;

   static {
      Loader.doInit(hU.class);
      _86a15a3fd310d322b9a693370e419569();
   }

   private native hK bfy();

   private native hZ bft();

   private native boolean bfu();

   private native class_1792 bfw(String var1);

   private native hZ bfq();

   private native hZ bfr();

   private native hZ bfs();

   private native String bfx(class_1268 var1);

   public native hZ bfo();

   private native cX bfv();

   private native hK bfz();

   private native hZ bfp();

   public static native void bfK(iS[] var0);

   public static native iS[] bfL();

   private static native MatchException bfM(MatchException var0);

   private static native String bfN(byte[] var0);

   private static native String bfO(int var0, long var1);

   private static native int bfS(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int bfR(int var0, long var1);

   private static native CallSite bfT(Lookup var0, String var1, MethodType var2);

   private static native CallSite bfQ(Lookup var0, String var1, MethodType var2);

   private static native Object bfP(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _86a15a3fd310d322b9a693370e419569();
}
