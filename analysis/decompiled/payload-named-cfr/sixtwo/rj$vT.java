/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.rj;
import sixtwo.rj$vU;
import sixtwo.rk;

public class rj$vT
extends rj$vU {
    private static final long cwiPE = gb.aYR(436442722100141440L, -5120196599232278171L, MethodHandles.lookup().lookupClass()).a(246661342715292L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public rj$vT(float f2, float f3) {
        super(f2, f3);
    }

    public rj$vT() {
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
                                        var5_5 = rj$vT.cwiPE ^ 31767534863602L;
                                        var8_6 = this.dys();
                                        var9_7 = this.dyt();
                                        var7_8 = rk.dhz();
                                        try {
                                            try {
                                                cfr_temp_0 = var1_1 - 0.0f;
                                                v0 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                if (var7_8 != null) break block14;
                                                if (v0 != false) break block15;
                                            }
                                            catch (MatchException v1) {
                                                throw rj$vT.dyp(v1);
                                            }
                                            return var2_2;
                                        }
                                        catch (MatchException v2) {
                                            throw rj$vT.dyp(v2);
                                        }
                                    }
                                    cfr_temp_1 = (var1_1 /= var4_4) - 1.0f;
                                    v0 = cfr_temp_1 == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                                }
                                try {
                                    try {
                                        if (var7_8 != null) break block16;
                                        if (v0 != false) break block17;
                                    }
                                    catch (MatchException v3) {
                                        throw rj$vT.dyp(v3);
                                    }
                                    return var2_2 + var3_3;
                                }
                                catch (MatchException v4) {
                                    throw rj$vT.dyp(v4);
                                }
                            }
                            cfr_temp_2 = var9_7 - 0.0f;
                            v0 = cfr_temp_2 == 0.0f ? 0 : (cfr_temp_2 > 0.0f ? 1 : -1);
                        }
                        try {
                            if (var7_8 != null) break block18;
                            if (v0 != false) break block19;
                        }
                        catch (MatchException v5) {
                            throw rj$vT.dyp(v5);
                        }
                        var9_7 = var4_4 * 0.3f;
                    }
                    try {
                        v6 = var8_6;
                        v7 = Math.abs(var3_3);
                        if (var7_8 != null) break block20;
                        cfr_temp_3 = v6 - v7;
                        v0 = cfr_temp_3 == 0.0f ? 0 : (cfr_temp_3 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException v8) {
                        throw rj$vT.dyp(v8);
                    }
                }
                if (v0 >= 0) ** GOTO lbl58
                var8_6 = var3_3;
                var10_9 = var9_7 / 4.0f;
                try {
                    if (var7_8 == null) break block21;
lbl58:
                    // 2 sources

                    v6 = var9_7 / 6.2831855f;
                    v7 = (float)Math.asin(var3_3 / var8_6);
                }
                catch (MatchException v9) {
                    throw rj$vT.dyp(v9);
                }
            }
            var10_9 = v6 * v7;
        }
        return -(var8_6 * rj.dgu(2.0f, 10.0f * (var1_1 -= 1.0f)) * rj.dgr((var1_1 * var4_4 - var10_9) * 6.2831855f / var9_7)) + var2_2;
    }

    private static MatchException dyp(MatchException matchException) {
        return matchException;
    }
}

