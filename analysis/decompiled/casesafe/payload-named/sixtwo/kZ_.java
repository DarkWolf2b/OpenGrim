package sixtwo;

public record kZ(float offset, mG color) {
   public kZ(float offset, mG color) {
      offset = Math.clamp(offset, 0.0F, 1.0F);
      this.offset = offset;
      this.color = color;
   }

   public static kZ of(float var0, mG var1) {
      return new kZ(var0, var1);
   }
}
