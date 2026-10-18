/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_241
 *  net.minecraft.class_243
 *  net.minecraft.class_310
 *  net.minecraft.class_3532
 *  net.minecraft.class_746
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_1297;
import net.minecraft.class_241;
import net.minecraft.class_243;
import net.minecraft.class_310;
import net.minecraft.class_3532;
import net.minecraft.class_746;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mZ;
import sixtwo.rD;

public class ov {
    private float WjcUH;
    private float pDaqa;
    private static iS[] xZSRu;
    private static final long RVwSP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private ov(float f, float f2) {
        this.WjcUH = f;
        this.pDaqa = f2;
    }

    static {
        RVwSP = gb.aYR(3040186214229664376L, 1947325989950969753L, MethodHandles.lookup().lookupClass()).a(207253909410786L);
        if (ov.cGN() == null) {
            ov.cGM(new iS[4]);
        }
    }

    public boolean equals(Object object) {
        block18: {
            int n;
            block22: {
                block21: {
                    iS[] iSArray;
                    block20: {
                        Object object2;
                        block19: {
                            Object object3;
                            block16: {
                                block17: {
                                    long l = RVwSP ^ 0x558DEDD4F3FDL;
                                    iSArray = ov.cGN();
                                    try {
                                        try {
                                            object3 = this;
                                            if (iSArray == null) break block16;
                                            if (object3 != object) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw ov.cGO(matchException);
                                        }
                                        return true;
                                    }
                                    catch (MatchException matchException) {
                                        throw ov.cGO(matchException);
                                    }
                                }
                                object3 = object;
                            }
                            try {
                                try {
                                    try {
                                        if (object3 == null) break block18;
                                        object2 = this.getClass();
                                        if (iSArray == null) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw ov.cGO(matchException);
                                    }
                                    if (object2 != object.getClass()) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw ov.cGO(matchException);
                                }
                                object2 = object;
                            }
                            catch (MatchException matchException) {
                                throw ov.cGO(matchException);
                            }
                        }
                        ov ov2 = (ov)object2;
                        try {
                            try {
                                n = Float.compare(ov2.WjcUH, this.WjcUH);
                                if (iSArray == null) break block20;
                                if (n != 0) break block21;
                            }
                            catch (MatchException matchException) {
                                throw ov.cGO(matchException);
                            }
                            n = Float.compare(ov2.pDaqa, this.pDaqa);
                        }
                        catch (MatchException matchException) {
                            throw ov.cGO(matchException);
                        }
                    }
                    try {
                        if (iSArray == null) break block22;
                        if (n != 0) break block21;
                    }
                    catch (MatchException matchException) {
                        throw ov.cGO(matchException);
                    }
                    n = 1;
                    break block22;
                }
                n = 0;
            }
            return n != 0;
        }
        return false;
    }

    public class_243 cGH() {
        class_243 class_2432;
        long l = RVwSP ^ 0x67C024884386L;
        float f = this.pDaqa * ((float)Math.PI / 180);
        float f2 = -this.WjcUH * ((float)Math.PI / 180);
        float f3 = class_3532.method_15362((double)f2);
        float f4 = class_3532.method_15374((double)f2);
        float f5 = class_3532.method_15362((double)f);
        iS[] iSArray = ov.cGN();
        float f6 = class_3532.method_15374((double)f);
        try {
            class_2432 = new class_243((double)(f4 * f5), (double)(-f6), (double)(f3 * f5));
            if (iSArray == null) {
                iS.bwK("OgWBT");
            }
        }
        catch (MatchException matchException) {
            throw ov.cGO(matchException);
        }
        return class_2432;
    }

    public float cGJ() {
        return this.pDaqa;
    }

    public float cGI() {
        return this.WjcUH;
    }

    public static ov cGv(float f, float f2) {
        return new ov(f, f2);
    }

    public void cGK(float f) {
        this.WjcUH = f;
    }

    public static iS[] cGN() {
        return xZSRu;
    }

    private float cGG(float f, float f2, double d) {
        float f3 = f - f2;
        return f2 + (float)Math.round((double)f3 / d) * (float)d;
    }

    private static MatchException cGO(MatchException matchException) {
        return matchException;
    }

    public static ov cGx(class_243 class_2432) {
        return new ov((float)class_3532.method_15338((double)(Math.toDegrees(Math.atan2(class_2432.field_1350, class_2432.field_1352)) - 90.0)), (float)class_3532.method_15338((double)Math.toDegrees(-Math.atan2(class_2432.field_1351, Math.hypot(class_2432.field_1352, class_2432.field_1350)))));
    }

    public ov cGC(ov ov2) {
        return new ov(this.WjcUH - ov2.WjcUH, this.pDaqa - ov2.pDaqa);
    }

    public void cGE(class_1297 class_12972) {
        class_12972.method_36456(this.WjcUH);
        class_12972.method_36457(this.pDaqa);
    }

    public void cGL(float f) {
        this.pDaqa = f;
    }

    public ov cGB(ov ov2) {
        return new ov(this.WjcUH + ov2.WjcUH, this.pDaqa + ov2.pDaqa);
    }

    public static void cGM(iS[] iSArray) {
        xZSRu = iSArray;
    }

    public ov cGF() {
        double d = mZ.csr();
        ov ov2 = rD.dlX().dbZ();
        float f = this.cGG(this.WjcUH, ov2.WjcUH, d);
        float f2 = this.cGG(this.pDaqa, ov2.pDaqa, d);
        return new ov(f, class_3532.method_15363((float)f2, (float)-90.0f, (float)90.0f));
    }

    public static ov cGw(class_241 class_2412) {
        return new ov(class_2412.field_1342, class_2412.field_1343);
    }

    public static ov cGz(class_1297 class_12972) {
        return new ov(class_12972.method_36454(), class_12972.method_36455());
    }

    public float cGD(ov ov2) {
        float f = class_3532.method_15393((float)(ov2.WjcUH - this.WjcUH));
        float f2 = ov2.pDaqa - this.pDaqa;
        return (float)Math.sqrt(f * f + f2 * f2);
    }

    public static ov cGA() {
        class_746 class_7462;
        block9: {
            class_310 class_3102;
            block7: {
                block8: {
                    long l = RVwSP ^ 0x329E03DF9F1AL;
                    iS[] iSArray = ov.cGN();
                    try {
                        try {
                            class_3102 = rD.dlmvG;
                            if (iSArray == null) break block7;
                            if (class_3102.method_1560() == null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw ov.cGO(matchException);
                        }
                        class_7462 = rD.dlmvG.method_1560();
                        break block9;
                    }
                    catch (MatchException matchException) {
                        throw ov.cGO(matchException);
                    }
                }
                class_3102 = rD.dlmvG;
            }
            class_7462 = class_3102.field_1724;
        }
        class_746 class_7463 = class_7462;
        try {
            if (class_7463 == null) {
                return ov.cGv(0.0f, 0.0f);
            }
        }
        catch (MatchException matchException) {
            throw ov.cGO(matchException);
        }
        float f = rD.dlmvG.method_61966().method_60637(true);
        return ov.cGv(class_7463.method_5705(f), class_7463.method_5695(f));
    }

    public static ov cGy(class_243 class_2432) {
        class_243 class_2433 = rD.dlmvG.field_1724.method_33571();
        return ov.cGx(class_2432.method_1020(class_2433));
    }
}
