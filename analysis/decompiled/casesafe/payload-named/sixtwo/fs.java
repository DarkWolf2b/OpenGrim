package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import java.util.Queue;
import java.util.concurrent.ConcurrentLinkedQueue;
import native.Loader;
import net.minecraft.client.option.KeyBinding;
import net.minecraft.entity.Entity;
import net.minecraft.network.packet.Packet;

public class fs extends gg {
   private final ct IcLmm;
   private final cu oBzcq;
   private final cu YyudN;
   private final ct xtaAk;
   private final cu HIGji;
   private final cu FXNOb;
   private final ct wyZEk;
   private final cu lOgKN;
   private final cD LjfJW;
   private final cC hyauK;
   private final cu clxNa;
   private final cC jJzSe;
   private final cJ DtLvL;
   private float LypUB;
   private float PnWns;
   private Entity QOpIL;
   private int TvEdE;
   private boolean btLpD;
   private boolean VOVop;
   private double FFrtc;
   private boolean bYXHg;
   private boolean URrjv;
   private final Queue<Packet<?>> bapCK;
   private static long KMued;
   private static String aRvFo;
   private static long[] zEEgk;
   private static Integer[] RYkpV;
   private static Map ZmIgj;

   @hG(
      priority = mw.CRUCIAL
   )
   public native void aPg(gL$tj var1);

   @hG
   public native void aPh(gA var1);

   private native void aPl(float var1);

   private native boolean aPm(KeyBinding var1, KeyBinding var2);

   private native boolean aPn(Entity var1, double var2, boolean var4, int var5);

   private native void aPr();

   public native cu aPw();

   public native cC aPD();

   public native cu aPx();

   private static native MatchException aPP(MatchException var0);

   public native boolean aPi(Entity var1, float var2, boolean var3);

   public native ct aPs();

   public native boolean aPM();

   @hG
   public native void aPf(gH$th var1);

   public native boolean aPJ();

   public native float aPG();

   public native boolean aPK();

   private native void aPo(float var1);

   private native void aPq();

   public native cJ aPE();

   private static native int aPR(int var0, long var1);

   public native int aPI();

   private native boolean aPp(gL$tj var1);

   private static native String aPQ(byte[] var0);

   private native float aPj();

   public native cu aPu();

   private static native int aPS(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private native void aPk();

   @hG
   public native void aPd(gZ$tt var1);

   public native ct aPy();

   @hG
   public native void aPc(gM var1);

   private static native CallSite aPT(Lookup var0, String var1, MethodType var2);

   public native cu aPt();

   public native cD aPA();

   public native float aPF();

   public native ct aPv();

   @hG
   public native void aPe(gv var1);

   public native cu aPC();

   public native double aPL();

   public native Queue<Packet<?>> aPO();

   public native cu aPz();

   public native Entity aPH();

   public native boolean aPN();

   public native cC aPB();

   public fs() {
      long var1 = KMued ^ 10830137718686L;
      super(gf.aZL(aPT<"s">(29698, 8630224022667463096L ^ var1), false, gh.xwjCw));
      this.IcLmm = new ct(
         this,
         mr.clS(
            new int[]{
               aPT<"s">(23239, 356562081179871092L ^ var1),
               aPT<"s">(13630, 2478446307393587383L ^ var1),
               aPT<"s">(10090, 3031089034747730677L ^ var1),
               aPT<"s">(21264, 3208016640046149372L ^ var1)
            }
         )
      );
      ct var10003 = this.IcLmm;
      int[] var10004 = new int[aPT<"s">(19503, 7436349663002440090L ^ var1)];
      var10004[0] = aPT<"s">(27953, 9176994024957350089L ^ var1);
      var10004[1] = aPT<"s">(18485, 8902062996759819711L ^ var1);
      var10004[2] = aPT<"s">(2652, 6077655962932869113L ^ var1);
      var10004[3] = aPT<"s">(20022, 9000856421767099297L ^ var1);
      var10004[4] = aPT<"s">(30007, 4936687940445178027L ^ var1);
      var10004[5] = aPT<"s">(15940, 790972172925551538L ^ var1);
      var10004[aPT<"s">(1585, 5513269180829498310L ^ var1)] = aPT<"s">(18485, 8902062996759819711L ^ var1);
      var10004[aPT<"s">(17076, 4724899406322482985L ^ var1)] = aPT<"s">(22237, 6167419921565657979L ^ var1);
      this.oBzcq = new cu(var10003, mr.clS(var10004));
      var10003 = this.IcLmm;
      var10004 = new int[aPT<"s">(92, 862452037865897454L ^ var1)];
      var10004[0] = aPT<"s">(32466, 3395001066952885098L ^ var1);
      var10004[1] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      var10004[2] = aPT<"s">(25452, 6297199230330773139L ^ var1);
      var10004[3] = aPT<"s">(30007, 4936687940445178027L ^ var1);
      var10004[4] = aPT<"s">(17465, 6048079803809577367L ^ var1);
      var10004[5] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      var10004[aPT<"s">(28236, 5174748418087490495L ^ var1)] = aPT<"s">(30007, 4936687940445178027L ^ var1);
      this.YyudN = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aPT<"s">(2369, 1930623866526758125L ^ var1)];
      var10004[0] = aPT<"s">(15250, 8342797454174537279L ^ var1);
      var10004[1] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[2] = aPT<"s">(6878, 2999251841274374005L ^ var1);
      var10004[3] = aPT<"s">(14041, 1831345049682266955L ^ var1);
      var10004[4] = aPT<"s">(13523, 1261281926347508069L ^ var1);
      var10004[5] = aPT<"s">(17465, 6048079803809577367L ^ var1);
      var10004[aPT<"s">(28236, 5174748418087490495L ^ var1)] = aPT<"s">(24075, 188018751658664841L ^ var1);
      var10004[aPT<"s">(92, 862452037865897454L ^ var1)] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      this.xtaAk = new ct(this, mr.clS(var10004));
      var10003 = this.xtaAk;
      var10004 = new int[aPT<"s">(28236, 5174748418087490495L ^ var1)];
      var10004[0] = aPT<"s">(30110, 9129646277666932798L ^ var1);
      var10004[1] = aPT<"s">(9492, 4088199046480910575L ^ var1);
      var10004[2] = aPT<"s">(11173, 7704301382415144493L ^ var1);
      var10004[3] = aPT<"s">(17465, 6048079803809577367L ^ var1);
      var10004[4] = aPT<"s">(737, 5820225100161220380L ^ var1);
      var10004[5] = aPT<"s">(6878, 2999251841274374005L ^ var1);
      this.HIGji = new cu(var10003, mr.clS(var10004));
      var10003 = this.xtaAk;
      var10004 = new int[aPT<"s">(10240, 7138418172500530609L ^ var1)];
      var10004[0] = aPT<"s">(5352, 8709701629598132580L ^ var1);
      var10004[1] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[2] = aPT<"s">(30007, 4936687940445178027L ^ var1);
      var10004[3] = aPT<"s">(7820, 1573149878026134322L ^ var1);
      var10004[4] = aPT<"s">(32591, 2203243471423341218L ^ var1);
      var10004[5] = aPT<"s">(10624, 8698750351954334834L ^ var1);
      var10004[aPT<"s">(28236, 5174748418087490495L ^ var1)] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      var10004[aPT<"s">(92, 862452037865897454L ^ var1)] = aPT<"s">(18485, 8902062996759819711L ^ var1);
      var10004[aPT<"s">(2369, 1930623866526758125L ^ var1)] = aPT<"s">(21260, 4676501015661391534L ^ var1);
      var10004[aPT<"s">(32498, 7813169445307187982L ^ var1)] = aPT<"s">(7329, 5809110475342373120L ^ var1);
      var10004[aPT<"s">(10306, 4403207219716150744L ^ var1)] = aPT<"s">(25770, 6560038584328853797L ^ var1);
      var10004[aPT<"s">(17894, 454413940149041180L ^ var1)] = aPT<"s">(17465, 6048079803809577367L ^ var1);
      var10004[aPT<"s">(11687, 2998328259203420186L ^ var1)] = aPT<"s">(21260, 4676501015661391534L ^ var1);
      var10004[aPT<"s">(15765, 7702823091478937601L ^ var1)] = aPT<"s">(29832, 6291726303652841734L ^ var1);
      var10004[aPT<"s">(11603, 6368992499433459928L ^ var1)] = aPT<"s">(8723, 6182450692590559207L ^ var1);
      var10004[aPT<"s">(32466, 4413529516503663394L ^ var1)] = aPT<"s">(6335, 5765975477382178090L ^ var1);
      var10004[aPT<"s">(26862, 5747118196028347753L ^ var1)] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      var10004[aPT<"s">(25287, 2489662712055406440L ^ var1)] = aPT<"s">(9492, 4088199046480910575L ^ var1);
      var10004[aPT<"s">(17485, 3550595554699000293L ^ var1)] = aPT<"s">(32579, 6438572372823966397L ^ var1);
      this.FXNOb = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aPT<"s">(18686, 4673015045483902219L ^ var1)];
      var10004[0] = aPT<"s">(14611, 8520456715721065610L ^ var1);
      var10004[1] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      var10004[2] = aPT<"s">(18485, 8902062996759819711L ^ var1);
      var10004[3] = aPT<"s">(21260, 4676501015661391534L ^ var1);
      var10004[4] = aPT<"s">(29832, 6291726303652841734L ^ var1);
      var10004[5] = aPT<"s">(1281, 2663727267572873344L ^ var1);
      var10004[aPT<"s">(28236, 5174748418087490495L ^ var1)] = aPT<"s">(17465, 6048079803809577367L ^ var1);
      var10004[aPT<"s">(92, 862452037865897454L ^ var1)] = aPT<"s">(21260, 4676501015661391534L ^ var1);
      var10004[aPT<"s">(2369, 1930623866526758125L ^ var1)] = aPT<"s">(29832, 6291726303652841734L ^ var1);
      var10004[aPT<"s">(17789, 3069749662094178450L ^ var1)] = aPT<"s">(8723, 6182450692590559207L ^ var1);
      var10004[aPT<"s">(22754, 1111918662997878105L ^ var1)] = aPT<"s">(3950, 2858851537686852330L ^ var1);
      var10004[aPT<"s">(22005, 6830656789037459487L ^ var1)] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[aPT<"s">(21980, 5350984017857161290L ^ var1)] = aPT<"s">(26660, 215167940019525028L ^ var1);
      var10004[aPT<"s">(20306, 45346348165509847L ^ var1)] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      var10004[aPT<"s">(5821, 5192548874328992595L ^ var1)] = aPT<"s">(21260, 4676501015661391534L ^ var1);
      var10004[aPT<"s">(24362, 7784606541833544411L ^ var1)] = aPT<"s">(30007, 4936687940445178027L ^ var1);
      var10004[aPT<"s">(2664, 7683540957057054609L ^ var1)] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[aPT<"s">(24692, 8689227318913998283L ^ var1)] = aPT<"s">(18485, 8902062996759819711L ^ var1);
      var10004[aPT<"s">(28463, 6420841505438274181L ^ var1)] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      this.wyZEk = new ct(this, mr.clS(var10004)).SO(0);
      var10003 = this.wyZEk;
      var10004 = new int[aPT<"s">(92, 862452037865897454L ^ var1)];
      var10004[0] = aPT<"s">(3950, 2858851537686852330L ^ var1);
      var10004[1] = aPT<"s">(32579, 6438572372823966397L ^ var1);
      var10004[2] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      var10004[3] = aPT<"s">(17465, 6048079803809577367L ^ var1);
      var10004[4] = aPT<"s">(30354, 5357470241408879397L ^ var1);
      var10004[5] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[aPT<"s">(28236, 5174748418087490495L ^ var1)] = aPT<"s">(21260, 4676501015661391534L ^ var1);
      this.lOgKN = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aPT<"s">(2664, 7683540957057054609L ^ var1)];
      var10004[0] = aPT<"s">(10121, 4867360562141720L ^ var1);
      var10004[1] = aPT<"s">(14044, 3681621587262229327L ^ var1);
      var10004[2] = aPT<"s">(17465, 6048079803809577367L ^ var1);
      var10004[3] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      var10004[4] = aPT<"s">(22265, 2625512656969902946L ^ var1);
      var10004[5] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      var10004[aPT<"s">(28236, 5174748418087490495L ^ var1)] = aPT<"s">(8723, 6182450692590559207L ^ var1);
      var10004[aPT<"s">(92, 862452037865897454L ^ var1)] = aPT<"s">(19080, 1231347996540057377L ^ var1);
      var10004[aPT<"s">(2369, 1930623866526758125L ^ var1)] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      var10004[aPT<"s">(17789, 3069749662094178450L ^ var1)] = aPT<"s">(15885, 5899626984143209365L ^ var1);
      var10004[aPT<"s">(22754, 1111918662997878105L ^ var1)] = aPT<"s">(9492, 4088199046480910575L ^ var1);
      var10004[aPT<"s">(22005, 6830656789037459487L ^ var1)] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      var10004[aPT<"s">(21980, 5350984017857161290L ^ var1)] = aPT<"s">(8723, 6182450692590559207L ^ var1);
      var10004[aPT<"s">(20306, 45346348165509847L ^ var1)] = aPT<"s">(14611, 8520456715721065610L ^ var1);
      var10004[aPT<"s">(5821, 5192548874328992595L ^ var1)] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      var10004[aPT<"s">(24362, 7784606541833544411L ^ var1)] = aPT<"s">(32579, 6438572372823966397L ^ var1);
      this.LjfJW = new cD(this, mr.clS(var10004)).VO(aPT<"s">(22488, 8748231988826450556L ^ var1));
      var10004 = new int[aPT<"s">(22754, 1111918662997878105L ^ var1)];
      var10004[0] = aPT<"s">(19080, 1231347996540057377L ^ var1);
      var10004[1] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      var10004[2] = aPT<"s">(15885, 5899626984143209365L ^ var1);
      var10004[3] = aPT<"s">(9492, 4088199046480910575L ^ var1);
      var10004[4] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      var10004[5] = aPT<"s">(8723, 6182450692590559207L ^ var1);
      var10004[aPT<"s">(28236, 5174748418087490495L ^ var1)] = aPT<"s">(16799, 8495905880847891484L ^ var1);
      var10004[aPT<"s">(92, 862452037865897454L ^ var1)] = aPT<"s">(30007, 4936687940445178027L ^ var1);
      var10004[aPT<"s">(2369, 1930623866526758125L ^ var1)] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      var10004[aPT<"s">(17789, 3069749662094178450L ^ var1)] = aPT<"s">(12051, 5167939395407139459L ^ var1);
      this.hyauK = new cC(this, mr.clS(var10004)).Vy(1.0).VA(90.0).Vw(1.0).Vx(180.0);
      var10003 = this.wyZEk;
      var10004 = new int[aPT<"s">(17789, 3069749662094178450L ^ var1)];
      var10004[0] = aPT<"s">(3950, 2858851537686852330L ^ var1);
      var10004[1] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[2] = aPT<"s">(3145, 1346618115205296633L ^ var1);
      var10004[3] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      var10004[4] = aPT<"s">(21260, 4676501015661391534L ^ var1);
      var10004[5] = aPT<"s">(30007, 4936687940445178027L ^ var1);
      var10004[aPT<"s">(28236, 5174748418087490495L ^ var1)] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[aPT<"s">(92, 862452037865897454L ^ var1)] = aPT<"s">(18485, 8902062996759819711L ^ var1);
      var10004[aPT<"s">(2369, 1930623866526758125L ^ var1)] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      this.clxNa = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aPT<"s">(24362, 7784606541833544411L ^ var1)];
      var10004[0] = aPT<"s">(27780, 8427827832406970672L ^ var1);
      var10004[1] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[2] = aPT<"s">(18859, 8770457239493063698L ^ var1);
      var10004[3] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      var10004[4] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      var10004[5] = aPT<"s">(8723, 6182450692590559207L ^ var1);
      var10004[aPT<"s">(28236, 5174748418087490495L ^ var1)] = aPT<"s">(3950, 2858851537686852330L ^ var1);
      var10004[aPT<"s">(92, 862452037865897454L ^ var1)] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[aPT<"s">(2369, 1930623866526758125L ^ var1)] = aPT<"s">(3145, 1346618115205296633L ^ var1);
      var10004[aPT<"s">(17789, 3069749662094178450L ^ var1)] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      var10004[aPT<"s">(22754, 1111918662997878105L ^ var1)] = aPT<"s">(21260, 4676501015661391534L ^ var1);
      var10004[aPT<"s">(22005, 6830656789037459487L ^ var1)] = aPT<"s">(30007, 4936687940445178027L ^ var1);
      var10004[aPT<"s">(21980, 5350984017857161290L ^ var1)] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[aPT<"s">(20306, 45346348165509847L ^ var1)] = aPT<"s">(18485, 8902062996759819711L ^ var1);
      var10004[aPT<"s">(5821, 5192548874328992595L ^ var1)] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      this.jJzSe = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(-180.0).Vx(180.0).VA(180.0).Vz(aRvFo);
      var10004 = new int[aPT<"s">(20306, 45346348165509847L ^ var1)];
      var10004[0] = aPT<"s">(31559, 4911114002448221889L ^ var1);
      var10004[1] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[2] = aPT<"s">(23478, 6528990509355279931L ^ var1);
      var10004[3] = aPT<"s">(15175, 5141284310758409952L ^ var1);
      var10004[4] = aPT<"s">(8723, 6182450692590559207L ^ var1);
      var10004[5] = aPT<"s">(19216, 3250174782110316211L ^ var1);
      var10004[aPT<"s">(28236, 5174748418087490495L ^ var1)] = aPT<"s">(18485, 8902062996759819711L ^ var1);
      var10004[aPT<"s">(92, 862452037865897454L ^ var1)] = aPT<"s">(30007, 4936687940445178027L ^ var1);
      var10004[aPT<"s">(2369, 1930623866526758125L ^ var1)] = aPT<"s">(17465, 6048079803809577367L ^ var1);
      var10004[aPT<"s">(17789, 3069749662094178450L ^ var1)] = aPT<"s">(30007, 4936687940445178027L ^ var1);
      var10004[aPT<"s">(22754, 1111918662997878105L ^ var1)] = aPT<"s">(29574, 8958653718024588824L ^ var1);
      var10004[aPT<"s">(22005, 6830656789037459487L ^ var1)] = aPT<"s">(18485, 8902062996759819711L ^ var1);
      var10004[aPT<"s">(21980, 5350984017857161290L ^ var1)] = aPT<"s">(18601, 7787078046848464149L ^ var1);
      this.DtLvL = new cJ(this, mr.clS(var10004));
      this.LypUB = 180.0F;
      this.bapCK = new ConcurrentLinkedQueue<>();
      this.LjfJW.Vf(this.lOgKN::SZ);
      this.hyauK.Vf(this.lOgKN::SZ);
      this.jJzSe.Vf(this.clxNa::SZ);
      this.DtLvL.Vf(this.oBzcq::SZ);
   }

   static {
      Loader.doInit(fs.class);
      _c0e223c9674381b1589f1c334bd979ed();
   }

   private static native void _c0e223c9674381b1589f1c334bd979ed();

   @Override
   public native void YO();
}
