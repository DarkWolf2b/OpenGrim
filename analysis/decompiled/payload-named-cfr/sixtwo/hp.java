/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.Entity$RemovalReason
 */
package sixtwo;

import net.minecraft.entity.Entity;
import sixtwo.hH;

public class hp
extends hH {
    private Entity tKLCE;
    private Entity.RemovalReason NKJiw;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public hp(Entity entity, Entity.RemovalReason removalReason) {
        this.tKLCE = entity;
        this.NKJiw = removalReason;
    }

    public Entity bcX() {
        return this.tKLCE;
    }

    public Entity.RemovalReason bcY() {
        return this.NKJiw;
    }
}

