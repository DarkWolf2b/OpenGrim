package sixtwo;

import net.minecraft.class_243;

public class rg {
   private static final rj QAgkZ = rj.ZIApv;
   private final rk nCHFU;
   private final rk UaZPx;
   private final rk QBwAV;

   public void dfE(class_243 var1) {
      this.nCHFU.dhe((float)var1.field_1352);
      this.UaZPx.dhe((float)var1.field_1351);
      this.QBwAV.dhe((float)var1.field_1350);
   }

   public class_243 dfA(class_243 var1) {
      this.nCHFU.dhd((float)var1.field_1352);
      this.UaZPx.dhd((float)var1.field_1351);
      this.QBwAV.dhd((float)var1.field_1350);
      return this.dfB();
   }

   public rg dfD(int var1) {
      this.nCHFU.dhq(var1);
      this.UaZPx.dhq(var1);
      this.QBwAV.dhq(var1);
      return this;
   }

   public rg dfC(rj var1) {
      this.nCHFU.dhs(var1);
      this.UaZPx.dhs(var1);
      this.QBwAV.dhs(var1);
      return this;
   }

   public class_243 dfB() {
      return new class_243(this.nCHFU.dhj(), this.UaZPx.dhj(), this.QBwAV.dhj());
   }

   public rg(int var1, rj var2) {
      this.nCHFU = new rk(var1).dhs(var2);
      this.UaZPx = new rk(var1).dhs(var2);
      this.QBwAV = new rk(var1).dhs(var2);
   }

   public rg(int var1) {
      this(var1, QAgkZ);
   }

   public rg(int var1, class_243 var2, rj var3) {
      this.nCHFU = new rk(var1, (float)var2.field_1352).dhs(var3);
      this.UaZPx = new rk(var1, (float)var2.field_1351).dhs(var3);
      this.QBwAV = new rk(var1, (float)var2.field_1350).dhs(var3);
   }

   public rg(int var1, class_243 var2) {
      this(var1, var2, QAgkZ);
   }
}
