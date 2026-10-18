package sixtwo;

import net.minecraft.class_238;
import net.minecraft.class_4587;

public class kH {
   private class_4587 ZNdTt;
   private class_238 nrbSq;
   private mG UJMOR;
   private mG BTmWY;
   private mG lBaQI;
   private boolean NwNNG;
   private boolean FGWJo;

   kH(class_4587 var1, class_238 var2, mG var3, mG var4, mG var5, boolean var6, boolean var7) {
      this.ZNdTt = var1;
      this.nrbSq = var2;
      this.UJMOR = var3;
      this.BTmWY = var4;
      this.lBaQI = var5;
      this.NwNNG = var6;
      this.FGWJo = var7;
   }

   public static kH$up bTJ(class_4587 var0, class_238 var1, boolean var2, boolean var3) {
      return bTK().dtL(var0).dtM(var1).dtQ(var2).dtR(var3);
   }

   public static kH$up bTK() {
      return new kH$up();
   }

   public mG bTP() {
      return this.lBaQI;
   }

   public mG bTO() {
      return this.BTmWY;
   }

   public class_4587 bTL() {
      return this.ZNdTt;
   }

   public boolean bTR() {
      return this.FGWJo;
   }

   public class_238 bTM() {
      return this.nrbSq;
   }

   public boolean bTQ() {
      return this.NwNNG;
   }

   public mG bTN() {
      return this.UJMOR;
   }
}
