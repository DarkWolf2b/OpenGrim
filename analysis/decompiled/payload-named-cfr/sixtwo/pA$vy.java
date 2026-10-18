/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import net.minecraft.entity.Entity;
import sixtwo.lq;

public record pA$vy(Entity entity, boolean preview, String text, lq font, float renderScale, float alpha, float paddingX, float paddingY) {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public float textHeight() {
        return this.font.cat();
    }

    public float textWidth() {
        return this.font.cao(this.text);
    }
}

