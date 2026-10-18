package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fT extends gg {
   private final ct UpGbN;
   private final cu HRntz;
   private final cu IVIuI;
   private final cy NKPoi;
   private static long fTEJu;
   private static String[] CXiLM;
   private static String[] qVvAp;
   private static Map KLmcG;
   private static long[] AVUzP;
   private static Integer[] uaKgc;
   private static Map zRmWN;
   private static long iEwrn;

   public fT() {
      long var1 = fTEJu ^ 39934794740109L;
      super(gf.aZL(78, true, gh.KfAlY));
      this.UpGbN = new ct(
         this,
         mr.clS(
            new int[]{
               77,
               111,
               100,
               101
            }
         )
      );
      ct var10003 = this.UpGbN;
      int[] var10004 = new int[14];
      var10004[0] = 69;
      var10004[1] = 110;
      var10004[2] = 97;
      var10004[3] = 98;
      var10004[4] = 108;
      var10004[5] = 101;
      var10004[6] = 32;
      var10004[7] = 70;
      var10004[8] = 111;
      var10004[9] = 114;
      var10004[10] = 32;
      var10004[11] = 65;
      var10004[12] = 108;
      var10004[13] = 108;
      this.HRntz = new cu(var10003, mr.clS(var10004));
      var10003 = this.UpGbN;
      var10004 = new int[16];
      var10004[0] = 83;
      var10004[1] = 112;
      var10004[2] = 101;
      var10004[3] = 99;
      var10004[4] = 105;
      var10004[5] = 102;
      var10004[6] = 105;
      var10004[7] = 99;
      var10004[8] = 32;
      var10004[9] = 83;
      var10004[10] = 101;
      var10004[11] = 114;
      var10004[12] = 118;
      var10004[13] = 101;
      var10004[14] = 114;
      var10004[15] = 115;
      this.IVIuI = new cu(var10003, mr.clS(var10004)).SY();
      var10004 = new int[7];
      var10004[0] = 83;
      var10004[1] = 101;
      var10004[2] = 114;
      var10004[3] = 118;
      var10004[4] = 101;
      var10004[5] = 114;
      var10004[6] = 115;
      this.NKPoi = new cy(this, mr.clS(var10004))
         .Un(1024)
         .Uo("hypixel.net, play.example.com")
         .Up("anarchia.gg");
      this.NKPoi.Vf(this.IVIuI::SZ);
      this.UpGbN.Vd(this::aXt);
      this.NKPoi.Vd(this::aXt);
      hF.bdI(this);
   }

   static {
      Loader.doInit(fT.class);
      _0de1305b3b0fabf519af0ffeee017fb9();
   }

   @Override
   public native void aaj();

   private static native CallSite aXL(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aXp(gR var1);

   private native void aXt();

   @hG
   public native void aXq(gN var1);

   @hG
   public native void aXr(gM var1);

   @hG
   public native void aXs(gL$tk var1);

   private static native CallSite aXO(Lookup var0, String var1, MethodType var2);

   private static native String aXJ(int var0, long var1);

   private native boolean aXB(String var1, String var2);

   public native cu aXE();

   public native cu aXD();

   private static native Exception aXH(Exception var0);

   private static native int aXM(int var0, long var1);

   private native String aXz(String var1);

   private native String aXy(String var1);

   private static native int aXN(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native ct aXC();

   private native boolean aXx(String var1, String var2);

   private native boolean aXA(String var1);

   private static native String aXI(byte[] var0);

   private native boolean aXv();

   private static native Object aXK(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native boolean aXw();

   private native boolean aXu();

   public native cy aXF();

   private static native void _0de1305b3b0fabf519af0ffeee017fb9();

   @Override
   public native void YO();
}
