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

    public rk(int n) {
        this(n, 0.0f);
    }

    public rk(int n, float f) {
        this(n, f, rj.Xmkbr);
    }

    public rk(int n, float f, rj rj2) {
        this.zBOEu = n;
        this.mYwgX = rj2;
        this.fjEKi = f;
        this.gESFz = f;
        this.egDEL = f;
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

    public float dhd(float f) {
        long l;
        block16: {
            long l2;
            block17: {
                String[] stringArray;
                long l3;
                block15: {
                    rk rk2;
                    block14: {
                        float f2;
                        block12: {
                            block13: {
                                long l4 = wRIZt ^ 0x4622319A76E8L;
                                l3 = System.currentTimeMillis();
                                stringArray = rk.dhz();
                                try {
                                    try {
                                        float f3 = f - this.egDEL;
                                        f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                                        if (stringArray != null) break block12;
                                        if (f2 == false) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw rk.dhA(matchException);
                                    }
                                    this.gESFz = this.fjEKi;
                                    this.egDEL = f;
                                    this.ZwnAr = l3;
                                    this.xIqZY = false;
                                }
                                catch (MatchException matchException) {
                                    throw rk.dhA(matchException);
                                }
                            }
                            try {
                                rk2 = this;
                                if (stringArray != null) break block14;
                                f2 = rk2.zBOEu;
                            }
                            catch (MatchException matchException) {
                                throw rk.dhA(matchException);
                            }
                        }
                        try {
                            if (f2 > 0) break block15;
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
                l2 = l3 - this.ZwnAr;
                try {
                    try {
                        l = l2;
                        if (stringArray != null) break block16;
                        if (l < (long)this.zBOEu) break block17;
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
            l = l2;
        }
        float f4 = (float)l / (float)this.zBOEu;
        float f5 = this.mYwgX.dga(f4, 0.0f, 1.0f, 1.0f);
        this.fjEKi = this.gESFz + (this.egDEL - this.gESFz) * f5;
        return this.fjEKi;
    }

    public boolean dhp() {
        return this.WdkXD;
    }

    public rk dht(long l) {
        this.ZwnAr = l;
        return this;
    }

    public rk dhv(float f) {
        this.egDEL = f;
        return this;
    }

    public rk dhx(boolean bl) {
        this.WdkXD = bl;
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

    public rk dhq(int n) {
        this.zBOEu = n;
        return this;
    }

    public rk dhw(boolean bl) {
        this.xIqZY = bl;
        return this;
    }

    private static MatchException dhA(MatchException matchException) {
        return matchException;
    }

    public static String[] dhz() {
        return bradt;
    }

    public void dhf(float f) {
        this.fjEKi = f;
        this.gESFz = f;
        this.egDEL = f;
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

    public rk dhu(float f) {
        this.gESFz = f;
        return this;
    }

    public rk dhr(float f) {
        this.fjEKi = f;
        return this;
    }

    public float dhh(float f) {
        float f2;
        long l;
        block25: {
            long l2;
            block26: {
                String[] stringArray;
                long l3;
                block24: {
                    rk rk2;
                    block23: {
                        int n;
                        block21: {
                            block22: {
                                block19: {
                                    block20: {
                                        long l4 = wRIZt ^ 0x80C54FADFEFL;
                                        l3 = System.currentTimeMillis();
                                        stringArray = rk.dhz();
                                        try {
                                            try {
                                                n = this.WdkXD;
                                                if (stringArray != null) break block19;
                                                if (n != 0) break block20;
                                            }
                                            catch (MatchException matchException) {
                                                throw rk.dhA(matchException);
                                            }
                                            this.WdkXD = true;
                                            this.fjEKi = f;
                                            this.gESFz = f;
                                            this.egDEL = f;
                                            this.xIqZY = true;
                                            this.ZwnAr = l3;
                                            return this.fjEKi;
                                        }
                                        catch (MatchException matchException) {
                                            throw rk.dhA(matchException);
                                        }
                                    }
                                    float f3 = f - this.egDEL;
                                    n = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                                }
                                try {
                                    try {
                                        if (stringArray != null) break block21;
                                        if (n == 0) break block22;
                                    }
                                    catch (MatchException matchException) {
                                        throw rk.dhA(matchException);
                                    }
                                    this.gESFz = this.fjEKi;
                                    this.egDEL = f;
                                    this.ZwnAr = l3;
                                    this.xIqZY = false;
                                }
                                catch (MatchException matchException) {
                                    throw rk.dhA(matchException);
                                }
                            }
                            try {
                                rk2 = this;
                                if (stringArray != null) break block23;
                                n = rk2.zBOEu;
                            }
                            catch (MatchException matchException) {
                                throw rk.dhA(matchException);
                            }
                        }
                        try {
                            if (n > 0) break block24;
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
                l2 = l3 - this.ZwnAr;
                try {
                    try {
                        l = l2;
                        if (stringArray != null) break block25;
                        if (l < (long)this.zBOEu) break block26;
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
            l = l2;
        }
        float f4 = (float)l / (float)this.zBOEu;
        float f5 = this.mYwgX.dga(f4, 0.0f, 1.0f, 1.0f);
        try {
            f2 = this.fjEKi = this.gESFz + (this.egDEL - this.gESFz) * f5;
            if (iS.bwL() == null) {
                rk.dhy(new String[5]);
            }
        }
        catch (MatchException matchException) {
            throw rk.dhA(matchException);
        }
        return f2;
    }

    public float dhj() {
        return this.fjEKi;
    }

    public void dhc(boolean bl) {
        float f;
        rk rk2;
        long l = wRIZt ^ 0x572BFAFA9807L;
        try {
            rk2 = this;
            f = bl ? 1.0f : 0.0f;
        }
        catch (MatchException matchException) {
            throw rk.dhA(matchException);
        }
        rk2.dhd(f);
    }

    public void dhe(float f) {
        this.fjEKi = f;
        this.gESFz = f;
        this.egDEL = f;
        this.xIqZY = true;
        this.ZwnAr = System.currentTimeMillis();
        this.WdkXD = true;
    }

    public rk dhs(rj rj2) {
        this.mYwgX = rj2;
        return this;
    }
}
