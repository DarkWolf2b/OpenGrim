/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.rj;
import sixtwo.rj$vQ;
import sixtwo.rk;

class rj$wd
extends rj {
    final rj$vQ Djkne;
    private static final long ZWpJx = gb.aYR(-350898152435174116L, 4296055351239158528L, MethodHandles.lookup().lookupClass()).a(130721015290098L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    rj$wd(rj$vQ rj$vQ) {
        this.Djkne = rj$vQ;
    }

    @Override
    public float dga(float f2, float f3, float f4, float f5) {
        float f6;
        float f7;
        block15: {
            float f8;
            block13: {
                String[] stringArray;
                block14: {
                    float f9;
                    block11: {
                        block12: {
                            long l2 = ZWpJx ^ 0x6372982ADAC9L;
                            stringArray = rk.dhz();
                            try {
                                try {
                                    try {
                                        f9 = f5;
                                        if (stringArray != null) break block11;
                                        if (f9 <= 0.0f) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw rj$wd.dyI(matchException);
                                    }
                                    float f10 = f2 - 0.0f;
                                    f8 = f10 == 0.0f ? 0 : (f10 < 0.0f ? -1 : 1);
                                    if (stringArray != null) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw rj$wd.dyI(matchException);
                                }
                                if (f8 > 0) break block14;
                            }
                            catch (MatchException matchException) {
                                throw rj$wd.dyI(matchException);
                            }
                        }
                        f9 = f3;
                    }
                    return f9;
                }
                try {
                    f7 = f2;
                    f6 = f5;
                    if (stringArray != null) break block15;
                    float f11 = f7 - f6;
                    f8 = f11 == 0.0f ? 0 : (f11 > 0.0f ? 1 : -1);
                }
                catch (MatchException matchException) {
                    throw rj$wd.dyI(matchException);
                }
            }
            try {
                if (f8 >= 0) {
                    return f3 + f4;
                }
            }
            catch (MatchException matchException) {
                throw rj$wd.dyI(matchException);
            }
            f7 = f3;
            f6 = f4 * this.Djkne.calculate(f2 / f5);
        }
        return f7 + f6;
    }

    private static MatchException dyI(MatchException matchException) {
        return matchException;
    }
}

