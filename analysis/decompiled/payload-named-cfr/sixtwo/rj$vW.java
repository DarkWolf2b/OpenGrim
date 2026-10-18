/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.rj$vZ;

public class rj$vW
extends rj$vZ {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public rj$vW() {
    }

    public rj$vW(float f2) {
        super(f2);
    }

    @Override
    public float dga(float f2, float f3, float f4, float f5) {
        float f6 = this.dyE();
        f2 = f2 / f5 - 1.0f;
        return f4 * (f2 * f2 * ((f6 + 1.0f) * f2 + f6) + 1.0f) + f3;
    }
}

