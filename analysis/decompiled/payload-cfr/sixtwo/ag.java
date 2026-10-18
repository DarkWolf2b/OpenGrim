/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1068
 *  net.minecraft.class_156
 *  net.minecraft.class_2960
 *  net.minecraft.class_3532
 *  net.minecraft.class_5599
 *  net.minecraft.class_5602
 *  net.minecraft.class_591
 *  net.minecraft.class_746
 *  net.minecraft.class_7833
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4f
 *  org.joml.Quaternionfc
 *  org.joml.Vector3f
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.security.Key;
import java.util.function.Function;
import javax.crypto.Cipher;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1068;
import net.minecraft.class_156;
import net.minecraft.class_2960;
import net.minecraft.class_3532;
import net.minecraft.class_5599;
import net.minecraft.class_5602;
import net.minecraft.class_591;
import net.minecraft.class_746;
import net.minecraft.class_7833;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.joml.Quaternionfc;
import org.joml.Vector3f;
import sixtwo.ag$rQ;
import sixtwo.ag$rR;
import sixtwo.aj;
import sixtwo.az;
import sixtwo.gb;
import sixtwo.jI;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.mA;
import sixtwo.rD;

public class ag
extends az {
    private static final float sbZWT = 2.125f;
    private static final float qccLr = -0.53125f;
    private static final float RjGUj = 1.515625f;
    private static final float YhWDg = 0.28125f;
    private static final float Uofge = 0.515625f;
    private static final float vlFnX = 0.453125f;
    private String cKAzP;
    private class_591 varoa;
    private class_591 QSyUZ;
    private final ag$rR VSKnI;
    private boolean FiFgY;
    Function<String, ag$rQ> ZYZql = string -> {
        class_2960 class_29602;
        block16: {
            class_2960 class_29603;
            block15: {
                String[] stringArray;
                block12: {
                    block13: {
                        class_746 class_7462;
                        block14: {
                            long l = WkMeU ^ 0x72883CB37841L;
                            class_29602 = ag$rQ.cachedSkins.get(string);
                            stringArray = aj.oA();
                            try {
                                try {
                                    try {
                                        try {
                                            class_29603 = class_29602;
                                            if (stringArray == null) break block12;
                                            if (class_29603 != null) break block13;
                                        }
                                        catch (MatchException matchException) {
                                            throw ag.nF(matchException);
                                        }
                                        class_7462 = rD.dlmvG.field_1724;
                                        if (stringArray == null) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw ag.nF(matchException);
                                    }
                                    if (class_7462 == null) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                                class_7462 = rD.dlmvG.field_1724;
                            }
                            catch (MatchException matchException) {
                                throw ag.nF(matchException);
                            }
                        }
                        class_29602 = class_7462.method_52814().comp_1626().comp_3627();
                    }
                    class_29603 = class_29602;
                }
                try {
                    try {
                        if (stringArray == null) break block15;
                        if (class_29603 != null) break block16;
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                    class_29603 = class_1068.method_62620().comp_1626().comp_3627();
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            class_29602 = class_29603;
        }
        return new ag$rQ(class_29602, true);
    };
    float EnbkJ = -5.0f;
    float Vinex = 30.0f;
    private static final long WkMeU = gb.aYR(-2652524297955319212L, -8454400431850127096L, MethodHandles.lookup().lookupClass()).a(258803647282649L);
    private static final long wxrIA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ag(String string2, ag$rR rR2) {
        this.cKAzP = string2;
        this.VSKnI = rR2;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = WkMeU ^ 0x6034D328BF48L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        int n = 1;
        while (true) {
            if (n >= 8) {
                cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
                long l2 = 8043091998414103728L;
                byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
                wxrIA = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
                return;
            }
            byArray2 = byArray2;
            byArray2[n] = (byte)(l << n * 8 >>> 56);
            ++n;
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public lc nl(lC lC2, boolean bl) {
        int n;
        float f2;
        float f3;
        float f4;
        float f5;
        block44: {
            String[] stringArray;
            block43: {
                block42: {
                    block40: {
                        Matrix4f matrix4f;
                        float f6;
                        block38: {
                            block39: {
                                float f7;
                                Object object;
                                block36: {
                                    block37: {
                                        long l = WkMeU ^ 0x6F1029A0A61EL;
                                        stringArray = aj.oA();
                                        try {
                                            try {
                                                try {
                                                    if (lC2 == null) return this.td();
                                                    object = this;
                                                    if (stringArray == null) break block36;
                                                }
                                                catch (MatchException matchException) {
                                                    throw ag.nF(matchException);
                                                }
                                                if (((az)object).tf()) break block37;
                                                return this.td();
                                            }
                                            catch (MatchException matchException) {
                                                throw ag.nF(matchException);
                                            }
                                        }
                                        catch (MatchException matchException) {
                                            throw ag.nF(matchException);
                                        }
                                    }
                                    object = this.ZYZql.apply(this.cKAzP);
                                }
                                ag$rQ ag$rQ = (ag$rQ)object;
                                try {
                                    if (ag$rQ == null) {
                                        return this.td();
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                                float f8 = this.WjISQ / 2.125f;
                                try {
                                    f7 = ag$rQ.slim() ? 0.453125f : 0.515625f;
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                                f6 = f7;
                                matrix4f = jI.bIl((Matrix3x2fc)lC2.cfc());
                                try {
                                    try {
                                        matrix4f.translate(this.MCnYt + this.BcpIo / 2.0f, this.pNyTQ + this.WjISQ, 0.0f);
                                        matrix4f.scale(f8, f8, f8);
                                        matrix4f.translate(0.0f, -0.0625f, 0.0f);
                                        if (stringArray == null) break block38;
                                        if (bl) break block39;
                                    }
                                    catch (MatchException matchException) {
                                        throw ag.nF(matchException);
                                    }
                                    matrix4f.rotateAround((Quaternionfc)class_7833.field_40714.rotationDegrees(this.EnbkJ), 0.0f, -1.0625f, 0.0f);
                                    matrix4f.rotate((Quaternionfc)class_7833.field_40716.rotationDegrees(this.Vinex));
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                            }
                            matrix4f.scale(1.0f, 1.0f, -1.0f);
                            matrix4f.translate(0.0f, -1.5f, 0.0f);
                        }
                        f5 = Float.POSITIVE_INFINITY;
                        f4 = Float.POSITIVE_INFINITY;
                        f3 = Float.NEGATIVE_INFINITY;
                        f2 = Float.NEGATIVE_INFINITY;
                        float[] fArray = new float[]{-f6, f6};
                        int n2 = fArray.length;
                        int n3 = 0;
                        block30: while (true) {
                            int n4 = n3;
                            block31: while (n4 < n2) {
                                float f9 = fArray[n3];
                                float[] fArray2 = new float[]{-0.53125f, 1.515625f};
                                int n5 = fArray2.length;
                                n = 0;
                                if (stringArray == null) break block40;
                                int n6 = n;
                                while (n6 < n5) {
                                    block41: {
                                        float f10 = fArray2[n6];
                                        float[] fArray3 = new float[]{-0.28125f, 0.28125f};
                                        int n7 = fArray3.length;
                                        n4 = 0;
                                        if (stringArray == null) continue block31;
                                        for (int i = v1482; i < n7; ++i) {
                                            float f11 = fArray3[i];
                                            Vector3f vector3f = matrix4f.transformPosition(f9, f10, f11, new Vector3f());
                                            f5 = Math.min(f5, vector3f.x);
                                            f4 = Math.min(f4, vector3f.y);
                                            f3 = Math.max(f3, vector3f.x);
                                            f2 = Math.max(f2, vector3f.y);
                                            try {
                                                if (stringArray != null) {
                                                    if (stringArray != null) continue;
                                                    break;
                                                }
                                                break block41;
                                            }
                                            catch (MatchException matchException) {
                                                throw ag.nF(matchException);
                                            }
                                        }
                                        ++n6;
                                    }
                                    if (stringArray != null) continue;
                                }
                                ++n3;
                                if (stringArray != null) continue block30;
                            }
                            break;
                        }
                        n = Float.isFinite(f5);
                    }
                    try {
                        try {
                            if (stringArray == null) break block42;
                            if (n == 0) return this.td();
                        }
                        catch (MatchException matchException) {
                            throw ag.nF(matchException);
                        }
                        n = Float.isFinite(f4);
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                }
                try {
                    try {
                        if (stringArray == null) break block43;
                        if (n == 0) return this.td();
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                    n = Float.isFinite(f3);
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            try {
                try {
                    if (stringArray == null) break block44;
                    if (n == 0) return this.td();
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
                n = Float.isFinite(f2);
            }
            catch (MatchException matchException) {
                throw ag.nF(matchException);
            }
        }
        try {
            if (n != 0) return new lc(f5 - 1.0f, f4 - 1.0f, f3 - f5 + 2.0f, f2 - f4 + 2.0f);
            return this.td();
        }
        catch (MatchException matchException) {
            throw ag.nF(matchException);
        }
    }

    public class_591 nr() {
        return this.QSyUZ;
    }

    public ag$rR ns() {
        return this.VSKnI;
    }

    public boolean nt() {
        return this.FiFgY;
    }

    private void nm(class_591 class_5912) {
        long l = WkMeU ^ 0x11EF879EB1C9L;
        if (this.VSKnI == ag$rR.VdGoA) {
            float f2 = (float)(class_156.method_658() % wxrIA) / 1000.0f;
            float f3 = 0.8f;
            float f4 = f2 * f3 * (float)Math.PI;
            float f5 = 0.8f;
            float f6 = class_3532.method_15362((double)f4) * f5;
            float f7 = class_3532.method_15362((double)(f4 + (float)Math.PI)) * f5;
            float f8 = class_3532.method_15362((double)(f4 + (float)Math.PI)) * f5;
            float f9 = class_3532.method_15362((double)f4) * f5;
            class_5912.field_3401.field_3654 = f6;
            class_5912.field_3392.field_3654 = f8;
            class_5912.field_27433.field_3654 = f7;
            class_5912.field_3397.field_3654 = f9;
        }
    }

    @Override
    public void dl(double d, double d2, mA mA2) {
        block4: {
            block5: {
                long l = WkMeU ^ 0x4DF2EA07BB13L;
                String[] stringArray = aj.oA();
                try {
                    try {
                        if (stringArray == null) break block4;
                        if (mA2 != mA.sCBUa) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                    this.FiFgY = false;
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            super.dl(d, d2, mA2);
        }
    }

    public String np() {
        return this.cKAzP;
    }

    public Function<String, ag$rQ> nu() {
        return this.ZYZql;
    }

    private void no() {
        block6: {
            class_591 class_5912;
            block5: {
                long l = WkMeU ^ 0x1BF6F4AD0C5FL;
                String[] stringArray = aj.oA();
                try {
                    try {
                        class_5912 = this.varoa;
                        if (stringArray == null) break block5;
                        if (class_5912 == null) break block6;
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                    class_5912 = this.QSyUZ;
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            if (class_5912 != null) {
                return;
            }
        }
        class_5599 class_55992 = rD.dlmvG.method_31974();
        this.varoa = new class_591(class_55992.method_32072(class_5602.field_27577), false);
        this.QSyUZ = new class_591(class_55992.method_32072(class_5602.field_27581), true);
    }

    private boolean nn() {
        boolean bl;
        long l = WkMeU ^ 0x7520C011A6CFL;
        try {
            bl = this.VSKnI == ag$rR.cyZLf;
        }
        catch (MatchException matchException) {
            throw ag.nF(matchException);
        }
        return bl;
    }

    public ag nk(float f2, float f3) {
        this.EnbkJ = f2;
        this.Vinex = f3;
        return this;
    }

    @Override
    public boolean dk(double d, double d2, mA mA2) {
        boolean bl;
        block12: {
            block13: {
                boolean bl2;
                block10: {
                    long l = WkMeU ^ 0x3F41F7B25E6AL;
                    String[] stringArray = aj.oA();
                    try {
                        block11: {
                            try {
                                try {
                                    try {
                                        try {
                                            bl2 = this.nn();
                                            if (stringArray == null) break block10;
                                            if (!bl2) break block11;
                                        }
                                        catch (MatchException matchException) {
                                            throw ag.nF(matchException);
                                        }
                                        if (mA2 != mA.sCBUa) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw ag.nF(matchException);
                                    }
                                    bl = this.tg(d, d2);
                                    if (stringArray == null) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                                if (bl) break block13;
                            }
                            catch (MatchException matchException) {
                                throw ag.nF(matchException);
                            }
                        }
                        bl2 = super.dk(d, d2, mA2);
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                }
                return bl2;
            }
            this.FiFgY = true;
            bl = true;
        }
        return bl;
    }

    public float nv() {
        return this.EnbkJ;
    }

    public float nw() {
        return this.Vinex;
    }

    public ag nx(String string) {
        this.cKAzP = string;
        return this;
    }

    public ag ny(class_591 class_5912) {
        this.varoa = class_5912;
        return this;
    }

    public ag nz(class_591 class_5912) {
        this.QSyUZ = class_5912;
        return this;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    protected void bV(lC lC2) {
        class_591 class_5912;
        ag$rQ ag$rQ;
        ag$rQ ag$rQ2;
        block9: {
            block10: {
                String[] stringArray;
                block8: {
                    long l = WkMeU ^ 0x62D43F1B8AAEL;
                    String[] stringArray2 = aj.oA();
                    this.no();
                    ag$rQ2 = this.ZYZql.apply(this.cKAzP);
                    stringArray = stringArray2;
                    try {
                        ag$rQ = ag$rQ2;
                        if (stringArray == null) break block8;
                        if (ag$rQ == null) return;
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                    ag$rQ = ag$rQ2;
                }
                try {
                    try {
                        if (stringArray == null) break block9;
                        if (ag$rQ.skin() != null) break block10;
                        return;
                    }
                    catch (MatchException matchException) {
                        throw ag.nF(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            ag$rQ = ag$rQ2;
        }
        try {
            class_5912 = ag$rQ.slim() ? this.QSyUZ : this.varoa;
        }
        catch (MatchException matchException) {
            throw ag.nF(matchException);
        }
        class_591 class_5913 = class_5912;
        this.nm(class_5913);
        float f2 = this.WjISQ / 2.125f;
        lC2.cec(class_5913, ag$rQ2.skin(), this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ).bFo(f2).bFp(this.EnbkJ, this.Vinex).bFs();
    }

    @Override
    public boolean dB(double d, double d2, mA mA2, double d3, double d4) {
        block12: {
            boolean bl;
            block10: {
                long l = WkMeU ^ 0x179154326EA7L;
                String[] stringArray = aj.oA();
                try {
                    block11: {
                        try {
                            try {
                                try {
                                    try {
                                        bl = this.nn();
                                        if (stringArray == null) break block10;
                                        if (!bl) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw ag.nF(matchException);
                                    }
                                    bl = this.FiFgY;
                                    if (stringArray == null) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw ag.nF(matchException);
                                }
                                if (!bl) break block11;
                            }
                            catch (MatchException matchException) {
                                throw ag.nF(matchException);
                            }
                            if (mA2 == mA.sCBUa) break block12;
                        }
                        catch (MatchException matchException) {
                            throw ag.nF(matchException);
                        }
                    }
                    bl = super.dB(d, d2, mA2, d3, d4);
                }
                catch (MatchException matchException) {
                    throw ag.nF(matchException);
                }
            }
            return bl;
        }
        this.Vinex = class_3532.method_15393((float)(this.Vinex + (float)d3 * 1.5f));
        this.EnbkJ = class_3532.method_15363((float)(this.EnbkJ + (float)d4 * 1.2f), (float)-60.0f, (float)60.0f);
        return true;
    }

    public class_591 nq() {
        return this.varoa;
    }

    private static MatchException nF(MatchException matchException) {
        return matchException;
    }

    public ag nD(float f2) {
        this.Vinex = f2;
        return this;
    }

    public ag nA(boolean bl) {
        this.FiFgY = bl;
        return this;
    }

    public ag nC(float f2) {
        this.EnbkJ = f2;
        return this;
    }

    public ag nB(Function<String, ag$rQ> function) {
        this.ZYZql = function;
        return this;
    }
}
