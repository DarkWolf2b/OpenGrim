/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  net.minecraft.util.math.MathHelper
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.Map;
import net.minecraft.util.math.MathHelper;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;

public class cC
extends cB {
    protected double bYxsv = -1.7976931348623157E308;
    protected double WhuQX = Double.MAX_VALUE;
    protected double HqniU;
    protected double LYVpX = 0.0;
    private String VnJkN = "";
    private static int[] iwtYu;
    private static final long JJQla;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cC(mr mr2) {
        super(mr2);
    }

    public cC(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    static {
        JJQla = gb.aYR(-1585309316230611833L, -5126282417768967594L, MethodHandles.lookup().lookupClass()).a(258852658179006L);
        if (cC.VL() == null) {
            cC.VK(new int[5]);
        }
    }

    @Override
    public void SS(JsonElement jsonElement) {
        this.VA(jsonElement.getAsDouble());
    }

    @Override
    public void SR(Map<String, Object> map) {
        map.put(Arrays.toString(this.NwlSF), this.LYVpX);
    }

    public double VI() {
        return this.LYVpX;
    }

    public long VD() {
        return (long)this.LYVpX;
    }

    public double VG() {
        return this.WhuQX;
    }

    private static MatchException VM(MatchException matchException) {
        return matchException;
    }

    public static int[] VL() {
        return iwtYu;
    }

    public double VF() {
        return this.bYxsv;
    }

    private double VE(double d2) {
        double d3;
        block2: {
            double d4;
            block3: {
                long l2 = JJQla ^ 0x3F78622DDA2FL;
                double d5 = Math.min(this.bYxsv, this.WhuQX);
                double d6 = Math.max(this.bYxsv, this.WhuQX);
                d4 = MathHelper.clamp((double)d2, (double)d5, (double)d6);
                boolean bl2 = cB.Vu();
                try {
                    d3 = this.HqniU;
                    if (bl2) break block2;
                    if (!(d3 > 0.0)) break block3;
                }
                catch (MatchException matchException) {
                    throw cC.VM(matchException);
                }
                d4 = (double)Math.round(d4 / this.HqniU) * this.HqniU;
                d4 = MathHelper.clamp((double)d4, (double)d5, (double)d6);
            }
            d3 = d4;
        }
        return d3;
    }

    public static void VK(int[] nArray) {
        iwtYu = nArray;
    }

    public double VH() {
        return this.HqniU;
    }

    public String VJ() {
        return this.VnJkN;
    }

    public float VB() {
        return (float)this.LYVpX;
    }

    public int VC() {
        return (int)this.LYVpX;
    }

    public cC Vz(String string) {
        String string2;
        block2: {
            block3: {
                long l2 = JJQla ^ 0x378D504CBE06L;
                boolean bl2 = cB.Vu();
                try {
                    cC cC2 = this;
                    string2 = string;
                    if (bl2) break block2;
                    if (string2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw cC.VM(matchException);
                }
                string2 = "";
                break block2;
            }
            string2 = string;
        }
        cC2.VnJkN = string2;
        return this;
    }

    public cC VA(double d2) {
        cC cC2;
        block4: {
            double d3;
            block5: {
                long l2 = JJQla ^ 0x2618B115C4FDL;
                d3 = this.VE(d2);
                boolean bl2 = cB.Vt();
                try {
                    try {
                        cC2 = this;
                        if (!bl2) break block4;
                        if (Double.compare(cC2.LYVpX, d3) != 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cC.VM(matchException);
                    }
                    return this;
                }
                catch (MatchException matchException) {
                    throw cC.VM(matchException);
                }
            }
            this.LYVpX = d3;
            this.Vk();
            cC2 = this;
        }
        return cC2;
    }

    public cC Vy(double d2) {
        this.HqniU = Math.max(0.0, d2);
        return this.VA(this.LYVpX);
    }

    public cC Vx(double d2) {
        this.WhuQX = d2;
        return this.VA(this.LYVpX);
    }

    public cC Vw(double d2) {
        this.bYxsv = d2;
        return this.VA(this.LYVpX);
    }
}

