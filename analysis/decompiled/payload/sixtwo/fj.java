package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.lang.invoke.MethodHandles.Lookup;
import java.util.Map;
import native.Loader;
import net.minecraft.class_1657;
import net.minecraft.class_1799;
import net.minecraft.class_238;

public class fj extends gg {
   private final cJ NJTyK;
   private final cC FzLhH;
   private final cJ IMpen;
   private final cG WLOHi;
   private final cG OxgJE;
   private final cJ DRvrZ;
   private class_1657 zGyRN;
   private static long WnKso;
   private static String zVHFr;
   private static long[] PRoWq;
   private static Integer[] pUNav;
   private static Map iPtle;

   public fj() {
      long var1 = WnKso ^ 89478313119806L;
      super(gf.aZL(aJL<"x">(27730, 6305482469367955523L ^ var1), false, gh.xwjCw));
      int[] var10004 = new int[aJL<"x">(16581, 5952074238559415551L ^ var1)];
      var10004[0] = aJL<"x">(10746, 4069705471273043436L ^ var1);
      var10004[1] = aJL<"x">(6068, 3726820704938015662L ^ var1);
      var10004[2] = aJL<"x">(16259, 7949976520136987574L ^ var1);
      var10004[3] = aJL<"x">(20684, 6874379028093009137L ^ var1);
      var10004[4] = aJL<"x">(1022, 567044551635808210L ^ var1);
      var10004[5] = aJL<"x">(8541, 8973032464277540175L ^ var1);
      var10004[aJL<"x">(2014, 2012792755053898745L ^ var1)] = aJL<"x">(9225, 6045831517667035178L ^ var1);
      var10004[aJL<"x">(27063, 4540868059905836435L ^ var1)] = aJL<"x">(31602, 1775432566127777618L ^ var1);
      var10004[aJL<"x">(4580, 3786719000239488507L ^ var1)] = aJL<"x">(29039, 8172639565123738999L ^ var1);
      var10004[aJL<"x">(23424, 2388639493688293267L ^ var1)] = aJL<"x">(20547, 4339240972781059162L ^ var1);
      var10004[aJL<"x">(11788, 3787072207526101531L ^ var1)] = aJL<"x">(29315, 6075471663214026414L ^ var1);
      var10004[aJL<"x">(3593, 5889892966854795815L ^ var1)] = aJL<"x">(31221, 3076745181149058498L ^ var1);
      this.NJTyK = new cJ(this, mr.clS(var10004)).WE(false);
      this.FzLhH = new cC(
            this,
            mr.clS(
               new int[]{
                  aJL<"x">(6310, 1207129617644827816L ^ var1), aJL<"x">(30645, 1097514172866321281L ^ var1), aJL<"x">(30344, 7492299805926578850L ^ var1)
               }
            )
         )
         .Vy(1.0)
         .Vw(10.0)
         .Vx(360.0)
         .VA(45.0)
         .Vz(zVHFr);
      var10004 = new int[aJL<"x">(29220, 1193423372840656402L ^ var1)];
      var10004[0] = aJL<"x">(6700, 6154820993932342804L ^ var1);
      var10004[1] = aJL<"x">(6356, 7662008633876002008L ^ var1);
      var10004[2] = aJL<"x">(8634, 1345175144378011014L ^ var1);
      var10004[3] = aJL<"x">(22536, 7500985388887766021L ^ var1);
      var10004[4] = aJL<"x">(6356, 7662008633876002008L ^ var1);
      var10004[5] = aJL<"x">(25497, 4595001598613999497L ^ var1);
      var10004[aJL<"x">(5778, 7043679611122006715L ^ var1)] = aJL<"x">(24175, 5891102744072680049L ^ var1);
      var10004[aJL<"x">(9151, 2942316474705776527L ^ var1)] = aJL<"x">(19414, 6607795704977188828L ^ var1);
      var10004[aJL<"x">(12611, 1600344884741053794L ^ var1)] = aJL<"x">(25497, 4595001598613999497L ^ var1);
      var10004[aJL<"x">(3265, 3012068769679778005L ^ var1)] = aJL<"x">(6356, 7662008633876002008L ^ var1);
      var10004[aJL<"x">(10991, 5823218481230087879L ^ var1)] = aJL<"x">(30751, 2968518299016942630L ^ var1);
      var10004[aJL<"x">(5790, 706914744151980705L ^ var1)] = aJL<"x">(6659, 1007344276378007071L ^ var1);
      var10004[aJL<"x">(21551, 3654044904438233092L ^ var1)] = aJL<"x">(15023, 4511220063879567034L ^ var1);
      var10004[aJL<"x">(26744, 3144236761571902551L ^ var1)] = aJL<"x">(22750, 7591685289634100463L ^ var1);
      var10004[aJL<"x">(15716, 4771427454282830166L ^ var1)] = aJL<"x">(28158, 8120972041855189489L ^ var1);
      var10004[aJL<"x">(10591, 1902965641305556345L ^ var1)] = aJL<"x">(20684, 6874379028093009137L ^ var1);
      var10004[aJL<"x">(7473, 8866454010246476051L ^ var1)] = aJL<"x">(8634, 1345175144378011014L ^ var1);
      this.IMpen = new cJ(this, mr.clS(var10004)).WE(false);
      var10004 = new int[aJL<"x">(28073, 313102075547173280L ^ var1)];
      var10004[0] = aJL<"x">(1538, 1304001300411656764L ^ var1);
      var10004[1] = aJL<"x">(25380, 6837664246114897687L ^ var1);
      var10004[2] = aJL<"x">(2259, 5527531530771244232L ^ var1);
      var10004[3] = aJL<"x">(29315, 6075471663214026414L ^ var1);
      var10004[4] = aJL<"x">(28158, 8120972041855189489L ^ var1);
      var10004[5] = aJL<"x">(8634, 1345175144378011014L ^ var1);
      var10004[aJL<"x">(5778, 7043679611122006715L ^ var1)] = aJL<"x">(6356, 7662008633876002008L ^ var1);
      var10004[aJL<"x">(9151, 2942316474705776527L ^ var1)] = aJL<"x">(24175, 5891102744072680049L ^ var1);
      var10004[aJL<"x">(12611, 1600344884741053794L ^ var1)] = aJL<"x">(27747, 6659218879917047896L ^ var1);
      var10004[aJL<"x">(3265, 3012068769679778005L ^ var1)] = aJL<"x">(20684, 6874379028093009137L ^ var1);
      var10004[aJL<"x">(10991, 5823218481230087879L ^ var1)] = aJL<"x">(29315, 6075471663214026414L ^ var1);
      var10004[aJL<"x">(5790, 706914744151980705L ^ var1)] = aJL<"x">(20684, 6874379028093009137L ^ var1);
      var10004[aJL<"x">(21551, 3654044904438233092L ^ var1)] = aJL<"x">(25497, 4595001598613999497L ^ var1);
      this.WLOHi = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis()).Uh(false);
      var10004 = new int[aJL<"x">(10991, 5823218481230087879L ^ var1)];
      var10004[0] = aJL<"x">(23242, 5712287979741083330L ^ var1);
      var10004[1] = aJL<"x">(28158, 8120972041855189489L ^ var1);
      var10004[2] = aJL<"x">(29315, 6075471663214026414L ^ var1);
      var10004[3] = aJL<"x">(29315, 6075471663214026414L ^ var1);
      var10004[4] = aJL<"x">(24175, 5891102744072680049L ^ var1);
      var10004[5] = aJL<"x">(5123, 3765903929388480550L ^ var1);
      var10004[aJL<"x">(5778, 7043679611122006715L ^ var1)] = aJL<"x">(20684, 6874379028093009137L ^ var1);
      var10004[aJL<"x">(9151, 2942316474705776527L ^ var1)] = aJL<"x">(29315, 6075471663214026414L ^ var1);
      var10004[aJL<"x">(12611, 1600344884741053794L ^ var1)] = aJL<"x">(20684, 6874379028093009137L ^ var1);
      var10004[aJL<"x">(3265, 3012068769679778005L ^ var1)] = aJL<"x">(25497, 4595001598613999497L ^ var1);
      this.OxgJE = new cG(this, mr.clS(var10004)).Uf(rD.dlM().bjG().bis().cob(0.5F)).Uh(false);
      var10004 = new int[aJL<"x">(5778, 7043679611122006715L ^ var1)];
      var10004[0] = aJL<"x">(23242, 5712287979741083330L ^ var1);
      var10004[1] = aJL<"x">(28158, 8120972041855189489L ^ var1);
      var10004[2] = aJL<"x">(29315, 6075471663214026414L ^ var1);
      var10004[3] = aJL<"x">(29315, 6075471663214026414L ^ var1);
      var10004[4] = aJL<"x">(6356, 7662008633876002008L ^ var1);
      var10004[5] = aJL<"x">(30751, 2968518299016942630L ^ var1);
      this.DRvrZ = new cJ(this, mr.clS(var10004)).WE(false);
      this.WLOHi.Vf(this.IMpen::WF);
      this.OxgJE.Vf(this.IMpen::WF);
      this.DRvrZ.Vf(this.IMpen::WF);
   }

   static {
      Loader.doInit(fj.class);
      _c3e72fdca4956d5234b74153e63ce371();
   }

   private static native void _c3e72fdca4956d5234b74153e63ce371();

   private static native CallSite aJL(Lookup var0, String var1, MethodType var2);

   @hG
   public native void aJz(go$sX var1);

   @hG
   public native void aJy(gH$th var1);

   private native double aJA(class_1799 var1);

   private native double aJB(class_1799 var1, double var2, double var4);

   private native class_238 aJC(class_1799 var1, class_1657 var2, ov var3);

   private static native MatchException aJH(MatchException var0);

   private static native String aJI(byte[] var0);

   private static native int aJK(Lookup var0, MutableCallSite var1, String var2, Object[] var3);

   private static native int aJJ(int var0, long var1);
}
