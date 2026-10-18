package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.function.Predicate;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Hand;

public class dR extends gg {
   private final cD KnWWg;
   private final cD jdDxa;
   private final cD HOwTg;
   private final cA PiCte;
   private final mT klvjL;
   private final ol MEsln;
   private dR$sI eXNKU;
   private Runnable wSKUO;
   private static long jnLhl;
   private static String gcmeH;
   private static long[] UoJZc;
   private static Integer[] Hsjeq;
   private static Map YVFTe;

   private static native void _ae3be230d1224284befad7f70e5ec09a();

   private native void aps();

   public dR() {
      long var1 = jnLhl ^ 99254914350223L;
      super(gf.aZL(60, false, gh.qBzlZ));
      int[] var10004 = new int[9];
      var10004[0] = 80;
      var10004[1] = 101;
      var10004[2] = 97;
      var10004[3] = 114;
      var10004[4] = 108;
      var10004[5] = 32;
      var10004[6] = 75;
      var10004[7] = 101;
      var10004[8] = 121;
      this.KnWWg = new cD(this, mr.clS(var10004)).VO(-999);
      var10004 = new int[12];
      var10004[0] = 70;
      var10004[1] = 105;
      var10004[2] = 114;
      var10004[3] = 101;
      var10004[4] = 119;
      var10004[5] = 111;
      var10004[6] = 114;
      var10004[7] = 107;
      var10004[8] = 32;
      var10004[9] = 75;
      var10004[10] = 101;
      var10004[11] = 121;
      this.jdDxa = new cD(this, mr.clS(var10004)).VO(-999);
      var10004 = new int[10];
      var10004[0] = 80;
      var10004[1] = 111;
      var10004[2] = 116;
      var10004[3] = 105;
      var10004[4] = 111;
      var10004[5] = 110;
      var10004[6] = 32;
      var10004[7] = 75;
      var10004[8] = 101;
      var10004[9] = 121;
      this.HOwTg = new cD(this, mr.clS(var10004)).VO(-999);
      var10004 = new int[12];
      var10004[0] = 82;
      var10004[1] = 101;
      var10004[2] = 116;
      var10004[3] = 117;
      var10004[4] = 114;
      var10004[5] = 110;
      var10004[6] = 32;
      var10004[7] = 68;
      var10004[8] = 101;
      var10004[9] = 108;
      var10004[10] = 97;
      var10004[11] = 121;
      this.PiCte = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(gcmeH);
      this.klvjL = mT.cpz();
      this.MEsln = new ol(this);
      this.eXNKU = dR$sI.qWbQG;
   }

   static {
      Loader.doInit(dR.class);
      _ae3be230d1224284befad7f70e5ec09a();
   }

   private native void app(int var1, Hand var2, qL var3, Item var4);

   @hG
   public native void apj(gA var1);

   private native void apq(Hand var1);

   private native void apo(Item var1, Predicate<ItemStack> var2);

   private static native MatchException apx(MatchException var0);

   private native void apn(Item var1, Predicate<ItemStack> var2);

   private static native String apy(byte[] var0);

   private static native CallSite apB(Lookup var0, String var1, MethodType var2);

   private static native int apA(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void apk(gH$th var1);

   private native boolean apl(ItemStack var1);

   private native ItemStack apm(Predicate<ItemStack> var1);

   private static native int apz(int var0, long var1);

   private native void apr();

   @Override
   public native void YO();
}
