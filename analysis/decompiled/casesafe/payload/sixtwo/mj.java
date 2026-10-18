package sixtwo;

public record mj(
   double launchSpeed,
   double gravity,
   double airDrag,
   double waterDrag,
   boolean noGravity,
   boolean isArrow,
   double handOffset,
   double eyeOffset,
   double pitchOffsetDegrees
) {
   public static final double DEFAULT_AIR_DRAG = 0.99;
   public static final double DEFAULT_WATER_DRAG = 0.8;
   public static final double DEFAULT_EYE_OFFSET = 0.1000000014901161;

   public mj scaleLaunchSpeed(double var1) {
      return this.withLaunchSpeed(this.launchSpeed * var1);
   }

   public mj withLaunchSpeed(double var1) {
      return new mj(var1, this.gravity, this.airDrag, this.waterDrag, this.noGravity, this.isArrow, this.handOffset, this.eyeOffset, this.pitchOffsetDegrees);
   }
}
