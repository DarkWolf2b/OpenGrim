/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.LevelRendererAccessor
 *  net.minecraft.block.entity.BlockEntity
 *  net.minecraft.client.render.Frustum
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import mixin.accessors.LevelRendererAccessor;
import net.minecraft.block.entity.BlockEntity;
import net.minecraft.client.render.Frustum;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.jH;
import sixtwo.mN;
import sixtwo.rD;

public class jJ {
    private static final long lrkPY = gb.aYR(-2468805518013952715L, 5312314740014689892L, MethodHandles.lookup().lookupClass()).a(43666576135917L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static MatchException bIE(MatchException matchException) {
        return matchException;
    }

    private static Frustum bID() {
        Frustum frustum;
        block2: {
            block3: {
                long l2 = lrkPY ^ 0x176C9052849BL;
                LevelRendererAccessor levelRendererAccessor = (LevelRendererAccessor)rD.dlmvG.worldRenderer;
                Frustum frustum2 = levelRendererAccessor.getCapturedFrustum();
                String[] stringArray = jH.bIh();
                try {
                    frustum = frustum2;
                    if (stringArray != null) break block2;
                    if (frustum == null) break block3;
                }
                catch (MatchException matchException) {
                    throw jJ.bIE(matchException);
                }
                Vec3d vec3d = ((mN)rD.dlmvG.worldRenderer).getFrustumPos();
                frustum2.setPosition(vec3d.x, vec3d.y, vec3d.z);
                return frustum2;
            }
            frustum = ((mN)rD.dlmvG.worldRenderer).getCullingFrustum();
        }
        return frustum;
    }

    public static boolean bIB(Entity entity) {
        Frustum frustum;
        block4: {
            Frustum frustum2;
            block5: {
                long l2 = lrkPY ^ 0x49EC6EDD4B87L;
                frustum2 = jJ.bID();
                String[] stringArray = jH.bIh();
                try {
                    try {
                        frustum = frustum2;
                        if (stringArray != null) break block4;
                        if (frustum != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jJ.bIE(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw jJ.bIE(matchException);
                }
            }
            frustum = frustum2;
        }
        return frustum.isVisible(entity.getBoundingBox());
    }

    public static boolean bIC(BlockEntity blockEntity) {
        return jJ.bIA(blockEntity.getPos().toCenterPos());
    }

    public static boolean bIA(Vec3d vec3d) {
        Frustum frustum;
        block4: {
            Frustum frustum2;
            block5: {
                long l2 = lrkPY ^ 0x11DDBA0263D2L;
                frustum2 = jJ.bID();
                String[] stringArray = jH.bIh();
                try {
                    try {
                        frustum = frustum2;
                        if (stringArray != null) break block4;
                        if (frustum != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jJ.bIE(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw jJ.bIE(matchException);
                }
            }
            frustum = frustum2;
        }
        return frustum.isVisible(new Box(vec3d.x - 0.5, vec3d.y - 0.5, vec3d.z - 0.5, vec3d.x + 0.5, vec3d.y + 0.5, vec3d.z + 0.5));
    }
}

