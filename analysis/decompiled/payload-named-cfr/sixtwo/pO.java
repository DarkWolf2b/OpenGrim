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

public final class pO
extends qa {
    private static String niRjp;
    private static long ECWqq;
    private static String XEBli;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pO() {
        long l2 = ECWqq ^ 0x720D027708D8L;
        super(XEBli);
    }

    static {
        Loader.doInit(pO.class);
        pO._d90fc97e0ce242f32721694d47c70a51();
    }

    @Override
    public native pX createInstance();

    public static native String cTG();

    public static native void cTF(String var0);

    private static native String cTH(byte[] var0);

    @Override
    public native void applyPreviewKeyframe(PlayerEntityModel var1);

    private static native void _d90fc97e0ce242f32721694d47c70a51();
}

