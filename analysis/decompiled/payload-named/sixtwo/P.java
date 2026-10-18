package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class P extends X<P> {
   private aj ePwbr;
   private int[] IgwyG;
   private lf LFXJA;
   private S NZNcZ;
   private rk NlsJa;
   private static String[] AQKht;
   private static long jfbMe;
   private static String[] QLckI;
   private static String[] GFXwi;
   private static Map TUTeC;
   private static long[] tyvjM;
   private static Integer[] OxIYt;
   private static Map JpUGM;

   public P(aj var1, int[] var2, lf var3) {
      long var4 = jfbMe ^ 122477627607644L;
      super();
      this.NZNcZ = S.DcYIP;
      this.NlsJa = new rk(ig<"z">(11112, 2824592839399586925L ^ var4)).dhs(rj.UPXqT);
      this.ePwbr = var1;
      this.IgwyG = var2;
      this.LFXJA = var3;
      this.WjISQ = 19.0F;
   }

   public P(aj var1, String var2, lf var3) {
      long var4 = jfbMe ^ 109143771543282L;
      super();
      this.NZNcZ = S.DcYIP;
      this.NlsJa = new rk(ig<"z">(21871, 4694623299853303493L ^ var4)).dhs(rj.UPXqT);
      this.ePwbr = var1;
      this.IgwyG = mZ.csh(var2);
      this.LFXJA = var3;
      this.WjISQ = 19.0F;
   }

   static {
      Loader.doInit(P.class);
      _0af9684411da2d3aa88fade5d86056d6();
   }

   private static native CallSite id(Lookup var0, String var1, MethodType var2);

   @Override
   public native float dn();

   private static native int ie(int var0, long var1);

   private static native String ia(byte[] var0);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   private static native int if(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native Object ic(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @Override
   protected native void bV(lC var1);

   private static native String ib(int var0, long var1);

   public static native void hX(String[] var0);

   public static native String[] hY();

   public native P hO(S var1);

   private static native void _0af9684411da2d3aa88fade5d86056d6();

   private static native CallSite ig(Lookup var0, String var1, MethodType var2);

   private static native MatchException hZ(MatchException var0);

   public native S hS();

   public native P hN(aj var1);

   public native aj hP();

   public native P hW(rk var1);

   public native int[] hQ();

   public native P hU(int[] var1);

   public native P hV(lf var1);

   public native rk hT();

   public native lf hR();
}
