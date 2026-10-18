package sixtwo;

import com.mojang.blaze3d.opengl.GlStateManager;

record lR$uF(int id) implements lW {
   @Override
   public void close() {
      GlStateManager.glDeleteProgram(this.id);
   }
}
