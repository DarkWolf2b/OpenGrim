/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  net.minecraft.class_3532
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.Arrays;
import java.util.Map;
import net.minecraft.class_3532;
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

    private double VE(double d) {
        double d2;
        block2: {
            double d3;
            block3: {
                long l = JJQla ^ 0x3F78622DDA2FL;
                double d4 = Math.min(this.bYxsv, this.WhuQX);
                double d5 = Math.max(this.bYxsv, this.WhuQX);
                d3 = class_3532.method_15350((double)d, (double)d4, (double)d5);
                boolean bl = cB.Vu();
                try {
                    d2 = this.HqniU;
                    if (bl) break block2;
                    if (!(d2 > 0.0)) break block3;
                }
                catch (MatchException matchException) {
                    throw cC.VM(matchException);
                }
                d3 = (double)Math.round(d3 / this.HqniU) * this.HqniU;
                d3 = class_3532.method_15350((double)d3, (double)d4, (double)d5);
            }
            d2 = d3;
        }
        return d2;
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
                long l = JJQla ^ 0x378D504CBE06L;
                boolean bl = cB.Vu();
                try {
                    cC cC2 = this;
                    string2 = string;
                    if (bl) break block2;
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

    public cC VA(double d) {
        cC cC2;
        block4: {
            double d2;
            block5: {
                long l = JJQla ^ 0x2618B115C4FDL;
                d2 = this.VE(d);
                boolean bl = cB.Vt();
                try {
                    try {
                        cC2 = this;
                        if (!bl) break block4;
                        if (Double.compare(cC2.LYVpX, d2) != 0) break block5;
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
            this.LYVpX = d2;
            this.Vk();
            cC2 = this;
        }
        return cC2;
    }

    public cC Vy(double d) {
        this.HqniU = Math.max(0.0, d);
        return this.VA(this.LYVpX);
    }

    public cC Vx(double d) {
        this.WhuQX = d;
        return this.VA(this.LYVpX);
    }

    public cC Vw(double d) {
        this.bYxsv = d;
        return this.VA(this.LYVpX);
    }
}
