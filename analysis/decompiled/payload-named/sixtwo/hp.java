package sixtwo;

import net.minecraft.entity.Entity;
import net.minecraft.entity.Entity.RemovalReason;

public class hp extends hH {
   private Entity tKLCE;
   private RemovalReason NKJiw;

   public hp(Entity var1, RemovalReason var2) {
      this.tKLCE = var1;
      this.NKJiw = var2;
   }

   public Entity bcX() {
      return this.tKLCE;
   }

   public RemovalReason bcY() {
      return this.NKJiw;
   }
}
