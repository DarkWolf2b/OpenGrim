/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.BlockPos
 */
package sixtwo;

import java.util.HashSet;
import java.util.Set;
import native.Loader;
import net.minecraft.util.math.BlockPos;
import sixtwo.gH;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;

public class ec
extends gg {
    private final Set<BlockPos> SRuur;
    private static long fIYBK;
    private static long esMqW;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ec() {
        long l2 = fIYBK ^ 0x7764754F87EAL;
        super(gf.aZL((int)esMqW, false, gh.qBzlZ));
        this.SRuur = new HashSet<BlockPos>();
    }

    static {
        Loader.doInit(ec.class);
        ec._a6b74c1c3e347fb3f64dc8d1948a0595();
    }

    private static native void _a6b74c1c3e347fb3f64dc8d1948a0595();

    @hG
    public native void arz(gH.th var1);

    private static native MatchException arA(MatchException var0);
}

