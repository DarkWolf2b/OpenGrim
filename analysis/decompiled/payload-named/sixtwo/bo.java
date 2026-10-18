package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;

public class bo extends az {
   private final nf jZEcd;
   private final az zxOMV;
   private final ri jFosN;
   private final rk lAJLi;
   private final rk UCmRU;
   private static long ejgBq;
   private static String[] WTtGn;
   private static String[] XTYeh;
   private static Map Nufut;
   private static long[] OXgHV;
   private static Integer[] XLRYu;
   private static Map uTsCw;

   private static native int FC(int var0, long var1);

   public bo(nf var1, az var2) {
      long var3 = ejgBq ^ 64901858655233L;
      super();
      this.lAJLi = new rk(FE<"u">(21461, 503761154503059674L ^ var3)).dhs(rj.XzDkv);
      this.UCmRU = new rk(FE<"u">(15753, 8553666534948161159L ^ var3)).dhs(rj.UPXqT);
      this.jZEcd = var1;
      this.zxOMV = var2;
      Item var5 = jc.bzz(var1.ctT());
      mG var6 = jc.bzB(var5);
      this.jFosN = new ri(FE<"u">(15753, 8553666534948161159L ^ var3), var6);
   }

   static {
      Loader.doInit(bo.class);
      _59e141878ced10e285ef05299aa3d0d3();
   }

   @Override
   public native float dn();

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   @Override
   protected native void bV(lC var1);

   @Override
   public native void dY();

   private static native void _59e141878ced10e285ef05299aa3d0d3();

   private static native CallSite FE(Lookup var0, String var1, MethodType var2);

   private static native MatchException Fx(MatchException var0);

   private native void Fw(double var1, double var3);

   private static native Object FA(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String Fz(int var0, long var1);

   private static native CallSite FB(Lookup var0, String var1, MethodType var2);

   private static native int FD(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String Fy(byte[] var0);
}
