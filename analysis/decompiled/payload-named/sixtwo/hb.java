package sixtwo;

import net.minecraft.util.math.Vec3d;

public class hb extends hH {
   private Vec3d Jsypv;
   private float jSwLj;
   private float SYWqk;
   private Vec3d cRDZk;

   public hb(Vec3d var1, float var2, float var3, Vec3d var4) {
      this.Jsypv = var1;
      this.jSwLj = var2;
      this.SYWqk = var3;
      this.cRDZk = var4;
   }

   public void bcv(Vec3d var1) {
      this.cRDZk = var1;
   }

   public float bcs() {
      return this.jSwLj;
   }

   public Vec3d bcr() {
      return this.Jsypv;
   }

   public Vec3d bcu() {
      return this.cRDZk;
   }

   public float bct() {
      return this.SYWqk;
   }
}
