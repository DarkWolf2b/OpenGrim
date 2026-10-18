package sixtwo;

import net.minecraft.util.math.MathHelper;

public final class pr {
   private final float nlbzg;
   private final float GxEzW;
   private final float RVtJB;
   private final float VAtZN;
   private static int[] ZZbRB;

   public pr(float var1, float var2, float var3) {
      this(var1, var2, var3, MathHelper.clamp(var1 / Math.max(1.0F, var2), 0.0F, 1.0F));
   }

   public pr(float var1, float var2, float var3, float var4) {
      this.nlbzg = var1;
      this.GxEzW = var2;
      this.RVtJB = var3;
      this.VAtZN = MathHelper.clamp(var4, 0.0F, 1.0F);
   }

   static {
      if (cOX() != null) {
         cOW(new int[2]);
      }
   }

   public float cOS() {
      return this.nlbzg;
   }

   public static void cOW(int[] var0) {
      ZZbRB = var0;
   }

   public float cOU() {
      return this.RVtJB;
   }

   public static int[] cOX() {
      return ZZbRB;
   }

   public float cOV() {
      return this.VAtZN;
   }

   public float cOT() {
      return this.GxEzW;
   }
}
