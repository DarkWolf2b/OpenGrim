package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ab extends az {
   private final rk fIMlO;
   private final rk IMZfY;
   private mG ffdLg;
   private mG BiXTn;
   private final ri hEOCR;
   private aa xkYOr;
   private boolean GgyNW;
   private static long CZTRF;
   private static long[] UPBXc;
   private static Integer[] OtpWj;
   private static Map uQDgA;

   public ab(boolean var1) {
      long var2 = CZTRF ^ 61900225012124L;
      super();
      this.fIMlO = new rk(ln<"g">(3284, 3742755653139888510L ^ var2)).dhs(rj.UPXqT);
      this.IMZfY = new rk(ln<"g">(19452, 481457683202784855L ^ var2)).dhs(rj.XzDkv);
      this.GgyNW = var1;
      this.BcpIo = 15.0F;
      this.WjISQ = 8.0F;
      ig var4 = rD.dlM().bjG();

      ab var10000;
      ri var10001;
      ri var10002;
      int var10003;
      mG var10004;
      label17: {
         try {
            this.ffdLg = var4.bir();
            this.BiXTn = var4.bis();
            var10000 = this;
            var10001 = new ri;
            var10002 = var10001;
            var10003 = ln<"g">(19452, 481457683202784855L ^ var2);
            if (var1) {
               var10004 = this.BiXTn;
               break label17;
            }
         } catch (MatchException var5) {
            throw lk(var5);
         }

         var10004 = this.ffdLg;
      }

      var10002./* $VF: Unable to resugar constructor */<init>(var10003, var10004);
      var10000.hEOCR = var10001.dfW(rj.UPXqT);
   }

   static {
      Loader.doInit(ab.class);
      _b631bee9f62e8bc7f2a74f5399522219();
   }

   public native ri ld();

   public native boolean lf();

   @Override
   public native float dn();

   public native aa le();

   private static native CallSite ln(Lookup var0, String var1, MethodType var2);

   public native mG lc();

   public native ab li(aa var1);

   private static native MatchException lk(MatchException var0);

   public native mG lb();

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   public native ab lg(mG var1);

   public native rk la();

   public native ab lh(mG var1);

   private static native int lm(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @Override
   public native float kN();

   @Override
   protected native void bV(lC var1);

   private static native int ll(int var0, long var1);

   private static native void _b631bee9f62e8bc7f2a74f5399522219();

   public native rk kZ();

   public native ab lj(boolean var1);
}
