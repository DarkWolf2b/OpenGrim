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
import net.minecraft.item.Items;

public class dF extends gg {
   private final ct iqrsx;
   private final cu SMlWc;
   private final cu QJtRA;
   private final cK UBzDb;
   private final ct FjyNN;
   private final cu nZWdG;
   private final cu MIMsQ;
   private final cu WOZWS;
   private int mnITY;
   private static long Qusuy;
   private static long[] gWobV;
   private static Integer[] ffcdF;
   private static Map AlKzG;

   private static native void _d241af5c431a4490cab37e1b7101e237();

   public dF() {
      long var1 = Qusuy ^ 50067858202354L;
      super(gf.aZL(alp<"b">(5188, 6356237000757243993L ^ var1), false, gh.qBzlZ));
      this.iqrsx = new ct(
         this,
         mr.clS(
            new int[]{
               alp<"b">(18963, 8554227282238156297L ^ var1),
               alp<"b">(23464, 8889980942605336455L ^ var1),
               alp<"b">(15305, 3194205205670846439L ^ var1),
               alp<"b">(28191, 4958141810345609773L ^ var1)
            }
         )
      );
      ct var10003 = this.iqrsx;
      int[] var10004 = new int[alp<"b">(15348, 1336330953234178008L ^ var1)];
      var10004[0] = alp<"b">(16857, 4656996723092104655L ^ var1);
      var10004[1] = alp<"b">(3886, 2430754317787458317L ^ var1);
      var10004[2] = alp<"b">(27926, 2801725194757835033L ^ var1);
      var10004[3] = alp<"b">(6790, 6869054668282625686L ^ var1);
      var10004[4] = alp<"b">(7382, 6517165244848961744L ^ var1);
      var10004[5] = alp<"b">(22688, 4146325940963359917L ^ var1);
      var10004[alp<"b">(15433, 620738733318068346L ^ var1)] = alp<"b">(25476, 6780837548484102065L ^ var1);
      this.SMlWc = new cu(var10003, mr.clS(var10004));
      this.QJtRA = new cu(
         this.iqrsx,
         mr.clS(
            new int[]{
               alp<"b">(13005, 224265278496364277L ^ var1),
               alp<"b">(23821, 6265497675426707766L ^ var1),
               alp<"b">(25241, 9013701393980065468L ^ var1),
               alp<"b">(9480, 5354041320880914742L ^ var1),
               alp<"b">(25476, 6780837548484102065L ^ var1)
            }
         )
      );
      var10004 = new int[alp<"b">(7718, 239815332834114105L ^ var1)];
      var10004[0] = alp<"b">(21685, 6040947403809042615L ^ var1);
      var10004[1] = alp<"b">(6574, 4924757450392010138L ^ var1);
      var10004[2] = alp<"b">(13258, 985232942807373814L ^ var1);
      var10004[3] = alp<"b">(31634, 9093876737948917633L ^ var1);
      var10004[4] = alp<"b">(21064, 1868750486862804556L ^ var1);
      var10004[5] = alp<"b">(23821, 6265497675426707766L ^ var1);
      var10004[alp<"b">(670, 668629448005576350L ^ var1)] = alp<"b">(5636, 7046842846736871948L ^ var1);
      var10004[alp<"b">(32397, 2031704126875998868L ^ var1)] = alp<"b">(16038, 5757076598070958781L ^ var1);
      var10004[alp<"b">(21348, 2896802646487775061L ^ var1)] = alp<"b">(10346, 2002446686122069097L ^ var1);
      var10004[alp<"b">(9480, 7620207428879270193L ^ var1)] = alp<"b">(25476, 6780837548484102065L ^ var1);
      var10004[alp<"b">(2811, 5587660833500458694L ^ var1)] = alp<"b">(23821, 6265497675426707766L ^ var1);
      var10004[alp<"b">(26908, 3991171307213524285L ^ var1)] = alp<"b">(27940, 7795235179322312969L ^ var1);
      var10004[alp<"b">(2558, 291878036961619400L ^ var1)] = alp<"b">(18173, 2234104783447532250L ^ var1);
      cK var10001 = new cK(this, mr.clS(var10004)).WM(jc.WnbNG);
      Item[] var10002 = new Item[alp<"b">(670, 668629448005576350L ^ var1)];
      var10002[0] = Items.WOODEN_SWORD;
      var10002[1] = Items.STONE_SWORD;
      var10002[2] = Items.IRON_SWORD;
      var10002[3] = Items.GOLDEN_SWORD;
      var10002[4] = Items.DIAMOND_SWORD;
      var10002[5] = Items.NETHERITE_SWORD;
      this.UBzDb = var10001.WN(var10002);
      var10004 = new int[alp<"b">(30994, 2279044023267761445L ^ var1)];
      var10004[0] = alp<"b">(32108, 6272900771119470940L ^ var1);
      var10004[1] = alp<"b">(13258, 985232942807373814L ^ var1);
      var10004[2] = alp<"b">(31634, 9093876737948917633L ^ var1);
      var10004[3] = alp<"b">(25758, 5225769975044112543L ^ var1);
      var10004[4] = alp<"b">(27285, 8751146189655477904L ^ var1);
      var10004[5] = alp<"b">(11892, 7241713571996977750L ^ var1);
      var10004[alp<"b">(670, 668629448005576350L ^ var1)] = alp<"b">(22388, 3724745832608740216L ^ var1);
      var10004[alp<"b">(32397, 2031704126875998868L ^ var1)] = alp<"b">(31634, 9093876737948917633L ^ var1);
      var10004[alp<"b">(22707, 2877654776463408275L ^ var1)] = alp<"b">(11892, 7241713571996977750L ^ var1);
      var10004[alp<"b">(22028, 516672702367052339L ^ var1)] = alp<"b">(3754, 3557698114589289147L ^ var1);
      var10004[alp<"b">(21899, 3604309325690089886L ^ var1)] = alp<"b">(23821, 6265497675426707766L ^ var1);
      var10004[alp<"b">(10301, 1814020574350822425L ^ var1)] = alp<"b">(19394, 9153517550660202440L ^ var1);
      var10004[alp<"b">(5062, 8505377418377721800L ^ var1)] = alp<"b">(13258, 985232942807373814L ^ var1);
      var10004[alp<"b">(26623, 5082856674539308011L ^ var1)] = alp<"b">(14483, 2874385684564401304L ^ var1);
      var10004[alp<"b">(5832, 7651820340068283107L ^ var1)] = alp<"b">(32217, 3167022381923113459L ^ var1);
      var10004[alp<"b">(1920, 410174264123450268L ^ var1)] = alp<"b">(23821, 6265497675426707766L ^ var1);
      this.FjyNN = new ct(this, mr.clS(var10004));
      var10003 = this.FjyNN;
      var10004 = new int[alp<"b">(670, 668629448005576350L ^ var1)];
      var10004[0] = alp<"b">(3880, 4323989185728015162L ^ var1);
      var10004[1] = alp<"b">(31634, 9093876737948917633L ^ var1);
      var10004[2] = alp<"b">(4608, 9080606916466931240L ^ var1);
      var10004[3] = alp<"b">(26928, 830108763861290280L ^ var1);
      var10004[4] = alp<"b">(23821, 6265497675426707766L ^ var1);
      var10004[5] = alp<"b">(24607, 8063566089766470713L ^ var1);
      this.nZWdG = new cu(var10003, mr.clS(var10004));
      var10003 = this.FjyNN;
      var10004 = new int[alp<"b">(22707, 2877654776463408275L ^ var1)];
      var10004[0] = alp<"b">(20375, 3629992216860797824L ^ var1);
      var10004[1] = alp<"b">(24607, 8063566089766470713L ^ var1);
      var10004[2] = alp<"b">(18173, 2234104783447532250L ^ var1);
      var10004[3] = alp<"b">(22579, 3934103593890954298L ^ var1);
      var10004[4] = alp<"b">(5636, 7046842846736871948L ^ var1);
      var10004[5] = alp<"b">(22579, 3934103593890954298L ^ var1);
      var10004[alp<"b">(670, 668629448005576350L ^ var1)] = alp<"b">(14483, 2874385684564401304L ^ var1);
      var10004[alp<"b">(32397, 2031704126875998868L ^ var1)] = alp<"b">(22688, 4146325940963359917L ^ var1);
      this.MIMsQ = new cu(var10003, mr.clS(var10004));
      var10003 = this.FjyNN;
      var10004 = new int[alp<"b">(21899, 3604309325690089886L ^ var1)];
      var10004[0] = alp<"b">(5045, 1998231486218139535L ^ var1);
      var10004[1] = alp<"b">(23821, 6265497675426707766L ^ var1);
      var10004[2] = alp<"b">(13258, 985232942807373814L ^ var1);
      var10004[3] = alp<"b">(5636, 7046842846736871948L ^ var1);
      var10004[4] = alp<"b">(11892, 7241713571996977750L ^ var1);
      var10004[5] = alp<"b">(21907, 9218806249381867962L ^ var1);
      var10004[alp<"b">(670, 668629448005576350L ^ var1)] = alp<"b">(13258, 985232942807373814L ^ var1);
      var10004[alp<"b">(32397, 2031704126875998868L ^ var1)] = alp<"b">(31634, 9093876737948917633L ^ var1);
      var10004[alp<"b">(22707, 2877654776463408275L ^ var1)] = alp<"b">(32217, 3167022381923113459L ^ var1);
      var10004[alp<"b">(22028, 516672702367052339L ^ var1)] = alp<"b">(3685, 1004597923601738363L ^ var1);
      this.WOZWS = new cu(var10003, mr.clS(var10004));
      this.mnITY = -1;
   }

   static {
      Loader.doInit(dF.class);
      _d241af5c431a4490cab37e1b7101e237();
   }

   private static native CallSite alp(Lookup var0, String var1, MethodType var2);

   @hG
   public native void ald(gO$tm var1);

   @hG
   public native void ale(gH$th var1);

   private native int alf(Predicate<ItemStack> var1);

   private static native int alo(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aln(int var0, long var1);

   private static native MatchException alm(MatchException var0);

   @Override
   public native void YO();
}
