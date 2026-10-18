package sixtwo;

public abstract class rj$vU extends rj {
   private float hfKhu;
   private float mNvGa;

   protected rj$vU(float var1, float var2) {
      this.hfKhu = var1;
      this.mNvGa = var2;
   }

   protected rj$vU() {
      this(-1.0F, 0.0F);
   }

   public void dyq(float var1) {
      this.hfKhu = var1;
   }

   public float dyt() {
      return this.mNvGa;
   }

   public float dys() {
      return this.hfKhu;
   }

   public void dyr(float var1) {
      this.mNvGa = var1;
   }
}
