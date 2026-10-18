/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.platform.DepthTestFunction
 */
package sixtwo;

import com.mojang.blaze3d.platform.DepthTestFunction;
import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.kS;
import sixtwo.lh;

public final class kS$ur {
    private lh QzklF = lh.GpGUc;
    private DepthTestFunction NpNot = DepthTestFunction.LEQUAL_DEPTH_TEST;
    private boolean bEunq = true;
    private boolean wgMTt = true;
    private static final long imTUe = gb.aYR(-3947192174411393372L, 6095874698076732744L, MethodHandles.lookup().lookupClass()).a(217868700101829L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public kS dup() {
        return new kS(this);
    }

    public kS$ur duo(boolean bl2) {
        this.wgMTt = bl2;
        return this;
    }

    public kS$ur duk(lh lh2) {
        this.QzklF = lh2;
        return this;
    }

    public kS$ur dun(boolean bl2) {
        this.bEunq = bl2;
        return this;
    }

    public kS$ur dul(boolean bl2) {
        DepthTestFunction depthTestFunction;
        long l2 = imTUe ^ 0x6C74EEE4809BL;
        try {
            kS$ur kS$ur = this;
            depthTestFunction = bl2 ? DepthTestFunction.LEQUAL_DEPTH_TEST : DepthTestFunction.NO_DEPTH_TEST;
        }
        catch (MatchException matchException) {
            throw kS$ur.duq(matchException);
        }
        kS$ur.NpNot = depthTestFunction;
        return this;
    }

    private static MatchException duq(MatchException matchException) {
        return matchException;
    }

    public kS$ur dum(DepthTestFunction depthTestFunction) {
        this.NpNot = depthTestFunction;
        return this;
    }
}

