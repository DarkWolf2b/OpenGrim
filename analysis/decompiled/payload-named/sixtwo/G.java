package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.List;
import java.util.Map;
import native.Loader;

public abstract class G extends az {
   private static float JdxZX;
   private static float KeoSe;
   private static float dYUct;
   private static float vrvmB;
   protected final ah gIoQb;
   protected final ad UgfQu;
   protected final rk xzWmG;
   protected final rk HMvBX;
   private static long wNYKc;
   private static String[] OZJxj;
   private static String[] kWfeQ;
   private static Map YkVxs;
   private static long[] kwkup;
   private static Integer[] FJMeo;
   private static Map NrSEb;

   private static native void _4b4e796a151ec20f4460e8fe10ce3302();

   protected G() {
      long var1 = wNYKc ^ 10539720764440L;
      super();
      F.b();
      this.xzWmG = new rk(fP<"b">(27319, 8183083329931473714L ^ var1)).dhs(rj.UPXqT);

      try {
         this.HMvBX = new rk(fP<"b">(30396, 1036257444307201850L ^ var1)).dhs(rj.NJlxm);
         this.gIoQb = new ah();
         this.UgfQu = new ad(lE.joxgd.bYM(8.0F));
         this.UgfQu.lZ(fM<"w">(20196, 976674773656228908L ^ var1));
         if (iS.bwL() == null) {
            F.b(new String[4]);
         }
      } catch (MatchException var4) {
         throw fI(var4);
      }
   }

   static {
      Loader.doInit(G.class);
      _4b4e796a151ec20f4460e8fe10ce3302();
   }

   protected abstract List<E> i();

   protected abstract void j(int[] var1);

   @Override
   public native float dn();

   @Override
   public native void dl(double var1, double var3, mA var5);

   @Override
   public native boolean dm(int var1, int var2, int var3);

   @Override
   public native boolean dk(double var1, double var3, mA var5);

   private native G$rJ fG();

   private native void fF(float var1, float var2, E var3);

   @Override
   protected native void bV(lC var1);

   private native void fE();

   protected native float fB();

   @Override
   public native boolean fC(double var1, double var3, double var5);

   private static native String fJ(byte[] var0);

   private static native Object fL(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native MatchException fI(MatchException var0);

   private native float fD(int var1);

   private static native String fK(int var0, long var1);

   private static native int fN(int var0, long var1);

   private static native int fO(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite fP(Lookup var0, String var1, MethodType var2);

   private static native CallSite fM(Lookup var0, String var1, MethodType var2);

   @Override
   public native boolean eK(char var1);
}
