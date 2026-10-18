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

public final class pT
extends qa {
    private static long IJUuI;
    private static String gXNXY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pT() {
        long l2 = IJUuI ^ 0x399F1992ECB7L;
        super(gXNXY);
    }

    static {
        Loader.doInit(pT.class);
        pT._0ecb3d626d60f018c6b822baef33d11e();
    }

    @Override
    public native pX createInstance();

    private static native String cTM(byte[] var0);

    @Override
    public native void applyPreviewKeyframe(PlayerEntityModel var1);

    private static native void _0ecb3d626d60f018c6b822baef33d11e();
}

