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
import sixtwo.ov;

public abstract class os {
    private static String qscLl;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(os.class);
        os._144dfa08eb37d6a8cfa6537c9d8665c5();
    }

    private static native void _144dfa08eb37d6a8cfa6537c9d8665c5();

    public native ov cGa(ov var1, ov var2);

    public static native void cGb(String var0);

    public abstract Vec3d cFU();

    public abstract ov cFT(ov var1, ov var2, Entity var3);

    public static native String cGc();
}

