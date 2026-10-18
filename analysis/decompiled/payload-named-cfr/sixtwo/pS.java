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

public final class pS
extends qa {
    private static long izzuT;
    private static String drfyR;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pS() {
        long l2 = izzuT ^ 0x259177014A22L;
        super(drfyR);
    }

    static {
        Loader.doInit(pS.class);
        pS._fc259baf34a9df496a9134aa0ed57a74();
    }

    @Override
    public native pX createInstance();

    private static native String cTL(byte[] var0);

    @Override
    public native void applyPreviewKeyframe(PlayerEntityModel var1);

    private static native void _fc259baf34a9df496a9134aa0ed57a74();
}

