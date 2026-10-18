package sixtwo;

import net.minecraft.item.Item;

record pv$vx(Item item, long createdAt, long durationMillis) {
   private long remainingMillis() {
      return this.durationMillis - (System.currentTimeMillis() - this.createdAt);
   }
}
