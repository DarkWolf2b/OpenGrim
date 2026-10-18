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

public final class pR
extends qa {
    private static long ebYym;
    private static String RpCnE;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pR() {
        long l2 = ebYym ^ 0x2DEDB2F84BCFL;
        super(RpCnE);
    }

    static {
        Loader.doInit(pR.class);
        pR._a3fc9423ef433933fac5956e093b555c();
    }

    @Override
    public native pX createInstance();

    private static native String cTK(byte[] var0);

    @Override
    public native void applyPreviewKeyframe(PlayerEntityModel var1);

    private static native void _a3fc9423ef433933fac5956e093b555c();
}

