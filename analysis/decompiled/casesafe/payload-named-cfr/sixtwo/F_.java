/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;
import sixtwo.ai;
import sixtwo.lf;
import sixtwo.mG;

public final class F
extends Record {
    private final String text;
    private final lf icon;
    private final mG textColor;
    private final mG iconColor;
    private final ai action;
    private static String[] a;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public F(String string, lf lf2, ai ai2) {
        this(string, lf2, null, null, ai2);
    }

    public F(String string, lf lf2, mG mG2, mG mG3, ai ai2) {
        this.text = string;
        this.icon = lf2;
        this.textColor = mG2;
        this.iconColor = mG3;
        this.action = ai2;
    }

    static {
        Loader.doInit(F.class);
        F._a8272f08dc4ef3746d6c262c44bd92e3();
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public static native void b(String[] var0);

    public static native String[] b();

    public native ai action();

    public native String text();

    public native mG textColor();

    public native mG iconColor();

    public native lf icon();

    private static native void _a8272f08dc4ef3746d6c262c44bd92e3();
}

