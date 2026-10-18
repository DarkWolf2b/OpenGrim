/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.damage.DamageSource
 */
package sixtwo;

import net.minecraft.entity.Entity;
import net.minecraft.entity.damage.DamageSource;
import sixtwo.hH;

public class hv
extends hH {
    private final Entity gVQJL;
    private final DamageSource OCbXf;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public hv(Entity entity, DamageSource damageSource) {
        this.gVQJL = entity;
        this.OCbXf = damageSource;
    }

    public DamageSource bdl() {
        return this.OCbXf;
    }

    public Entity bdk() {
        return this.gVQJL;
    }
}

