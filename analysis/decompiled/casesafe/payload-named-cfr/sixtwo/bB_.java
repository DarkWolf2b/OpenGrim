/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

public record bB(int index, boolean selected, float centerX, float centerY, float diameter, float innerRadius, float outerRadius, float segmentStart, float segmentEnd, float segmentMiddleAngle) {
    private static int[] a;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        if (bB.b() != null) {
            bB.b(new int[1]);
        }
    }

    public static void b(int[] nArray) {
        a = nArray;
    }

    public static int[] b() {
        return a;
    }
}

