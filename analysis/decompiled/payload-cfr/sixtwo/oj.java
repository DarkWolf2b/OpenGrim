/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_2338
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 *  net.minecraft.class_3965
 *  net.minecraft.class_746
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import net.minecraft.class_2338;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_3965;
import net.minecraft.class_746;
import sixtwo.gb;
import sixtwo.jg;
import sixtwo.oA;
import sixtwo.oB;
import sixtwo.oD;
import sixtwo.of;
import sixtwo.ox;
import sixtwo.oz;
import sixtwo.rD;

public class oj {
    private oz awZhb;
    private static final long EBkhS = gb.aYR(8080834934779996922L, -4925974876756873979L, MethodHandles.lookup().lookupClass()).a(202294447517771L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public boolean cEr(oD oD2, oB oB2, boolean bl) {
        boolean bl2;
        block4: {
            block5: {
                long l = EBkhS ^ 0x165BF6FB55BCL;
                String[] stringArray = of.cCL();
                try {
                    try {
                        bl2 = this.cEy();
                        if (stringArray == null) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                    return oA.cHC(this.cED(), oD2, bl).cHF(oB2).cHJ(this.awZhb).cHK();
                }
                catch (MatchException matchException) {
                    throw oj.cEG(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    private static MatchException cEG(MatchException matchException) {
        return matchException;
    }

    public class_2338 cED() {
        oj oj2;
        block4: {
            block5: {
                long l = EBkhS ^ 0x7A0533C1B63L;
                String[] stringArray = of.cCL();
                try {
                    try {
                        oj2 = this;
                        if (stringArray == null) break block4;
                        if (oj2.cEy()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                    return class_2338.field_10980;
                }
                catch (MatchException matchException) {
                    throw oj.cEG(matchException);
                }
            }
            oj2 = this;
        }
        return oj2.awZhb.blockPos();
    }

    public boolean cEy() {
        boolean bl;
        long l = EBkhS ^ 0x1F702781771CL;
        try {
            bl = this.awZhb != null;
        }
        catch (MatchException matchException) {
            throw oj.cEG(matchException);
        }
        return bl;
    }

    public void cEx() {
        this.awZhb = null;
    }

    public class_243 cEE() {
        class_243 class_2432;
        block6: {
            block5: {
                oj oj2;
                block4: {
                    long l = EBkhS ^ 0x68FDC7FE45A7L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oj2 = this;
                            if (stringArray == null) break block4;
                            if (!oj2.cEy()) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                        oj2 = this;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                }
                class_2432 = oj2.awZhb.hitPoint();
                break block6;
            }
            class_2432 = class_243.field_1353;
        }
        return class_2432;
    }

    public oz cEC() {
        return this.awZhb;
    }

    public boolean cEt() {
        double d;
        block6: {
            class_746 class_7462;
            block4: {
                block5: {
                    long l = EBkhS ^ 0x48C1E64D2AF9L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            class_7462 = rD.dlmvG.field_1724;
                            if (stringArray == null) break block4;
                            if (class_7462 != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                        d = 4.5;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                }
                class_7462 = rD.dlmvG.field_1724;
            }
            d = (float)class_7462.method_55754();
        }
        double d2 = d;
        return this.cEu(d2);
    }

    public class_3965 cEB() {
        class_3965 class_39652;
        block6: {
            oz oz2;
            block4: {
                block5: {
                    long l = EBkhS ^ 0x27F983B139D5L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oz2 = this.awZhb;
                            if (stringArray == null) break block4;
                            if (oz2 != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                        class_39652 = null;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                }
                oz2 = this.awZhb;
            }
            class_39652 = oz2.blockHitResult();
        }
        return class_39652;
    }

    public boolean cEu(double d) {
        oz oz2;
        block10: {
            oz oz3;
            block11: {
                oj oj2;
                String[] stringArray;
                block8: {
                    block9: {
                        long l = EBkhS ^ 0x57330492C7F1L;
                        stringArray = of.cCL();
                        try {
                            try {
                                oj2 = this;
                                if (stringArray == null) break block8;
                                if (oj2.cEy()) break block9;
                            }
                            catch (MatchException matchException) {
                                throw oj.cEG(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                    }
                    oj2 = this;
                }
                oz3 = oj2.cEC();
                try {
                    try {
                        oz2 = oz3;
                        if (stringArray == null) break block10;
                        if (oz2 != null) break block11;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw oj.cEG(matchException);
                }
            }
            oz2 = oz3;
        }
        class_243 class_2432 = oz2.hitPoint();
        class_238 class_2382 = class_238.method_30048((class_243)class_2432, (double)0.1f, (double)0.1f, (double)0.1f);
        return ox.cHb(class_2382, d);
    }

    public void cEz() {
        float f;
        block6: {
            class_746 class_7462;
            block4: {
                block5: {
                    long l = EBkhS ^ 0x697B4ECEE6C1L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            class_7462 = rD.dlmvG.field_1724;
                            if (stringArray == null) break block4;
                            if (class_7462 != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                        f = 4.5f;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                }
                class_7462 = rD.dlmvG.field_1724;
            }
            f = (float)class_7462.method_55754();
        }
        float f2 = f;
        this.cEA(f2);
    }

    public void cEv(oz oz2) {
        block4: {
            block5: {
                long l = EBkhS ^ 0x38FFDAC176A3L;
                String[] stringArray = of.cCL();
                try {
                    try {
                        if (stringArray == null) break block4;
                        if (oz2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                    this.cEx();
                    return;
                }
                catch (MatchException matchException) {
                    throw oj.cEG(matchException);
                }
            }
            this.awZhb = oz2;
        }
    }

    public void cEw(class_3965 class_39652) {
        oz oz2;
        long l = EBkhS ^ 0x4C702DA7E9CAL;
        try {
            oj oj2 = this;
            oz2 = class_39652 == null ? null : new oz(class_39652.method_17777(), class_39652);
        }
        catch (MatchException matchException) {
            throw oj.cEG(matchException);
        }
        oj2.awZhb = oz2;
    }

    public void cEs(oD oD2, oB oB2, boolean bl) {
        block5: {
            oj oj2;
            block4: {
                long l = EBkhS ^ 0x46AC081B1EFDL;
                String[] stringArray = of.cCL();
                try {
                    try {
                        oj2 = this;
                        if (stringArray == null) break block4;
                        if (!oj2.cEy()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                    oj2 = this;
                }
                catch (MatchException matchException) {
                    throw oj.cEG(matchException);
                }
            }
            oz oz2 = oA.cHD(oj2.cED(), oD2, bl, class_26802 -> true).cHF(oB2).cHJ(this.awZhb).cHL();
            this.cEv(oz2);
        }
    }

    public void cEA(float f) {
        block9: {
            oj oj2;
            block8: {
                boolean bl;
                block6: {
                    String[] stringArray;
                    block7: {
                        long l = EBkhS ^ 0x9839351AA38L;
                        stringArray = of.cCL();
                        try {
                            bl = this.cEy();
                            if (stringArray == null) break block6;
                            if (bl) break block7;
                        }
                        catch (MatchException matchException) {
                            throw oj.cEG(matchException);
                        }
                        return;
                    }
                    try {
                        oj2 = this;
                        if (stringArray == null) break block8;
                        bl = jg.bBG(oj2.awZhb.hitPoint(), f);
                    }
                    catch (MatchException matchException) {
                        throw oj.cEG(matchException);
                    }
                }
                if (bl) break block9;
                oj2 = this;
            }
            oj2.cEx();
        }
    }
}
