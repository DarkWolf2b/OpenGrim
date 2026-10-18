package sixtwo;

public record bA(float centerX, float centerY, float innerRadius, float outerRadius) {
   public float diameter() {
      return this.outerRadius * 2.0F;
   }
}
