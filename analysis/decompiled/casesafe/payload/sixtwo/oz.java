package sixtwo;

import net.minecraft.class_2338;
import net.minecraft.class_243;
import net.minecraft.class_2680;
import net.minecraft.class_3965;

public record oz(class_2338 blockPos, class_3965 blockHitResult) {
   private static String[] a;

   static {
      if (b() != null) {
         b(new String[2]);
      }
   }

   public static String[] b() {
      return a;
   }

   public static void b(String[] var0) {
      a = var0;
   }

   public class_2680 blockState() {
      return rD.dlmvG.field_1687.method_8320(this.blockPos);
   }

   public class_243 hitPoint() {
      return this.blockHitResult.method_17784();
   }
}
