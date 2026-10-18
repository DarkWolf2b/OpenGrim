/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.rj;
import sixtwo.rj$vU;
import sixtwo.rk;

public class rj$vS
extends rj$vU {
    private static final long rUkxl = gb.aYR(1933323863540732787L, -4988086183381599291L, MethodHandles.lookup().lookupClass()).a(14471767995360L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public rj$vS(float f2, float f3) {
        super(f2, f3);
    }

    public rj$vS() {
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public float dga(float var1_1, float var2_2, float var3_3, float var4_4) {
        block24: {
            block25: {
                block23: {
                    block22: {
                        block20: {
                            block21: {
                                block18: {
                                    block19: {
                                        block16: {
                                            block17: {
                                                var5_5 = rj$vS.rUkxl ^ 5589088634487L;
                                                var8_6 = this.dys();
                                                var7_7 = rk.dhz();
                                                var9_8 = this.dyt();
                                                try {
                                                    try {
                                                        cfr_temp_0 = var1_1 - 0.0f;
                                                        v0 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                        if (var7_7 != null) break block16;
                                                        if (v0 != false) break block17;
                                                    }
                                                    catch (MatchException v1) {
                                                        throw rj$vS.dyo(v1);
                                                    }
                                                    return var2_2;
                                                }
                                                catch (MatchException v2) {
                                                    throw rj$vS.dyo(v2);
                                                }
                                            }
                                            cfr_temp_1 = (var1_1 /= var4_4 / 2.0f) - 2.0f;
                                            v0 = cfr_temp_1 == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                                        }
                                        try {
                                            try {
                                                if (var7_7 != null) break block18;
                                                if (v0 != false) break block19;
                                            }
                                            catch (MatchException v3) {
                                                throw rj$vS.dyo(v3);
                                            }
                                            return var2_2 + var3_3;
                                        }
                                        catch (MatchException v4) {
                                            throw rj$vS.dyo(v4);
                                        }
                                    }
                                    cfr_temp_2 = var9_8 - 0.0f;
                                    v0 = cfr_temp_2 == 0.0f ? 0 : (cfr_temp_2 > 0.0f ? 1 : -1);
                                }
                                try {
                                    if (var7_7 != null) break block20;
                                    if (v0 != false) break block21;
                                }
                                catch (MatchException v5) {
                                    throw rj$vS.dyo(v5);
                                }
                                var9_8 = var4_4 * 0.45000002f;
                            }
                            try {
                                v6 = var8_6;
                                v7 = Math.abs(var3_3);
                                if (var7_7 != null) break block22;
                                cfr_temp_3 = v6 - v7;
                                v0 = cfr_temp_3 == 0.0f ? 0 : (cfr_temp_3 < 0.0f ? -1 : 1);
                            }
                            catch (MatchException v8) {
                                throw rj$vS.dyo(v8);
                            }
                        }
                        if (v0 >= 0) ** GOTO lbl58
                        var8_6 = var3_3;
                        var10_9 = var9_8 / 4.0f;
                        try {
                            if (var7_7 == null) break block23;
lbl58:
                            // 2 sources

                            v6 = var9_8 / 6.2831855f;
                            v7 = (float)Math.asin(var3_3 / var8_6);
                        }
                        catch (MatchException v9) {
                            throw rj$vS.dyo(v9);
                        }
                    }
                    var10_9 = v6 * v7;
                }
                try {
                    v10 = var1_1;
                    v11 = 1.0f;
                    if (var7_7 != null) break block24;
                    if (!(v10 < v11)) break block25;
                }
                catch (MatchException v12) {
                    throw rj$vS.dyo(v12);
                }
                return -0.5f * (var8_6 * rj.dgu(2.0f, 10.0f * (var1_1 -= 1.0f)) * rj.dgr((var1_1 * var4_4 - var10_9) * 6.2831855f / var9_8)) + var2_2;
            }
            v10 = var8_6 * rj.dgu(2.0f, -10.0f * (var1_1 -= 1.0f)) * rj.dgr((var1_1 * var4_4 - var10_9) * 6.2831855f / var9_8) * 0.5f + var3_3;
            v11 = var2_2;
        }
        return v10 + v11;
    }

    private static MatchException dyo(MatchException matchException) {
        return matchException;
    }
}

