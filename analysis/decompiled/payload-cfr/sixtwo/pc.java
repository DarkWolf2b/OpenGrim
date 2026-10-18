/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_238;
import net.minecraft.class_243;
import sixtwo.gb;
import sixtwo.pg;

public class pc
implements pg {
    private double QbIpw;
    private class_243 wtRZv;
    private static int[] FKHaX;
    private static final long JaKLd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public class_243 cMC() {
        return this.wtRZv;
    }

    public void cMA() {
        this.wtRZv = null;
    }

    private static MatchException cMH(MatchException matchException) {
        return matchException;
    }

    public static int[] cMG() {
        return FKHaX;
    }

    public void cME(class_243 class_2432) {
        this.wtRZv = class_2432;
    }

    public double cMB() {
        return this.QbIpw;
    }

    public void cMD(double d) {
        this.QbIpw = d;
    }

    public static void cMF(int[] nArray) {
        FKHaX = nArray;
    }

    public pc(double d) {
        this.QbIpw = d;
    }

    public pc() {
        this(0.15);
    }

    static {
        JaKLd = gb.aYR(6618584441570405985L, -1187251238384632253L, MethodHandles.lookup().lookupClass()).a(104743952861888L);
        if (pc.cMG() != null) {
            pc.cMF(new int[3]);
        }
    }

    @Override
    public class_243 process(class_243 class_2432, class_238 class_2382) {
        block10: {
            block11: {
                class_243 class_2433;
                int[] nArray;
                block8: {
                    block9: {
                        long l = JaKLd ^ 0x5C1A82E88F29L;
                        nArray = pc.cMG();
                        try {
                            try {
                                class_2433 = this.wtRZv;
                                if (nArray != null) break block8;
                                if (class_2433 != null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw pc.cMH(matchException);
                            }
                            this.wtRZv = class_2432;
                            return class_2432;
                        }
                        catch (MatchException matchException) {
                            throw pc.cMH(matchException);
                        }
                    }
                    class_2433 = class_2432;
                }
                double d = class_2433.method_1025(this.wtRZv);
                double d2 = this.QbIpw * this.QbIpw;
                try {
                    try {
                        if (nArray != null) break block10;
                        if (!(d < d2)) break block11;
                    }
                    catch (MatchException matchException) {
                        throw pc.cMH(matchException);
                    }
                    return this.wtRZv;
                }
                catch (MatchException matchException) {
                    throw pc.cMH(matchException);
                }
            }
            this.wtRZv = class_2432;
        }
        return class_2432;
    }
}
