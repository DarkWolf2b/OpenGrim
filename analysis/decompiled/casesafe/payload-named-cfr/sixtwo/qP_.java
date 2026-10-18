/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.Entity;
import sixtwo.gH;
import sixtwo.gZ;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.mw;
import sixtwo.oT;
import sixtwo.oU;
import sixtwo.oW;
import sixtwo.oY;

public class qP {
    private final oY yAfyb = new oY();
    private final oU TJoQG = new oU();
    private boolean YphGx = false;
    private static long NtOrH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qP() {
        hF.bdI(this);
    }

    static {
        Loader.doInit(qP.class);
        qP._f953dc8bce1e7146d07a9da5f715aba9();
    }

    private native /* synthetic */ Boolean ddu(Entity var1);

    @hG(priority=mw.LOWEST)
    public native void ddl(gH.ti var1);

    public native oY ddr();

    public native void ddq();

    public native boolean ddt();

    @hG(priority=mw.LOWEST)
    public native void ddk(gZ.tt var1);

    public native boolean ddm(oW var1);

    private static native MatchException ddv(MatchException var0);

    public native boolean ddp(oT var1);

    public native oU dds();

    public native boolean ddo(Entity var1);

    private static native void _f953dc8bce1e7146d07a9da5f715aba9();

    public native boolean ddn(Entity var1);
}

