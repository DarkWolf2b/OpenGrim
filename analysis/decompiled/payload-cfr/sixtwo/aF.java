/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.aE;
import sixtwo.az;
import sixtwo.bl;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lC;

public abstract class aF
extends aE {
    private static final long wQvIR = gb.aYR(-5792822587876812145L, -1424579896363128256L, MethodHandles.lookup().lookupClass()).a(161422166250848L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aF(int[] nArray) {
        super(nArray);
    }

    @Override
    public void fX(lC lC2) {
        float f2;
        float f3;
        float f4;
        int n;
        float f5;
        iS[] iSArray;
        float f6;
        block23: {
            double d;
            block24: {
                float f7;
                float f8;
                block22: {
                    int n2;
                    float f9;
                    int n3;
                    block20: {
                        block21: {
                            block18: {
                                block19: {
                                    int n4;
                                    int n5;
                                    block17: {
                                        int n6;
                                        block15: {
                                            block16: {
                                                long l = wQvIR ^ 0x38549AF9A5D1L;
                                                f6 = this.MCnYt;
                                                iSArray = aE.vG();
                                                f5 = this.pNyTQ;
                                                n = this.tR();
                                                f8 = 10.0f;
                                                f4 = this.vI();
                                                f3 = this.vJ();
                                                n5 = this.LGwHI.size();
                                                try {
                                                    try {
                                                        n6 = n5;
                                                        if (iSArray != null) break block15;
                                                        if (n6 != 0) break block16;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw aF.vK(matchException);
                                                    }
                                                    n4 = 0;
                                                    break block17;
                                                }
                                                catch (MatchException matchException) {
                                                    throw aF.vK(matchException);
                                                }
                                            }
                                            n6 = n5 + n - 1;
                                        }
                                        n4 = n6 / n;
                                    }
                                    n3 = n4;
                                    f9 = 0.0f;
                                    try {
                                        n2 = n5;
                                        if (iSArray != null) break block18;
                                        if (n2 <= 0) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw aF.vK(matchException);
                                    }
                                    az az2 = (az)this.LGwHI.get(0);
                                    f9 = az2.dn();
                                }
                                n2 = n3;
                            }
                            try {
                                try {
                                    if (iSArray != null) break block20;
                                    if (n2 > 0) break block21;
                                }
                                catch (MatchException matchException) {
                                    throw aF.vK(matchException);
                                }
                                f7 = 0.0f;
                                break block22;
                            }
                            catch (MatchException matchException) {
                                throw aF.vK(matchException);
                            }
                        }
                        n2 = n3;
                    }
                    f7 = (float)n2 * f9 + (float)Math.max(0, n3 - 1) * f3;
                }
                float f10 = f7;
                float f11 = Math.max(0.0f, this.WjISQ);
                float f12 = f10 - f11;
                d = Math.max(0.0f, f12);
                try {
                    f2 = f12;
                    if (iSArray != null) break block23;
                    if (!(f2 > 0.0f)) break block24;
                }
                catch (MatchException matchException) {
                    throw aF.vK(matchException);
                }
                d += (double)f8;
            }
            bl.Ex().Ez().nQ(d);
            f2 = f6;
        }
        float f13 = f2;
        float f14 = (float)((double)f5 - bl.Ex().Ez().nH());
        int n7 = 0;
        while (n7 < this.LGwHI.size()) {
            block25: {
                block26: {
                    az az3 = (az)this.LGwHI.get(n7);
                    az3.sW(f13, f14);
                    f13 += az3.kN() + f4;
                    try {
                        if (iSArray != null) break block25;
                        if ((n7 + 1) % n != 0) break block26;
                    }
                    catch (MatchException matchException) {
                        throw aF.vK(matchException);
                    }
                    f13 = f6;
                    f14 += az3.dn() + f3;
                }
                ++n7;
            }
            if (iSArray == null) continue;
            iS.bwK("yXAPCc");
            break;
        }
    }

    public float vJ() {
        return 5.0f;
    }

    public float vI() {
        return 5.0f;
    }

    protected abstract int tR();

    private static MatchException vK(MatchException matchException) {
        return matchException;
    }
}
