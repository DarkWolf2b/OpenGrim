package sixtwo;

import net.minecraft.item.ItemStack;

record pq$vw(
   ItemStack stack,
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
