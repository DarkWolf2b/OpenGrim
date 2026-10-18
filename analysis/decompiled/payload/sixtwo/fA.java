package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fA extends gg {
   private final cA jKuHD;
   private final cJ Lblbv;
   private final cJ gaHGm;
   private final cz BMRFS;
   private final mT EnpZA;
   private static long pJNbd;
   private static String NSrLe;
   private static long[] cCwdY;
   private static Integer[] npLQh;
   private static Map HGYdz;

   private static native int aSd(int var0, long var1);

   private static native String aSc(byte[] var0);

   private static native MatchException aSb(MatchException var0);

   private static native CallSite aSf(Lookup var0, String var1, MethodType var2);

   private static native int aSe(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @hG
   public native void aSa(gH$th var1);

   public fA() {
      long var1 = pJNbd ^ 95316450423909L;
      super(gf.aZL(aSf<"d">(3235, 4365313417332902540L ^ var1), false, gh.xwjCw));
      this.jKuHD = new cA(
            this,
            mr.clS(
               new int[]{
                  aSf<"d">(10443, 1347769982499942089L ^ var1),
                  aSf<"d">(30863, 3771756174861254306L ^ var1),
                  aSf<"d">(16856, 6462300316586641404L ^ var1),
                  aSf<"d">(55, 5196445325446858254L ^ var1),
                  aSf<"d">(2945, 709538436801809793L ^ var1)
               }
            )
         )
         .UG(5.0)
         .UE(0.0)
         .UF(1000.0)
         .UI(0.0, 50.0)
         .UH(NSrLe);
      this.Lblbv = new cJ(
            this,
            mr.clS(
               new int[]{
                  aSf<"d">(30385, 7982181355241386143L ^ var1),
                  aSf<"d">(5383, 6152693072510243596L ^ var1),
                  aSf<"d">(4897, 8031590100669125905L ^ var1),
                  aSf<"d">(29165, 1754823958423549916L ^ var1),
                  aSf<"d">(13785, 4000987016060728291L ^ var1)
               }
            )
         )
         .WE(false);
      int[] var10004 = new int[aSf<"d">(651, 8561439155966723232L ^ var1)];
      var10004[0] = aSf<"d">(457, 3061851407863269325L ^ var1);
      var10004[1] = aSf<"d">(23057, 5946836892250414116L ^ var1);
      var10004[2] = aSf<"d">(5172, 2493260113845441074L ^ var1);
      var10004[3] = aSf<"d">(3278, 6661254189781109451L ^ var1);
      var10004[4] = aSf<"d">(14539, 5659928308071726841L ^ var1);
      var10004[5] = aSf<"d">(14640, 4908171912693448465L ^ var1);
      var10004[aSf<"d">(22998, 6770687081632210906L ^ var1)] = aSf<"d">(14231, 8754634130485113258L ^ var1);
      var10004[aSf<"d">(16783, 1115272476425521059L ^ var1)] = aSf<"d">(19506, 2483494125501975052L ^ var1);
      var10004[aSf<"d">(24925, 2131605365193451349L ^ var1)] = aSf<"d">(29165, 1754823958423549916L ^ var1);
      var10004[aSf<"d">(22642, 966995315633561176L ^ var1)] = aSf<"d">(19197, 5146125652129909976L ^ var1);
      var10004[aSf<"d">(3653, 137925929582151802L ^ var1)] = aSf<"d">(2238, 3238523547020480137L ^ var1);
      var10004[aSf<"d">(13192, 5817762811171567018L ^ var1)] = aSf<"d">(6142, 1771012931154923992L ^ var1);
      var10004[aSf<"d">(24612, 1012300583292806672L ^ var1)] = aSf<"d">(14539, 5659928308071726841L ^ var1);
      var10004[aSf<"d">(11758, 2061168376134626246L ^ var1)] = aSf<"d">(25590, 7116507358812644814L ^ var1);
      var10004[aSf<"d">(23527, 3093779640664530413L ^ var1)] = aSf<"d">(1179, 2200918396117500583L ^ var1);
      this.gaHGm = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aSf<"d">(28373, 3420843359954807026L ^ var1)];
      var10004[0] = aSf<"d">(12616, 9026400513326774103L ^ var1);
      var10004[1] = aSf<"d">(6142, 1771012931154923992L ^ var1);
      var10004[2] = aSf<"d">(14539, 5659928308071726841L ^ var1);
      var10004[3] = aSf<"d">(31023, 5893372153694666529L ^ var1);
      var10004[4] = aSf<"d">(17919, 6281692477913007088L ^ var1);
      var10004[5] = aSf<"d">(10880, 6522789504768076956L ^ var1);
      var10004[aSf<"d">(5231, 6326466697590264430L ^ var1)] = aSf<"d">(15463, 3110041046748985948L ^ var1);
      var10004[aSf<"d">(16783, 1115272476425521059L ^ var1)] = aSf<"d">(14539, 5659928308071726841L ^ var1);
      var10004[aSf<"d">(15093, 1122998630121864427L ^ var1)] = aSf<"d">(10880, 6522789504768076956L ^ var1);
      var10004[aSf<"d">(29268, 3601043242445943895L ^ var1)] = aSf<"d">(8872, 1167648155439195291L ^ var1);
      var10004[aSf<"d">(32526, 1295920552902506791L ^ var1)] = aSf<"d">(29165, 1754823958423549916L ^ var1);
      var10004[aSf<"d">(4538, 8752482158174394265L ^ var1)] = aSf<"d">(23616, 7545837931160607303L ^ var1);
      var10004[aSf<"d">(20756, 3050471543850309405L ^ var1)] = aSf<"d">(16055, 6084588787977353367L ^ var1);
      var10004[aSf<"d">(28962, 2071843914015455023L ^ var1)] = aSf<"d">(6142, 1771012931154923992L ^ var1);
      var10004[aSf<"d">(12014, 3761658746076096728L ^ var1)] = aSf<"d">(6142, 1771012931154923992L ^ var1);
      cz var10001 = new cz(this, mr.clS(var10004));
      int[] var10002 = new int[aSf<"d">(29268, 3601043242445943895L ^ var1)];
      var10002[0] = 0;
      var10002[1] = 1;
      var10002[2] = 2;
      var10002[3] = 3;
      var10002[4] = 4;
      var10002[5] = 5;
      var10002[aSf<"d">(5231, 6326466697590264430L ^ var1)] = aSf<"d">(5231, 6326466697590264430L ^ var1);
      var10002[aSf<"d">(16783, 1115272476425521059L ^ var1)] = aSf<"d">(16783, 1115272476425521059L ^ var1);
      var10002[aSf<"d">(15093, 1122998630121864427L ^ var1)] = aSf<"d">(15093, 1122998630121864427L ^ var1);
      this.BMRFS = var10001.Uw(var10002);
      this.EnpZA = mT.cpz();
   }

   static {
      Loader.doInit(fA.class);
      _55aef275d55a37c987ad6b6b0cab4a38();
   }

   private static native void _55aef275d55a37c987ad6b6b0cab4a38();
}
