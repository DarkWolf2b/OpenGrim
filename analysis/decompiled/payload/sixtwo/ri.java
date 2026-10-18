package sixtwo;

import java.lang.invoke.MethodHandles;

public class ri {
   private static final rj cNvhb = rj.ZIApv;
   private final rk nYDZy;
   private final rk wmaJf;
   private final rk HTDiY;
   private final rk XLvDZ;
   private static final long foqYm = gb.aYR(2073536413879717892L, 4418601304020317291L, MethodHandles.lookup().lookupClass()).a(65960377467618L);

   public ri dfW(rj var1) {
      this.nYDZy.dhs(var1);
      this.wmaJf.dhs(var1);
      this.HTDiY.dhs(var1);
      this.XLvDZ.dhs(var1);
      return this;
   }

   public ri(int var1, rj var2) {
      long var3 = foqYm ^ 109582395167563L;
      int var10000 = rh.dfQ();
      super();
      this.nYDZy = new rk(var1).dhs(var2);
      this.wmaJf = new rk(var1).dhs(var2);
      int var5 = var10000;

      try {
         this.HTDiY = new rk(var1).dhs(var2);
         this.XLvDZ = new rk(var1).dhs(var2);
         if (iS.bwL() == null) {
            rh.dfP(++var5);
         }
      } catch (MatchException var6) {
         throw dfZ(var6);
      }
   }

   public ri(int var1, mG var2) {
      this(var1, var2, cNvhb);
   }

   public ri(int var1) {
      this(var1, cNvhb);
   }

   public ri(int var1, mG var2, rj var3) {
      long var4 = foqYm ^ 48449888982080L;
      super();
      this.nYDZy = new rk(var1, var2.cor()).dhs(var3);
      int var10000 = rh.dfQ();
      this.wmaJf = new rk(var1, var2.cos()).dhs(var3);
      int var6 = var10000;

      try {
         this.HTDiY = new rk(var1, var2.cot()).dhs(var3);
         this.XLvDZ = new rk(var1, var2.cou()).dhs(var3);
         if (var6 != 0) {
            iS.bwK("cmi1bc");
         }
      } catch (MatchException var7) {
         throw dfZ(var7);
      }
   }

   public mG dfT(mG var1) {
      this.nYDZy.dhd(var1.cor());
      this.wmaJf.dhd(var1.cos());
      this.HTDiY.dhd(var1.cot());
      this.XLvDZ.dhd(var1.cou());
      return this.dfU();
   }

   private static MatchException dfZ(MatchException var0) {
      return var0;
   }

   public mG dfU() {
      return mG.cnR(this.nYDZy.dhj(), this.wmaJf.dhj(), this.HTDiY.dhj(), this.XLvDZ.dhj());
   }

   public ri dfV(rj var1) {
      this.nYDZy.dhs(var1);
      this.wmaJf.dhs(var1);
      this.HTDiY.dhs(var1);
      this.XLvDZ.dhs(var1);
      return this;
   }

   public ri dfX(int var1) {
      this.nYDZy.dhq(var1);
      this.wmaJf.dhq(var1);
      this.HTDiY.dhq(var1);
      this.XLvDZ.dhq(var1);
      return this;
   }

   public ri dfY(mG var1) {
      this.nYDZy.dhe(var1.cor());
      this.wmaJf.dhe(var1.cos());
      this.HTDiY.dhe(var1.cot());
      this.XLvDZ.dhe(var1.cou());
      return this;
   }
}
