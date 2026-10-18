/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

public record bA(float centerX, float centerY, float innerRadius, float outerRadius) {
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public float diameter() {
        return this.outerRadius * 2.0f;
    }
}

