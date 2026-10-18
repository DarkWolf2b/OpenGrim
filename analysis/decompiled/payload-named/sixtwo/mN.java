package sixtwo;

import net.minecraft.client.render.Frustum;
import net.minecraft.util.math.Vec3d;

public interface mN {
   Vec3d getFrustumPos();

   Frustum getCullingFrustum();
}
