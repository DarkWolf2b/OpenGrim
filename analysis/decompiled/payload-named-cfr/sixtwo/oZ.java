/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import java.util.function.BooleanSupplier;
import native.Loader;
import net.minecraft.entity.Entity;

public final class oZ {
    private static ThreadLocal<Integer> LgQsP;
    private static long CtJsB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(oZ.class);
        oZ._1594225129314a4e9a9c0d42ad8fbeab();
    }

    private static native void _1594225129314a4e9a9c0d42ad8fbeab();

    public static native boolean cMl();

    private static native /* synthetic */ Integer cMm();

    public static native boolean cMk(Entity var0, BooleanSupplier var1);

    private static native MatchException cMn(MatchException var0);
}

