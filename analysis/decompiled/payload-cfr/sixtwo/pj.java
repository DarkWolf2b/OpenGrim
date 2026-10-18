/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_241
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.EnumMap;
import java.util.Iterator;
import java.util.List;
import net.minecraft.class_1297;
import net.minecraft.class_241;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.pC;
import sixtwo.pE;
import sixtwo.pK;
import sixtwo.pM;
import sixtwo.pN;
import sixtwo.pi;
import sixtwo.pj$vu;
import sixtwo.px;
import sixtwo.py;
import sixtwo.pz;

public final class pj {
    private static boolean gCiXS;
    private static final long uxoYt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    static {
        uxoYt = gb.aYR(-55151858593705340L, -8471187155727179904L, MethodHandles.lookup().lookupClass()).a(162730469679794L);
        if (!pj.cNA()) {
            pj.cNy(true);
        }
    }

    public static void cNs(lC lC2, lc lc2, class_1297 class_12972, List<? extends py> list, boolean bl) {
        pj.cNt(lC2, lc2, class_12972, list, bl).render(lC2);
    }

    private static MatchException cNB(MatchException matchException) {
        return matchException;
    }

    private static void cNu(List<pN> list, lC lC2, lc lc2, class_1297 class_12972, boolean bl, pM pM2, List<pz> list2, List<pE> list3) {
        int n;
        float f;
        Object object;
        Object object2;
        boolean bl2;
        float f2;
        block31: {
            float f3;
            block27: {
                long l = uxoYt ^ 0x3616BC4FC9BCL;
                f2 = 0.0f;
                Iterator<pE> iterator = list3.iterator();
                bl2 = pj.cNA();
                while (iterator.hasNext()) {
                    float f4;
                    float f5;
                    block36: {
                        block35: {
                            block30: {
                                float f6;
                                float f7;
                                block28: {
                                    block29: {
                                        object2 = iterator.next();
                                        f5 = Math.max(0.0f, object2.thickness(lC2, lc2, class_12972, bl));
                                        try {
                                            try {
                                                try {
                                                    f3 = f5;
                                                    if (!bl2) break block27;
                                                    float f8 = f3 - 0.0f;
                                                    f7 = f8 == 0.0f ? 0 : (f8 < 0.0f ? -1 : 1);
                                                    if (!bl2) break block28;
                                                }
                                                catch (MatchException matchException) {
                                                    throw pj.cNB(matchException);
                                                }
                                                if (f7 > 0) break block29;
                                            }
                                            catch (MatchException matchException) {
                                                throw pj.cNB(matchException);
                                            }
                                            if (bl2) continue;
                                        }
                                        catch (MatchException matchException) {
                                            throw pj.cNB(matchException);
                                        }
                                    }
                                    try {
                                        f6 = f2;
                                        if (!bl2) break block30;
                                        float f9 = f6 - 0.0f;
                                        f7 = f9 == 0.0f ? 0 : (f9 > 0.0f ? 1 : -1);
                                    }
                                    catch (MatchException matchException) {
                                        throw pj.cNB(matchException);
                                    }
                                }
                                if (f7 == false) {
                                    f6 = f2 = 2.0f;
                                }
                            }
                            if (pM2 != pM.oFEYk) break block35;
                            f4 = lc2.bXG() - f2 - f5;
                            if (bl2) break block36;
                        }
                        f4 = lc2.bXA() + f2;
                    }
                    object = new lc(lc2.bXF(), f4, lc2.bXH(), f5);
                    list.add(new pN(object2.element(), (lc)object));
                    f2 += f5 + 2.0f;
                    if (bl2) continue;
                }
                f3 = 0.0f;
            }
            f = f3;
            object2 = new ArrayList(list2.size());
            for (pz pz2 : list2) {
                block33: {
                    float f10;
                    block34: {
                        block32: {
                            object = pz2.measure(lC2, lc2, class_12972, bl);
                            try {
                                try {
                                    float f11 = ((class_241)object).field_1343 - 0.0f;
                                    n = f11 == 0.0f ? 0 : (f11 < 0.0f ? -1 : 1);
                                    if (!bl2) break block31;
                                    if (!bl2) break block32;
                                }
                                catch (MatchException matchException) {
                                    throw pj.cNB(matchException);
                                }
                                if (n <= 0) continue;
                            }
                            catch (MatchException matchException) {
                                throw pj.cNB(matchException);
                            }
                            float f12 = ((class_241)object).field_1342 - 0.0f;
                            f10 = f12 == 0.0f ? 0 : (f12 < 0.0f ? -1 : 1);
                        }
                        try {
                            try {
                                if (!bl2) break block33;
                                if (f10 > 0) break block34;
                            }
                            catch (MatchException matchException) {
                                throw pj.cNB(matchException);
                            }
                            if (bl2) continue;
                        }
                        catch (MatchException matchException) {
                            throw pj.cNB(matchException);
                        }
                    }
                    f10 = (float)object2.add(new pj$vu(pz2, (class_241)object));
                }
                f += ((class_241)object).field_1342;
                if (bl2) continue;
            }
            n = object2.isEmpty();
        }
        if (n == 0) {
            f += (float)Math.max(0, object2.size() - 1) * 2.0f;
        }
        float f13 = f2;
        Iterator iterator = object2.iterator();
        while (iterator.hasNext()) {
            float f14;
            float f15;
            class_241 class_2412;
            pz pz3;
            block38: {
                block37: {
                    object = (pj$vu)iterator.next();
                    pz3 = ((pj$vu)object).element();
                    class_2412 = ((pj$vu)object).size();
                    f15 = lc2.bXF() + (lc2.bXH() - class_2412.field_1343) * 0.5f;
                    if (pM2 != pM.oFEYk) break block37;
                    f14 = lc2.bXG() - f2 - f + (f13 - f2);
                    if (bl2) break block38;
                }
                f14 = lc2.bXA() + f13;
            }
            lc lc3 = new lc(f15, f14, class_2412.field_1343, class_2412.field_1342);
            list.add(new pN(pz3.element(), lc3));
            f13 += class_2412.field_1342 + 2.0f;
            if (bl2) continue;
        }
    }

    private static void cNv(List<pN> list, lC lC2, lc lc2, class_1297 class_12972, boolean bl, pM pM2, List<pz> list2, List<pE> list3) {
        float f;
        Object object3;
        float f2;
        Object object2;
        block37: {
            float f3;
            float f4;
            block31: {
                float f5;
                block36: {
                    float f6;
                    boolean bl2;
                    block27: {
                        long l = uxoYt ^ 0x29C611BB1BEEL;
                        f5 = 0.0f;
                        Iterator<pE> iterator = list3.iterator();
                        bl2 = pj.cNz();
                        while (iterator.hasNext()) {
                            float f7;
                            float f8;
                            block39: {
                                block38: {
                                    block30: {
                                        float f9;
                                        float f10;
                                        block28: {
                                            block29: {
                                                object2 = iterator.next();
                                                f8 = Math.max(0.0f, object2.thickness(lC2, lc2, class_12972, bl));
                                                try {
                                                    try {
                                                        try {
                                                            f6 = f8;
                                                            if (bl2) break block27;
                                                            float f11 = f6 - 0.0f;
                                                            f10 = f11 == 0.0f ? 0 : (f11 < 0.0f ? -1 : 1);
                                                            if (bl2) break block28;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw pj.cNB(matchException);
                                                        }
                                                        if (f10 > 0) break block29;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw pj.cNB(matchException);
                                                    }
                                                    if (!bl2) continue;
                                                }
                                                catch (MatchException matchException) {
                                                    throw pj.cNB(matchException);
                                                }
                                            }
                                            try {
                                                f9 = f5;
                                                if (bl2) break block30;
                                                float f12 = f9 - 0.0f;
                                                f10 = f12 == 0.0f ? 0 : (f12 > 0.0f ? 1 : -1);
                                            }
                                            catch (MatchException matchException) {
                                                throw pj.cNB(matchException);
                                            }
                                        }
                                        if (f10 == false) {
                                            f9 = f5 = 2.0f;
                                        }
                                    }
                                    if (pM2 != pM.DXMaR) break block38;
                                    f7 = lc2.bXF() - f5 - f8;
                                    if (!bl2) break block39;
                                }
                                f7 = lc2.bXz() + f5;
                            }
                            lc lc3 = new lc(f7, lc2.bXG(), f8, lc2.bXI());
                            list.add(new pN(object2.element(), lc3));
                            f5 += f8 + 2.0f;
                            if (!bl2) continue;
                        }
                        f6 = 0.0f;
                    }
                    f2 = f6;
                    object2 = new EnumMap(pK.class);
                    for (Object object3 : pK.values()) {
                        object2.put(object3, new ArrayList());
                        if (!bl2) continue;
                    }
                    for (pz pz2 : list2) {
                        pK pK2;
                        class_241 class_2412;
                        block35: {
                            pz pz3;
                            block33: {
                                block34: {
                                    float f13;
                                    block32: {
                                        class_2412 = pz2.measure(lC2, lc2, class_12972, bl);
                                        try {
                                            try {
                                                f4 = class_2412.field_1343;
                                                f3 = 0.0f;
                                                if (bl2) break block31;
                                                float f14 = f4 - f3;
                                                f13 = f14 == 0.0f ? 0 : (f14 < 0.0f ? -1 : 1);
                                                if (bl2) break block32;
                                            }
                                            catch (MatchException matchException) {
                                                throw pj.cNB(matchException);
                                            }
                                            if (f13 <= 0) continue;
                                        }
                                        catch (MatchException matchException) {
                                            throw pj.cNB(matchException);
                                        }
                                        float f15 = class_2412.field_1342 - 0.0f;
                                        f13 = f15 == 0.0f ? 0 : (f15 < 0.0f ? -1 : 1);
                                    }
                                    try {
                                        if (f13 <= 0 && !bl2) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw pj.cNB(matchException);
                                    }
                                    try {
                                        try {
                                            pz3 = pz2;
                                            if (bl2) break block33;
                                            if (pz3.verticalAnchor() != null) break block34;
                                        }
                                        catch (MatchException matchException) {
                                            throw pj.cNB(matchException);
                                        }
                                        pK2 = pK.AkTYU;
                                        break block35;
                                    }
                                    catch (MatchException matchException) {
                                        throw pj.cNB(matchException);
                                    }
                                }
                                pz3 = pz2;
                            }
                            pK2 = pz3.verticalAnchor();
                        }
                        object3 = pK2;
                        ((List)object2.get(object3)).add(new pj$vu(pz2, class_2412));
                        f2 = Math.max(f2, class_2412.field_1343);
                        if (!bl2) continue;
                    }
                    try {
                        if (pM2 != pM.DXMaR) break block36;
                        f = lc2.bXF() - f5 - f2;
                        break block37;
                    }
                    catch (MatchException matchException) {
                        throw pj.cNB(matchException);
                    }
                }
                f4 = lc2.bXz();
                f3 = f5;
            }
            f = f4 + f3;
        }
        float f16 = f;
        pj.cNw(list, pM2, f16, f2, (List)object2.get((Object)pK.OydiO), lc2.bXG());
        List list4 = (List)object2.get((Object)pK.AkTYU);
        float f17 = lc2.bXG() + Math.max(0.0f, (lc2.bXI() - pj.cNx(list4)) * 0.5f);
        pj.cNw(list, pM2, f16, f2, list4, f17);
        object3 = (List)object2.get((Object)pK.Gnbzp);
        float f18 = lc2.bXA() - pj.cNx((List<pj$vu>)object3);
        pj.cNw(list, pM2, f16, f2, (List<pj$vu>)object3, f18);
    }

    public static void cNy(boolean bl) {
        gCiXS = bl;
    }

    public static boolean cNz() {
        return gCiXS;
    }

    private static void cNw(List<pN> list, pM pM2, float f, float f2, List<pj$vu> list2, float f3) {
        long l = uxoYt ^ 0x74FE91139CECL;
        float f4 = f3;
        Iterator<pj$vu> iterator = list2.iterator();
        boolean bl = pj.cNA();
        while (iterator.hasNext()) {
            float f5;
            pj$vu pj$vu = iterator.next();
            class_241 class_2412 = pj$vu.size();
            try {
                f5 = pM2 == pM.DXMaR ? f + (f2 - class_2412.field_1343) : f;
            }
            catch (MatchException matchException) {
                throw pj.cNB(matchException);
            }
            float f6 = f5;
            lc lc2 = new lc(f6, f4, class_2412.field_1343, class_2412.field_1342);
            list.add(new pN(pj$vu.element().element(), lc2));
            f4 += class_2412.field_1342 + 2.0f;
            if (bl) continue;
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static pi cNt(lC lC2, lc lc2, class_1297 class_12972, List<? extends py> list, boolean bl) {
        boolean bl2;
        pi pi2;
        block67: {
            block66: {
                ArrayList<pN> arrayList;
                boolean bl3;
                block65: {
                    List<? extends py> list2;
                    block49: {
                        long l = uxoYt ^ 0x517BE3911AD0L;
                        bl3 = pj.cNz();
                        try {
                            try {
                                try {
                                    if (lC2 == null || lc2 == null) return new pi(lc2, List.of(), class_12972, bl);
                                }
                                catch (MatchException matchException) {
                                    throw pj.cNB(matchException);
                                }
                                list2 = list;
                                if (bl3) break block49;
                            }
                            catch (MatchException matchException) {
                                throw pj.cNB(matchException);
                            }
                            if (list2 == null) return new pi(lc2, List.of(), class_12972, bl);
                        }
                        catch (MatchException matchException) {
                            throw pj.cNB(matchException);
                        }
                        list2 = list;
                    }
                    try {
                        if (list2.isEmpty()) {
                            return new pi(lc2, List.of(), class_12972, bl);
                        }
                    }
                    catch (MatchException matchException) {
                        throw pj.cNB(matchException);
                    }
                    ArrayList<py> arrayList2 = new ArrayList<py>();
                    EnumMap enumMap = new EnumMap(pM.class);
                    EnumMap enumMap2 = new EnumMap(pM.class);
                    arrayList = new ArrayList<pN>();
                    for (pM pM2 : pM.values()) {
                        enumMap.put(pM2, new ArrayList());
                        enumMap2.put(pM2, new ArrayList());
                        if (!bl3) continue;
                    }
                    for (py py2 : list) {
                        block68: {
                            pM pM3;
                            pE pE2;
                            pM pM4;
                            block64: {
                                pE pE3;
                                block62: {
                                    block63: {
                                        py py3;
                                        block61: {
                                            int n;
                                            block56: {
                                                block57: {
                                                    pM pM5;
                                                    pz pz2;
                                                    block60: {
                                                        pz pz3;
                                                        block58: {
                                                            block59: {
                                                                block54: {
                                                                    block55: {
                                                                        block52: {
                                                                            block53: {
                                                                                py py4;
                                                                                block50: {
                                                                                    block51: {
                                                                                        try {
                                                                                            try {
                                                                                                py4 = py2;
                                                                                                if (bl3) break block50;
                                                                                                if (py4 != null) break block51;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw pj.cNB(matchException);
                                                                                            }
                                                                                            if (!bl3) continue;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw pj.cNB(matchException);
                                                                                        }
                                                                                    }
                                                                                    py2.cQN().dhc(py2.active());
                                                                                    py4 = py2;
                                                                                }
                                                                                float f2 = py4.cQN().dhj();
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            try {
                                                                                                n = py2.active();
                                                                                                if (bl3) break block52;
                                                                                                if (n != 0) break block53;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw pj.cNB(matchException);
                                                                                            }
                                                                                            float f3 = f2 - 0.0f;
                                                                                            n = f3 == 0.0f ? 0 : (f3 < 0.0f ? -1 : 1);
                                                                                            if (bl3) break block52;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw pj.cNB(matchException);
                                                                                        }
                                                                                        if (n > 0) break block53;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw pj.cNB(matchException);
                                                                                    }
                                                                                    if (!bl3) continue;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw pj.cNB(matchException);
                                                                                }
                                                                            }
                                                                            n = py2 instanceof pC;
                                                                        }
                                                                        try {
                                                                            try {
                                                                                if (bl3) break block54;
                                                                                if (n == 0) break block55;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw pj.cNB(matchException);
                                                                            }
                                                                            arrayList2.add(py2);
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw pj.cNB(matchException);
                                                                        }
                                                                    }
                                                                    n = py2 instanceof pz;
                                                                }
                                                                try {
                                                                    if (bl3) break block56;
                                                                    if (n == 0) break block57;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw pj.cNB(matchException);
                                                                }
                                                                pz2 = (pz)((Object)py2);
                                                                try {
                                                                    try {
                                                                        pz3 = pz2;
                                                                        if (bl3) break block58;
                                                                        if (pz3.position() != null) break block59;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw pj.cNB(matchException);
                                                                    }
                                                                    pM5 = pM.oFEYk;
                                                                    break block60;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw pj.cNB(matchException);
                                                                }
                                                            }
                                                            pz3 = pz2;
                                                        }
                                                        pM5 = pz3.position();
                                                    }
                                                    pM4 = pM5;
                                                    ((List)enumMap.get((Object)pM4)).add(pz2);
                                                }
                                                try {
                                                    py3 = py2;
                                                    if (bl3) break block61;
                                                    n = py3 instanceof pE;
                                                }
                                                catch (MatchException matchException) {
                                                    throw pj.cNB(matchException);
                                                }
                                            }
                                            if (n == 0) break block68;
                                            py3 = py2;
                                        }
                                        pE2 = (pE)((Object)py3);
                                        try {
                                            try {
                                                pE3 = pE2;
                                                if (bl3) break block62;
                                                if (pE3.position() != null) break block63;
                                            }
                                            catch (MatchException matchException) {
                                                throw pj.cNB(matchException);
                                            }
                                            pM3 = pM.oFEYk;
                                            break block64;
                                        }
                                        catch (MatchException matchException) {
                                            throw pj.cNB(matchException);
                                        }
                                    }
                                    pE3 = pE2;
                                }
                                pM3 = pE3.position();
                            }
                            pM4 = pM3;
                            ((List)enumMap2.get((Object)pM4)).add(pE2);
                        }
                        if (!bl3) continue;
                    }
                    Comparator<pz> comparator = Comparator.comparingInt(px::order);
                    Comparator<pE> comparator2 = Comparator.comparingInt(px::order);
                    for (pM pM6 : pM.values()) {
                        ((List)enumMap.get((Object)pM6)).sort(comparator);
                        ((List)enumMap2.get((Object)pM6)).sort(comparator2);
                        if (!bl3) continue;
                    }
                    for (py py5 : arrayList2) {
                        try {
                            arrayList.add(new pN(py5, lc2));
                            if (!bl3) {
                                if (!bl3) continue;
                                break;
                            }
                            break block65;
                        }
                        catch (MatchException matchException) {
                            throw pj.cNB(matchException);
                        }
                    }
                    pj.cNu(arrayList, lC2, lc2, class_12972, bl, pM.oFEYk, (List)enumMap.get((Object)pM.oFEYk), (List)enumMap2.get((Object)pM.oFEYk));
                    pj.cNu(arrayList, lC2, lc2, class_12972, bl, pM.gvTMb, (List)enumMap.get((Object)pM.gvTMb), (List)enumMap2.get((Object)pM.gvTMb));
                    pj.cNv(arrayList, lC2, lc2, class_12972, bl, pM.DXMaR, (List)enumMap.get((Object)pM.DXMaR), (List)enumMap2.get((Object)pM.DXMaR));
                    pj.cNv(arrayList, lC2, lc2, class_12972, bl, pM.ODjfB, (List)enumMap.get((Object)pM.ODjfB), (List)enumMap2.get((Object)pM.ODjfB));
                }
                try {
                    try {
                        pi2 = new pi(lc2, arrayList, class_12972, bl);
                        if (iS.bwL() != null) return pi2;
                        if (!bl3) break block66;
                    }
                    catch (MatchException matchException) {
                        throw pj.cNB(matchException);
                    }
                    bl2 = false;
                    break block67;
                }
                catch (MatchException matchException) {
                    throw pj.cNB(matchException);
                }
            }
            bl2 = true;
        }
        pj.cNy(bl2);
        return pi2;
    }

    public static boolean cNA() {
        boolean bl = pj.cNz();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw pj.cNB(matchException);
        }
        return false;
    }

    private static float cNx(List<pj$vu> list) {
        float f2;
        block5: {
            long l = uxoYt ^ 0x1C17E56398L;
            f2 = 0.0f;
            Iterator<pj$vu> iterator = list.iterator();
            boolean bl = pj.cNz();
            while (iterator.hasNext()) {
                pj$vu pj$vu = iterator.next();
                f2 += pj$vu.size().field_1342;
                try {
                    if (!bl) {
                        if (!bl) continue;
                        break;
                    }
                    break block5;
                }
                catch (MatchException matchException) {
                    throw pj.cNB(matchException);
                }
            }
            if (!list.isEmpty()) {
                f2 += (float)Math.max(0, list.size() - 1) * 2.0f;
            }
        }
        return f2;
    }
}
