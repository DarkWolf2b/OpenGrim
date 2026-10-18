package sixtwo;

import net.minecraft.util.math.Vec3d;

public class rg {
   private static final rj QAgkZ = rj.ZIApv;
   private final rk nCHFU;
   private final rk UaZPx;
   private final rk QBwAV;

   public void dfE(Vec3d var1) {
      this.nCHFU.dhe((float)var1.x);
      this.UaZPx.dhe((float)var1.y);
      this.QBwAV.dhe((float)var1.z);
   }

   public Vec3d dfA(Vec3d var1) {
      this.nCHFU.dhd((float)var1.x);
      this.UaZPx.dhd((float)var1.y);
      this.QBwAV.dhd((float)var1.z);
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

   public Vec3d dfB() {
      return new Vec3d(this.nCHFU.dhj(), this.UaZPx.dhj(), this.QBwAV.dhj());
   }

   public rg(int var1, rj var2) {
      this.nCHFU = new rk(var1).dhs(var2);
      this.UaZPx = new rk(var1).dhs(var2);
      this.QBwAV = new rk(var1).dhs(var2);
   }

   public rg(int var1) {
      this(var1, QAgkZ);
   }

   public rg(int var1, Vec3d var2, rj var3) {
      this.nCHFU = new rk(var1, (float)var2.x).dhs(var3);
      this.UaZPx = new rk(var1, (float)var2.y).dhs(var3);
      this.QBwAV = new rk(var1, (float)var2.z).dhs(var3);
   }

   public rg(int var1, Vec3d var2) {
      this(var1, var2, QAgkZ);
   }
}
