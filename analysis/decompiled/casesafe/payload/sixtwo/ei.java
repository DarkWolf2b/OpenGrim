package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1268;

public class ei extends gg implements lA {
   private final ct cNIJT;
   private final cu kVyvV;
   private final cu mjyti;
   private final cu bjFxu;
   private final ct BhfJC;
   private final cu JluvD;
   private final cu RrLuA;
   private final cJ VLSja;
   private static long Hbvpn;
   private static long[] rzkkP;
   private static Integer[] gnKgk;
   private static Map QqXlu;

   public ei() {
      long var1 = Hbvpn ^ 13388885539051L;
      super(gf.aZL(asO<"b">(30290, 5685718587957446582L ^ var1), false, gh.xgeEn));
      int[] var10004 = new int[asO<"b">(21881, 2342511405295150284L ^ var1)];
      var10004[0] = asO<"b">(27209, 559057128554535827L ^ var1);
      var10004[1] = asO<"b">(23093, 1803152868930202588L ^ var1);
      var10004[2] = asO<"b">(8875, 3715696993894159216L ^ var1);
      var10004[3] = asO<"b">(16582, 2961653210494775600L ^ var1);
      var10004[4] = asO<"b">(20873, 4318742076014108767L ^ var1);
      var10004[5] = asO<"b">(16492, 5662174583366758821L ^ var1);
      var10004[asO<"b">(8350, 3883622972264698227L ^ var1)] = asO<"b">(6676, 1308010121267276743L ^ var1);
      var10004[asO<"b">(18355, 799178211524097660L ^ var1)] = asO<"b">(14977, 6489798453217938262L ^ var1);
      var10004[asO<"b">(25479, 7138276216074408536L ^ var1)] = asO<"b">(20837, 6434190991510741181L ^ var1);
      var10004[asO<"b">(28987, 2659067937301790966L ^ var1)] = asO<"b">(27452, 632939102630615752L ^ var1);
      var10004[asO<"b">(30687, 7119617509453137447L ^ var1)] = asO<"b">(5410, 6540891743652537574L ^ var1);
      this.cNIJT = new ct(this, mr.clS(var10004));
      ct var10003 = this.cNIJT;
      var10004 = new int[asO<"b">(11813, 9160739036607373286L ^ var1)];
      var10004[0] = asO<"b">(24631, 6153049628825752059L ^ var1);
      var10004[1] = asO<"b">(18549, 6213426199518427543L ^ var1);
      var10004[2] = asO<"b">(8490, 1659143806961602761L ^ var1);
      var10004[3] = asO<"b">(17041, 3383047919200580465L ^ var1);
      var10004[4] = asO<"b">(14977, 6489798453217938262L ^ var1);
      var10004[5] = asO<"b">(5201, 1391431133290915262L ^ var1);
      var10004[asO<"b">(1924, 1102953588621506141L ^ var1)] = asO<"b">(18549, 6213426199518427543L ^ var1);
      var10004[asO<"b">(14613, 8207388235208018132L ^ var1)] = asO<"b">(17041, 3383047919200580465L ^ var1);
      var10004[asO<"b">(28235, 470507272889049020L ^ var1)] = asO<"b">(20519, 1680571243491041739L ^ var1);
      this.kVyvV = new cu(var10003, mr.clS(var10004));
      var10003 = this.cNIJT;
      var10004 = new int[asO<"b">(28235, 470507272889049020L ^ var1)];
      var10004[0] = asO<"b">(15751, 4592118689977814099L ^ var1);
      var10004[1] = asO<"b">(24442, 8036548685749038749L ^ var1);
      var10004[2] = asO<"b">(18020, 3201911710963218318L ^ var1);
      var10004[3] = asO<"b">(14977, 6489798453217938262L ^ var1);
      var10004[4] = asO<"b">(5201, 1391431133290915262L ^ var1);
      var10004[5] = asO<"b">(18549, 6213426199518427543L ^ var1);
      var10004[asO<"b">(1924, 1102953588621506141L ^ var1)] = asO<"b">(17041, 3383047919200580465L ^ var1);
      var10004[asO<"b">(14613, 8207388235208018132L ^ var1)] = asO<"b">(20519, 1680571243491041739L ^ var1);
      this.mjyti = new cu(var10003, mr.clS(var10004));
      this.bjFxu = new cu(
         this.cNIJT,
         mr.clS(
            new int[]{
               asO<"b">(26954, 4626524835707852983L ^ var1),
               asO<"b">(16156, 3690583846054252244L ^ var1),
               asO<"b">(31572, 8482693679738096289L ^ var1),
               asO<"b">(18886, 8051188953184679944L ^ var1)
            }
         )
      );
      var10004 = new int[asO<"b">(8107, 1665480780355792468L ^ var1)];
      var10004[0] = asO<"b">(5201, 1391431133290915262L ^ var1);
      var10004[1] = asO<"b">(18549, 6213426199518427543L ^ var1);
      var10004[2] = asO<"b">(17041, 3383047919200580465L ^ var1);
      var10004[3] = asO<"b">(20519, 1680571243491041739L ^ var1);
      var10004[4] = asO<"b">(14977, 6489798453217938262L ^ var1);
      var10004[5] = asO<"b">(28149, 6422633811689806901L ^ var1);
      var10004[asO<"b">(1924, 1102953588621506141L ^ var1)] = asO<"b">(7239, 637002378224201114L ^ var1);
      var10004[asO<"b">(14613, 8207388235208018132L ^ var1)] = asO<"b">(22431, 8298094921566299745L ^ var1);
      var10004[asO<"b">(28235, 470507272889049020L ^ var1)] = asO<"b">(17041, 3383047919200580465L ^ var1);
      var10004[asO<"b">(11813, 9160739036607373286L ^ var1)] = asO<"b">(3495, 14299188750580833L ^ var1);
      this.BhfJC = new ct(this, mr.clS(var10004));
      var10003 = this.BhfJC;
      var10004 = new int[asO<"b">(1924, 1102953588621506141L ^ var1)];
      var10004[0] = asO<"b">(2056, 2138905397286533578L ^ var1);
      var10004[1] = asO<"b">(10610, 8087672726958790837L ^ var1);
      var10004[2] = asO<"b">(22431, 8298094921566299745L ^ var1);
      var10004[3] = asO<"b">(26881, 451509417600948426L ^ var1);
      var10004[4] = asO<"b">(17041, 3383047919200580465L ^ var1);
      var10004[5] = asO<"b">(32212, 3848646892597644325L ^ var1);
      this.JluvD = new cu(var10003, mr.clS(var10004));
      var10003 = this.BhfJC;
      var10004 = new int[asO<"b">(1924, 1102953588621506141L ^ var1)];
      var10004[0] = asO<"b">(16078, 8978421138958896914L ^ var1);
      var10004[1] = asO<"b">(26881, 451509417600948426L ^ var1);
      var10004[2] = asO<"b">(9050, 6496537380406284932L ^ var1);
      var10004[3] = asO<"b">(26221, 595855391726770065L ^ var1);
      var10004[4] = asO<"b">(26881, 451509417600948426L ^ var1);
      var10004[5] = asO<"b">(4900, 42280315121230561L ^ var1);
      this.RrLuA = new cu(var10003, mr.clS(var10004));
      var10004 = new int[asO<"b">(364, 518537119726661791L ^ var1)];
      var10004[0] = asO<"b">(29960, 3158437110405563619L ^ var1);
      var10004[1] = asO<"b">(17041, 3383047919200580465L ^ var1);
      var10004[2] = asO<"b">(12202, 2155536656694107731L ^ var1);
      var10004[3] = asO<"b">(10577, 158500666588354740L ^ var1);
      var10004[4] = asO<"b">(14977, 6489798453217938262L ^ var1);
      var10004[5] = asO<"b">(30235, 4307679177170421737L ^ var1);
      var10004[asO<"b">(1924, 1102953588621506141L ^ var1)] = asO<"b">(12870, 2291098272318997399L ^ var1);
      var10004[asO<"b">(14613, 8207388235208018132L ^ var1)] = asO<"b">(26881, 451509417600948426L ^ var1);
      var10004[asO<"b">(28235, 470507272889049020L ^ var1)] = asO<"b">(17041, 3383047919200580465L ^ var1);
      var10004[asO<"b">(11813, 9160739036607373286L ^ var1)] = asO<"b">(14977, 6489798453217938262L ^ var1);
      var10004[asO<"b">(8107, 1665480780355792468L ^ var1)] = asO<"b">(13946, 4133669787081426836L ^ var1);
      var10004[asO<"b">(11106, 6749735348495702742L ^ var1)] = asO<"b">(4900, 42280315121230561L ^ var1);
      var10004[asO<"b">(9694, 2157901873694626852L ^ var1)] = asO<"b">(16156, 3690583846054252244L ^ var1);
      var10004[asO<"b">(8925, 194177967195607831L ^ var1)] = asO<"b">(23903, 3697581056732212367L ^ var1);
      var10004[asO<"b">(2304, 4988822847042943208L ^ var1)] = asO<"b">(9907, 109347501684807509L ^ var1);
      var10004[asO<"b">(22845, 7826420223165081839L ^ var1)] = asO<"b">(12870, 2291098272318997399L ^ var1);
      var10004[asO<"b">(19703, 7039848267116854562L ^ var1)] = asO<"b">(22431, 8298094921566299745L ^ var1);
      var10004[asO<"b">(4209, 2677730192052806017L ^ var1)] = asO<"b">(17041, 3383047919200580465L ^ var1);
      var10004[asO<"b">(10110, 8670840281667294879L ^ var1)] = asO<"b">(26576, 7658868480000824875L ^ var1);
      this.VLSja = new cJ(this, mr.clS(var10004)).WE(false);
   }

   static {
      Loader.doInit(ei.class);
      _f25485ee343fb698e3bb919784879d84();
   }

   private static native void _f25485ee343fb698e3bb919784879d84();

   @hG
   public native void asE(gv var1);

   @hG
   public native void asF(gH$th var1);

   private native class_1268 asH();

   private native boolean asG();

   private native boolean asI(class_1268 var1);

   private static native CallSite asO(Lookup var0, String var1, MethodType var2);

   private static native int asM(int var0, long var1);

   private static native int asN(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native oz asJ();

   private static native MatchException asL(MatchException var0);

   private native oS asK();
}
