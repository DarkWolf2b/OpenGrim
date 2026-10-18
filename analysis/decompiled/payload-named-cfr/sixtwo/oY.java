/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.util.Map;
import native.Loader;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import sixtwo.gM;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.oW;
import sixtwo.pa;
import sixtwo.pb;

public class oY {
    private final pa OcRSu = new pa();
    private final pb KODCp = new pb();
    private boolean WzTEi;
    private static long VZDMl;
    private static long[] jVScc;
    private static Integer[] TnPJT;
    private static Map ghxZc;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oY() {
        hF.bdI(this);
    }

    static {
        Loader.doInit(oY.class);
        oY._c9a0052a838a5503001e18d485570420();
    }

    private native boolean cLU(oW var1);

    private native boolean cLY(oW var1);

    public native boolean cLP(oW var1);

    public native boolean cLS();

    private native boolean cLW(oW var1);

    private native void cLX(oW var1);

    public native boolean cMb();

    private static native /* synthetic */ boolean cMc(LivingEntity var0, Entity var1);

    private native /* synthetic */ boolean cMd(Entity var1);

    private native boolean cLV(oW var1);

    private static native /* synthetic */ boolean cMf(LivingEntity var0, Entity var1);

    private static native MatchException cMg(MatchException var0);

    private static native int cMi(MethodHandles.Lookup var0, MutableCallSite var1, String var2, Object[] var3);

    private static native CallSite cMj(MethodHandles.Lookup var0, String var1, MethodType var2);

    @hG
    public native void cLO(gM var1);

    public native boolean cLQ(Entity var1);

    public native boolean cLT(oW var1);

    public native pb cMa();

    public native pa cLZ();

    private native boolean cLR(Entity var1);

    private static native /* synthetic */ boolean cMe(oW var0, Entity var1);

    private static native int cMh(int var0, long var1);

    private static native void _c9a0052a838a5503001e18d485570420();
}

