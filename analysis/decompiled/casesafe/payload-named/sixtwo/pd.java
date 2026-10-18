/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.SecureRandom;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
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
    private Vec3d gllEQ;
    private Vec3d KGqRJ;
    private static final long xbBal;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static double cMK(double d2, double d3, double d4) {
        return d2 + (d3 - d2) * d4;
    }

    public double cML() {
        return this.JgCbI;
    }

    public void cMR(double d2) {
        this.JgCbI = d2;
    }

    public void cMU(double d2) {
        this.auNLg = d2;
    }

    public void cMS(double d2) {
        this.XFANn = d2;
    }

    public void cMW(Vec3d vec3d) {
        this.KGqRJ = vec3d;
    }

    private void cMI() {
        block4: {
            pd pd2;
            block5: {
                long l2 = xbBal ^ 0x182A5FEE50E3L;
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
                    this.KGqRJ = new Vec3d(PSTgh.nextGaussian(0.00942, 0.2332) * this.JgCbI, PSTgh.nextGaussian(-0.3008, 0.3492) * this.XFANn, PSTgh.nextGaussian(0.01328, 0.2445) * this.JgCbI);
                }
                catch (MatchException matchException) {
                    throw pd.cMX(matchException);
                }
            }
            pd2 = this;
        }
        pd2.gllEQ = new Vec3d(pd.cMK(this.gllEQ.x, this.KGqRJ.x, this.sTjzf), pd.cMK(this.gllEQ.y, this.KGqRJ.y, this.sTjzf), pd.cMK(this.gllEQ.z, this.KGqRJ.z, this.sTjzf));
    }

    public double cMM() {
        return this.XFANn;
    }

    public double cMO() {
        return this.auNLg;
    }

    public void cMT(double d2) {
        this.sTjzf = d2;
    }

    private boolean cMJ() {
        double d2;
        block13: {
            block11: {
                int[] nArray;
                block12: {
                    block10: {
                        long l2 = xbBal ^ 0x481A0183E504L;
                        nArray = pc.cMG();
                        try {
                            try {
                                double d3 = Math.abs(this.gllEQ.x - this.KGqRJ.x) - this.auNLg;
                                d2 = d3 == 0.0 ? 0 : (d3 < 0.0 ? -1 : 1);
                                if (nArray != null) break block10;
                                if (d2 >= 0) break block11;
                            }
                            catch (MatchException matchException) {
                                throw pd.cMX(matchException);
                            }
                            double d4 = Math.abs(this.gllEQ.y - this.KGqRJ.y) - this.auNLg;
                            d2 = d4 == 0.0 ? 0 : (d4 < 0.0 ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw pd.cMX(matchException);
                        }
                    }
                    try {
                        try {
                            if (nArray != null) break block12;
                            if (d2 >= 0) break block11;
                        }
                        catch (MatchException matchException) {
                            throw pd.cMX(matchException);
                        }
                        double d5 = Math.abs(this.gllEQ.z - this.KGqRJ.z) - this.auNLg;
                        d2 = d5 == 0.0 ? 0 : (d5 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw pd.cMX(matchException);
                    }
                }
                try {
                    if (nArray != null) break block13;
                    if (d2 >= 0) break block11;
                }
                catch (MatchException matchException) {
                    throw pd.cMX(matchException);
                }
                d2 = 1.0;
                break block13;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    private static MatchException cMX(MatchException matchException) {
        return matchException;
    }

    public Vec3d cMQ() {
        return this.KGqRJ;
    }

    public double cMN() {
        return this.sTjzf;
    }

    public void cMV(Vec3d vec3d) {
        this.gllEQ = vec3d;
    }

    public Vec3d cMP() {
        return this.gllEQ;
    }

    public pd(double d2, double d3, double d4, double d5) {
        long l2 = xbBal ^ 0x4401D254CC43L;
        int[] nArray = pc.cMG();
        this.gllEQ = Vec3d.ZERO;
        this.KGqRJ = Vec3d.ZERO;
        int[] nArray2 = nArray;
        try {
            this.JgCbI = d2;
            this.XFANn = d3;
            this.sTjzf = d4;
            this.auNLg = d5;
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
    public Vec3d process(Vec3d vec3d, Box box) {
        Vec3d vec3d2;
        pd pd2;
        block11: {
            block12: {
                long l2 = xbBal ^ 0x5CE1B04D33A7L;
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
                    return vec3d;
                }
                catch (MatchException matchException) {
                    throw pd.cMX(matchException);
                }
            }
            pd2 = this;
        }
        pd2.cMI();
        Vec3d vec3d3 = vec3d.add(this.gllEQ);
        try {
            vec3d2 = new Vec3d(MathHelper.clamp((double)vec3d3.x, (double)box.minX, (double)box.maxX), MathHelper.clamp((double)vec3d3.y, (double)box.minY, (double)box.maxY), MathHelper.clamp((double)vec3d3.z, (double)box.minZ, (double)box.maxZ));
            if (iS.bwL() == null) {
                pc.cMF(new int[1]);
            }
        }
        catch (MatchException matchException) {
            throw pd.cMX(matchException);
        }
        return vec3d2;
    }
}

