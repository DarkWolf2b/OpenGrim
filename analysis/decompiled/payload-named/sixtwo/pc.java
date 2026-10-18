/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Vec3d
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.pg;

public class pc
implements pg {
    private double QbIpw;
    private Vec3d wtRZv;
    private static int[] FKHaX;
    private static final long JaKLd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public Vec3d cMC() {
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

    public void cME(Vec3d vec3d) {
        this.wtRZv = vec3d;
    }

    public double cMB() {
        return this.QbIpw;
    }

    public void cMD(double d2) {
        this.QbIpw = d2;
    }

    public static void cMF(int[] nArray) {
        FKHaX = nArray;
    }

    public pc(double d2) {
        this.QbIpw = d2;
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
    public Vec3d process(Vec3d vec3d, Box box) {
        block10: {
            block11: {
                Vec3d vec3d2;
                int[] nArray;
                block8: {
                    block9: {
                        long l2 = JaKLd ^ 0x5C1A82E88F29L;
                        nArray = pc.cMG();
                        try {
                            try {
                                vec3d2 = this.wtRZv;
                                if (nArray != null) break block8;
                                if (vec3d2 != null) break block9;
                            }
                            catch (MatchException matchException) {
                                throw pc.cMH(matchException);
                            }
                            this.wtRZv = vec3d;
                            return vec3d;
                        }
                        catch (MatchException matchException) {
                            throw pc.cMH(matchException);
                        }
                    }
                    vec3d2 = vec3d;
                }
                double d2 = vec3d2.squaredDistanceTo(this.wtRZv);
                double d3 = this.QbIpw * this.QbIpw;
                try {
                    try {
                        if (nArray != null) break block10;
                        if (!(d2 < d3)) break block11;
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
            this.wtRZv = vec3d;
        }
        return vec3d;
    }
}

