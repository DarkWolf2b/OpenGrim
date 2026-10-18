/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.LivingEntity
 */
package sixtwo;

import net.minecraft.entity.LivingEntity;
import sixtwo.hH;

public class hs
extends hH {
    private final LivingEntity SfqRA;
    private float KXEMk;
    private float daZxT;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public hs(LivingEntity livingEntity, float f2, float f3) {
        this.SfqRA = livingEntity;
        this.KXEMk = f2;
        this.daZxT = f3;
    }

    public float bde() {
        return this.KXEMk;
    }

    public float bdf() {
        return this.daZxT;
    }

    public LivingEntity bdd() {
        return this.SfqRA;
    }

    public void bdg(float f2) {
        this.KXEMk = f2;
    }

    public void bdh(float f2) {
        this.daZxT = f2;
    }
}

