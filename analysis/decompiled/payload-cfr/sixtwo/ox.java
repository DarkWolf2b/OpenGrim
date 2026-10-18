/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1309
 *  net.minecraft.class_1675
 *  net.minecraft.class_1922
 *  net.minecraft.class_2246
 *  net.minecraft.class_2338
 *  net.minecraft.class_2350
 *  net.minecraft.class_2374
 *  net.minecraft.class_238
 *  net.minecraft.class_239$class_240
 *  net.minecraft.class_243
 *  net.minecraft.class_259
 *  net.minecraft.class_265
 *  net.minecraft.class_2680
 *  net.minecraft.class_3959
 *  net.minecraft.class_3959$class_242
 *  net.minecraft.class_3959$class_3960
 *  net.minecraft.class_3965
 *  net.minecraft.class_3966
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.Optional;
import java.util.function.Predicate;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_1675;
import net.minecraft.class_1922;
import net.minecraft.class_2246;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_2374;
import net.minecraft.class_238;
import net.minecraft.class_239;
import net.minecraft.class_243;
import net.minecraft.class_259;
import net.minecraft.class_265;
import net.minecraft.class_2680;
import net.minecraft.class_3959;
import net.minecraft.class_3965;
import net.minecraft.class_3966;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.oV;
import sixtwo.ov;
import sixtwo.qL;
import sixtwo.rD;

public final class ox {
    private class_1297 wuRIs;
    private ov HJoUm;
    private double rnYFy = 3.0;
    private boolean fmYuI = false;
    private boolean XIKjc = true;
    private class_3959.class_3960 WIDNA = class_3959.class_3960.field_17559;
    private class_3959.class_242 ZcMTi = class_3959.class_242.field_1348;
    private Predicate<class_1297> MgANl = class_12972 -> true;
    private Predicate<class_1309> XaSyX = class_13092 -> true;
    private static String cUAGt;
    private static final long yqpEX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private ox(class_1297 class_12973) {
        this.wuRIs = class_12973;
    }

    static {
        yqpEX = gb.aYR(-2364444756791235890L, -6693464728922493294L, MethodHandles.lookup().lookupClass()).a(183309789674886L);
        if (ox.cHz() != null) {
            ox.cHy("f6WPkb");
        }
    }

    public static boolean cHa(class_2338 class_23382, double d) {
        return ox.cHb(new class_238(class_23382), d);
    }

    public class_3966 cHn() {
        class_3965 class_39652;
        class_243 class_2432;
        class_243 class_2433;
        class_243 class_2434;
        double d;
        class_1297 class_12973;
        block22: {
            double d2;
            String string;
            block20: {
                ox ox2;
                block18: {
                    block19: {
                        long l = yqpEX ^ 0x6F6582206709L;
                        class_12973 = this.cHq();
                        string = ox.cHz();
                        try {
                            if (class_12973 == null) {
                                return null;
                            }
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                        try {
                            try {
                                try {
                                    ox2 = this;
                                    if (string != null) break block18;
                                    if (!ox2.XIKjc) break block19;
                                }
                                catch (MatchException matchException) {
                                    throw ox.cHA(matchException);
                                }
                                if (class_12973 != rD.dlmvG.field_1724) break block19;
                            }
                            catch (MatchException matchException) {
                                throw ox.cHA(matchException);
                            }
                            d2 = oV.cLb(this.rnYFy);
                            break block20;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                    }
                    ox2 = this;
                }
                d2 = ox2.rnYFy;
            }
            d = d2;
            class_2434 = class_12973.method_33571();
            class_2433 = this.cHr().cGH();
            class_2432 = class_2434.method_1031(class_2433.field_1352 * d, class_2433.field_1351 * d, class_2433.field_1350 * d);
            if (!this.fmYuI) {
                double d3;
                block23: {
                    class_3965 class_39653;
                    block21: {
                        class_39652 = ox.cGY(class_2434, class_2433, d, this.ZcMTi, this.WIDNA, class_12973);
                        try {
                            try {
                                class_39653 = class_39652;
                                if (string != null) break block21;
                                if (class_39653.method_17783() != class_239.class_240.field_1332) break block22;
                            }
                            catch (MatchException matchException) {
                                throw ox.cHA(matchException);
                            }
                            class_39653 = class_39652;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                    }
                    double d4 = class_39653.method_17784().method_1025(class_2434);
                    double d5 = d * d;
                    try {
                        try {
                            d3 = d4;
                            if (string != null) break block23;
                            if (!(d3 < d5)) break block22;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                        d3 = Math.sqrt(d4);
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                }
                double d6 = d3;
                class_2432 = class_2434.method_1031(class_2433.field_1352 * d6, class_2433.field_1351 * d6, class_2433.field_1350 * d6);
            }
        }
        class_39652 = class_12973.method_5829().method_18804(class_2433.method_1021(d)).method_1009(1.0, 1.0, 1.0);
        return class_1675.method_18075((class_1297)class_12973, (class_243)class_2434, (class_243)class_2432, (class_238)class_39652, class_12972 -> {
            boolean bl;
            block8: {
                block7: {
                    String string;
                    block6: {
                        long l = yqpEX ^ 0xD8087BE92BDL;
                        string = ox.cHz();
                        try {
                            try {
                                bl = class_12972.method_7325();
                                if (string != null) break block6;
                                if (bl) break block7;
                            }
                            catch (MatchException matchException) {
                                throw ox.cHA(matchException);
                            }
                            bl = this.MgANl.test((class_1297)class_12972);
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                    }
                    try {
                        if (string != null) break block8;
                        if (!bl) break block7;
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                    bl = true;
                    break block8;
                }
                bl = false;
            }
            return bl;
        }, (double)(d * d));
    }

    public ox cHj(Predicate<class_1297> predicate) {
        long l = yqpEX ^ 0x641B1E052764L;
        try {
            if (predicate != null) {
                this.MgANl = this.MgANl.and(predicate);
            }
        }
        catch (MatchException matchException) {
            throw ox.cHA(matchException);
        }
        return this;
    }

    @Deprecated
    public static class_3965 cHc(class_3959 class_39593, class_2338 class_23382) {
        return (class_3965)class_1922.method_17744((class_243)class_39593.method_17750(), (class_243)class_39593.method_17747(), (Object)class_39593, (class_39592, class_23383) -> {
            class_3965 class_39652;
            double d;
            double d2;
            class_2680 class_26802;
            block9: {
                block8: {
                    long l = yqpEX ^ 0x5F58EBAD0051L;
                    String string = ox.cHz();
                    if (class_23383.equals((Object)class_23382)) break block8;
                    class_26802 = class_2246.field_10124.method_9564();
                    if (string == null) break block9;
                }
                class_26802 = class_2246.field_10540.method_9564();
            }
            class_243 class_2432 = class_39592.method_17750();
            class_243 class_2433 = class_39592.method_17747();
            class_265 class_2652 = class_39592.method_17748(class_26802, (class_1922)rD.dlmvG.field_1687, class_23383);
            class_3965 class_39653 = rD.dlmvG.field_1687.method_17745(class_2432, class_2433, class_23383, class_2652, class_26802);
            class_265 class_2653 = class_259.method_1073();
            class_3965 class_39654 = class_2653.method_1092(class_2432, class_2433, class_23383);
            try {
                d2 = class_39653 == null ? Double.MAX_VALUE : class_39592.method_17750().method_1025(class_39653.method_17784());
            }
            catch (MatchException matchException) {
                throw ox.cHA(matchException);
            }
            double d3 = d2;
            try {
                d = class_39654 == null ? Double.MAX_VALUE : class_39592.method_17750().method_1025(class_39654.method_17784());
            }
            catch (MatchException matchException) {
                throw ox.cHA(matchException);
            }
            double d4 = d;
            try {
                class_39652 = d3 <= d4 ? class_39653 : class_39654;
            }
            catch (MatchException matchException) {
                throw ox.cHA(matchException);
            }
            return class_39652;
        }, class_39592 -> {
            class_243 class_2432 = class_39592.method_17750().method_1020(class_39592.method_17747());
            return class_3965.method_17778((class_243)class_39592.method_17747(), (class_2350)class_2350.method_10142((double)class_2432.field_1352, (double)class_2432.field_1351, (double)class_2432.field_1350), (class_2338)class_2338.method_49638((class_2374)class_39592.method_17747()));
        });
    }

    public class_3965 cHp() {
        class_3965 class_39652;
        long l = yqpEX ^ 0x3BE6657C90D7L;
        class_1297 class_12972 = this.cHq();
        class_243 class_2432 = class_12972.method_33571();
        String string = ox.cHz();
        class_243 class_2433 = this.cHr().cGH();
        try {
            class_39652 = ox.cGY(class_2432, class_2433, this.rnYFy, this.ZcMTi, this.WIDNA, class_12972);
            if (string != null) {
                iS.bwK("Ee7bdb");
            }
        }
        catch (MatchException matchException) {
            throw ox.cHA(matchException);
        }
        return class_39652;
    }

    public ox cHe(double d) {
        this.rnYFy = d;
        return this;
    }

    public ox cHd(ov ov2) {
        this.HJoUm = ov2;
        return this;
    }

    public ox cHi(class_3959.class_3960 class_39602) {
        this.WIDNA = class_39602;
        return this;
    }

    public ox cHh(class_3959.class_242 class_2422) {
        this.ZcMTi = class_2422;
        return this;
    }

    public static ox cGV() {
        class_1297 class_12972 = rD.dlmvG.method_1560();
        return new ox(class_12972);
    }

    public static boolean cHb(class_238 class_2382, double d) {
        long l = yqpEX ^ 0x22250FEDEC3EL;
        class_1297 class_12972 = rD.dlmvG.method_1560();
        try {
            if (class_12972 == null) {
                return false;
            }
        }
        catch (MatchException matchException) {
            throw ox.cHA(matchException);
        }
        qL qL2 = rD.dlX();
        class_243 class_2432 = class_12972.method_33571();
        class_243 class_2433 = qL2.dbC().cGH();
        class_243 class_2434 = class_2432.method_1031(class_2433.field_1352 * d, class_2433.field_1351 * d, class_2433.field_1350 * d);
        Optional optional = class_2382.method_992(class_2432, class_2434);
        return optional.isPresent();
    }

    public static ox cGW(class_1297 class_12972) {
        return new ox(class_12972);
    }

    public static class_3966 cGX() {
        return ox.cGV().cHe(rD.dlmvG.field_1724.method_55755()).cHn();
    }

    private static class_3965 cGY(class_243 class_2432, class_243 class_2433, double d, class_3959.class_242 class_2422, class_3959.class_3960 class_39602, class_1297 class_12972) {
        class_243 class_2434 = class_2432.method_1031(class_2433.field_1352 * d, class_2433.field_1351 * d, class_2433.field_1350 * d);
        class_3959 class_39592 = new class_3959(class_2432, class_2434, class_39602, class_2422, class_12972);
        return rD.dlmvG.field_1687.method_17742(class_39592);
    }

    public static boolean cGZ(class_2338 class_23382) {
        double d = rD.dlmvG.field_1724.method_55754();
        return ox.cHb(new class_238(class_23382), d);
    }

    private static MatchException cHA(MatchException matchException) {
        return matchException;
    }

    public ox cHg() {
        this.XIKjc = false;
        return this;
    }

    public ox cHf(boolean bl) {
        this.fmYuI = bl;
        return this;
    }

    public ox cHk(Predicate<class_1309> predicate) {
        long l = yqpEX ^ 0x27375E5F55E5L;
        try {
            if (predicate != null) {
                this.XaSyX = this.XaSyX.and(predicate);
            }
        }
        catch (MatchException matchException) {
            throw ox.cHA(matchException);
        }
        return this;
    }

    public class_1297 cHl() {
        class_1297 class_12972;
        block4: {
            block3: {
                class_3966 class_39662;
                block2: {
                    long l = yqpEX ^ 0x44C722B54170L;
                    class_3966 class_39663 = this.cHn();
                    String string = ox.cHz();
                    try {
                        class_39662 = class_39663;
                        if (string != null) break block2;
                        if (class_39662 == null) break block3;
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                    class_39662 = class_39663;
                }
                class_12972 = class_39662.method_17782();
                break block4;
            }
            class_12972 = null;
        }
        return class_12972;
    }

    public static String cHz() {
        return cUAGt;
    }

    public <T extends class_1297> T cHm(Class<T> clazz) {
        class_1297 class_12972;
        block9: {
            block8: {
                class_1297 class_12973;
                Class<T> clazz2;
                block7: {
                    long l = yqpEX ^ 0x3C01BC89274EL;
                    class_3966 class_39662 = this.cHn();
                    String string = ox.cHz();
                    try {
                        if (class_39662 == null) {
                            return null;
                        }
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                    try {
                        try {
                            clazz2 = clazz;
                            class_12973 = class_39662.method_17782();
                            if (string != null) break block7;
                            if (!clazz2.isInstance(class_12973)) break block8;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                        clazz2 = clazz;
                        class_12973 = class_39662.method_17782();
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                }
                class_12972 = (class_1297)clazz2.cast(class_12973);
                break block9;
            }
            class_12972 = null;
        }
        return (T)class_12972;
    }

    private class_1297 cHq() {
        class_1297 class_12972;
        block4: {
            block5: {
                long l = yqpEX ^ 0x332F3927325FL;
                String string = ox.cHz();
                try {
                    try {
                        class_12972 = this.wuRIs;
                        if (string != null) break block4;
                        if (class_12972 == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                    return this.wuRIs;
                }
                catch (MatchException matchException) {
                    throw ox.cHA(matchException);
                }
            }
            class_12972 = rD.dlmvG.method_1560();
        }
        return class_12972;
    }

    private ov cHr() {
        ov ov2;
        block8: {
            block9: {
                String string;
                block7: {
                    ov ov3;
                    block6: {
                        long l = yqpEX ^ 0x3071756B5086L;
                        string = ox.cHz();
                        try {
                            try {
                                ov3 = this.HJoUm;
                                if (string != null) break block6;
                                if (ov3 == null) break block7;
                            }
                            catch (MatchException matchException) {
                                throw ox.cHA(matchException);
                            }
                            ov3 = this.HJoUm;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                    }
                    return ov3;
                }
                qL qL2 = rD.dlX();
                ov ov4 = qL2.dbX();
                try {
                    ov2 = ov4;
                    if (string != null) break block8;
                    if (ov2 == null) break block9;
                }
                catch (MatchException matchException) {
                    throw ox.cHA(matchException);
                }
                ov2 = ov4;
                break block8;
            }
            ov2 = ov.cGA();
        }
        return ov2;
    }

    public static void cHy(String string) {
        cUAGt = string;
    }

    public class_3966 cHo() {
        class_3966 class_39662;
        class_3966 class_39663;
        long l = yqpEX ^ 0x69F1E44B535CL;
        Predicate<class_1297> predicate = this.MgANl;
        String string = ox.cHz();
        this.MgANl = predicate.and(class_12972 -> {
            boolean bl;
            block8: {
                block7: {
                    class_1297 class_12973;
                    String string;
                    block6: {
                        long l = yqpEX ^ 0x61F775EF2495L;
                        string = ox.cHz();
                        try {
                            try {
                                class_12973 = class_12972;
                                if (string != null) break block6;
                                if (!(class_12973 instanceof class_1309)) break block7;
                            }
                            catch (MatchException matchException) {
                                throw ox.cHA(matchException);
                            }
                            class_12973 = class_12972;
                        }
                        catch (MatchException matchException) {
                            throw ox.cHA(matchException);
                        }
                    }
                    class_1309 class_13092 = (class_1309)class_12973;
                    try {
                        bl = this.XaSyX.test(class_13092);
                        if (string != null) break block8;
                        if (!bl) break block7;
                    }
                    catch (MatchException matchException) {
                        throw ox.cHA(matchException);
                    }
                    bl = true;
                    break block8;
                }
                bl = false;
            }
            return bl;
        });
        try {
            class_39663 = this.cHn();
        }
        catch (Throwable throwable) {
            this.MgANl = predicate;
            throw throwable;
        }
        try {
            this.MgANl = predicate;
            class_39662 = class_39663;
            if (iS.bwL() == null) {
                ox.cHy("Y5lZic");
            }
        }
        catch (MatchException matchException) {
            throw ox.cHA(matchException);
        }
        return class_39662;
    }
}
