package sixtwo;

import com.mojang.blaze3d.platform.DepthTestFunction;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_243;
import net.minecraft.class_4587;

public class cR extends gg implements lG {
   private final ct imXIw;
   private final cu nVChr;
   private final cu Taplw;
   private final cu sDuYV;
   private final cu GZMuF;
   private final cu HzYvJ;
   private final cu wHlEJ;
   private final cu BUBSR;
   private final cu OJUIx;
   private final cG mNCfB;
   private final ct ywNJH;
   private final cu VMcLW;
   private final cu BjCne;
   private final cC lyHys;
   private final cC mNkAv;
   private final cv pEdgo;
   private final cw Ubjvg;
   private final cw UYbIm;
   private final cw IIZjW;
   private final cw czNck;
   private final cw cfNnD;
   private final cw hQcMD;
   private final cJ aTbJe;
   private final List<mq> ImFtb;
   private final kS wccSb;
   private static final long vBOIC = gb.aYR(5673042269858908484L, -8380775605659325189L, MethodHandles.lookup().lookupClass()).a(271803318299346L);
   private static final String ZDept;
   private static final long[] RFnIl;
   private static final Integer[] ECHJE;
   private static final Map QOHbp;

   public cR() {
      long var1 = vBOIC ^ 10507493699713L;
      super(gf.aZL(YZ<"y">(22520, 1493296010128790214L ^ var1), false, gh.nOCvV));
      int[] var10004 = new int[YZ<"y">(28585, 6660300548009569003L ^ var1)];
      var10004[0] = YZ<"y">(21657, 2080638016839029202L ^ var1);
      var10004[1] = YZ<"y">(25853, 5621868414226244000L ^ var1);
      var10004[2] = YZ<"y">(30277, 8616061483705807639L ^ var1);
      var10004[3] = YZ<"y">(21324, 4609041400884663826L ^ var1);
      var10004[4] = YZ<"y">(28695, 2512425740752926019L ^ var1);
      var10004[5] = YZ<"y">(8831, 6039910841994045200L ^ var1);
      var10004[YZ<"y">(9228, 8218687780446724400L ^ var1)] = YZ<"y">(14302, 84885213662704306L ^ var1);
      var10004[YZ<"y">(13764, 3466706989969502392L ^ var1)] = YZ<"y">(28596, 1461986898732100290L ^ var1);
      var10004[YZ<"y">(21229, 4401323862958610314L ^ var1)] = YZ<"y">(17862, 7661660978632392888L ^ var1);
      this.imXIw = new ct(this, mr.clS(var10004));
      this.nVChr = new cu(
         this.imXIw,
         mr.clS(
            new int[]{
               YZ<"y">(2233, 235417662147743179L ^ var1),
               YZ<"y">(19677, 7947650536068942306L ^ var1),
               YZ<"y">(20862, 7670777343639360527L ^ var1),
               YZ<"y">(3755, 2424368682190392283L ^ var1),
               YZ<"y">(22902, 4331866685655587854L ^ var1)
            }
         )
      );
      ct var10003 = this.imXIw;
      var10004 = new int[YZ<"y">(28243, 7103786891713030935L ^ var1)];
      var10004[0] = YZ<"y">(9817, 3416247479130612535L ^ var1);
      var10004[1] = YZ<"y">(12686, 8809337384406578412L ^ var1);
      var10004[2] = YZ<"y">(21146, 3540716453033088997L ^ var1);
      var10004[3] = YZ<"y">(12487, 6644244146369590778L ^ var1);
      var10004[4] = YZ<"y">(29923, 1864440740402868644L ^ var1);
      var10004[5] = YZ<"y">(7645, 2603514397851408558L ^ var1);
      var10004[YZ<"y">(26720, 459010044265770287L ^ var1)] = YZ<"y">(20862, 7670777343639360527L ^ var1);
      var10004[YZ<"y">(22769, 756133714762276256L ^ var1)] = YZ<"y">(3869, 7152078053678434896L ^ var1);
      var10004[YZ<"y">(2936, 3294568595960843804L ^ var1)] = YZ<"y">(27201, 7186334315158646528L ^ var1);
      var10004[YZ<"y">(10406, 3515590871425445267L ^ var1)] = YZ<"y">(22902, 4331866685655587854L ^ var1);
      this.Taplw = new cu(var10003, mr.clS(var10004));
      this.sDuYV = new cu(
         this.imXIw,
         mr.clS(
            new int[]{
               YZ<"y">(2360, 2708277597919759460L ^ var1),
               YZ<"y">(925, 5754164175581333156L ^ var1),
               YZ<"y">(2083, 4689983010200112473L ^ var1),
               YZ<"y">(22902, 4331866685655587854L ^ var1),
               YZ<"y">(19677, 7947650536068942306L ^ var1)
            }
         )
      );
      var10003 = this.imXIw;
      var10004 = new int[YZ<"y">(26720, 459010044265770287L ^ var1)];
      var10004[0] = YZ<"y">(147, 3040283722155705850L ^ var1);
      var10004[1] = YZ<"y">(27201, 7186334315158646528L ^ var1);
      var10004[2] = YZ<"y">(20862, 7670777343639360527L ^ var1);
      var10004[3] = YZ<"y">(3755, 2424368682190392283L ^ var1);
      var10004[4] = YZ<"y">(19677, 7947650536068942306L ^ var1);
      var10004[5] = YZ<"y">(22902, 4331866685655587854L ^ var1);
      this.GZMuF = new cu(var10003, mr.clS(var10004));
      var10003 = this.imXIw;
      var10004 = new int[YZ<"y">(2936, 3294568595960843804L ^ var1)];
      var10004[0] = YZ<"y">(23652, 7898348134258120989L ^ var1);
      var10004[1] = YZ<"y">(31812, 5958764554414995741L ^ var1);
      var10004[2] = YZ<"y">(20862, 7670777343639360527L ^ var1);
      var10004[3] = YZ<"y">(31180, 1715341795638656247L ^ var1);
      var10004[4] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[5] = YZ<"y">(27352, 3398365983352008606L ^ var1);
      var10004[YZ<"y">(26720, 459010044265770287L ^ var1)] = YZ<"y">(24165, 4180219252313529139L ^ var1);
      var10004[YZ<"y">(22769, 756133714762276256L ^ var1)] = YZ<"y">(22902, 4331866685655587854L ^ var1);
      this.HzYvJ = new cu(var10003, mr.clS(var10004));
      var10003 = this.imXIw;
      var10004 = new int[YZ<"y">(2936, 3294568595960843804L ^ var1)];
      var10004[0] = YZ<"y">(11572, 2644731330373085257L ^ var1);
      var10004[1] = YZ<"y">(2506, 1739570081184599215L ^ var1);
      var10004[2] = YZ<"y">(18560, 6789521499863780800L ^ var1);
      var10004[3] = YZ<"y">(27352, 3398365983352008606L ^ var1);
      var10004[4] = YZ<"y">(3795, 8139025952873237405L ^ var1);
      var10004[5] = YZ<"y">(27201, 7186334315158646528L ^ var1);
      var10004[YZ<"y">(26720, 459010044265770287L ^ var1)] = YZ<"y">(3755, 2424368682190392283L ^ var1);
      var10004[YZ<"y">(22769, 756133714762276256L ^ var1)] = YZ<"y">(22902, 4331866685655587854L ^ var1);
      this.wHlEJ = new cu(var10003, mr.clS(var10004));
      this.BUBSR = new cu(
         this.imXIw,
         mr.clS(
            new int[]{
               YZ<"y">(4109, 3797209537744131446L ^ var1),
               YZ<"y">(2083, 4689983010200112473L ^ var1),
               YZ<"y">(2083, 4689983010200112473L ^ var1),
               YZ<"y">(27352, 3398365983352008606L ^ var1),
               YZ<"y">(22902, 4331866685655587854L ^ var1)
            }
         )
      );
      var10003 = this.imXIw;
      var10004 = new int[YZ<"y">(26720, 459010044265770287L ^ var1)];
      var10004[0] = YZ<"y">(30725, 1410407464544845158L ^ var1);
      var10004[1] = YZ<"y">(7645, 2603514397851408558L ^ var1);
      var10004[2] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[3] = YZ<"y">(5644, 1629645949971944256L ^ var1);
      var10004[4] = YZ<"y">(3795, 8139025952873237405L ^ var1);
      var10004[5] = YZ<"y">(22902, 4331866685655587854L ^ var1);
      this.OJUIx = new cu(var10003, mr.clS(var10004));
      this.mNCfB = new cG(
            this,
            mr.clS(
               new int[]{
                  YZ<"y">(26265, 6867321241724167110L ^ var1),
                  YZ<"y">(2083, 4689983010200112473L ^ var1),
                  YZ<"y">(7645, 2603514397851408558L ^ var1),
                  YZ<"y">(2083, 4689983010200112473L ^ var1),
                  YZ<"y">(3755, 2424368682190392283L ^ var1)
               }
            )
         )
         .Uf(rD.dlM().bjG().bis());
      var10004 = new int[YZ<"y">(22769, 756133714762276256L ^ var1)];
      var10004[0] = YZ<"y">(10083, 9155337164836692521L ^ var1);
      var10004[1] = YZ<"y">(2506, 1739570081184599215L ^ var1);
      var10004[2] = YZ<"y">(10073, 2834250017042752109L ^ var1);
      var10004[3] = YZ<"y">(22902, 4331866685655587854L ^ var1);
      var10004[4] = YZ<"y">(31812, 5958764554414995741L ^ var1);
      var10004[5] = YZ<"y">(18266, 6103312749168853522L ^ var1);
      var10004[YZ<"y">(26720, 459010044265770287L ^ var1)] = YZ<"y">(22902, 4331866685655587854L ^ var1);
      this.ywNJH = new ct(this, mr.clS(var10004));
      this.VMcLW = new cu(
         this.ywNJH,
         mr.clS(new int[]{YZ<"y">(15730, 3381985277099767839L ^ var1), YZ<"y">(7645, 2603514397851408558L ^ var1), YZ<"y">(11872, 4867876479838219063L ^ var1)})
      );
      this.BjCne = new cu(
         this.ywNJH,
         mr.clS(
            new int[]{
               YZ<"y">(14571, 3993627746932981176L ^ var1),
               YZ<"y">(3755, 2424368682190392283L ^ var1),
               YZ<"y">(2083, 4689983010200112473L ^ var1),
               YZ<"y">(4891, 2857420357419456113L ^ var1)
            }
         )
      );
      this.lyHys = new cC(
            this,
            mr.clS(
               new int[]{
                  YZ<"y">(9817, 3416247479130612535L ^ var1),
                  YZ<"y">(18266, 6103312749168853522L ^ var1),
                  YZ<"y">(20862, 7670777343639360527L ^ var1),
                  YZ<"y">(7645, 2603514397851408558L ^ var1),
                  YZ<"y">(27201, 7186334315158646528L ^ var1)
               }
            )
         )
         .Vy(0.01)
         .Vw(1.0)
         .Vx(10.0)
         .VA(3.0);
      var10004 = new int[YZ<"y">(26720, 459010044265770287L ^ var1)];
      var10004[0] = YZ<"y">(10020, 8040477754394796563L ^ var1);
      var10004[1] = YZ<"y">(12696, 4085678592412611744L ^ var1);
      var10004[2] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[3] = YZ<"y">(5644, 1629645949971944256L ^ var1);
      var10004[4] = YZ<"y">(27352, 3398365983352008606L ^ var1);
      var10004[5] = YZ<"y">(19677, 7947650536068942306L ^ var1);
      this.mNkAv = new cC(this, mr.clS(var10004)).Vy(10.0).Vw(20.0).Vx(800.0).VA(200.0);
      var10004 = new int[YZ<"y">(26720, 459010044265770287L ^ var1)];
      var10004[0] = YZ<"y">(30539, 7580616553425449499L ^ var1);
      var10004[1] = YZ<"y">(3795, 8139025952873237405L ^ var1);
      var10004[2] = YZ<"y">(3795, 8139025952873237405L ^ var1);
      var10004[3] = YZ<"y">(16693, 2950090646056207472L ^ var1);
      var10004[4] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[5] = YZ<"y">(27352, 3398365983352008606L ^ var1);
      this.pEdgo = new cv(this, mr.clS(var10004));
      this.Ubjvg = new cw(
            this.pEdgo,
            mr.clS(
               new int[]{
                  YZ<"y">(32381, 963181288282569534L ^ var1),
                  YZ<"y">(3795, 8139025952873237405L ^ var1),
                  YZ<"y">(7645, 2603514397851408558L ^ var1),
                  YZ<"y">(27201, 7186334315158646528L ^ var1)
               }
            )
         )
         .Tz();
      cv var7 = this.pEdgo;
      var10004 = new int[YZ<"y">(2936, 3294568595960843804L ^ var1)];
      var10004[0] = YZ<"y">(19257, 2323166810613878349L ^ var1);
      var10004[1] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[2] = YZ<"y">(26706, 1396468418656021812L ^ var1);
      var10004[3] = YZ<"y">(27201, 7186334315158646528L ^ var1);
      var10004[4] = YZ<"y">(12696, 4085678592412611744L ^ var1);
      var10004[5] = YZ<"y">(27201, 7186334315158646528L ^ var1);
      var10004[YZ<"y">(26720, 459010044265770287L ^ var1)] = YZ<"y">(27352, 3398365983352008606L ^ var1);
      var10004[YZ<"y">(22769, 756133714762276256L ^ var1)] = YZ<"y">(19677, 7947650536068942306L ^ var1);
      this.UYbIm = new cw(var7, mr.clS(var10004));
      cv var8 = this.pEdgo;
      var10004 = new int[YZ<"y">(674, 3148663289406441410L ^ var1)];
      var10004[0] = YZ<"y">(10083, 9155337164836692521L ^ var1);
      var10004[1] = YZ<"y">(27201, 7186334315158646528L ^ var1);
      var10004[2] = YZ<"y">(20862, 7670777343639360527L ^ var1);
      var10004[3] = YZ<"y">(3755, 2424368682190392283L ^ var1);
      var10004[4] = YZ<"y">(7645, 2603514397851408558L ^ var1);
      var10004[5] = YZ<"y">(5920, 2302890705542140501L ^ var1);
      var10004[YZ<"y">(26720, 459010044265770287L ^ var1)] = YZ<"y">(10354, 4664425171151908122L ^ var1);
      var10004[YZ<"y">(22769, 756133714762276256L ^ var1)] = YZ<"y">(2506, 1739570081184599215L ^ var1);
      var10004[YZ<"y">(2936, 3294568595960843804L ^ var1)] = YZ<"y">(3755, 2424368682190392283L ^ var1);
      var10004[YZ<"y">(10406, 3515590871425445267L ^ var1)] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[YZ<"y">(11310, 6259119661951543670L ^ var1)] = YZ<"y">(29123, 2707882884296750329L ^ var1);
      this.IIZjW = new cw(var8, mr.clS(var10004));
      cv var9 = this.pEdgo;
      var10004 = new int[YZ<"y">(11310, 6259119661951543670L ^ var1)];
      var10004[0] = YZ<"y">(30539, 7580616553425449499L ^ var1);
      var10004[1] = YZ<"y">(3755, 2424368682190392283L ^ var1);
      var10004[2] = YZ<"y">(3755, 2424368682190392283L ^ var1);
      var10004[3] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[4] = YZ<"y">(29123, 2707882884296750329L ^ var1);
      var10004[5] = YZ<"y">(5920, 2302890705542140501L ^ var1);
      var10004[YZ<"y">(26720, 459010044265770287L ^ var1)] = YZ<"y">(9817, 3416247479130612535L ^ var1);
      var10004[YZ<"y">(22769, 756133714762276256L ^ var1)] = YZ<"y">(2506, 1739570081184599215L ^ var1);
      var10004[YZ<"y">(2936, 3294568595960843804L ^ var1)] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[YZ<"y">(10406, 3515590871425445267L ^ var1)] = YZ<"y">(19677, 7947650536068942306L ^ var1);
      this.czNck = new cw(var9, mr.clS(var10004));
      cv var10 = this.pEdgo;
      var10004 = new int[YZ<"y">(23018, 7312255491905789085L ^ var1)];
      var10004[0] = YZ<"y">(10354, 4664425171151908122L ^ var1);
      var10004[1] = YZ<"y">(3755, 2424368682190392283L ^ var1);
      var10004[2] = YZ<"y">(31812, 5958764554414995741L ^ var1);
      var10004[3] = YZ<"y">(3795, 8139025952873237405L ^ var1);
      var10004[4] = YZ<"y">(27201, 7186334315158646528L ^ var1);
      var10004[5] = YZ<"y">(27352, 3398365983352008606L ^ var1);
      var10004[YZ<"y">(26720, 459010044265770287L ^ var1)] = YZ<"y">(19677, 7947650536068942306L ^ var1);
      var10004[YZ<"y">(22769, 756133714762276256L ^ var1)] = YZ<"y">(5920, 2302890705542140501L ^ var1);
      var10004[YZ<"y">(2936, 3294568595960843804L ^ var1)] = YZ<"y">(10354, 4664425171151908122L ^ var1);
      var10004[YZ<"y">(10406, 3515590871425445267L ^ var1)] = YZ<"y">(2506, 1739570081184599215L ^ var1);
      var10004[YZ<"y">(11310, 6259119661951543670L ^ var1)] = YZ<"y">(3755, 2424368682190392283L ^ var1);
      var10004[YZ<"y">(24371, 1901128149214992984L ^ var1)] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[YZ<"y">(26985, 5182909869708291123L ^ var1)] = YZ<"y">(29123, 2707882884296750329L ^ var1);
      this.cfNnD = new cw(var10, mr.clS(var10004));
      cv var11 = this.pEdgo;
      var10004 = new int[YZ<"y">(10406, 3515590871425445267L ^ var1)];
      var10004[0] = YZ<"y">(10354, 4664425171151908122L ^ var1);
      var10004[1] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[2] = YZ<"y">(19677, 7947650536068942306L ^ var1);
      var10004[3] = YZ<"y">(27201, 7186334315158646528L ^ var1);
      var10004[4] = YZ<"y">(12696, 4085678592412611744L ^ var1);
      var10004[5] = YZ<"y">(5920, 2302890705542140501L ^ var1);
      var10004[YZ<"y">(26720, 459010044265770287L ^ var1)] = YZ<"y">(10083, 9155337164836692521L ^ var1);
      var10004[YZ<"y">(22769, 756133714762276256L ^ var1)] = YZ<"y">(2083, 4689983010200112473L ^ var1);
      var10004[YZ<"y">(2936, 3294568595960843804L ^ var1)] = YZ<"y">(29968, 8067324109009956933L ^ var1);
      this.hQcMD = new cw(var11, mr.clS(var10004));
      this.aTbJe = new cJ(
            this,
            mr.clS(
               new int[]{
                  YZ<"y">(29746, 5990538828698661225L ^ var1),
                  YZ<"y">(7645, 2603514397851408558L ^ var1),
                  YZ<"y">(2083, 4689983010200112473L ^ var1),
                  YZ<"y">(29123, 2707882884296750329L ^ var1)
               }
            )
         )
         .WE(true);
      this.ImFtb = new ArrayList<>();
      this.wccSb = XSRvt.defaultState().bVG(DepthTestFunction.LEQUAL_DEPTH_TEST);
   }

   static {
      long var11 = vBOIC ^ 18149554341388L;
      Cipher var13;
      Cipher var10000 = var13 = Cipher.getInstance("DES/CBC/PKCS5Padding");
      SecretKeyFactory var10002 = SecretKeyFactory.getInstance("DES");
      byte[] var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var14 = 1; var14 < 8; var14++) {
         var10003[var14] = (byte)(var11 << var14 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      byte[] var15 = var13.doFinal("{«ä´_;7Z".getBytes("ISO-8859-1"));
      String var22 = YW(var15).intern();
      int var10001 = -1;
      ZDept = var22;
      QOHbp = new HashMap(13);
      Cipher var0;
      var10000 = var0 = Cipher.getInstance("DES/CBC/NoPadding");
      var10002 = SecretKeyFactory.getInstance("DES");
      var10003 = new byte[]{(byte)(var11 >>> 56), 0, 0, 0, 0, 0, 0, 0};

      for (int var1 = 1; var1 < 8; var1++) {
         var10003[var1] = (byte)(var11 << var1 * 8 >>> 56);
      }

      var10000.init(2, var10002.generateSecret(new DESKeySpec(var10003)), new IvParameterSpec(new byte[8]));
      long[] var6 = new long[75];
      int var3 = 0;
      String var4 = "0$\u0013¾²cH×6þL~\u000büYR\fiÆ\u0014~\u0089ö&-8ëo¡\u0010\u0012ìCs,=Çì\u0014|r»\u00ad\u0003×\u0013¾<%Ã\u0017\u000f¥\u008fd\u0092Ö¤\u009fEe.Î\u0081ß¡^íù\u000f\u008e\u009eÁì\u0005ýïò¶hl\nÞ\u0091IõA\u0007}8[¯xw<¶ÑoE\u009bðÃ\u0011¡q>\u0015\u000f\u0018ÕÞÎ\u0007\u0010ó\u0006ãdÂ\u0081¬\u0004\u0005 jEJ?yàô&V¾ë\u0003D2\u000b4¼.\u007fÙ8pÝÜ2û¸1g¹\u0012Þrµí\u0010\u0082ÝRVç^\u0088C,Á\u00adÊè»Ò¬Ü¤%j7\u0000Î%mZ\u0089\u008aá-\u0011e¥«Ë°3\u0016`LþÞ!Úæ0ÔÍºM\bÏ\r\u001eþtd.Õøe¾-\u0003X½m\u008f\u0094ö\u0091èÂ«t\t$Ùì\u0010MG\u0006>å1\u0017epÆ£\u0007r÷\u0084 y·Ü\u0015\u0017Ù\u00800µÜ¬¬¾§'³\u0082&y+wf;$ê-Ã\u0098\u0004¸ãÕ\rT/®äO\u0015U`^RÙ#»ÕQâkñ0Rý\u0006#\u000f\u0094Ep!RE ólòÓ\u0007ö\u008bÅ2øí/HOEæ¹\u0087®På;»\u009f~\u0001\u009dù5²teØSD\u009b²\u001fb\u0018@ää\u0006¦ºnö\u0093dj\nBÙ£%åo´<\u009b,¶÷\u0017#}\u0084\u0003°\u0093wpQü\u0091\u0086º^\u0095]oç\u009d»\u008cB\u0090Gt\u0007B\u00065IÆ6g¹\fþÞ\u001bÇ;\u001eÌ\u0096w\\ýNÒ\u0092\u008eLÇbG\u0019\u009eÞ¢\u0086ÎU\u0086C\u008c\u0081=f\u0080AÚ4\u0083õØn*ö£Sãzëb©³\u0017Yz+qõCR¤<äÓ\u008dÜÁ\u0080'§n¦ýº\u0004ô¶\u0001\u0094`jÉ\u0091u5\u0084!¿\u0005ß\u0088\u0003:Ü\u0018+ðnj¼\u0098I\u0082þrKËÙD\u009c£lôqHCÈµá*!ºÖM¯,\u009c+\u0088E>¨E74\u007f/;dÕ\u0015à\u000fa¢\bø$\u008fðÎ7ç¨ªx°_,1Vp\u0010h\u0083ß";
      int var5 = "0$\u0013¾²cH×6þL~\u000büYR\fiÆ\u0014~\u0089ö&-8ëo¡\u0010\u0012ìCs,=Çì\u0014|r»\u00ad\u0003×\u0013¾<%Ã\u0017\u000f¥\u008fd\u0092Ö¤\u009fEe.Î\u0081ß¡^íù\u000f\u008e\u009eÁì\u0005ýïò¶hl\nÞ\u0091IõA\u0007}8[¯xw<¶ÑoE\u009bðÃ\u0011¡q>\u0015\u000f\u0018ÕÞÎ\u0007\u0010ó\u0006ãdÂ\u0081¬\u0004\u0005 jEJ?yàô&V¾ë\u0003D2\u000b4¼.\u007fÙ8pÝÜ2û¸1g¹\u0012Þrµí\u0010\u0082ÝRVç^\u0088C,Á\u00adÊè»Ò¬Ü¤%j7\u0000Î%mZ\u0089\u008aá-\u0011e¥«Ë°3\u0016`LþÞ!Úæ0ÔÍºM\bÏ\r\u001eþtd.Õøe¾-\u0003X½m\u008f\u0094ö\u0091èÂ«t\t$Ùì\u0010MG\u0006>å1\u0017epÆ£\u0007r÷\u0084 y·Ü\u0015\u0017Ù\u00800µÜ¬¬¾§'³\u0082&y+wf;$ê-Ã\u0098\u0004¸ãÕ\rT/®äO\u0015U`^RÙ#»ÕQâkñ0Rý\u0006#\u000f\u0094Ep!RE ólòÓ\u0007ö\u008bÅ2øí/HOEæ¹\u0087®På;»\u009f~\u0001\u009dù5²teØSD\u009b²\u001fb\u0018@ää\u0006¦ºnö\u0093dj\nBÙ£%åo´<\u009b,¶÷\u0017#}\u0084\u0003°\u0093wpQü\u0091\u0086º^\u0095]oç\u009d»\u008cB\u0090Gt\u0007B\u00065IÆ6g¹\fþÞ\u001bÇ;\u001eÌ\u0096w\\ýNÒ\u0092\u008eLÇbG\u0019\u009eÞ¢\u0086ÎU\u0086C\u008c\u0081=f\u0080AÚ4\u0083õØn*ö£Sãzëb©³\u0017Yz+qõCR¤<äÓ\u008dÜÁ\u0080'§n¦ýº\u0004ô¶\u0001\u0094`jÉ\u0091u5\u0084!¿\u0005ß\u0088\u0003:Ü\u0018+ðnj¼\u0098I\u0082þrKËÙD\u009c£lôqHCÈµá*!ºÖM¯,\u009c+\u0088E>¨E74\u007f/;dÕ\u0015à\u000fa¢\bø$\u008fðÎ7ç¨ªx°_,1Vp\u0010h\u0083ß"
         .length();
      byte var2 = 0;

      label29:
      while (true) {
         var10001 = var2;
         var2 += 8;
         byte[] var7 = var4.substring(var10001, var2).getBytes("ISO-8859-1");
         long[] var18 = var6;
         var10001 = var3++;
         long var24 = (var7[0] & 255L) << 56
            | (var7[1] & 255L) << 48
            | (var7[2] & 255L) << 40
            | (var7[3] & 255L) << 32
            | (var7[4] & 255L) << 24
            | (var7[5] & 255L) << 16
            | (var7[6] & 255L) << 8
            | var7[7] & 255L;
         byte var27 = -1;

         while (true) {
            long var8 = var24;
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
            long var29 = (var10[0] & 255L) << 56
               | (var10[1] & 255L) << 48
               | (var10[2] & 255L) << 40
               | (var10[3] & 255L) << 32
               | (var10[4] & 255L) << 24
               | (var10[5] & 255L) << 16
               | (var10[6] & 255L) << 8
               | var10[7] & 255L;
            switch (var27) {
               case 0:
                  var18[var10001] = var29;
                  if (var2 >= var5) {
                     RFnIl = var6;
                     ECHJE = new Integer[75];
                     return;
                  }
                  break;
               default:
                  var18[var10001] = var29;
                  if (var2 < var5) {
                     continue label29;
                  }

                  var4 = "5\u009f¯\u0087b\n|Dô\t\u001c)á\u001b*è";
                  var5 = "5\u009f¯\u0087b\n|Dô\t\u001c)á\u001b*è".length();
                  var2 = 0;
            }

            byte var21 = var2;
            var2 += 8;
            var7 = var4.substring(var21, var2).getBytes("ISO-8859-1");
            var18 = var6;
            var10001 = var3++;
            var24 = (var7[0] & 255L) << 56
               | (var7[1] & 255L) << 48
               | (var7[2] & 255L) << 40
               | (var7[3] & 255L) << 32
               | (var7[4] & 255L) << 24
               | (var7[5] & 255L) << 16
               | (var7[6] & 255L) << 8
               | var7[7] & 255L;
            var27 = 0;
         }
      }
   }

   private static MatchException YV(MatchException var0) {
      return var0;
   }

   private class_243 YU() {
      return new class_243(mU.cpQ(-0.03F, 0.03F), mU.cpQ(-0.03F, 0.03F), mU.cpQ(-0.03F, 0.03F));
   }

   @hG
   public void YR(gL$tk param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cR.vBOIC J
      // 003: ldc2_w 62081327846744
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/cR.bab ()Z
      // 011: ifne 019
      // 014: return
      // 015: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 018: athrow
      // 019: aload 1
      // 01a: invokevirtual sixtwo/gL$tk.bcf ()Lnet/minecraft/class_2596;
      // 01d: astore 5
      // 01f: aload 5
      // 021: aload 4
      // 023: ifnonnull 03c
      // 026: instanceof net/minecraft/class_2663
      // 029: ifeq 124
      // 02c: goto 033
      // 02f: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 032: athrow
      // 033: aload 5
      // 035: goto 03c
      // 038: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 03b: athrow
      // 03c: checkcast net/minecraft/class_2663
      // 03f: astore 6
      // 041: aload 6
      // 043: invokevirtual net/minecraft/class_2663.method_11470 ()B
      // 046: aload 4
      // 048: ifnonnull 071
      // 04b: sipush 14841
      // 04e: ldc2_w 637592737205705025
      // 051: lload 2
      // 052: lxor
      // 053: invokedynamic y (IJ)I bsm=sixtwo/cR.YZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 058: if_icmpne 124
      // 05b: goto 062
      // 05e: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 061: athrow
      // 062: aload 0
      // 063: getfield sixtwo/cR.ywNJH Lsixtwo/ct;
      // 066: bipush 1
      // 067: invokevirtual sixtwo/ct.SQ (I)Z
      // 06a: goto 071
      // 06d: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 070: athrow
      // 071: istore 7
      // 073: aload 6
      // 075: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 078: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 07b: invokevirtual net/minecraft/class_2663.method_11469 (Lnet/minecraft/class_1937;)Lnet/minecraft/class_1297;
      // 07e: astore 8
      // 080: aload 8
      // 082: ifnonnull 08a
      // 085: return
      // 086: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 089: athrow
      // 08a: bipush 0
      // 08b: istore 9
      // 08d: iload 9
      // 08f: sipush 7599
      // 092: ldc2_w 2836713018523090239
      // 095: lload 2
      // 096: lxor
      // 097: invokedynamic y (IJ)I bsm=sixtwo/cR.YZ (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[  ]
      // 09c: if_icmpge 124
      // 09f: new net/minecraft/class_243
      // 0a2: dup
      // 0a3: aload 8
      // 0a5: invokevirtual net/minecraft/class_1297.method_23317 ()D
      // 0a8: ldc_w -0.2
      // 0ab: ldc_w 0.2
      // 0ae: invokestatic sixtwo/mU.cpQ (FF)F
      // 0b1: f2d
      // 0b2: dadd
      // 0b3: aload 8
      // 0b5: invokevirtual net/minecraft/class_1297.method_23318 ()D
      // 0b8: fconst_0
      // 0b9: aload 8
      // 0bb: invokevirtual net/minecraft/class_1297.method_17682 ()F
      // 0be: invokestatic sixtwo/mU.cpQ (FF)F
      // 0c1: f2d
      // 0c2: dadd
      // 0c3: aload 8
      // 0c5: invokevirtual net/minecraft/class_1297.method_23321 ()D
      // 0c8: ldc_w -0.2
      // 0cb: ldc_w 0.2
      // 0ce: invokestatic sixtwo/mU.cpQ (FF)F
      // 0d1: f2d
      // 0d2: dadd
      // 0d3: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 0d6: astore 10
      // 0d8: iload 7
      // 0da: ifeq 0f7
      // 0dd: new net/minecraft/class_243
      // 0e0: dup
      // 0e1: dconst_0
      // 0e2: ldc_w -0.2
      // 0e5: ldc_w -0.05
      // 0e8: invokestatic sixtwo/mU.cpQ (FF)F
      // 0eb: f2d
      // 0ec: dconst_0
      // 0ed: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 0f0: goto 0fb
      // 0f3: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0f6: athrow
      // 0f7: aload 0
      // 0f8: invokevirtual sixtwo/cR.YU ()Lnet/minecraft/class_243;
      // 0fb: astore 11
      // 0fd: aload 0
      // 0fe: getfield sixtwo/cR.ImFtb Ljava/util/List;
      // 101: new sixtwo/mn
      // 104: dup
      // 105: aload 10
      // 107: getstatic sixtwo/mp.qIoJG Lsixtwo/mp;
      // 10a: aload 11
      // 10c: aload 0
      // 10d: getfield sixtwo/cR.lyHys Lsixtwo/cC;
      // 110: invokevirtual sixtwo/cC.VB ()F
      // 113: invokespecial sixtwo/mn.<init> (Lnet/minecraft/class_243;Lsixtwo/mp;Lnet/minecraft/class_243;F)V
      // 116: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 11b: pop
      // 11c: iinc 9 1
      // 11f: aload 4
      // 121: ifnull 08d
      // 124: return
   }

   private static int YY(Lookup var0, MutableCallSite var1, String var2, Object[] var3) {
      int var4 = (Integer)var3[0];
      long var5 = (Long)var3[1];
      int var7 = YX(var4, var5);
      MethodHandle var8 = MethodHandles.constant(int.class, var7);
      var1.setTarget(MethodHandles.dropArguments(var8, 0, int.class, long.class));
      return var7;
   }

   @hG
   public void YP(gM var1) {
      this.ImFtb.clear();
   }

   private static int YX(int var0, long var1) {
      int var3 = var0 ^ (int)(var1 & 32767L) ^ 20194;
      if (ECHJE[var3] == null) {
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
         long var5 = RFnIl[var3];
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
         Object[] var9 = (Object[])QOHbp.get(var8);

         byte[] var10;
         try {
            if (var9 == null) {
               var9 = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
               QOHbp.put(var8, var9);
            }

            DESKeySpec var11 = new DESKeySpec(var4);
            SecretKey var12 = ((SecretKeyFactory)var9[1]).generateSecret(var11);
            Cipher var13 = (Cipher)var9[0];
            var13.init(2, var12, (IvParameterSpec)var9[2]);
            var10 = var13.doFinal(var7);
         } catch (Exception var14) {
            throw new RuntimeException("sixtwo/cR", var14);
         }

         int var15 = (var10[4] & 255) << 24 | (var10[5] & 255) << 16 | (var10[6] & 255) << 8 | var10[7] & 255;
         ECHJE[var3] = var15;
      }

      return ECHJE[var3];
   }

   @hG
   public void YQ(gH$th param1) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 000: getstatic sixtwo/cR.vBOIC J
      // 003: ldc2_w 85877524991488
      // 006: lxor
      // 007: lstore 2
      // 008: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 00b: astore 4
      // 00d: aload 0
      // 00e: invokevirtual sixtwo/cR.bab ()Z
      // 011: aload 4
      // 013: ifnonnull 038
      // 016: ifne 021
      // 019: goto 020
      // 01c: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 01f: athrow
      // 020: return
      // 021: aload 0
      // 022: getfield sixtwo/cR.ImFtb Ljava/util/List;
      // 025: invokedynamic test ()Ljava/util/function/Predicate; bsm=java/lang/invoke/LambdaMetafactory.metafactory (Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/String;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodType;Ljava/lang/invoke/MethodHandle;Ljava/lang/invoke/MethodType;)Ljava/lang/invoke/CallSite; args=[ (Ljava/lang/Object;)Z, sixtwo/mq.clp ()Z, (Lsixtwo/mq;)Z ]
      // 02a: invokeinterface java/util/List.removeIf (Ljava/util/function/Predicate;)Z 2
      // 02f: pop
      // 030: aload 0
      // 031: getfield sixtwo/cR.ywNJH Lsixtwo/ct;
      // 034: bipush 1
      // 035: invokevirtual sixtwo/ct.SQ (I)Z
      // 038: istore 5
      // 03a: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 03d: getfield net/minecraft/class_310.field_1687 Lnet/minecraft/class_638;
      // 040: invokevirtual net/minecraft/class_638.method_18112 ()Ljava/lang/Iterable;
      // 043: invokeinterface java/lang/Iterable.iterator ()Ljava/util/Iterator; 1
      // 048: astore 6
      // 04a: aload 6
      // 04c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 051: ifeq 1a9
      // 054: aload 6
      // 056: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 05b: checkcast net/minecraft/class_1297
      // 05e: astore 7
      // 060: aload 7
      // 062: invokevirtual net/minecraft/class_1297.method_73189 ()Lnet/minecraft/class_243;
      // 065: astore 8
      // 067: iload 5
      // 069: aload 4
      // 06b: ifnonnull 1b0
      // 06e: ifeq 092
      // 071: goto 078
      // 074: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 077: athrow
      // 078: new net/minecraft/class_243
      // 07b: dup
      // 07c: dconst_0
      // 07d: ldc_w -0.2
      // 080: ldc_w -0.05
      // 083: invokestatic sixtwo/mU.cpQ (FF)F
      // 086: f2d
      // 087: dconst_0
      // 088: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 08b: goto 096
      // 08e: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 091: athrow
      // 092: aload 0
      // 093: invokevirtual sixtwo/cR.YU ()Lnet/minecraft/class_243;
      // 096: astore 9
      // 098: bipush 0
      // 099: istore 10
      // 09b: aload 7
      // 09d: instanceof net/minecraft/class_1684
      // 0a0: aload 4
      // 0a2: ifnonnull 0d4
      // 0a5: ifeq 0cf
      // 0a8: goto 0af
      // 0ab: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ae: athrow
      // 0af: aload 0
      // 0b0: getfield sixtwo/cR.IIZjW Lsixtwo/cw;
      // 0b3: invokevirtual sixtwo/cw.TC ()Z
      // 0b6: aload 4
      // 0b8: ifnonnull 0d4
      // 0bb: goto 0c2
      // 0be: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0c1: athrow
      // 0c2: ifeq 0cf
      // 0c5: goto 0cc
      // 0c8: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0cb: athrow
      // 0cc: bipush 1
      // 0cd: istore 10
      // 0cf: aload 7
      // 0d1: instanceof net/minecraft/class_1685
      // 0d4: aload 4
      // 0d6: ifnonnull 123
      // 0d9: ifeq 11e
      // 0dc: goto 0e3
      // 0df: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0e2: athrow
      // 0e3: aload 7
      // 0e5: checkcast net/minecraft/class_1685
      // 0e8: astore 11
      // 0ea: aload 0
      // 0eb: getfield sixtwo/cR.cfNnD Lsixtwo/cw;
      // 0ee: invokevirtual sixtwo/cw.TC ()Z
      // 0f1: aload 4
      // 0f3: ifnonnull 123
      // 0f6: ifeq 11e
      // 0f9: goto 100
      // 0fc: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 0ff: athrow
      // 100: aload 11
      // 102: invokevirtual net/minecraft/class_1685.method_24828 ()Z
      // 105: aload 4
      // 107: ifnonnull 123
      // 10a: goto 111
      // 10d: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 110: athrow
      // 111: ifne 11e
      // 114: goto 11b
      // 117: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 11a: athrow
      // 11b: bipush 1
      // 11c: istore 10
      // 11e: aload 7
      // 120: instanceof net/minecraft/class_1665
      // 123: aload 4
      // 125: ifnonnull 16f
      // 128: ifeq 16d
      // 12b: goto 132
      // 12e: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 131: athrow
      // 132: aload 7
      // 134: checkcast net/minecraft/class_1665
      // 137: astore 11
      // 139: aload 0
      // 13a: getfield sixtwo/cR.czNck Lsixtwo/cw;
      // 13d: invokevirtual sixtwo/cw.TC ()Z
      // 140: aload 4
      // 142: ifnonnull 16f
      // 145: ifeq 16d
      // 148: goto 14f
      // 14b: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 14e: athrow
      // 14f: aload 11
      // 151: invokevirtual net/minecraft/class_1665.method_24828 ()Z
      // 154: aload 4
      // 156: ifnonnull 16f
      // 159: goto 160
      // 15c: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 15f: athrow
      // 160: ifne 16d
      // 163: goto 16a
      // 166: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 169: athrow
      // 16a: bipush 1
      // 16b: istore 10
      // 16d: iload 10
      // 16f: aload 4
      // 171: ifnonnull 1a3
      // 174: ifeq 1a4
      // 177: goto 17e
      // 17a: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 17d: athrow
      // 17e: aload 0
      // 17f: getfield sixtwo/cR.ImFtb Ljava/util/List;
      // 182: new sixtwo/mn
      // 185: dup
      // 186: aload 8
      // 188: getstatic sixtwo/mp.qIoJG Lsixtwo/mp;
      // 18b: aload 9
      // 18d: aload 0
      // 18e: getfield sixtwo/cR.lyHys Lsixtwo/cC;
      // 191: invokevirtual sixtwo/cC.VB ()F
      // 194: invokespecial sixtwo/mn.<init> (Lnet/minecraft/class_243;Lsixtwo/mp;Lnet/minecraft/class_243;F)V
      // 197: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 19c: goto 1a3
      // 19f: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1a2: athrow
      // 1a3: pop
      // 1a4: aload 4
      // 1a6: ifnull 04a
      // 1a9: aload 0
      // 1aa: getfield sixtwo/cR.Ubjvg Lsixtwo/cw;
      // 1ad: invokevirtual sixtwo/cw.TC ()Z
      // 1b0: aload 4
      // 1b2: ifnonnull 28e
      // 1b5: ifeq 287
      // 1b8: goto 1bf
      // 1bb: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 1be: athrow
      // 1bf: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1c2: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1c5: invokestatic sixtwo/jg.bBy (Lnet/minecraft/class_1297;)D
      // 1c8: d2f
      // 1c9: fstore 6
      // 1cb: aload 0
      // 1cc: getfield sixtwo/cR.ImFtb Ljava/util/List;
      // 1cf: invokeinterface java/util/List.size ()I 1
      // 1d4: istore 7
      // 1d6: iload 7
      // 1d8: aload 0
      // 1d9: getfield sixtwo/cR.mNkAv Lsixtwo/cC;
      // 1dc: invokevirtual sixtwo/cC.VC ()I
      // 1df: if_icmpge 287
      // 1e2: ldc_w 20.0
      // 1e5: fstore 8
      // 1e7: new net/minecraft/class_243
      // 1ea: dup
      // 1eb: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 1ee: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 1f1: invokevirtual net/minecraft/class_746.method_23317 ()D
      // 1f4: fload 8
      // 1f6: fneg
      // 1f7: fload 8
      // 1f9: invokestatic sixtwo/mU.cpQ (FF)F
      // 1fc: f2d
      // 1fd: dadd
      // 1fe: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 201: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 204: invokevirtual net/minecraft/class_746.method_23318 ()D
      // 207: fload 6
      // 209: fneg
      // 20a: fload 8
      // 20c: fneg
      // 20d: invokestatic java/lang/Math.max (FF)F
      // 210: fload 8
      // 212: invokestatic sixtwo/mU.cpQ (FF)F
      // 215: f2d
      // 216: dadd
      // 217: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 21a: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 21d: invokevirtual net/minecraft/class_746.method_23321 ()D
      // 220: fload 8
      // 222: fneg
      // 223: fload 8
      // 225: invokestatic sixtwo/mU.cpQ (FF)F
      // 228: f2d
      // 229: dadd
      // 22a: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 22d: astore 9
      // 22f: iload 5
      // 231: aload 4
      // 233: ifnonnull 28e
      // 236: ifeq 25a
      // 239: goto 240
      // 23c: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 23f: athrow
      // 240: new net/minecraft/class_243
      // 243: dup
      // 244: dconst_0
      // 245: ldc_w -0.2
      // 248: ldc_w -0.05
      // 24b: invokestatic sixtwo/mU.cpQ (FF)F
      // 24e: f2d
      // 24f: dconst_0
      // 250: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 253: goto 25e
      // 256: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 259: athrow
      // 25a: aload 0
      // 25b: invokevirtual sixtwo/cR.YU ()Lnet/minecraft/class_243;
      // 25e: astore 10
      // 260: aload 0
      // 261: getfield sixtwo/cR.ImFtb Ljava/util/List;
      // 264: new sixtwo/mn
      // 267: dup
      // 268: aload 9
      // 26a: getstatic sixtwo/mp.qIoJG Lsixtwo/mp;
      // 26d: aload 10
      // 26f: aload 0
      // 270: getfield sixtwo/cR.lyHys Lsixtwo/cC;
      // 273: invokevirtual sixtwo/cC.VB ()F
      // 276: invokespecial sixtwo/mn.<init> (Lnet/minecraft/class_243;Lsixtwo/mp;Lnet/minecraft/class_243;F)V
      // 279: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 27e: pop
      // 27f: iinc 7 1
      // 282: aload 4
      // 284: ifnull 1d6
      // 287: aload 0
      // 288: getfield sixtwo/cR.UYbIm Lsixtwo/cw;
      // 28b: invokevirtual sixtwo/cw.TC ()Z
      // 28e: ifeq 32c
      // 291: invokestatic sixtwo/iX.bxS ()F
      // 294: fstore 6
      // 296: fload 6
      // 298: ldc_w 0.1
      // 29b: fcmpl
      // 29c: ifle 32c
      // 29f: new net/minecraft/class_243
      // 2a2: dup
      // 2a3: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2a6: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2a9: invokevirtual net/minecraft/class_746.method_23317 ()D
      // 2ac: ldc_w -0.2
      // 2af: ldc_w 0.2
      // 2b2: invokestatic sixtwo/mU.cpQ (FF)F
      // 2b5: f2d
      // 2b6: dadd
      // 2b7: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2ba: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2bd: invokevirtual net/minecraft/class_746.method_23318 ()D
      // 2c0: fconst_0
      // 2c1: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2c4: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2c7: invokevirtual net/minecraft/class_746.method_17682 ()F
      // 2ca: invokestatic sixtwo/mU.cpQ (FF)F
      // 2cd: f2d
      // 2ce: dadd
      // 2cf: getstatic sixtwo/rD.dlmvG Lnet/minecraft/class_310;
      // 2d2: getfield net/minecraft/class_310.field_1724 Lnet/minecraft/class_746;
      // 2d5: invokevirtual net/minecraft/class_746.method_23321 ()D
      // 2d8: ldc_w -0.2
      // 2db: ldc_w 0.2
      // 2de: invokestatic sixtwo/mU.cpQ (FF)F
      // 2e1: f2d
      // 2e2: dadd
      // 2e3: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 2e6: astore 7
      // 2e8: iload 5
      // 2ea: ifeq 307
      // 2ed: new net/minecraft/class_243
      // 2f0: dup
      // 2f1: dconst_0
      // 2f2: ldc_w -0.2
      // 2f5: ldc_w -0.05
      // 2f8: invokestatic sixtwo/mU.cpQ (FF)F
      // 2fb: f2d
      // 2fc: dconst_0
      // 2fd: invokespecial net/minecraft/class_243.<init> (DDD)V
      // 300: goto 30b
      // 303: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 306: athrow
      // 307: aload 0
      // 308: invokevirtual sixtwo/cR.YU ()Lnet/minecraft/class_243;
      // 30b: astore 8
      // 30d: aload 0
      // 30e: getfield sixtwo/cR.ImFtb Ljava/util/List;
      // 311: new sixtwo/mn
      // 314: dup
      // 315: aload 7
      // 317: getstatic sixtwo/mp.qIoJG Lsixtwo/mp;
      // 31a: aload 8
      // 31c: aload 0
      // 31d: getfield sixtwo/cR.lyHys Lsixtwo/cC;
      // 320: invokevirtual sixtwo/cC.VB ()F
      // 323: invokespecial sixtwo/mn.<init> (Lnet/minecraft/class_243;Lsixtwo/mp;Lnet/minecraft/class_243;F)V
      // 326: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 32b: pop
      // 32c: return
   }

   private void YT(class_4587 param1, float param2, mG param3, mo param4) {
      // $VF: Couldn't be decompiled
      // Please report this to the Vineflower issue tracker, at https://github.com/Vineflower/vineflower/issues with a copy of the class file (if you have the rights to distribute it!)
      // java.lang.RuntimeException: parsing failure!
      //   at org.jetbrains.java.decompiler.modules.decompiler.decompose.DomHelper.parseGraph(DomHelper.java:211)
      //   at org.jetbrains.java.decompiler.main.rels.MethodProcessor.codeToJava(MethodProcessor.java:166)
      //
      // Bytecode:
      // 00: getstatic sixtwo/cR.vBOIC J
      // 03: ldc2_w 136362643667159
      // 06: lxor
      // 07: lstore 5
      // 09: invokestatic sixtwo/dh.afl ()[Lsixtwo/iS;
      // 0c: getstatic sixtwo/cR.XSRvt Lsixtwo/kM;
      // 0f: aload 4
      // 11: invokevirtual sixtwo/mo.clD ()Lnet/minecraft/class_1044;
      // 14: aload 0
      // 15: getfield sixtwo/cR.wccSb Lsixtwo/kS;
      // 18: invokevirtual sixtwo/kM.startBatch (Lnet/minecraft/class_1044;Lsixtwo/kS;)V
      // 1b: astore 7
      // 1d: new java/util/ArrayList
      // 20: dup
      // 21: aload 0
      // 22: getfield sixtwo/cR.ImFtb Ljava/util/List;
      // 25: invokeinterface java/util/List.size ()I 1
      // 2a: invokespecial java/util/ArrayList.<init> (I)V
      // 2d: astore 8
      // 2f: aload 0
      // 30: getfield sixtwo/cR.ImFtb Ljava/util/List;
      // 33: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // 38: astore 9
      // 3a: aload 9
      // 3c: invokeinterface java/util/Iterator.hasNext ()Z 1
      // 41: ifeq 97
      // 44: aload 9
      // 46: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // 4b: checkcast sixtwo/mq
      // 4e: astore 10
      // 50: aload 10
      // 52: fload 2
      // 53: invokevirtual sixtwo/mq.clL (F)Lnet/minecraft/class_243;
      // 56: invokestatic sixtwo/jJ.bIA (Lnet/minecraft/class_243;)Z
      // 59: aload 7
      // 5b: ifnonnull 9e
      // 5e: aload 7
      // 60: ifnonnull 89
      // 63: goto 6a
      // 66: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 69: athrow
      // 6a: ifne 80
      // 6d: goto 74
      // 70: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 73: athrow
      // 74: aload 7
      // 76: ifnull 3a
      // 79: goto 80
      // 7c: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // 7f: athrow
      // 80: aload 8
      // 82: aload 10
      // 84: invokeinterface java/util/List.add (Ljava/lang/Object;)Z 2
      // 89: pop
      // 8a: aload 10
      // 8c: aload 1
      // 8d: fload 2
      // 8e: aload 3
      // 8f: invokevirtual sixtwo/mq.clq (Lnet/minecraft/class_4587;FLsixtwo/mG;)V
      // 92: aload 7
      // 94: ifnull 3a
      // 97: aload 0
      // 98: getfield sixtwo/cR.aTbJe Lsixtwo/cJ;
      // 9b: invokevirtual sixtwo/cJ.WF ()Z
      // 9e: ifeq eb
      // a1: getstatic sixtwo/cR.XSRvt Lsixtwo/kM;
      // a4: invokevirtual sixtwo/kM.flush ()V
      // a7: getstatic sixtwo/cR.XSRvt Lsixtwo/kM;
      // aa: getstatic sixtwo/cR.ZDept Ljava/lang/String;
      // ad: invokestatic sixtwo/ob.cBv (Ljava/lang/String;)Lnet/minecraft/class_1044;
      // b0: invokevirtual sixtwo/kM.swapTexture (Lnet/minecraft/class_1044;)V
      // b3: aload 8
      // b5: invokeinterface java/util/List.iterator ()Ljava/util/Iterator; 1
      // ba: astore 9
      // bc: aload 9
      // be: invokeinterface java/util/Iterator.hasNext ()Z 1
      // c3: ifeq eb
      // c6: aload 9
      // c8: invokeinterface java/util/Iterator.next ()Ljava/lang/Object; 1
      // cd: checkcast sixtwo/mq
      // d0: astore 10
      // d2: aload 10
      // d4: aload 1
      // d5: fload 2
      // d6: aload 3
      // d7: invokevirtual sixtwo/mq.clr (Lnet/minecraft/class_4587;FLsixtwo/mG;)V
      // da: aload 7
      // dc: ifnonnull f1
      // df: aload 7
      // e1: ifnull bc
      // e4: goto eb
      // e7: invokestatic sixtwo/cR.YV (Ljava/lang/MatchException;)Ljava/lang/MatchException;
      // ea: athrow
      // eb: getstatic sixtwo/cR.XSRvt Lsixtwo/kM;
      // ee: invokevirtual sixtwo/kM.endBatch ()V
      // f1: goto ff
      // f4: astore 11
      // f6: getstatic sixtwo/cR.XSRvt Lsixtwo/kM;
      // f9: invokevirtual sixtwo/kM.endBatch ()V
      // fc: aload 11
      // fe: athrow
      // ff: return
   }

   private static CallSite YZ(Lookup var0, String var1, MethodType var2) {
      MutableCallSite var3 = new MutableCallSite(var2);

      try {
         var3.setTarget(
            MethodHandles.explicitCastArguments(
               MethodHandles.insertArguments("YY".asCollector(Object[].class, var2.parameterCount()), 0, var0, var3, var1), var2
            )
         );
         return var3;
      } catch (Exception var5) {
         throw new RuntimeException("sixtwo/cR" + " : " + var1 + " : " + var2.toString(), var5);
      }
   }

   private static String YW(byte[] var0) {
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

   @hG
   public void YS(go$sX var1) {
      long var2 = vBOIC ^ 12618814174143L;
      iS[] var4 = dh.afl();

      boolean var10000;
      label64: {
         try {
            var10000 = this.bab();
            if (var4 != null) {
               break label64;
            }

            if (!var10000) {
               return;
            }
         } catch (MatchException var10) {
            throw YV(var10);
         }

         var10000 = this.ImFtb.isEmpty();
      }

      if (!var10000) {
         class_4587 var5 = var1.bbh();
         float var6 = var1.bbi();
         mG var7 = this.mNCfB.Wf();

         label51: {
            label50: {
               label49: {
                  label48: {
                     label47: {
                        label46: {
                           label45: {
                              try {
                                 switch (this.imXIw.ST()) {
                                    case 1:
                                       var11 = mo.KePbo;
                                       break label51;
                                    case 2:
                                       break label50;
                                    case 3:
                                       break label49;
                                    case 4:
                                       break label48;
                                    case 5:
                                       break label47;
                                    case 6:
                                       break label46;
                                    case 7:
                                       break label45;
                                 }
                              } catch (MatchException var9) {
                                 throw YV(var9);
                              }

                              var11 = mo.TcnVB;
                              break label51;
                           }

                           var11 = mo.KyHOi;
                           break label51;
                        }

                        var11 = mo.KyziQ;
                        break label51;
                     }

                     var11 = mo.mDCeI;
                     break label51;
                  }

                  var11 = mo.kbKRO;
                  break label51;
               }

               var11 = mo.bkxjV;
               break label51;
            }

            var11 = mo.Vflfx;
         }

         mo var8 = var11;
         this.YT(var5, var6, var7, var8);
      }
   }

   @Override
   public void YO() {
      super.YO();
      this.ImFtb.clear();
   }
}
