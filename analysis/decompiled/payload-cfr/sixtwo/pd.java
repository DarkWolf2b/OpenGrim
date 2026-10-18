/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 *  net.minecraft.class_3532
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.SecureRandom;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_3532;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.pc;
import sixtwo.pg;

public class pd
implements pg {
    private static final double HgXpS = 0.00942;
    private static final double mVOXG = 0.2332;
    private static final double QEAUy = -0.3008;
    private static final double abnbA = 0.3492;
    private static final double POIeO = 0.01328;
    private static final double zodGQ = 0.2445;
    private static final SecureRandom PSTgh;
    private double JgCbI;
    private double XFANn;
    private double sTjzf;
    private double auNLg;
    private class_243 gllEQ;
    private class_243 KGqRJ;
    private static final long xbBal;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static double cMK(double d, double d2, double d3) {
        return d + (d2 - d) * d3;
    }

    public double cML() {
        return this.JgCbI;
    }

    public void cMR(double d) {
        this.JgCbI = d;
    }

    public void cMU(double d) {
        this.auNLg = d;
    }

    public void cMS(double d) {
        this.XFANn = d;
    }

    public void cMW(class_243 class_2432) {
        this.KGqRJ = class_2432;
    }

    private void cMI() {
        block4: {
            pd pd2;
            block5: {
                long l = xbBal ^ 0x182A5FEE50E3L;
                int[] nArray = pc.cMG();
                try {
                    try {
                        pd2 = this;
                        if (nArray != null) break block4;
                        if (!pd2.cMJ()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw pd.cMX(matchException);
                    }
                    this.KGqRJ = new class_243(PSTgh.nextGaussian(0.00942, 0.2332) * this.JgCbI, PSTgh.nextGaussian(-0.3008, 0.3492) * this.XFANn, PSTgh.nextGaussian(0.01328, 0.2445) * this.JgCbI);
                }
                catch (MatchException matchException) {
                    throw pd.cMX(matchException);
                }
            }
            pd2 = this;
        }
        pd2.gllEQ = new class_243(pd.cMK(this.gllEQ.field_1352, this.KGqRJ.field_1352, this.sTjzf), pd.cMK(this.gllEQ.field_1351, this.KGqRJ.field_1351, this.sTjzf), pd.cMK(this.gllEQ.field_1350, this.KGqRJ.field_1350, this.sTjzf));
    }

    public double cMM() {
        return this.XFANn;
    }

    public double cMO() {
        return this.auNLg;
    }

    public void cMT(double d) {
        this.sTjzf = d;
    }

    private boolean cMJ() {
        double d;
        block13: {
            block11: {
                int[] nArray;
                block12: {
                    block10: {
                        long l = xbBal ^ 0x481A0183E504L;
                        nArray = pc.cMG();
                        try {
                            try {
                                double d2 = Math.abs(this.gllEQ.field_1352 - this.KGqRJ.field_1352) - this.auNLg;
                                d = d2 == 0.0 ? 0 : (d2 < 0.0 ? -1 : 1);
                                if (nArray != null) break block10;
                                if (d >= 0) break block11;
                            }
                            catch (MatchException matchException) {
                                throw pd.cMX(matchException);
                            }
                            double d3 = Math.abs(this.gllEQ.field_1351 - this.KGqRJ.field_1351) - this.auNLg;
                            d = d3 == 0.0 ? 0 : (d3 < 0.0 ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw pd.cMX(matchException);
                        }
                    }
                    try {
                        try {
                            if (nArray != null) break block12;
                            if (d >= 0) break block11;
                        }
                        catch (MatchException matchException) {
                            throw pd.cMX(matchException);
                        }
                        double d4 = Math.abs(this.gllEQ.field_1350 - this.KGqRJ.field_1350) - this.auNLg;
                        d = d4 == 0.0 ? 0 : (d4 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw pd.cMX(matchException);
                    }
                }
                try {
                    if (nArray != null) break block13;
                    if (d >= 0) break block11;
                }
                catch (MatchException matchException) {
                    throw pd.cMX(matchException);
                }
                d = 1.0;
                break block13;
            }
            d = 0.0;
        }
        return (boolean)d;
    }

    private static MatchException cMX(MatchException matchException) {
        return matchException;
    }

    public class_243 cMQ() {
        return this.KGqRJ;
    }

    public double cMN() {
        return this.sTjzf;
    }

    public void cMV(class_243 class_2432) {
        this.gllEQ = class_2432;
    }

    public class_243 cMP() {
        return this.gllEQ;
    }

    public pd(double d, double d2, double d3, double d4) {
        long l = xbBal ^ 0x4401D254CC43L;
        int[] nArray = pc.cMG();
        this.gllEQ = class_243.field_1353;
        this.KGqRJ = class_243.field_1353;
        int[] nArray2 = nArray;
        try {
            this.JgCbI = d;
            this.XFANn = d2;
            this.sTjzf = d3;
            this.auNLg = d4;
            if (nArray2 != null) {
                iS.bwK("ubmCuc");
            }
        }
        catch (MatchException matchException) {
            throw pd.cMX(matchException);
        }
    }

    public pd() {
        this(0.15, 0.15, 0.15, 0.05);
    }

    static {
        xbBal = gb.aYR(-6019655902098696184L, -970663675502112895L, MethodHandles.lookup().lookupClass()).a(47648860311874L);
        PSTgh = new SecureRandom();
    }

    @Override
    public class_243 process(class_243 class_2432, class_238 class_2382) {
        class_243 class_2433;
        pd pd2;
        block11: {
            block12: {
                long l = xbBal ^ 0x5CE1B04D33A7L;
                int[] nArray = pc.cMG();
                try {
                    try {
                        try {
                            try {
                                pd2 = this;
                                if (nArray != null) break block11;
                                if (!(pd2.JgCbI <= 0.0)) break block12;
                            }
                            catch (MatchException matchException) {
                                throw pd.cMX(matchException);
                            }
                            pd2 = this;
                            if (nArray != null) break block11;
                        }
                        catch (MatchException matchException) {
                            throw pd.cMX(matchException);
                        }
                        if (!(pd2.XFANn <= 0.0)) break block12;
                    }
                    catch (MatchException matchException) {
                        throw pd.cMX(matchException);
                    }
                    return class_2432;
                }
                catch (MatchException matchException) {
                    throw pd.cMX(matchException);
                }
            }
            pd2 = this;
        }
        pd2.cMI();
        class_243 class_2434 = class_2432.method_1019(this.gllEQ);
        try {
            class_2433 = new class_243(class_3532.method_15350((double)class_2434.field_1352, (double)class_2382.field_1323, (double)class_2382.field_1320), class_3532.method_15350((double)class_2434.field_1351, (double)class_2382.field_1322, (double)class_2382.field_1325), class_3532.method_15350((double)class_2434.field_1350, (double)class_2382.field_1321, (double)class_2382.field_1324));
            if (iS.bwL() == null) {
                pc.cMF(new int[1]);
            }
        }
        catch (MatchException matchException) {
            throw pd.cMX(matchException);
        }
        return class_2433;
    }
}
