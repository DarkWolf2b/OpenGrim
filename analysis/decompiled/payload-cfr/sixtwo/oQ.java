/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1792
 *  net.minecraft.class_1799
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;
import java.util.function.Predicate;
import java.util.function.ToDoubleFunction;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.oK;

public class oQ<T extends oK> {
    protected final List<T> AOxby;
    private static String[] LjINO;
    private static final long dTuwN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public T cJu(class_1792 class_17922) {
        long l = dTuwN ^ 0x51EC3FF1D50DL;
        Iterator<T> iterator = this.AOxby.iterator();
        String[] stringArray = oQ.cJI();
        while (iterator.hasNext()) {
            block6: {
                oK oK2;
                block5: {
                    oK oK3 = (oK)iterator.next();
                    try {
                        try {
                            oK2 = oK3;
                            if (stringArray == null) break block5;
                            if (!oK2.cIU(class_17922)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw oQ.cJJ(matchException);
                        }
                        oK2 = oK3;
                    }
                    catch (MatchException matchException) {
                        throw oQ.cJJ(matchException);
                    }
                }
                return (T)oK2;
            }
            if (stringArray != null) continue;
        }
        return null;
    }

    public oQ(List<T> list) {
        this.AOxby = list;
    }

    static {
        dTuwN = gb.aYR(-305250295011513895L, -4162370041205828697L, MethodHandles.lookup().lookupClass()).a(122341747616617L);
        if (oQ.cJI() == null) {
            oQ.cJH(new String[4]);
        }
    }

    public T cJx(Predicate<class_1799> predicate, ToDoubleFunction<class_1799> toDoubleFunction) {
        oK oK2;
        block11: {
            long l = dTuwN ^ 0x4DB22DF6C093L;
            oK oK3 = null;
            double d = Double.POSITIVE_INFINITY;
            String[] stringArray = oQ.cJI();
            Iterator<T> iterator = this.AOxby.iterator();
            while (iterator.hasNext()) {
                block12: {
                    double d2;
                    oK oK4;
                    oK oK5;
                    block14: {
                        oK2 = oK5 = (oK)iterator.next();
                        if (stringArray == null) break block11;
                        class_1799 class_17992 = oK2.cIu();
                        try {
                            if (!predicate.test(class_17992) && stringArray != null) continue;
                        }
                        catch (MatchException matchException) {
                            throw oQ.cJJ(matchException);
                        }
                        double d3 = toDoubleFunction.applyAsDouble(class_17992);
                        try {
                            block13: {
                                try {
                                    try {
                                        try {
                                            oK4 = oK3;
                                            if (stringArray == null) break block12;
                                            if (oK4 == null) break block13;
                                        }
                                        catch (MatchException matchException) {
                                            throw oQ.cJJ(matchException);
                                        }
                                        d2 = d3;
                                        if (stringArray == null) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw oQ.cJJ(matchException);
                                    }
                                    if (!(d2 < d)) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw oQ.cJJ(matchException);
                                }
                            }
                            d2 = d3;
                        }
                        catch (MatchException matchException) {
                            throw oQ.cJJ(matchException);
                        }
                    }
                    d = d2;
                    oK4 = oK3 = oK5;
                }
                if (stringArray != null) continue;
            }
            oK2 = oK3;
        }
        return (T)oK2;
    }

    public List<class_1799> cJE() {
        ArrayList<class_1799> arrayList;
        block7: {
            long l = dTuwN ^ 0x638A1C86575FL;
            ArrayList<class_1799> arrayList2 = new ArrayList<class_1799>(this.AOxby.size());
            Iterator<T> iterator = this.AOxby.iterator();
            String[] stringArray = oQ.cJI();
            while (iterator.hasNext()) {
                oK oK2 = (oK)iterator.next();
                try {
                    arrayList = arrayList2;
                    if (stringArray != null) {
                        arrayList.add(oK2.cIu());
                        if (stringArray != null) continue;
                        break;
                    }
                    break block7;
                }
                catch (MatchException matchException) {
                    throw oQ.cJJ(matchException);
                }
            }
            arrayList = arrayList2;
        }
        try {
            if (iS.bwL() == null) {
                oQ.cJH(new String[3]);
            }
        }
        catch (MatchException matchException) {
            throw oQ.cJJ(matchException);
        }
        return arrayList;
    }

    public oQ<oK> cJF(oQ<? extends oK> oQ2) {
        oQ<oK> oQ3;
        long l = dTuwN ^ 0x41E26505606EL;
        String[] stringArray = oQ.cJI();
        ArrayList<T> arrayList = new ArrayList<T>(this.AOxby.size() + oQ2.AOxby.size());
        arrayList.addAll(this.AOxby);
        String[] stringArray2 = stringArray;
        try {
            arrayList.addAll(oQ2.AOxby);
            oQ3 = new oQ<oK>(arrayList);
            if (stringArray2 == null) {
                iS.bwK("GJxwec");
            }
        }
        catch (MatchException matchException) {
            throw oQ.cJJ(matchException);
        }
        return oQ3;
    }

    public static void cJH(String[] stringArray) {
        LjINO = stringArray;
    }

    public T cJw(ToDoubleFunction<class_1799> toDoubleFunction) {
        T t;
        block11: {
            long l = dTuwN ^ 0x3834323404C7L;
            T t2 = null;
            double d = Double.POSITIVE_INFINITY;
            String[] stringArray = oQ.cJI();
            for (oK oK2 : this.AOxby) {
                block12: {
                    double d2;
                    block14: {
                        class_1799 class_17992 = oK2.cIu();
                        double d3 = toDoubleFunction.applyAsDouble(class_17992);
                        try {
                            block13: {
                                try {
                                    try {
                                        try {
                                            try {
                                                t = t2;
                                                if (stringArray == null) break block11;
                                                if (stringArray == null) break block12;
                                            }
                                            catch (MatchException matchException) {
                                                throw oQ.cJJ(matchException);
                                            }
                                            if (t == null) break block13;
                                        }
                                        catch (MatchException matchException) {
                                            throw oQ.cJJ(matchException);
                                        }
                                        d2 = d3;
                                        if (stringArray == null) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw oQ.cJJ(matchException);
                                    }
                                    if (!(d2 < d)) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw oQ.cJJ(matchException);
                                }
                            }
                            d2 = d3;
                        }
                        catch (MatchException matchException) {
                            throw oQ.cJJ(matchException);
                        }
                    }
                    d = d2;
                    oK oK3 = t2 = oK2;
                }
                if (stringArray != null) continue;
            }
            t = t2;
        }
        return t;
    }

    public static String[] cJI() {
        return LjINO;
    }

    public boolean cJC(Predicate<class_1799> predicate) {
        boolean bl;
        block5: {
            long l = dTuwN ^ 0x41DFAF64AF3BL;
            Iterator<T> iterator = this.AOxby.iterator();
            String[] stringArray = oQ.cJI();
            while (iterator.hasNext()) {
                block7: {
                    boolean bl2;
                    block6: {
                        oK oK2 = (oK)iterator.next();
                        try {
                            try {
                                bl = oK2.cIV(predicate);
                                if (stringArray == null) break block5;
                                if (stringArray == null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw oQ.cJJ(matchException);
                            }
                            if (!bl) break block7;
                        }
                        catch (MatchException matchException) {
                            throw oQ.cJJ(matchException);
                        }
                        bl2 = true;
                    }
                    return bl2;
                }
                if (stringArray != null) continue;
            }
            bl = false;
        }
        return bl;
    }

    public int cJD(class_1792 class_17922) {
        int n;
        block7: {
            long l = dTuwN ^ 0x664043C4DC53L;
            int n2 = 0;
            String[] stringArray = oQ.cJI();
            for (oK oK2 : this.AOxby) {
                block9: {
                    int n3;
                    block8: {
                        try {
                            try {
                                try {
                                    n = oK2.cIU(class_17922) ? 1 : 0;
                                    if (stringArray == null) break block7;
                                    if (stringArray == null) break block8;
                                }
                                catch (MatchException matchException) {
                                    throw oQ.cJJ(matchException);
                                }
                                if (n == 0) break block9;
                            }
                            catch (MatchException matchException) {
                                throw oQ.cJJ(matchException);
                            }
                            n3 = n2 + oK2.cIu().method_7947();
                        }
                        catch (MatchException matchException) {
                            throw oQ.cJJ(matchException);
                        }
                    }
                    n2 = n3;
                }
                if (stringArray != null) continue;
            }
            n = n2;
        }
        return n;
    }

    public oQ<oK> cJG(oK oK2) {
        ArrayList<T> arrayList = new ArrayList<T>(this.AOxby);
        arrayList.add(oK2);
        return new oQ<oK>(arrayList);
    }

    public List<T> cJz(Predicate<class_1799> predicate) {
        long l = dTuwN ^ 0x4D60C3574B76L;
        ArrayList<oK> arrayList = new ArrayList<oK>();
        Iterator<T> iterator = this.AOxby.iterator();
        String[] stringArray = oQ.cJI();
        while (iterator.hasNext()) {
            block5: {
                oK oK2 = (oK)iterator.next();
                try {
                    boolean bl;
                    try {
                        bl = oK2.cIV(predicate);
                        if (stringArray == null || !bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oQ.cJJ(matchException);
                    }
                    bl = arrayList.add(oK2);
                }
                catch (MatchException matchException) {
                    throw oQ.cJJ(matchException);
                }
            }
            if (stringArray != null) continue;
        }
        return arrayList;
    }

    private static MatchException cJJ(MatchException matchException) {
        return matchException;
    }

    public boolean cJB(class_1792 class_17922) {
        boolean bl;
        block5: {
            long l = dTuwN ^ 0x2F9AB73B840AL;
            Iterator<T> iterator = this.AOxby.iterator();
            String[] stringArray = oQ.cJI();
            while (iterator.hasNext()) {
                block7: {
                    boolean bl2;
                    block6: {
                        oK oK2 = (oK)iterator.next();
                        try {
                            try {
                                bl = oK2.cIU(class_17922);
                                if (stringArray == null) break block5;
                                if (stringArray == null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw oQ.cJJ(matchException);
                            }
                            if (!bl) break block7;
                        }
                        catch (MatchException matchException) {
                            throw oQ.cJJ(matchException);
                        }
                        bl2 = true;
                    }
                    return bl2;
                }
                if (stringArray != null) continue;
            }
            bl = false;
        }
        return bl;
    }

    public T cJA() {
        long l = dTuwN ^ 0x3CB0F28E6B9AL;
        Iterator<T> iterator = this.AOxby.iterator();
        String[] stringArray = oQ.cJI();
        while (iterator.hasNext()) {
            block6: {
                oK oK2;
                block5: {
                    oK oK3 = (oK)iterator.next();
                    try {
                        try {
                            oK2 = oK3;
                            if (stringArray == null) break block5;
                            if (!oK2.cIT()) break block6;
                        }
                        catch (MatchException matchException) {
                            throw oQ.cJJ(matchException);
                        }
                        oK2 = oK3;
                    }
                    catch (MatchException matchException) {
                        throw oQ.cJJ(matchException);
                    }
                }
                return (T)oK2;
            }
            if (stringArray != null) continue;
        }
        return null;
    }

    public T cJv(Predicate<class_1799> predicate) {
        long l = dTuwN ^ 0x55FE7000A074L;
        Iterator<T> iterator = this.AOxby.iterator();
        String[] stringArray = oQ.cJI();
        while (iterator.hasNext()) {
            block6: {
                oK oK2;
                block5: {
                    oK oK3 = (oK)iterator.next();
                    try {
                        try {
                            oK2 = oK3;
                            if (stringArray == null) break block5;
                            if (!oK2.cIV(predicate)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw oQ.cJJ(matchException);
                        }
                        oK2 = oK3;
                    }
                    catch (MatchException matchException) {
                        throw oQ.cJJ(matchException);
                    }
                }
                return (T)oK2;
            }
            if (stringArray != null) continue;
        }
        return null;
    }

    public List<T> cJy(class_1792 class_17922) {
        long l = dTuwN ^ 0x7F5A31D6D6CAL;
        ArrayList<oK> arrayList = new ArrayList<oK>();
        String[] stringArray = oQ.cJI();
        for (oK oK2 : this.AOxby) {
            block5: {
                try {
                    boolean bl;
                    try {
                        bl = oK2.cIU(class_17922);
                        if (stringArray == null || !bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw oQ.cJJ(matchException);
                    }
                    bl = arrayList.add(oK2);
                }
                catch (MatchException matchException) {
                    throw oQ.cJJ(matchException);
                }
            }
            if (stringArray != null) continue;
        }
        return arrayList;
    }
}
