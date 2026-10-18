/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable
 */
package sixtwo;

import net.minecraft.entity.Entity;
import org.spongepowered.asm.mixin.injection.callback.CallbackInfoReturnable;
import sixtwo.hH;

public class hr
extends hH {
    private Entity HztkT;
    private CallbackInfoReturnable<Float> hdBkc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public CallbackInfoReturnable<Float> bdc() {
        return this.hdBkc;
    }

    public Entity bdb() {
        return this.HztkT;
    }

    public hr(Entity entity, CallbackInfoReturnable<Float> callbackInfoReturnable) {
        this.HztkT = entity;
        this.hdBkc = callbackInfoReturnable;
    }
}

