/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.rj;

public class rk {
    private int zBOEu;
    private float fjEKi;
    private rj mYwgX;
    private long ZwnAr;
    private float gESFz;
    private float egDEL;
    private boolean xIqZY;
    private boolean WdkXD;
    private static String[] bradt;
    private static final long wRIZt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public rk(int n2) {
        this(n2, 0.0f);
    }

    public rk(int n2, float f2) {
        this(n2, f2, rj.Xmkbr);
    }

    public rk(int n2, float f2, rj rj2) {
        this.zBOEu = n2;
        this.mYwgX = rj2;
        this.fjEKi = f2;
        this.gESFz = f2;
        this.egDEL = f2;
        this.xIqZY = true;
        this.ZwnAr = 0L;
        this.WdkXD = false;
    }

    static {
        wRIZt = gb.aYR(-6083727380241001860L, -4613429592943998361L, MethodHandles.lookup().lookupClass()).a(136086932182178L);
        if (rk.dhz() != null) {
            rk.dhy(new String[1]);
        }
    }

    public int dhi() {
        return this.zBOEu;
    }

    public float dhd(float f2) {
        long l2;
        block16: {
            long l3;
            block17: {
                String[] stringArray;
                long l4;
                block15: {
                    rk rk2;
                    block14: {
                        float f3;
                        block12: {
                            block13: {
                                long l5 = wRIZt ^ 0x4622319A76E8L;
                                l4 = System.currentTimeMillis();
                                stringArray = rk.dhz();
                                try {
                                    try {
                                        float f4 = f2 - this.egDEL;
                                        f3 = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                                        if (stringArray != null) break block12;
                                        if (f3 == false) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw rk.dhA(matchException);
                                    }
                                    this.gESFz = this.fjEKi;
                                    this.egDEL = f2;
                                    this.ZwnAr = l4;
                                    this.xIqZY = false;
                                }
                                catch (MatchException matchException) {
                                    throw rk.dhA(matchException);
                                }
                            }
                            try {
                                rk2 = this;
                                if (stringArray != null) break block14;
                                f3 = rk2.zBOEu;
                            }
                            catch (MatchException matchException) {
                                throw rk.dhA(matchException);
                            }
                        }
                        try {
                            if (f3 > 0) break block15;
                            this.fjEKi = this.egDEL;
                            this.xIqZY = true;
                            rk2 = this;
                        }
                        catch (MatchException matchException) {
                            throw rk.dhA(matchException);
                        }
                    }
                    return rk2.fjEKi;
                }
                l3 = l4 - this.ZwnAr;
                try {
                    try {
                        l2 = l3;
                        if (stringArray != null) break block16;
                        if (l2 < (long)this.zBOEu) break block17;
                    }
                    catch (MatchException matchException) {
                        throw rk.dhA(matchException);
                    }
                    this.fjEKi = this.egDEL;
                    this.xIqZY = true;
                    return this.fjEKi;
                }
                catch (MatchException matchException) {
                    throw rk.dhA(matchException);
                }
            }
            l2 = l3;
        }
        float f5 = (float)l2 / (float)this.zBOEu;
        float f6 = this.mYwgX.dga(f5, 0.0f, 1.0f, 1.0f);
        this.fjEKi = this.gESFz + (this.egDEL - this.gESFz) * f6;
        return this.fjEKi;
    }

    public boolean dhp() {
        return this.WdkXD;
    }

    public rk dht(long l2) {
        this.ZwnAr = l2;
        return this;
    }

    public rk dhv(float f2) {
        this.egDEL = f2;
        return this;
    }

    public rk dhx(boolean bl2) {
        this.WdkXD = bl2;
        return this;
    }

    public rj dhk() {
        return this.mYwgX;
    }

    public long dhl() {
        return this.ZwnAr;
    }

    public boolean dho() {
        return this.xIqZY;
    }

    public rk dhq(int n2) {
        this.zBOEu = n2;
        return this;
    }

    public rk dhw(boolean bl2) {
        this.xIqZY = bl2;
        return this;
    }

    private static MatchException dhA(MatchException matchException) {
        return matchException;
    }

    public static String[] dhz() {
        return bradt;
    }

    public void dhf(float f2) {
        this.fjEKi = f2;
        this.gESFz = f2;
        this.egDEL = f2;
        this.xIqZY = true;
        this.ZwnAr = System.currentTimeMillis();
        this.WdkXD = true;
    }

    public float dhm() {
        return this.gESFz;
    }

    public static void dhy(String[] stringArray) {
        bradt = stringArray;
    }

    public float dhn() {
        return this.egDEL;
    }

    public void dhg() {
        this.dhe(0.0f);
    }

    public rk dhu(float f2) {
        this.gESFz = f2;
        return this;
    }

    public rk dhr(float f2) {
        this.fjEKi = f2;
        return this;
    }

    public float dhh(float f2) {
        float f3;
        long l2;
        block25: {
            long l3;
            block26: {
                String[] stringArray;
                long l4;
                block24: {
                    rk rk2;
                    block23: {
                        int n2;
                        block21: {
                            block22: {
                                block19: {
                                    block20: {
                                        long l5 = wRIZt ^ 0x80C54FADFEFL;
                                        l4 = System.currentTimeMillis();
                                        stringArray = rk.dhz();
                                        try {
                                            try {
                                                n2 = this.WdkXD;
                                                if (stringArray != null) break block19;
                                                if (n2 != 0) break block20;
                                            }
                                            catch (MatchException matchException) {
                                                throw rk.dhA(matchException);
                                            }
                                            this.WdkXD = true;
                                            this.fjEKi = f2;
                                            this.gESFz = f2;
                                            this.egDEL = f2;
                                            this.xIqZY = true;
                                            this.ZwnAr = l4;
                                            return this.fjEKi;
                                        }
                                        catch (MatchException matchException) {
                                            throw rk.dhA(matchException);
                                        }
                                    }
                                    float f4 = f2 - this.egDEL;
                                    n2 = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                                }
                                try {
                                    try {
                                        if (stringArray != null) break block21;
                                        if (n2 == 0) break block22;
                                    }
                                    catch (MatchException matchException) {
                                        throw rk.dhA(matchException);
                                    }
                                    this.gESFz = this.fjEKi;
                                    this.egDEL = f2;
                                    this.ZwnAr = l4;
                                    this.xIqZY = false;
                                }
                                catch (MatchException matchException) {
                                    throw rk.dhA(matchException);
                                }
                            }
                            try {
                                rk2 = this;
                                if (stringArray != null) break block23;
                                n2 = rk2.zBOEu;
                            }
                            catch (MatchException matchException) {
                                throw rk.dhA(matchException);
                            }
                        }
                        try {
                            if (n2 > 0) break block24;
                            this.fjEKi = this.egDEL;
                            this.xIqZY = true;
                            rk2 = this;
                        }
                        catch (MatchException matchException) {
                            throw rk.dhA(matchException);
                        }
                    }
                    return rk2.fjEKi;
                }
                l3 = l4 - this.ZwnAr;
                try {
                    try {
                        l2 = l3;
                        if (stringArray != null) break block25;
                        if (l2 < (long)this.zBOEu) break block26;
                    }
                    catch (MatchException matchException) {
                        throw rk.dhA(matchException);
                    }
                    this.fjEKi = this.egDEL;
                    this.xIqZY = true;
                    return this.fjEKi;
                }
                catch (MatchException matchException) {
                    throw rk.dhA(matchException);
                }
            }
            l2 = l3;
        }
        float f5 = (float)l2 / (float)this.zBOEu;
        float f6 = this.mYwgX.dga(f5, 0.0f, 1.0f, 1.0f);
        try {
            f3 = this.fjEKi = this.gESFz + (this.egDEL - this.gESFz) * f6;
            if (iS.bwL() == null) {
                rk.dhy(new String[5]);
            }
        }
        catch (MatchException matchException) {
            throw rk.dhA(matchException);
        }
        return f3;
    }

    public float dhj() {
        return this.fjEKi;
    }

    public void dhc(boolean bl2) {
        float f2;
        rk rk2;
        long l2 = wRIZt ^ 0x572BFAFA9807L;
        try {
            rk2 = this;
            f2 = bl2 ? 1.0f : 0.0f;
        }
        catch (MatchException matchException) {
            throw rk.dhA(matchException);
        }
        rk2.dhd(f2);
    }

    public void dhe(float f2) {
        this.fjEKi = f2;
        this.gESFz = f2;
        this.egDEL = f2;
        this.xIqZY = true;
        this.ZwnAr = System.currentTimeMillis();
        this.WdkXD = true;
    }

    public rk dhs(rj rj2) {
        this.mYwgX = rj2;
        return this;
    }
}

