package fivefive;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.security.PublicKey;
import java.security.SecureRandom;
import java.util.Map;
import javax.crypto.SecretKey;
import natives.Loader;

public class g {
   private static int iFMrj;
   private static int reTEf;
   private static int QSfuK;
   private static String lPbKs;
   private static SecureRandom zdyyY;
   private static C[] JvVGR;
   private static long gxuGS;
   private static String[] ghJey;
   private static String[] LYOau;
   private static Map fkfAy;
   private static long[] VAPPX;
   private static Integer[] lNwiG;
   private static Map KtciD;

   public g() {
   }

   public static native String ai(Object[] var0);

   private static native SecretKey aj(Object[] var0) throws Exception;

   private static native byte[] ak(Object[] var0);

   private static native byte[] al(Object[] var0) throws Exception;

   private static native byte[] am(Object[] var0) throws Exception;

   private static native PublicKey an(Object[] var0) throws Exception;

   static {
      Loader.doInit(g.class);
      _301121dc3e8374af8ec05dff255d5b1b();
   }

   public static native void ao(C[] var0);

   public static native C[] ap();

   private static native Exception aq(Exception var0);

   private static native String ar(byte[] var0);

   private static native String as(int var0, long var1);

   private static native Object at(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite au(Lookup var0, String var1, MethodType var2);

   private static native int av(int var0, long var1);

   private static native int aw(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite ax(Lookup var0, String var1, MethodType var2);

   private static native void _301121dc3e8374af8ec05dff255d5b1b();
}
