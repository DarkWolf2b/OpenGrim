package sixtwo;

import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.Direction;
import net.minecraft.util.math.Vec3d;

public class mB {
   private BlockPos VBRbf;
   private Vec3d MgRaw;
   private Direction AoZAE;

   public mB(BlockPos var1, Vec3d var2, Direction var3) {
      this.VBRbf = var1;
      this.MgRaw = var2;
      this.AoZAE = var3;
   }

   public void cmY(BlockPos var1) {
      this.VBRbf = var1;
   }

   public void cmZ(Vec3d var1) {
      this.MgRaw = var1;
   }

   public Direction cnd() {
      return this.AoZAE;
   }

   public Vec3d cnc() {
      return this.MgRaw;
   }

   public BlockPos cnb() {
      return this.VBRbf;
   }

   public void cna(Direction var1) {
      this.AoZAE = var1;
   }
}
