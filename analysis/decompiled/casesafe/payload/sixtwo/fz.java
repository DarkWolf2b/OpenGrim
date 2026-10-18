package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class fz extends gg {
   private final cC ZGNVq;
   private final cJ EiuwG;
   private final cJ QrNyB;
   private boolean PnAIn;
   private boolean uYazo;
   private boolean WdogO;
   private final mW rByTO;
   private static long KZLPf;
   private static String ddesD;
   private static long[] likHN;
   private static Integer[] CIryL;
   private static Map euEJd;

   private static native void _5f4ceb95140d8bab50cc0ded800b2db7();

   public fz() {
      long var1 = KZLPf ^ 100244009992870L;
      super(gf.aZL(aRZ<"k">(16014, 867871786060531065L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aRZ<"k">(4870, 976934734204102873L ^ var1)];
      var10004[0] = aRZ<"k">(6897, 1571625279202615603L ^ var1);
      var10004[1] = aRZ<"k">(20220, 1301775128881542413L ^ var1);
      var10004[2] = aRZ<"k">(27609, 447939252353667127L ^ var1);
      var10004[3] = aRZ<"k">(11625, 678571880419939987L ^ var1);
      var10004[4] = aRZ<"k">(21043, 4479369601567566318L ^ var1);
      var10004[5] = aRZ<"k">(3146, 7490206052144347042L ^ var1);
      this.ZGNVq = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz(ddesD);
      var10004 = new int[aRZ<"k">(21946, 5606337141141450345L ^ var1)];
      var10004[0] = aRZ<"k">(6822, 3510500400522486084L ^ var1);
      var10004[1] = aRZ<"k">(4849, 9152753499458070822L ^ var1);
      var10004[2] = aRZ<"k">(30387, 8876864391885720929L ^ var1);
      var10004[3] = aRZ<"k">(6089, 6412353419771636761L ^ var1);
      var10004[4] = aRZ<"k">(28343, 6072222725115024730L ^ var1);
      var10004[5] = aRZ<"k">(20752, 2304365123360533239L ^ var1);
      var10004[aRZ<"k">(20663, 7802389708764621656L ^ var1)] = aRZ<"k">(17672, 9064344015663283947L ^ var1);
      var10004[aRZ<"k">(11546, 8619315334798235365L ^ var1)] = aRZ<"k">(9336, 7239797839830671277L ^ var1);
      var10004[aRZ<"k">(14834, 5642552434308203023L ^ var1)] = aRZ<"k">(30387, 8876864391885720929L ^ var1);
      var10004[aRZ<"k">(15367, 4616849052860467187L ^ var1)] = aRZ<"k">(17717, 1520068359080689357L ^ var1);
      var10004[aRZ<"k">(25672, 5174967915639185342L ^ var1)] = aRZ<"k">(26669, 287684525502665695L ^ var1);
      var10004[aRZ<"k">(26029, 5402948005747007062L ^ var1)] = aRZ<"k">(30837, 1660481534887166854L ^ var1);
      var10004[aRZ<"k">(17319, 2670204484285741131L ^ var1)] = aRZ<"k">(9635, 7440903962367024710L ^ var1);
      var10004[aRZ<"k">(8591, 1613338030349113950L ^ var1)] = aRZ<"k">(28343, 6072222725115024730L ^ var1);
      this.EiuwG = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aRZ<"k">(10973, 7177096682219688249L ^ var1)];
      var10004[0] = aRZ<"k">(2879, 3765556693280583878L ^ var1);
      var10004[1] = aRZ<"k">(30387, 8876864391885720929L ^ var1);
      var10004[2] = aRZ<"k">(17696, 7503129371437416180L ^ var1);
      var10004[3] = aRZ<"k">(28806, 373788181417462630L ^ var1);
      var10004[4] = aRZ<"k">(17717, 1520068359080689357L ^ var1);
      var10004[5] = aRZ<"k">(6616, 4866639796184801849L ^ var1);
      var10004[aRZ<"k">(20663, 7802389708764621656L ^ var1)] = aRZ<"k">(26913, 3716405862435361530L ^ var1);
      var10004[aRZ<"k">(13926, 7236737996877385144L ^ var1)] = aRZ<"k">(29962, 4878383602548510463L ^ var1);
      var10004[aRZ<"k">(1291, 2647548671762169555L ^ var1)] = aRZ<"k">(23677, 7409629003802191777L ^ var1);
      var10004[aRZ<"k">(5012, 5439864171227670628L ^ var1)] = aRZ<"k">(17717, 1520068359080689357L ^ var1);
      var10004[aRZ<"k">(14753, 2858810371441640059L ^ var1)] = aRZ<"k">(22107, 8064807404011531650L ^ var1);
      var10004[aRZ<"k">(19476, 234199356867131368L ^ var1)] = aRZ<"k">(17696, 7503129371437416180L ^ var1);
      var10004[aRZ<"k">(11645, 8147528089147168404L ^ var1)] = aRZ<"k">(4849, 9152753499458070822L ^ var1);
      var10004[aRZ<"k">(9022, 5905126069093226709L ^ var1)] = aRZ<"k">(6126, 1224235055858052112L ^ var1);
      var10004[aRZ<"k">(2301, 1050495079298921278L ^ var1)] = aRZ<"k">(28343, 6072222725115024730L ^ var1);
      var10004[aRZ<"k">(18746, 5792261449924391644L ^ var1)] = aRZ<"k">(26913, 3716405862435361530L ^ var1);
      var10004[aRZ<"k">(22091, 2946362252938390941L ^ var1)] = aRZ<"k">(26760, 9016902735481017186L ^ var1);
      this.QrNyB = new cJ(this, mr.clS(var10004)).WE(true);
      this.rByTO = new mW();
   }

   static {
      Loader.doInit(fz.class);
      _5f4ceb95140d8bab50cc0ded800b2db7();
   }

   private static native String aRW(byte[] var0);

   @hG
   public native void aRT(gL$tk var1);

   private static native int aRX(int var0, long var1);

   private static native MatchException aRV(MatchException var0);

   private static native CallSite aRZ(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aRU(hc var1);

   private static native int aRY(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   @Override
   public native void YO();
}
