package sixtwo;

import com.google.gson.JsonObject;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class im implements rp {
   private float KRmiv;
   private float pFSpJ;
   private float CgBVN;
   private float CfqKZ;
   private float bFZwM;
   private float VLAee;
   private float sZrbs;
   private float mraQS;
   private float kWIxr;
   private static String[] zCEjY;
   private static long JGxeg;
   private static String[] YAJBH;
   private static String[] kblTu;
   private static Map xPwii;

   public im(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8, float var9) {
      this.KRmiv = var1;
      this.pFSpJ = var2;
      this.CgBVN = var3;
      this.CfqKZ = var4;
      this.bFZwM = var5;
      this.VLAee = var6;
      this.sZrbs = var7;
      this.mraQS = var8;
      this.kWIxr = var9;
   }

   public im() {
   }

   static {
      Loader.doInit(im.class);
      _7114862126ec9603e1fb62ce1278dd19();
   }

   @Override
   public native void fromJson(JsonObject var1);

   @Override
   public native JsonObject toJson();

   private static native MatchException bkJ(MatchException var0);

   public static native void bkH(String[] var0);

   private static native String bkL(int var0, long var1);

   private static native Object bkM(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native String[] bkI();

   private static native CallSite bkN(Lookup var0, String var1, MethodType var2);

   private static native String bkK(byte[] var0);

   private static native void _7114862126ec9603e1fb62ce1278dd19();

   public native float bkC();

   public native float bkz();

   public native float bkE();

   public native float bkA();

   public native float bky();

   public native float bkD();

   public native float bkG();

   public native float bkB();

   public native float bkF();
}
