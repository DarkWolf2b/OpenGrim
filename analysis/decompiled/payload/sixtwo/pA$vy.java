package sixtwo;

import net.minecraft.class_1297;

public record pA$vy(class_1297 entity, boolean preview, String text, lq font, float renderScale, float alpha, float paddingX, float paddingY) {
   public float textHeight() {
      return this.font.cat();
   }

   public float textWidth() {
      return this.font.cao(this.text);
   }
}
