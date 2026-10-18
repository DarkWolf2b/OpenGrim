/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  net.minecraft.block.Block
 *  net.minecraft.block.BlockState
 *  net.minecraft.item.Item
 *  net.minecraft.item.ItemStack
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
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.item.Item;
import net.minecraft.item.ItemStack;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;

public class cK
extends cB {
    private Set<Item> NBjNm;
    private Set<Item> eAose;
    private int mnYah;
    private boolean nppnu;
    private static final long bQhZo = gb.aYR(-8797029917334817476L, -5087725111209576123L, MethodHandles.lookup().lookupClass()).a(262354789439710L);
    private static final long[] peAVW;
    private static final Integer[] RNZMo;
    private static final Map bjEhz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cK(mr mr2) {
        long l2 = bQhZo ^ 0x2165C5BFB6F5L;
        super(mr2);
        this.NBjNm = new LinkedHashSet<Item>();
        this.eAose = new LinkedHashSet<Item>();
        this.mnYah = (int)2147483647;
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
        long l2 = bQhZo ^ 0x7F6A299F80F9L;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "\u00ed\u00f2W\u00d8\u008f\"\u00eb\u00f9\u00c7\u00adD\u008d\u00d3\ni\u00a7";
        int n3 = "\u00ed\u00f2W\u00d8\u008f\"\u00eb\u00f9\u00c7\u00adD\u008d\u00d3\ni\u00a7".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        peAVW = lArray;
        RNZMo = new Integer[2];
    }

    public cK WS(boolean bl2) {
        this.nppnu = bl2;
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

    public Set<Item> WL() {
        return this.NBjNm;
    }

    private boolean Xa(Set<Item> set, boolean bl2) {
        boolean bl3;
        block21: {
            LinkedHashSet linkedHashSet;
            block22: {
                boolean bl4;
                block19: {
                    block20: {
                        block17: {
                            block18: {
                                long l2 = bQhZo ^ 0x362BDD31C65AL;
                                linkedHashSet = set.stream().filter(Objects::nonNull).filter(this.NBjNm::contains).collect(Collectors.toCollection(LinkedHashSet::new));
                                bl4 = cB.Vu();
                                try {
                                    try {
                                        bl3 = bl2;
                                        if (bl4) break block17;
                                        if (!bl3) break block18;
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
                            bl3 = this.nppnu;
                        }
                        try {
                            try {
                                try {
                                    if (bl4) break block19;
                                    if (bl3) break block20;
                                }
                                catch (MatchException matchException) {
                                    throw cK.Xg(matchException);
                                }
                                bl3 = linkedHashSet.isEmpty();
                                if (bl4) break block19;
                            }
                            catch (MatchException matchException) {
                                throw cK.Xg(matchException);
                            }
                            if (!bl3) break block20;
                        }
                        catch (MatchException matchException) {
                            throw cK.Xg(matchException);
                        }
                        Item item = this.NBjNm.stream().findFirst().orElse(null);
                        try {
                            if (item != null) {
                                linkedHashSet.add(item);
                            }
                        }
                        catch (MatchException matchException) {
                            throw cK.Xg(matchException);
                        }
                    }
                    bl3 = linkedHashSet.equals(this.eAose);
                }
                try {
                    try {
                        if (bl4) break block21;
                        if (!bl3) break block22;
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
            bl3 = true;
        }
        return bl3;
    }

    public cK WO(Set<Item> set) {
        cK cK2;
        block6: {
            block7: {
                LinkedHashSet<Item> linkedHashSet;
                long l2 = bQhZo ^ 0x53E75E4ED52BL;
                boolean bl2 = cB.Vt();
                try {
                    linkedHashSet = set == null ? new LinkedHashSet<Item>() : new LinkedHashSet<Item>(set);
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
                LinkedHashSet<Item> linkedHashSet2 = linkedHashSet;
                try {
                    try {
                        cK2 = this;
                        if (!bl2) break block6;
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
                long l2 = bQhZo ^ 0x89D517F20ADL;
                boolean bl2 = cB.Vt();
                try {
                    try {
                        cK2 = this;
                        if (!bl2) break block4;
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

    public cK WR(int n2) {
        Object object;
        block2: {
            block3: {
                long l2 = bQhZo ^ 0x1A2CD48D03A5L;
                boolean bl2 = cB.Vt();
                try {
                    cK cK2 = this;
                    object = n2;
                    if (!bl2) break block2;
                    if (object > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
                object = cK.Xj("o", (int)12788, (long)(0x364A08F5CD0EC0B1L ^ l2));
                break block2;
            }
            object = n2;
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
                long l2 = bQhZo ^ 0x280DA67BF764L;
                LinkedHashSet<Item> linkedHashSet = new LinkedHashSet<Item>();
                Iterator iterator = jsonElement.getAsJsonArray().iterator();
                boolean bl2 = cB.Vu();
                while (iterator.hasNext()) {
                    JsonElement jsonElement2 = (JsonElement)iterator.next();
                    try {
                        linkedHashSet.add(Item.byRawId((int)jsonElement2.getAsInt()));
                        if (!bl2) {
                            if (!bl2) continue;
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
                        if (bl2) break block9;
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

    public cK WM(Set<Item> set) {
        cK cK2;
        block6: {
            block7: {
                LinkedHashSet<Item> linkedHashSet;
                long l2 = bQhZo ^ 0x35C805DA27D4L;
                boolean bl2 = cB.Vt();
                try {
                    cK cK3 = this;
                    linkedHashSet = set == null ? new LinkedHashSet<Item>() : new LinkedHashSet<Item>(set);
                }
                catch (MatchException matchException) {
                    throw cK.Xg(matchException);
                }
                try {
                    try {
                        cK3.NBjNm = linkedHashSet;
                        cK2 = this;
                        if (!bl2) break block6;
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

    public cK WK(Item ... itemArray) {
        return this.WM(Arrays.stream(itemArray).collect(Collectors.toCollection(LinkedHashSet::new)));
    }

    public cK WN(Item ... itemArray) {
        cK cK2;
        block4: {
            block5: {
                long l2 = bQhZo ^ 0xB63F203B379L;
                Set set = Arrays.stream(itemArray).collect(Collectors.toCollection(LinkedHashSet::new));
                boolean bl2 = cB.Vu();
                try {
                    try {
                        cK2 = this;
                        if (bl2) break block4;
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

    public Set<Item> WP() {
        return this.eAose;
    }

    private void Xb(LinkedHashSet<Item> linkedHashSet) {
        long l2 = bQhZo ^ 0x357510F727EEL;
        boolean bl2 = cB.Vt();
        while (linkedHashSet.size() > this.mnYah) {
            Iterator iterator;
            block5: {
                Iterator iterator2;
                block6: {
                    iterator2 = linkedHashSet.iterator();
                    try {
                        try {
                            iterator = iterator2;
                            if (!bl2) break block5;
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
            if (bl2) continue;
        }
    }

    private static int Xi(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cK.Xh(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int Xh(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2D2E;
        if (RNZMo[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = peAVW[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])bjEhz.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    bjEhz.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cK.RNZMo[n3] = n4;
        }
        return RNZMo[n3];
    }

    public int Xc() {
        return this.mnYah;
    }

    public cK Xf(boolean bl2) {
        this.nppnu = bl2;
        return this;
    }

    public void WV(Item item) {
        block18: {
            cK cK2;
            block17: {
                boolean bl2;
                block16: {
                    int n2;
                    block15: {
                        block13: {
                            block14: {
                                long l2 = bQhZo ^ 0xFFFE5EBEF45L;
                                bl2 = cB.Vu();
                                try {
                                    n2 = this.eAose.contains(item);
                                    if (bl2) break block13;
                                    if (n2 != 0) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw cK.Xg(matchException);
                                }
                                return;
                            }
                            n2 = this.nppnu;
                        }
                        try {
                            try {
                                if (bl2) break block15;
                                if (n2 != 0) break block16;
                            }
                            catch (MatchException matchException) {
                                throw cK.Xg(matchException);
                            }
                            n2 = this.eAose.size();
                        }
                        catch (MatchException matchException) {
                            throw cK.Xg(matchException);
                        }
                    }
                    try {
                        if (n2 == 1) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw cK.Xg(matchException);
                    }
                }
                LinkedHashSet<Item> linkedHashSet = new LinkedHashSet<Item>(this.eAose);
                try {
                    try {
                        linkedHashSet.remove(item);
                        cK2 = this;
                        if (bl2) break block17;
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

    public boolean WY(Block block) {
        return this.eAose.contains(block.asItem());
    }

    public boolean WZ(BlockState blockState) {
        return this.eAose.contains(blockState.getBlock().asItem());
    }

    public cK WT() {
        this.mnYah = 1;
        this.nppnu = false;
        this.Xa(this.eAose, true);
        return this;
    }

    public boolean WW(Item item) {
        return this.eAose.contains(item);
    }

    public boolean WX(ItemStack itemStack) {
        return this.eAose.contains(itemStack.getItem());
    }

    public boolean Xd() {
        return this.nppnu;
    }

    public cK Xe(int n2) {
        this.mnYah = n2;
        return this;
    }

    public void WU(Item item) {
        block15: {
            cK cK2;
            block14: {
                boolean bl2;
                block16: {
                    block12: {
                        boolean bl3;
                        block13: {
                            long l2 = bQhZo ^ 0x7AE6F10B7986L;
                            bl2 = cB.Vt();
                            try {
                                try {
                                    try {
                                        if (item == null) break block12;
                                        bl3 = this.NBjNm.contains(item);
                                        if (!bl2) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw cK.Xg(matchException);
                                    }
                                    if (!bl3) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw cK.Xg(matchException);
                                }
                                bl3 = this.eAose.contains(item);
                            }
                            catch (MatchException matchException) {
                                throw cK.Xg(matchException);
                            }
                        }
                        if (!bl3) break block16;
                    }
                    return;
                }
                LinkedHashSet<Item> linkedHashSet = new LinkedHashSet<Item>(this.eAose);
                try {
                    try {
                        linkedHashSet.add(item);
                        cK2 = this;
                        if (!bl2) break block14;
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
        Set set = this.eAose.stream().map(Item::getRawId).collect(Collectors.toSet());
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

