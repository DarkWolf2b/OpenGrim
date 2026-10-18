package sixtwo;

import net.minecraft.entity.Entity;

public record pA$vy(Entity entity, boolean preview, String text, lq font, float renderScale, float alpha, float paddingX, float paddingY) {
   public float textHeight() {
      return this.font.cat();
   }

   public float textWidth() {
      return this.font.cao(this.text);
   }
}
