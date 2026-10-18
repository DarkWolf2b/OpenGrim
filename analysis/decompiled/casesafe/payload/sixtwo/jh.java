package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1799;
import net.minecraft.class_1887;
import net.minecraft.class_2960;
import net.minecraft.class_5321;
import net.minecraft.class_6880;
import net.minecraft.class_9304;
import net.minecraft.class_9331;

public class jh {
   private static long YGcvH;
   private static String[] UFhJb;
   private static String[] CBCUU;
   private static Map VrMuV;
   private static long[] FQUus;
   private static Integer[] Xnhyj;
   private static Map uTWcU;

   static {
      Loader.doInit(jh.class);
      _39da9305c805eb0c03e3a7cb115b2336();
   }

   private static native class_2960 bCl(String var0);

   private static native CallSite bCu(Lookup var0, String var1, MethodType var2);

   private static native MatchException bCn(MatchException var0);

   private static native String bCm(String var0);

   private static native int bCt(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String bCo(byte[] var0);

   public static native class_6880<class_1887> bCj(String var0);

   public static native class_9331<class_9304> bCi(class_1799 var0);

   private static native CallSite bCr(Lookup var0, String var1, MethodType var2);

   private static native Object bCq(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int bCs(int var0, long var1);

   public static native String bCk(String var0);

   private static native String bCp(int var0, long var1);

   public static native int bCh(class_1799 var0, class_5321<class_1887> var1);

   public static native boolean bCg(class_1799 var0, class_5321<class_1887> var1);

   private static native void _39da9305c805eb0c03e3a7cb115b2336();
}
