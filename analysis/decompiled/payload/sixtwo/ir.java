package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ir extends in implements rp {
   String MJxSh;
   String JrITo;
   private static long CNpfA;
   private static String[] bQYGM;
   private static String[] sbTyw;
   private static Map iJBZj;

   private static native MatchException bmE(MatchException var0);

   public native ir bmC(String var1);

   private static native String bmF(byte[] var0);

   private static native Object bmH(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String bmG(int var0, long var1);

   public native String bmB();

   private static native CallSite bmI(Lookup var0, String var1, MethodType var2);

   public native ir bmD(String var1);

   public ir() {
   }

   public ir(String var1, String var2, int[] var3, io var4, io var5, boolean var6, float var7, boolean var8, boolean var9, boolean var10, im var11, im var12) {
      long var13 = CNpfA ^ 34970604742722L;
      super(var3, var4, var5, var6, var7, var8, var9, var10, var11, var12);
      String[] var10000 = rj.dha();
      this.MJxSh = var1;
      String[] var15 = var10000;

      try {
         this.JrITo = var2;
         if (var15 == null) {
            iS.bwK("s64be");
         }
      } catch (MatchException var16) {
         throw bmE(var16);
      }
   }

   static {
      Loader.doInit(ir.class);
      _746b4bb81a153ba095982d63ae6cba3f();
   }

   @Override
   public native void fromJson(JsonObject var1);

   @Override
   public native JsonObject toJson();

   @Override
   public native boolean bkP();

   @Override
   public native String bkO();

   private static native void _746b4bb81a153ba095982d63ae6cba3f();
}
