package sixtwo;

import net.minecraft.class_1799;

record pq$vw(
   class_1799 stack,
   String text,
   lq font,
   float renderScale,
   float alpha,
   float paddingX,
   float paddingY,
   float itemScale,
   float itemSize,
   boolean hasIcon,
   boolean hasName,
   float iconOutput,
   float nameOutput
) {
   public float textHeight() {
      return this.font.cat();
   }

   public float textWidth() {
      return this.font.cao(this.text);
   }
}
