package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.projectile.ProjectileEntity;

public class fI extends gg {
   private final cC saZPV;
   private final cv ZnFGj;
   private final cw btcIN;
   private final cw aVerA;
   private final cw cGEiM;
   private final cw iXQno;
   private final cw xlSxX;
   private final cJ qrTWi;
   private final cJ MXFNE;
   private final cy TceCO;
   private final cJ yfLPs;
   private final cD CLGoi;
   private final cJ icZIc;
   private static long hhjHN;
   private static String[] gftdG;
   private static String[] tqwJQ;
   private static Map sDjcB;
   private static long[] XvFOI;
   private static Integer[] jcHIy;
   private static Map AWYJz;

   private static native void _f77c9f3042371eaf0e4288a4283006be();

   public fI() {
      long var1 = hhjHN ^ 121247331531019L;
      super(gf.aZL(2, false, gh.xwjCw));
      int[] var10004 = new int[aUM<"w">(10771, 4072292381118170303L ^ var1)];
      var10004[0] = aUM<"w">(15062, 570867150467994711L ^ var1);
      var10004[1] = aUM<"w">(6433, 4069346803112196024L ^ var1);
      var10004[2] = aUM<"w">(9907, 7291972283507935349L ^ var1);
      var10004[3] = aUM<"w">(11918, 8398416726511812648L ^ var1);
      var10004[4] = aUM<"w">(20871, 1513876539336163074L ^ var1);
      var10004[5] = aUM<"w">(32403, 2902475874873921585L ^ var1);
      var10004[aUM<"w">(29120, 5159787857356414798L ^ var1)] = aUM<"w">(19126, 8548448029207847984L ^ var1);
      var10004[aUM<"w">(850, 5413552163546639853L ^ var1)] = aUM<"w">(6945, 5678661217913157030L ^ var1);
      this.saZPV = new cC(this, mr.clS(var10004)).Vy(1.0).Vw(1.0).Vx(100.0).VA(16.0).Vz(aUJ<"f">(9040, 6565989103770422017L ^ var1));
      var10004 = new int[aUM<"w">(16511, 6766317225023139554L ^ var1)];
      var10004[0] = aUM<"w">(19793, 2878333704360977387L ^ var1);
      var10004[1] = aUM<"w">(4829, 2413014144717831190L ^ var1);
      var10004[2] = aUM<"w">(5187, 3068915315084147402L ^ var1);
      var10004[3] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[4] = aUM<"w">(9875, 6994370037265664023L ^ var1);
      var10004[5] = aUM<"w">(21153, 4244460218706787433L ^ var1);
      var10004[aUM<"w">(22419, 4242519678946146617L ^ var1)] = aUM<"w">(15795, 5241353161174750015L ^ var1);
      var10004[aUM<"w">(23547, 2385641611908314479L ^ var1)] = aUM<"w">(18819, 3333159817498355512L ^ var1);
      var10004[aUM<"w">(409, 4076840464674598699L ^ var1)] = aUM<"w">(28517, 8658136116288733646L ^ var1);
      var10004[aUM<"w">(4014, 127545573027848509L ^ var1)] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[aUM<"w">(1511, 1112872365674277745L ^ var1)] = aUM<"w">(11624, 1883239975158809505L ^ var1);
      this.ZnFGj = new cv(this, mr.clS(var10004));
      cv var10003 = this.ZnFGj;
      var10004 = new int[aUM<"w">(22419, 4242519678946146617L ^ var1)];
      var10004[0] = aUM<"w">(11571, 7436766859301618586L ^ var1);
      var10004[1] = aUM<"w">(26400, 47026507266771390L ^ var1);
      var10004[2] = aUM<"w">(29148, 4380612023243399004L ^ var1);
      var10004[3] = aUM<"w">(5564, 1227840563703593759L ^ var1);
      var10004[4] = aUM<"w">(32039, 2231905918190539704L ^ var1);
      var10004[5] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      this.btcIN = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.ZnFGj;
      var10004 = new int[aUM<"w">(15173, 2196572781904270827L ^ var1)];
      var10004[0] = aUM<"w">(10717, 6911102325285521234L ^ var1);
      var10004[1] = aUM<"w">(9169, 6513305846325579037L ^ var1);
      var10004[2] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[3] = aUM<"w">(7881, 8432093754818080873L ^ var1);
      var10004[4] = aUM<"w">(19916, 1902240546819859201L ^ var1);
      var10004[5] = aUM<"w">(29148, 4380612023243399004L ^ var1);
      var10004[aUM<"w">(22419, 4242519678946146617L ^ var1)] = aUM<"w">(3243, 7655137774355161610L ^ var1);
      var10004[aUM<"w">(23547, 2385641611908314479L ^ var1)] = aUM<"w">(3243, 7655137774355161610L ^ var1);
      var10004[aUM<"w">(409, 4076840464674598699L ^ var1)] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      this.aVerA = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.ZnFGj;
      var10004 = new int[aUM<"w">(22419, 4242519678946146617L ^ var1)];
      var10004[0] = aUM<"w">(14428, 5573425500968228585L ^ var1);
      var10004[1] = aUM<"w">(5564, 1227840563703593759L ^ var1);
      var10004[2] = aUM<"w">(5564, 1227840563703593759L ^ var1);
      var10004[3] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[4] = aUM<"w">(14701, 6093910608312702921L ^ var1);
      var10004[5] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      this.cGEiM = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.ZnFGj;
      var10004 = new int[aUM<"w">(15173, 2196572781904270827L ^ var1)];
      var10004[0] = aUM<"w">(13255, 8694119631869910393L ^ var1);
      var10004[1] = aUM<"w">(22252, 263118555852961913L ^ var1);
      var10004[2] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      var10004[3] = aUM<"w">(18475, 4442192286073841390L ^ var1);
      var10004[4] = aUM<"w">(8467, 7802194947750006690L ^ var1);
      var10004[5] = aUM<"w">(10032, 3148269935099644401L ^ var1);
      var10004[aUM<"w">(22419, 4242519678946146617L ^ var1)] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[aUM<"w">(23547, 2385641611908314479L ^ var1)] = aUM<"w">(11879, 6569940057956876535L ^ var1);
      var10004[aUM<"w">(409, 4076840464674598699L ^ var1)] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      this.iXQno = new cw(var10003, mr.clS(var10004)).Tz();
      var10003 = this.ZnFGj;
      var10004 = new int[aUM<"w">(23547, 2385641611908314479L ^ var1)];
      var10004[0] = aUM<"w">(9228, 7623367810973502139L ^ var1);
      var10004[1] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[2] = aUM<"w">(21153, 4244460218706787433L ^ var1);
      var10004[3] = aUM<"w">(22252, 263118555852961913L ^ var1);
      var10004[4] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[5] = aUM<"w">(9169, 6513305846325579037L ^ var1);
      var10004[aUM<"w">(22419, 4242519678946146617L ^ var1)] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      this.xlSxX = new cw(var10003, mr.clS(var10004)).Tz();
      var10004 = new int[aUM<"w">(25244, 7407708538466323551L ^ var1)];
      var10004[0] = aUM<"w">(23952, 2749825830537818881L ^ var1);
      var10004[1] = aUM<"w">(25549, 6522252084178865533L ^ var1);
      var10004[2] = aUM<"w">(9169, 6513305846325579037L ^ var1);
      var10004[3] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[4] = aUM<"w">(5564, 1227840563703593759L ^ var1);
      var10004[5] = aUM<"w">(26400, 47026507266771390L ^ var1);
      var10004[aUM<"w">(22419, 4242519678946146617L ^ var1)] = aUM<"w">(8467, 7802194947750006690L ^ var1);
      var10004[aUM<"w">(23547, 2385641611908314479L ^ var1)] = aUM<"w">(13255, 8694119631869910393L ^ var1);
      var10004[aUM<"w">(409, 4076840464674598699L ^ var1)] = aUM<"w">(5564, 1227840563703593759L ^ var1);
      var10004[aUM<"w">(15173, 2196572781904270827L ^ var1)] = aUM<"w">(22252, 263118555852961913L ^ var1);
      var10004[aUM<"w">(6670, 4034039543116149894L ^ var1)] = aUM<"w">(26400, 47026507266771390L ^ var1);
      var10004[aUM<"w">(12698, 5555256204426813272L ^ var1)] = aUM<"w">(9169, 6513305846325579037L ^ var1);
      var10004[aUM<"w">(13363, 1259465759149005502L ^ var1)] = aUM<"w">(30082, 7096549717342673709L ^ var1);
      var10004[aUM<"w">(27732, 1787300299546870505L ^ var1)] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      this.qrTWi = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[aUM<"w">(15173, 2196572781904270827L ^ var1)];
      var10004[0] = aUM<"w">(2369, 3092724860055955419L ^ var1);
      var10004[1] = aUM<"w">(9169, 6513305846325579037L ^ var1);
      var10004[2] = aUM<"w">(17042, 81471612080942126L ^ var1);
      var10004[3] = aUM<"w">(22252, 263118555852961913L ^ var1);
      var10004[4] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      var10004[5] = aUM<"w">(22252, 263118555852961913L ^ var1);
      var10004[aUM<"w">(22419, 4242519678946146617L ^ var1)] = aUM<"w">(7383, 236602264882229779L ^ var1);
      var10004[aUM<"w">(23547, 2385641611908314479L ^ var1)] = aUM<"w">(3243, 7655137774355161610L ^ var1);
      var10004[aUM<"w">(409, 4076840464674598699L ^ var1)] = aUM<"w">(26400, 47026507266771390L ^ var1);
      this.MXFNE = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aUM<"w">(12675, 2677996069910716184L ^ var1)];
      var10004[0] = aUM<"w">(11489, 1071072342986523174L ^ var1);
      var10004[1] = aUM<"w">(22252, 263118555852961913L ^ var1);
      var10004[2] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      var10004[3] = aUM<"w">(16459, 3038370183413034713L ^ var1);
      var10004[4] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[5] = aUM<"w">(9169, 6513305846325579037L ^ var1);
      var10004[aUM<"w">(22419, 4242519678946146617L ^ var1)] = aUM<"w">(9169, 6513305846325579037L ^ var1);
      var10004[aUM<"w">(23547, 2385641611908314479L ^ var1)] = aUM<"w">(26400, 47026507266771390L ^ var1);
      var10004[aUM<"w">(409, 4076840464674598699L ^ var1)] = aUM<"w">(16459, 3038370183413034713L ^ var1);
      var10004[aUM<"w">(15173, 2196572781904270827L ^ var1)] = aUM<"w">(21153, 4244460218706787433L ^ var1);
      var10004[aUM<"w">(6670, 4034039543116149894L ^ var1)] = aUM<"w">(8467, 7802194947750006690L ^ var1);
      var10004[aUM<"w">(12698, 5555256204426813272L ^ var1)] = aUM<"w">(30174, 7275506010068540180L ^ var1);
      var10004[aUM<"w">(16405, 7862715064664354465L ^ var1)] = aUM<"w">(26400, 47026507266771390L ^ var1);
      var10004[aUM<"w">(27021, 7645756226293712707L ^ var1)] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      var10004[aUM<"w">(15370, 1803955841642271389L ^ var1)] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      var10004[aUM<"w">(27379, 3126625756636333107L ^ var1)] = aUM<"w">(29148, 4380612023243399004L ^ var1);
      var10004[aUM<"w">(31180, 2364278055472551750L ^ var1)] = aUM<"w">(25549, 6522252084178865533L ^ var1);
      var10004[aUM<"w">(8114, 2766985135775527179L ^ var1)] = aUM<"w">(26400, 47026507266771390L ^ var1);
      this.TceCO = new cy(this, mr.clS(var10004)).Un(aUM<"w">(8467, 7802194947750006690L ^ var1)).Up(aUJ<"f">(27159, 7836161748715831879L ^ var1));
      var10004 = new int[aUM<"w">(27021, 7645756226293712707L ^ var1)];
      var10004[0] = aUM<"w">(8184, 495970292853125440L ^ var1);
      var10004[1] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[2] = aUM<"w">(25549, 6522252084178865533L ^ var1);
      var10004[3] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[4] = aUM<"w">(5343, 4833462656160447084L ^ var1);
      var10004[5] = aUM<"w">(21153, 4244460218706787433L ^ var1);
      var10004[aUM<"w">(22419, 4242519678946146617L ^ var1)] = aUM<"w">(8467, 7802194947750006690L ^ var1);
      var10004[aUM<"w">(23547, 2385641611908314479L ^ var1)] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[aUM<"w">(409, 4076840464674598699L ^ var1)] = aUM<"w">(9169, 6513305846325579037L ^ var1);
      var10004[aUM<"w">(15173, 2196572781904270827L ^ var1)] = aUM<"w">(8467, 7802194947750006690L ^ var1);
      var10004[aUM<"w">(6670, 4034039543116149894L ^ var1)] = aUM<"w">(17261, 2172863000986938863L ^ var1);
      var10004[aUM<"w">(12698, 5555256204426813272L ^ var1)] = aUM<"w">(26400, 47026507266771390L ^ var1);
      var10004[aUM<"w">(16405, 7862715064664354465L ^ var1)] = aUM<"w">(31035, 1869998149577201584L ^ var1);
      this.yfLPs = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aUM<"w">(6670, 4034039543116149894L ^ var1)];
      var10004[0] = aUM<"w">(8184, 495970292853125440L ^ var1);
      var10004[1] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[2] = aUM<"w">(25549, 6522252084178865533L ^ var1);
      var10004[3] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[4] = aUM<"w">(5343, 4833462656160447084L ^ var1);
      var10004[5] = aUM<"w">(21153, 4244460218706787433L ^ var1);
      var10004[aUM<"w">(22419, 4242519678946146617L ^ var1)] = aUM<"w">(8467, 7802194947750006690L ^ var1);
      var10004[aUM<"w">(23547, 2385641611908314479L ^ var1)] = aUM<"w">(1810, 1484683335083469242L ^ var1);
      var10004[aUM<"w">(409, 4076840464674598699L ^ var1)] = aUM<"w">(26400, 47026507266771390L ^ var1);
      var10004[aUM<"w">(15173, 2196572781904270827L ^ var1)] = aUM<"w">(1226, 4203911477387569767L ^ var1);
      this.CLGoi = new cD(this, mr.clS(var10004)).VO(aUM<"w">(27708, 8012207605564261024L ^ var1));
      var10004 = new int[aUM<"w">(20090, 1144358011495571660L ^ var1)];
      var10004[0] = aUM<"w">(11489, 1071072342986523174L ^ var1);
      var10004[1] = aUM<"w">(22252, 263118555852961913L ^ var1);
      var10004[2] = aUM<"w">(2732, 1814840784940082187L ^ var1);
      var10004[3] = aUM<"w">(29148, 4380612023243399004L ^ var1);
      var10004[4] = aUM<"w">(7383, 236602264882229779L ^ var1);
      var10004[5] = aUM<"w">(3243, 7655137774355161610L ^ var1);
      var10004[aUM<"w">(22419, 4242519678946146617L ^ var1)] = aUM<"w">(26400, 47026507266771390L ^ var1);
      var10004[aUM<"w">(23547, 2385641611908314479L ^ var1)] = aUM<"w">(8467, 7802194947750006690L ^ var1);
      var10004[aUM<"w">(409, 4076840464674598699L ^ var1)] = aUM<"w">(6687, 4515882003958510748L ^ var1);
      var10004[aUM<"w">(15173, 2196572781904270827L ^ var1)] = aUM<"w">(9169, 6513305846325579037L ^ var1);
      var10004[aUM<"w">(6670, 4034039543116149894L ^ var1)] = aUM<"w">(8467, 7802194947750006690L ^ var1);
      var10004[aUM<"w">(12698, 5555256204426813272L ^ var1)] = aUM<"w">(8184, 495970292853125440L ^ var1);
      var10004[aUM<"w">(16405, 7862715064664354465L ^ var1)] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[aUM<"w">(27021, 7645756226293712707L ^ var1)] = aUM<"w">(25549, 6522252084178865533L ^ var1);
      var10004[aUM<"w">(15370, 1803955841642271389L ^ var1)] = aUM<"w">(22179, 2241074985628039227L ^ var1);
      var10004[aUM<"w">(16374, 6197292572030603577L ^ var1)] = aUM<"w">(5343, 4833462656160447084L ^ var1);
      var10004[aUM<"w">(9310, 3754820288530778875L ^ var1)] = aUM<"w">(21153, 4244460218706787433L ^ var1);
      this.icZIc = new cJ(this, mr.clS(var10004)).WE(false);
      this.CLGoi.Vf(this.yfLPs::WF);
   }

   static {
      Loader.doInit(fI.class);
      _f77c9f3042371eaf0e4288a4283006be();
   }

   @hG
   public native void aUC(gA var1);

   private native boolean aUD(ProjectileEntity var1);

   private static native String aUG(byte[] var0);

   private static native String aUH(int var0, long var1);

   private static native int aUK(int var0, long var1);

   private static native Object aUI(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aUJ(Lookup var0, String var1, MethodType var2);

   private static native int aUL(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native CallSite aUM(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aUB(gH$th var1);

   private native void aUE();

   private static native MatchException aUF(MatchException var0);
}
