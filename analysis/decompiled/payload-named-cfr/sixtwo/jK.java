/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  org.joml.Matrix4f
 */
package sixtwo;

import org.joml.Matrix4f;

public final class jK {
    public static final float qAijK = 0.05f;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static Matrix4f bIF(float f2, float f3, float f4) {
        return new Matrix4f().setPerspective((float)Math.toRadians(f2), f3, 0.05f, f4);
    }
}

