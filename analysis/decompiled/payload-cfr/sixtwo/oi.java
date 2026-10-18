/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1657
 *  net.minecraft.class_1747
 *  net.minecraft.class_1792
 *  net.minecraft.class_1799
 *  net.minecraft.class_1802
 *  net.minecraft.class_2246
 *  net.minecraft.class_2248
 *  net.minecraft.class_2338
 *  net.minecraft.class_2350
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 *  net.minecraft.class_2680
 *  net.minecraft.class_4538
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.function.BiPredicate;
import java.util.function.Predicate;
import net.minecraft.class_1657;
import net.minecraft.class_1747;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import net.minecraft.class_1802;
import net.minecraft.class_2246;
import net.minecraft.class_2248;
import net.minecraft.class_2338;
import net.minecraft.class_2350;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_2680;
import net.minecraft.class_4538;
import sixtwo.gb;
import sixtwo.oA;
import sixtwo.oD;
import sixtwo.oI;
import sixtwo.oP;
import sixtwo.of;
import sixtwo.oi$vg;
import sixtwo.oz;
import sixtwo.rD;

public class oi {
    private final Predicate<class_1799> IipTX;
    private final List<class_2338> qHRqo;
    private oi$vg QPXAM;
    private boolean fiwOr;
    private static final long DYnxh = gb.aYR(-4509888282340237097L, 1499279391141828958L, MethodHandles.lookup().lookupClass()).a(164779899776753L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public oi() {
        this(oi::cDZ);
    }

    public oi(Predicate<class_1799> predicate) {
        Predicate<class_1799> predicate2;
        block2: {
            block3: {
                long l = DYnxh ^ 0x480DDFBAD4AFL;
                String[] stringArray = of.cCL();
                this.qHRqo = new ArrayList<class_2338>();
                String[] stringArray2 = stringArray;
                try {
                    oi oi2 = this;
                    predicate2 = predicate;
                    if (stringArray2 == null) break block2;
                    if (predicate2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                predicate2 = oi::cDZ;
                break block2;
            }
            predicate2 = predicate;
        }
        oi2.IipTX = predicate2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private class_2338 cDQ(class_243 class_2432, class_1657 class_16572) {
        int n;
        int n2;
        int n3;
        block4: {
            long l = DYnxh ^ 0x785968843DB1L;
            class_243 class_2433 = class_16572.method_73189();
            n3 = this.cDR(class_2432.field_1352 - class_2433.field_1352);
            n2 = this.cDR(class_2432.field_1350 - class_2433.field_1350);
            String[] stringArray = of.cCL();
            try {
                n = n3;
                if (stringArray == null) break block4;
                if (n == 0) return null;
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
            n = n2;
        }
        try {
            if (n != 0) return new class_2338(n3, 0, n2);
            return null;
        }
        catch (MatchException matchException) {
            throw oi.cEq(matchException);
        }
    }

    public static boolean cDZ(class_1799 class_17992) {
        return oi.cEa(class_17992.method_7909());
    }

    public boolean cDJ() {
        boolean bl;
        long l = DYnxh ^ 0x6AA28DED1A27L;
        try {
            bl = this.QPXAM != null;
        }
        catch (MatchException matchException) {
            throw oi.cEq(matchException);
        }
        return bl;
    }

    public oi$vg cDG(class_243 class_2432, class_1657 class_16572, Predicate<class_2338> predicate) {
        BiPredicate<class_2338, class_1792> biPredicate;
        class_1657 class_16573;
        class_243 class_2433;
        oi oi2;
        block6: {
            Predicate<class_2338> predicate2;
            block4: {
                block5: {
                    long l = DYnxh ^ 0x570FF83D206FL;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oi2 = this;
                            class_2433 = class_2432;
                            class_16573 = class_16572;
                            predicate2 = predicate;
                            if (stringArray == null) break block4;
                            if (predicate2 != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        biPredicate = null;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                predicate2 = predicate;
            }
            biPredicate = (class_23382, class_17922) -> predicate2.test((class_2338)class_23382);
        }
        return oi2.cDH(class_2433, class_16573, biPredicate);
    }

    public void cDD(class_243 class_2432, class_1657 class_16572, Predicate<class_2338> predicate) {
        this.QPXAM = this.cDG(class_2432, class_16572, predicate);
    }

    public class_2338 cDL() {
        class_2338 class_23382;
        block6: {
            oi$vg oi$vg;
            block4: {
                block5: {
                    long l = DYnxh ^ 0x341C9556B686L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oi$vg = this.QPXAM;
                            if (stringArray == null) break block4;
                            if (oi$vg != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        class_23382 = class_2338.field_10980;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                oi$vg = this.QPXAM;
            }
            class_23382 = oi$vg.blockPos();
        }
        return class_23382;
    }

    private class_2350 cDP(class_243 class_2432, class_1657 class_16572) {
        class_2350 class_23502;
        block11: {
            double d;
            block8: {
                double d2;
                block9: {
                    block10: {
                        long l = DYnxh ^ 0x700EE23A00DDL;
                        class_243 class_2433 = class_16572.method_73189();
                        String[] stringArray = of.cCL();
                        double d3 = class_2432.field_1352 - class_2433.field_1352;
                        d2 = class_2432.field_1350 - class_2433.field_1350;
                        try {
                            try {
                                try {
                                    double d4 = Math.abs(d3) - Math.abs(d2);
                                    d = d4 == 0.0 ? 0 : (d4 > 0.0 ? 1 : -1);
                                    if (stringArray == null) break block8;
                                    if (d <= 0) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw oi.cEq(matchException);
                                }
                                if (!(d3 > 0.0)) break block10;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                            class_23502 = class_2350.field_11034;
                            break block11;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                    }
                    class_23502 = class_2350.field_11039;
                    break block11;
                }
                double d5 = d2 - 0.0;
                d = d5 == 0.0 ? 0 : (d5 > 0.0 ? 1 : -1);
            }
            try {
                class_23502 = d > 0 ? class_2350.field_11035 : class_2350.field_11043;
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
        }
        return class_23502;
    }

    public class_243 cDM() {
        class_243 class_2432;
        block6: {
            oi$vg oi$vg;
            block4: {
                block5: {
                    long l = DYnxh ^ 0x5C6D0C40B1CDL;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oi$vg = this.QPXAM;
                            if (stringArray == null) break block4;
                            if (oi$vg != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        class_2432 = class_243.field_1353;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                oi$vg = this.QPXAM;
            }
            class_2432 = oi$vg.placeResult().hitPoint();
        }
        return class_2432;
    }

    public void cDA() {
        this.qHRqo.clear();
    }

    private class_1792 cDY(class_1657 class_16572) {
        class_1792 class_17922;
        block15: {
            oI oI2;
            block13: {
                oI oI3;
                block14: {
                    boolean bl;
                    String[] stringArray;
                    block11: {
                        block12: {
                            long l = DYnxh ^ 0x2C4FC7A0FF6BL;
                            stringArray = of.cCL();
                            try {
                                try {
                                    bl = this.IipTX.test(class_16572.method_6079());
                                    if (stringArray == null) break block11;
                                    if (!bl) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw oi.cEq(matchException);
                                }
                                return class_16572.method_6079().method_7909();
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                        }
                        bl = this.IipTX.test(class_16572.method_6047());
                    }
                    try {
                        if (bl) {
                            return class_16572.method_6047().method_7909();
                        }
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    oI3 = oP.cJm().cJx(this.IipTX, class_17992 -> -oi.cEb(class_17992.method_7909()));
                    try {
                        try {
                            oI2 = oI3;
                            if (stringArray == null) break block13;
                            if (oI2 != null) break block14;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        class_17922 = null;
                        break block15;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                oI2 = oI3;
            }
            class_17922 = oI2.cIu().method_7909();
        }
        return class_17922;
    }

    private List<class_2338> cDO(class_243 class_2432, class_1657 class_16572) {
        List<class_2338> list;
        block15: {
            ArrayList<class_2338> arrayList;
            block13: {
                class_2338 class_23383;
                oi oi2;
                class_2338 class_23384;
                String[] stringArray;
                block14: {
                    long l = DYnxh ^ 0x2C274AF07F23L;
                    arrayList = new ArrayList<class_2338>();
                    class_2350 class_23502 = this.cDP(class_2432, class_16572);
                    stringArray = of.cCL();
                    class_23384 = class_16572.method_24515();
                    for (int i = 1; i <= 3; ++i) {
                        class_2338 class_23385 = class_23384.method_10079(class_23502, i);
                        try {
                            arrayList.add(class_23385.method_10084());
                            arrayList.add(class_23385);
                            if (stringArray != null) {
                                if (stringArray != null) continue;
                                break;
                            }
                            break block13;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                    }
                    try {
                        try {
                            oi2 = this;
                            if (stringArray == null) break block14;
                            if (!oi2.fiwOr) break block13;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        oi2 = this;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                if ((class_23383 = oi2.cDQ(class_2432, class_16572)) != null) {
                    for (int i = 1; i <= 3; ++i) {
                        class_2338 class_23386 = class_23384.method_10069(class_23383.method_10263() * i, 0, class_23383.method_10260() * i);
                        try {
                            arrayList.add(class_23386.method_10084());
                            list = arrayList;
                            if (stringArray != null) {
                                list.add(class_23386);
                                if (stringArray != null) continue;
                                break;
                            }
                            break block15;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                    }
                }
            }
            list = arrayList.stream().distinct().filter(class_23382 -> {
                boolean bl;
                block2: {
                    block3: {
                        long l = DYnxh ^ 0x5C0BD45AFEFAL;
                        String[] stringArray = of.cCL();
                        try {
                            bl = this.qHRqo.contains(class_23382);
                            if (stringArray == null) break block2;
                            if (bl) break block3;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        bl = true;
                        break block2;
                    }
                    bl = false;
                }
                return bl;
            }).filter(class_23382 -> {
                boolean bl;
                block2: {
                    block3: {
                        long l = DYnxh ^ 0x1B3B60F11587L;
                        String[] stringArray = of.cCL();
                        try {
                            bl = new class_238(class_23382).method_994(class_16572.method_5829());
                            if (stringArray == null) break block2;
                            if (bl) break block3;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        bl = true;
                        break block2;
                    }
                    bl = false;
                }
                return bl;
            }).toList();
        }
        return list;
    }

    public void cDB(class_243 class_2432) {
        this.cDC(class_2432, (class_1657)rD.dlmvG.field_1724);
    }

    public oi$vg cDF(class_243 class_2432, class_1657 class_16572) {
        return this.cDH(class_2432, class_16572, null);
    }

    public oz cDK() {
        oz oz2;
        block6: {
            oi$vg oi$vg;
            block4: {
                block5: {
                    long l = DYnxh ^ 0x4499BBC7E807L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oi$vg = this.QPXAM;
                            if (stringArray == null) break block4;
                            if (oi$vg != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        oz2 = null;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                oi$vg = this.QPXAM;
            }
            oz2 = oi$vg.placeResult();
        }
        return oz2;
    }

    private boolean cDU(List<class_2338> list, class_243 class_2432, class_1657 class_16572) {
        return list.stream().filter(this::cDV).anyMatch(class_23382 -> {
            double d;
            block2: {
                block3: {
                    long l = DYnxh ^ 0x58541C0C2A4FL;
                    String[] stringArray = of.cCL();
                    try {
                        double d2 = this.cDW((class_2338)class_23382, class_2432, class_16572) - 0.0;
                        d = d2 == 0.0 ? 0 : (d2 > 0.0 ? 1 : -1);
                        if (stringArray == null) break block2;
                        if (d <= 0) break block3;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    d = 1.0;
                    break block2;
                }
                d = 0.0;
            }
            return (boolean)d;
        });
    }

    public void cDC(class_243 class_2432, class_1657 class_16572) {
        this.QPXAM = this.cDF(class_2432, class_16572);
    }

    public oi$vg cDH(class_243 class_2432, class_1657 class_16572, BiPredicate<class_2338, class_1792> biPredicate) {
        BiPredicate<class_2338, class_1792> biPredicate2;
        class_1792 class_17923;
        List<class_2338> list;
        block19: {
            block20: {
                oi oi2;
                String[] stringArray;
                block17: {
                    block18: {
                        block16: {
                            long l = DYnxh ^ 0x297197C36805L;
                            stringArray = of.cCL();
                            try {
                                block15: {
                                    try {
                                        try {
                                            if (class_2432 == null || class_16572 == null) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw oi.cEq(matchException);
                                        }
                                        if (rD.dlmvG.field_1687 != null) break block16;
                                    }
                                    catch (MatchException matchException) {
                                        throw oi.cEq(matchException);
                                    }
                                }
                                return null;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                        }
                        list = this.cDO(class_2432, class_16572);
                        try {
                            try {
                                oi2 = this;
                                if (stringArray == null) break block17;
                                if (!oi2.cDU(list, class_2432, class_16572)) break block18;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                            return null;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                    }
                    oi2 = this;
                }
                class_17923 = oi2.cDY(class_16572);
                try {
                    if (class_17923 == null) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                try {
                    biPredicate2 = biPredicate;
                    if (stringArray == null) break block19;
                    if (biPredicate2 != null) break block20;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                biPredicate2 = (class_23382, class_17922) -> true;
                break block19;
            }
            biPredicate2 = biPredicate;
        }
        BiPredicate<class_2338, class_1792> biPredicate3 = biPredicate2;
        return list.stream().filter(class_23382 -> biPredicate3.test((class_2338)class_23382, class_17923)).filter(class_23382 -> this.cDS((class_2338)class_23382, class_17923)).map(class_23382 -> {
            oi$vg oi$vg;
            long l = DYnxh ^ 0x33EE22855CA6L;
            oz oz2 = oA.cHD(class_23382, oD.pxPhl, false, class_26802 -> this.cDT((class_2338)class_23382, (class_2680)class_26802, class_17923)).cHL();
            try {
                oi$vg = oz2 == null ? null : new oi$vg((class_2338)class_23382, oz2, class_17923);
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
            return oi$vg;
        }).filter(oi$vg -> {
            int n;
            block5: {
                block4: {
                    long l = DYnxh ^ 0x2EC4C4DDD40FL;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            if (oi$vg == null) break block4;
                            double d = this.cDW(oi$vg.blockPos(), class_2432, class_16572) - 0.0;
                            n = d == 0.0 ? 0 : (d > 0.0 ? 1 : -1);
                            if (stringArray == null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        if (n <= 0) break block4;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    n = 1;
                    break block5;
                }
                n = 0;
            }
            return n != 0;
        }).max(Comparator.comparingDouble(oi$vg -> this.cDW(oi$vg.blockPos(), class_2432, class_16572))).orElse(null);
    }

    public class_1792 cDN() {
        class_1792 class_17922;
        block6: {
            oi$vg oi$vg;
            block4: {
                block5: {
                    long l = DYnxh ^ 0x34F47616B79L;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            oi$vg = this.QPXAM;
                            if (stringArray == null) break block4;
                            if (oi$vg != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        class_17922 = class_1802.field_8162;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                oi$vg = this.QPXAM;
            }
            class_17922 = oi$vg.item();
        }
        return class_17922;
    }

    public oi cDy(class_2338 class_23382) {
        oi oi2;
        block7: {
            block6: {
                long l = DYnxh ^ 0x532D5AB5A7E1L;
                String[] stringArray = of.cCL();
                try {
                    try {
                        try {
                            if (class_23382 == null) break block6;
                            oi2 = this;
                            if (stringArray == null) break block7;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        if (oi2.qHRqo.contains(class_23382)) break block6;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    this.qHRqo.add(class_23382);
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
            }
            oi2 = this;
        }
        return oi2;
    }

    public void cDE(class_243 class_2432, class_1657 class_16572, BiPredicate<class_2338, class_1792> biPredicate) {
        this.QPXAM = this.cDH(class_2432, class_16572, biPredicate);
    }

    public void cDI() {
        this.QPXAM = null;
    }

    public oi cDz(Collection<class_2338> collection) {
        block3: {
            Collection<class_2338> collection2;
            block2: {
                long l = DYnxh ^ 0x42CD40BB24AL;
                String[] stringArray = of.cCL();
                try {
                    collection2 = collection;
                    if (stringArray == null) break block2;
                    if (collection2 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                collection2 = collection;
            }
            collection2.stream().filter(class_23382 -> {
                boolean bl;
                block5: {
                    block4: {
                        long l = DYnxh ^ 0x2F731CD21ED8L;
                        String[] stringArray = of.cCL();
                        try {
                            try {
                                if (class_23382 == null) break block4;
                                bl = this.qHRqo.contains(class_23382);
                                if (stringArray == null) break block5;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                            if (bl) break block4;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        bl = true;
                        break block5;
                    }
                    bl = false;
                }
                return bl;
            }).forEach(this.qHRqo::add);
        }
        return this;
    }

    private int cDR(double d) {
        double d2;
        block8: {
            block9: {
                String[] stringArray;
                block6: {
                    block7: {
                        long l = DYnxh ^ 0x1A1CDC919931L;
                        stringArray = of.cCL();
                        try {
                            try {
                                double d3 = d - 0.0;
                                d2 = d3 == 0.0 ? 0 : (d3 > 0.0 ? 1 : -1);
                                if (stringArray == null) break block6;
                                if (d2 <= 0) break block7;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                            return 1;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                    }
                    double d4 = d - 0.0;
                    d2 = d4 == 0.0 ? 0 : (d4 < 0.0 ? -1 : 1);
                }
                try {
                    if (stringArray == null) break block8;
                    if (d2 >= 0) break block9;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                d2 = -1;
                break block8;
            }
            d2 = 0.0;
        }
        return (int)d2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean cDT(class_2338 class_23382, class_2680 class_26802, class_1792 class_17922) {
        boolean bl;
        String[] stringArray;
        block15: {
            long l = DYnxh ^ 0x6FC8DBB5D30CL;
            stringArray = of.cCL();
            try {
                boolean bl2;
                try {
                    try {
                        bl2 = class_26802.method_45474();
                        if (stringArray == null) return bl2;
                        if (!bl2) return false;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    bl2 = class_17922 instanceof class_1747;
                    if (stringArray == null) return bl2;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                if (!bl2) return false;
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
            class_1747 class_17472 = (class_1747)class_17922;
            try {
                if (stringArray == null) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
            class_2680 class_26803 = class_17472.method_7711().method_9564();
            try {
                try {
                    bl = class_26803.method_51367();
                    if (stringArray == null) break block15;
                    if (!bl) return false;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                bl = class_26803.method_26184((class_4538)rD.dlmvG.field_1687, class_23382);
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
        }
        try {
            if (stringArray == null) return bl;
            if (!bl) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw oi.cEq(matchException);
        }
    }

    private double cDW(class_2338 class_23382, class_243 class_2432, class_1657 class_16572) {
        class_243 class_2433;
        int n;
        block4: {
            long l = DYnxh ^ 0x60CB733E973EL;
            class_238 class_2382 = new class_238(class_23382);
            class_238 class_2383 = class_16572.method_5829();
            n = 0;
            Iterator<class_243> iterator = this.cDX(class_2383).iterator();
            String[] stringArray = of.cCL();
            while (iterator.hasNext()) {
                class_2433 = iterator.next();
                if (stringArray == null) break block4;
                class_243 class_2434 = class_2433;
                try {
                    if (class_2382.method_992(class_2432, class_2434).isPresent()) {
                        ++n;
                    }
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                if (stringArray != null) continue;
            }
            class_2433 = class_23382.method_46558();
        }
        double d = class_2433.method_1025(class_16572.method_33571()) * 0.001;
        return (double)n - d;
    }

    private List<class_243> cDX(class_238 class_2382) {
        long l = DYnxh ^ 0x75B7F548ED8L;
        ArrayList<class_243> arrayList = new ArrayList<class_243>();
        double[] dArray = new double[]{class_2382.field_1323, (class_2382.field_1323 + class_2382.field_1320) * 0.5, class_2382.field_1320};
        double[] dArray2 = new double[]{class_2382.field_1322, (class_2382.field_1322 + class_2382.field_1325) * 0.5, class_2382.field_1325};
        double[] dArray3 = new double[]{class_2382.field_1321, (class_2382.field_1321 + class_2382.field_1324) * 0.5, class_2382.field_1324};
        double[] dArray4 = dArray;
        String[] stringArray = of.cCL();
        int n = dArray4.length;
        int n2 = 0;
        block2: while (true) {
            int n3 = n2;
            block3: while (n3 < n) {
                double d = dArray4[n2];
                double[] dArray5 = dArray2;
                int n4 = dArray5.length;
                int n5 = 0;
                while (n5 < n4) {
                    block7: {
                        double d2 = dArray5[n5];
                        double[] dArray6 = dArray3;
                        int n6 = dArray6.length;
                        n3 = 0;
                        if (stringArray == null) continue block3;
                        for (int i = v1037; i < n6; ++i) {
                            double d3 = dArray6[i];
                            try {
                                arrayList.add(new class_243(d, d2, d3));
                                if (stringArray != null) {
                                    if (stringArray != null) continue;
                                    break;
                                }
                                break block7;
                            }
                            catch (MatchException matchException) {
                                throw oi.cEq(matchException);
                            }
                        }
                        ++n5;
                    }
                    if (stringArray != null) continue;
                }
                ++n2;
                if (stringArray != null) continue block2;
            }
            break;
        }
        return arrayList;
    }

    private static MatchException cEq(MatchException matchException) {
        return matchException;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static boolean cEa(class_1792 class_17922) {
        int n;
        String[] stringArray;
        block23: {
            class_2248 class_22482;
            class_2248 class_22483;
            block22: {
                class_1792 class_17923;
                class_1792 class_17924;
                block21: {
                    long l = DYnxh ^ 0x1FA71AD3E306L;
                    stringArray = of.cCL();
                    try {
                        boolean bl = class_17922 instanceof class_1747;
                        if (stringArray == null) return bl;
                        if (!bl) return false;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    class_1747 class_17472 = (class_1747)class_17922;
                    try {
                        if (stringArray == null) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    class_22483 = class_17472.method_7711();
                    try {
                        try {
                            class_1792 class_17923 = class_17922;
                            class_17923 = class_1802.field_8129;
                            if (stringArray == null) break block21;
                            if (class_17924 == class_17923) return 0 != 0;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        class_1792 class_17923 = class_17922;
                        class_17923 = class_1802.field_8069;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                try {
                    try {
                        try {
                            if (class_17924 == class_17923) return 0 != 0;
                            class_22482 = class_22483;
                            if (stringArray == null) break block22;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        if (class_22482 == class_2246.field_10375) return 0 != 0;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                    class_22482 = class_22483;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
            }
            try {
                try {
                    n = class_22482.method_9564().method_51367();
                    if (stringArray == null) break block23;
                    if (n == 0) return 0 != 0;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                float f = class_22483.method_9520() - 0.0f;
                n = f == 0.0f ? 0 : (f > 0.0f ? 1 : -1);
            }
            catch (MatchException matchException) {
                throw oi.cEq(matchException);
            }
        }
        try {
            if (stringArray == null) return n != 0;
            if (n <= 0) return 0 != 0;
            return 1 != 0;
        }
        catch (MatchException matchException) {
            throw oi.cEq(matchException);
        }
    }

    public static float cEb(class_1792 class_17922) {
        float f;
        block6: {
            block5: {
                class_1792 class_17923;
                block4: {
                    long l = DYnxh ^ 0x17A353DC8D0BL;
                    String[] stringArray = of.cCL();
                    try {
                        try {
                            class_17923 = class_17922;
                            if (stringArray == null) break block4;
                            if (!(class_17923 instanceof class_1747)) break block5;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        class_17923 = class_17922;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                class_1747 class_17472 = (class_1747)class_17923;
                f = class_17472.method_7711().method_9520();
                break block6;
            }
            f = 0.0f;
        }
        return f;
    }

    private boolean cDV(class_2338 class_23382) {
        int n;
        block20: {
            block19: {
                class_2248 class_22482;
                String[] stringArray;
                block18: {
                    class_2680 class_26802;
                    block16: {
                        class_2680 class_26803;
                        block17: {
                            boolean bl;
                            block14: {
                                long l = DYnxh ^ 0x39813362C114L;
                                class_26803 = rD.dlmvG.field_1687.method_8320(class_23382);
                                stringArray = of.cCL();
                                try {
                                    block15: {
                                        try {
                                            try {
                                                try {
                                                    bl = class_26803.method_45474();
                                                    if (stringArray == null) break block14;
                                                    if (bl) break block15;
                                                }
                                                catch (MatchException matchException) {
                                                    throw oi.cEq(matchException);
                                                }
                                                class_26802 = class_26803;
                                                if (stringArray == null) break block16;
                                            }
                                            catch (MatchException matchException) {
                                                throw oi.cEq(matchException);
                                            }
                                            if (class_26802.method_51367()) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw oi.cEq(matchException);
                                        }
                                    }
                                    bl = false;
                                }
                                catch (MatchException matchException) {
                                    throw oi.cEq(matchException);
                                }
                            }
                            return bl;
                        }
                        class_26802 = class_26803;
                    }
                    class_2248 class_22483 = class_26802.method_26204();
                    try {
                        try {
                            class_22482 = class_22483;
                            if (stringArray == null) break block18;
                            if (class_22482 == class_2246.field_10375) break block19;
                        }
                        catch (MatchException matchException) {
                            throw oi.cEq(matchException);
                        }
                        class_22482 = class_22483;
                    }
                    catch (MatchException matchException) {
                        throw oi.cEq(matchException);
                    }
                }
                try {
                    float f = class_22482.method_9520() - 0.0f;
                    n = f == 0.0f ? 0 : (f > 0.0f ? 1 : -1);
                    if (stringArray == null) break block20;
                    if (n <= 0) break block19;
                }
                catch (MatchException matchException) {
                    throw oi.cEq(matchException);
                }
                n = 1;
                break block20;
            }
            n = 0;
        }
        return n != 0;
    }

    public oi cDx(boolean bl) {
        this.fiwOr = bl;
        return this;
    }

    private boolean cDS(class_2338 class_23382, class_1792 class_17922) {
        return this.cDT(class_23382, rD.dlmvG.field_1687.method_8320(class_23382), class_17922);
    }

    public oi$vg cEc() {
        return this.QPXAM;
    }
}
