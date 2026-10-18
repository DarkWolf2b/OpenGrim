/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import sixtwo.kb;
import sixtwo.lc;

public interface kh<T> {
    public static final kb FroVm = new kb();

    public void render(T var1);

    default public lc expandBySmoothness(float f2, float f3, float f4, float f5, float f6) {
        float f7 = f6 * 1.5f;
        return new lc(f2 - f7 * 0.5f, f3 - f7 * 0.5f, f4 + f7, f5 + f7);
    }
}

