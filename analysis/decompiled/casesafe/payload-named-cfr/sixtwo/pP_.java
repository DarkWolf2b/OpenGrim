/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.entity.model.PlayerEntityModel
 */
package sixtwo;

import native.Loader;
import net.minecraft.client.render.entity.model.PlayerEntityModel;
import sixtwo.pX;
import sixtwo.qa;

public final class pP
extends qa {
    private static long jTHTm;
    private static String vYCdO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pP() {
        long l2 = jTHTm ^ 0x7C4402817799L;
        super(vYCdO);
    }

    static {
        Loader.doInit(pP.class);
        pP._30c3ec361429792e2e8e2cfa391fb8d4();
    }

    @Override
    public native pX createInstance();

    private static native String cTI(byte[] var0);

    @Override
    public native void applyPreviewKeyframe(PlayerEntityModel var1);

    private static native void _30c3ec361429792e2e8e2cfa391fb8d4();
}

