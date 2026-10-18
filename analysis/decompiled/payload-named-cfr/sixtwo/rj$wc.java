/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.rj;
import sixtwo.rk;

class rj$wc
extends rj {
    final float QoQQx;
    final float DjosD;
    private static final long jtbjT = gb.aYR(3412735544362462244L, 9135200302643141261L, MethodHandles.lookup().lookupClass()).a(29687556110635L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    rj$wc(float f2, float f3) {
        this.QoQQx = f2;
        this.DjosD = f3;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public float dga(float var1_1, float var2_2, float var3_3, float var4_4) {
        block21: {
            block20: {
                block18: {
                    block19: {
                        block16: {
                            block17: {
                                block14: {
                                    block15: {
                                        var5_5 = rj$wc.jtbjT ^ 75822684894169L;
                                        var8_6 = this.QoQQx;
                                        var7_7 = rk.dhz();
                                        var9_8 = this.DjosD;
                                        try {
                                            try {
                                                cfr_temp_0 = var1_1 - 0.0f;
                                                v0 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                if (var7_7 != null) break block14;
                                                if (v0 != false) break block15;
                                            }
                                            catch (MatchException v1) {
                                                throw rj$wc.dyH(v1);
                                            }
                                            return var2_2;
                                        }
                                        catch (MatchException v2) {
                                            throw rj$wc.dyH(v2);
                                        }
                                    }
                                    cfr_temp_1 = (var1_1 /= var4_4) - 1.0f;
                                    v0 = cfr_temp_1 == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                                }
                                try {
                                    try {
                                        if (var7_7 != null) break block16;
                                        if (v0 != false) break block17;
                                    }
                                    catch (MatchException v3) {
                                        throw rj$wc.dyH(v3);
                                    }
                                    return var2_2 + var3_3;
                                }
                                catch (MatchException v4) {
                                    throw rj$wc.dyH(v4);
                                }
                            }
                            cfr_temp_2 = var9_8 - 0.0f;
                            v0 = cfr_temp_2 == 0.0f ? 0 : (cfr_temp_2 > 0.0f ? 1 : -1);
                        }
                        try {
                            if (var7_7 != null) break block18;
                            if (v0 != false) break block19;
                        }
                        catch (MatchException v5) {
                            throw rj$wc.dyH(v5);
                        }
                        var9_8 = var4_4 * 0.3f;
                    }
                    try {
                        v6 = var8_6;
                        v7 = Math.abs(var3_3);
                        if (var7_7 != null) break block20;
                        cfr_temp_3 = v6 - v7;
                        v0 = cfr_temp_3 == 0.0f ? 0 : (cfr_temp_3 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException v8) {
                        throw rj$wc.dyH(v8);
                    }
                }
                if (v0 >= 0) ** GOTO lbl58
                var8_6 = var3_3;
                var10_9 = var9_8 / 4.0f;
                try {
                    if (var7_7 == null) break block21;
lbl58:
                    // 2 sources

                    v6 = var9_8 / 6.2831855f;
                    v7 = (float)Math.asin(var3_3 / var8_6);
                }
                catch (MatchException v9) {
                    throw rj$wc.dyH(v9);
                }
            }
            var10_9 = v6 * v7;
        }
        return -(var8_6 * rj.dgu(2.0f, 10.0f * (var1_1 -= 1.0f)) * rj.dgr((var1_1 * var4_4 - var10_9) * 6.2831855f / var9_8)) + var2_2;
    }

    private static MatchException dyH(MatchException matchException) {
        return matchException;
    }
}

