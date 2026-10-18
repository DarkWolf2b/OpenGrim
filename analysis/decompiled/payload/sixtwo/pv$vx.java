package sixtwo;

import net.minecraft.class_1792;

record pv$vx(class_1792 item, long createdAt, long durationMillis) {
   private long remainingMillis() {
      return this.durationMillis - (System.currentTimeMillis() - this.createdAt);
   }
}
