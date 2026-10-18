/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.player.PlayerEntity
 *  sixtwo.on$vh$wl
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import java.util.UUID;
import java.util.concurrent.ConcurrentHashMap;
import native.Loader;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.on$vh;

final class on$vh {
    private final Map<UUID, wl> YAhjH = new ConcurrentHashMap<UUID, wl>();
    private static long plWGM;
    private static long[] CrYSZ;
    private static Integer[] UcsYU;
    private static Map SDlfd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private on$vh() {
    }

    static {
        Loader.doInit(on$vh.class);
        on$vh._64725e7ffc7733a3ea78592b46087177();
    }

    public native void dwu(PlayerEntity var1, int var2);

    private static native void _64725e7ffc7733a3ea78592b46087177();

    public native void dww(UUID var1, int var2);

    public native int dwz(PlayerEntity var1);

    public native boolean dwx(PlayerEntity var1);

    public native void dwC(UUID var1);

    public native void dwt(PlayerEntity var1);

    public native void dwv(UUID var1);

    public native boolean dwy(UUID var1);

    public native int dwA(UUID var1);

    public native void dwB(PlayerEntity var1);

    public native void dwD();

    public native void dwE();

    private static native MatchException dwF(MatchException var0);

    private static native int dwH(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite dwI(MethodHandles.Lookup var0, String var1, MethodType var2);

    private static native int dwG(int var0, long var1);
}

