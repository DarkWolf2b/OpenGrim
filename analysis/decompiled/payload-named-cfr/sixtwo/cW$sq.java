/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;

class cW$sq {
    double xMyWF;
    double cEUji;
    double ISKzQ;
    int YJdti;
    private static final long ZgxSr = gb.aYR(-2453933091906176889L, 5006717760716821246L, MethodHandles.lookup().lookupClass()).a(36111101765380L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private cW$sq() {
    }

    private static MatchException dnI(MatchException matchException) {
        return matchException;
    }

    Vec3d dnH() {
        long l2 = ZgxSr ^ 0x25968E37BE73L;
        try {
            if (this.YJdti == 0) {
                return Vec3d.ZERO;
            }
        }
        catch (MatchException matchException) {
            throw cW$sq.dnI(matchException);
        }
        return new Vec3d(this.xMyWF / (double)this.YJdti, this.cEUji / (double)this.YJdti, this.ISKzQ / (double)this.YJdti);
    }

    void dnG(Vec3d vec3d) {
        this.xMyWF += vec3d.x;
        this.cEUji += vec3d.y;
        this.ISKzQ += vec3d.z;
        ++this.YJdti;
    }
}

