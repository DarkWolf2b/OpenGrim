/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import java.util.Map;
import native.Loader;
import net.minecraft.util.math.BlockPos;
import sixtwo.gH;
import sixtwo.gM;
import sixtwo.gV;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.oT;

public class oU {
    public static Map<BlockPos, Long> Xrdom;
    private static long sTPpe;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oU() {
        hF.bdI(this);
    }

    static {
        Loader.doInit(oU.class);
        oU._2bda7cb231f64d149b404b87ecfe20b1();
    }

    @hG
    public native void cKW(gH.th var1);

    @hG
    public native void cKX(gV var1);

    private static native /* synthetic */ void cKZ(BlockPos var0, Long var1);

    private static native MatchException cLa(MatchException var0);

    @hG
    public native void cKV(gM var1);

    public native boolean cKY(oT var1);

    private static native void _2bda7cb231f64d149b404b87ecfe20b1();
}

