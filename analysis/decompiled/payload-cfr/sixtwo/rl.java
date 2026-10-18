/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1923
 *  net.minecraft.class_2338
 *  net.minecraft.class_243
 *  net.minecraft.class_2680
 *  net.minecraft.class_2818
 *  net.minecraft.class_2826
 *  net.minecraft.class_310
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.atomic.AtomicBoolean;
import java.util.concurrent.atomic.AtomicReference;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1923;
import net.minecraft.class_2338;
import net.minecraft.class_243;
import net.minecraft.class_2680;
import net.minecraft.class_2818;
import net.minecraft.class_2826;
import net.minecraft.class_310;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ja;
import sixtwo.mT;
import sixtwo.rD;
import sixtwo.rm;

public class rl {
    private final ExecutorService uGYBe = Executors.newSingleThreadExecutor();
    private final AtomicReference<List<class_2338>> CpYTu = new AtomicReference(List.of());
    private final AtomicReference<List<class_243>> pLsVY = new AtomicReference(List.of());
    private final AtomicReference<Map<class_1923, Integer>> JBNes = new AtomicReference(Map.of());
    private final AtomicReference<Map<class_1923, Double>> ucAmG = new AtomicReference(Map.of());
    private final AtomicBoolean ZZxam = new AtomicBoolean(false);
    private final mT VSIco = mT.cpz();
    private static final long DhLYb = gb.aYR(-2826802764978116507L, -2204435378481699971L, MethodHandles.lookup().lookupClass()).a(82766912750945L);
    private static final long[] hWFwR;
    private static final Integer[] Ymwbn;
    private static final Map cvnpU;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        cvnpU = new HashMap(13);
        long l = DhLYb ^ 0x7FD951D8B01DL;
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
        String string = "\u0092\u00bd)\u009dF]Yr\u001c\u00df\u008f\u00f7]\u00b8\u00b0\u0084";
        int n2 = "\u0092\u00bd)\u009dF]Yr\u001c\u00df\u008f\u00f7]\u00b8\u00b0\u0084".length();
        int n3 = 0;
        do {
            byte[] byArray3 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n3 < n2);
        hWFwR = lArray;
        Ymwbn = new Integer[2];
    }

    private static CallSite dig(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/rl" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int dif(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = rl.die(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public boolean dhC() {
        boolean bl;
        block2: {
            block3: {
                long l = DhLYb ^ 0xD25E88B53FAL;
                iS[] iSArray = rm.div();
                try {
                    bl = this.ZZxam.get();
                    if (iSArray == null) break block2;
                    if (bl) break block3;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        return bl;
    }

    private static MatchException did(MatchException matchException) {
        return matchException;
    }

    public Map<class_1923, Integer> dhD() {
        return this.JBNes.get();
    }

    public void dhH() {
        this.pLsVY.set(List.of());
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean dhM(int n, Predicate<class_2680> predicate) {
        block12: {
            class_310 class_3102;
            iS[] iSArray;
            block11: {
                long l = DhLYb ^ 0x5F4228EA4A85L;
                iSArray = rm.div();
                try {
                    try {
                        class_3102 = rD.dlmvG;
                        if (iSArray == null) break block11;
                        if (class_3102.field_1687 == null) return false;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    class_3102 = rD.dlmvG;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
            }
            try {
                if (class_3102.field_1724 == null) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
            try {
                try {
                    boolean bl = this.ZZxam.compareAndSet(false, true);
                    if (iSArray == null) return bl;
                    if (bl) break block12;
                    return false;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
        }
        ((CompletableFuture)CompletableFuture.supplyAsync(() -> rl.dhP(n, predicate), this.uGYBe).thenAccept(list -> this.CpYTu.set(List.copyOf(list)))).whenComplete((void_, throwable) -> this.ZZxam.set(false));
        return true;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean dhN(int n, Predicate<class_2680> predicate, Predicate<class_1297> predicate2) {
        block12: {
            class_310 class_3102;
            iS[] iSArray;
            block11: {
                long l = DhLYb ^ 0x77D86B315A2EL;
                iSArray = rm.div();
                try {
                    try {
                        class_3102 = rD.dlmvG;
                        if (iSArray == null) break block11;
                        if (class_3102.field_1687 == null) return false;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    class_3102 = rD.dlmvG;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
            }
            try {
                if (class_3102.field_1724 == null) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
            try {
                try {
                    boolean bl = this.ZZxam.compareAndSet(false, true);
                    if (iSArray == null) return bl;
                    if (bl) break block12;
                    return false;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
        }
        ((CompletableFuture)CompletableFuture.supplyAsync(() -> {
            LinkedHashMap<class_1923, Double> linkedHashMap = new LinkedHashMap<class_1923, Double>();
            Map<class_1923, Integer> map = rl.dhR(n, predicate, predicate2, linkedHashMap);
            return Map.entry(map, linkedHashMap);
        }, this.uGYBe).thenAccept(entry -> {
            this.JBNes.set(Map.copyOf((Map)entry.getKey()));
            this.ucAmG.set(Map.copyOf((Map)entry.getValue()));
        })).whenComplete((void_, throwable) -> this.ZZxam.set(false));
        return true;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean dhJ(long l, int n, Predicate<class_2680> predicate) {
        boolean bl;
        boolean bl2;
        block18: {
            boolean bl3;
            iS[] iSArray;
            block16: {
                block17: {
                    class_310 class_3102;
                    block15: {
                        long l2 = DhLYb ^ 0x65BF011AA858L;
                        iSArray = rm.div();
                        try {
                            try {
                                class_3102 = rD.dlmvG;
                                if (iSArray == null) break block15;
                                if (class_3102.field_1687 == null) return false;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                            class_3102 = rD.dlmvG;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    try {
                        if (class_3102.field_1724 == null) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    try {
                        try {
                            bl3 = this.VSIco.cpC(l);
                            if (iSArray == null) break block16;
                            if (bl3) break block17;
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                }
                bl3 = this.dhM(n, predicate);
            }
            bl2 = bl3;
            try {
                try {
                    bl = bl2;
                    if (iSArray == null) return bl;
                    if (!bl) break block18;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                this.VSIco.cpB();
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
        }
        bl = bl2;
        return bl;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean dhL(long l, int n, Predicate<class_2680> predicate, Predicate<class_1297> predicate2) {
        boolean bl;
        boolean bl2;
        block18: {
            boolean bl3;
            iS[] iSArray;
            block16: {
                block17: {
                    class_310 class_3102;
                    block15: {
                        long l2 = DhLYb ^ 0x63CBA7E34EC6L;
                        iSArray = rm.div();
                        try {
                            try {
                                class_3102 = rD.dlmvG;
                                if (iSArray == null) break block15;
                                if (class_3102.field_1687 == null) return false;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                            class_3102 = rD.dlmvG;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    try {
                        if (class_3102.field_1724 == null) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    try {
                        try {
                            bl3 = this.VSIco.cpC(l);
                            if (iSArray == null) break block16;
                            if (bl3) break block17;
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                }
                bl3 = this.dhO(n, predicate, predicate2);
            }
            bl2 = bl3;
            try {
                try {
                    bl = bl2;
                    if (iSArray == null) return bl;
                    if (!bl) break block18;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                this.VSIco.cpB();
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
        }
        bl = bl2;
        return bl;
    }

    public void dhI() {
        this.JBNes.set(Map.of());
        this.ucAmG.set(Map.of());
    }

    public void dhF() {
        this.CpYTu.set(List.of());
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean dhO(int n, Predicate<class_2680> predicate, Predicate<class_1297> predicate2) {
        block12: {
            class_310 class_3102;
            iS[] iSArray;
            block11: {
                long l = DhLYb ^ 0x1BC45BCAC2DCL;
                iSArray = rm.div();
                try {
                    try {
                        class_3102 = rD.dlmvG;
                        if (iSArray == null) break block11;
                        if (class_3102.field_1687 == null) return false;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    class_3102 = rD.dlmvG;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
            }
            try {
                if (class_3102.field_1724 == null) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
            try {
                try {
                    boolean bl = this.ZZxam.compareAndSet(false, true);
                    if (iSArray == null) return bl;
                    if (bl) break block12;
                    return false;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
        }
        ((CompletableFuture)CompletableFuture.supplyAsync(() -> rl.dhS(n, predicate, predicate2), this.uGYBe).thenAccept(list -> this.pLsVY.set(List.copyOf(list)))).whenComplete((void_, throwable) -> this.ZZxam.set(false));
        return true;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean dhK(long l, int n, Predicate<class_2680> predicate, Predicate<class_1297> predicate2) {
        boolean bl;
        boolean bl2;
        block18: {
            boolean bl3;
            iS[] iSArray;
            block16: {
                block17: {
                    class_310 class_3102;
                    block15: {
                        long l2 = DhLYb ^ 0x47C2658196DL;
                        iSArray = rm.div();
                        try {
                            try {
                                class_3102 = rD.dlmvG;
                                if (iSArray == null) break block15;
                                if (class_3102.field_1687 == null) return false;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                            class_3102 = rD.dlmvG;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    try {
                        if (class_3102.field_1724 == null) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    try {
                        try {
                            bl3 = this.VSIco.cpC(l);
                            if (iSArray == null) break block16;
                            if (bl3) break block17;
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                }
                bl3 = this.dhN(n, predicate, predicate2);
            }
            bl2 = bl3;
            try {
                try {
                    bl = bl2;
                    if (iSArray == null) return bl;
                    if (!bl) break block18;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                this.VSIco.cpB();
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
        }
        bl = bl2;
        return bl;
    }

    public Map<class_1923, Double> dhE() {
        return this.ucAmG.get();
    }

    public List<class_243> dhG() {
        return this.pLsVY.get();
    }

    public List<class_2338> dhB() {
        return this.CpYTu.get();
    }

    private static int die(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x166A;
        if (Ymwbn[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = hWFwR[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])cvnpU.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    cvnpU.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/rl", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            rl.Ymwbn[n2] = n3;
        }
        return Ymwbn[n2];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static List<class_2338> dhP(int n, Predicate<class_2680> predicate) {
        class_310 class_3102;
        iS[] iSArray;
        block24: {
            long l = DhLYb ^ 0x829291613D3L;
            iSArray = rm.div();
            try {
                try {
                    class_3102 = rD.dlmvG;
                    if (iSArray == null) break block24;
                    if (class_3102.field_1687 == null) return List.of();
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                class_3102 = rD.dlmvG;
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
        }
        try {
            if (class_3102.field_1724 == null) {
                return List.of();
            }
        }
        catch (MatchException matchException) {
            throw rl.did(matchException);
        }
        ArrayList<class_2338> arrayList = new ArrayList<class_2338>();
        int n2 = (int)Math.floor(rD.dlmvG.field_1724.method_23317() - (double)n);
        int n3 = (int)Math.ceil(rD.dlmvG.field_1724.method_23317() + (double)n);
        int n4 = rD.dlmvG.field_1687.method_31607() + 1;
        int n5 = rD.dlmvG.field_1687.method_31600();
        int n6 = (int)Math.floor(rD.dlmvG.field_1724.method_23321() - (double)n);
        int n7 = (int)Math.ceil(rD.dlmvG.field_1724.method_23321() + (double)n);
        int n8 = n2;
        block18: while (true) {
            int n9 = n8;
            block19: while (n9 <= n3) {
                int n10 = n4;
                block20: while (true) {
                    int n11 = n10;
                    block21: while (n11 <= n5) {
                        n9 = n6;
                        if (iSArray == null) continue block19;
                        for (int i = v2782; i <= n7; ++i) {
                            boolean bl;
                            class_2338 class_23382;
                            block25: {
                                class_23382 = new class_2338(n8, n10, i);
                                class_2680 class_26802 = rD.dlmvG.field_1687.method_8320(class_23382);
                                n11 = class_26802.method_26215() ? 1 : 0;
                                if (iSArray == null) continue block21;
                                try {
                                    block26: {
                                        try {
                                            try {
                                                if (iSArray == null) break block25;
                                                if (n11 == 0) break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw rl.did(matchException);
                                            }
                                            if (iSArray != null) continue;
                                        }
                                        catch (MatchException matchException) {
                                            throw rl.did(matchException);
                                        }
                                    }
                                    bl = predicate.test(class_26802);
                                }
                                catch (MatchException matchException) {
                                    throw rl.did(matchException);
                                }
                            }
                            try {
                                block27: {
                                    try {
                                        try {
                                            if (iSArray == null) continue;
                                            if (bl) break block27;
                                        }
                                        catch (MatchException matchException) {
                                            throw rl.did(matchException);
                                        }
                                        if (iSArray != null) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw rl.did(matchException);
                                    }
                                }
                                bl = arrayList.add(class_23382);
                                continue;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                        }
                        ++n10;
                        if (iSArray != null) continue block20;
                    }
                    break;
                }
                ++n8;
                if (iSArray != null) continue block18;
            }
            break;
        }
        return arrayList;
    }

    private static boolean dhT(class_1923 class_19232, double d, double d2, double d3) {
        double d4;
        block2: {
            block3: {
                long l = DhLYb ^ 0x367D1F559F84L;
                double d5 = (double)class_19232.method_8326() + 8.0;
                iS[] iSArray = rm.div();
                double d6 = (double)class_19232.method_8328() + 8.0;
                double d7 = d - d5;
                double d8 = d2 - d6;
                try {
                    double d9 = d7 * d7 + d8 * d8 - d3;
                    d4 = d9 == 0.0 ? 0 : (d9 < 0.0 ? -1 : 1);
                    if (iSArray == null) break block2;
                    if (d4 > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                d4 = 1.0;
                break block2;
            }
            d4 = 0.0;
        }
        return (boolean)d4;
    }

    public static Map<class_1923, Integer> dhQ(int n, Predicate<class_2680> predicate, Predicate<class_1297> predicate2) {
        return rl.dhR(n, predicate, predicate2, null);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static List<class_243> dhS(int n, Predicate<class_2680> predicate, Predicate<class_1297> predicate2) {
        Predicate<class_2680> predicate3;
        double d;
        double d2;
        double d3;
        ArrayList<class_243> arrayList;
        iS[] iSArray;
        block52: {
            block53: {
                class_310 class_3102;
                long l;
                block51: {
                    l = DhLYb ^ 0x46AB4E99CE4L;
                    iSArray = rm.div();
                    try {
                        try {
                            class_3102 = rD.dlmvG;
                            if (iSArray == null) break block51;
                            if (class_3102.field_1687 == null) return List.of();
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                        class_3102 = rD.dlmvG;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                }
                try {
                    if (class_3102.field_1724 == null) {
                        return List.of();
                    }
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                arrayList = new ArrayList<class_243>();
                d3 = rD.dlmvG.field_1724.method_23317();
                d2 = rD.dlmvG.field_1724.method_23321();
                d = n * n;
                try {
                    predicate3 = predicate;
                    if (iSArray == null) break block52;
                    if (predicate3 == null) break block53;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                int n2 = rD.dlmvG.field_1687.method_31607();
                class_1297 class_12972 = ja.byG();
                block40: for (class_2818 class_28182 : class_12972) {
                    block41: while (true) {
                        int n3;
                        class_1923 class_19232;
                        class_2818 class_28183;
                        block54: {
                            block55: {
                                class_28183 = class_28182;
                                class_19232 = class_28183.method_12004();
                                if (iSArray == null) return arrayList;
                                try {
                                    try {
                                        n3 = rl.dhT(class_19232, d3, d2, d);
                                        if (iSArray == null) break block54;
                                        if (n3 != 0) break block55;
                                    }
                                    catch (MatchException matchException) {
                                        throw rl.did(matchException);
                                    }
                                    if (iSArray != null) continue block40;
                                }
                                catch (MatchException matchException) {
                                    throw rl.did(matchException);
                                }
                            }
                            n3 = class_19232.method_8326();
                        }
                        int n4 = n3;
                        int n5 = class_19232.method_8328();
                        class_2826[] class_2826Array = class_28183.method_12006();
                        int n6 = 0;
                        block42: while (true) {
                            int n7 = n6;
                            block43: while (n7 < class_2826Array.length) {
                                block56: {
                                    int n8;
                                    class_2826 class_28262;
                                    block57: {
                                        class_28262 = class_2826Array[n6];
                                        try {
                                            if (iSArray == null) continue block42;
                                            class_28182 = class_28262;
                                            if (iSArray == null) continue block41;
                                        }
                                        catch (MatchException matchException) {
                                            throw rl.did(matchException);
                                        }
                                        try {
                                            block58: {
                                                try {
                                                    try {
                                                        try {
                                                            if (class_28182 == null) break block56;
                                                            n8 = class_28262.method_38292();
                                                            if (iSArray == null) break block57;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw rl.did(matchException);
                                                        }
                                                        if (n8 == 0) break block58;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw rl.did(matchException);
                                                    }
                                                    if (iSArray != null) break block56;
                                                }
                                                catch (MatchException matchException) {
                                                    throw rl.did(matchException);
                                                }
                                            }
                                            n8 = n2 + n6 * rl.dig("m", (int)1115, (long)(0x7E42F904B34EE989L ^ l));
                                        }
                                        catch (MatchException matchException) {
                                            throw rl.did(matchException);
                                        }
                                    }
                                    int n9 = n8;
                                    int n10 = 0;
                                    block44: while (true) {
                                        int n11 = n10;
                                        block45: while (n11 < rl.dig("m", (int)21912, (long)(0x5E722A045263384BL ^ l))) {
                                            n7 = 0;
                                            if (iSArray == null) continue block43;
                                            int n12 = n7;
                                            block46: while (true) {
                                                int n13 = n12;
                                                block47: while (n13 < rl.dig("m", (int)21912, (long)(0x5E722A045263384BL ^ l))) {
                                                    n11 = 0;
                                                    if (iSArray == null) continue block45;
                                                    int n14 = n11;
                                                    while (n14 < rl.dig("m", (int)21912, (long)(0x5E722A045263384BL ^ l))) {
                                                        block59: {
                                                            block60: {
                                                                class_2680 class_26802 = class_28262.method_12254(n10, n12, n14);
                                                                try {
                                                                    if (iSArray == null) break block59;
                                                                    n13 = class_26802.method_26215() ? 1 : 0;
                                                                    if (iSArray == null) continue block47;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw rl.did(matchException);
                                                                }
                                                                try {
                                                                    boolean bl;
                                                                    block61: {
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    if (n13 != 0) break block60;
                                                                                    bl = predicate.test(class_26802);
                                                                                    if (iSArray == null) break block60;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw rl.did(matchException);
                                                                                }
                                                                                if (bl) break block61;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw rl.did(matchException);
                                                                            }
                                                                            if (iSArray != null) break block60;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw rl.did(matchException);
                                                                        }
                                                                    }
                                                                    bl = arrayList.add(new class_243((double)(n4 + n10) + 0.5, (double)(n9 + n12) + 0.5, (double)(n5 + n14) + 0.5));
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw rl.did(matchException);
                                                                }
                                                            }
                                                            ++n14;
                                                        }
                                                        if (iSArray != null) continue;
                                                    }
                                                    ++n12;
                                                    if (iSArray != null) continue block46;
                                                }
                                                break;
                                            }
                                            ++n10;
                                            if (iSArray != null) continue block44;
                                        }
                                        break;
                                    }
                                }
                                ++n6;
                                if (iSArray != null) continue block42;
                            }
                            break block41;
                            break;
                        }
                        break;
                    }
                    if (iSArray != null) continue;
                }
            }
            predicate3 = predicate2;
        }
        if (predicate3 == null) return arrayList;
        for (class_1297 class_12972 : rD.dlmvG.field_1687.method_18112()) {
            block63: {
                boolean bl;
                block64: {
                    class_1297 class_12973;
                    block62: {
                        try {
                            class_12973 = class_12972;
                            if (iSArray == null) break block62;
                            if (class_12973 == null) continue;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                        class_12973 = class_12972;
                    }
                    if (class_12973 == rD.dlmvG.field_1724) continue;
                    try {
                        if (!predicate2.test(class_12972) && iSArray != null) continue;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    class_1923 class_19233 = new class_1923(class_12972.method_24515());
                    try {
                        try {
                            bl = rl.dhT(class_19233, d3, d2, d);
                            if (iSArray == null) break block63;
                            if (bl) break block64;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                        if (iSArray != null) continue;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                }
                bl = arrayList.add(class_12972.method_73189());
            }
            if (iSArray != null) continue;
        }
        return arrayList;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static Map<class_1923, Integer> dhR(int n, Predicate<class_2680> predicate, Predicate<class_1297> predicate2, Map<class_1923, Double> map) {
        class_2818 class_28182;
        Predicate<class_2680> predicate3;
        double d;
        double d2;
        double d3;
        LinkedHashMap<class_1923, Integer> linkedHashMap;
        iS[] iSArray;
        block58: {
            block59: {
                class_310 class_3102;
                long l;
                block57: {
                    l = DhLYb ^ 0x22263B6FE29DL;
                    iSArray = rm.div();
                    try {
                        try {
                            class_3102 = rD.dlmvG;
                            if (iSArray == null) break block57;
                            if (class_3102.field_1687 == null) return Map.of();
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                        class_3102 = rD.dlmvG;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                }
                try {
                    if (class_3102.field_1724 == null) {
                        return Map.of();
                    }
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                linkedHashMap = new LinkedHashMap<class_1923, Integer>();
                d3 = rD.dlmvG.field_1724.method_23317();
                d2 = rD.dlmvG.field_1724.method_23321();
                d = n * n;
                List<class_2818> list = ja.byG();
                try {
                    predicate3 = predicate;
                    if (iSArray == null) break block58;
                    if (predicate3 == null) break block59;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                int n2 = rD.dlmvG.field_1687.method_31607();
                block46: for (Object object : list) {
                    block68: {
                        double d4;
                        int n3;
                        class_1923 class_19232;
                        block47: while (true) {
                            int n4;
                            block60: {
                                block61: {
                                    class_28182 = (class_2818)object;
                                    class_19232 = class_28182.method_12004();
                                    if (iSArray == null) return linkedHashMap;
                                    try {
                                        try {
                                            n4 = rl.dhT(class_19232, d3, d2, d);
                                            if (iSArray == null) break block60;
                                            if (n4 != 0) break block61;
                                        }
                                        catch (MatchException matchException) {
                                            throw rl.did(matchException);
                                        }
                                        if (iSArray != null) continue block46;
                                    }
                                    catch (MatchException matchException) {
                                        throw rl.did(matchException);
                                    }
                                }
                                n4 = 0;
                            }
                            n3 = n4;
                            d4 = 0.0;
                            class_2826[] class_2826Array = class_28182.method_12006();
                            int n5 = 0;
                            block48: while (true) {
                                int n6 = n5;
                                block49: while (n6 < class_2826Array.length) {
                                    block62: {
                                        int n7;
                                        class_2826 class_28262;
                                        block63: {
                                            class_28262 = class_2826Array[n5];
                                            try {
                                                if (iSArray == null) continue block48;
                                                object = class_28262;
                                                if (iSArray == null) continue block47;
                                            }
                                            catch (MatchException matchException) {
                                                throw rl.did(matchException);
                                            }
                                            try {
                                                block64: {
                                                    try {
                                                        try {
                                                            try {
                                                                if (object == null) break block62;
                                                                n7 = class_28262.method_38292();
                                                                if (iSArray == null) break block63;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw rl.did(matchException);
                                                            }
                                                            if (n7 == 0) break block64;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw rl.did(matchException);
                                                        }
                                                        if (iSArray != null) break block62;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw rl.did(matchException);
                                                    }
                                                }
                                                n7 = n2 + n5 * rl.dig("m", (int)21912, (long)(0x5E720C48DDE54632L ^ l));
                                            }
                                            catch (MatchException matchException) {
                                                throw rl.did(matchException);
                                            }
                                        }
                                        int n8 = n7;
                                        int n9 = 0;
                                        block50: while (true) {
                                            int n10 = n9;
                                            block51: while (n10 < rl.dig("m", (int)21912, (long)(0x5E720C48DDE54632L ^ l))) {
                                                n6 = 0;
                                                if (iSArray == null) continue block49;
                                                int n11 = n6;
                                                block52: while (true) {
                                                    int n12 = n11;
                                                    block53: while (n12 < rl.dig("m", (int)21912, (long)(0x5E720C48DDE54632L ^ l))) {
                                                        n10 = 0;
                                                        if (iSArray == null) continue block51;
                                                        int n13 = n10;
                                                        while (n13 < rl.dig("m", (int)21912, (long)(0x5E720C48DDE54632L ^ l))) {
                                                            block65: {
                                                                block66: {
                                                                    block67: {
                                                                        class_2680 class_26802 = class_28262.method_12254(n9, n11, n13);
                                                                        try {
                                                                            if (iSArray == null) break block65;
                                                                            n12 = class_26802.method_26215() ? 1 : 0;
                                                                            if (iSArray == null) continue block53;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw rl.did(matchException);
                                                                        }
                                                                        try {
                                                                            try {
                                                                                if (n12 != 0) break block66;
                                                                                if (predicate.test(class_26802)) break block67;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw rl.did(matchException);
                                                                            }
                                                                            if (iSArray != null) break block66;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw rl.did(matchException);
                                                                        }
                                                                    }
                                                                    ++n3;
                                                                    d4 += (double)(n8 + n11) + 0.5;
                                                                }
                                                                ++n13;
                                                            }
                                                            if (iSArray != null) continue;
                                                        }
                                                        ++n11;
                                                        if (iSArray != null) continue block52;
                                                    }
                                                    break;
                                                }
                                                ++n9;
                                                if (iSArray != null) continue block50;
                                            }
                                            break;
                                        }
                                    }
                                    ++n5;
                                    if (iSArray != null) continue block48;
                                }
                                break block47;
                                break;
                            }
                            break;
                        }
                        try {
                            Object object2;
                            try {
                                try {
                                    if (n3 <= 0) break block68;
                                    linkedHashMap.put(class_19232, n3);
                                    object2 = map;
                                    if (iSArray == null) break block68;
                                }
                                catch (MatchException matchException) {
                                    throw rl.did(matchException);
                                }
                                if (object2 == null) break block68;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                            object2 = map.put(class_19232, d4);
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    if (iSArray != null) continue;
                }
            }
            predicate3 = predicate2;
        }
        if (predicate3 == null) return linkedHashMap;
        for (class_1297 class_12972 : rD.dlmvG.field_1687.method_18112()) {
            block72: {
                block70: {
                    Object object;
                    block71: {
                        class_1297 class_12973;
                        block69: {
                            try {
                                class_12973 = class_12972;
                                if (iSArray == null) break block69;
                                if (class_12973 == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                            class_12973 = class_12972;
                        }
                        if (class_12973 == rD.dlmvG.field_1724) continue;
                        try {
                            if (!predicate2.test(class_12972) && iSArray != null) continue;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                        class_28182 = new class_1923(class_12972.method_24515());
                        try {
                            try {
                                object = class_28182;
                                if (iSArray == null) break block70;
                                if (rl.dhT((class_1923)object, d3, d2, d)) break block71;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                            if (iSArray != null) continue;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    object = linkedHashMap.merge((class_1923)class_28182, 1, Integer::sum);
                }
                try {
                    Object object;
                    try {
                        object = map;
                        if (iSArray == null || object == null) break block72;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    object = map.merge((class_1923)class_28182, class_12972.method_23318(), Double::sum);
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
            }
            if (iSArray != null) continue;
        }
        return linkedHashMap;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(rl.class, "dif", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
