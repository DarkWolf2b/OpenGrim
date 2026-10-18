/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Optional;
import java.util.function.Predicate;
import java.util.stream.Stream;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import sixtwo.fg;
import sixtwo.gb;
import sixtwo.jg;
import sixtwo.oV;
import sixtwo.of;
import sixtwo.oh;
import sixtwo.rD;

public class og {
    private LivingEntity Jhmwl = null;
    private Stream<LivingEntity> CzIJX;
    private static final long vegtZ = gb.aYR(-7504788968047502827L, 7252425376542159377L, MethodHandles.lookup().lookupClass()).a(43423136056868L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public void cCR(float f2, of of2) {
        block4: {
            og og2;
            block5: {
                long l2 = vegtZ ^ 0x32EB8F4EFBBAL;
                f2 = oV.cLc(f2);
                String[] stringArray = of.cCL();
                try {
                    try {
                        og2 = this;
                        if (stringArray == null) break block4;
                        if (og2.cCT(f2)) break block5;
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
        og2.CzIJX = oh.cCY().cCZ(f2).cDg(of2).cDk();
    }

    private Optional<LivingEntity> cCS(Predicate<LivingEntity> predicate) {
        return this.CzIJX.filter(predicate).findFirst();
    }

    public void cCP() {
        this.Jhmwl = null;
    }

    public Stream<LivingEntity> cCV() {
        return this.CzIJX;
    }

    public void cCO(LivingEntity livingEntity) {
        block5: {
            block4: {
                long l2 = vegtZ ^ 0x23B6F6031CEL;
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
            og2.Jhmwl = livingEntity;
        }
    }

    private boolean cCT(float f2) {
        int n2;
        block8: {
            block9: {
                block7: {
                    LivingEntity livingEntity;
                    String[] stringArray;
                    block6: {
                        long l2 = vegtZ ^ 0x425D419E4521L;
                        stringArray = of.cCL();
                        try {
                            try {
                                livingEntity = this.Jhmwl;
                                if (stringArray == null) break block6;
                                if (livingEntity == null) break block7;
                            }
                            catch (MatchException matchException) {
                                throw og.cCW(matchException);
                            }
                            livingEntity = this.Jhmwl;
                        }
                        catch (MatchException matchException) {
                            throw og.cCW(matchException);
                        }
                    }
                    try {
                        double d2 = jg.bBI((Entity)livingEntity) - (double)f2;
                        n2 = d2 == 0.0 ? 0 : (d2 < 0.0 ? -1 : 1);
                        if (stringArray == null) break block8;
                        if (n2 > 0) break block9;
                    }
                    catch (MatchException matchException) {
                        throw og.cCW(matchException);
                    }
                }
                n2 = 1;
                break block8;
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    private static MatchException cCW(MatchException matchException) {
        return matchException;
    }

    public void cCQ(Predicate<LivingEntity> predicate) {
        block17: {
            LivingEntity livingEntity;
            block16: {
                block14: {
                    block15: {
                        long l2 = vegtZ ^ 0x78FCDE9B161AL;
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
                                        livingEntity = fg2.aIU();
                                        if (stringArray == null) break block16;
                                    }
                                    catch (MatchException matchException) {
                                        throw og.cCW(matchException);
                                    }
                                    if (livingEntity == null) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw og.cCW(matchException);
                                }
                                if (!predicate.test((LivingEntity)fg2.aIU())) break block15;
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
                livingEntity = this.Jhmwl;
            }
            try {
                try {
                    if (livingEntity == null || predicate.test(this.Jhmwl)) break block17;
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

    public LivingEntity cCU() {
        return this.Jhmwl;
    }
}

