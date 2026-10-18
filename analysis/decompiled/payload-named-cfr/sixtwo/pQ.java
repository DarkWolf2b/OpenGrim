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

public final class pQ
extends qa {
    private static long gCXWd;
    private static String ZrmRi;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pQ() {
        long l2 = gCXWd ^ 0x624EE5DBD547L;
        super(ZrmRi);
    }

    static {
        Loader.doInit(pQ.class);
        pQ._888961dce559f3ba5c0aa51caf2e3526();
    }

    @Override
    public native pX createInstance();

    private static native String cTJ(byte[] var0);

    @Override
    public native void applyPreviewKeyframe(PlayerEntityModel var1);

    private static native void _888961dce559f3ba5c0aa51caf2e3526();
}

