/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1309
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Optional;
import java.util.function.Predicate;
import java.util.stream.Stream;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import sixtwo.fg;
import sixtwo.gb;
import sixtwo.jg;
import sixtwo.oV;
import sixtwo.of;
import sixtwo.oh;
import sixtwo.rD;

public class og {
    private class_1309 Jhmwl = null;
    private Stream<class_1309> CzIJX;
    private static final long vegtZ = gb.aYR(-7504788968047502827L, 7252425376542159377L, MethodHandles.lookup().lookupClass()).a(43423136056868L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public void cCR(float f, of of2) {
        block4: {
            og og2;
            block5: {
                long l = vegtZ ^ 0x32EB8F4EFBBAL;
                f = oV.cLc(f);
                String[] stringArray = of.cCL();
                try {
                    try {
                        og2 = this;
                        if (stringArray == null) break block4;
                        if (og2.cCT(f)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw og.cCW(matchException);
                    }
                    this.cCP();
                }
                catch (MatchException matchException) {
                    throw og.cCW(matchException);
                }
            }
            og2 = this;
        }
        og2.CzIJX = oh.cCY().cCZ(f).cDg(of2).cDk();
    }

    private Optional<class_1309> cCS(Predicate<class_1309> predicate) {
        return this.CzIJX.filter(predicate).findFirst();
    }

    public void cCP() {
        this.Jhmwl = null;
    }

    public Stream<class_1309> cCV() {
        return this.CzIJX;
    }

    public void cCO(class_1309 class_13092) {
        block5: {
            block4: {
                long l = vegtZ ^ 0x23B6F6031CEL;
                String[] stringArray = of.cCL();
                try {
                    og og2;
                    try {
                        og2 = this;
                        if (stringArray == null) break block4;
                        if (og2.Jhmwl != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw og.cCW(matchException);
                    }
                    og2 = this;
                }
                catch (MatchException matchException) {
                    throw og.cCW(matchException);
                }
            }
            og2.Jhmwl = class_13092;
        }
    }

    private boolean cCT(float f) {
        int n;
        block8: {
            block9: {
                block7: {
                    class_1309 class_13092;
                    String[] stringArray;
                    block6: {
                        long l = vegtZ ^ 0x425D419E4521L;
                        stringArray = of.cCL();
                        try {
                            try {
                                class_13092 = this.Jhmwl;
                                if (stringArray == null) break block6;
                                if (class_13092 == null) break block7;
                            }
                            catch (MatchException matchException) {
                                throw og.cCW(matchException);
                            }
                            class_13092 = this.Jhmwl;
                        }
                        catch (MatchException matchException) {
                            throw og.cCW(matchException);
                        }
                    }
                    try {
                        double d = jg.bBI((class_1297)class_13092) - (double)f;
                        n = d == 0.0 ? 0 : (d < 0.0 ? -1 : 1);
                        if (stringArray == null) break block8;
                        if (n > 0) break block9;
                    }
                    catch (MatchException matchException) {
                        throw og.cCW(matchException);
                    }
                }
                n = 1;
                break block8;
            }
            n = 0;
        }
        return n != 0;
    }

    private static MatchException cCW(MatchException matchException) {
        return matchException;
    }

    public void cCQ(Predicate<class_1309> predicate) {
        block17: {
            class_1309 class_13092;
            block16: {
                block14: {
                    block15: {
                        long l = vegtZ ^ 0x78FCDE9B161AL;
                        fg fg2 = rD.dlJ().aZx(fg.class);
                        String[] stringArray = of.cCL();
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            if (stringArray == null) break block14;
                                            if (!fg2.bag()) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw og.cCW(matchException);
                                        }
                                        class_13092 = fg2.aIU();
                                        if (stringArray == null) break block16;
                                    }
                                    catch (MatchException matchException) {
                                        throw og.cCW(matchException);
                                    }
                                    if (class_13092 == null) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw og.cCW(matchException);
                                }
                                if (!predicate.test((class_1309)fg2.aIU())) break block15;
                            }
                            catch (MatchException matchException) {
                                throw og.cCW(matchException);
                            }
                            this.Jhmwl = fg2.aIU();
                            return;
                        }
                        catch (MatchException matchException) {
                            throw og.cCW(matchException);
                        }
                    }
                    this.cCS(predicate).ifPresent(this::cCO);
                }
                class_13092 = this.Jhmwl;
            }
            try {
                try {
                    if (class_13092 == null || predicate.test(this.Jhmwl)) break block17;
                }
                catch (MatchException matchException) {
                    throw og.cCW(matchException);
                }
                this.cCP();
            }
            catch (MatchException matchException) {
                throw og.cCW(matchException);
            }
        }
    }

    public class_1309 cCU() {
        return this.Jhmwl;
    }
}
