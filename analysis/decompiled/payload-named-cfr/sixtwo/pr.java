/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.MathHelper
 */
package sixtwo;

import net.minecraft.util.math.MathHelper;

public final class pr {
    private final float nlbzg;
    private final float GxEzW;
    private final float RVtJB;
    private final float VAtZN;
    private static int[] ZZbRB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pr(float f2, float f3, float f4) {
        this(f2, f3, f4, MathHelper.clamp((float)(f2 / Math.max(1.0f, f3)), (float)0.0f, (float)1.0f));
    }

    public pr(float f2, float f3, float f4, float f5) {
        this.nlbzg = f2;
        this.GxEzW = f3;
        this.RVtJB = f4;
        this.VAtZN = MathHelper.clamp((float)f5, (float)0.0f, (float)1.0f);
    }

    static {
        if (pr.cOX() != null) {
            pr.cOW(new int[2]);
        }
    }

    public float cOS() {
        return this.nlbzg;
    }

    public static void cOW(int[] nArray) {
        ZZbRB = nArray;
    }

    public float cOU() {
        return this.RVtJB;
    }

    public static int[] cOX() {
        return ZZbRB;
    }

    public float cOV() {
        return this.VAtZN;
    }

    public float cOT() {
        return this.GxEzW;
    }
}

