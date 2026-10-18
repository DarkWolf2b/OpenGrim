package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;

public class eS extends gg {
   private final ct ZPhzU;
   private final cu eQeWA;
   private final cu ZDYKK;
   private final cJ dVnxZ;
   private final cC FXDzg;
   private final cA GEHFQ;
   private final cC irxdG;
   private final ol cVZni;
   private final mT Dwgkb;
   private final mW VYWYG;
   private boolean cRMrD;
   private boolean EiuGH;
   private int UKQaD;
   private static long muwCI;
   private static String[] tZjZX;
   private static String[] zfqcZ;
   private static Map SCZFK;
   private static long[] QoRIe;
   private static Integer[] rRLeM;
   private static Map eJHIG;

   public eS() {
      long var1 = muwCI ^ 132275791603575L;
      super(gf.aZL(aDt<"e">(444, 3446042593835197180L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aDt<"e">(12132, 6604264818568072199L ^ var1)];
      var10004[0] = aDt<"e">(13058, 6752285192399720521L ^ var1);
      var10004[1] = aDt<"e">(32604, 3905754028313664546L ^ var1);
      var10004[2] = aDt<"e">(14700, 4822777141634374199L ^ var1);
      var10004[3] = aDt<"e">(4394, 5037181729784050245L ^ var1);
      var10004[4] = aDt<"e">(9999, 2274213601790133347L ^ var1);
      var10004[5] = aDt<"e">(17388, 4072985521018560673L ^ var1);
      var10004[aDt<"e">(25963, 768879577288361481L ^ var1)] = aDt<"e">(17022, 43614222521131298L ^ var1);
      this.ZPhzU = new ct(this, mr.clS(var10004)).SO(0);
      this.eQeWA = new cu(
         this.ZPhzU,
         mr.clS(
            new int[]{
               aDt<"e">(10863, 631786143266507040L ^ var1),
               aDt<"e">(1500, 268881054235403922L ^ var1),
               aDt<"e">(7170, 4696004528488234840L ^ var1),
               aDt<"e">(19628, 4096063482156740561L ^ var1)
            }
         )
      );
      ct var10003 = this.ZPhzU;
      var10004 = new int[aDt<"e">(14974, 2058965198298585396L ^ var1)];
      var10004[0] = aDt<"e">(18084, 7506433823617115638L ^ var1);
      var10004[1] = aDt<"e">(18469, 6029829014035786608L ^ var1);
      var10004[2] = aDt<"e">(19360, 2253218484442228934L ^ var1);
      var10004[3] = aDt<"e">(5756, 6317501329334383883L ^ var1);
      var10004[4] = aDt<"e">(14634, 3515500061636729461L ^ var1);
      var10004[5] = aDt<"e">(14634, 3515500061636729461L ^ var1);
      var10004[aDt<"e">(7483, 5010572215364566592L ^ var1)] = aDt<"e">(19271, 2824096024206698497L ^ var1);
      var10004[aDt<"e">(2959, 4554014458302376186L ^ var1)] = aDt<"e">(14224, 4688003339891643612L ^ var1);
      var10004[aDt<"e">(12991, 6851482569936933370L ^ var1)] = aDt<"e">(30865, 2103499461715418108L ^ var1);
      this.ZDYKK = new cu(var10003, mr.clS(var10004));
      var10004 = new int[aDt<"e">(10606, 5437064740892674569L ^ var1)];
      var10004[0] = aDt<"e">(20977, 9166094753219736209L ^ var1);
      var10004[1] = aDt<"e">(22387, 8684161836439139357L ^ var1);
      var10004[2] = aDt<"e">(21251, 822944555864846400L ^ var1);
      var10004[3] = aDt<"e">(16624, 8795423391402615680L ^ var1);
      var10004[4] = aDt<"e">(9999, 2274213601790133347L ^ var1);
      var10004[5] = aDt<"e">(24025, 9099979229218143872L ^ var1);
      var10004[aDt<"e">(7483, 5010572215364566592L ^ var1)] = aDt<"e">(8957, 8411280366338867644L ^ var1);
      var10004[aDt<"e">(2959, 4554014458302376186L ^ var1)] = aDt<"e">(5756, 6317501329334383883L ^ var1);
      var10004[aDt<"e">(26065, 6570067245394970261L ^ var1)] = aDt<"e">(17022, 43614222521131298L ^ var1);
      var10004[aDt<"e">(16545, 7859442039857800146L ^ var1)] = aDt<"e">(31829, 848638895196495657L ^ var1);
      var10004[aDt<"e">(7880, 8230808146662473133L ^ var1)] = aDt<"e">(3531, 6305957533022727858L ^ var1);
      var10004[aDt<"e">(29979, 1806405568838293091L ^ var1)] = aDt<"e">(17022, 43614222521131298L ^ var1);
      this.dVnxZ = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aDt<"e">(26159, 6793485351340885350L ^ var1)];
      var10004[0] = aDt<"e">(2824, 2923396157902006336L ^ var1);
      var10004[1] = aDt<"e">(27383, 3442950307973122437L ^ var1);
      var10004[2] = aDt<"e">(16624, 8795423391402615680L ^ var1);
      var10004[3] = aDt<"e">(8957, 8411280366338867644L ^ var1);
      var10004[4] = aDt<"e">(1722, 7152974596943291845L ^ var1);
      var10004[5] = aDt<"e">(21251, 822944555864846400L ^ var1);
      var10004[aDt<"e">(7483, 5010572215364566592L ^ var1)] = aDt<"e">(20141, 2503750777429093882L ^ var1);
      var10004[aDt<"e">(2959, 4554014458302376186L ^ var1)] = aDt<"e">(2530, 6766873147953326778L ^ var1);
      var10004[aDt<"e">(26065, 6570067245394970261L ^ var1)] = aDt<"e">(8957, 8411280366338867644L ^ var1);
      var10004[aDt<"e">(16545, 7859442039857800146L ^ var1)] = aDt<"e">(25714, 8042414076251948844L ^ var1);
      var10004[aDt<"e">(23224, 6054211795956627918L ^ var1)] = aDt<"e">(27383, 3442950307973122437L ^ var1);
      var10004[aDt<"e">(13989, 6925923675349161447L ^ var1)] = aDt<"e">(18584, 3199337805483273209L ^ var1);
      var10004[aDt<"e">(16197, 7139664088833235992L ^ var1)] = aDt<"e">(14634, 3515500061636729461L ^ var1);
      var10004[aDt<"e">(16917, 4293824812704784705L ^ var1)] = aDt<"e">(21251, 822944555864846400L ^ var1);
      var10004[aDt<"e">(28591, 6331805109070613726L ^ var1)] = aDt<"e">(16624, 8795423391402615680L ^ var1);
      var10004[aDt<"e">(18711, 1683265328033819204L ^ var1)] = aDt<"e">(7969, 6920784326237011063L ^ var1);
      var10004[aDt<"e">(2903, 2982681293781248016L ^ var1)] = aDt<"e">(24025, 9099979229218143872L ^ var1);
      this.FXDzg = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(0.0).Vx(12.0).VA(1.5).Vz(aDq<"p">(23673, 8519486306174441914L ^ var1));
      var10004 = new int[aDt<"e">(16197, 7139664088833235992L ^ var1)];
      var10004[0] = aDt<"e">(16118, 6300403774584331650L ^ var1);
      var10004[1] = aDt<"e">(24025, 9099979229218143872L ^ var1);
      var10004[2] = aDt<"e">(14634, 3515500061636729461L ^ var1);
      var10004[3] = aDt<"e">(1500, 268881054235403922L ^ var1);
      var10004[4] = aDt<"e">(17022, 43614222521131298L ^ var1);
      var10004[5] = aDt<"e">(16624, 8795423391402615680L ^ var1);
      var10004[aDt<"e">(7483, 5010572215364566592L ^ var1)] = aDt<"e">(8957, 8411280366338867644L ^ var1);
      var10004[aDt<"e">(2959, 4554014458302376186L ^ var1)] = aDt<"e">(17099, 8489194816557408666L ^ var1);
      var10004[aDt<"e">(26065, 6570067245394970261L ^ var1)] = aDt<"e">(24025, 9099979229218143872L ^ var1);
      var10004[aDt<"e">(16545, 7859442039857800146L ^ var1)] = aDt<"e">(2530, 6766873147953326778L ^ var1);
      var10004[aDt<"e">(23224, 6054211795956627918L ^ var1)] = aDt<"e">(21251, 822944555864846400L ^ var1);
      var10004[aDt<"e">(13989, 6925923675349161447L ^ var1)] = aDt<"e">(11868, 280259060043812134L ^ var1);
      this.GEHFQ = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(aDq<"p">(17278, 5622138311672596156L ^ var1));
      var10004 = new int[aDt<"e">(7483, 5010572215364566592L ^ var1)];
      var10004[0] = aDt<"e">(12152, 4441013205352090652L ^ var1);
      var10004[1] = aDt<"e">(7892, 6690532495375875460L ^ var1);
      var10004[2] = aDt<"e">(21251, 822944555864846400L ^ var1);
      var10004[3] = aDt<"e">(16624, 8795423391402615680L ^ var1);
      var10004[4] = aDt<"e">(7969, 6920784326237011063L ^ var1);
      var10004[5] = aDt<"e">(24025, 9099979229218143872L ^ var1);
      this.irxdG = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(100.0).Vz("%");
      this.cVZni = new ol(this);
      this.Dwgkb = mT.cpz();
      this.VYWYG = new mW();
      this.UKQaD = -1;
   }

   static {
      Loader.doInit(eS.class);
      _6c3f9fef805ed141ce14c78ae08c1661();
   }

   private static native void _6c3f9fef805ed141ce14c78ae08c1661();

   private static native CallSite aDt(Lookup var0, String var1, MethodType var2);

   public native cC aDf();

   public native ol aDg();

   public native mT aDh();

   public native mW aDi();

   private native void aCT();

   private native boolean aCU(PlayerEntity var1);

   public native ct aCZ();

   public native boolean aDj();

   public native boolean aDk();

   private native void aCV();

   public native cu aDa();

   public native cA aDe();

   public native int aDl();

   private static native MatchException aDm(MatchException var0);

   @hG
   public native void aCP(gH$th var1);

   private native void aCS();

   private native boolean aCQ(PlayerEntity var1);

   private static native CallSite aDq(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aCN(gM var1);

   public native boolean aCW(LivingEntity var1);

   public native boolean aCX();

   public native boolean aCY();

   public native cJ aDc();

   @hG
   public native void aCO(gZ$tt var1);

   private native void aCR(PlayerEntity var1);

   public native cu aDb();

   public native cC aDd();

   private static native Object aDp(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aDo(int var0, long var1);

   private static native int aDr(int var0, long var1);

   private static native int aDs(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native String aDn(byte[] var0);

   @Override
   public native void YO();
}
