package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;
import native.Loader;
import net.minecraft.client.network.ClientPlayerEntity;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.on.vj;

public final class on {
   private static long ychpU;
   private static byte pZbuE;
   private final Map<PlayerEntity, Integer> uIvMQ;
   private final Map<PlayerEntity, vj> OzqAD;
   private final on$vh DRZZq;
   private final HashMap<String, Consumer<PlayerEntity>> Qhsxo;
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

   public native void cFy(PlayerEntity var1, byte var2);

   public native boolean cFA(PlayerEntity var1);

   public native void cFz(PlayerEntity var1);

   public native void cFw(double var1, double var3, double var5);

   public native boolean cFC(PlayerEntity var1);

   public native float cFB(PlayerEntity var1);

   public native void cFv();

   public native void cFs(PlayerEntity var1);

   public static native void cFJ(int var0);

   private native PlayerEntity cFx(double var1, double var3, double var5, ClientPlayerEntity var7);

   private static native CallSite cFP(Lookup var0, String var1, MethodType var2);

   private static native long cFQ(int var0, long var1);

   private static native MatchException cFM(MatchException var0);

   public native void cFt(String var1, Consumer<PlayerEntity> var2);

   private static native int cFO(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native boolean cFE(PlayerEntity var1);

   private static native long cFR(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public static native int cFK();

   private static native CallSite cFS(Lookup var0, String var1, MethodType var2);

   public native void cFG();

   public static native int cFL();

   public native void cFu(String var1);

   private static native int cFN(int var0, long var1);

   public native boolean cFF(PlayerEntity var1);

   public native boolean cFD(PlayerEntity var1);
}
