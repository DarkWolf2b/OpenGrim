/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.hit.BlockHitResult
 *  net.minecraft.util.hit.HitResult$Type
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.RaycastContext
 *  net.minecraft.world.RaycastContext$FluidHandling
 *  net.minecraft.world.RaycastContext$ShapeType
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
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.MinecraftClient;
import net.minecraft.entity.Entity;
import net.minecraft.util.hit.BlockHitResult;
import net.minecraft.util.hit.HitResult;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.RaycastContext;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jg;
import sixtwo.ov;
import sixtwo.pf;
import sixtwo.pg;
import sixtwo.ph;
import sixtwo.rD;

public class pe {
    private static final int CMrqs;
    private final List<pg> xDaXT = new ArrayList<pg>();
    private static final long GrmXe;
    private static final long[] IFSsg;
    private static final Integer[] ZTGgI;
    private static final Map pHZSv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public List<pg> cNd() {
        return this.xDaXT;
    }

    private static int cNg(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = pe.cNf(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int cNf(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5DA6;
        if (ZTGgI[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = IFSsg[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])pHZSv.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    pHZSv.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pe", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            pe.ZTGgI[n3] = n4;
        }
        return ZTGgI[n3];
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        GrmXe = gb.aYR(-3988037882128948230L, -8088075348631620398L, MethodHandles.lookup().lookupClass()).a(799244562155L);
        pHZSv = new HashMap(13);
        long l2 = GrmXe ^ 0x764EE25D8B9AL;
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
        String string = "\u00bdl\u0003\u008cC\u00b0\u00b8\u00cd\u00eb0\u001e\u00f9\u00b3)\u009b\u00e6";
        int n3 = "\u00bdl\u0003\u008cC\u00b0\u00b8\u00cd\u00eb0\u001e\u00f9\u00b3)\u009b\u00e6".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        IFSsg = lArray;
        ZTGgI = new Integer[2];
        CMrqs = (int)pe.cNh("m", (int)20780, (long)(l2 ^ 0x5CFAD86AE4286668L));
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private static boolean cNc(Vec3d vec3d, Vec3d vec3d2) {
        block12: {
            double d2;
            MinecraftClient minecraftClient;
            boolean bl2;
            block11: {
                long l2 = GrmXe ^ 0x47D8FF7C6273L;
                bl2 = ph.cNp();
                try {
                    try {
                        minecraftClient = rD.dlmvG;
                        if (!bl2) break block11;
                        if (minecraftClient.world == null) return false;
                    }
                    catch (MatchException matchException) {
                        throw pe.cNe(matchException);
                    }
                    minecraftClient = rD.dlmvG;
                }
                catch (MatchException matchException) {
                    throw pe.cNe(matchException);
                }
            }
            try {
                if (minecraftClient.player == null) {
                    return false;
                }
            }
            catch (MatchException matchException) {
                throw pe.cNe(matchException);
            }
            try {
                double d3 = vec3d.squaredDistanceTo(vec3d2) - (double)1.0E-5f;
                d2 = d3 == 0.0 ? 0 : (d3 < 0.0 ? -1 : 1);
                if (!bl2) return (boolean)d2;
                if (d2 >= 0) break block12;
            }
            catch (MatchException matchException) {
                throw pe.cNe(matchException);
            }
            d2 = 1.0;
            return (boolean)d2;
        }
        RaycastContext raycastContext = new RaycastContext(vec3d, vec3d2, RaycastContext.ShapeType.OUTLINE, RaycastContext.FluidHandling.NONE, (Entity)rD.dlmvG.player);
        BlockHitResult blockHitResult = rD.dlmvG.world.raycast(raycastContext);
        try {
            if (blockHitResult.getType() != HitResult.Type.MISS) return false;
            return true;
        }
        catch (MatchException matchException) {
            throw pe.cNe(matchException);
        }
    }

    public Vec3d cNa(Entity entity, ov ov2, Vec3d vec3d, ph ph2, float f2, boolean bl2) {
        float f3;
        float f4;
        ph ph3;
        Vec3d vec3d2;
        ov ov3;
        Entity entity2;
        pe pe2;
        long l2 = GrmXe ^ 0x4FE0A4E40C74L;
        try {
            pe2 = this;
            entity2 = entity;
            ov3 = ov2;
            vec3d2 = vec3d;
            ph3 = ph2;
            f4 = f2;
            f3 = bl2 ? 0.0f : 3.0f;
        }
        catch (MatchException matchException) {
            throw pe.cNe(matchException);
        }
        return pe2.cMZ(entity2, ov3, vec3d2, ph3, f4, f3, bl2);
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public Vec3d cMZ(Entity var1_1, ov var2_2, Vec3d var3_3, ph var4_4, float var5_5, float var6_6, boolean var7_7) {
        block106: {
            block108: {
                block107: {
                    block103: {
                        block104: {
                            block105: {
                                block101: {
                                    block102: {
                                        block96: {
                                            block100: {
                                                block99: {
                                                    block98: {
                                                        block97: {
                                                            block95: {
                                                                block85: {
                                                                    var8_8 = pe.GrmXe ^ 78043253635748L;
                                                                    var11_9 = var1_1.getBoundingBox();
                                                                    var12_10 = pf.cNi(var3_3, var11_9, (int)pe.cNh("m", (int)31230, (long)(6475469986634514309L ^ var8_8)));
                                                                    var13_11 = null;
                                                                    var14_12 = null;
                                                                    var10_13 = ph.cNo();
                                                                    var15_14 = 1.7976931348623157E308;
                                                                    var17_15 = 1.7976931348623157E308;
                                                                    var19_16 = (double)var5_5 * (double)var5_5;
                                                                    var21_17 = (double)var6_6 * (double)var6_6;
                                                                    for (Vec3d var24_19 : var12_10) {
                                                                        block90: {
                                                                            block94: {
                                                                                block93: {
                                                                                    block91: {
                                                                                        block92: {
                                                                                            block88: {
                                                                                                block89: {
                                                                                                    block86: {
                                                                                                        block87: {
                                                                                                            v0 = var3_3;
                                                                                                            if (var10_13) break block85;
                                                                                                            var25_21 = v0.squaredDistanceTo(var24_19);
                                                                                                            try {
                                                                                                                try {
                                                                                                                    v1 = var25_21;
                                                                                                                    if (var10_13) break block86;
                                                                                                                    if (!(v1 > var19_16)) break block87;
                                                                                                                }
                                                                                                                catch (MatchException v2) {
                                                                                                                    throw pe.cNe(v2);
                                                                                                                }
                                                                                                                if (!var10_13) continue;
                                                                                                            }
                                                                                                            catch (MatchException v3) {
                                                                                                                throw pe.cNe(v3);
                                                                                                            }
                                                                                                        }
                                                                                                        v1 = this.cNb(var24_19, var3_3, var2_2, var4_4, var11_9);
                                                                                                    }
                                                                                                    var27_22 = v1;
                                                                                                    try {
                                                                                                        try {
                                                                                                            try {
                                                                                                                try {
                                                                                                                    v4 = var7_7;
                                                                                                                    if (var10_13) break block88;
                                                                                                                    if (v4 != 0) {
                                                                                                                    }
                                                                                                                    ** GOTO lbl60
                                                                                                                }
                                                                                                                catch (MatchException v5) {
                                                                                                                    throw pe.cNe(v5);
                                                                                                                }
                                                                                                                v6 = var27_22;
                                                                                                                if (var10_13) break block89;
                                                                                                            }
                                                                                                            catch (MatchException v7) {
                                                                                                                throw pe.cNe(v7);
                                                                                                            }
                                                                                                            if (!(v6 < var15_14)) break block90;
                                                                                                        }
                                                                                                        catch (MatchException v8) {
                                                                                                            throw pe.cNe(v8);
                                                                                                        }
                                                                                                        v6 = var27_22;
                                                                                                    }
                                                                                                    catch (MatchException v9) {
                                                                                                        throw pe.cNe(v9);
                                                                                                    }
                                                                                                }
                                                                                                var15_14 = v6;
                                                                                                var13_11 = var24_19;
                                                                                                try {
                                                                                                    if (!var10_13) break block90;
lbl60:
                                                                                                    // 2 sources

                                                                                                    v4 = pe.cNc(var3_3, var24_19);
                                                                                                }
                                                                                                catch (MatchException v10) {
                                                                                                    throw pe.cNe(v10);
                                                                                                }
                                                                                            }
                                                                                            var29_24 = v4;
                                                                                            try {
                                                                                                try {
                                                                                                    try {
                                                                                                        try {
                                                                                                            v11 = var29_24;
                                                                                                            if (var10_13) break block91;
                                                                                                            if (v11 != 0) {
                                                                                                            }
                                                                                                            ** GOTO lbl95
                                                                                                        }
                                                                                                        catch (MatchException v12) {
                                                                                                            throw pe.cNe(v12);
                                                                                                        }
                                                                                                        v13 = var27_22;
                                                                                                        if (var10_13) break block92;
                                                                                                    }
                                                                                                    catch (MatchException v14) {
                                                                                                        throw pe.cNe(v14);
                                                                                                    }
                                                                                                    if (!(v13 < var15_14)) break block90;
                                                                                                }
                                                                                                catch (MatchException v15) {
                                                                                                    throw pe.cNe(v15);
                                                                                                }
                                                                                                v13 = var27_22;
                                                                                            }
                                                                                            catch (MatchException v16) {
                                                                                                throw pe.cNe(v16);
                                                                                            }
                                                                                        }
                                                                                        var15_14 = v13;
                                                                                        var13_11 = var24_19;
                                                                                        try {
                                                                                            if (!var10_13) break block90;
lbl95:
                                                                                            // 2 sources

                                                                                            v11 = var25_21 == var21_17 ? 0 : (var25_21 < var21_17 ? -1 : 1);
                                                                                        }
                                                                                        catch (MatchException v17) {
                                                                                            throw pe.cNe(v17);
                                                                                        }
                                                                                    }
                                                                                    try {
                                                                                        try {
                                                                                            try {
                                                                                                if (var10_13) break block93;
                                                                                                if (v11 > 0) break block90;
                                                                                            }
                                                                                            catch (MatchException v18) {
                                                                                                throw pe.cNe(v18);
                                                                                            }
                                                                                            v19 = var27_22;
                                                                                            if (var10_13) break block94;
                                                                                        }
                                                                                        catch (MatchException v20) {
                                                                                            throw pe.cNe(v20);
                                                                                        }
                                                                                        cfr_temp_0 = v19 - var17_15;
                                                                                        v11 = cfr_temp_0 == 0.0 ? 0 : (cfr_temp_0 < 0.0 ? -1 : 1);
                                                                                    }
                                                                                    catch (MatchException v21) {
                                                                                        throw pe.cNe(v21);
                                                                                    }
                                                                                }
                                                                                if (v11 >= 0) break block90;
                                                                                v19 = var27_22;
                                                                            }
                                                                            var17_15 = v19;
                                                                            var14_12 = var24_19;
                                                                        }
                                                                        if (!var10_13) continue;
                                                                    }
                                                                    v0 = jg.bBK(var3_3, var11_9);
                                                                }
                                                                var23_18 = v0;
                                                                var24_20 = var3_3.squaredDistanceTo(var23_18);
                                                                try {
                                                                    try {
                                                                        v22 = var24_20;
                                                                        if (var10_13) break block95;
                                                                        if (!(v22 <= var19_16)) break block96;
                                                                    }
                                                                    catch (MatchException v23) {
                                                                        throw pe.cNe(v23);
                                                                    }
                                                                    v22 = this.cNb(var23_18, var3_3, var2_2, var4_4, var11_9);
                                                                }
                                                                catch (MatchException v24) {
                                                                    throw pe.cNe(v24);
                                                                }
                                                            }
                                                            var26_25 = v22;
                                                            try {
                                                                try {
                                                                    v25 = var7_7;
                                                                    if (var10_13) break block97;
                                                                    if (v25 != 0) {
                                                                    }
                                                                    ** GOTO lbl160
                                                                }
                                                                catch (MatchException v26) {
                                                                    throw pe.cNe(v26);
                                                                }
                                                                if (!(var26_25 < var15_14)) break block96;
                                                            }
                                                            catch (MatchException v27) {
                                                                throw pe.cNe(v27);
                                                            }
                                                            var13_11 = var23_18;
                                                            try {
                                                                if (!var10_13) break block96;
lbl160:
                                                                // 2 sources

                                                                v25 = pe.cNc(var3_3, var23_18);
                                                            }
                                                            catch (MatchException v28) {
                                                                throw pe.cNe(v28);
                                                            }
                                                        }
                                                        var28_27 = v25;
                                                        try {
                                                            try {
                                                                try {
                                                                    v29 = var28_27;
                                                                    if (var10_13) break block98;
                                                                    if (v29 != 0) {
                                                                    }
                                                                    ** GOTO lbl189
                                                                }
                                                                catch (MatchException v30) {
                                                                    throw pe.cNe(v30);
                                                                }
                                                                v29 = var26_25 == var15_14 ? 0 : (var26_25 < var15_14 ? -1 : 1);
                                                                if (var10_13) break block98;
                                                            }
                                                            catch (MatchException v31) {
                                                                throw pe.cNe(v31);
                                                            }
                                                            if (v29 < 0) {
                                                            }
                                                            ** GOTO lbl189
                                                        }
                                                        catch (MatchException v32) {
                                                            throw pe.cNe(v32);
                                                        }
                                                        var13_11 = var23_18;
                                                        try {
                                                            if (!var10_13) break block96;
lbl189:
                                                            // 3 sources

                                                            v29 = var28_27;
                                                        }
                                                        catch (MatchException v33) {
                                                            throw pe.cNe(v33);
                                                        }
                                                    }
                                                    try {
                                                        try {
                                                            if (var10_13) break block99;
                                                            if (v29 != 0) break block96;
                                                        }
                                                        catch (MatchException v34) {
                                                            throw pe.cNe(v34);
                                                        }
                                                        v29 = var24_20 == var21_17 ? 0 : (var24_20 < var21_17 ? -1 : 1);
                                                    }
                                                    catch (MatchException v35) {
                                                        throw pe.cNe(v35);
                                                    }
                                                }
                                                try {
                                                    try {
                                                        if (var10_13) break block100;
                                                        if (v29 > 0) break block96;
                                                    }
                                                    catch (MatchException v36) {
                                                        throw pe.cNe(v36);
                                                    }
                                                    v29 = var26_25 == var17_15 ? 0 : (var26_25 < var17_15 ? -1 : 1);
                                                }
                                                catch (MatchException v37) {
                                                    throw pe.cNe(v37);
                                                }
                                            }
                                            if (v29 < 0) {
                                                var14_12 = var23_18;
                                            }
                                        }
                                        try {
                                            v38 = var13_11;
                                            if (var10_13) break block101;
                                            if (v38 == null) break block102;
                                        }
                                        catch (MatchException v39) {
                                            throw pe.cNe(v39);
                                        }
                                        v38 = var13_11;
                                        break block101;
                                    }
                                    v38 = var14_12;
                                }
                                var26_26 = v38;
                                try {
                                    try {
                                        try {
                                            try {
                                                v40 = var26_26;
                                                if (var10_13) break block103;
                                                if (v40 == null) break block104;
                                            }
                                            catch (MatchException v41) {
                                                throw pe.cNe(v41);
                                            }
                                            v42 = this.xDaXT;
                                            if (var10_13) break block105;
                                        }
                                        catch (MatchException v43) {
                                            throw pe.cNe(v43);
                                        }
                                        if (v42.isEmpty()) break block104;
                                    }
                                    catch (MatchException v44) {
                                        throw pe.cNe(v44);
                                    }
                                    v42 = this.xDaXT;
                                }
                                catch (MatchException v45) {
                                    throw pe.cNe(v45);
                                }
                            }
                            for (pg var28_28 : v42) {
                                v40 = var28_28.process(var26_26, var11_9);
                                if (!var10_13) {
                                    var26_26 = v40;
                                    if (!var10_13) continue;
                                }
                                break block103;
                            }
                        }
                        v40 = var26_26;
                    }
                    try {
                        try {
                            if (iS.bwL() != null) break block106;
                            if (!var10_13) break block107;
                        }
                        catch (MatchException v46) {
                            throw pe.cNe(v46);
                        }
                        v47 = false;
                        break block108;
                    }
                    catch (MatchException v48) {
                        throw pe.cNe(v48);
                    }
                }
                v47 = true;
            }
            ph.cNn(v47);
        }
        return v40;
    }

    private static MatchException cNe(MatchException matchException) {
        return matchException;
    }

    /*
     * Exception decompiling
     */
    private double cNb(Vec3d var1_1, Vec3d var2_2, ov var3_3, ph var4_4, Box var5_5) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 1[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    public void cMY(pg pg2) {
        this.xDaXT.add(pg2);
    }

    private static CallSite cNh(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pe" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pe.class, "cNg", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

