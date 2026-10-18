package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_243;
import net.minecraft.class_2680;
import net.minecraft.class_3965;

public class fd extends gg {
   private final cC ZVSdF;
   private final mT hcRZI;
   private boolean YKpSx;
   private class_2338 ghppw;
   private static long NBgrV;
   private static String eVFHp;
   private static long[] HyqSb;
   private static Integer[] OnNGV;
   private static Map oPMeR;

   public fd() {
      long var1 = NBgrV ^ 10866491173179L;
      super(gf.aZL(aIi<"d">(22631, 8172244002472569826L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aIi<"d">(26747, 1952431804193872881L ^ var1)];
      var10004[0] = aIi<"d">(12502, 6279302406270632784L ^ var1);
      var10004[1] = aIi<"d">(30966, 4664240385609370481L ^ var1);
      var10004[2] = aIi<"d">(27182, 6569800661560269229L ^ var1);
      var10004[3] = aIi<"d">(28006, 609090171743117026L ^ var1);
      var10004[4] = aIi<"d">(20891, 4681756237764633106L ^ var1);
      var10004[5] = aIi<"d">(27182, 6569800661560269229L ^ var1);
      var10004[aIi<"d">(27696, 5924389369247375282L ^ var1)] = aIi<"d">(762, 5358979813040288122L ^ var1);
      var10004[aIi<"d">(24087, 2467559212826701206L ^ var1)] = aIi<"d">(3106, 5639046460928819113L ^ var1);
      this.ZVSdF = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(10.0).VA(0.0).Vz(eVFHp);
      this.hcRZI = mT.cpA();
   }

   static {
      Loader.doInit(fd.class);
      _6c0a13300577b58a618e169667ef69c5();
   }

   private static native void _6c0a13300577b58a618e169667ef69c5();

   @Override
   public native void YO();

   private static native int aIh(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void aHU(gv var1);

   private static native CallSite aIi(Lookup var0, String var1, MethodType var2);

   private static native MatchException aIe(MatchException var0);

   private static native String aIf(byte[] var0);

   private static native int aIg(int var0, long var1);

   private native boolean aIa(class_243 var1);

   private native fd$sO aHW();

   private native class_243 aHZ(class_2338 var1, class_2680 var2);

   private native class_2350 aIc(class_243 var1);

   private native fd$sO aHX(class_3965 var1);

   @hG
   public native void aHV(gH$th var1);

   private native class_3965 aHY(class_2338 var1, class_2680 var2);

   private native void aId();

   private native boolean aIb(oT var1, boolean var2);
}
