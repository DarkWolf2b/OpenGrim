/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.util.math.Vec2f;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lc;

final class di$sA {
    private float UcFvW = Float.POSITIVE_INFINITY;
    private float ARrvJ = Float.POSITIVE_INFINITY;
    private float MRZOj = Float.NEGATIVE_INFINITY;
    private float VRpNr = Float.NEGATIVE_INFINITY;
    private int TomLU;
    private static final long osDYz = gb.aYR(4529541263180445756L, 6623467899913022852L, MethodHandles.lookup().lookupClass()).a(149834542413418L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private di$sA() {
    }

    private static MatchException doE(MatchException matchException) {
        return matchException;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private lc doD() {
        float f2;
        float f3;
        float f4;
        block12: {
            di$sA di$sA;
            iS[] iSArray;
            block10: {
                block11: {
                    long l2 = osDYz ^ 0x1B5697821F33L;
                    iSArray = dh.afl();
                    try {
                        try {
                            di$sA = this;
                            if (iSArray != null) break block10;
                            if (di$sA.TomLU != 0) break block11;
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw di$sA.doE(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw di$sA.doE(matchException);
                    }
                }
                di$sA = this;
            }
            f4 = di$sA.MRZOj - this.UcFvW;
            f3 = this.VRpNr - this.ARrvJ;
            try {
                try {
                    float f5 = f4 - 1.0f;
                    f2 = f5 == 0.0f ? 0 : (f5 < 0.0f ? -1 : 1);
                    if (iSArray != null) break block12;
                    if (f2 <= 0) return null;
                }
                catch (MatchException matchException) {
                    throw di$sA.doE(matchException);
                }
                float f6 = f3 - 1.0f;
                f2 = f6 == 0.0f ? 0 : (f6 < 0.0f ? -1 : 1);
            }
            catch (MatchException matchException) {
                throw di$sA.doE(matchException);
            }
        }
        try {
            if (f2 > 0) return new lc(this.UcFvW, this.ARrvJ, f4, f3);
            return null;
        }
        catch (MatchException matchException) {
            throw di$sA.doE(matchException);
        }
    }

    private void doC(Vec2f vec2f) {
        ++this.TomLU;
        this.UcFvW = Math.min(this.UcFvW, vec2f.x);
        this.ARrvJ = Math.min(this.ARrvJ, vec2f.y);
        this.MRZOj = Math.max(this.MRZOj, vec2f.x);
        this.VRpNr = Math.max(this.VRpNr, vec2f.y);
    }
}

