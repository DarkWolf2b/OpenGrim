/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.mG;

public record kZ(float offset, mG color) {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public kZ(float f2, mG mG2) {
        this.offset = f2 = Math.clamp(f2, 0.0f, 1.0f);
        this.color = mG2;
    }

    public static kZ of(float f2, mG mG2) {
        return new kZ(f2, mG2);
    }
}

