/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import native.Loader;
import net.minecraft.entity.Entity;
import sixtwo.iS;
import sixtwo.os;
import sixtwo.ov;
import sixtwo.ow;

public class ot {
    private final ov YsbSE;
    private final Entity sHYgS;
    private final os sdyTw;
    private final int CXvBl;
    private final float LcRty;
    private final boolean YBFXu;
    private final boolean VqVzU;
    private final ow DYYof;
    private static long MQGNA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ot(ov ov2, Entity entity, os os2, int n2, float f2, boolean bl2, ow ow2, boolean bl3) {
        long l2 = MQGNA ^ 0x2C4146562A43L;
        iS[] iSArray = ov.cGN();
        this.YsbSE = ov2;
        this.sHYgS = entity;
        this.sdyTw = os2;
        iS[] iSArray2 = iSArray;
        try {
            this.CXvBl = n2;
            this.LcRty = f2;
            this.YBFXu = bl2;
            this.DYYof = ow2;
            this.VqVzU = bl3;
            if (iS.bwL() == null) {
                ov.cGM(new iS[3]);
            }
        }
        catch (MatchException matchException) {
            throw ot.cGo(matchException);
        }
    }

    static {
        Loader.doInit(ot.class);
        ot._c28d24d0d0ca6e63f7ddd4b6f01c3d6d();
    }

    public native boolean cGg();

    public native boolean cGm();

    private static native MatchException cGo(MatchException var0);

    public native ov cGh();

    public native Entity cGi();

    public native int cGk();

    public native boolean cGf();

    public native ov cGd(ov var1, boolean var2);

    public native os cGj();

    public native ow cGn();

    public native float cGl();

    private static native void _c28d24d0d0ca6e63f7ddd4b6f01c3d6d();

    public native boolean cGe();
}

