/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  net.minecraft.class_1792
 *  net.minecraft.class_1799
 *  net.minecraft.class_2248
 *  net.minecraft.class_2680
 */
package sixtwo;

import com.google.gson.JsonElement;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;
import java.util.LinkedHashSet;
import java.util.Map;
import java.util.Objects;
import java.util.Set;
import java.util.stream.Collectors;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1792;
import net.minecraft.class_1799;
import net.minecraft.class_2248;
import net.minecraft.class_2680;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;

public class cK
extends cB {
    private Set<class_1792> NBjNm;
    private Set<class_1792> eAose;
    private int mnYah;
    private boolean nppnu;
    private static final long bQhZo = gb.aYR(-8797029917334817476L, -5087725111209576123L, MethodHandles.lookup().lookupClass()).a(262354789439710L);
    private static final long[] peAVW;
    private static final Integer[] RNZMo;
    private static final Map bjEhz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cK(mr mr2) {
        long l = bQhZo ^ 0x2165C5BFB6F5L;
        super(mr2);
        this.NBjNm = new LinkedHashSet<class_1792>();
        this.eAose = new LinkedHashSet<class_1792>();
        this.mnYah = (int)cK.Xj("o", (int)32104, (long)(0x50D7CF82A46FB97CL ^ l));
        this.nppnu = true;
    }

    public cK(iS iS2, mr mr2) {
        this(mr2);
        this.Vg(iS2);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        bjEhz = new HashMap(13);
        long l = bQhZo ^ 0x7F6A299F80F9L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n = 0;
        String string = "\u00ed\u00f2W\u00d8\u008f\"\u00eb\u00f9\u00c7\u00adD\u008d\u00d3\ni\u00a7";
        int n2 = "\u00ed\u00f2W\u00d8\u008f\"\u00eb\u00f9\u00c7\u00adD\u008d\u00d3\ni\u00a7".length();
        int n3 = 0;
        do {
            byte[] byArray3 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n3 < n2);
        peAVW = lArray;
        RNZMo = new Integer[2];
    }

    public cK WS(boolean bl) {
        this.nppnu = bl;
        this.Xa(this.eAose, true);
        return this;
    }

    private static CallSite Xj(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cK" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public Set<class_1792> WL() {
        return this.NBjNm;
    }

    private boolean Xa(Set<class_1792> set, boolean bl) {
        boolean bl2;
        block21: {
            LinkedHashSet linkedHashSet;
            block22: {
                boolean bl3;
                block19: {
                    block20: {
                        block17: {
                            block18: {
                                long l = bQhZo ^ 0x362BDD31C65AL;
                                linkedHashSet = set.stream().filter(Objects::nonNull).filter(this.NBjNm::contains).collect(Collectors.toCollection(LinkedHashSet::new));
                                bl3 = cB.Vu();
                                try {
                                    try {
                                        bl2 = bl;
                                        if (bl3) break block17;
                                        if (!bl2) break block18;
                                    }
                                    catch (MatchException matchException) {
                                        throw cK.Xg(matchException);
                                    }
                                    this.Xb(linkedHashSet);
                                }
                                catch (MatchException matchException) {
                                    throw cK.Xg(matchException);
                                }
                            }
                            bl2 = this.nppnu;
                        }
                        try {
                            try {
                                try {
                                    if (bl3) break block19;
                                    if (bl2) break block20;
                                }
                                catch (MatchException matchException) {
                                    throw cK.Xg(matchException);
                                }
                                bl2 = linkedHashSet.isEmpty();
                                if (bl3) break block19;
                            }
                            catch (MatchException matchException) {
                                throw cK.Xg(matchException);
                            }
                            if (!bl2) break block20;
                        }
                        catch (MatchException matchException) {
                            throw cK.Xg(matchException);
                        }
                        class_1792 class_17922 = this.NBjNm.stream().findFirst().orElse(null);
                        try {
                            if (class_17922 != null) {
                                linkedHashSet.add(class_17922);
                            }
                        }
                        catch (MatchException matchException) {
                            throw cK.Xg(matchException);
                        }
                    }
                    bl2 = linkedHashSet.equals(this.eAose);
                }
                try {
                    try {
                        if (bl3) break block21;
                        if (!bl2) break block22;
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
            }
            this.eAose.clear();
            this.eAose.addAll(linkedHashSet);
            bl2 = true;
        }
        return bl2;
    }

    public cK WO(Set<class_1792> set) {
        cK cK2;
        block6: {
            block7: {
                LinkedHashSet<class_1792> linkedHashSet;
                long l = bQhZo ^ 0x53E75E4ED52BL;
                boolean bl = cB.Vt();
                try {
                    linkedHashSet = set == null ? new LinkedHashSet<class_1792>() : new LinkedHashSet<class_1792>(set);
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
                LinkedHashSet<class_1792> linkedHashSet2 = linkedHashSet;
                try {
                    try {
                        cK2 = this;
                        if (!bl) break block6;
                        if (!cK2.Xa(linkedHashSet2, true)) break block7;
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                    this.Vk();
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
            }
            cK2 = this;
        }
        return cK2;
    }

    public cK WQ() {
        cK cK2;
        block4: {
            block5: {
                long l = bQhZo ^ 0x89D517F20ADL;
                boolean bl = cB.Vt();
                try {
                    try {
                        cK2 = this;
                        if (!bl) break block4;
                        if (!cK2.Xa(this.NBjNm, true)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                    this.Vk();
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
            }
            cK2 = this;
        }
        return cK2;
    }

    public cK WR(int n) {
        Object object;
        block2: {
            block3: {
                long l = bQhZo ^ 0x1A2CD48D03A5L;
                boolean bl = cB.Vt();
                try {
                    cK cK2 = this;
                    object = n;
                    if (!bl) break block2;
                    if (object > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
                object = cK.Xj("o", (int)12788, (long)(0x364A08F5CD0EC0B1L ^ l));
                break block2;
            }
            object = n;
        }
        cK2.mnYah = object;
        this.Xa(this.eAose, true);
        return this;
    }

    private static MatchException Xg(MatchException matchException) {
        return matchException;
    }

    @Override
    public void SS(JsonElement jsonElement) {
        block8: {
            cK cK2;
            block9: {
                long l = bQhZo ^ 0x280DA67BF764L;
                LinkedHashSet<class_1792> linkedHashSet = new LinkedHashSet<class_1792>();
                Iterator iterator = jsonElement.getAsJsonArray().iterator();
                boolean bl = cB.Vu();
                while (iterator.hasNext()) {
                    JsonElement jsonElement2 = (JsonElement)iterator.next();
                    try {
                        linkedHashSet.add(class_1792.method_7875((int)jsonElement2.getAsInt()));
                        if (!bl) {
                            if (!bl) continue;
                            break;
                        }
                        break block8;
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                }
                try {
                    try {
                        cK2 = this;
                        if (bl) break block9;
                        if (!cK2.Xa(linkedHashSet, true)) break block8;
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                    cK2 = this;
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
            }
            cK2.Vk();
        }
    }

    public cK WM(Set<class_1792> set) {
        cK cK2;
        block6: {
            block7: {
                LinkedHashSet<class_1792> linkedHashSet;
                long l = bQhZo ^ 0x35C805DA27D4L;
                boolean bl = cB.Vt();
                try {
                    cK cK3 = this;
                    linkedHashSet = set == null ? new LinkedHashSet<class_1792>() : new LinkedHashSet<class_1792>(set);
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
                try {
                    try {
                        cK3.NBjNm = linkedHashSet;
                        cK2 = this;
                        if (!bl) break block6;
                        if (!cK2.Xa(this.eAose, true)) break block7;
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                    this.Vk();
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
            }
            cK2 = this;
        }
        return cK2;
    }

    public cK WK(class_1792 ... class_1792Array) {
        return this.WM(Arrays.stream(class_1792Array).collect(Collectors.toCollection(LinkedHashSet::new)));
    }

    public cK WN(class_1792 ... class_1792Array) {
        cK cK2;
        block4: {
            block5: {
                long l = bQhZo ^ 0xB63F203B379L;
                Set set = Arrays.stream(class_1792Array).collect(Collectors.toCollection(LinkedHashSet::new));
                boolean bl = cB.Vu();
                try {
                    try {
                        cK2 = this;
                        if (bl) break block4;
                        if (!cK2.Xa(set, true)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                    this.Vk();
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
            }
            cK2 = this;
        }
        return cK2;
    }

    public Set<class_1792> WP() {
        return this.eAose;
    }

    private void Xb(LinkedHashSet<class_1792> linkedHashSet) {
        long l = bQhZo ^ 0x357510F727EEL;
        boolean bl = cB.Vt();
        while (linkedHashSet.size() > this.mnYah) {
            Iterator iterator;
            block5: {
                Iterator iterator2;
                block6: {
                    iterator2 = linkedHashSet.iterator();
                    try {
                        try {
                            iterator = iterator2;
                            if (!bl) break block5;
                            if (iterator.hasNext()) break block6;
                        }
                        catch (MatchException matchException) {
                            throw cK.Xg(matchException);
                        }
                        return;
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                }
                iterator2.next();
                iterator = iterator2;
            }
            iterator.remove();
            if (bl) continue;
        }
    }

    private static int Xi(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cK.Xh(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int Xh(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2D2E;
        if (RNZMo[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = peAVW[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])bjEhz.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    bjEhz.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cK", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cK.RNZMo[n2] = n3;
        }
        return RNZMo[n2];
    }

    public int Xc() {
        return this.mnYah;
    }

    public cK Xf(boolean bl) {
        this.nppnu = bl;
        return this;
    }

    public void WV(class_1792 class_17922) {
        block18: {
            cK cK2;
            block17: {
                boolean bl;
                block16: {
                    int n;
                    block15: {
                        block13: {
                            block14: {
                                long l = bQhZo ^ 0xFFFE5EBEF45L;
                                bl = cB.Vu();
                                try {
                                    n = this.eAose.contains(class_17922);
                                    if (bl) break block13;
                                    if (n != 0) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw cK.Xg(matchException);
                                }
                                return;
                            }
                            n = this.nppnu;
                        }
                        try {
                            try {
                                if (bl) break block15;
                                if (n != 0) break block16;
                            }
                            catch (MatchException matchException) {
                                throw cK.Xg(matchException);
                            }
                            n = this.eAose.size();
                        }
                        catch (MatchException matchException) {
                            throw cK.Xg(matchException);
                        }
                    }
                    try {
                        if (n == 1) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                }
                LinkedHashSet<class_1792> linkedHashSet = new LinkedHashSet<class_1792>(this.eAose);
                try {
                    try {
                        linkedHashSet.remove(class_17922);
                        cK2 = this;
                        if (bl) break block17;
                        if (!cK2.Xa(linkedHashSet, true)) break block18;
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                    cK2 = this;
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
            }
            cK2.Vk();
        }
    }

    public boolean WY(class_2248 class_22482) {
        return this.eAose.contains(class_22482.method_8389());
    }

    public boolean WZ(class_2680 class_26802) {
        return this.eAose.contains(class_26802.method_26204().method_8389());
    }

    public cK WT() {
        this.mnYah = 1;
        this.nppnu = false;
        this.Xa(this.eAose, true);
        return this;
    }

    public boolean WW(class_1792 class_17922) {
        return this.eAose.contains(class_17922);
    }

    public boolean WX(class_1799 class_17992) {
        return this.eAose.contains(class_17992.method_7909());
    }

    public boolean Xd() {
        return this.nppnu;
    }

    public cK Xe(int n) {
        this.mnYah = n;
        return this;
    }

    public void WU(class_1792 class_17922) {
        block15: {
            cK cK2;
            block14: {
                boolean bl;
                block16: {
                    block12: {
                        boolean bl2;
                        block13: {
                            long l = bQhZo ^ 0x7AE6F10B7986L;
                            bl = cB.Vt();
                            try {
                                try {
                                    try {
                                        if (class_17922 == null) break block12;
                                        bl2 = this.NBjNm.contains(class_17922);
                                        if (!bl) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw cK.Xg(matchException);
                                    }
                                    if (!bl2) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw cK.Xg(matchException);
                                }
                                bl2 = this.eAose.contains(class_17922);
                            }
                            catch (MatchException matchException) {
                                throw cK.Xg(matchException);
                            }
                        }
                        if (!bl2) break block16;
                    }
                    return;
                }
                LinkedHashSet<class_1792> linkedHashSet = new LinkedHashSet<class_1792>(this.eAose);
                try {
                    try {
                        linkedHashSet.add(class_17922);
                        cK2 = this;
                        if (!bl) break block14;
                        if (!cK2.Xa(linkedHashSet, true)) break block15;
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                    cK2 = this;
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
            }
            cK2.Vk();
        }
    }

    @Override
    public void SR(Map<String, Object> map) {
        Set set = this.eAose.stream().map(class_1792::method_7880).collect(Collectors.toSet());
        map.put(Arrays.toString(this.NwlSF), set);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cK.class, "Xi", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
