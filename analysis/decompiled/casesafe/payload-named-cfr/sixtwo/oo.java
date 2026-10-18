/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.Vec3d;
import sixtwo.os;
import sixtwo.ov;

public class oo
extends os {
    private static boolean uyKKu;
    private static long vTvCf;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(oo.class);
        oo._6479d9c26b63e45d05d673bc7b3e0f0c();
    }

    private static native void _6479d9c26b63e45d05d673bc7b3e0f0c();

    public static native boolean cFW();

    public static native boolean cFX();

    public static native void cFV(boolean var0);

    @Override
    public native Vec3d cFU();

    private static native MatchException cFY(MatchException var0);

    @Override
    public native ov cFT(ov var1, ov var2, Entity var3);
}

