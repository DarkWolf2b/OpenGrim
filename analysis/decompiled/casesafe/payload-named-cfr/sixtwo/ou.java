/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.Entity;
import sixtwo.os;
import sixtwo.ot;
import sixtwo.ov;
import sixtwo.ow;

public class ou {
    public static ou kxNyl;
    private final os WsJcz;
    private final float otxSd;
    private final int ZyFmJ;
    private final boolean ZTJBz;
    private final ow fTnvQ;
    private final boolean ZADMU;
    private static long WASOI;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ou(os os2) {
        this(os2, true, false, false, 3, false);
    }

    public ou(os os2, boolean bl2, ow ow2, int n2, boolean bl3) {
        this.otxSd = 2.0f;
        this.WsJcz = os2;
        this.ZTJBz = bl2;
        this.fTnvQ = ow2;
        this.ZyFmJ = n2;
        this.ZADMU = bl3;
    }

    public ou(os os2, boolean bl2, ow ow2, boolean bl3) {
        this(os2, bl2, ow2, 3, bl3);
    }

    public ou(os os2, boolean bl2, boolean bl3, boolean bl4, int n2, boolean bl5) {
        this(os2, bl2, ou.cGt(bl3, bl4), n2, bl5);
    }

    public ou(os os2, boolean bl2, boolean bl3, boolean bl4, boolean bl5) {
        this(os2, bl2, ou.cGt(bl3, bl4), 3, bl5);
    }

    static {
        Loader.doInit(ou.class);
        ou._490c6820228eb538237f83714be8090c();
    }

    private static native void _490c6820228eb538237f83714be8090c();

    private static native ow cGt(boolean var0, boolean var1);

    private static native MatchException cGu(MatchException var0);

    public native ot cGr(ov var1, Entity var2, boolean var3, boolean var4, boolean var5, boolean var6);

    public native ot cGs(ov var1, Entity var2, boolean var3, ow var4, boolean var5);

    public native ot cGp(ov var1, Entity var2);

    public native ot cGq(ov var1);
}

