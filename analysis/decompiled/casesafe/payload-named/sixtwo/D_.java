package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.util.math.Vec2f;

public class D extends ak<cL> {
   private static float wROpY;
   private final rk eRMSo;
   private final rk CpJYd;
   private final rk WlUSf;
   private final rk gOcCu;
   private final rk doXNy;
   private final rk iYaup;
   private boolean QNUBB;
   private boolean kIOqP;
   private static long VGdtl;
   private static long[] WiuaB;
   private static Integer[] fyVLy;
   private static Map IzEFY;

   public D(cL var1, az var2) {
      long var3 = VGdtl ^ 116654177302908L;
      super(var1, var2);
      this.eRMSo = new rk(fA<"e">(18108, 2246659709259771025L ^ var3)).dhs(rj.MBpuQ);
      this.CpJYd = new rk(fA<"e">(3137, 4543610486336202349L ^ var3)).dhs(rj.MBpuQ);
      this.WlUSf = new rk(fA<"e">(3137, 4543610486336202349L ^ var3)).dhs(rj.MBpuQ);
      this.gOcCu = new rk(fA<"e">(3137, 4543610486336202349L ^ var3)).dhs(rj.MBpuQ);
      this.doXNy = new rk(fA<"e">(27623, 2550669665142424008L ^ var3)).dhs(rj.UPXqT);
      this.iYaup = new rk(fA<"e">(5202, 115616064022429308L ^ var3)).dhs(rj.UPXqT);
      this.eRMSo.dhe(var1.Xt().x);
      this.CpJYd.dhe(var1.Xt().y);
      this.WlUSf.dhe(var1.Xu().x);
      this.gOcCu.dhe(var1.Xu().y);
   }

   static {
      Loader.doInit(D.class);
      _9cd2f71414855ceb2d07a0f8decaf2e6();
   }

   private native void fp(lC var1, float var2, float var3, float var4);

   @Override
   public native float dn();

   private native float fw(rk var1, float var2, boolean var3);

   private native float ft(float var1, float var2, float var3, float var4, float var5);

   private native float fv(float var1, float var2, float var3, float var4);

   @Override
   public native void dl(double var1, double var3, mA var5);

   private native Vec2f fs(float var1, float var2, float var3, float var4, float var5, float var6, float var7, float var8);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   private native Vec2f fr(lC var1, float var2, float var3, float var4, float var5, float var6, float var7);

   @Override
   protected native void bV(lC var1);

   private static native CallSite fA(Lookup var0, String var1, MethodType var2);

   private static native int fz(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @Override
   public native boolean dB(double var1, double var3, mA var5, double var6, double var8);

   private native void fq(lC var1, float var2, float var3, float var4, float var5, float var6, float var7);

   private static native int fy(int var0, long var1);

   private native float fu(float var1, float var2, float var3, float var4, float var5);

   private static native MatchException fx(MatchException var0);

   private static native void _9cd2f71414855ceb2d07a0f8decaf2e6();
}
