/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;

public final class lm$uy
extends Record {
    private final String text;
    private final int color;
    private final boolean bold;
    private final boolean italic;
    private final boolean underlined;
    private final boolean strikethrough;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public lm$uy(String string, int n2, boolean bl2, boolean bl3, boolean bl4, boolean bl5) {
        this.text = string;
        this.color = n2;
        this.bold = bl2;
        this.italic = bl3;
        this.underlined = bl4;
        this.strikethrough = bl5;
    }

    static {
        Loader.doInit(lm$uy.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native int color();

    public native String text();

    public native boolean strikethrough();

    public native boolean bold();

    public native boolean italic();

    public native boolean underlined();
}

