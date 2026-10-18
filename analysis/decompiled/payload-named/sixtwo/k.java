package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public abstract class k extends az {
   protected final az FmeTj;
   protected final boolean IrXIR;
   protected Object ezaOY;
   protected m wBqMs;
   protected j Ngfhl;
   protected ld cSEXm;
   protected mG xetOQ;
   protected mG aFoRu;
   protected float mOGYZ;
   protected float dUPLX;
   protected float qbars;
   private final int jbaJU;
   private int VaPJD;
   protected final rk oxWkM;
   private static int[] luVPb;
   private static long QcyNt;
   private static long[] CXETa;
   private static Integer[] KYVtu;
   private static Map fXlqx;

   private static native void _11afa03fa5b7215e4f7fccd03514f06f();

   protected k(az var1) {
      this(var1, false);
   }

   protected k(az var1, boolean var2) {
      long var3 = QcyNt ^ 139812336500604L;
      super();
      this.wBqMs = m.rxuUu;
      this.Ngfhl = j.LjCBS;
      this.cSEXm = ld.all(5.0F);
      this.mOGYZ = 5.0F;
      cJ();
      this.dUPLX = 10.0F;
      this.qbars = 63.75F;
      this.VaPJD = cN<"p">(27149, 4846525672625117631L ^ var3);
      this.oxWkM = new rk(this.VaPJD).dhs(rj.MBpuQ);
      this.FmeTj = var1;
      this.IrXIR = var2;
      this.jbaJU = cN<"p">(25351, 20412838244487348L ^ var3);
      this.sS(true);

      try {
         if (iS.bwL() == null) {
            cI(new int[1]);
         }
      } catch (MatchException var6) {
         throw cK(var6);
      }
   }

   static {
      Loader.doInit(k.class);
      _11afa03fa5b7215e4f7fccd03514f06f();
   }

   public native ld cs();

   public native k ca(int var1);

   protected abstract void cd(lC var1, float var2, float var3);

   public native j cr();

   protected native mG ce(float var1);

   protected abstract float cb();

   private native boolean ch(lC var1);

   private native void cl(lC var1, float var2);

   public native az cn();

   public native mG ct();

   protected native mG cf(float var1);

   private native void cj(lC var1, float var2, float var3, mG var4);

   public native Object cp();

   public native float cv();

   private native void ck(lC var1, float var2, mG var3);

   protected abstract float cc();

   public native float cw();

   private native void ci(float var1, float var2, float var3, float var4, float var5);

   public native mG cu();

   public native float cx();

   public native boolean co();

   private static native CallSite cN(Lookup var0, String var1, MethodType var2);

   private static native MatchException cK(MatchException var0);

   public static native int[] cJ();

   public native int cy();

   public native k cD(j var1);

   public native rk cA();

   public native k cC(m var1);

   public native k cF(float var1);

   private static native int cL(int var0, long var1);

   public native int cz();

   public native k cE(float var1);

   private static native int cM(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native k cB(Object var1);

   public static native void cI(int[] var0);

   public native k cG(float var1);

   public native k bY(mG var1);

   public native k bX(mG var1);

   private native void cg(lC var1, float var2);

   public native k bZ(ld var1);

   @Override
   protected final native void bV(lC var1);

   public native boolean bW(lC var1);

   private native float cm();

   public native m cq();
}
