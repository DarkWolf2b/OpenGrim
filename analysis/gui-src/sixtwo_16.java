/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.MethodHandles;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import sixtwo.cB;
import sixtwo.cw;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;

public class cv
extends cB {
    private final List<cw> jjOKZ = new ArrayList<cw>();
    private final List<cw> JIvPe = new ArrayList<cw>();
    private int jHVbQ;
    private boolean tsRCd = false;
    private static final long MorJn = gb.aYR(-3429635470523625339L, 2516146184062335452L, MethodHandles.lookup().lookupClass()).a(270174065979058L);
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cv(mr mr2) {
        super(mr2);
    }

    public cv(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    public void To(cw cw2) {
        List<cw> list;
        int n2;
        block21: {
            int n3;
            int[] nArray;
            block19: {
                block20: {
                    block17: {
                        block18: {
                            long l2 = MorJn ^ 0x2263389ED0EBL;
                            nArray = cw.TL();
                            try {
                                try {
                                    try {
                                        if (cw2 == null) break block17;
                                        n3 = this.jjOKZ.contains(cw2);
                                        if (nArray == null) break block18;
                                    }
                                    catch (MatchException matchException) {
                                        throw cv.Tw(matchException);
                                    }
                                    if (n3 == 0) break block17;
                                }
                                catch (MatchException matchException) {
                                    throw cv.Tw(matchException);
                                }
                                n3 = this.JIvPe.contains(cw2);
                            }
                            catch (MatchException matchException) {
                                throw cv.Tw(matchException);
                            }
                        }
                        try {
                            if (nArray == null) break block19;
                            if (n3 == 0) break block20;
                        }
                        catch (MatchException matchException) {
                            throw cv.Tw(matchException);
                        }
                    }
                    return;
                }
                n3 = this.jjOKZ.indexOf(cw2);
            }
            int n4 = n3;
            n2 = this.JIvPe.size();
            for (int i2 = 0; i2 < this.JIvPe.size(); ++i2) {
                int n5;
                block22: {
                    try {
                        try {
                            try {
                                list = this.jjOKZ;
                                if (nArray == null) break block21;
                                n5 = list.indexOf(this.JIvPe.get(i2));
                                if (nArray == null) break block22;
                            }
                            catch (MatchException matchException) {
                                throw cv.Tw(matchException);
                            }
                            if (n5 <= n4) continue;
                        }
                        catch (MatchException matchException) {
                            throw cv.Tw(matchException);
                        }
                        n5 = i2;
                    }
                    catch (MatchException matchException) {
                        throw cv.Tw(matchException);
                    }
                }
                n2 = n5;
                try {
                    if (nArray != null) break;
                    if (nArray != null) continue;
                    break;
                }
                catch (MatchException matchException) {
                    throw cv.Tw(matchException);
                }
            }
            list = this.JIvPe;
        }
        list.add(n2, cw2);
        this.Vk();
    }

    private static MatchException Tw(MatchException matchException) {
        return matchException;
    }

    public cv Tl(boolean bl2) {
        this.tsRCd = bl2;
        return this;
    }

    public cv Tm(int n2) {
        this.jHVbQ = n2;
        return this;
    }

    public boolean Tn(cw cw2) {
        return this.JIvPe.contains(cw2);
    }

    public boolean Tq(int[] nArray) {
        boolean bl2;
        block5: {
            long l2 = MorJn ^ 0xA1D1BE94211L;
            Iterator<cw> iterator = this.jjOKZ.iterator();
            int[] nArray2 = cw.TL();
            while (iterator.hasNext()) {
                block7: {
                    boolean bl3;
                    block6: {
                        cw cw2 = iterator.next();
                        try {
                            try {
                                bl2 = Arrays.equals(cw2.TE(), nArray);
                                if (nArray2 == null) break block5;
                                if (nArray2 == null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw cv.Tw(matchException);
                            }
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw cv.Tw(matchException);
                        }
                        bl3 = true;
                    }
                    return bl3;
                }
                if (nArray2 != null) continue;
            }
            bl2 = false;
        }
        return bl2;
    }

    @Override
    public void SS(JsonElement jsonElement) {
        block18: {
            int n2;
            ArrayList arrayList;
            block19: {
                int[] nArray;
                block14: {
                    long l2 = MorJn ^ 0x133816D8AF6FL;
                    arrayList = new ArrayList();
                    nArray = cw.TL();
                    for (JsonElement jsonElement2 : jsonElement.getAsJsonArray()) {
                        block16: {
                            int n3;
                            int n4;
                            block17: {
                                block15: {
                                    n4 = jsonElement2.getAsInt();
                                    try {
                                        try {
                                            n2 = n4;
                                            if (nArray == null) break block14;
                                            if (nArray == null) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw cv.Tw(matchException);
                                        }
                                        if (n2 < 0) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw cv.Tw(matchException);
                                    }
                                    n3 = n4;
                                }
                                try {
                                    try {
                                        if (nArray == null) break block16;
                                        if (n3 < this.jjOKZ.size()) break block17;
                                    }
                                    catch (MatchException matchException) {
                                        throw cv.Tw(matchException);
                                    }
                                    if (nArray != null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw cv.Tw(matchException);
                                }
                            }
                            n3 = arrayList.add(this.jjOKZ.get(n4)) ? 1 : 0;
                        }
                        if (nArray != null) continue;
                    }
                    n2 = arrayList.equals(this.JIvPe);
                }
                try {
                    if (nArray == null) break block18;
                    if (n2 == 0) break block19;
                }
                catch (MatchException matchException) {
                    throw cv.Tw(matchException);
                }
                return;
            }
            this.JIvPe.clear();
            n2 = this.JIvPe.addAll(arrayList) ? 1 : 0;
        }
        try {
            this.Vk();
            if (iS.bwL() == null) {
                cw.TK(new int[1]);
            }
        }
        catch (MatchException matchException) {
            throw cv.Tw(matchException);
        }
    }

    @Override
    public void SR(Map<String, Object> map) {
        map.put(Arrays.toString(this.NwlSF), this.Tr());
    }

    public void Tp(cw cw2) {
        block5: {
            cv cv2;
            block4: {
                long l2 = MorJn ^ 0x3BF34236CD90L;
                int[] nArray = cw.TL();
                try {
                    try {
                        cv2 = this;
                        if (nArray == null) break block4;
                        if (!cv2.JIvPe.remove(cw2)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cv.Tw(matchException);
                    }
                    cv2 = this;
                }
                catch (MatchException matchException) {
                    throw cv.Tw(matchException);
                }
            }
            cv2.Vk();
        }
    }

    public List<cw> Ts() {
        return this.jjOKZ;
    }

    public List<cw> Tt() {
        return this.JIvPe;
    }

    public boolean Tv() {
        return this.tsRCd;
    }

    public int Tu() {
        return this.jHVbQ;
    }

    public List<Integer> Tr() {
        ArrayList<Integer> arrayList;
        block4: {
            long l2 = MorJn ^ 0x4650F01A8D9EL;
            ArrayList<Integer> arrayList2 = new ArrayList<Integer>();
            int[] nArray = cw.TL();
            for (cw cw2 : this.JIvPe) {
                try {
                    arrayList = arrayList2;
                    if (nArray != null) {
                        arrayList.add(this.jjOKZ.indexOf(cw2));
                        if (nArray != null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw cv.Tw(matchException);
                }
            }
            arrayList = arrayList2;
        }
        return arrayList;
    }
}

