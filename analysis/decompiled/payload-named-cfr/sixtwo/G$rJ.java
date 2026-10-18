/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import native.Loader;

final class G$rJ
extends Record {
    private final float listX;
    private final float listY;
    private final float listWidth;
    private final float listHeight;
    private final float footerX;
    private final float footerY;
    private final float footerWidth;
    private final float footerHeight;
    private final float rowsStartY;
    private final float addIconY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private G$rJ(float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11) {
        this.listX = f2;
        this.listY = f3;
        this.listWidth = f4;
        this.listHeight = f5;
        this.footerX = f6;
        this.footerY = f7;
        this.footerWidth = f8;
        this.footerHeight = f9;
        this.rowsStartY = f10;
        this.addIconY = f11;
    }

    static {
        Loader.doInit(G$rJ.class);
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    public native float listWidth();

    public native float rowsStartY();

    public native float addIconY();

    native float addIconX();

    public native float footerX();

    public native float footerY();

    public native float listX();

    public native float listY();

    public native float listHeight();

    public native float footerWidth();

    public native float footerHeight();
}

