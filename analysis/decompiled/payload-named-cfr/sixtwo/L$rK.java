/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.EntityType
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.EntityType;
import sixtwo.au;
import sixtwo.az;
import sixtwo.lC;
import sixtwo.mA;

class L$rK
extends az {
    private final EntityType<?> QFiUg;
    private final au hokMP;
    private static long ajRbq;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public L$rK(EntityType<?> entityType) {
        this.QFiUg = entityType;
        this.hokMP = new au(8.0f);
    }

    static {
        Loader.doInit(L$rK.class);
        L$rK._a1cf686d069959edb3f5bdf9a8293eeb();
    }

    @Override
    public native boolean dk(double var1, double var3, mA var5);

    private static native void _a1cf686d069959edb3f5bdf9a8293eeb();

    public native au dmE();

    @Override
    protected native void bV(lC var1);

    public native EntityType<?> dmD();

    private static native MatchException dmF(MatchException var0);
}

