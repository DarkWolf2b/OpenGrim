/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.rj$vZ;
import sixtwo.rk;

public class rj$vX
extends rj$vZ {
    private static final long IbjMW = gb.aYR(4086739908687189420L, 8116594302885162020L, MethodHandles.lookup().lookupClass()).a(88831567327829L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public rj$vX() {
    }

    public rj$vX(float f2) {
        super(f2);
    }

    @Override
    public float dga(float f2, float f3, float f4, float f5) {
        float f6;
        float f7;
        float f8;
        String[] stringArray;
        block5: {
            float f9;
            block6: {
                long l2 = IbjMW ^ 0x655BB5512FL;
                f9 = this.dyE();
                f2 /= f5 / 2.0f;
                stringArray = rk.dhz();
                try {
                    f8 = f2;
                    f7 = 1.0f;
                    if (stringArray != null) break block5;
                    if (!(f8 < f7)) break block6;
                }
                catch (MatchException matchException) {
                    throw rj$vX.dyC(matchException);
                }
                return f4 / 2.0f * (f2 * f2 * (((f9 *= 1.525f) + 1.0f) * f2 - f9)) + f3;
            }
            f8 = f4 / 2.0f * ((f2 -= 2.0f) * f2 * (((f9 *= 1.525f) + 1.0f) * f2 + f9) + 2.0f);
            f7 = f3;
        }
        try {
            f6 = f8 + f7;
            if (stringArray != null) {
                iS.bwK("EC2xfc");
            }
        }
        catch (MatchException matchException) {
            throw rj$vX.dyC(matchException);
        }
        return f6;
    }

    private static MatchException dyC(MatchException matchException) {
        return matchException;
    }
}

