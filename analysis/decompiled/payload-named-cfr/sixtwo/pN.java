/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.Entity;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.py;

public final class pN
extends Record {
    private final py element;
    private final lc bounds;
    private static long a;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pN(py py2, lc lc2) {
        this.element = py2;
        this.bounds = lc2;
    }

    static {
        Loader.doInit(pN.class);
        pN._c3d0c7548ca20ca5ff6d4fa4d2720fba();
    }

    @Override
    public final native boolean equals(Object var1);

    @Override
    public final native String toString();

    @Override
    public final native int hashCode();

    private static native MatchException a(MatchException var0);

    public native lc bounds();

    public native py element();

    public native void render(lC var1, lc var2, lc var3, Entity var4, boolean var5);

    public native void render(lC var1, lc var2, Entity var3, boolean var4);

    private static native void _c3d0c7548ca20ca5ff6d4fa4d2720fba();
}

