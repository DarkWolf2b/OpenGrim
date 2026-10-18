package sixtwo;

import native.Loader;
import net.minecraft.text.Style;

class fS$sV {
   Style BmGPX;
   StringBuilder sQGRe = new StringBuilder();

   fS$sV(Style var1) {
      this.BmGPX = var1;
   }

   static {
      Loader.doInit(fS$sV.class);
   }

   native int dpc();
}
