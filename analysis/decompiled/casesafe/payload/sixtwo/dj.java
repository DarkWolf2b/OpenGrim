package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2246;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_238;
import net.minecraft.class_2382;
import net.minecraft.class_243;
import net.minecraft.class_287;
import net.minecraft.class_4587;
import org.joml.Matrix4f;

public class dj extends gg implements lG {
   private final ct jybpu;
   private final cu lvORN;
   private final cu qEqID;
   private final cC LEzwX;
   private final cC uQNEX;
   private final cJ ZnfqN;
   private final cC TYsOV;
   private final cJ ObAdu;
   private final cJ AMAdS;
   private final cJ vupnD;
   private final cJ NUWIx;
   private final cJ iKDmr;
   private final cJ oBPYh;
   private final cG JMRnw;
   private final cG QfgSU;
   private final cG vJCDp;
   private final cG JaDoR;
   private final Map<dj$sE, rk> Dpuot;
   private List<dj$sE> soBDJ;
   private static final Comparator<class_2338> cMEtP;
   private static final long UFHNj = gb.aYR(-443646992908327867L, 3685075153996180774L, MethodHandles.lookup().lookupClass()).a(36593284610269L);
   private static final String[] vaAsg;
   private static final String[] NFauy;
   private static final Map XZCIf = new HashMap(13);
   private static final long[] CvhLh;
   private static final Integer[] gUpUM;
   private static final Map HQhKx;

   public dj() {
      long var1 = UFHNj ^ 71136239241171L;
      super(gf.aZL(agu<"w">(25501, 7432751089570728639L ^ var1), false, gh.nOCvV));
      this.jybpu = new ct(
            this,
            mr.clS(
               new int[]{
                  agu<"w">(12901, 727327289466886999L ^ var1),
                  agu<"w">(25198, 4148449357431622515L ^ var1),
                  agu<"w">(10912, 3593857027986031539L ^ var1),
                  agu<"w">(855, 657098553713044000L ^ var1)
               }
            )
         )
         .SO(0);
      this.lvORN = new cu(
         this.jybpu,
         mr.clS(
            new int[]{
               agu<"w">(12532, 8246633027296303555L ^ var1),
               agu<"w">(2806, 8174050877635863498L ^ var1),
               agu<"w">(27516, 1249550728808514148L ^ var1),
               agu<"w">(28645, 7143747350005958355L ^ var1),
               agu<"w">(5368, 7036774010169343365L ^ var1)
            }
         )
      );
      this.qEqID = new cu(
         this.jybpu,
         mr.clS(
            new int[]{
               agu<"w">(22644, 4739560951029559646L ^ var1),
               agu<"w">(26894, 6081695594468327462L ^ var1),
               agu<"w">(28857, 5731760105081952641L ^ var1),
               agu<"w">(28645, 7143747350005958355L ^ var1)
            }
         )
      );
      this.LEzwX = new cC(
            this,
            mr.clS(
               new int[]{
                  agu<"w">(15353, 6615077134553158371L ^ var1),
                  agu<"w">(20132, 433875510480529309L ^ var1),
                  agu<"w">(31978, 3598880715386770884L ^ var1),
                  agu<"w">(2836, 7436543199554740785L ^ var1),
                  agu<"w">(28645, 7143747350005958355L ^ var1)
               }
            )
         )
         .Vy(0.5)
         .Vw(3.0)
         .Vx(25.0)
         .VA(5.0)
         .Vz(agr<"v">(19651, 4213405681618386983L ^ var1));
      int[] var10004 = new int[agu<"w">(10302, 9134895452746481968L ^ var1)];
      var10004[0] = agu<"w">(23111, 1765500567540069212L ^ var1);
      var10004[1] = agu<"w">(20132, 433875510480529309L ^ var1);
      var10004[2] = agu<"w">(7277, 8071527485248746854L ^ var1);
      var10004[3] = agu<"w">(12286, 7659329624870717159L ^ var1);
      var10004[4] = agu<"w">(28645, 7143747350005958355L ^ var1);
      var10004[5] = agu<"w">(25057, 1797375711308728469L ^ var1);
      var10004[agu<"w">(27777, 4109450016208962994L ^ var1)] = agu<"w">(12717, 731841849608083671L ^ var1);
      this.uQNEX = new cC(this, mr.clS(var10004)).Vy(0.5).Vw(0.0).Vx(16.0).VA(3.0).Vz(agr<"v">(24181, 5298833766423597712L ^ var1));
      var10004 = new int[agu<"w">(12502, 2408394499889043892L ^ var1)];
      var10004[0] = agu<"w">(6923, 6534810108274061855L ^ var1);
      var10004[1] = agu<"w">(21764, 1080834790626294897L ^ var1);
      var10004[2] = agu<"w">(8166, 8022386187849610982L ^ var1);
      var10004[3] = agu<"w">(993, 8332152064673983178L ^ var1);
      var10004[4] = agu<"w">(6242, 6024393834655428964L ^ var1);
      var10004[5] = agu<"w">(7277, 8071527485248746854L ^ var1);
      var10004[agu<"w">(11648, 3646261768302232719L ^ var1)] = agu<"w">(28645, 7143747350005958355L ^ var1);
      this.ZnfqN = new cJ(this, mr.clS(var10004)).WE(true);
      this.TYsOV = new cC(
            this,
            mr.clS(
               new int[]{
                  agu<"w">(11246, 6744056809161261790L ^ var1),
                  agu<"w">(20734, 5017029012363672034L ^ var1),
                  agu<"w">(14073, 4482525448650399623L ^ var1),
                  agu<"w">(28645, 7143747350005958355L ^ var1)
               }
            )
         )
         .Vy(0.01)
         .Vw(-1.0)
         .Vx(1.0)
         .VA(1.0);
      var10004 = new int[agu<"w">(7620, 306964945857721539L ^ var1)];
      var10004[0] = agu<"w">(511, 6879831626809321674L ^ var1);
      var10004[1] = agu<"w">(12286, 7659329624870717159L ^ var1);
      var10004[2] = agu<"w">(7277, 8071527485248746854L ^ var1);
      var10004[3] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[4] = agu<"w">(23566, 582881780059731245L ^ var1);
      var10004[5] = agu<"w">(28645, 7143747350005958355L ^ var1);
      var10004[agu<"w">(11648, 3646261768302232719L ^ var1)] = agu<"w">(12557, 3632488588594354204L ^ var1);
      var10004[agu<"w">(12502, 2408394499889043892L ^ var1)] = agu<"w">(18025, 2397200555321454354L ^ var1);
      var10004[agu<"w">(27474, 5550411245990330915L ^ var1)] = agu<"w">(28645, 7143747350005958355L ^ var1);
      var10004[agu<"w">(6470, 14322621451087934L ^ var1)] = agu<"w">(30662, 4292867843381583540L ^ var1);
      var10004[agu<"w">(1551, 2444193185465249589L ^ var1)] = agu<"w">(18365, 8593704310333173470L ^ var1);
      this.ObAdu = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[agu<"w">(30587, 2619876509720534623L ^ var1)];
      var10004[0] = agu<"w">(17261, 2650239815946136175L ^ var1);
      var10004[1] = agu<"w">(30173, 6795150201063726321L ^ var1);
      var10004[2] = agu<"w">(19154, 8256234890800915392L ^ var1);
      var10004[3] = agu<"w">(20734, 5017029012363672034L ^ var1);
      var10004[4] = agu<"w">(28857, 5731760105081952641L ^ var1);
      var10004[5] = agu<"w">(20734, 5017029012363672034L ^ var1);
      var10004[agu<"w">(11648, 3646261768302232719L ^ var1)] = agu<"w">(20132, 433875510480529309L ^ var1);
      var10004[agu<"w">(12502, 2408394499889043892L ^ var1)] = agu<"w">(7277, 8071527485248746854L ^ var1);
      this.AMAdS = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[agu<"w">(9964, 6079138152400818069L ^ var1)];
      var10004[0] = agu<"w">(17261, 2650239815946136175L ^ var1);
      var10004[1] = agu<"w">(28772, 5582686414763055440L ^ var1);
      var10004[2] = agu<"w">(19154, 8256234890800915392L ^ var1);
      var10004[3] = agu<"w">(20734, 5017029012363672034L ^ var1);
      var10004[4] = agu<"w">(28857, 5731760105081952641L ^ var1);
      var10004[5] = agu<"w">(20734, 5017029012363672034L ^ var1);
      var10004[agu<"w">(11648, 3646261768302232719L ^ var1)] = agu<"w">(20132, 433875510480529309L ^ var1);
      var10004[agu<"w">(12502, 2408394499889043892L ^ var1)] = agu<"w">(7277, 8071527485248746854L ^ var1);
      var10004[agu<"w">(30587, 2619876509720534623L ^ var1)] = agu<"w">(23506, 6131835011428086509L ^ var1);
      var10004[agu<"w">(22778, 5921402673127780827L ^ var1)] = agu<"w">(24366, 6294285569797256749L ^ var1);
      var10004[agu<"w">(5195, 7610202780803251515L ^ var1)] = agu<"w">(28645, 7143747350005958355L ^ var1);
      var10004[agu<"w">(23934, 860571666064766066L ^ var1)] = agu<"w">(28857, 5731760105081952641L ^ var1);
      var10004[agu<"w">(11112, 7866579566329365001L ^ var1)] = agu<"w">(21356, 649654030289074762L ^ var1);
      var10004[agu<"w">(11882, 3094345765420369676L ^ var1)] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[agu<"w">(3901, 6132868052529391116L ^ var1)] = agu<"w">(32554, 1684969842127951420L ^ var1);
      var10004[agu<"w">(23000, 198783909403422933L ^ var1)] = agu<"w">(29129, 2900470110679161054L ^ var1);
      this.vupnD = new cJ(this, mr.clS(var10004)).WE(true);
      var10004 = new int[agu<"w">(11648, 3646261768302232719L ^ var1)];
      var10004[0] = agu<"w">(20807, 4723710651552725074L ^ var1);
      var10004[1] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[2] = agu<"w">(1633, 2235623145722720101L ^ var1);
      var10004[3] = agu<"w">(28772, 5582686414763055440L ^ var1);
      var10004[4] = agu<"w">(30662, 4292867843381583540L ^ var1);
      var10004[5] = agu<"w">(28645, 7143747350005958355L ^ var1);
      this.NUWIx = new cJ(this, mr.clS(var10004)).WE(false);
      this.iKDmr = new cJ(
            this,
            mr.clS(
               new int[]{
                  agu<"w">(16055, 2579432672975984524L ^ var1),
                  agu<"w">(1633, 2235623145722720101L ^ var1),
                  agu<"w">(20132, 433875510480529309L ^ var1),
                  agu<"w">(28857, 5731760105081952641L ^ var1)
               }
            )
         )
         .WE(false);
      this.oBPYh = new cJ(
            this,
            mr.clS(
               new int[]{
                  agu<"w">(10679, 7119070451255607486L ^ var1),
                  agu<"w">(2806, 8174050877635863498L ^ var1),
                  agu<"w">(20734, 5017029012363672034L ^ var1),
                  agu<"w">(28857, 5731760105081952641L ^ var1)
               }
            )
         )
         .WE(false);
      var10004 = new int[agu<"w">(6926, 792308127418364529L ^ var1)];
      var10004[0] = agu<"w">(17261, 2650239815946136175L ^ var1);
      var10004[1] = agu<"w">(28772, 5582686414763055440L ^ var1);
      var10004[2] = agu<"w">(19154, 8256234890800915392L ^ var1);
      var10004[3] = agu<"w">(20734, 5017029012363672034L ^ var1);
      var10004[4] = agu<"w">(28857, 5731760105081952641L ^ var1);
      var10004[5] = agu<"w">(20734, 5017029012363672034L ^ var1);
      var10004[agu<"w">(11648, 3646261768302232719L ^ var1)] = agu<"w">(20132, 433875510480529309L ^ var1);
      var10004[agu<"w">(12502, 2408394499889043892L ^ var1)] = agu<"w">(7277, 8071527485248746854L ^ var1);
      var10004[agu<"w">(30587, 2619876509720534623L ^ var1)] = agu<"w">(12557, 3632488588594354204L ^ var1);
      var10004[agu<"w">(22778, 5921402673127780827L ^ var1)] = agu<"w">(30382, 3726504157986512815L ^ var1);
      var10004[agu<"w">(5195, 7610202780803251515L ^ var1)] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[agu<"w">(23934, 860571666064766066L ^ var1)] = agu<"w">(30662, 4292867843381583540L ^ var1);
      var10004[agu<"w">(23182, 367210741001188257L ^ var1)] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[agu<"w">(24322, 8963433858539746844L ^ var1)] = agu<"w">(21356, 649654030289074762L ^ var1);
      this.JMRnw = new cG(this, mr.clS(var10004)).Uf(mG.cnR(255.0F, 0.0F, 0.0F, 80.0F)).Vf(this.AMAdS::WF);
      var10004 = new int[agu<"w">(30237, 4587831577289809685L ^ var1)];
      var10004[0] = agu<"w">(17261, 2650239815946136175L ^ var1);
      var10004[1] = agu<"w">(28772, 5582686414763055440L ^ var1);
      var10004[2] = agu<"w">(19154, 8256234890800915392L ^ var1);
      var10004[3] = agu<"w">(20734, 5017029012363672034L ^ var1);
      var10004[4] = agu<"w">(28857, 5731760105081952641L ^ var1);
      var10004[5] = agu<"w">(20734, 5017029012363672034L ^ var1);
      var10004[agu<"w">(11648, 3646261768302232719L ^ var1)] = agu<"w">(20132, 433875510480529309L ^ var1);
      var10004[agu<"w">(12502, 2408394499889043892L ^ var1)] = agu<"w">(7277, 8071527485248746854L ^ var1);
      var10004[agu<"w">(30587, 2619876509720534623L ^ var1)] = agu<"w">(1938, 5652056826853535383L ^ var1);
      var10004[agu<"w">(22778, 5921402673127780827L ^ var1)] = agu<"w">(24366, 6294285569797256749L ^ var1);
      var10004[agu<"w">(5195, 7610202780803251515L ^ var1)] = agu<"w">(28645, 7143747350005958355L ^ var1);
      var10004[agu<"w">(23934, 860571666064766066L ^ var1)] = agu<"w">(28857, 5731760105081952641L ^ var1);
      var10004[agu<"w">(23182, 367210741001188257L ^ var1)] = agu<"w">(21356, 649654030289074762L ^ var1);
      var10004[agu<"w">(24322, 8963433858539746844L ^ var1)] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[agu<"w">(6926, 792308127418364529L ^ var1)] = agu<"w">(1892, 3904696804817776146L ^ var1);
      var10004[agu<"w">(25109, 3786019105784417141L ^ var1)] = agu<"w">(20081, 7597053066034866001L ^ var1);
      var10004[agu<"w">(29385, 1785781227640019893L ^ var1)] = agu<"w">(12557, 3632488588594354204L ^ var1);
      var10004[agu<"w">(21114, 3500494556230056791L ^ var1)] = agu<"w">(30037, 7290314217434012741L ^ var1);
      var10004[agu<"w">(30913, 1061689838136054246L ^ var1)] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[agu<"w">(9147, 5338999005594389126L ^ var1)] = agu<"w">(30662, 4292867843381583540L ^ var1);
      var10004[agu<"w">(24857, 666000236399446055L ^ var1)] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[agu<"w">(22940, 6540862202137669871L ^ var1)] = agu<"w">(21356, 649654030289074762L ^ var1);
      this.QfgSU = new cG(this, mr.clS(var10004)).Uf(mG.cnR(255.0F, 255.0F, 0.0F, 80.0F)).Vf(this.vupnD::WF);
      var10004 = new int[agu<"w">(24322, 8963433858539746844L ^ var1)];
      var10004[0] = agu<"w">(24366, 6294285569797256749L ^ var1);
      var10004[1] = agu<"w">(28645, 7143747350005958355L ^ var1);
      var10004[2] = agu<"w">(28857, 5731760105081952641L ^ var1);
      var10004[3] = agu<"w">(21356, 649654030289074762L ^ var1);
      var10004[4] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[5] = agu<"w">(1892, 3904696804817776146L ^ var1);
      var10004[agu<"w">(11648, 3646261768302232719L ^ var1)] = agu<"w">(20081, 7597053066034866001L ^ var1);
      var10004[agu<"w">(12502, 2408394499889043892L ^ var1)] = agu<"w">(12557, 3632488588594354204L ^ var1);
      var10004[agu<"w">(30587, 2619876509720534623L ^ var1)] = agu<"w">(30037, 7290314217434012741L ^ var1);
      var10004[agu<"w">(22778, 5921402673127780827L ^ var1)] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[agu<"w">(5195, 7610202780803251515L ^ var1)] = agu<"w">(30662, 4292867843381583540L ^ var1);
      var10004[agu<"w">(23934, 860571666064766066L ^ var1)] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[agu<"w">(23182, 367210741001188257L ^ var1)] = agu<"w">(21356, 649654030289074762L ^ var1);
      this.vJCDp = new cG(this, mr.clS(var10004)).Uf(mG.cnR(0.0F, 255.0F, 0.0F, 80.0F));
      var10004 = new int[agu<"w">(5195, 7610202780803251515L ^ var1)];
      var10004[0] = agu<"w">(6929, 3858015460068078136L ^ var1);
      var10004[1] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[2] = agu<"w">(20734, 5017029012363672034L ^ var1);
      var10004[3] = agu<"w">(28857, 5731760105081952641L ^ var1);
      var10004[4] = agu<"w">(12557, 3632488588594354204L ^ var1);
      var10004[5] = agu<"w">(30037, 7290314217434012741L ^ var1);
      var10004[agu<"w">(11648, 3646261768302232719L ^ var1)] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[agu<"w">(12502, 2408394499889043892L ^ var1)] = agu<"w">(30662, 4292867843381583540L ^ var1);
      var10004[agu<"w">(30587, 2619876509720534623L ^ var1)] = agu<"w">(2806, 8174050877635863498L ^ var1);
      var10004[agu<"w">(22778, 5921402673127780827L ^ var1)] = agu<"w">(21356, 649654030289074762L ^ var1);
      this.JaDoR = new cG(this, mr.clS(var10004)).Uf(mG.cnR(255.0F, 0.0F, 0.0F, 140.0F)).Vf(this.oBPYh::WF);
      this.Dpuot = new HashMap<>();
      this.soBDJ = new ArrayList<>();
   }

   static {
      long var11 = UFHNj ^ 27466238224920L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      String[] var20 = new String[2];
      int var18 = 0;
      String var17 = "├Ę├ĺm├ç┬│o{\u001f├Á┬Ş├ş\u007f├ł\u001dn\u001e\u0010z├┤├Ę\u0014├ę.a\u001c├╗\u0087├ôB┬Č├Ťi├Ľ";
      int var19 = "├Ę├ĺm├ç┬│o{\u001f├Á┬Ş├ş\u007f├ł\u001dn\u001e\u0010z├┤├Ę\u0014├ę.a\u001c├╗\u0087├ôB┬Č├Ťi├Ľ".length();
      char var16 = 16;
      int var15 = -1;

      while (true) {
         byte[] var21 = var13.doFinal(var17.substring(++var15, var15 + var16).getBytes("ISO-8859-1"));
         String var30 = ago(var21).intern();
         int var10001 = -1;
         var20[var18++] = var30;
         if ((var15 += var16) >= var19) {
            vaAsg = var20;
            NFauy = new String[2];
            HQhKx = new HashMap(13);
            Cipher var0;
            var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
            var10002 = SecretKeyFactory.getInstance("DES");
            var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

            for (int var1 = 1; var1 < 8; var1++) {
               var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
            }

            var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
            long[] var6 = new long[85];
            int var3 = 0;
            String var4 = "├Ťd\u0087├ć├ę\u0092├»├ämr\u008bO\u0003f├ú\u008fs├ć\u008c├»\u00ad\u0099\u0092├┤\u009c;,\u0000\u009czG1\u008b\u0097├ľA\u0088┬Ę├¬H\u0085┬ž├ąd├ôj\u0088┬Č├ů\u007f2├ľ┬┤├║Y├ş\u0084\u0086├ĺ\u00984\u0086\u0018\u009dR├śHk┬╗|\u0092.┬ž┬»Y$(`├á┬░├č2t\u0081#@x┬║├üd├║!X┬ę├î\u008e\u0097┬ąS├ů\b#┬╣├ś\u009a\u0097├▒├┐\u008f├á\u008f┬«┬Ą.├ć\u001e┬║\u007fn1j├ťK\u0013\u000f\u0004├ŚEIY#A├Ę├Č\u0094X6\u0004PNu\u001d\u0007\r\u00815mx├Ö├ä\u0010├ů├ž$├ś\u0099m\u0015N4W\u009c\u0002z┬░\u000f├źa├Â┬¬]├╣_┬źB\u0004\bTc├Ć\u0096\u0090+Q├î├Ą\u007f\u0019├Ěr\u0013*├║├Ár?\u000f6\u0089#l\f\u0018┬í\u0087\u001d%├ž\u009d\u0012|O┬Č┬║R├»o┬á\n┬Ęr┬Á\u008d├ĽK┬▒\u0096m\u0098\u008d├ëa\u0017\u001d\u0093├Çd├â├ż4\u0098\u001e┬╝\u0015├│├ü\u0090\u008e\u0000@\u009c\u0080├ë\u001a\u00051├â├Ü\u001et\u0004 \u009b├ŤC\u009f\u0007├ž┬▓┬¬├í├│├Ąx├í┬Â┬Ş<\u0007_├ë├Á\u0005\u0001f├ëPxN\u0001vN┬Ęf├ł'├é\u0092u┬▒\\┬¬├ęUg┬Şi┬Č>\u009eR\u001eX├ľ├│z┬╝J\u0000T┬ź┬╗1┬╣├ž┬╗f┬í├ś├Ü7├»\u0088├äw├Č├░F├Ę┬╗├Ą├Ě\u0003\u0011u\u0089]K\u0004┬▓>2\u0007\u001c┬│K├ľJ\u0000r┬┐^\u0010t┬Ę\u0002├»\b\u009fB├╝\u0095\u0090V┬Č┬╣├»v├ç├ĆNlp2|├ç\u001b├Ť!├ž|├Â\u0011\u0012gu├ó\u0085\u0095k\u0086├╗\u0016-├╣\u0004\u0081=\u00834\u008a\u0084┬ž%├Ęq\u009egX├őq├ĺ\u0010┬Ą7u\u0010\u0006\u000e9\u008e\u007f\u0085\u0017P-├ž\u0080┬Ž)├»├á\u009a2├ů├ü┬╗├ť\u008e┬Â┬ĚO9├ą├Á├Ş┬▒\u000f┬Ą&\u0004K├á├░├ó┬áH\u0088\u0016┬íF├îf├öh├ć\u0003>|├çQL]┬á\u001e├╗ac3├Ç&├┐\u0018L┬ĄB*├«V├Čs├ćo[\u0017┬ź8\u000f┬»├Ĺ\\8\u0001\b\\├Ć┬▓┬Á\u00880/\u0086?\u00151├Âi├Á├ć_├×┬Â├śj┬ą\u008b├â┬Ę^├ó├Ő┬»├Ż\u0019┬«├░\u0014>\u000f\u0002\r\u0093#\u009e├Č3\u008e\u0015oyP\u0091├ó├╝┬Â\u0013ZA\u008e\u008b├ź┬»\u0096;├»├Ş\u0014\u0011\u0005H\u0093\u0098┬Ş┬Â┬Ş├é├ş├┐5T\u0084┬ź^\u0085\u001f├ë├ÁM\u0089├┐\u0098├░├í├»├Â\n\\\u0092├┐cQV\u0011\u0094┬ž├ü├ć\u0083├┤┬źv\u007f├Ĺl┬ó├Ć\u0081├ÄE:\u0090┬ŻJ\u008b\u007f├░e\u001a\u009a^\u0094J\u0093P\u007f\u0000├Ż┬Č├Őf:W├Ź├Ź9b┬ę;G├Ť├×├┤┬ą=";
            int var5 = "├Ťd\u0087├ć├ę\u0092├»├ämr\u008bO\u0003f├ú\u008fs├ć\u008c├»\u00ad\u0099\u0092├┤\u009c;,\u0000\u009czG1\u008b\u0097├ľA\u0088┬Ę├¬H\u0085┬ž├ąd├ôj\u0088┬Č├ů\u007f2├ľ┬┤├║Y├ş\u0084\u0086├ĺ\u00984\u0086\u0018\u009dR├śHk┬╗|\u0092.┬ž┬»Y$(`├á┬░├č2t\u0081#@x┬║├üd├║!X┬ę├î\u008e\u0097┬ąS├ů\b#┬╣├ś\u009a\u0097├▒├┐\u008f├á\u008f┬«┬Ą.├ć\u001e┬║\u007fn1j├ťK\u0013\u000f\u0004├ŚEIY#A├Ę├Č\u0094X6\u0004PNu\u001d\u0007\r\u00815mx├Ö├ä\u0010├ů├ž$├ś\u0099m\u0015N4W\u009c\u0002z┬░\u000f├źa├Â┬¬]├╣_┬źB\u0004\bTc├Ć\u0096\u0090+Q├î├Ą\u007f\u0019├Ěr\u0013*├║├Ár?\u000f6\u0089#l\f\u0018┬í\u0087\u001d%├ž\u009d\u0012|O┬Č┬║R├»o┬á\n┬Ęr┬Á\u008d├ĽK┬▒\u0096m\u0098\u008d├ëa\u0017\u001d\u0093├Çd├â├ż4\u0098\u001e┬╝\u0015├│├ü\u0090\u008e\u0000@\u009c\u0080├ë\u001a\u00051├â├Ü\u001et\u0004 \u009b├ŤC\u009f\u0007├ž┬▓┬¬├í├│├Ąx├í┬Â┬Ş<\u0007_├ë├Á\u0005\u0001f├ëPxN\u0001vN┬Ęf├ł'├é\u0092u┬▒\\┬¬├ęUg┬Şi┬Č>\u009eR\u001eX├ľ├│z┬╝J\u0000T┬ź┬╗1┬╣├ž┬╗f┬í├ś├Ü7├»\u0088├äw├Č├░F├Ę┬╗├Ą├Ě\u0003\u0011u\u0089]K\u0004┬▓>2\u0007\u001c┬│K├ľJ\u0000r┬┐^\u0010t┬Ę\u0002├»\b\u009fB├╝\u0095\u0090V┬Č┬╣├»v├ç├ĆNlp2|├ç\u001b├Ť!├ž|├Â\u0011\u0012gu├ó\u0085\u0095k\u0086├╗\u0016-├╣\u0004\u0081=\u00834\u008a\u0084┬ž%├Ęq\u009egX├őq├ĺ\u0010┬Ą7u\u0010\u0006\u000e9\u008e\u007f\u0085\u0017P-├ž\u0080┬Ž)├»├á\u009a2├ů├ü┬╗├ť\u008e┬Â┬ĚO9├ą├Á├Ş┬▒\u000f┬Ą&\u0004K├á├░├ó┬áH\u0088\u0016┬íF├îf├öh├ć\u0003>|├çQL]┬á\u001e├╗ac3├Ç&├┐\u0018L┬ĄB*├«V├Čs├ćo[\u0017┬ź8\u000f┬»├Ĺ\\8\u0001\b\\├Ć┬▓┬Á\u00880/\u0086?\u00151├Âi├Á├ć_├×┬Â├śj┬ą\u008b├â┬Ę^├ó├Ő┬»├Ż\u0019┬«├░\u0014>\u000f\u0002\r\u0093#\u009e├Č3\u008e\u0015oyP\u0091├ó├╝┬Â\u0013ZA\u008e\u008b├ź┬»\u0096;├»├Ş\u0014\u0011\u0005H\u0093\u0098┬Ş┬Â┬Ş├é├ş├┐5T\u0084┬ź^\u0085\u001f├ë├ÁM\u0089├┐\u0098├░├í├»├Â\n\\\u0092├┐cQV\u0011\u0094┬ž├ü├ć\u0083├┤┬źv\u007f├Ĺl┬ó├Ć\u0081├ÄE:\u0090┬ŻJ\u008b\u007f├░e\u001a\u009a^\u0094J\u0093P\u007f\u0000├Ż┬Č├Őf:W├Ź├Ź9b┬ę;G├Ť├×├┤┬ą="
               .length();
            byte var2 = 0;

            label32:
            while (true) {
               var10001 = var2;
               var2 += 8;
               byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
               long[] var25 = var6;
               var10001 = var3++;
               long var33 = (var7[0] & 255L) << 56
                  | (var7[1] & 255L) << 48
                  | (var7[2] & 255L) << 40
                  | (var7[3] & 255L) << 32
                  | (var7[4] & 255L) << 24
                  | (var7[5] & 255L) << 16
                  | (var7[6] & 255L) << 8
                  | var7[7] & 255L;
               byte var36 = -1;

               while (true) {
                  long var8 = var33;
                  byte[] var10 = var0.doFinal(
                     new byte[]{
                        (byte)(var8 >>> 56),
                        (byte)(var8 >>> 48),
                        (byte)(var8 >>> 40),
                        (byte)(var8 >>> 32),
                        (byte)(var8 >>> 24),
                        (byte)(var8 >>> 16),
                        (byte)(var8 >>> 8),
                        (byte)var8
                     }
                  );
                  long var38 = (var10[0] & 255L) << 56
                     | (var10[1] & 255L) << 48
                     | (var10[2] & 255L) << 40
                     | (var10[3] & 255L) << 32
                     | (var10[4] & 255L) << 24
                     | (var10[5] & 255L) << 16
                     | (var10[6] & 255L) << 8
                     | var10[7] & 255L;
                  switch (var36) {
                     case 0:
                        var25[var10001] = var38;
                        if (var2 >= var5) {
                           CvhLh = var6;
                           gUpUM = new Integer[85];
                           cMEtP = Comparator.<class_2338>comparingInt(var0x -> var0x.method_10263())
                              .thenComparingInt(class_2382::method_10264)
                              .thenComparingInt(class_2382::method_10260);
                           return;
                        }
                        break;
                     default:
                        var25[var10001] = var38;
                        if (var2 < var5) {
                           continue label32;
                        }

                        var4 = "\u001f├░;\u0010U├╗├¬\u009e\f\u0013\u0096\u001e\u008cF├Ĺ\n";
                        var5 = "\u001f├░;\u0010U├╗├¬\u009e\f\u0013\u0096\u001e\u008cF├Ĺ\n".length();
                        var2 = 0;
                  }

                  byte var29 = var2;
                  var2 += 8;
                  var7 = var4.substring(var29, var2).getBytes("ISO-8859-1");
                  var25 = var6;
                  var10001 = var3++;
                  var33 = (var7[0] & 255L) << 56
                     | (var7[1] & 255L) << 48
                     | (var7[2] & 255L) << 40
                     | (var7[3] & 255L) << 32
                     | (var7[4] & 255L) << 24
                     | (var7[5] & 255L) << 16
                     | (var7[6] & 255L) << 8
                     | var7[7] & 255L;
                  var36 = 0;
               }
            }
         }

         var16 = var17.charAt(var15);
      }
   }

   private static String agp(int var0, long var1) {
      int var5 = var0 ^ (int)(var1 & 32767L) ^ 20351;
      if (NFauy[var5] == null) {
         Object[] var4;
         try {
            Long var3 = Thread.currentThread().threadId();
            var4 = (Object[])XZCIf.get(var3);
            if (var4 == null) {
               var4 = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               XZCIf.put(var3, var4);
            }
         } catch (Exception var10) {
            throw new RuntimeException("sixtwo/dj", var10);
         }

         byte[] var6 = new byte[8];
         var6[0] = (byte)(var1 >>> 56);

         for (int var7 = 1; var7 < 8; var7++) {
            var6[var7] = (byte)(var1 << var7 * 8 >>> 56);
         }

         DESKeySpec var11 = new DESKeySpec(var6);
         SecretKey var8 = ((SecretKeyFactory)var4[1]).generateSecret(var11);
         ((Cipher)var4[0]).init(2, var8, (IvParameterSpec)var4[2]);
         byte[] var9 = vaAsg[var5].getBytes("ISO-8859-1");
         NFauy[var5] = ago(((Cipher)var4[0]).doFinal(var9));
      }

      return NFauy[var5];
   }

   private void age(class_4587 param1, class_243 param2, List<dj$sB> param3) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dj.UFHNj J
      // 003: ldc2_w 113673690013170
      // 006: lxor
      // 007: lstore 4
      // 009: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00c: aload 1
      // 00d: invokevirtual net/minecraft/class_4587.method_23760 ()Lnet/minecraft/class_4587$class_4665;
      // 010: invokevirtual net/minecraft/class_4587$class_4665.method_23761 ()Lorg/joml/Matrix4f;
      // 013: astore 7
      // 015: astore 6
      // 017: new net/minecraft/class_9799
      // 01a: dup
      // 01b: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 01e: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 021: aload 3
      // 022: invokeinterface java/util/List.size ()I 1
      // 027: imul
      // 028: sipush 29385
      // 02b: ldc2_w 1785810570950721940
      // 02e: lload 4
      // 030: lxor
      // 031: invokedynamic w (IJ)I bsm=sixtwo/dj.agu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 036: imul
      // 037: invokespecial net/minecraft/class_9799.<init> (I)V
      // 03a: astore 8
      // 03c: new net/minecraft/class_287
      // 03f: dup
      // 040: aload 8
      // 042: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 045: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 048: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 04b: astore 9
      // 04d: aload 3
      // 04e: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 053: astore 10
      // 055: aload 10
      // 057: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 05c: ifeq 15f
      // 05f: aload 10
      // 061: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 066: checkcast sixtwo/dj$sB
      // 069: astore 11
      // 06b: aload 11
      // 06d: invokevirtual sixtwo/dj$sB.hole ()Lsixtwo/dj$sE;
      // 070: aload 0
      // 071: getfield sixtwo/dj.TYsOV Lsixtwo/cC;
      // 074: invokevirtual sixtwo/cC.VI ()D
      // 077: invokevirtual sixtwo/dj$sE.toBox (D)Lnet/minecraft/class_238;
      // 07a: aload 2
      // 07b: invokevirtual net/minecraft/class_238.method_997 (Lnet/minecraft/class_243;)Lnet/minecraft/class_238;
      // 07e: astore 12
      // 080: aload 0
      // 081: aload 11
      // 083: invokevirtual sixtwo/dj$sB.hole ()Lsixtwo/dj$sE;
      // 086: invokevirtual sixtwo/dj$sE.safety ()Lsixtwo/dj$sD;
      // 089: invokevirtual sixtwo/dj.agl (Lsixtwo/dj$sD;)Lsixtwo/mG;
      // 08c: astore 13
      // 08e: aload 11
      // 090: invokevirtual sixtwo/dj$sB.fadeFactor ()F
      // 093: fstore 14
      // 095: aload 13
      // 097: fload 14
      // 099: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 09c: astore 15
      // 09e: aload 15
      // 0a0: fconst_0
      // 0a1: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 0a4: astore 16
      // 0a6: aload 0
      // 0a7: aload 9
      // 0a9: aload 7
      // 0ab: aload 12
      // 0ad: getfield net/minecraft/class_238.field_1323 D
      // 0b0: aload 12
      // 0b2: getfield net/minecraft/class_238.field_1322 D
      // 0b5: aload 12
      // 0b7: getfield net/minecraft/class_238.field_1321 D
      // 0ba: aload 12
      // 0bc: getfield net/minecraft/class_238.field_1320 D
      // 0bf: aload 12
      // 0c1: getfield net/minecraft/class_238.field_1325 D
      // 0c4: aload 12
      // 0c6: getfield net/minecraft/class_238.field_1321 D
      // 0c9: aload 15
      // 0cb: aload 16
      // 0cd: invokevirtual sixtwo/dj.agg (Lnet/minecraft/class_287;Lorg/joml/Matrix4f;DDDDDDLsixtwo/mG;Lsixtwo/mG;)V
      // 0d0: aload 0
      // 0d1: aload 9
      // 0d3: aload 7
      // 0d5: aload 12
      // 0d7: getfield net/minecraft/class_238.field_1320 D
      // 0da: aload 12
      // 0dc: getfield net/minecraft/class_238.field_1322 D
      // 0df: aload 12
      // 0e1: getfield net/minecraft/class_238.field_1321 D
      // 0e4: aload 12
      // 0e6: getfield net/minecraft/class_238.field_1320 D
      // 0e9: aload 12
      // 0eb: getfield net/minecraft/class_238.field_1325 D
      // 0ee: aload 12
      // 0f0: getfield net/minecraft/class_238.field_1324 D
      // 0f3: aload 15
      // 0f5: aload 16
      // 0f7: invokevirtual sixtwo/dj.agg (Lnet/minecraft/class_287;Lorg/joml/Matrix4f;DDDDDDLsixtwo/mG;Lsixtwo/mG;)V
      // 0fa: aload 0
      // 0fb: aload 9
      // 0fd: aload 7
      // 0ff: aload 12
      // 101: getfield net/minecraft/class_238.field_1320 D
      // 104: aload 12
      // 106: getfield net/minecraft/class_238.field_1322 D
      // 109: aload 12
      // 10b: getfield net/minecraft/class_238.field_1324 D
      // 10e: aload 12
      // 110: getfield net/minecraft/class_238.field_1323 D
      // 113: aload 12
      // 115: getfield net/minecraft/class_238.field_1325 D
      // 118: aload 12
      // 11a: getfield net/minecraft/class_238.field_1324 D
      // 11d: aload 15
      // 11f: aload 16
      // 121: invokevirtual sixtwo/dj.agg (Lnet/minecraft/class_287;Lorg/joml/Matrix4f;DDDDDDLsixtwo/mG;Lsixtwo/mG;)V
      // 124: aload 0
      // 125: aload 9
      // 127: aload 7
      // 129: aload 12
      // 12b: getfield net/minecraft/class_238.field_1323 D
      // 12e: aload 12
      // 130: getfield net/minecraft/class_238.field_1322 D
      // 133: aload 12
      // 135: getfield net/minecraft/class_238.field_1324 D
      // 138: aload 12
      // 13a: getfield net/minecraft/class_238.field_1323 D
      // 13d: aload 12
      // 13f: getfield net/minecraft/class_238.field_1325 D
      // 142: aload 12
      // 144: getfield net/minecraft/class_238.field_1321 D
      // 147: aload 15
      // 149: aload 16
      // 14b: invokevirtual sixtwo/dj.agg (Lnet/minecraft/class_287;Lorg/joml/Matrix4f;DDDDDDLsixtwo/mG;Lsixtwo/mG;)V
      // 14e: aload 6
      // 150: ifnonnull 207
      // 153: aload 6
      // 155: ifnull 055
      // 158: goto 15f
      // 15b: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 15e: athrow
      // 15f: aload 9
      // 161: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 164: astore 10
      // 166: getstatic sixtwo/kR.oXKXV Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 169: aload 10
      // 16b: invokestatic sixtwo/lF.cfW (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 16e: aload 6
      // 170: ifnonnull 1b0
      // 173: aload 10
      // 175: ifnull 1ab
      // 178: aload 10
      // 17a: invokevirtual net/minecraft/class_9801.close ()V
      // 17d: goto 1ab
      // 180: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 183: athrow
      // 184: astore 11
      // 186: aload 10
      // 188: aload 6
      // 18a: ifnonnull 199
      // 18d: ifnull 1a8
      // 190: goto 197
      // 193: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 196: athrow
      // 197: aload 10
      // 199: invokevirtual net/minecraft/class_9801.close ()V
      // 19c: goto 1a8
      // 19f: astore 12
      // 1a1: aload 11
      // 1a3: aload 12
      // 1a5: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 1a8: aload 11
      // 1aa: athrow
      // 1ab: aload 8
      // 1ad: invokevirtual net/minecraft/class_9799.close ()V
      // 1b0: goto 1c9
      // 1b3: astore 9
      // 1b5: aload 8
      // 1b7: invokevirtual net/minecraft/class_9799.close ()V
      // 1ba: goto 1c6
      // 1bd: astore 10
      // 1bf: aload 9
      // 1c1: aload 10
      // 1c3: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 1c6: aload 9
      // 1c8: athrow
      // 1c9: new net/minecraft/class_9799
      // 1cc: dup
      // 1cd: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 1d0: invokevirtual com/mojang/blaze3d/vertex/VertexFormat.getVertexSize ()I
      // 1d3: aload 3
      // 1d4: invokeinterface java/util/List.size ()I 1
      // 1d9: imul
      // 1da: sipush 23746
      // 1dd: ldc2_w 1045516226155605993
      // 1e0: lload 4
      // 1e2: lxor
      // 1e3: invokedynamic w (IJ)I bsm=sixtwo/dj.agu (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 1e8: imul
      // 1e9: invokespecial net/minecraft/class_9799.<init> (I)V
      // 1ec: astore 8
      // 1ee: new net/minecraft/class_287
      // 1f1: dup
      // 1f2: aload 8
      // 1f4: getstatic com/mojang/blaze3d/vertex/VertexFormat$class_5596.field_27382 Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;
      // 1f7: getstatic net/minecraft/class_290.field_1576 Lcom/mojang/blaze3d/vertex/VertexFormat;
      // 1fa: invokespecial net/minecraft/class_287.<init> (Lnet/minecraft/class_9799;Lcom/mojang/blaze3d/vertex/VertexFormat$class_5596;Lcom/mojang/blaze3d/vertex/VertexFormat;)V
      // 1fd: astore 9
      // 1ff: aload 3
      // 200: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 205: astore 10
      // 207: aload 10
      // 209: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 20e: ifeq 25f
      // 211: aload 10
      // 213: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 218: checkcast sixtwo/dj$sB
      // 21b: astore 11
      // 21d: aload 11
      // 21f: invokevirtual sixtwo/dj$sB.hole ()Lsixtwo/dj$sE;
      // 222: aload 0
      // 223: getfield sixtwo/dj.TYsOV Lsixtwo/cC;
      // 226: invokevirtual sixtwo/cC.VI ()D
      // 229: invokevirtual sixtwo/dj$sE.toBox (D)Lnet/minecraft/class_238;
      // 22c: aload 2
      // 22d: invokevirtual net/minecraft/class_238.method_997 (Lnet/minecraft/class_243;)Lnet/minecraft/class_238;
      // 230: astore 12
      // 232: aload 0
      // 233: aload 11
      // 235: invokevirtual sixtwo/dj$sB.hole ()Lsixtwo/dj$sE;
      // 238: invokevirtual sixtwo/dj$sE.safety ()Lsixtwo/dj$sD;
      // 23b: invokevirtual sixtwo/dj.agl (Lsixtwo/dj$sD;)Lsixtwo/mG;
      // 23e: ldc_w 170.0
      // 241: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 244: aload 11
      // 246: invokevirtual sixtwo/dj$sB.fadeFactor ()F
      // 249: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 24c: astore 13
      // 24e: aload 0
      // 24f: aload 9
      // 251: aload 7
      // 253: aload 12
      // 255: aload 13
      // 257: invokevirtual sixtwo/dj.agf (Lnet/minecraft/class_287;Lorg/joml/Matrix4f;Lnet/minecraft/class_238;Lsixtwo/mG;)V
      // 25a: aload 6
      // 25c: ifnull 207
      // 25f: aload 9
      // 261: invokevirtual net/minecraft/class_287.method_60800 ()Lnet/minecraft/class_9801;
      // 264: astore 10
      // 266: getstatic sixtwo/kR.oXKXV Lcom/mojang/blaze3d/pipeline/RenderPipeline;
      // 269: aload 10
      // 26b: invokestatic sixtwo/lF.cfW (Lcom/mojang/blaze3d/pipeline/RenderPipeline;Lnet/minecraft/class_9801;)V
      // 26e: aload 6
      // 270: ifnonnull 2b0
      // 273: aload 10
      // 275: ifnull 2ab
      // 278: aload 10
      // 27a: invokevirtual net/minecraft/class_9801.close ()V
      // 27d: goto 2ab
      // 280: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 283: athrow
      // 284: astore 11
      // 286: aload 10
      // 288: aload 6
      // 28a: ifnonnull 299
      // 28d: ifnull 2a8
      // 290: goto 297
      // 293: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 296: athrow
      // 297: aload 10
      // 299: invokevirtual net/minecraft/class_9801.close ()V
      // 29c: goto 2a8
      // 29f: astore 12
      // 2a1: aload 11
      // 2a3: aload 12
      // 2a5: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 2a8: aload 11
      // 2aa: athrow
      // 2ab: aload 8
      // 2ad: invokevirtual net/minecraft/class_9799.close ()V
      // 2b0: goto 2c9
      // 2b3: astore 9
      // 2b5: aload 8
      // 2b7: invokevirtual net/minecraft/class_9799.close ()V
      // 2ba: goto 2c6
      // 2bd: astore 10
      // 2bf: aload 9
      // 2c1: aload 10
      // 2c3: invokevirtual java/lang/Throwable.addSuppressed (Ljava/lang/Throwable;)V
      // 2c6: aload 9
      // 2c8: athrow
      // 2c9: return
   }

   private boolean agh(class_2338 var1) {
      return rD.dlmvG.field_1687.method_8320(var1).method_26215();
   }

   private static Object agq(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      String var7 = agp(var4, var5);
      MethodHandle var8 = MethodHandles.constant(String.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private static int agt(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = ags(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   private mG agl(dj$sD var1) {
      long var2 = UFHNj ^ 134744622737340L;

      try {
         switch (var1) {
            case zrNsv:
               return this.vJCDp.Wf();
            case WBAxv:
               return this.JMRnw.Wf();
            case XoavU:
               return this.QfgSU.Wf();
            case btXid:
               return this.JaDoR.Wf();
            default:
               throw new MatchException(null, null);
         }
      } catch (MatchException var4) {
         throw agn(var4);
      }
   }

   private double agk() {
      return this.LEzwX.VI() * this.LEzwX.VI();
   }

   private dj$sE aga(class_2338 param1, class_2350 param2) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dj.UFHNj J
      // 003: ldc2_w 24616438130435
      // 006: lxor
      // 007: lstore 3
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: aload 1
      // 00c: aload 2
      // 00d: invokevirtual net/minecraft/class_2338.method_10093 (Lnet/minecraft/class_2350;)Lnet/minecraft/class_2338;
      // 010: astore 6
      // 012: astore 5
      // 014: aload 0
      // 015: aload 6
      // 017: invokevirtual sixtwo/dj.agh (Lnet/minecraft/class_2338;)Z
      // 01a: aload 5
      // 01c: ifnonnull 039
      // 01f: ifeq 068
      // 022: goto 029
      // 025: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 028: athrow
      // 029: aload 0
      // 02a: aload 6
      // 02c: invokevirtual net/minecraft/class_2338.method_10084 ()Lnet/minecraft/class_2338;
      // 02f: invokevirtual sixtwo/dj.agh (Lnet/minecraft/class_2338;)Z
      // 032: goto 039
      // 035: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 038: athrow
      // 039: aload 5
      // 03b: ifnonnull 059
      // 03e: ifeq 068
      // 041: goto 048
      // 044: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 047: athrow
      // 048: aload 0
      // 049: aload 6
      // 04b: bipush 2
      // 04c: invokevirtual net/minecraft/class_2338.method_10086 (I)Lnet/minecraft/class_2338;
      // 04f: invokevirtual sixtwo/dj.agh (Lnet/minecraft/class_2338;)Z
      // 052: goto 059
      // 055: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 058: athrow
      // 059: aload 5
      // 05b: ifnonnull 077
      // 05e: ifne 06e
      // 061: goto 068
      // 064: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 067: athrow
      // 068: aconst_null
      // 069: areturn
      // 06a: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 06d: athrow
      // 06e: aload 0
      // 06f: aload 6
      // 071: invokevirtual net/minecraft/class_2338.method_10074 ()Lnet/minecraft/class_2338;
      // 074: invokevirtual sixtwo/dj.agi (Lnet/minecraft/class_2338;)Z
      // 077: ifne 080
      // 07a: aconst_null
      // 07b: areturn
      // 07c: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 07f: athrow
      // 080: new java/util/ArrayList
      // 083: dup
      // 084: invokespecial java/util/ArrayList.<init> ()V
      // 087: astore 7
      // 089: aload 7
      // 08b: aload 1
      // 08c: invokevirtual net/minecraft/class_2338.method_10074 ()Lnet/minecraft/class_2338;
      // 08f: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 094: pop
      // 095: aload 7
      // 097: aload 6
      // 099: invokevirtual net/minecraft/class_2338.method_10074 ()Lnet/minecraft/class_2338;
      // 09c: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0a1: pop
      // 0a2: getstatic net/minecraft/class_2350$class_2353.field_11062 Lnet/minecraft/class_2350$class_2353;
      // 0a5: invokevirtual net/minecraft/class_2350$class_2353.iterator ()Ljava/util/Iterator;
      // 0a8: astore 8
      // 0aa: aload 8
      // 0ac: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0b1: ifeq 13b
      // 0b4: aload 8
      // 0b6: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0bb: checkcast net/minecraft/class_2350
      // 0be: astore 9
      // 0c0: aload 9
      // 0c2: aload 2
      // 0c3: aload 5
      // 0c5: ifnonnull 105
      // 0c8: if_acmpeq 0ff
      // 0cb: goto 0d2
      // 0ce: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0d1: athrow
      // 0d2: aload 1
      // 0d3: aload 9
      // 0d5: invokevirtual net/minecraft/class_2338.method_10093 (Lnet/minecraft/class_2350;)Lnet/minecraft/class_2338;
      // 0d8: astore 10
      // 0da: aload 0
      // 0db: aload 10
      // 0dd: invokevirtual sixtwo/dj.agi (Lnet/minecraft/class_2338;)Z
      // 0e0: aload 5
      // 0e2: ifnonnull 0fe
      // 0e5: ifne 0f5
      // 0e8: goto 0ef
      // 0eb: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0ee: athrow
      // 0ef: aconst_null
      // 0f0: areturn
      // 0f1: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f4: athrow
      // 0f5: aload 7
      // 0f7: aload 10
      // 0f9: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0fe: pop
      // 0ff: aload 9
      // 101: aload 2
      // 102: invokevirtual net/minecraft/class_2350.method_10153 ()Lnet/minecraft/class_2350;
      // 105: if_acmpeq 136
      // 108: aload 6
      // 10a: aload 9
      // 10c: invokevirtual net/minecraft/class_2338.method_10093 (Lnet/minecraft/class_2350;)Lnet/minecraft/class_2338;
      // 10f: astore 10
      // 111: aload 0
      // 112: aload 10
      // 114: invokevirtual sixtwo/dj.agi (Lnet/minecraft/class_2338;)Z
      // 117: aload 5
      // 119: ifnonnull 135
      // 11c: ifne 12c
      // 11f: goto 126
      // 122: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 125: athrow
      // 126: aconst_null
      // 127: areturn
      // 128: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 12b: athrow
      // 12c: aload 7
      // 12e: aload 10
      // 130: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 135: pop
      // 136: aload 5
      // 138: ifnull 0aa
      // 13b: aload 0
      // 13c: aload 7
      // 13e: invokevirtual sixtwo/dj.agc (Ljava/util/List;)Lsixtwo/dj$sD;
      // 141: astore 8
      // 143: aload 8
      // 145: ifnonnull 14e
      // 148: aconst_null
      // 149: areturn
      // 14a: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 14d: athrow
      // 14e: new java/util/ArrayList
      // 151: dup
      // 152: aload 1
      // 153: aload 6
      // 155: invokestatic java/util/List.of (Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;
      // 158: invokespecial java/util/ArrayList.<init> (Ljava/util/Collection;)V
      // 15b: astore 9
      // 15d: aload 9
      // 15f: getstatic sixtwo/dj.cMEtP Ljava/util/Comparator;
      // 162: invokeinterface java/util/List.sort (Ljava/util/Comparator;)V 2
      // 167: new sixtwo/dj$sE
      // 16a: dup
      // 16b: aload 9
      // 16d: invokestatic java/util/List.copyOf (Ljava/util/Collection;)Ljava/util/List;
      // 170: aload 8
      // 172: getstatic sixtwo/dj$sC.XksfN Lsixtwo/dj$sC;
      // 175: invokespecial sixtwo/dj$sE.<init> (Ljava/util/List;Lsixtwo/dj$sD;Lsixtwo/dj$sC;)V
      // 178: areturn
   }

   private void agg(class_287 var1, Matrix4f var2, double var3, double var5, double var7, double var9, double var11, double var13, mG var15, mG var16) {
      var1.method_22918(var2, (float)var3, (float)var5, (float)var7).method_39415(var15.coh());
      var1.method_22918(var2, (float)var3, (float)var11, (float)var7).method_39415(var16.coh());
      var1.method_22918(var2, (float)var9, (float)var11, (float)var13).method_39415(var16.coh());
      var1.method_22918(var2, (float)var9, (float)var5, (float)var13).method_39415(var15.coh());
   }

   private void agd(class_4587 param1, dj$sE param2, class_243 param3, float param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dj.UFHNj J
      // 03: ldc2_w 15588909691351
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0c: aload 2
      // 0d: aload 0
      // 0e: getfield sixtwo/dj.TYsOV Lsixtwo/cC;
      // 11: invokevirtual sixtwo/cC.VI ()D
      // 14: invokevirtual sixtwo/dj$sE.toBox (D)Lnet/minecraft/class_238;
      // 17: aload 3
      // 18: invokevirtual net/minecraft/class_238.method_997 (Lnet/minecraft/class_243;)Lnet/minecraft/class_238;
      // 1b: astore 8
      // 1d: astore 7
      // 1f: aload 0
      // 20: aload 2
      // 21: invokevirtual sixtwo/dj$sE.safety ()Lsixtwo/dj$sD;
      // 24: invokevirtual sixtwo/dj.agl (Lsixtwo/dj$sD;)Lsixtwo/mG;
      // 27: astore 9
      // 29: aload 9
      // 2b: fload 4
      // 2d: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 30: astore 10
      // 32: aload 9
      // 34: aload 9
      // 36: invokevirtual sixtwo/mG.cou ()F
      // 39: ldc_w 100.0
      // 3c: invokestatic java/lang/Math.max (FF)F
      // 3f: invokevirtual sixtwo/mG.coa (F)Lsixtwo/mG;
      // 42: fload 4
      // 44: invokevirtual sixtwo/mG.cob (F)Lsixtwo/mG;
      // 47: astore 11
      // 49: getstatic sixtwo/dj.MMuss Lsixtwo/kN;
      // 4c: aload 1
      // 4d: aload 8
      // 4f: aload 10
      // 51: invokevirtual sixtwo/mG.cnW ()Z
      // 54: aload 7
      // 56: ifnonnull 64
      // 59: ifne 67
      // 5c: goto 63
      // 5f: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 62: athrow
      // 63: bipush 1
      // 64: goto 68
      // 67: bipush 0
      // 68: bipush 0
      // 69: invokestatic sixtwo/kH.bTJ (Lnet/minecraft/class_4587;Lnet/minecraft/class_238;ZZ)Lsixtwo/kH$up;
      // 6c: aload 0
      // 6d: getfield sixtwo/dj.ZnfqN Lsixtwo/cJ;
      // 70: invokevirtual sixtwo/cJ.WF ()Z
      // 73: aload 7
      // 75: ifnonnull 9a
      // 78: ifeq a2
      // 7b: goto 82
      // 7e: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 81: athrow
      // 82: aload 11
      // 84: aload 7
      // 86: ifnonnull 9f
      // 89: goto 90
      // 8c: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 8f: athrow
      // 90: invokevirtual sixtwo/mG.cnW ()Z
      // 93: goto 9a
      // 96: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 99: athrow
      // 9a: ifne a2
      // 9d: aload 11
      // 9f: goto a5
      // a2: getstatic sixtwo/mG.UhgnI Lsixtwo/mG;
      // a5: invokevirtual sixtwo/kH$up.dtN (Lsixtwo/mG;)Lsixtwo/kH$up;
      // a8: aload 10
      // aa: invokevirtual sixtwo/kH$up.dtO (Lsixtwo/mG;)Lsixtwo/kH$up;
      // ad: invokevirtual sixtwo/kH$up.dtS ()Lsixtwo/kH;
      // b0: invokevirtual sixtwo/kN.bUS (Lsixtwo/kH;)V
      // b3: return
   }

   private dj$sE agb(class_2338 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dj.UFHNj J
      // 003: ldc2_w 21945188710921
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: getfield sixtwo/dj.iKDmr Lsixtwo/cJ;
      // 011: invokevirtual sixtwo/cJ.WF ()Z
      // 014: ifne 01d
      // 017: aconst_null
      // 018: areturn
      // 019: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 01c: athrow
      // 01d: aload 1
      // 01e: aload 1
      // 01f: invokevirtual net/minecraft/class_2338.method_10078 ()Lnet/minecraft/class_2338;
      // 022: aload 1
      // 023: invokevirtual net/minecraft/class_2338.method_10072 ()Lnet/minecraft/class_2338;
      // 026: aload 1
      // 027: invokevirtual net/minecraft/class_2338.method_10072 ()Lnet/minecraft/class_2338;
      // 02a: invokevirtual net/minecraft/class_2338.method_10078 ()Lnet/minecraft/class_2338;
      // 02d: invokestatic java/util/List.of (Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;
      // 030: astore 5
      // 032: aload 5
      // 034: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 039: astore 6
      // 03b: aload 6
      // 03d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 042: ifeq 0c2
      // 045: aload 6
      // 047: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 04c: checkcast net/minecraft/class_2338
      // 04f: astore 7
      // 051: aload 0
      // 052: aload 7
      // 054: invokevirtual sixtwo/dj.agh (Lnet/minecraft/class_2338;)Z
      // 057: aload 4
      // 059: ifnonnull 076
      // 05c: ifeq 0a5
      // 05f: goto 066
      // 062: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 065: athrow
      // 066: aload 0
      // 067: aload 7
      // 069: invokevirtual net/minecraft/class_2338.method_10084 ()Lnet/minecraft/class_2338;
      // 06c: invokevirtual sixtwo/dj.agh (Lnet/minecraft/class_2338;)Z
      // 06f: goto 076
      // 072: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 075: athrow
      // 076: aload 4
      // 078: ifnonnull 096
      // 07b: ifeq 0a5
      // 07e: goto 085
      // 081: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 084: athrow
      // 085: aload 0
      // 086: aload 7
      // 088: bipush 2
      // 089: invokevirtual net/minecraft/class_2338.method_10086 (I)Lnet/minecraft/class_2338;
      // 08c: invokevirtual sixtwo/dj.agh (Lnet/minecraft/class_2338;)Z
      // 08f: goto 096
      // 092: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 095: athrow
      // 096: aload 4
      // 098: ifnonnull 0b4
      // 09b: ifne 0ab
      // 09e: goto 0a5
      // 0a1: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0a4: athrow
      // 0a5: aconst_null
      // 0a6: areturn
      // 0a7: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0aa: athrow
      // 0ab: aload 0
      // 0ac: aload 7
      // 0ae: invokevirtual net/minecraft/class_2338.method_10074 ()Lnet/minecraft/class_2338;
      // 0b1: invokevirtual sixtwo/dj.agi (Lnet/minecraft/class_2338;)Z
      // 0b4: ifne 0bd
      // 0b7: aconst_null
      // 0b8: areturn
      // 0b9: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0bc: athrow
      // 0bd: aload 4
      // 0bf: ifnull 03b
      // 0c2: new java/util/ArrayList
      // 0c5: dup
      // 0c6: invokespecial java/util/ArrayList.<init> ()V
      // 0c9: astore 6
      // 0cb: aload 5
      // 0cd: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 0d2: astore 7
      // 0d4: aload 7
      // 0d6: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0db: ifeq 108
      // 0de: aload 7
      // 0e0: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0e5: checkcast net/minecraft/class_2338
      // 0e8: astore 8
      // 0ea: aload 6
      // 0ec: aload 4
      // 0ee: ifnonnull 143
      // 0f1: aload 8
      // 0f3: invokevirtual net/minecraft/class_2338.method_10074 ()Lnet/minecraft/class_2338;
      // 0f6: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0fb: pop
      // 0fc: aload 4
      // 0fe: ifnull 0d4
      // 101: goto 108
      // 104: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 107: athrow
      // 108: aload 1
      // 109: invokevirtual net/minecraft/class_2338.method_10095 ()Lnet/minecraft/class_2338;
      // 10c: aload 1
      // 10d: invokevirtual net/minecraft/class_2338.method_10078 ()Lnet/minecraft/class_2338;
      // 110: invokevirtual net/minecraft/class_2338.method_10095 ()Lnet/minecraft/class_2338;
      // 113: aload 1
      // 114: invokevirtual net/minecraft/class_2338.method_10067 ()Lnet/minecraft/class_2338;
      // 117: aload 1
      // 118: invokevirtual net/minecraft/class_2338.method_10072 ()Lnet/minecraft/class_2338;
      // 11b: invokevirtual net/minecraft/class_2338.method_10067 ()Lnet/minecraft/class_2338;
      // 11e: aload 1
      // 11f: invokevirtual net/minecraft/class_2338.method_10072 ()Lnet/minecraft/class_2338;
      // 122: invokevirtual net/minecraft/class_2338.method_10072 ()Lnet/minecraft/class_2338;
      // 125: aload 1
      // 126: invokevirtual net/minecraft/class_2338.method_10072 ()Lnet/minecraft/class_2338;
      // 129: invokevirtual net/minecraft/class_2338.method_10078 ()Lnet/minecraft/class_2338;
      // 12c: invokevirtual net/minecraft/class_2338.method_10072 ()Lnet/minecraft/class_2338;
      // 12f: aload 1
      // 130: invokevirtual net/minecraft/class_2338.method_10078 ()Lnet/minecraft/class_2338;
      // 133: invokevirtual net/minecraft/class_2338.method_10078 ()Lnet/minecraft/class_2338;
      // 136: aload 1
      // 137: invokevirtual net/minecraft/class_2338.method_10072 ()Lnet/minecraft/class_2338;
      // 13a: invokevirtual net/minecraft/class_2338.method_10078 ()Lnet/minecraft/class_2338;
      // 13d: invokevirtual net/minecraft/class_2338.method_10078 ()Lnet/minecraft/class_2338;
      // 140: invokestatic java/util/List.of (Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;)Ljava/util/List;
      // 143: astore 7
      // 145: aload 7
      // 147: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 14c: astore 8
      // 14e: aload 8
      // 150: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 155: ifeq 19a
      // 158: aload 8
      // 15a: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 15f: checkcast net/minecraft/class_2338
      // 162: astore 9
      // 164: aload 0
      // 165: aload 4
      // 167: ifnonnull 19b
      // 16a: aload 9
      // 16c: invokevirtual sixtwo/dj.agi (Lnet/minecraft/class_2338;)Z
      // 16f: aload 4
      // 171: ifnonnull 194
      // 174: goto 17b
      // 177: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 17a: athrow
      // 17b: ifne 18b
      // 17e: goto 185
      // 181: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 184: athrow
      // 185: aconst_null
      // 186: areturn
      // 187: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 18a: athrow
      // 18b: aload 6
      // 18d: aload 9
      // 18f: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 194: pop
      // 195: aload 4
      // 197: ifnull 14e
      // 19a: aload 0
      // 19b: aload 6
      // 19d: invokevirtual sixtwo/dj.agc (Ljava/util/List;)Lsixtwo/dj$sD;
      // 1a0: astore 8
      // 1a2: aload 8
      // 1a4: ifnonnull 1af
      // 1a7: aconst_null
      // 1a8: goto 1bd
      // 1ab: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1ae: athrow
      // 1af: new sixtwo/dj$sE
      // 1b2: dup
      // 1b3: aload 5
      // 1b5: aload 8
      // 1b7: getstatic sixtwo/dj$sC.vzSwM Lsixtwo/dj$sC;
      // 1ba: invokespecial sixtwo/dj$sE.<init> (Ljava/util/List;Lsixtwo/dj$sD;Lsixtwo/dj$sC;)V
      // 1bd: areturn
   }

   private dj$sD agc(List<class_2338> param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dj.UFHNj J
      // 03: ldc2_w 13877631328698
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: bipush 0
      // 0c: istore 5
      // 0e: astore 4
      // 10: bipush 0
      // 11: istore 6
      // 13: aload 1
      // 14: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 19: astore 7
      // 1b: aload 7
      // 1d: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 22: ifeq 84
      // 25: aload 7
      // 27: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 2c: checkcast net/minecraft/class_2338
      // 2f: astore 8
      // 31: aload 0
      // 32: aload 8
      // 34: invokevirtual sixtwo/dj.agi (Lnet/minecraft/class_2338;)Z
      // 37: aload 4
      // 39: ifnonnull 86
      // 3c: aload 4
      // 3e: ifnonnull 5e
      // 41: goto 48
      // 44: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 47: athrow
      // 48: ifne 58
      // 4b: goto 52
      // 4e: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 51: athrow
      // 52: aconst_null
      // 53: areturn
      // 54: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 57: athrow
      // 58: aload 0
      // 59: aload 8
      // 5b: invokevirtual sixtwo/dj.agj (Lnet/minecraft/class_2338;)Z
      // 5e: aload 4
      // 60: ifnonnull 7d
      // 63: ifeq 75
      // 66: goto 6d
      // 69: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6c: athrow
      // 6d: bipush 1
      // 6e: istore 5
      // 70: aload 4
      // 72: ifnull 7f
      // 75: bipush 1
      // 76: goto 7d
      // 79: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 7c: athrow
      // 7d: istore 6
      // 7f: aload 4
      // 81: ifnull 1b
      // 84: iload 5
      // 86: aload 4
      // 88: ifnonnull b7
      // 8b: ifeq b5
      // 8e: goto 95
      // 91: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 94: athrow
      // 95: iload 6
      // 97: aload 4
      // 99: ifnonnull b7
      // 9c: goto a3
      // 9f: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // a2: athrow
      // a3: ifne b5
      // a6: goto ad
      // a9: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // ac: athrow
      // ad: getstatic sixtwo/dj$sD.zrNsv Lsixtwo/dj$sD;
      // b0: areturn
      // b1: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // b4: athrow
      // b5: iload 5
      // b7: ifeq c2
      // ba: getstatic sixtwo/dj$sD.XoavU Lsixtwo/dj$sD;
      // bd: areturn
      // be: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // c1: athrow
      // c2: getstatic sixtwo/dj$sD.WBAxv Lsixtwo/dj$sD;
      // c5: areturn
   }

   private boolean agj(class_2338 var1) {
      return rD.dlmvG.field_1687.method_8320(var1).method_27852(class_2246.field_9987);
   }

   private static String ago(byte[] var0) {
      int var1 = 0;
      int var2;
      char[] var3 = new char[var2 = var0.length];

      for (int var4 = 0; var4 < var2; var4++) {
         int var5;
         if ((var5 = 255 & var0[var4]) < 192) {
            var3[var1++] = (char)var5;
         } else if (var5 < 224) {
            char var6 = (char)((char)(var5 & 31) << 6);
            byte var8 = var0[++var4];
            var6 = (char)(var6 | (char)(var8 & 63));
            var3[var1++] = var6;
         } else if (var4 < var2 - 2) {
            char var12 = (char)((char)(var5 & 15) << '\f');
            byte var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63) << 6);
            var9 = var0[++var4];
            var12 = (char)(var12 | (char)(var9 & 63));
            var3[var1++] = var12;
         }
      }

      return new String(var3, 0, var1);
   }

   private dj$sE afZ(class_2338 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dj.UFHNj J
      // 003: ldc2_w 103839044268135
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: aload 0
      // 00c: aload 1
      // 00d: invokevirtual sixtwo/dj.agb (Lnet/minecraft/class_2338;)Lsixtwo/dj$sE;
      // 010: astore 5
      // 012: astore 4
      // 014: aload 5
      // 016: aload 4
      // 018: ifnonnull 027
      // 01b: ifnull 028
      // 01e: goto 025
      // 021: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 024: athrow
      // 025: aload 5
      // 027: areturn
      // 028: aload 0
      // 029: aload 1
      // 02a: invokevirtual sixtwo/dj.agh (Lnet/minecraft/class_2338;)Z
      // 02d: aload 4
      // 02f: ifnonnull 04b
      // 032: ifeq 06d
      // 035: goto 03c
      // 038: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 03b: athrow
      // 03c: aload 0
      // 03d: aload 1
      // 03e: invokevirtual net/minecraft/class_2338.method_10084 ()Lnet/minecraft/class_2338;
      // 041: invokevirtual sixtwo/dj.agh (Lnet/minecraft/class_2338;)Z
      // 044: goto 04b
      // 047: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 04a: athrow
      // 04b: aload 4
      // 04d: ifnonnull 06a
      // 050: ifeq 06d
      // 053: goto 05a
      // 056: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 059: athrow
      // 05a: aload 0
      // 05b: aload 1
      // 05c: bipush 2
      // 05d: invokevirtual net/minecraft/class_2338.method_10086 (I)Lnet/minecraft/class_2338;
      // 060: invokevirtual sixtwo/dj.agh (Lnet/minecraft/class_2338;)Z
      // 063: goto 06a
      // 066: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 069: athrow
      // 06a: ifne 073
      // 06d: aconst_null
      // 06e: areturn
      // 06f: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 072: athrow
      // 073: new java/util/ArrayList
      // 076: dup
      // 077: invokespecial java/util/ArrayList.<init> ()V
      // 07a: astore 6
      // 07c: new java/util/ArrayList
      // 07f: dup
      // 080: invokespecial java/util/ArrayList.<init> ()V
      // 083: astore 7
      // 085: aload 7
      // 087: aload 1
      // 088: invokevirtual net/minecraft/class_2338.method_10074 ()Lnet/minecraft/class_2338;
      // 08b: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 090: pop
      // 091: aload 0
      // 092: aload 1
      // 093: invokevirtual net/minecraft/class_2338.method_10074 ()Lnet/minecraft/class_2338;
      // 096: invokevirtual sixtwo/dj.agi (Lnet/minecraft/class_2338;)Z
      // 099: ifne 0a2
      // 09c: aconst_null
      // 09d: areturn
      // 09e: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0a1: athrow
      // 0a2: getstatic net/minecraft/class_2350$class_2353.field_11062 Lnet/minecraft/class_2350$class_2353;
      // 0a5: invokevirtual net/minecraft/class_2350$class_2353.iterator ()Ljava/util/Iterator;
      // 0a8: astore 8
      // 0aa: aload 8
      // 0ac: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 0b1: ifeq 10e
      // 0b4: aload 8
      // 0b6: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 0bb: checkcast net/minecraft/class_2350
      // 0be: astore 9
      // 0c0: aload 1
      // 0c1: aload 9
      // 0c3: invokevirtual net/minecraft/class_2338.method_10093 (Lnet/minecraft/class_2350;)Lnet/minecraft/class_2338;
      // 0c6: astore 10
      // 0c8: aload 0
      // 0c9: aload 10
      // 0cb: invokevirtual sixtwo/dj.agi (Lnet/minecraft/class_2338;)Z
      // 0ce: aload 4
      // 0d0: ifnonnull 115
      // 0d3: aload 4
      // 0d5: ifnonnull 108
      // 0d8: goto 0df
      // 0db: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0de: athrow
      // 0df: ifeq 0ff
      // 0e2: goto 0e9
      // 0e5: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0e8: athrow
      // 0e9: aload 7
      // 0eb: aload 10
      // 0ed: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 0f2: pop
      // 0f3: aload 4
      // 0f5: ifnull 0aa
      // 0f8: goto 0ff
      // 0fb: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0fe: athrow
      // 0ff: aload 6
      // 101: aload 9
      // 103: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 108: pop
      // 109: aload 4
      // 10b: ifnull 0aa
      // 10e: aload 6
      // 110: invokeinterface java/util/List.isEmpty ()Z 1
      // 115: aload 4
      // 117: ifnonnull 151
      // 11a: ifeq 14a
      // 11d: goto 124
      // 120: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 123: athrow
      // 124: aload 0
      // 125: aload 7
      // 127: invokevirtual sixtwo/dj.agc (Ljava/util/List;)Lsixtwo/dj$sD;
      // 12a: astore 8
      // 12c: aload 8
      // 12e: ifnonnull 139
      // 131: aconst_null
      // 132: goto 149
      // 135: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 138: athrow
      // 139: new sixtwo/dj$sE
      // 13c: dup
      // 13d: aload 1
      // 13e: invokestatic java/util/List.of (Ljava/lang/Object;)Ljava/util/List;
      // 141: aload 8
      // 143: getstatic sixtwo/dj$sC.iiJny Lsixtwo/dj$sC;
      // 146: invokespecial sixtwo/dj$sE.<init> (Ljava/util/List;Lsixtwo/dj$sD;Lsixtwo/dj$sC;)V
      // 149: areturn
      // 14a: aload 6
      // 14c: invokeinterface java/util/List.size ()I 1
      // 151: aload 4
      // 153: ifnonnull 17b
      // 156: bipush 1
      // 157: if_icmpne 17e
      // 15a: goto 161
      // 15d: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 160: athrow
      // 161: aload 0
      // 162: aload 4
      // 164: ifnonnull 185
      // 167: goto 16e
      // 16a: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 16d: athrow
      // 16e: getfield sixtwo/dj.NUWIx Lsixtwo/cJ;
      // 171: invokevirtual sixtwo/cJ.WF ()Z
      // 174: goto 17b
      // 177: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 17a: athrow
      // 17b: ifne 184
      // 17e: aconst_null
      // 17f: areturn
      // 180: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 183: athrow
      // 184: aload 0
      // 185: aload 1
      // 186: aload 6
      // 188: bipush 0
      // 189: invokeinterface java/util/List.get (I)Ljava/lang/Object; 2
      // 18e: checkcast net/minecraft/class_2350
      // 191: invokevirtual sixtwo/dj.aga (Lnet/minecraft/class_2338;Lnet/minecraft/class_2350;)Lsixtwo/dj$sE;
      // 194: areturn
   }

   private boolean agi(class_2338 param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dj.UFHNj J
      // 03: ldc2_w 56197553109115
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0e: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 11: aload 1
      // 12: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 15: astore 5
      // 17: astore 4
      // 19: aload 5
      // 1b: getstatic net/minecraft/class_2246.field_9987 Lnet/minecraft/class_2248;
      // 1e: invokevirtual net/minecraft/class_2680.method_27852 (Lnet/minecraft/class_2248;)Z
      // 21: aload 4
      // 23: ifnonnull a9
      // 26: ifne a8
      // 29: goto 30
      // 2c: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2f: athrow
      // 30: aload 5
      // 32: getstatic net/minecraft/class_2246.field_10540 Lnet/minecraft/class_2248;
      // 35: invokevirtual net/minecraft/class_2680.method_27852 (Lnet/minecraft/class_2248;)Z
      // 38: aload 4
      // 3a: ifnonnull a9
      // 3d: goto 44
      // 40: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 43: athrow
      // 44: ifne a8
      // 47: goto 4e
      // 4a: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 4d: athrow
      // 4e: aload 5
      // 50: getstatic net/minecraft/class_2246.field_22423 Lnet/minecraft/class_2248;
      // 53: invokevirtual net/minecraft/class_2680.method_27852 (Lnet/minecraft/class_2248;)Z
      // 56: aload 4
      // 58: ifnonnull a9
      // 5b: goto 62
      // 5e: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 61: athrow
      // 62: ifne a8
      // 65: goto 6c
      // 68: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 6b: athrow
      // 6c: aload 5
      // 6e: getstatic net/minecraft/class_2246.field_10443 Lnet/minecraft/class_2248;
      // 71: invokevirtual net/minecraft/class_2680.method_27852 (Lnet/minecraft/class_2248;)Z
      // 74: aload 4
      // 76: ifnonnull a9
      // 79: goto 80
      // 7c: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 7f: athrow
      // 80: ifne a8
      // 83: goto 8a
      // 86: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 89: athrow
      // 8a: aload 5
      // 8c: getstatic net/minecraft/class_2246.field_23152 Lnet/minecraft/class_2248;
      // 8f: invokevirtual net/minecraft/class_2680.method_27852 (Lnet/minecraft/class_2248;)Z
      // 92: aload 4
      // 94: ifnonnull a9
      // 97: goto 9e
      // 9a: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 9d: athrow
      // 9e: ifeq ac
      // a1: goto a8
      // a4: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // a7: athrow
      // a8: bipush 1
      // a9: goto ad
      // ac: bipush 0
      // ad: ireturn
   }

   private void agf(class_287 var1, Matrix4f var2, class_238 var3, mG var4) {
      long var5 = UFHNj ^ 38093583333506L;
      int var7 = var4.cob(0.35F).coh();

      try {
         var1.method_22918(var2, (float)var3.field_1323, (float)var3.field_1322, (float)var3.field_1321).method_39415(var7);
         var1.method_22918(var2, (float)var3.field_1320, (float)var3.field_1322, (float)var3.field_1321).method_39415(var7);
         var1.method_22918(var2, (float)var3.field_1320, (float)var3.field_1322, (float)var3.field_1324).method_39415(var7);
         var1.method_22918(var2, (float)var3.field_1323, (float)var3.field_1322, (float)var3.field_1324).method_39415(var7);
         if (!this.ZnfqN.WF()) {
            return;
         }
      } catch (MatchException var15) {
         throw agn(var15);
      }

      float var8 = (float)var3.field_1323;
      float var9 = (float)var3.field_1322;
      float var10 = (float)var3.field_1321;
      float var11 = (float)var3.field_1320;
      float var12 = (float)var3.field_1324;
      float var13 = Math.min(0.04F, Math.min(var11 - var8, var12 - var10) * 0.5F);
      int var14 = var4.coh();
      var1.method_22918(var2, var8, var9, var10).method_39415(var14);
      var1.method_22918(var2, var11, var9, var10).method_39415(var14);
      var1.method_22918(var2, var11, var9, var10 + var13).method_39415(var14);
      var1.method_22918(var2, var8, var9, var10 + var13).method_39415(var14);
      var1.method_22918(var2, var8, var9, var12 - var13).method_39415(var14);
      var1.method_22918(var2, var11, var9, var12 - var13).method_39415(var14);
      var1.method_22918(var2, var11, var9, var12).method_39415(var14);
      var1.method_22918(var2, var8, var9, var12).method_39415(var14);
      var1.method_22918(var2, var8, var9, var10 + var13).method_39415(var14);
      var1.method_22918(var2, var8 + var13, var9, var10 + var13).method_39415(var14);
      var1.method_22918(var2, var8 + var13, var9, var12 - var13).method_39415(var14);
      var1.method_22918(var2, var8, var9, var12 - var13).method_39415(var14);
      var1.method_22918(var2, var11 - var13, var9, var10 + var13).method_39415(var14);
      var1.method_22918(var2, var11, var9, var10 + var13).method_39415(var14);
      var1.method_22918(var2, var11, var9, var12 - var13).method_39415(var14);
      var1.method_22918(var2, var11 - var13, var9, var12 - var13).method_39415(var14);
   }

   private static int ags(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 10921;
      if (gUpUM[var3] == null) {
         byte[] var4 = new byte[]{
            (byte)(var1 >>> 56),
            (byte)(var1 >>> 48),
            (byte)(var1 >>> 40),
            (byte)(var1 >>> 32),
            (byte)(var1 >>> 24),
            (byte)(var1 >>> 16),
            (byte)(var1 >>> 8),
            (byte)var1
         };
         long var5 = CvhLh[var3];
         byte[] var7 = new byte[]{
            (byte)(var5 >>> 56),
            (byte)(var5 >>> 48),
            (byte)(var5 >>> 40),
            (byte)(var5 >>> 32),
            (byte)(var5 >>> 24),
            (byte)(var5 >>> 16),
            (byte)(var5 >>> 8),
            (byte)var5
         };
         Long var8 = Thread.currentThread().threadId();
         Object[] var9 = (Object[])HQhKx.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               HQhKx.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/dj", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         gUpUM[var3] = var15;
      }

      return gUpUM[var3];
   }

   // $VF: Could not verify finally blocks. A semaphore variable has been added to preserve control flow.
   // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
   private void afU(class_4587 var1, class_243 var2, List<dj$sB> var3) {
      long var4 = UFHNj ^ 96247481004975L;
      iS[] var10000 = dh.afl();
      MMuss.startBatch();
      iS[] var6 = var10000;
      boolean var12 = false /* VF: Semaphore variable */;

      try {
         var12 = true;
         Iterator var7 = var3.iterator();

         while (true) {
            if (var7.hasNext()) {
               dj$sB var8 = (dj$sB)var7.next();

               try {
                  this.agd(var1, var8.hole(), var2, var8.fadeFactor());
                  if (var6 != null) {
                     var12 = false;
                     return;
                  }

                  if (var6 == null) {
                     continue;
                  }

                  var12 = false;
                  break;
               } catch (MatchException var13) {
                  throw agn(var13);
               }
            }

            var12 = false;
            break;
         }
      } finally {
         if (var12) {
            MMuss.endBatch();
         }
      }

      MMuss.endBatch();
   }

   @hG
   public void afR(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dj.UFHNj J
      // 03: ldc2_w 124434357230071
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: aload 4
      // 10: ifnonnull 38
      // 13: invokevirtual sixtwo/dj.bab ()Z
      // 16: ifne 37
      // 19: goto 20
      // 1c: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1f: athrow
      // 20: aload 0
      // 21: getfield sixtwo/dj.soBDJ Ljava/util/List;
      // 24: invokeinterface java/util/List.clear ()V 1
      // 29: aload 0
      // 2a: getfield sixtwo/dj.Dpuot Ljava/util/Map;
      // 2d: invokeinterface java/util/Map.clear ()V 1
      // 32: return
      // 33: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 36: athrow
      // 37: aload 0
      // 38: aload 0
      // 39: invokevirtual sixtwo/dj.afY ()Ljava/util/List;
      // 3c: putfield sixtwo/dj.soBDJ Ljava/util/List;
      // 3f: return
   }

   private static Throwable agn(Throwable var0) {
      return var0;
   }

   private static CallSite agr(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("agq".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dj" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private void afW() {
      long var1 = UFHNj ^ 49586900273251L;
      iS[] var10000 = dh.afl();
      Iterator var4 = this.soBDJ.iterator();
      iS[] var3 = var10000;

      while (var4.hasNext()) {
         dj$sE var5 = (dj$sE)var4.next();

         try {
            if (this.Dpuot.containsKey(var5) && var3 == null) {
               continue;
            }
         } catch (MatchException var7) {
            throw agn(var7);
         }

         rk var6 = new rk(agu<"w">(15599, 508004640012687936L ^ var1)).dhs(rj.UPXqT);
         var6.dhg();
         this.Dpuot.put(var5, var6);
         if (var3 != null) {
            break;
         }
      }
   }

   private List<dj$sB> afT() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dj.UFHNj J
      // 03: ldc2_w 119154321548407
      // 06: lxor
      // 07: lstore 1
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: new java/util/ArrayList
      // 0e: dup
      // 0f: invokespecial java/util/ArrayList.<init> ()V
      // 12: astore 4
      // 14: astore 3
      // 15: aload 0
      // 16: getfield sixtwo/dj.Dpuot Ljava/util/Map;
      // 19: invokeinterface java/util/Map.entrySet ()Ljava/util/Set; 1
      // 1e: invokeinterface java/util/Set.iterator ()Ljava/util/Iterator; 1
      // 23: astore 5
      // 25: aload 5
      // 27: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 2c: ifeq f5
      // 2f: aload 5
      // 31: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 36: checkcast java/util/Map$Entry
      // 39: astore 6
      // 3b: aload 6
      // 3d: invokeinterface java/util/Map$Entry.getKey ()Ljava/lang/Object; 1
      // 42: checkcast sixtwo/dj$sE
      // 45: astore 7
      // 47: aload 6
      // 49: invokeinterface java/util/Map$Entry.getValue ()Ljava/lang/Object; 1
      // 4e: checkcast sixtwo/rk
      // 51: astore 8
      // 53: aload 0
      // 54: aload 7
      // 56: invokevirtual sixtwo/dj.afX (Lsixtwo/dj$sE;)Z
      // 59: istore 9
      // 5b: aload 8
      // 5d: iload 9
      // 5f: ifeq 6a
      // 62: fconst_1
      // 63: goto 6b
      // 66: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 69: athrow
      // 6a: fconst_0
      // 6b: invokevirtual sixtwo/rk.dhd (F)F
      // 6e: fstore 10
      // 70: iload 9
      // 72: aload 3
      // 73: ifnonnull af
      // 76: ifne ab
      // 79: goto 80
      // 7c: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 7f: athrow
      // 80: fload 10
      // 82: fconst_0
      // 83: fcmpl
      // 84: aload 3
      // 85: ifnonnull af
      // 88: goto 8f
      // 8b: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 8e: athrow
      // 8f: ifne ab
      // 92: goto 99
      // 95: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 98: athrow
      // 99: aload 5
      // 9b: invokeinterface java/util/Iterator.remove ()V 1
      // a0: aload 3
      // a1: ifnull 25
      // a4: goto ab
      // a7: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // aa: athrow
      // ab: fload 10
      // ad: fconst_0
      // ae: fcmpl
      // af: aload 3
      // b0: ifnonnull c5
      // b3: ifeq 25
      // b6: goto bd
      // b9: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // bc: athrow
      // bd: aload 7
      // bf: invokevirtual sixtwo/dj$sE.center ()Lnet/minecraft/class_243;
      // c2: invokestatic sixtwo/jJ.bIA (Lnet/minecraft/class_243;)Z
      // c5: aload 3
      // c6: ifnonnull f0
      // c9: ifne de
      // cc: goto d3
      // cf: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // d2: athrow
      // d3: aload 3
      // d4: ifnull 25
      // d7: goto de
      // da: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // dd: athrow
      // de: aload 4
      // e0: new sixtwo/dj$sB
      // e3: dup
      // e4: aload 7
      // e6: fload 10
      // e8: invokespecial sixtwo/dj$sB.<init> (Lsixtwo/dj$sE;F)V
      // eb: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // f0: pop
      // f1: aload 3
      // f2: ifnull 25
      // f5: aload 4
      // f7: areturn
   }

   private void afV(class_4587 var1, class_243 var2, List<dj$sB> var3) {
      this.age(var1, var2, var3);
   }

   private List<dj$sE> afY() {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dj.UFHNj J
      // 003: ldc2_w 7748243329977
      // 006: lxor
      // 007: lstore 1
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: new java/util/ArrayList
      // 00e: dup
      // 00f: invokespecial java/util/ArrayList.<init> ()V
      // 012: astore 4
      // 014: new java/util/HashSet
      // 017: dup
      // 018: invokespecial java/util/HashSet.<init> ()V
      // 01b: astore 5
      // 01d: astore 3
      // 01e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 021: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 024: invokevirtual net/minecraft/class_746.method_24515 ()Lnet/minecraft/class_2338;
      // 027: astore 6
      // 029: aload 0
      // 02a: getfield sixtwo/dj.LEzwX Lsixtwo/cC;
      // 02d: invokevirtual sixtwo/cC.VI ()D
      // 030: invokestatic net/minecraft/class_3532.method_15384 (D)I
      // 033: istore 7
      // 035: aload 0
      // 036: getfield sixtwo/dj.uQNEX Lsixtwo/cC;
      // 039: invokevirtual sixtwo/cC.VI ()D
      // 03c: invokestatic net/minecraft/class_3532.method_15384 (D)I
      // 03f: istore 8
      // 041: aload 6
      // 043: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 046: iload 8
      // 048: isub
      // 049: istore 9
      // 04b: iload 9
      // 04d: aload 6
      // 04f: invokevirtual net/minecraft/class_2338.method_10264 ()I
      // 052: iload 8
      // 054: iadd
      // 055: if_icmpgt 12f
      // 058: iload 7
      // 05a: ineg
      // 05b: aload 3
      // 05c: ifnonnull 136
      // 05f: istore 10
      // 061: iload 10
      // 063: iload 7
      // 065: if_icmpgt 128
      // 068: iload 7
      // 06a: ineg
      // 06b: aload 3
      // 06c: ifnonnull 04d
      // 06f: istore 11
      // 071: iload 11
      // 073: iload 7
      // 075: if_icmpgt 121
      // 078: new net/minecraft/class_2338
      // 07b: dup
      // 07c: aload 6
      // 07e: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 081: iload 10
      // 083: iadd
      // 084: iload 9
      // 086: aload 6
      // 088: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 08b: iload 11
      // 08d: iadd
      // 08e: invokespecial net/minecraft/class_2338.<init> (III)V
      // 091: astore 12
      // 093: aload 3
      // 094: ifnonnull 11d
      // 097: aload 5
      // 099: aload 12
      // 09b: invokeinterface java/util/Set.contains (Ljava/lang/Object;)Z 2
      // 0a0: aload 3
      // 0a1: ifnonnull 063
      // 0a4: goto 0ab
      // 0a7: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0aa: athrow
      // 0ab: ifne 11a
      // 0ae: aload 12
      // 0b0: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 0b3: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 0b6: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 0b9: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 0bc: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 0bf: aload 0
      // 0c0: invokevirtual sixtwo/dj.agk ()D
      // 0c3: dcmpl
      // 0c4: ifle 0d9
      // 0c7: goto 0ce
      // 0ca: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0cd: athrow
      // 0ce: aload 3
      // 0cf: ifnull 11a
      // 0d2: goto 0d9
      // 0d5: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0d8: athrow
      // 0d9: aload 0
      // 0da: aload 12
      // 0dc: invokevirtual sixtwo/dj.afZ (Lnet/minecraft/class_2338;)Lsixtwo/dj$sE;
      // 0df: astore 13
      // 0e1: aload 3
      // 0e2: ifnonnull 10d
      // 0e5: aload 13
      // 0e7: ifnonnull 0fc
      // 0ea: goto 0f1
      // 0ed: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f0: athrow
      // 0f1: aload 3
      // 0f2: ifnull 11a
      // 0f5: goto 0fc
      // 0f8: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0fb: athrow
      // 0fc: aload 4
      // 0fe: aload 13
      // 100: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 105: pop
      // 106: goto 10d
      // 109: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 10c: athrow
      // 10d: aload 5
      // 10f: aload 13
      // 111: invokevirtual sixtwo/dj$sE.cells ()Ljava/util/List;
      // 114: invokeinterface java/util/Set.addAll (Ljava/util/Collection;)Z 2
      // 119: pop
      // 11a: iinc 11 1
      // 11d: aload 3
      // 11e: ifnull 071
      // 121: iinc 10 1
      // 124: aload 3
      // 125: ifnull 061
      // 128: iinc 9 1
      // 12b: aload 3
      // 12c: ifnull 04b
      // 12f: aload 0
      // 130: getfield sixtwo/dj.oBPYh Lsixtwo/cJ;
      // 133: invokevirtual sixtwo/cJ.WF ()Z
      // 136: aload 3
      // 137: ifnonnull 159
      // 13a: ifne 14b
      // 13d: goto 144
      // 140: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 143: athrow
      // 144: aload 4
      // 146: areturn
      // 147: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 14a: athrow
      // 14b: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 14e: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 151: invokevirtual net/minecraft/class_638.method_31607 ()I
      // 154: istore 9
      // 156: iload 7
      // 158: ineg
      // 159: istore 10
      // 15b: iload 10
      // 15d: iload 7
      // 15f: if_icmpgt 21c
      // 162: iload 7
      // 164: ineg
      // 165: istore 11
      // 167: iload 11
      // 169: iload 7
      // 16b: if_icmpgt 215
      // 16e: new net/minecraft/class_2338
      // 171: dup
      // 172: aload 6
      // 174: invokevirtual net/minecraft/class_2338.method_10263 ()I
      // 177: iload 10
      // 179: iadd
      // 17a: iload 9
      // 17c: aload 6
      // 17e: invokevirtual net/minecraft/class_2338.method_10260 ()I
      // 181: iload 11
      // 183: iadd
      // 184: invokespecial net/minecraft/class_2338.<init> (III)V
      // 187: astore 12
      // 189: aload 12
      // 18b: invokevirtual net/minecraft/class_2338.method_46558 ()Lnet/minecraft/class_243;
      // 18e: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 191: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 194: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 197: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 19a: aload 0
      // 19b: invokevirtual sixtwo/dj.agk ()D
      // 19e: dcmpl
      // 19f: aload 3
      // 1a0: ifnonnull 15d
      // 1a3: aload 3
      // 1a4: ifnonnull 1d4
      // 1a7: ifle 1bc
      // 1aa: goto 1b1
      // 1ad: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1b0: athrow
      // 1b1: aload 3
      // 1b2: ifnull 20e
      // 1b5: goto 1bc
      // 1b8: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1bb: athrow
      // 1bc: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1bf: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 1c2: aload 12
      // 1c4: invokevirtual net/minecraft/class_638.method_8320 (Lnet/minecraft/class_2338;)Lnet/minecraft/class_2680;
      // 1c7: getstatic net/minecraft/class_2246.field_9987 Lnet/minecraft/class_2248;
      // 1ca: invokevirtual net/minecraft/class_2680.method_27852 (Lnet/minecraft/class_2248;)Z
      // 1cd: goto 1d4
      // 1d0: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1d3: athrow
      // 1d4: aload 3
      // 1d5: ifnonnull 20d
      // 1d8: ifeq 1ed
      // 1db: goto 1e2
      // 1de: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1e1: athrow
      // 1e2: aload 3
      // 1e3: ifnull 20e
      // 1e6: goto 1ed
      // 1e9: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 1ec: athrow
      // 1ed: aload 4
      // 1ef: new sixtwo/dj$sE
      // 1f2: dup
      // 1f3: aload 12
      // 1f5: invokestatic java/util/List.of (Ljava/lang/Object;)Ljava/util/List;
      // 1f8: getstatic sixtwo/dj$sD.btXid Lsixtwo/dj$sD;
      // 1fb: getstatic sixtwo/dj$sC.WdDaI Lsixtwo/dj$sC;
      // 1fe: invokespecial sixtwo/dj$sE.<init> (Ljava/util/List;Lsixtwo/dj$sD;Lsixtwo/dj$sC;)V
      // 201: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 206: goto 20d
      // 209: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 20c: athrow
      // 20d: pop
      // 20e: iinc 11 1
      // 211: aload 3
      // 212: ifnull 167
      // 215: iinc 10 1
      // 218: aload 3
      // 219: ifnull 15b
      // 21c: aload 4
      // 21e: areturn
   }

   private boolean afX(dj$sE param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.NullPointerException: Cannot invoke "org.jetbrains.java.decompiler.code.cfg.ExceptionRangeCFG.isCircular()" because "range" is null
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.graphToStatement(DomHelper.java:84)
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:203)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/dj.UFHNj J
      // 003: ldc2_w 134101995958310
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: getfield sixtwo/dj.soBDJ Ljava/util/List;
      // 011: aload 1
      // 012: invokeinterface java/util/List.contains (Ljava/lang/Object;)Z 2
      // 017: aload 4
      // 019: ifnonnull 041
      // 01c: ifne 02c
      // 01f: goto 026
      // 022: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 025: athrow
      // 026: bipush 0
      // 027: ireturn
      // 028: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 02b: athrow
      // 02c: aload 1
      // 02d: invokevirtual sixtwo/dj$sE.center ()Lnet/minecraft/class_243;
      // 030: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 033: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 036: invokevirtual net/minecraft/class_746.method_73189 ()Lnet/minecraft/class_243;
      // 039: invokevirtual net/minecraft/class_243.method_1025 (Lnet/minecraft/class_243;)D
      // 03c: aload 0
      // 03d: invokevirtual sixtwo/dj.agk ()D
      // 040: dcmpl
      // 041: aload 4
      // 043: ifnonnull 05d
      // 046: ifle 056
      // 049: goto 050
      // 04c: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 04f: athrow
      // 050: bipush 0
      // 051: ireturn
      // 052: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 055: athrow
      // 056: aload 0
      // 057: getfield sixtwo/dj.ObAdu Lsixtwo/cJ;
      // 05a: invokevirtual sixtwo/cJ.WF ()Z
      // 05d: aload 4
      // 05f: ifnonnull 0a2
      // 062: ifeq 09b
      // 065: goto 06c
      // 068: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 06b: athrow
      // 06c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 06f: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 072: invokevirtual net/minecraft/class_746.method_5829 ()Lnet/minecraft/class_238;
      // 075: aload 1
      // 076: ldc2_w 0.5
      // 079: invokevirtual sixtwo/dj$sE.toBox (D)Lnet/minecraft/class_238;
      // 07c: invokevirtual net/minecraft/class_238.method_994 (Lnet/minecraft/class_238;)Z
      // 07f: aload 4
      // 081: ifnonnull 0a2
      // 084: goto 08b
      // 087: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 08a: athrow
      // 08b: ifeq 09b
      // 08e: goto 095
      // 091: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 094: athrow
      // 095: bipush 0
      // 096: ireturn
      // 097: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 09a: athrow
      // 09b: aload 1
      // 09c: invokevirtual sixtwo/dj$sE.safety ()Lsixtwo/dj$sD;
      // 09f: invokevirtual sixtwo/dj$sD.ordinal ()I
      // 0a2: aload 4
      // 0a4: ifnonnull 10b
      // 0a7: tableswitch 33 0 3 47 52 76 93
      // 0c4: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0c7: athrow
      // 0c8: new java/lang/MatchException
      // 0cb: dup
      // 0cc: aconst_null
      // 0cd: aconst_null
      // 0ce: invokespecial java/lang/MatchException.<init> (Ljava/lang/String;Ljava/lang/Throwable;)V
      // 0d1: athrow
      // 0d2: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0d5: athrow
      // 0d6: aload 4
      // 0d8: ifnull 11a
      // 0db: aload 0
      // 0dc: getfield sixtwo/dj.AMAdS Lsixtwo/cJ;
      // 0df: invokevirtual sixtwo/cJ.WF ()Z
      // 0e2: ifeq 195
      // 0e5: goto 0ec
      // 0e8: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0eb: athrow
      // 0ec: goto 11a
      // 0ef: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 0f2: athrow
      // 0f3: aload 0
      // 0f4: getfield sixtwo/dj.vupnD Lsixtwo/cJ;
      // 0f7: invokevirtual sixtwo/cJ.WF ()Z
      // 0fa: ifeq 195
      // 0fd: goto 11a
      // 100: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 103: athrow
      // 104: aload 0
      // 105: getfield sixtwo/dj.oBPYh Lsixtwo/cJ;
      // 108: invokevirtual sixtwo/cJ.WF ()Z
      // 10b: aload 4
      // 10d: ifnonnull 128
      // 110: ifeq 195
      // 113: goto 11a
      // 116: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 119: athrow
      // 11a: aload 1
      // 11b: invokevirtual sixtwo/dj$sE.shape ()Lsixtwo/dj$sC;
      // 11e: invokevirtual sixtwo/dj$sC.ordinal ()I
      // 121: goto 128
      // 124: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 127: athrow
      // 128: aload 4
      // 12a: ifnonnull 182
      // 12d: tableswitch 35 0 3 49 54 78 49
      // 14c: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 14f: athrow
      // 150: new java/lang/MatchException
      // 153: dup
      // 154: aconst_null
      // 155: aconst_null
      // 156: invokespecial java/lang/MatchException.<init> (Ljava/lang/String;Ljava/lang/Throwable;)V
      // 159: athrow
      // 15a: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 15d: athrow
      // 15e: aload 4
      // 160: ifnull 191
      // 163: aload 0
      // 164: getfield sixtwo/dj.NUWIx Lsixtwo/cJ;
      // 167: invokevirtual sixtwo/cJ.WF ()Z
      // 16a: ifeq 195
      // 16d: goto 174
      // 170: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 173: athrow
      // 174: goto 191
      // 177: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 17a: athrow
      // 17b: aload 0
      // 17c: getfield sixtwo/dj.iKDmr Lsixtwo/cJ;
      // 17f: invokevirtual sixtwo/cJ.WF ()Z
      // 182: aload 4
      // 184: ifnonnull 192
      // 187: ifeq 195
      // 18a: goto 191
      // 18d: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 190: athrow
      // 191: bipush 1
      // 192: goto 196
      // 195: bipush 0
      // 196: ireturn
   }

   private static CallSite agu(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("agt".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/dj" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   @hG
   public void afS(go$sX param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/dj.UFHNj J
      // 03: ldc2_w 124044132889504
      // 06: lxor
      // 07: lstore 2
      // 08: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0b: astore 4
      // 0d: aload 0
      // 0e: invokevirtual sixtwo/dj.bab ()Z
      // 11: ifeq 40
      // 14: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 17: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1a: aload 4
      // 1c: ifnonnull 3d
      // 1f: goto 26
      // 22: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 25: athrow
      // 26: ifnull 40
      // 29: goto 30
      // 2c: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 2f: athrow
      // 30: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 33: invokevirtual net/minecraft/class_310.method_1560 ()Lnet/minecraft/class_1297;
      // 36: goto 3d
      // 39: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 3c: athrow
      // 3d: ifnonnull 41
      // 40: return
      // 41: aload 0
      // 42: invokevirtual sixtwo/dj.afW ()V
      // 45: aload 0
      // 46: getfield sixtwo/dj.Dpuot Ljava/util/Map;
      // 49: invokeinterface java/util/Map.isEmpty ()Z 1
      // 4e: ifeq 56
      // 51: return
      // 52: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 55: athrow
      // 56: aload 1
      // 57: invokevirtual sixtwo/go$sX.bbh ()Lnet/minecraft/class_4587;
      // 5a: astore 5
      // 5c: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 5f: getfield net/minecraft/class_310.field_1773 Lnet/minecraft/class_757;
      // 62: invokevirtual net/minecraft/class_757.method_19418 ()Lnet/minecraft/class_4184;
      // 65: invokevirtual net/minecraft/class_4184.method_71156 ()Lnet/minecraft/class_243;
      // 68: invokevirtual net/minecraft/class_243.method_22882 ()Lnet/minecraft/class_243;
      // 6b: astore 6
      // 6d: aload 0
      // 6e: invokevirtual sixtwo/dj.afT ()Ljava/util/List;
      // 71: astore 7
      // 73: aload 7
      // 75: invokeinterface java/util/List.isEmpty ()Z 1
      // 7a: aload 4
      // 7c: ifnonnull 9d
      // 7f: ifeq 8a
      // 82: goto 89
      // 85: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 88: athrow
      // 89: return
      // 8a: aload 0
      // 8b: aload 4
      // 8d: ifnonnull b0
      // 90: getfield sixtwo/dj.lvORN Lsixtwo/cu;
      // 93: invokevirtual sixtwo/cu.SZ ()Z
      // 96: goto 9d
      // 99: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // 9c: athrow
      // 9d: ifeq af
      // a0: aload 0
      // a1: aload 5
      // a3: aload 6
      // a5: aload 7
      // a7: invokevirtual sixtwo/dj.afU (Lnet/minecraft/class_4587;Lnet/minecraft/class_243;Ljava/util/List;)V
      // aa: return
      // ab: invokestatic sixtwo/dj.agn (Ljava/lang/Throwable;)Ljava/lang/Throwable;
      // ae: athrow
      // af: aload 0
      // b0: aload 5
      // b2: aload 6
      // b4: aload 7
      // b6: invokevirtual sixtwo/dj.afV (Lnet/minecraft/class_4587;Lnet/minecraft/class_243;Ljava/util/List;)V
      // b9: return
   }

   @Override
   public void YO() {
      super.YO();
      this.soBDJ.clear();
      this.Dpuot.clear();
   }
}
