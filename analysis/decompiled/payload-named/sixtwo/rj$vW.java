package sixtwo;

public class rj$vW extends rj$vZ {
   public rj$vW() {
   }

   public rj$vW(float var1) {
      super(var1);
   }

   @Override
   public float dga(float var1, float var2, float var3, float var4) {
      float var5 = this.dyE();
      var1 = var1 / var4 - 1.0F;
      return var3 * (var1 * var1 * ((var5 + 1.0F) * var1 + var5) + 1.0F) + var2;
   }
}
