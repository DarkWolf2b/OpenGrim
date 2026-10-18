/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.EnumMap;
import java.util.Iterator;
import java.util.List;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.Vec2f;
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

    public static void cNs(lC lC2, lc lc2, Entity entity, List<? extends py> list, boolean bl2) {
        pj.cNt(lC2, lc2, entity, list, bl2).render(lC2);
    }

    private static MatchException cNB(MatchException matchException) {
        return matchException;
    }

    private static void cNu(List<pN> list, lC lC2, lc lc2, Entity entity, boolean bl2, pM pM2, List<pz> list2, List<pE> list3) {
        int n2;
        float f2;
        Object object;
        Object object2;
        boolean bl3;
        float f3;
        block31: {
            float f4;
            block27: {
                long l2 = uxoYt ^ 0x3616BC4FC9BCL;
                f3 = 0.0f;
                Iterator<pE> iterator = list3.iterator();
                bl3 = pj.cNA();
                while (iterator.hasNext()) {
                    float f5;
                    float f6;
                    block36: {
                        block35: {
                            block30: {
                                float f7;
                                float f8;
                                block28: {
                                    block29: {
                                        object2 = iterator.next();
                                        f6 = Math.max(0.0f, object2.thickness(lC2, lc2, entity, bl2));
                                        try {
                                            try {
                                                try {
                                                    f4 = f6;
                                                    if (!bl3) break block27;
                                                    float f9 = f4 - 0.0f;
                                                    f8 = f9 == 0.0f ? 0 : (f9 < 0.0f ? -1 : 1);
                                                    if (!bl3) break block28;
                                                }
                                                catch (MatchException matchException) {
                                                    throw pj.cNB(matchException);
                                                }
                                                if (f8 > 0) break block29;
                                            }
                                            catch (MatchException matchException) {
                                                throw pj.cNB(matchException);
                                            }
                                            if (bl3) continue;
                                        }
                                        catch (MatchException matchException) {
                                            throw pj.cNB(matchException);
                                        }
                                    }
                                    try {
                                        f7 = f3;
                                        if (!bl3) break block30;
                                        float f10 = f7 - 0.0f;
                                        f8 = f10 == 0.0f ? 0 : (f10 > 0.0f ? 1 : -1);
                                    }
                                    catch (MatchException matchException) {
                                        throw pj.cNB(matchException);
                                    }
                                }
                                if (f8 == false) {
                                    f7 = f3 = 2.0f;
                                }
                            }
                            if (pM2 != pM.oFEYk) break block35;
                            f5 = lc2.bXG() - f3 - f6;
                            if (bl3) break block36;
                        }
                        f5 = lc2.bXA() + f3;
                    }
                    object = new lc(lc2.bXF(), f5, lc2.bXH(), f6);
                    list.add(new pN(object2.element(), (lc)object));
                    f3 += f6 + 2.0f;
                    if (bl3) continue;
                }
                f4 = 0.0f;
            }
            f2 = f4;
            object2 = new ArrayList(list2.size());
            for (pz pz2 : list2) {
                block33: {
                    float f11;
                    block34: {
                        block32: {
                            object = pz2.measure(lC2, lc2, entity, bl2);
                            try {
                                try {
                                    float f12 = ((Vec2f)object).x - 0.0f;
                                    n2 = f12 == 0.0f ? 0 : (f12 < 0.0f ? -1 : 1);
                                    if (!bl3) break block31;
                                    if (!bl3) break block32;
                                }
                                catch (MatchException matchException) {
                                    throw pj.cNB(matchException);
                                }
                                if (n2 <= 0) continue;
                            }
                            catch (MatchException matchException) {
                                throw pj.cNB(matchException);
                            }
                            float f13 = ((Vec2f)object).y - 0.0f;
                            f11 = f13 == 0.0f ? 0 : (f13 < 0.0f ? -1 : 1);
                        }
                        try {
                            try {
                                if (!bl3) break block33;
                                if (f11 > 0) break block34;
                            }
                            catch (MatchException matchException) {
                                throw pj.cNB(matchException);
                            }
                            if (bl3) continue;
                        }
                        catch (MatchException matchException) {
                            throw pj.cNB(matchException);
                        }
                    }
                    f11 = (float)object2.add(new pj$vu(pz2, (Vec2f)object));
                }
                f2 += ((Vec2f)object).y;
                if (bl3) continue;
            }
            n2 = object2.isEmpty();
        }
        if (n2 == 0) {
            f2 += (float)Math.max(0, object2.size() - 1) * 2.0f;
        }
        float f14 = f3;
        Iterator iterator = object2.iterator();
        while (iterator.hasNext()) {
            float f15;
            float f16;
            Vec2f vec2f;
            pz pz3;
            block38: {
                block37: {
                    object = (pj$vu)iterator.next();
                    pz3 = ((pj$vu)object).element();
                    vec2f = ((pj$vu)object).size();
                    f16 = lc2.bXF() + (lc2.bXH() - vec2f.x) * 0.5f;
                    if (pM2 != pM.oFEYk) break block37;
                    f15 = lc2.bXG() - f3 - f2 + (f14 - f3);
                    if (bl3) break block38;
                }
                f15 = lc2.bXA() + f14;
            }
            lc lc3 = new lc(f16, f15, vec2f.x, vec2f.y);
            list.add(new pN(pz3.element(), lc3));
            f14 += vec2f.y + 2.0f;
            if (bl3) continue;
        }
    }

    private static void cNv(List<pN> list, lC lC2, lc lc2, Entity entity, boolean bl2, pM pM2, List<pz> list2, List<pE> list3) {
        float f2;
        Object object3;
        float f3;
        Object object2;
        block37: {
            float f4;
            float f5;
            block31: {
                float f6;
                block36: {
                    float f7;
                    boolean bl3;
                    block27: {
                        long l2 = uxoYt ^ 0x29C611BB1BEEL;
                        f6 = 0.0f;
                        Iterator<pE> iterator = list3.iterator();
                        bl3 = pj.cNz();
                        while (iterator.hasNext()) {
                            float f8;
                            float f9;
                            block39: {
                                block38: {
                                    block30: {
                                        float f10;
                                        float f11;
                                        block28: {
                                            block29: {
                                                object2 = iterator.next();
                                                f9 = Math.max(0.0f, object2.thickness(lC2, lc2, entity, bl2));
                                                try {
                                                    try {
                                                        try {
                                                            f7 = f9;
                                                            if (bl3) break block27;
                                                            float f12 = f7 - 0.0f;
                                                            f11 = f12 == 0.0f ? 0 : (f12 < 0.0f ? -1 : 1);
                                                            if (bl3) break block28;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw pj.cNB(matchException);
                                                        }
                                                        if (f11 > 0) break block29;
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
                                            try {
                                                f10 = f6;
                                                if (bl3) break block30;
                                                float f13 = f10 - 0.0f;
                                                f11 = f13 == 0.0f ? 0 : (f13 > 0.0f ? 1 : -1);
                                            }
                                            catch (MatchException matchException) {
                                                throw pj.cNB(matchException);
                                            }
                                        }
                                        if (f11 == false) {
                                            f10 = f6 = 2.0f;
                                        }
                                    }
                                    if (pM2 != pM.DXMaR) break block38;
                                    f8 = lc2.bXF() - f6 - f9;
                                    if (!bl3) break block39;
                                }
                                f8 = lc2.bXz() + f6;
                            }
                            lc lc3 = new lc(f8, lc2.bXG(), f9, lc2.bXI());
                            list.add(new pN(object2.element(), lc3));
                            f6 += f9 + 2.0f;
                            if (!bl3) continue;
                        }
                        f7 = 0.0f;
                    }
                    f3 = f7;
                    object2 = new EnumMap(pK.class);
                    for (Object object3 : pK.values()) {
                        object2.put(object3, new ArrayList());
                        if (!bl3) continue;
                    }
                    for (pz pz2 : list2) {
                        pK pK2;
                        Vec2f vec2f;
                        block35: {
                            pz pz3;
                            block33: {
                                block34: {
                                    float f14;
                                    block32: {
                                        vec2f = pz2.measure(lC2, lc2, entity, bl2);
                                        try {
                                            try {
                                                f5 = vec2f.x;
                                                f4 = 0.0f;
                                                if (bl3) break block31;
                                                float f15 = f5 - f4;
                                                f14 = f15 == 0.0f ? 0 : (f15 < 0.0f ? -1 : 1);
                                                if (bl3) break block32;
                                            }
                                            catch (MatchException matchException) {
                                                throw pj.cNB(matchException);
                                            }
                                            if (f14 <= 0) continue;
                                        }
                                        catch (MatchException matchException) {
                                            throw pj.cNB(matchException);
                                        }
                                        float f16 = vec2f.y - 0.0f;
                                        f14 = f16 == 0.0f ? 0 : (f16 < 0.0f ? -1 : 1);
                                    }
                                    try {
                                        if (f14 <= 0 && !bl3) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw pj.cNB(matchException);
                                    }
                                    try {
                                        try {
                                            pz3 = pz2;
                                            if (bl3) break block33;
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
                        ((List)object2.get(object3)).add(new pj$vu(pz2, vec2f));
                        f3 = Math.max(f3, vec2f.x);
                        if (!bl3) continue;
                    }
                    try {
                        if (pM2 != pM.DXMaR) break block36;
                        f2 = lc2.bXF() - f6 - f3;
                        break block37;
                    }
                    catch (MatchException matchException) {
                        throw pj.cNB(matchException);
                    }
                }
                f5 = lc2.bXz();
                f4 = f6;
            }
            f2 = f5 + f4;
        }
        float f17 = f2;
        pj.cNw(list, pM2, f17, f3, (List)object2.get((Object)pK.OydiO), lc2.bXG());
        List list4 = (List)object2.get((Object)pK.AkTYU);
        float f18 = lc2.bXG() + Math.max(0.0f, (lc2.bXI() - pj.cNx(list4)) * 0.5f);
        pj.cNw(list, pM2, f17, f3, list4, f18);
        object3 = (List)object2.get((Object)pK.Gnbzp);
        float f19 = lc2.bXA() - pj.cNx((List<pj$vu>)object3);
        pj.cNw(list, pM2, f17, f3, (List<pj$vu>)object3, f19);
    }

    public static void cNy(boolean bl2) {
        gCiXS = bl2;
    }

    public static boolean cNz() {
        return gCiXS;
    }

    private static void cNw(List<pN> list, pM pM2, float f2, float f3, List<pj$vu> list2, float f4) {
        long l2 = uxoYt ^ 0x74FE91139CECL;
        float f5 = f4;
        Iterator<pj$vu> iterator = list2.iterator();
        boolean bl2 = pj.cNA();
        while (iterator.hasNext()) {
            float f6;
            pj$vu pj$vu = iterator.next();
            Vec2f vec2f = pj$vu.size();
            try {
                f6 = pM2 == pM.DXMaR ? f2 + (f3 - vec2f.x) : f2;
            }
            catch (MatchException matchException) {
                throw pj.cNB(matchException);
            }
            float f7 = f6;
            lc lc2 = new lc(f7, f5, vec2f.x, vec2f.y);
            list.add(new pN(pj$vu.element().element(), lc2));
            f5 += vec2f.y + 2.0f;
            if (bl2) continue;
        }
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static pi cNt(lC lC2, lc lc2, Entity entity, List<? extends py> list, boolean bl2) {
        boolean bl3;
        pi pi2;
        block67: {
            block66: {
                ArrayList<pN> arrayList;
                boolean bl4;
                block65: {
                    List<? extends py> list2;
                    block49: {
                        long l2 = uxoYt ^ 0x517BE3911AD0L;
                        bl4 = pj.cNz();
                        try {
                            try {
                                try {
                                    if (lC2 == null || lc2 == null) return new pi(lc2, List.of(), entity, bl2);
                                }
                                catch (MatchException matchException) {
                                    throw pj.cNB(matchException);
                                }
                                list2 = list;
                                if (bl4) break block49;
                            }
                            catch (MatchException matchException) {
                                throw pj.cNB(matchException);
                            }
                            if (list2 == null) return new pi(lc2, List.of(), entity, bl2);
                        }
                        catch (MatchException matchException) {
                            throw pj.cNB(matchException);
                        }
                        list2 = list;
                    }
                    try {
                        if (list2.isEmpty()) {
                            return new pi(lc2, List.of(), entity, bl2);
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
                        if (!bl4) continue;
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
                                            int n2;
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
                                                                                                if (bl4) break block50;
                                                                                                if (py4 != null) break block51;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw pj.cNB(matchException);
                                                                                            }
                                                                                            if (!bl4) continue;
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
                                                                                                n2 = py2.active();
                                                                                                if (bl4) break block52;
                                                                                                if (n2 != 0) break block53;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw pj.cNB(matchException);
                                                                                            }
                                                                                            float f3 = f2 - 0.0f;
                                                                                            n2 = f3 == 0.0f ? 0 : (f3 < 0.0f ? -1 : 1);
                                                                                            if (bl4) break block52;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw pj.cNB(matchException);
                                                                                        }
                                                                                        if (n2 > 0) break block53;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw pj.cNB(matchException);
                                                                                    }
                                                                                    if (!bl4) continue;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw pj.cNB(matchException);
                                                                                }
                                                                            }
                                                                            n2 = py2 instanceof pC;
                                                                        }
                                                                        try {
                                                                            try {
                                                                                if (bl4) break block54;
                                                                                if (n2 == 0) break block55;
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
                                                                    n2 = py2 instanceof pz;
                                                                }
                                                                try {
                                                                    if (bl4) break block56;
                                                                    if (n2 == 0) break block57;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw pj.cNB(matchException);
                                                                }
                                                                pz2 = (pz)((Object)py2);
                                                                try {
                                                                    try {
                                                                        pz3 = pz2;
                                                                        if (bl4) break block58;
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
                                                    if (bl4) break block61;
                                                    n2 = py3 instanceof pE;
                                                }
                                                catch (MatchException matchException) {
                                                    throw pj.cNB(matchException);
                                                }
                                            }
                                            if (n2 == 0) break block68;
                                            py3 = py2;
                                        }
                                        pE2 = (pE)((Object)py3);
                                        try {
                                            try {
                                                pE3 = pE2;
                                                if (bl4) break block62;
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
                        if (!bl4) continue;
                    }
                    Comparator<pz> comparator = Comparator.comparingInt(px::order);
                    Comparator<pE> comparator2 = Comparator.comparingInt(px::order);
                    for (pM pM6 : pM.values()) {
                        ((List)enumMap.get((Object)pM6)).sort(comparator);
                        ((List)enumMap2.get((Object)pM6)).sort(comparator2);
                        if (!bl4) continue;
                    }
                    for (py py5 : arrayList2) {
                        try {
                            arrayList.add(new pN(py5, lc2));
                            if (!bl4) {
                                if (!bl4) continue;
                                break;
                            }
                            break block65;
                        }
                        catch (MatchException matchException) {
                            throw pj.cNB(matchException);
                        }
                    }
                    pj.cNu(arrayList, lC2, lc2, entity, bl2, pM.oFEYk, (List)enumMap.get((Object)pM.oFEYk), (List)enumMap2.get((Object)pM.oFEYk));
                    pj.cNu(arrayList, lC2, lc2, entity, bl2, pM.gvTMb, (List)enumMap.get((Object)pM.gvTMb), (List)enumMap2.get((Object)pM.gvTMb));
                    pj.cNv(arrayList, lC2, lc2, entity, bl2, pM.DXMaR, (List)enumMap.get((Object)pM.DXMaR), (List)enumMap2.get((Object)pM.DXMaR));
                    pj.cNv(arrayList, lC2, lc2, entity, bl2, pM.ODjfB, (List)enumMap.get((Object)pM.ODjfB), (List)enumMap2.get((Object)pM.ODjfB));
                }
                try {
                    try {
                        pi2 = new pi(lc2, arrayList, entity, bl2);
                        if (iS.bwL() != null) return pi2;
                        if (!bl4) break block66;
                    }
                    catch (MatchException matchException) {
                        throw pj.cNB(matchException);
                    }
                    bl3 = false;
                    break block67;
                }
                catch (MatchException matchException) {
                    throw pj.cNB(matchException);
                }
            }
            bl3 = true;
        }
        pj.cNy(bl3);
        return pi2;
    }

    public static boolean cNA() {
        boolean bl2 = pj.cNz();
        try {
            if (!bl2) {
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
            long l2 = uxoYt ^ 0x1C17E56398L;
            f2 = 0.0f;
            Iterator<pj$vu> iterator = list.iterator();
            boolean bl2 = pj.cNz();
            while (iterator.hasNext()) {
                pj$vu pj$vu = iterator.next();
                f2 += pj$vu.size().y;
                try {
                    if (!bl2) {
                        if (!bl2) continue;
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

