package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;
import native.Loader;
import net.minecraft.class_1657;
import net.minecraft.class_746;
import sixtwo.on.vj;

public final class on {
   private static long ychpU;
   private static byte pZbuE;
   private final Map<class_1657, Integer> uIvMQ;
   private final Map<class_1657, vj> OzqAD;
   private final on$vh DRZZq;
   private final HashMap<String, Consumer<class_1657>> Qhsxo;
   private int ckiaz;
   private int odWva;
   private on$vi WrweX;
   private static int vLWpz;
   private static long DZVfH;
   private static long[] rwoSn;
   private static Integer[] vPiaY;
   private static Map oJdKq;
   private static long[] NDIrK;
   private static Long[] qWySh;
   private static Map boRUl;

   public on() {
      long var1 = DZVfH ^ 45997367470207L;
      int var10000 = cFL();
      super();
      this.uIvMQ = new HashMap<>();
      this.OzqAD = new HashMap<>();
      this.DRZZq = new on$vh();
      this.Qhsxo = new HashMap<>();
      this.ckiaz = 0;
      this.odWva = 0;
      this.WrweX = null;
      int var3 = var10000;

      try {
         if (var3 == 0) {
            iS.bwK("LMmnqb");
         }
      } catch (MatchException var4) {
         throw cFM(var4);
      }
   }

   static {
      Loader.doInit(on.class);
      _2adecbb190fa3991767a70421fcd2464();
   }

   private static native void _2adecbb190fa3991767a70421fcd2464();

   public native void cFy(class_1657 var1, byte var2);

   public native boolean cFA(class_1657 var1);

   public native void cFz(class_1657 var1);

   public native void cFw(double var1, double var3, double var5);

   public native boolean cFC(class_1657 var1);

   public native float cFB(class_1657 var1);

   public native void cFv();

   public native void cFs(class_1657 var1);

   public static native void cFJ(int var0);

   private native class_1657 cFx(double var1, double var3, double var5, class_746 var7);

   private static native CallSite cFP(Lookup var0, String var1, MethodType var2);

   private static native long cFQ(int var0, long var1);

   private static native MatchException cFM(MatchException var0);

   public native void cFt(String var1, Consumer<class_1657> var2);

   private static native int cFO(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native boolean cFE(class_1657 var1);

   private static native long cFR(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native int cFK();

   private static native CallSite cFS(Lookup var0, String var1, MethodType var2);

   public native void cFG();

   public static native int cFL();

   public native void cFu(String var1);

   private static native int cFN(int var0, long var1);

   public native boolean cFF(class_1657 var1);

   public native boolean cFD(class_1657 var1);
}
