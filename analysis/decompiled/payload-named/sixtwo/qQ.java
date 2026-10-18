/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.player.PlayerEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.ArrayList;
import java.util.List;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.az;
import sixtwo.mE;

public class qQ {
    private final List<mE> rPjgu = new ArrayList<mE>();
    private static long cuamu;
    private static String[] btMoV;
    private static String[] jxiCs;
    private static Map UWUpq;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        Loader.doInit(qQ.class);
        qQ._3509cb5da09b3d990b715e1d57c6118d();
    }

    public boolean ddy(PlayerEntity playerEntity) {
        return this.ddw(playerEntity.getGameProfile().name());
    }

    public boolean ddw(String string) {
        return this.rPjgu.stream().anyMatch(arg_0 -> qQ.ddJ(string, arg_0));
    }

    private static native /* synthetic */ Map ddF(mE var0);

    private static native /* synthetic */ boolean ddH(String var0, mE var1);

    public native List<Map<String, Object>> ddD();

    private static native /* synthetic */ void ddI(mE var0, az var1);

    public native void ddz(mE var1);

    public native void ddB(mE var1);

    private static native CallSite ddO(MethodHandles.Lookup var0, String var1, MethodType var2);

    public native void ddC(String var1);

    private static native String ddM(int var0, long var1);

    private static native MatchException ddK(MatchException var0);

    public native void ddA(String var1);

    private static native Object ddN(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    public boolean ddx(mE mE2) {
        return this.rPjgu.contains(mE2);
    }

    private static native /* synthetic */ boolean ddJ(String var0, mE var1);

    private static native String ddL(byte[] var0);

    private static native /* synthetic */ void ddG(String var0, az var1);

    private static native void _3509cb5da09b3d990b715e1d57c6118d();

    public List<mE> ddE() {
        return this.rPjgu;
    }
}

