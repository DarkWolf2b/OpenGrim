/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.block.BlockState
 *  net.minecraft.fluid.Fluid
 *  net.minecraft.fluid.Fluids
 *  net.minecraft.item.Item
 *  net.minecraft.item.Items
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.block.BlockState;
import net.minecraft.fluid.Fluid;
import net.minecraft.fluid.Fluids;
import net.minecraft.item.Item;
import net.minecraft.item.Items;
import sixtwo.cJ;
import sixtwo.cK;
import sixtwo.dh;
import sixtwo.gT;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gn;
import sixtwo.gr;
import sixtwo.gs;
import sixtwo.hG;
import sixtwo.ha;
import sixtwo.ja;
import sixtwo.mr;
import sixtwo.rD;

public class dk
extends gg {
    private final cK emDeH;
    private final cJ AwjXZ;
    private final cJ JTZwR;
    private static final long BVgZr;
    private static final long[] tYNOc;
    private static final Integer[] fiAab;
    private static final Map Thkfx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dk() {
        long l2 = BVgZr ^ 0x3BD1990C3272L;
        super(gf.aZL((int)dk.agI("m", (int)23928, (long)(0x535978C6E3E3F13CL ^ l2)), false, gh.nOCvV).aZS(false));
        Item[] itemArray = new Item[dk.agI("m", (int)17078, (long)(0xF6BB21DBDE6EEE2L ^ l2))];
        itemArray[0] = Items.ANCIENT_DEBRIS;
        itemArray[1] = Items.DIAMOND_ORE;
        itemArray[2] = Items.GOLD_ORE;
        itemArray[3] = Items.IRON_ORE;
        itemArray[4] = Items.EMERALD_ORE;
        itemArray[5] = Items.REDSTONE_ORE;
        itemArray[dk.agI("m", (int)19312, (long)(0x6DD13A16FC926735L ^ l2))] = Items.LAPIS_ORE;
        itemArray[dk.agI("m", (int)24317, (long)(0x122ED4D7DC02F2A8L ^ l2))] = Items.COAL_ORE;
        itemArray[dk.agI("m", (int)1387, (long)(0x4ED2E0D81146A926L ^ l2))] = Items.NETHER_QUARTZ_ORE;
        itemArray[dk.agI("m", (int)27359, (long)(0x17C49114C91F469FL ^ l2))] = Items.DEEPSLATE_DIAMOND_ORE;
        itemArray[dk.agI("m", (int)6475, (long)(0x7A6CBD27F1FBB508L ^ l2))] = Items.DEEPSLATE_GOLD_ORE;
        itemArray[dk.agI("m", (int)3230, (long)(0x577B3A139327A0D2L ^ l2))] = Items.DEEPSLATE_IRON_ORE;
        itemArray[dk.agI("m", (int)21425, (long)(0xEA759AE7385FFFFL ^ l2))] = Items.DEEPSLATE_EMERALD_ORE;
        itemArray[dk.agI("m", (int)22671, (long)(0x158045060F83F4C5L ^ l2))] = Items.DEEPSLATE_REDSTONE_ORE;
        itemArray[dk.agI("m", (int)5557, (long)(0x43DDAE2B1B9039E8L ^ l2))] = Items.DEEPSLATE_LAPIS_ORE;
        itemArray[dk.agI("m", (int)22990, (long)(0x113686DE0E8E758FL ^ l2))] = Items.NETHER_GOLD_ORE;
        itemArray[dk.agI("m", (int)31044, (long)(0x277AF79F80E4D50DL ^ l2))] = Items.COPPER_ORE;
        itemArray[dk.agI("m", (int)25291, (long)(0x60814754FD76CE8DL ^ l2))] = Items.DEEPSLATE_COPPER_ORE;
        itemArray[dk.agI("m", (int)6196, (long)(0x15C70BF29EFE3463L ^ l2))] = Items.BEDROCK;
        this.emDeH = new cK(this, mr.clS(new int[]{(int)dk.agI("m", (int)15840, (long)(0x57F2B9E9EB4891ABL ^ l2)), (int)dk.agI("m", (int)24629, (long)(0x5FA4530AFFA14C7DL ^ l2)), (int)dk.agI("m", (int)27016, (long)(0x68493B565BD45D6L ^ l2)), (int)dk.agI("m", (int)11575, (long)(0x4E921369CA448166L ^ l2))})).WK(itemArray);
        this.AwjXZ = new cJ(this, mr.clS(new int[]{(int)dk.agI("m", (int)26845, (long)(0x7A6D173F0B22448DL ^ l2)), (int)dk.agI("m", (int)28272, (long)(0x70FF56214A93C237L ^ l2)), (int)dk.agI("m", (int)23372, (long)(0x573BD905004FF710L ^ l2)), (int)dk.agI("m", (int)30419, (long)(0x6437C9236D615A81L ^ l2)), (int)dk.agI("m", (int)3990, (long)(0x1DF25C26D5EF23C0L ^ l2))})).WE(false);
        this.JTZwR = new cJ(this, mr.clS(new int[]{(int)dk.agI("m", (int)14102, (long)(0x526E2897625F9B54L ^ l2)), (int)dk.agI("m", (int)25727, (long)(0x164112F1E9C5482CL ^ l2)), (int)dk.agI("m", (int)10182, (long)(0x2477D8E230CA0B89L ^ l2)), (int)dk.agI("m", (int)25727, (long)(0x164112F1E9C5482CL ^ l2))})).WE(false);
        this.bwI().forEach(cB2 -> cB2.Vd(ja::byJ));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                dk.BVgZr = gb.aYR(5056340219880094500L, 6142770863447593462L, MethodHandles.lookup().lookupClass()).a(50335092989352L);
                dk.Thkfx = new HashMap<K, V>(13);
                var0 = dk.BVgZr ^ 135957180664667L;
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[27];
                var5_4 = 0;
                var6_5 = "\u00826\u0094&\u0083\u00e3\u00b7\u0012j\u00f8\u00aa0\u00eb\u00d3Ru{\u00d4ni!p\u00be\u00fc\u009f\u0090\"\u00f0\u00f7\u00a1v\u00b1\t\u009cR/\u00a8\u007f5m\u00cbq\u00d7\u00beH\u00ba\u00f6\u00d0\u0002)\u00d7\u00f7\u00fa{\u00ff\u00cc\u0018\u00b6F# \u001f\u00ad\u001a\u0012\u00e6\u0096\u00ad2}8\u0018n\u00de\u00f8\u0096\u009d\u00e4\u00f9\u00f5\f]B=\u00fe\u00eb\u00be\u00f0\u00a823\u00a2Z\u00afI\u00d8Vv\u0004\u00e5O8Z\u00a0w\u00de\u00b2\u00aa\u007fd\u00cd\u00030\u0092\u00cb\u00ce\u00a6\u00dc\u00c8K\u0093?w&e\u00a0\u00e11\u00c3\u00cd=Z\u00da1#\u0083]\u00bf\f/\u00fe\u00ab\u00e4\u00c131\u00aa\u0010\u00b8\u0013\u00a6\u008a\u0087I\u0088\u00a5\u0018\u00de\u00c9\u001dBx\u0091\u00a5\\$\u009a\u0093\u00ed\u00e5m>\u00c9\u00e3\u00a7\u001bD\u0013\u001a<yLn\u00b3\u00e5L\u008f8\u00c9\u00f4O\u00fcf\u008a\u00dd#\u00a2\u009cv\u0016";
                var7_6 = "\u00826\u0094&\u0083\u00e3\u00b7\u0012j\u00f8\u00aa0\u00eb\u00d3Ru{\u00d4ni!p\u00be\u00fc\u009f\u0090\"\u00f0\u00f7\u00a1v\u00b1\t\u009cR/\u00a8\u007f5m\u00cbq\u00d7\u00beH\u00ba\u00f6\u00d0\u0002)\u00d7\u00f7\u00fa{\u00ff\u00cc\u0018\u00b6F# \u001f\u00ad\u001a\u0012\u00e6\u0096\u00ad2}8\u0018n\u00de\u00f8\u0096\u009d\u00e4\u00f9\u00f5\f]B=\u00fe\u00eb\u00be\u00f0\u00a823\u00a2Z\u00afI\u00d8Vv\u0004\u00e5O8Z\u00a0w\u00de\u00b2\u00aa\u007fd\u00cd\u00030\u0092\u00cb\u00ce\u00a6\u00dc\u00c8K\u0093?w&e\u00a0\u00e11\u00c3\u00cd=Z\u00da1#\u0083]\u00bf\f/\u00fe\u00ab\u00e4\u00c131\u00aa\u0010\u00b8\u0013\u00a6\u008a\u0087I\u0088\u00a5\u0018\u00de\u00c9\u001dBx\u0091\u00a5\\$\u009a\u0093\u00ed\u00e5m>\u00c9\u00e3\u00a7\u001bD\u0013\u001a<yLn\u00b3\u00e5L\u008f8\u00c9\u00f4O\u00fcf\u008a\u00dd#\u00a2\u009cv\u0016".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "\u00ee\u001e\u0086}\u009c\u00c8\u009f[\u0080gi\u00a16\u00e2_\u00d6";
                    var7_6 = "\u00ee\u001e\u0086}\u009c\u00c8\u009f[\u0080gi\u00a16\u00e2_\u00d6".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl52:
                // 1 sources

                ** continue;
            }
        }
        dk.tYNOc = var8_3;
        dk.fiAab = new Integer[27];
    }

    @Override
    public void aaj() {
        super.aaj();
        rD.dlmvG.chunkCullingEnabled = false;
        ja.byJ();
    }

    public boolean agA(BlockState blockState) {
        return this.emDeH.WZ(blockState);
    }

    @Override
    public void YO() {
        super.YO();
        rD.dlmvG.chunkCullingEnabled = true;
        ja.byJ();
    }

    @hG
    public void agz(ha ha2) {
        ha2.bdX(true);
        ha2.bcp(1.0f);
    }

    @hG
    public void agv(gs gs2) {
        long l2 = BVgZr ^ 0x86A56AE3D44L;
        try {
            if (!this.agA(gs2.bbs())) {
                gs2.bdX(true);
            }
        }
        catch (MatchException matchException) {
            throw dk.agF(matchException);
        }
    }

    @hG
    public void agy(gT gT2) {
        gT2.bdX(true);
    }

    public cK agB() {
        return this.emDeH;
    }

    @hG
    public void agw(gr gr2) {
        long l2 = BVgZr ^ 0x3B613B51A9F6L;
        try {
            if (!this.agA(gr2.bbr())) {
                gr2.bdX(true);
            }
        }
        catch (MatchException matchException) {
            throw dk.agF(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void agx(gn var1_1) {
        block29: {
            block30: {
                block28: {
                    block26: {
                        var2_2 = dk.BVgZr ^ 113514858299346L;
                        var5_3 = var1_1.bbg();
                        var4_4 = dh.afl();
                        try {
                            block27: {
                                try {
                                    try {
                                        try {
                                            v0 = var5_3.isOf((Fluid)Fluids.WATER);
                                            if (var4_4 != null) break block26;
                                            if (v0) break block27;
                                        }
                                        catch (MatchException v1) {
                                            throw dk.agF(v1);
                                        }
                                        v2 = var5_3.isOf((Fluid)Fluids.FLOWING_WATER);
                                        if (var4_4 != null) break block28;
                                    }
                                    catch (MatchException v3) {
                                        throw dk.agF(v3);
                                    }
                                    if (v2) {
                                    }
                                    ** GOTO lbl38
                                }
                                catch (MatchException v4) {
                                    throw dk.agF(v4);
                                }
                            }
                            v0 = this.AwjXZ.WF();
                        }
                        catch (MatchException v5) {
                            throw dk.agF(v5);
                        }
                    }
                    try {
                        try {
                            if (v0) break block29;
                            var1_1.bdX(true);
                            if (var4_4 == null) break block29;
                        }
                        catch (MatchException v6) {
                            throw dk.agF(v6);
                        }
lbl38:
                        // 2 sources

                        v2 = var5_3.isOf((Fluid)Fluids.LAVA);
                    }
                    catch (MatchException v7) {
                        throw dk.agF(v7);
                    }
                }
                try {
                    block31: {
                        try {
                            try {
                                try {
                                    if (var4_4 != null) break block30;
                                    if (v2) break block31;
                                }
                                catch (MatchException v8) {
                                    throw dk.agF(v8);
                                }
                                v2 = var5_3.isOf((Fluid)Fluids.FLOWING_LAVA);
                                if (var4_4 != null) break block30;
                            }
                            catch (MatchException v9) {
                                throw dk.agF(v9);
                            }
                            if (v2) {
                            }
                            ** GOTO lbl76
                        }
                        catch (MatchException v10) {
                            throw dk.agF(v10);
                        }
                    }
                    v2 = this.JTZwR.WF();
                }
                catch (MatchException v11) {
                    throw dk.agF(v11);
                }
            }
            try {
                try {
                    if (v2) break block29;
                    var1_1.bdX(true);
                    if (var4_4 == null) break block29;
                }
                catch (MatchException v12) {
                    throw dk.agF(v12);
                }
lbl76:
                // 2 sources

                var1_1.bdX(true);
            }
            catch (MatchException v13) {
                throw dk.agF(v13);
            }
        }
    }

    public cJ agC() {
        return this.AwjXZ;
    }

    private static int agG(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x44B1;
        if (fiAab[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = tYNOc[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Thkfx.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Thkfx.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dk", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dk.fiAab[n3] = n4;
        }
        return fiAab[n3];
    }

    public cJ agD() {
        return this.JTZwR;
    }

    private static int agH(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dk.agG(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static MatchException agF(MatchException matchException) {
        return matchException;
    }

    private static CallSite agI(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dk" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dk.class, "agH", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

