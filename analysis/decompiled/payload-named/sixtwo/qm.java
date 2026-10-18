package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.nio.ByteBuffer;
import java.util.Map;
import java.util.function.Consumer;
import native.Loader;

public abstract class qm {
   private static String[] fHBAm;
   private static boolean jweWb;
   private static long yXaeX;
   private static String[] aFYud;
   private static String[] EmRzC;
   private static Map Wgwqc;
   private static long[] JaaSW;
   private static Integer[] bZFZI;
   private static Map jEoGI;

   static {
      Loader.doInit(qm.class);
      _6397906063398c32d6aff428e641b2a3();
   }

   public static native boolean cXh();

   private static native Exception cXi(Exception var0);

   private static native Object cXl(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   protected abstract void cWV(ByteBuffer var1);

   private static native CallSite cXm(Lookup var0, String var1, MethodType var2);

   private static native int cXo(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native qm cXd(Consumer<qo> var0);

   public static native void cXf(boolean var0);

   private static native String cXk(int var0, long var1);

   private static native int cXn(int var0, long var1);

   public native void cXe(qp var1, JsonObject var2);

   private static native CallSite cXp(Lookup var0, String var1, MethodType var2);

   public abstract void cWY();

   public static native boolean cXg();

   private static native String cXj(byte[] var0);

   private static native void _6397906063398c32d6aff428e641b2a3();
}
