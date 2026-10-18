/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.jC;

public final class jB {
    private static final ThreadLocal<jC> kvatN;
    private static final long pshJL;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static MatchException bGS(MatchException matchException) {
        return matchException;
    }

    /*
     * Unable to fully structure code
     */
    public static void bGR(jC var0, Runnable var1_1) {
        block15: {
            var2_2 = jB.pshJL ^ 31836299509842L;
            var5_3 = jB.kvatN.get();
            var4_4 = jC.bHc();
            jB.kvatN.set(var0);
            try {
                var1_1.run();
                if (var4_4 != 0) break block15;
            }
            catch (Throwable var6_5) {
                block17: {
                    block16: {
                        try {
                            try {
                                if (var4_4 != 0) break block16;
                                if (var5_3 == null) {
                                }
                                ** GOTO lbl24
                            }
                            catch (MatchException v0) {
                                throw jB.bGS(v0);
                            }
                            jB.kvatN.remove();
                        }
                        catch (MatchException v1) {
                            throw jB.bGS(v1);
                        }
                    }
                    try {
                        if (var4_4 == 0) break block17;
lbl24:
                        // 2 sources

                        jB.kvatN.set(var5_3);
                    }
                    catch (MatchException v2) {
                        throw jB.bGS(v2);
                    }
                }
                throw var6_5;
            }
            try {
                try {
                    if (var5_3 == null) {
                        jB.kvatN.remove();
                        if (var4_4 == 0) ** GOTO lbl42
                    }
                }
                catch (MatchException v3) {
                    throw jB.bGS(v3);
                }
                jB.kvatN.set(var5_3);
            }
            catch (MatchException v4) {
                throw jB.bGS(v4);
            }
        }
    }

    static {
        pshJL = gb.aYR(-6816820043125824775L, -8577862816213828180L, MethodHandles.lookup().lookupClass()).a(185371376800142L);
        kvatN = new ThreadLocal();
    }

    public static jC bGQ() {
        return kvatN.get();
    }
}

