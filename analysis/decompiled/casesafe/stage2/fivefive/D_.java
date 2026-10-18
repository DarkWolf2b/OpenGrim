package fivefive;

import java.io.IOException;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.net.http.HttpClient;
import java.security.KeyPair;
import java.security.KeyPairGenerator;
import java.util.Map;
import natives.Loader;

public class D {
   private final HttpClient wLiAB;
   private final KeyPair tabJY;
   private static C[] IlTfR;
   private static long AYuNw;
   private static String[] xSBTy;
   private static String[] uEXnb;
   private static Map qmaIV;
   private static long[] UoZBi;
   private static Integer[] TVsAW;
   private static Map tGUKl;

   private native String fl(Object[] var1) throws Exception;

   public D() {
      long var1 = AYuNw ^ 72210190740100L;
      B.eF();
      super();
      this.wLiAB = HttpClient.newBuilder().build();

      try {
         KeyPairGenerator var4 = KeyPairGenerator.getInstance(fv<"v">(3366, 2278584132540075428L ^ var1));
         var4.initialize(fy<"j">(26701, 2940855062317256229L ^ var1));
         this.tabJY = var4.generateKeyPair();
      } catch (Exception var6) {
         throw new RuntimeException(var6);
      }

      try {
         if (!C.eO()) {
            B.eE(new C[3]);
         }
      } catch (Exception var5) {
         throw fr(var5);
      }
   }

   static {
      Loader.doInit(D.class);
      _6ad51c436bb1fcf457da300270871c7e();
   }

   public static native void fp(C[] var0);

   private static native int fw(int var0, long var1);

   private static native String ft(int var0, long var1);

   private native String fk(Object[] var1) throws IOException, InterruptedException;

   private static native CallSite fv(Lookup var0, String var1, MethodType var2);

   private static native String fs(byte[] var0);

   private native byte[] fn(Object[] var1) throws Exception;

   private static native Exception fr(Exception var0);

   private native byte[] fo(Object[] var1) throws Exception;

   private native String fm(Object[] var1) throws IOException, InterruptedException;

   private static native void _6ad51c436bb1fcf457da300270871c7e();

   public static native C[] fq();

   public native t fj(Object[] var1);

   private static native CallSite fy(Lookup var0, String var1, MethodType var2);

   private static native Object fu(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int fx(Lookup var0, MutableCallSite var1, String var2, Object[] var3);
}
