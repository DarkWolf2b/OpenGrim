package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.time.LocalDate;
import java.util.List;
import java.util.Map;
import java.util.regex.Pattern;
import native.Loader;
import net.minecraft.class_1799;
import net.minecraft.class_2561;

public class iZ {
   private static Pattern SUbYg;
   private static long ggewT;
   private static String[] bWjiG;
   private static String[] esHGA;
   private static Map XvLvS;
   private static long[] wjwIg;
   private static Integer[] gzxDQ;
   private static Map tVVDD;

   static {
      Loader.doInit(iZ.class);
      _6f9fd9a2611811fe6f648e44740320a9();
   }

   private static native void _6f9fd9a2611811fe6f648e44740320a9();

   public static native LocalDate byr(List<String> var0);

   public static native List<String> byp(class_1799 var0);

   public static native List<class_2561> byn(class_1799 var0);

   private static native LocalDate bys(String var0);

   private static native int byt(int var0, int var1);

   public static native boolean byq(class_2561 var0);

   public static native List<String> byo(class_1799 var0);

   private static native LocalDate byu(int var0, int var1, int var2, int var3);

   private static native String byx(int var0, long var1);

   private static native int byB(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native RuntimeException byv(RuntimeException var0);

   private static native int byA(int var0, long var1);

   private static native String byw(byte[] var0);

   private static native CallSite byC(Lookup var0, String var1, MethodType var2);

   private static native Object byy(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite byz(Lookup var0, String var1, MethodType var2);
}
