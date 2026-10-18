package sixtwo;

import net.minecraft.client.render.command.OrderedRenderCommandQueue;
import net.minecraft.client.render.entity.EntityRenderManager;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.PlayerLikeEntity;

public class gj extends hH {
   private MatrixStack UlhDQ;
   private PlayerLikeEntity dGSXa;
   private EntityRenderManager JmnUb;
   private OrderedRenderCommandQueue AMllE;

   public gj(MatrixStack var1, PlayerLikeEntity var2, EntityRenderManager var3, OrderedRenderCommandQueue var4) {
      this.UlhDQ = var1;
      this.dGSXa = var2;
      this.JmnUb = var3;
      this.AMllE = var4;
   }

   public EntityRenderManager baR() {
      return this.JmnUb;
   }

   public OrderedRenderCommandQueue baS() {
      return this.AMllE;
   }

   public MatrixStack baP() {
      return this.UlhDQ;
   }

   public PlayerLikeEntity baQ() {
      return this.dGSXa;
   }
}
