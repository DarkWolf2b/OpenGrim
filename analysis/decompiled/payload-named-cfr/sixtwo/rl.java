/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.BlockPos
 *  net.minecraft.util.math.ChunkPos
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.chunk.ChunkSection
 *  net.minecraft.world.chunk.WorldChunk
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
import net.minecraft.block.BlockState;
import net.minecraft.client.MinecraftClient;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.BlockPos;
import net.minecraft.util.math.ChunkPos;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.chunk.ChunkSection;
import net.minecraft.world.chunk.WorldChunk;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ja;
import sixtwo.mT;
import sixtwo.rD;
import sixtwo.rm;

public class rl {
    private final ExecutorService uGYBe = Executors.newSingleThreadExecutor();
    private final AtomicReference<List<BlockPos>> CpYTu = new AtomicReference(List.of());
    private final AtomicReference<List<Vec3d>> pLsVY = new AtomicReference(List.of());
    private final AtomicReference<Map<ChunkPos, Integer>> JBNes = new AtomicReference(Map.of());
    private final AtomicReference<Map<ChunkPos, Double>> ucAmG = new AtomicReference(Map.of());
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
        long l2 = DhLYb ^ 0x7FD951D8B01DL;
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
        String string = "\u0092\u00bd)\u009dF]Yr\u001c\u00df\u008f\u00f7]\u00b8\u00b0\u0084";
        int n3 = "\u0092\u00bd)\u009dF]Yr\u001c\u00df\u008f\u00f7]\u00b8\u00b0\u0084".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
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
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = rl.die(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public boolean dhC() {
        boolean bl2;
        block2: {
            block3: {
                long l2 = DhLYb ^ 0xD25E88B53FAL;
                iS[] iSArray = rm.div();
                try {
                    bl2 = this.ZZxam.get();
                    if (iSArray == null) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static MatchException did(MatchException matchException) {
        return matchException;
    }

    public Map<ChunkPos, Integer> dhD() {
        return this.JBNes.get();
    }

    public void dhH() {
        this.pLsVY.set(List.of());
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean dhM(int n2, Predicate<BlockState> predicate) {
        block12: {
            MinecraftClient minecraftClient;
            iS[] iSArray;
            block11: {
                long l2 = DhLYb ^ 0x5F4228EA4A85L;
                iSArray = rm.div();
                try {
                    try {
                        minecraftClient = rD.dlmvG;
                        if (iSArray == null) break block11;
                        if (minecraftClient.world == null) return false;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    minecraftClient = rD.dlmvG;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
            }
            try {
                if (minecraftClient.player == null) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
            try {
                try {
                    boolean bl2 = this.ZZxam.compareAndSet(false, true);
                    if (iSArray == null) return bl2;
                    if (bl2) break block12;
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
        ((CompletableFuture)CompletableFuture.supplyAsync(() -> rl.dhP(n2, predicate), this.uGYBe).thenAccept(list -> this.CpYTu.set(List.copyOf(list)))).whenComplete((void_, throwable) -> this.ZZxam.set(false));
        return true;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean dhN(int n2, Predicate<BlockState> predicate, Predicate<Entity> predicate2) {
        block12: {
            MinecraftClient minecraftClient;
            iS[] iSArray;
            block11: {
                long l2 = DhLYb ^ 0x77D86B315A2EL;
                iSArray = rm.div();
                try {
                    try {
                        minecraftClient = rD.dlmvG;
                        if (iSArray == null) break block11;
                        if (minecraftClient.world == null) return false;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    minecraftClient = rD.dlmvG;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
            }
            try {
                if (minecraftClient.player == null) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
            try {
                try {
                    boolean bl2 = this.ZZxam.compareAndSet(false, true);
                    if (iSArray == null) return bl2;
                    if (bl2) break block12;
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
            LinkedHashMap<ChunkPos, Double> linkedHashMap = new LinkedHashMap<ChunkPos, Double>();
            Map<ChunkPos, Integer> map = rl.dhR(n2, predicate, predicate2, linkedHashMap);
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
    public boolean dhJ(long l2, int n2, Predicate<BlockState> predicate) {
        boolean bl2;
        boolean bl3;
        block18: {
            boolean bl4;
            iS[] iSArray;
            block16: {
                block17: {
                    MinecraftClient minecraftClient;
                    block15: {
                        long l3 = DhLYb ^ 0x65BF011AA858L;
                        iSArray = rm.div();
                        try {
                            try {
                                minecraftClient = rD.dlmvG;
                                if (iSArray == null) break block15;
                                if (minecraftClient.world == null) return false;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                            minecraftClient = rD.dlmvG;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    try {
                        if (minecraftClient.player == null) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    try {
                        try {
                            bl4 = this.VSIco.cpC(l2);
                            if (iSArray == null) break block16;
                            if (bl4) break block17;
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
                bl4 = this.dhM(n2, predicate);
            }
            bl3 = bl4;
            try {
                try {
                    bl2 = bl3;
                    if (iSArray == null) return bl2;
                    if (!bl2) break block18;
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
        bl2 = bl3;
        return bl2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean dhL(long l2, int n2, Predicate<BlockState> predicate, Predicate<Entity> predicate2) {
        boolean bl2;
        boolean bl3;
        block18: {
            boolean bl4;
            iS[] iSArray;
            block16: {
                block17: {
                    MinecraftClient minecraftClient;
                    block15: {
                        long l3 = DhLYb ^ 0x63CBA7E34EC6L;
                        iSArray = rm.div();
                        try {
                            try {
                                minecraftClient = rD.dlmvG;
                                if (iSArray == null) break block15;
                                if (minecraftClient.world == null) return false;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                            minecraftClient = rD.dlmvG;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    try {
                        if (minecraftClient.player == null) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    try {
                        try {
                            bl4 = this.VSIco.cpC(l2);
                            if (iSArray == null) break block16;
                            if (bl4) break block17;
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
                bl4 = this.dhO(n2, predicate, predicate2);
            }
            bl3 = bl4;
            try {
                try {
                    bl2 = bl3;
                    if (iSArray == null) return bl2;
                    if (!bl2) break block18;
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
        bl2 = bl3;
        return bl2;
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
    public boolean dhO(int n2, Predicate<BlockState> predicate, Predicate<Entity> predicate2) {
        block12: {
            MinecraftClient minecraftClient;
            iS[] iSArray;
            block11: {
                long l2 = DhLYb ^ 0x1BC45BCAC2DCL;
                iSArray = rm.div();
                try {
                    try {
                        minecraftClient = rD.dlmvG;
                        if (iSArray == null) break block11;
                        if (minecraftClient.world == null) return false;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    minecraftClient = rD.dlmvG;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
            }
            try {
                if (minecraftClient.player == null) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
            try {
                try {
                    boolean bl2 = this.ZZxam.compareAndSet(false, true);
                    if (iSArray == null) return bl2;
                    if (bl2) break block12;
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
        ((CompletableFuture)CompletableFuture.supplyAsync(() -> rl.dhS(n2, predicate, predicate2), this.uGYBe).thenAccept(list -> this.pLsVY.set(List.copyOf(list)))).whenComplete((void_, throwable) -> this.ZZxam.set(false));
        return true;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean dhK(long l2, int n2, Predicate<BlockState> predicate, Predicate<Entity> predicate2) {
        boolean bl2;
        boolean bl3;
        block18: {
            boolean bl4;
            iS[] iSArray;
            block16: {
                block17: {
                    MinecraftClient minecraftClient;
                    block15: {
                        long l3 = DhLYb ^ 0x47C2658196DL;
                        iSArray = rm.div();
                        try {
                            try {
                                minecraftClient = rD.dlmvG;
                                if (iSArray == null) break block15;
                                if (minecraftClient.world == null) return false;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                            minecraftClient = rD.dlmvG;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                    }
                    try {
                        if (minecraftClient.player == null) {
                            return false;
                        }
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    try {
                        try {
                            bl4 = this.VSIco.cpC(l2);
                            if (iSArray == null) break block16;
                            if (bl4) break block17;
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
                bl4 = this.dhN(n2, predicate, predicate2);
            }
            bl3 = bl4;
            try {
                try {
                    bl2 = bl3;
                    if (iSArray == null) return bl2;
                    if (!bl2) break block18;
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
        bl2 = bl3;
        return bl2;
    }

    public Map<ChunkPos, Double> dhE() {
        return this.ucAmG.get();
    }

    public List<Vec3d> dhG() {
        return this.pLsVY.get();
    }

    public List<BlockPos> dhB() {
        return this.CpYTu.get();
    }

    private static int die(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x166A;
        if (Ymwbn[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = hWFwR[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])cvnpU.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    cvnpU.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            rl.Ymwbn[n3] = n4;
        }
        return Ymwbn[n3];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static List<BlockPos> dhP(int n2, Predicate<BlockState> predicate) {
        MinecraftClient minecraftClient;
        iS[] iSArray;
        block24: {
            long l2 = DhLYb ^ 0x829291613D3L;
            iSArray = rm.div();
            try {
                try {
                    minecraftClient = rD.dlmvG;
                    if (iSArray == null) break block24;
                    if (minecraftClient.world == null) return List.of();
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                minecraftClient = rD.dlmvG;
            }
            catch (MatchException matchException) {
                throw rl.did(matchException);
            }
        }
        try {
            if (minecraftClient.player == null) {
                return List.of();
            }
        }
        catch (MatchException matchException) {
            throw rl.did(matchException);
        }
        ArrayList<BlockPos> arrayList = new ArrayList<BlockPos>();
        int n3 = (int)Math.floor(rD.dlmvG.player.getX() - (double)n2);
        int n4 = (int)Math.ceil(rD.dlmvG.player.getX() + (double)n2);
        int n5 = rD.dlmvG.world.getBottomY() + 1;
        int n6 = rD.dlmvG.world.getTopYInclusive();
        int n7 = (int)Math.floor(rD.dlmvG.player.getZ() - (double)n2);
        int n8 = (int)Math.ceil(rD.dlmvG.player.getZ() + (double)n2);
        int n9 = n3;
        block18: while (true) {
            int n10 = n9;
            block19: while (n10 <= n4) {
                int n11 = n5;
                block20: while (true) {
                    int n12 = n11;
                    block21: while (n12 <= n6) {
                        n10 = n7;
                        if (iSArray == null) continue block19;
                        for (int i2 = v69695; i2 <= n8; ++i2) {
                            boolean bl2;
                            BlockPos blockPos;
                            block25: {
                                blockPos = new BlockPos(n9, n11, i2);
                                BlockState blockState = rD.dlmvG.world.getBlockState(blockPos);
                                n12 = blockState.isAir() ? 1 : 0;
                                if (iSArray == null) continue block21;
                                try {
                                    block26: {
                                        try {
                                            try {
                                                if (iSArray == null) break block25;
                                                if (n12 == 0) break block26;
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
                                    bl2 = predicate.test(blockState);
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
                                            if (bl2) break block27;
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
                                bl2 = arrayList.add(blockPos);
                                continue;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                        }
                        ++n11;
                        if (iSArray != null) continue block20;
                    }
                    break;
                }
                ++n9;
                if (iSArray != null) continue block18;
            }
            break;
        }
        return arrayList;
    }

    private static boolean dhT(ChunkPos chunkPos, double d2, double d3, double d4) {
        double d5;
        block2: {
            block3: {
                long l2 = DhLYb ^ 0x367D1F559F84L;
                double d6 = (double)chunkPos.getStartX() + 8.0;
                iS[] iSArray = rm.div();
                double d7 = (double)chunkPos.getStartZ() + 8.0;
                double d8 = d2 - d6;
                double d9 = d3 - d7;
                try {
                    double d10 = d8 * d8 + d9 * d9 - d4;
                    d5 = d10 == 0.0 ? 0 : (d10 < 0.0 ? -1 : 1);
                    if (iSArray == null) break block2;
                    if (d5 > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                d5 = 1.0;
                break block2;
            }
            d5 = 0.0;
        }
        return (boolean)d5;
    }

    public static Map<ChunkPos, Integer> dhQ(int n2, Predicate<BlockState> predicate, Predicate<Entity> predicate2) {
        return rl.dhR(n2, predicate, predicate2, null);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static List<Vec3d> dhS(int n2, Predicate<BlockState> predicate, Predicate<Entity> predicate2) {
        Predicate<BlockState> predicate3;
        double d2;
        double d3;
        double d4;
        ArrayList<Vec3d> arrayList;
        iS[] iSArray;
        block52: {
            block53: {
                MinecraftClient minecraftClient;
                long l2;
                block51: {
                    l2 = DhLYb ^ 0x46AB4E99CE4L;
                    iSArray = rm.div();
                    try {
                        try {
                            minecraftClient = rD.dlmvG;
                            if (iSArray == null) break block51;
                            if (minecraftClient.world == null) return List.of();
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                        minecraftClient = rD.dlmvG;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                }
                try {
                    if (minecraftClient.player == null) {
                        return List.of();
                    }
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                arrayList = new ArrayList<Vec3d>();
                d4 = rD.dlmvG.player.getX();
                d3 = rD.dlmvG.player.getZ();
                d2 = n2 * n2;
                try {
                    predicate3 = predicate;
                    if (iSArray == null) break block52;
                    if (predicate3 == null) break block53;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                int n3 = rD.dlmvG.world.getBottomY();
                Entity entity = ja.byG();
                block40: for (WorldChunk worldChunk : entity) {
                    block41: while (true) {
                        int n4;
                        ChunkPos chunkPos;
                        WorldChunk worldChunk2;
                        block54: {
                            block55: {
                                worldChunk2 = worldChunk;
                                chunkPos = worldChunk2.getPos();
                                if (iSArray == null) return arrayList;
                                try {
                                    try {
                                        n4 = rl.dhT(chunkPos, d4, d3, d2);
                                        if (iSArray == null) break block54;
                                        if (n4 != 0) break block55;
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
                            n4 = chunkPos.getStartX();
                        }
                        int n5 = n4;
                        int n6 = chunkPos.getStartZ();
                        ChunkSection[] chunkSectionArray = worldChunk2.getSectionArray();
                        int n7 = 0;
                        block42: while (true) {
                            int n8 = n7;
                            block43: while (n8 < chunkSectionArray.length) {
                                block56: {
                                    int n9;
                                    ChunkSection chunkSection;
                                    block57: {
                                        chunkSection = chunkSectionArray[n7];
                                        try {
                                            if (iSArray == null) continue block42;
                                            worldChunk = chunkSection;
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
                                                            if (worldChunk == null) break block56;
                                                            n9 = chunkSection.isEmpty();
                                                            if (iSArray == null) break block57;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw rl.did(matchException);
                                                        }
                                                        if (n9 == 0) break block58;
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
                                            n9 = n3 + n7 * rl.dig("m", (int)1115, (long)(0x7E42F904B34EE989L ^ l2));
                                        }
                                        catch (MatchException matchException) {
                                            throw rl.did(matchException);
                                        }
                                    }
                                    int n10 = n9;
                                    int n11 = 0;
                                    block44: while (true) {
                                        int n12 = n11;
                                        block45: while (n12 < rl.dig("m", (int)21912, (long)(0x5E722A045263384BL ^ l2))) {
                                            n8 = 0;
                                            if (iSArray == null) continue block43;
                                            int n13 = n8;
                                            block46: while (true) {
                                                int n14 = n13;
                                                block47: while (n14 < rl.dig("m", (int)21912, (long)(0x5E722A045263384BL ^ l2))) {
                                                    n12 = 0;
                                                    if (iSArray == null) continue block45;
                                                    int n15 = n12;
                                                    while (n15 < rl.dig("m", (int)21912, (long)(0x5E722A045263384BL ^ l2))) {
                                                        block59: {
                                                            block60: {
                                                                BlockState blockState = chunkSection.getBlockState(n11, n13, n15);
                                                                try {
                                                                    if (iSArray == null) break block59;
                                                                    n14 = blockState.isAir() ? 1 : 0;
                                                                    if (iSArray == null) continue block47;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw rl.did(matchException);
                                                                }
                                                                try {
                                                                    boolean bl2;
                                                                    block61: {
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    if (n14 != 0) break block60;
                                                                                    bl2 = predicate.test(blockState);
                                                                                    if (iSArray == null) break block60;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw rl.did(matchException);
                                                                                }
                                                                                if (bl2) break block61;
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
                                                                    bl2 = arrayList.add(new Vec3d((double)(n5 + n11) + 0.5, (double)(n10 + n13) + 0.5, (double)(n6 + n15) + 0.5));
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw rl.did(matchException);
                                                                }
                                                            }
                                                            ++n15;
                                                        }
                                                        if (iSArray != null) continue;
                                                    }
                                                    ++n13;
                                                    if (iSArray != null) continue block46;
                                                }
                                                break;
                                            }
                                            ++n11;
                                            if (iSArray != null) continue block44;
                                        }
                                        break;
                                    }
                                }
                                ++n7;
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
        for (Entity entity : rD.dlmvG.world.getEntities()) {
            block63: {
                boolean bl3;
                block64: {
                    Entity entity2;
                    block62: {
                        try {
                            entity2 = entity;
                            if (iSArray == null) break block62;
                            if (entity2 == null) continue;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                        entity2 = entity;
                    }
                    if (entity2 == rD.dlmvG.player) continue;
                    try {
                        if (!predicate2.test(entity) && iSArray != null) continue;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                    ChunkPos chunkPos = new ChunkPos(entity.getBlockPos());
                    try {
                        try {
                            bl3 = rl.dhT(chunkPos, d4, d3, d2);
                            if (iSArray == null) break block63;
                            if (bl3) break block64;
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
                bl3 = arrayList.add(entity.getEntityPos());
            }
            if (iSArray != null) continue;
        }
        return arrayList;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static Map<ChunkPos, Integer> dhR(int n2, Predicate<BlockState> predicate, Predicate<Entity> predicate2, Map<ChunkPos, Double> map) {
        WorldChunk worldChunk;
        Predicate<BlockState> predicate3;
        double d2;
        double d3;
        double d4;
        LinkedHashMap<ChunkPos, Integer> linkedHashMap;
        iS[] iSArray;
        block58: {
            block59: {
                MinecraftClient minecraftClient;
                long l2;
                block57: {
                    l2 = DhLYb ^ 0x22263B6FE29DL;
                    iSArray = rm.div();
                    try {
                        try {
                            minecraftClient = rD.dlmvG;
                            if (iSArray == null) break block57;
                            if (minecraftClient.world == null) return Map.of();
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                        minecraftClient = rD.dlmvG;
                    }
                    catch (MatchException matchException) {
                        throw rl.did(matchException);
                    }
                }
                try {
                    if (minecraftClient.player == null) {
                        return Map.of();
                    }
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                linkedHashMap = new LinkedHashMap<ChunkPos, Integer>();
                d4 = rD.dlmvG.player.getX();
                d3 = rD.dlmvG.player.getZ();
                d2 = n2 * n2;
                List<WorldChunk> list = ja.byG();
                try {
                    predicate3 = predicate;
                    if (iSArray == null) break block58;
                    if (predicate3 == null) break block59;
                }
                catch (MatchException matchException) {
                    throw rl.did(matchException);
                }
                int n3 = rD.dlmvG.world.getBottomY();
                block46: for (Object object : list) {
                    block68: {
                        double d5;
                        int n4;
                        ChunkPos chunkPos;
                        block47: while (true) {
                            int n5;
                            block60: {
                                block61: {
                                    worldChunk = (WorldChunk)object;
                                    chunkPos = worldChunk.getPos();
                                    if (iSArray == null) return linkedHashMap;
                                    try {
                                        try {
                                            n5 = rl.dhT(chunkPos, d4, d3, d2);
                                            if (iSArray == null) break block60;
                                            if (n5 != 0) break block61;
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
                                n5 = 0;
                            }
                            n4 = n5;
                            d5 = 0.0;
                            ChunkSection[] chunkSectionArray = worldChunk.getSectionArray();
                            int n6 = 0;
                            block48: while (true) {
                                int n7 = n6;
                                block49: while (n7 < chunkSectionArray.length) {
                                    block62: {
                                        int n8;
                                        ChunkSection chunkSection;
                                        block63: {
                                            chunkSection = chunkSectionArray[n6];
                                            try {
                                                if (iSArray == null) continue block48;
                                                object = chunkSection;
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
                                                                n8 = chunkSection.isEmpty();
                                                                if (iSArray == null) break block63;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw rl.did(matchException);
                                                            }
                                                            if (n8 == 0) break block64;
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
                                                n8 = n3 + n6 * rl.dig("m", (int)21912, (long)(0x5E720C48DDE54632L ^ l2));
                                            }
                                            catch (MatchException matchException) {
                                                throw rl.did(matchException);
                                            }
                                        }
                                        int n9 = n8;
                                        int n10 = 0;
                                        block50: while (true) {
                                            int n11 = n10;
                                            block51: while (n11 < rl.dig("m", (int)21912, (long)(0x5E720C48DDE54632L ^ l2))) {
                                                n7 = 0;
                                                if (iSArray == null) continue block49;
                                                int n12 = n7;
                                                block52: while (true) {
                                                    int n13 = n12;
                                                    block53: while (n13 < rl.dig("m", (int)21912, (long)(0x5E720C48DDE54632L ^ l2))) {
                                                        n11 = 0;
                                                        if (iSArray == null) continue block51;
                                                        int n14 = n11;
                                                        while (n14 < rl.dig("m", (int)21912, (long)(0x5E720C48DDE54632L ^ l2))) {
                                                            block65: {
                                                                block66: {
                                                                    block67: {
                                                                        BlockState blockState = chunkSection.getBlockState(n10, n12, n14);
                                                                        try {
                                                                            if (iSArray == null) break block65;
                                                                            n13 = blockState.isAir() ? 1 : 0;
                                                                            if (iSArray == null) continue block53;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw rl.did(matchException);
                                                                        }
                                                                        try {
                                                                            try {
                                                                                if (n13 != 0) break block66;
                                                                                if (predicate.test(blockState)) break block67;
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
                                                                    ++n4;
                                                                    d5 += (double)(n9 + n12) + 0.5;
                                                                }
                                                                ++n14;
                                                            }
                                                            if (iSArray != null) continue;
                                                        }
                                                        ++n12;
                                                        if (iSArray != null) continue block52;
                                                    }
                                                    break;
                                                }
                                                ++n10;
                                                if (iSArray != null) continue block50;
                                            }
                                            break;
                                        }
                                    }
                                    ++n6;
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
                                    if (n4 <= 0) break block68;
                                    linkedHashMap.put(chunkPos, n4);
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
                            object2 = map.put(chunkPos, d5);
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
        for (Entity entity : rD.dlmvG.world.getEntities()) {
            block72: {
                block70: {
                    Object object;
                    block71: {
                        Entity entity2;
                        block69: {
                            try {
                                entity2 = entity;
                                if (iSArray == null) break block69;
                                if (entity2 == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw rl.did(matchException);
                            }
                            entity2 = entity;
                        }
                        if (entity2 == rD.dlmvG.player) continue;
                        try {
                            if (!predicate2.test(entity) && iSArray != null) continue;
                        }
                        catch (MatchException matchException) {
                            throw rl.did(matchException);
                        }
                        worldChunk = new ChunkPos(entity.getBlockPos());
                        try {
                            try {
                                object = worldChunk;
                                if (iSArray == null) break block70;
                                if (rl.dhT((ChunkPos)object, d4, d3, d2)) break block71;
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
                    object = linkedHashMap.merge((ChunkPos)worldChunk, 1, Integer::sum);
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
                    object = map.merge((ChunkPos)worldChunk, entity.getY(), Double::sum);
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

