package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fR extends gg {
   private final ct foDkU;
   private final cu sxltZ;
   private final cu uLWvr;
   private final cC ZvuAA;
   private static long rOGIl;
   private static String ymMTJ;
   private static long[] aChQX;
   private static Integer[] KCbXY;
   private static Map QkNsh;

   public fR() {
      long var1 = rOGIl ^ 12271598854892L;
      super(gf.aZL(aWO<"v">(30901, 7155363220575713106L ^ var1), true, gh.KfAlY));
      int[] var10004 = new int[aWO<"v">(210, 1588109550955433789L ^ var1)];
      var10004[0] = aWO<"v">(10491, 3870906284458354465L ^ var1);
      var10004[1] = aWO<"v">(17849, 7350776929791363650L ^ var1);
      var10004[2] = aWO<"v">(23851, 8459917110963917525L ^ var1);
      var10004[3] = aWO<"v">(24719, 3462521436767121254L ^ var1);
      var10004[4] = aWO<"v">(23468, 2294358336451007580L ^ var1);
      var10004[5] = aWO<"v">(12658, 2393938322694979216L ^ var1);
      var10004[aWO<"v">(561, 7544563286128332250L ^ var1)] = aWO<"v">(14461, 5503590525098047387L ^ var1);
      var10004[aWO<"v">(25460, 818056892514561182L ^ var1)] = aWO<"v">(24868, 4991480902389558992L ^ var1);
      var10004[aWO<"v">(19953, 1855121760233832963L ^ var1)] = aWO<"v">(6698, 2210829677265819079L ^ var1);
      var10004[aWO<"v">(3352, 4824965758945034983L ^ var1)] = aWO<"v">(14384, 4098108139611928525L ^ var1);
      this.foDkU = new ct(this, mr.clS(var10004));
      ct var10003 = this.foDkU;
      var10004 = new int[aWO<"v">(7167, 808952356650095654L ^ var1)];
      var10004[0] = aWO<"v">(32566, 4766843690962612434L ^ var1);
      var10004[1] = aWO<"v">(6685, 4232888699813336545L ^ var1);
      var10004[2] = aWO<"v">(20940, 6242274838741573136L ^ var1);
      var10004[3] = aWO<"v">(14724, 1510542835584874108L ^ var1);
      var10004[4] = aWO<"v">(8862, 7017766271183662403L ^ var1);
      var10004[5] = aWO<"v">(32600, 8912631476449636487L ^ var1);
      this.sxltZ = new cu(var10003, mr.clS(var10004));
      var10003 = this.foDkU;
      var10004 = new int[aWO<"v">(7167, 808952356650095654L ^ var1)];
      var10004[0] = aWO<"v">(16429, 6670466003422171096L ^ var1);
      var10004[1] = aWO<"v">(4814, 2735014908689947950L ^ var1);
      var10004[2] = aWO<"v">(13903, 2103098314230151612L ^ var1);
      var10004[3] = aWO<"v">(5013, 5187809564332399737L ^ var1);
      var10004[4] = aWO<"v">(1274, 4263722561647348505L ^ var1);
      var10004[5] = aWO<"v">(11454, 2830137366516671342L ^ var1);
      this.uLWvr = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aWO<"v">(911, 6386327195307183222L ^ var1)];
      var10004[0] = aWO<"v">(12155, 7545472894102020236L ^ var1);
      var10004[1] = aWO<"v">(6685, 4232888699813336545L ^ var1);
      var10004[2] = aWO<"v">(4814, 2735014908689947950L ^ var1);
      var10004[3] = aWO<"v">(24916, 4040761077293903541L ^ var1);
      var10004[4] = aWO<"v">(3336, 5419485213109715698L ^ var1);
      var10004[5] = aWO<"v">(28323, 3373250124351168853L ^ var1);
      var10004[aWO<"v">(7167, 808952356650095654L ^ var1)] = aWO<"v">(3302, 630669615761326862L ^ var1);
      var10004[aWO<"v">(29431, 7234716807632583961L ^ var1)] = aWO<"v">(6685, 4232888699813336545L ^ var1);
      var10004[aWO<"v">(10314, 5685736279197853627L ^ var1)] = aWO<"v">(1274, 4263722561647348505L ^ var1);
      var10004[aWO<"v">(3601, 8764322050871099849L ^ var1)] = aWO<"v">(4814, 2735014908689947950L ^ var1);
      var10004[aWO<"v">(2878, 328975831946298597L ^ var1)] = aWO<"v">(16319, 940331083108626522L ^ var1);
      var10004[aWO<"v">(16971, 7552783034177473941L ^ var1)] = aWO<"v">(11454, 2830137366516671342L ^ var1);
      this.ZvuAA = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(0.0).Vx(100.0).VA(70.0).Vz(ymMTJ);
   }

   static {
      Loader.doInit(fR.class);
      _be8876597688c4e993e11acafd73b0dc();
   }

   private static native int aWM(int var0, long var1);

   private static native String aWL(byte[] var0);

   public native cu aWI();

   public native ct aWH();

   public native cu aWJ();

   public native cC aWK();

   private static native CallSite aWO(Lookup var0, String var1, MethodType var2);

   private static native int aWN(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native void _be8876597688c4e993e11acafd73b0dc();
}
