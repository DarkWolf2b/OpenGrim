package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;

public class ex extends gg {
   private final cJ pyxZq;
   private static long kPBXI;
   private static long[] jBHTq;
   private static Integer[] OqVLr;
   private static Map xLPDH;

   private static native void _bdc1508d9422d0323ece295e1c5c3830();

   public ex() {
      long var1 = kPBXI ^ 61544214833638L;
      super(gf.aZL(auY<"w">(27168, 9146697955703362035L ^ var1), false, gh.xgeEn));
      int[] var10004 = new int[auY<"w">(9083, 2670688136297732271L ^ var1)];
      var10004[0] = auY<"w">(25743, 4955348972728065866L ^ var1);
      var10004[1] = auY<"w">(20771, 7341156913381911278L ^ var1);
      var10004[2] = auY<"w">(3547, 8006502141009819149L ^ var1);
      var10004[3] = auY<"w">(15348, 7610827777549058094L ^ var1);
      var10004[4] = auY<"w">(2874, 2431792342009999609L ^ var1);
      var10004[5] = auY<"w">(24760, 4809572228047280999L ^ var1);
      var10004[auY<"w">(15887, 1888893108332185047L ^ var1)] = auY<"w">(15348, 7610827777549058094L ^ var1);
      var10004[auY<"w">(20977, 5810729350415755829L ^ var1)] = auY<"w">(22509, 707681047349570623L ^ var1);
      var10004[auY<"w">(12939, 6344180662456207696L ^ var1)] = auY<"w">(24122, 5917359760828966394L ^ var1);
      var10004[auY<"w">(8955, 3736667561866123575L ^ var1)] = auY<"w">(4118, 2944859983014816735L ^ var1);
      var10004[auY<"w">(20351, 7693135558347830457L ^ var1)] = auY<"w">(1155, 2814371959657267017L ^ var1);
      var10004[auY<"w">(31429, 8408301260878283024L ^ var1)] = auY<"w">(2831, 8509710011915792595L ^ var1);
      var10004[auY<"w">(24720, 6957168818969320274L ^ var1)] = auY<"w">(15040, 2085318767059353871L ^ var1);
      var10004[auY<"w">(32087, 3315343465496970887L ^ var1)] = auY<"w">(9933, 3169934662670703875L ^ var1);
      var10004[auY<"w">(27036, 5853537316231844418L ^ var1)] = auY<"w">(17464, 1258481500191703039L ^ var1);
      var10004[auY<"w">(31325, 2269289198172995980L ^ var1)] = auY<"w">(2009, 3932280921660750852L ^ var1);
      var10004[auY<"w">(12133, 2835702957091083428L ^ var1)] = auY<"w">(25627, 6297911657768067010L ^ var1);
      var10004[auY<"w">(28657, 3150520908470457401L ^ var1)] = auY<"w">(25763, 875167207328587636L ^ var1);
      this.pyxZq = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(ex.class);
      _bdc1508d9422d0323ece295e1c5c3830();
   }

   private static native int auW(int var0, long var1);

   private static native int auX(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite auY(Lookup var0, String var1, MethodType var2);

   public native cJ auV();
}
