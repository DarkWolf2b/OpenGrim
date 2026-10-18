package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Items;

public class dS extends gg {
   private final ct CFOLa;
   private final cu CeZar;
   private final cu UeXgv;
   private final cv gWbBh;
   private final cw Shkca;
   private final cw FoNvc;
   private final cK xmgVN;
   private static long bOPYi;
   private static long[] MuwUi;
   private static Integer[] MVuFv;
   private static Map kpzZC;

   private static native void _3323b79ccdee7f922ab8849d424294e5();

   public dS() {
      long var1 = bOPYi ^ 11157974212133L;
      super(gf.aZL(apH<"j">(11491, 7663829904462061910L ^ var1), false, gh.qBzlZ));
      int[] var10004 = new int[apH<"j">(27449, 7290401367564379786L ^ var1)];
      var10004[0] = apH<"j">(740, 1603273966508478291L ^ var1);
      var10004[1] = apH<"j">(18423, 2096093720539220566L ^ var1);
      var10004[2] = apH<"j">(62, 1013182105881513356L ^ var1);
      var10004[3] = apH<"j">(1111, 7256248204062329336L ^ var1);
      var10004[4] = apH<"j">(8291, 48641930668092879L ^ var1);
      var10004[5] = apH<"j">(2293, 2970824453890147660L ^ var1);
      this.CFOLa = new ct(this, mr.clS(var10004));
      this.CeZar = new cu(
         this.CFOLa,
         mr.clS(
            new int[]{apH<"j">(13325, 5259222209519729043L ^ var1), apH<"j">(23040, 6185163645121025954L ^ var1), apH<"j">(18673, 4039864290053342542L ^ var1)}
         )
      );
      ct var10003 = this.CFOLa;
      var10004 = new int[apH<"j">(19468, 5956129947944075684L ^ var1)];
      var10004[0] = apH<"j">(29635, 6955710573046890089L ^ var1);
      var10004[1] = apH<"j">(30725, 5981565220168201640L ^ var1);
      var10004[2] = apH<"j">(13080, 4457871272599305863L ^ var1);
      var10004[3] = apH<"j">(20468, 7638720074996826707L ^ var1);
      var10004[4] = apH<"j">(17826, 1519610981291345938L ^ var1);
      var10004[5] = apH<"j">(5355, 4750558654190360896L ^ var1);
      var10004[apH<"j">(14497, 4236608746984715547L ^ var1)] = apH<"j">(19323, 92780076022580938L ^ var1);
      var10004[apH<"j">(31001, 5021834936161662125L ^ var1)] = apH<"j">(13080, 4457871272599305863L ^ var1);
      var10004[apH<"j">(12618, 6799653873958927594L ^ var1)] = apH<"j">(10193, 3976900100418644589L ^ var1);
      this.UeXgv = new cu(var10003, mr.clS(var10004));
      var10004 = new int[apH<"j">(26457, 5549390433162652354L ^ var1)];
      var10004[0] = apH<"j">(30592, 4822896394582850094L ^ var1);
      var10004[1] = apH<"j">(31453, 2850972149587965795L ^ var1);
      var10004[2] = apH<"j">(12670, 658104296425012454L ^ var1);
      var10004[3] = apH<"j">(5329, 5929972168726681962L ^ var1);
      var10004[4] = apH<"j">(14749, 2701180005101810750L ^ var1);
      var10004[5] = apH<"j">(14913, 4740796514640508892L ^ var1);
      var10004[apH<"j">(14497, 4236608746984715547L ^ var1)] = apH<"j">(23288, 3063876939070723904L ^ var1);
      this.gWbBh = new cv(this, mr.clS(var10004)).Tm(1);
      this.Shkca = new cw(
            this.gWbBh,
            mr.clS(
               new int[]{
                  apH<"j">(1768, 2856040268381555532L ^ var1),
                  apH<"j">(18673, 4039864290053342542L ^ var1),
                  apH<"j">(13855, 5624710136497486778L ^ var1),
                  apH<"j">(16365, 1250447916468679259L ^ var1),
                  apH<"j">(13080, 4457871272599305863L ^ var1)
               }
            )
         )
         .Tz();
      this.FoNvc = new cw(
            this.gWbBh,
            mr.clS(
               new int[]{
                  apH<"j">(14371, 4544979209699898762L ^ var1),
                  apH<"j">(12670, 658104296425012454L ^ var1),
                  apH<"j">(13080, 4457871272599305863L ^ var1),
                  apH<"j">(10259, 8647122691656623503L ^ var1),
                  apH<"j">(16324, 3628660673300410974L ^ var1)
               }
            )
         )
         .Tz();
      var10004 = new int[apH<"j">(14497, 4236608746984715547L ^ var1)];
      var10004[0] = apH<"j">(31574, 8115015966145509104L ^ var1);
      var10004[1] = apH<"j">(18673, 4039864290053342542L ^ var1);
      var10004[2] = apH<"j">(31453, 2850972149587965795L ^ var1);
      var10004[3] = apH<"j">(16365, 1250447916468679259L ^ var1);
      var10004[4] = apH<"j">(16324, 3628660673300410974L ^ var1);
      var10004[5] = apH<"j">(28981, 4648501809159601288L ^ var1);
      this.xmgVN = new cK(this, mr.clS(var10004)).WM(jc.GjreY).WN(Items.COBWEB, Items.PAINTING);
      this.xmgVN.Vf(this.UeXgv::SZ);
   }

   static {
      Loader.doInit(dS.class);
      _3323b79ccdee7f922ab8849d424294e5();
   }

   private static native int apG(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int apF(int var0, long var1);

   private static native CallSite apH(Lookup var0, String var1, MethodType var2);

   @hG
   public native void apC(hm var1);

   private static native MatchException apE(MatchException var0);

   private native boolean apD();
}
