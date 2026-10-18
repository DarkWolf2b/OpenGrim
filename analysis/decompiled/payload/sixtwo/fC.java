package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_2743;

public class fC extends gg {
   private final cA oUOJc;
   private final cA hXcoz;
   private final cJ pltDm;
   private static long sLnpv;
   private static String[] LKrNn;
   private static String[] rFUaB;
   private static Map jqBCR;
   private static long[] rcPcu;
   private static Integer[] MZPLF;
   private static Map LCHwy;

   private static native void _fa31f22af70cbdf56e21b1052cda26bc();

   public fC() {
      long var1 = sLnpv ^ 106381621914446L;
      super(gf.aZL(aSG<"v">(28172, 6153077312428651445L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aSG<"v">(6546, 3771331054358479882L ^ var1)];
      var10004[0] = aSG<"v">(1782, 282494333833829189L ^ var1);
      var10004[1] = aSG<"v">(12200, 2981597257632117299L ^ var1);
      var10004[2] = aSG<"v">(7429, 7286908870250610871L ^ var1);
      var10004[3] = aSG<"v">(11531, 6238023292620468393L ^ var1);
      var10004[4] = aSG<"v">(21038, 4648376513493831556L ^ var1);
      var10004[5] = aSG<"v">(27316, 53979947036915487L ^ var1);
      var10004[aSG<"v">(26390, 3043743103099517610L ^ var1)] = aSG<"v">(30220, 6274099986950695867L ^ var1);
      var10004[aSG<"v">(11255, 5063267683538859604L ^ var1)] = aSG<"v">(12723, 1017400880727551007L ^ var1);
      var10004[aSG<"v">(1405, 7106872579082541294L ^ var1)] = aSG<"v">(16254, 4695176415527461587L ^ var1);
      var10004[aSG<"v">(12430, 4727271382617124154L ^ var1)] = aSG<"v">(4268, 8736899479324347666L ^ var1);
      this.oUOJc = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(aSD<"p">(24777, 8175925639512124811L ^ var1));
      var10004 = new int[aSG<"v">(31959, 2953301684765696326L ^ var1)];
      var10004[0] = aSG<"v">(8258, 1134704815145680338L ^ var1);
      var10004[1] = aSG<"v">(2435, 7477988177419490355L ^ var1);
      var10004[2] = aSG<"v">(24150, 4558859053545882562L ^ var1);
      var10004[3] = aSG<"v">(2571, 6562322685934720943L ^ var1);
      var10004[4] = aSG<"v">(21076, 4071762225991258062L ^ var1);
      var10004[5] = aSG<"v">(18217, 1496762005767559830L ^ var1);
      var10004[aSG<"v">(19887, 6562479851756720186L ^ var1)] = aSG<"v">(21904, 9066327299784116272L ^ var1);
      var10004[aSG<"v">(7374, 7433284731114570111L ^ var1)] = aSG<"v">(7320, 1241460258138734896L ^ var1);
      this.hXcoz = new cA(this, mr.clS(var10004)).UG(1.0).UE(0.0).UF(100.0).UI(100.0, 100.0).UH(aSD<"p">(26984, 1982611059606447147L ^ var1));
      var10004 = new int[aSG<"v">(2623, 885795543446968196L ^ var1)];
      var10004[0] = aSG<"v">(27211, 1397048471750064087L ^ var1);
      var10004[1] = aSG<"v">(21076, 4071762225991258062L ^ var1);
      var10004[2] = aSG<"v">(10697, 4744089151725761627L ^ var1);
      var10004[3] = aSG<"v">(21904, 9066327299784116272L ^ var1);
      var10004[4] = aSG<"v">(16585, 5465314742675184982L ^ var1);
      var10004[5] = aSG<"v">(7320, 1241460258138734896L ^ var1);
      var10004[aSG<"v">(19887, 6562479851756720186L ^ var1)] = aSG<"v">(22762, 3557760483123037509L ^ var1);
      var10004[aSG<"v">(7374, 7433284731114570111L ^ var1)] = aSG<"v">(17606, 2593563752422545763L ^ var1);
      var10004[aSG<"v">(31959, 2953301684765696326L ^ var1)] = aSG<"v">(6650, 8783171058140595283L ^ var1);
      var10004[aSG<"v">(21085, 8215857490504421349L ^ var1)] = aSG<"v">(5427, 8872519583000873117L ^ var1);
      var10004[aSG<"v">(22229, 4735865085839575922L ^ var1)] = aSG<"v">(2065, 2588166173593982375L ^ var1);
      var10004[aSG<"v">(23876, 792698980838834405L ^ var1)] = aSG<"v">(1293, 5751660952801204407L ^ var1);
      var10004[aSG<"v">(28418, 2162994343110488735L ^ var1)] = aSG<"v">(7320, 1241460258138734896L ^ var1);
      var10004[aSG<"v">(11054, 6870303598072985243L ^ var1)] = aSG<"v">(23115, 6450457979496826837L ^ var1);
      var10004[aSG<"v">(23721, 5186152682239394063L ^ var1)] = aSG<"v">(21076, 4071762225991258062L ^ var1);
      var10004[aSG<"v">(22186, 4010995410793761559L ^ var1)] = aSG<"v">(24304, 2792986216740193129L ^ var1);
      this.pltDm = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(fC.class);
      _fa31f22af70cbdf56e21b1052cda26bc();
   }

   private static native int aSF(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aSG(Lookup var0, String var1, MethodType var2);

   private static native String aSA(byte[] var0);

   private static native String aSB(int var0, long var1);

   private static native CallSite aSD(Lookup var0, String var1, MethodType var2);

   private native double aSx(double var1, double var3, int var5);

   @hG
   public native void aSw(gL$tk var1);

   private static native MatchException aSz(MatchException var0);

   private static native int aSE(int var0, long var1);

   private static native Object aSC(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void aSy(class_2743 var1, double var2, double var4, double var6);
}
