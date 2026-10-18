package sixtwo;

import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.Entity;
import net.minecraft.text.Text;

public class gi extends hH {
   private Entity PkMHK;
   private Text KWUnr;
   private MatrixStack KSVnW;
   private OrderedRenderCommandQueue fqnYk;

   public gi(Entity var1, Text var2, MatrixStack var3, OrderedRenderCommandQueue var4) {
      this.PkMHK = var1;
      this.KWUnr = var2;
      this.KSVnW = var3;
      this.fqnYk = var4;
   }

   public OrderedRenderCommandQueue baO() {
      return this.fqnYk;
   }

   public MatrixStack baN() {
      return this.KSVnW;
   }

   public Entity baL() {
      return this.PkMHK;
   }

   public Text baM() {
      return this.KWUnr;
   }
}
