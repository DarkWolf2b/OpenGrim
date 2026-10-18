/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.EntityType
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.projectile.PersistentProjectileEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.hit.EntityHitResult
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.World
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.entity.EntityType;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.projectile.PersistentProjectileEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.util.hit.EntityHitResult;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.World;
import sixtwo.gb;
import sixtwo.mk;
import sixtwo.mk$uH;

class mk$uJ
extends PersistentProjectileEntity {
    final boolean[] alpOb;
    final mk$uH kZTMf;
    private static final long DupjF = gb.aYR(-1654546772862254832L, -4010347470658568081L, MethodHandles.lookup().lookupClass()).a(167330261954076L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    mk$uJ(EntityType entityType, World world, boolean[] blArray, mk$uH mk$uH) {
        this.alpOb = blArray;
        this.kZTMf = mk$uH;
        super(entityType, world);
    }

    protected ItemStack getDefaultItemStack() {
        return null;
    }

    protected void onHit(LivingEntity target) {
        this.alpOb[0] = true;
    }

    public ItemStack asItemStack() {
        return null;
    }

    protected void onEntityHit(EntityHitResult entityHitResult) {
        this.alpOb[0] = true;
    }

    public void tick() {
        block11: {
            mk$uJ mk$uJ;
            block10: {
                mk$uH mk$uH;
                block8: {
                    int[] nArray;
                    block9: {
                        long l2 = DupjF ^ 0x5618A112FF78L;
                        int[] nArray2 = mk.cle();
                        super.tick();
                        nArray = nArray2;
                        try {
                            try {
                                mk$uH = this.kZTMf;
                                if (nArray != null) break block8;
                                if (mk$uH.persistent) break block9;
                            }
                            catch (MatchException matchException) {
                                throw mk$uJ.dvu(matchException);
                            }
                            this.addVelocityInternal(new Vec3d(0.0, 0.02, 0.0));
                        }
                        catch (MatchException matchException) {
                            throw mk$uJ.dvu(matchException);
                        }
                    }
                    try {
                        mk$uJ = this;
                        if (nArray != null) break block10;
                        mk$uH = mk$uJ.kZTMf;
                    }
                    catch (MatchException matchException) {
                        throw mk$uJ.dvu(matchException);
                    }
                }
                try {
                    if (mk$uH.entityType != EntityType.FISHING_BOBBER) break block11;
                    mk$uJ = this;
                }
                catch (MatchException matchException) {
                    throw mk$uJ.dvu(matchException);
                }
            }
            mk$uJ.setVelocity(this.getVelocity().multiply(0.9375));
        }
    }

    private static MatchException dvu(MatchException matchException) {
        return matchException;
    }
}

