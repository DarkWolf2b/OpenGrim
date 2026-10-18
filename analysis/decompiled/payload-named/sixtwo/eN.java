package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.item.Item;
import net.minecraft.item.Items;

public class eN extends gg {
   private final ct RajOD;
   private final cu Mazxu;
   private final cu tjNtC;
   private final cu EifDU;
   private final cK AhcDq;
   private final cC PxteY;
   private final cA DrFpA;
   private final ol FtkJb;
   private static long XbCWq;
   private static String[] kVMtt;
   private static String[] LJDck;
   private static Map BYElC;
   private static long[] YKYNS;
   private static Integer[] fyuol;
   private static Map fmipS;

   public eN() {
      long var1 = XbCWq ^ 111760760039737L;
      super(gf.aZL(aBs<"b">(25874, 7877037415925913323L ^ var1), false, gh.xwjCw));
      this.RajOD = new ct(
         this,
         mr.clS(
            new int[]{
               aBs<"b">(15012, 3067613262546225482L ^ var1),
               aBs<"b">(8251, 3741396372190876635L ^ var1),
               aBs<"b">(7524, 515282956371488416L ^ var1),
               aBs<"b">(943, 7486648712511025255L ^ var1)
            }
         )
      );
      ct var10003 = this.RajOD;
      int[] var10004 = new int[aBs<"b">(24493, 1338958044082547814L ^ var1)];
      var10004[0] = aBs<"b">(9781, 2312428066045023717L ^ var1);
      var10004[1] = aBs<"b">(11936, 7407271688848235859L ^ var1);
      var10004[2] = aBs<"b">(31637, 2103305730736490561L ^ var1);
      var10004[3] = aBs<"b">(4996, 4330013836254568568L ^ var1);
      var10004[4] = aBs<"b">(24608, 8704091316484707310L ^ var1);
      var10004[5] = aBs<"b">(1703, 1587435129401767261L ^ var1);
      this.Mazxu = new cu(var10003, mr.clS(var10004));
      var10003 = this.RajOD;
      var10004 = new int[aBs<"b">(13775, 8116459039900288552L ^ var1)];
      var10004[0] = aBs<"b">(27857, 7566641201960918793L ^ var1);
      var10004[1] = aBs<"b">(21252, 6676051852011086053L ^ var1);
      var10004[2] = aBs<"b">(1196, 4297934031575512925L ^ var1);
      var10004[3] = aBs<"b">(25749, 2591128774934796139L ^ var1);
      var10004[4] = aBs<"b">(10253, 888774273430969317L ^ var1);
      var10004[5] = aBs<"b">(17947, 9010465517667464685L ^ var1);
      var10004[aBs<"b">(31666, 8508208052743178359L ^ var1)] = aBs<"b">(10149, 3186891075462255697L ^ var1);
      var10004[aBs<"b">(4510, 440066151859413580L ^ var1)] = aBs<"b">(30002, 818132935147423461L ^ var1);
      var10004[aBs<"b">(5459, 8855437691876337351L ^ var1)] = aBs<"b">(27729, 4937145168941784971L ^ var1);
      var10004[aBs<"b">(8965, 3890880952564699370L ^ var1)] = aBs<"b">(16744, 9180750169865073316L ^ var1);
      this.tjNtC = new cu(var10003, mr.clS(var10004));
      this.EifDU = new cu(
         this.RajOD,
         mr.clS(
            new int[]{
               aBs<"b">(4049, 3529263066990148620L ^ var1),
               aBs<"b">(31986, 6494552720467726130L ^ var1),
               aBs<"b">(20332, 1955372239702539415L ^ var1),
               aBs<"b">(30002, 818132935147423461L ^ var1),
               aBs<"b">(15861, 1594082202182733364L ^ var1)
            }
         )
      );
      var10004 = new int[aBs<"b">(27630, 1808887898807474198L ^ var1)];
      var10004[0] = aBs<"b">(30671, 5689986791036552237L ^ var1);
      var10004[1] = aBs<"b">(10785, 8626934959906642390L ^ var1);
      var10004[2] = aBs<"b">(14800, 6036375049266285107L ^ var1);
      var10004[3] = aBs<"b">(24280, 2177623170057121084L ^ var1);
      var10004[4] = aBs<"b">(27, 7760132852625404889L ^ var1);
      var10004[5] = aBs<"b">(31637, 2103305730736490561L ^ var1);
      var10004[aBs<"b">(31666, 8508208052743178359L ^ var1)] = aBs<"b">(25749, 2591128774934796139L ^ var1);
      var10004[aBs<"b">(9898, 1388120955374589249L ^ var1)] = aBs<"b">(28556, 5392482031702285433L ^ var1);
      var10004[aBs<"b">(2050, 95632237732068351L ^ var1)] = aBs<"b">(18455, 2153250388256734158L ^ var1);
      var10004[aBs<"b">(12571, 3941215852999295741L ^ var1)] = aBs<"b">(15861, 1594082202182733364L ^ var1);
      var10004[aBs<"b">(7610, 7906261696149876331L ^ var1)] = aBs<"b">(31637, 2103305730736490561L ^ var1);
      var10004[aBs<"b">(30355, 7491860213721105790L ^ var1)] = aBs<"b">(32001, 4599386324342214387L ^ var1);
      var10004[aBs<"b">(13214, 5786431979455103040L ^ var1)] = aBs<"b">(27729, 4937145168941784971L ^ var1);
      cK var10001 = new cK(this, mr.clS(var10004)).WM(jc.WnbNG);
      Item[] var10002 = new Item[aBs<"b">(31, 3718067645003592664L ^ var1)];
      var10002[0] = Items.WOODEN_SWORD;
      var10002[1] = Items.STONE_SWORD;
      var10002[2] = Items.IRON_SWORD;
      var10002[3] = Items.GOLDEN_SWORD;
      var10002[4] = Items.DIAMOND_SWORD;
      var10002[5] = Items.NETHERITE_SWORD;
      var10002[aBs<"b">(31666, 8508208052743178359L ^ var1)] = Items.WOODEN_AXE;
      var10002[aBs<"b">(9898, 1388120955374589249L ^ var1)] = Items.STONE_AXE;
      var10002[aBs<"b">(2050, 95632237732068351L ^ var1)] = Items.IRON_AXE;
      var10002[aBs<"b">(12571, 3941215852999295741L ^ var1)] = Items.GOLDEN_AXE;
      var10002[aBs<"b">(7610, 7906261696149876331L ^ var1)] = Items.DIAMOND_AXE;
      var10002[aBs<"b">(17073, 4699575098342748536L ^ var1)] = Items.NETHERITE_AXE;
      this.AhcDq = var10001.WN(var10002);
      var10004 = new int[aBs<"b">(23436, 7795189159861561423L ^ var1)];
      var10004[0] = aBs<"b">(22223, 7202456560519619866L ^ var1);
      var10004[1] = aBs<"b">(20274, 6544384804760567039L ^ var1);
      var10004[2] = aBs<"b">(28262, 6741256610812534176L ^ var1);
      var10004[3] = aBs<"b">(25749, 2591128774934796139L ^ var1);
      var10004[4] = aBs<"b">(89, 1540638471319942018L ^ var1);
      var10004[5] = aBs<"b">(19026, 1390779099981625741L ^ var1);
      var10004[aBs<"b">(31666, 8508208052743178359L ^ var1)] = aBs<"b">(30002, 818132935147423461L ^ var1);
      var10004[aBs<"b">(9898, 1388120955374589249L ^ var1)] = aBs<"b">(27729, 4937145168941784971L ^ var1);
      var10004[aBs<"b">(2050, 95632237732068351L ^ var1)] = aBs<"b">(15861, 1594082202182733364L ^ var1);
      var10004[aBs<"b">(12571, 3941215852999295741L ^ var1)] = aBs<"b">(28556, 5392482031702285433L ^ var1);
      var10004[aBs<"b">(7610, 7906261696149876331L ^ var1)] = aBs<"b">(14654, 5076267481343675095L ^ var1);
      var10004[aBs<"b">(17073, 4699575098342748536L ^ var1)] = aBs<"b">(15674, 6934390790000529093L ^ var1);
      var10004[aBs<"b">(31, 3718067645003592664L ^ var1)] = aBs<"b">(30002, 818132935147423461L ^ var1);
      var10004[aBs<"b">(19008, 2109996091015608723L ^ var1)] = aBs<"b">(31637, 2103305730736490561L ^ var1);
      var10004[aBs<"b">(14838, 1918030059502193194L ^ var1)] = aBs<"b">(27729, 4937145168941784971L ^ var1);
      var10004[aBs<"b">(28528, 8119102959111019711L ^ var1)] = aBs<"b">(15674, 6934390790000529093L ^ var1);
      var10004[aBs<"b">(23101, 5913780620431174103L ^ var1)] = aBs<"b">(24280, 2177623170057121084L ^ var1);
      var10004[aBs<"b">(507, 3669987502839755294L ^ var1)] = aBs<"b">(14800, 6036375049266285107L ^ var1);
      var10004[aBs<"b">(14884, 3268201304986077652L ^ var1)] = aBs<"b">(25749, 2591128774934796139L ^ var1);
      this.PxteY = new cC(this, mr.clS(var10004)).Vy(0.1).Vw(2.0).Vx(10.0).VA(3.0).Vz(aBp<"x">(28755, 4081552543420308901L ^ var1));
      var10004 = new int[aBs<"b">(31, 3718067645003592664L ^ var1)];
      var10004[0] = aBs<"b">(11283, 5742115502141595647L ^ var1);
      var10004[1] = aBs<"b">(31637, 2103305730736490561L ^ var1);
      var10004[2] = aBs<"b">(15861, 1594082202182733364L ^ var1);
      var10004[3] = aBs<"b">(19026, 1390779099981625741L ^ var1);
      var10004[4] = aBs<"b">(30002, 818132935147423461L ^ var1);
      var10004[5] = aBs<"b">(28262, 6741256610812534176L ^ var1);
      var10004[aBs<"b">(31666, 8508208052743178359L ^ var1)] = aBs<"b">(28556, 5392482031702285433L ^ var1);
      var10004[aBs<"b">(9898, 1388120955374589249L ^ var1)] = aBs<"b">(6931, 8112858603579566297L ^ var1);
      var10004[aBs<"b">(2050, 95632237732068351L ^ var1)] = aBs<"b">(31637, 2103305730736490561L ^ var1);
      var10004[aBs<"b">(12571, 3941215852999295741L ^ var1)] = aBs<"b">(14800, 6036375049266285107L ^ var1);
      var10004[aBs<"b">(7610, 7906261696149876331L ^ var1)] = aBs<"b">(20332, 1955372239702539415L ^ var1);
      var10004[aBs<"b">(17073, 4699575098342748536L ^ var1)] = aBs<"b">(3010, 5395457500986439700L ^ var1);
      this.DrFpA = new cA(this, mr.clS(var10004)).UG(10.0).UE(0.0).UF(1000.0).UI(50.0, 100.0).UH(aBp<"x">(7620, 8877085321627086899L ^ var1));
      this.FtkJb = new ol(this);
      this.PxteY.Vf(this.EifDU::SZ);
   }

   static {
      Loader.doInit(eN.class);
      _a2ae88b8ecae0335771ea0ef54ae6d18();
   }

   private static native void _a2ae88b8ecae0335771ea0ef54ae6d18();

   private static native CallSite aBp(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aBb(gH$th var1);

   private static native CallSite aBs(Lookup var0, String var1, MethodType var2);

   public native cA aBj();

   public native cC aBi();

   public native cu aBf();

   @hG(
      priority = mw.LOW
   )
   public native void aBc(hw$tv var1);

   public native cu aBg();

   private static native int aBr(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native Object aBo(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   public native ol aBk();

   private static native MatchException aBl(MatchException var0);

   public native ct aBd();

   public native cu aBe();

   public native cK aBh();

   private static native int aBq(int var0, long var1);

   private static native String aBm(byte[] var0);

   private static native String aBn(int var0, long var1);

   @Override
   public native void YO();
}
