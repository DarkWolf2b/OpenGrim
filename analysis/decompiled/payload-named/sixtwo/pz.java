package sixtwo;

import net.minecraft.entity.Entity;
import net.minecraft.util.math.Vec2f;

public interface pz extends px {
   py verticalAnchor(pK var1);

   pK verticalAnchor();

   Vec2f measure(lC var1, lc var2, Entity var3, boolean var4);

   void drawBox(lC var1, lc var2, lc var3, Entity var4, boolean var5);
}
