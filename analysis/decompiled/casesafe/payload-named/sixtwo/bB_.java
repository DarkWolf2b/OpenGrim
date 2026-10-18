package sixtwo;

public record bB(
   int index,
   boolean selected,
   float centerX,
   float centerY,
   float diameter,
   float innerRadius,
   float outerRadius,
   float segmentStart,
   float segmentEnd,
   float segmentMiddleAngle
) {
   private static int[] a;

   static {
      if (b() != null) {
         b(new int[1]);
      }
   }

   public static void b(int[] var0) {
      a = var0;
   }

   public static int[] b() {
      return a;
   }
}
