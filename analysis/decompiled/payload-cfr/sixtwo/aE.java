/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import java.util.concurrent.CopyOnWriteArrayList;
import java.util.function.Supplier;
import sixtwo.al;
import sixtwo.az;
import sixtwo.bi;
import sixtwo.bl;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jG;
import sixtwo.lC;
import sixtwo.mA;

public abstract class aE
extends az {
    private static final Map<Class<? extends aE>, aE> CaoaN;
    protected List<az> LGwHI;
    protected int[] YYZes;
    private static iS[] APvXi;
    private static final long OvxDD;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aE(int[] nArray) {
        long l = OvxDD ^ 0x4EF4A8376DF9L;
        iS[] iSArray = aE.vG();
        iS[] iSArray2 = iSArray;
        try {
            this.LGwHI = new CopyOnWriteArrayList<az>();
            this.YYZes = nArray;
            if (iS.bwL() == null) {
                aE.vF(new iS[5]);
            }
        }
        catch (MatchException matchException) {
            throw aE.vH(matchException);
        }
    }

    static {
        OvxDD = gb.aYR(-2692304497950348839L, 8007589828775926486L, MethodHandles.lookup().lookupClass()).a(227607518144727L);
        CaoaN = new ConcurrentHashMap<Class<? extends aE>, aE>();
        aE.vF(null);
    }

    @Override
    public void dl(double d, double d2, mA mA2) {
        long l = OvxDD ^ 0x1FDB07A8C08FL;
        Iterator<az> iterator = this.LGwHI.iterator();
        iS[] iSArray = aE.vG();
        while (iterator.hasNext()) {
            az az2 = iterator.next();
            az2.dl(d, d2, mA2);
            if (iSArray == null) continue;
        }
    }

    @Override
    public boolean dk(double d, double d2, mA mA2) {
        boolean bl2;
        block17: {
            iS[] iSArray;
            block16: {
                boolean bl3;
                block15: {
                    long l = OvxDD ^ 0x6D681A1D25F6L;
                    bi bi2 = bl.Ex().ED();
                    iSArray = aE.vG();
                    try {
                        bl3 = bi2.Dw(d, d2);
                        if (iSArray != null) break block15;
                        if (bl3) break block16;
                    }
                    catch (MatchException matchException) {
                        throw aE.vH(matchException);
                    }
                    bl3 = false;
                }
                return bl3;
            }
            for (az az2 : this.LGwHI) {
                block21: {
                    boolean bl4;
                    block20: {
                        block18: {
                            block19: {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    bl2 = az2.tf();
                                                    if (iSArray != null) break block17;
                                                    if (iSArray != null) break block18;
                                                }
                                                catch (MatchException matchException) {
                                                    throw aE.vH(matchException);
                                                }
                                                if (!bl2) break block19;
                                            }
                                            catch (MatchException matchException) {
                                                throw aE.vH(matchException);
                                            }
                                            bl4 = bl.Ex().ED().Dv(az2);
                                            if (iSArray != null) break block18;
                                        }
                                        catch (MatchException matchException) {
                                            throw aE.vH(matchException);
                                        }
                                        if (bl4) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw aE.vH(matchException);
                                    }
                                    if (iSArray == null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw aE.vH(matchException);
                                }
                            }
                            bl4 = az2.dk(d, d2, mA2);
                        }
                        try {
                            if (iSArray != null) break block20;
                            if (!bl4) break block21;
                        }
                        catch (MatchException matchException) {
                            throw aE.vH(matchException);
                        }
                        bl4 = true;
                    }
                    return bl4;
                }
                if (iSArray == null) continue;
            }
            bl2 = super.dk(d, d2, mA2);
        }
        return bl2;
    }

    @Override
    public void bV(lC lC2) {
        long l = OvxDD ^ 0x30FDD2B4F132L;
        Iterator<az> iterator = this.LGwHI.iterator();
        iS[] iSArray = aE.vG();
        while (iterator.hasNext()) {
            az az2;
            block5: {
                az az3;
                block6: {
                    az3 = iterator.next();
                    try {
                        try {
                            az2 = az3;
                            if (iSArray != null) break block5;
                            if (jG.bHY(az2)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw aE.vH(matchException);
                        }
                        if (iSArray == null) continue;
                    }
                    catch (MatchException matchException) {
                        throw aE.vH(matchException);
                    }
                }
                az2 = az3;
            }
            az2.su(lC2);
            if (iSArray == null) continue;
        }
    }

    public abstract void tP(lC var1, float var2, al var3);

    public static iS[] vG() {
        return APvXi;
    }

    public List<az> vC() {
        return this.LGwHI;
    }

    public static void vF(iS[] iSArray) {
        APvXi = iSArray;
    }

    private static MatchException vH(MatchException matchException) {
        return matchException;
    }

    public int[] vD() {
        return this.YYZes;
    }

    public static <T extends aE> T vB(Class<T> clazz2, Supplier<T> supplier) {
        return (T)((aE)clazz2.cast(CaoaN.computeIfAbsent(clazz2, clazz -> (aE)supplier.get())));
    }

    public static <T extends aE> T vA(Class<T> clazz) {
        return (T)((aE)clazz.cast(CaoaN.get(clazz)));
    }
}
