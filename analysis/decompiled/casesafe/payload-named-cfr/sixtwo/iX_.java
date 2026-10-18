/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.option.KeyBinding
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.effect.StatusEffects
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.util.math.Vec2f
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.client.option.KeyBinding;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.effect.StatusEffects;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.jg;
import sixtwo.mF;
import sixtwo.rD;

public class iX {
    private static mF jomCs;
    public static final KeyBinding[] Ergzg;
    public static final KeyBinding[] HpSlL;
    private static final long UWCYb;
    private static final long[] uATfM;
    private static final Integer[] arYfW;
    private static final Map gTDLH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                iX.UWCYb = gb.aYR(6647284026903975892L, -9119464849414617501L, MethodHandles.lookup().lookupClass()).a(244743953533058L);
                var11 = iX.UWCYb ^ 5648240925718L;
                iX.gTDLH = new HashMap<K, V>(13);
                var0_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var11 >>> 56);
                for (var1_2 = 1; var1_2 < 8; ++var1_2) {
                    v2 = v2;
                    v2[var1_2] = (byte)(var11 << var1_2 * 8 >>> 56);
                }
                var0_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var6_3 = new long[6];
                var3_4 = 0;
                var4_5 = "\u009b\u00c3jq\u00b5\u00b4\u00c6\u00ba\u00e8\u00dd\u00f7\u0091Z\u00e2^w\u0011\u00bd\u0091w&\r\u0089>\u00fa\u0003\u00da\u00c2@g\u00e2\u00cf";
                var5_6 = "\u009b\u00c3jq\u00b5\u00b4\u00c6\u00ba\u00e8\u00dd\u00f7\u0091Z\u00e2^w\u0011\u00bd\u0091w&\r\u0089>\u00fa\u0003\u00da\u00c2@g\u00e2\u00cf".length();
                var2_7 = 0;
                while (true) {
                    var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                    v3 = var6_3;
                    v4 = var3_4++;
                    v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var2_7 < var5_6) ** continue;
                    var4_5 = "!\u00ea\u00a2\u0000<+G\u00b5\u0011\u00e9\u00c8\u0004\u00a0\fV\u00a3";
                    var5_6 = "!\u00ea\u00a2\u0000<+G\u00b5\u0011\u00e9\u00c8\u0004\u00a0\fV\u00a3".length();
                    var2_7 = 0;
                    while (true) {
                        var7_8 = var4_5.substring(var2_7, var2_7 += 8).getBytes("ISO-8859-1");
                        v3 = var6_3;
                        v4 = var3_4++;
                        v5 = ((long)var7_8[0] & 255L) << 56 | ((long)var7_8[1] & 255L) << 48 | ((long)var7_8[2] & 255L) << 40 | ((long)var7_8[3] & 255L) << 32 | ((long)var7_8[4] & 255L) << 24 | ((long)var7_8[5] & 255L) << 16 | ((long)var7_8[6] & 255L) << 8 | (long)var7_8[7] & 255L;
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
                    if (var2_7 < var5_6) ** continue;
                    break block9;
                    break;
                }
            }
            var8_9 = v5;
            var10_10 = var0_1.doFinal(new byte[]{(byte)(var8_9 >>> 56), (byte)(var8_9 >>> 48), (byte)(var8_9 >>> 40), (byte)(var8_9 >>> 32), (byte)(var8_9 >>> 24), (byte)(var8_9 >>> 16), (byte)(var8_9 >>> 8), (byte)var8_9});
            v7 = ((long)var10_10[0] & 255L) << 56 | ((long)var10_10[1] & 255L) << 48 | ((long)var10_10[2] & 255L) << 40 | ((long)var10_10[3] & 255L) << 32 | ((long)var10_10[4] & 255L) << 24 | ((long)var10_10[5] & 255L) << 16 | ((long)var10_10[6] & 255L) << 8 | (long)var10_10[7] & 255L;
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
        iX.uATfM = var6_3;
        iX.arYfW = new Integer[6];
        iX.jomCs = new mF(false, false, false, false);
        iX.Ergzg = new KeyBinding[]{rD.dlmvG.options.forwardKey, rD.dlmvG.options.backKey, rD.dlmvG.options.rightKey, rD.dlmvG.options.leftKey};
        v8 = new KeyBinding[iX.bxW("f", (int)28084, (long)(756953401922601219L ^ var11))];
        v8[0] = rD.dlmvG.options.forwardKey;
        v8[1] = rD.dlmvG.options.backKey;
        v8[2] = rD.dlmvG.options.leftKey;
        v8[3] = rD.dlmvG.options.rightKey;
        v8[4] = rD.dlmvG.options.jumpKey;
        v8[5] = rD.dlmvG.options.sneakKey;
        v8[iX.bxW("f", (int)9070, (long)(2424658367421812698L ^ var11))] = rD.dlmvG.options.sprintKey;
        iX.HpSlL = v8;
    }

    public static void bxF(mF mF2) {
        mF mF3;
        block4: {
            block5: {
                long l2 = UWCYb ^ 0x1598EE66F839L;
                String[] stringArray = jf.bBe();
                try {
                    try {
                        mF3 = mF2;
                        if (stringArray == null) break block4;
                        if (mF3 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw iX.bxT(matchException);
                    }
                    mF3 = new mF(false, false, false, false);
                    break block4;
                }
                catch (MatchException matchException) {
                    throw iX.bxT(matchException);
                }
            }
            mF3 = mF2;
        }
        jomCs = mF3;
    }

    public static double bxE() {
        Vec3d vec3d = rD.dlmvG.player.getVelocity();
        return Math.hypot(vec3d.x, vec3d.z);
    }

    public static boolean bxD(Entity entity) {
        double d2;
        block2: {
            block3: {
                long l2 = UWCYb ^ 0x41248C605FF7L;
                String[] stringArray = jf.bBe();
                try {
                    double d3 = entity.getVelocity().lengthSquared() - 0.08;
                    d2 = d3 == 0.0 ? 0 : (d3 > 0.0 ? 1 : -1);
                    if (stringArray == null) break block2;
                    if (d2 < 0) break block3;
                }
                catch (MatchException matchException) {
                    throw iX.bxT(matchException);
                }
                d2 = 1.0;
                break block2;
            }
            d2 = 0.0;
        }
        return (boolean)d2;
    }

    public static boolean bxC() {
        float f2;
        block6: {
            block8: {
                block7: {
                    long l2 = UWCYb ^ 0x2C295F495065L;
                    Vec2f vec2f = rD.dlmvG.player.input.getMovementInput();
                    String[] stringArray = jf.bBe();
                    try {
                        try {
                            try {
                                float f3 = vec2f.x - 0.0f;
                                f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                                if (stringArray == null) break block6;
                                if (f2 != false) break block7;
                            }
                            catch (MatchException matchException) {
                                throw iX.bxT(matchException);
                            }
                            float f4 = vec2f.y - 0.0f;
                            f2 = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                            if (stringArray == null) break block6;
                        }
                        catch (MatchException matchException) {
                            throw iX.bxT(matchException);
                        }
                        if (f2 == false) break block8;
                    }
                    catch (MatchException matchException) {
                        throw iX.bxT(matchException);
                    }
                }
                f2 = 1.0f;
                break block6;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }

    private static MatchException bxT(MatchException matchException) {
        return matchException;
    }

    public static mF bxG() {
        return jomCs;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public static Vec2f bxO(double var0) {
        block27: {
            block28: {
                block36: {
                    block33: {
                        block32: {
                            block34: {
                                block35: {
                                    block29: {
                                        block30: {
                                            block31: {
                                                var2_1 = iX.UWCYb ^ 122557391465579L;
                                                var5_2 = rD.dlmvG.player.input.getMovementInput();
                                                var6_3 = var5_2.y;
                                                var8_4 = var5_2.x;
                                                var10_5 = rD.dlX().dbC().cGI();
                                                var4_6 = jf.bBe();
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    v0 = var6_3;
                                                                    if (var4_6 == null) break block27;
                                                                    if (v0 == 0.0) break block28;
                                                                }
                                                                catch (MatchException v1) {
                                                                    throw iX.bxT(v1);
                                                                }
                                                                cfr_temp_0 = var8_4 - 0.0;
                                                                v2 = cfr_temp_0 == 0.0 ? 0 : (cfr_temp_0 > 0.0 ? 1 : -1);
                                                                if (var4_6 == null) break block29;
                                                            }
                                                            catch (MatchException v3) {
                                                                throw iX.bxT(v3);
                                                            }
                                                            if (v2 > 0) {
                                                            }
                                                            ** GOTO lbl48
                                                        }
                                                        catch (MatchException v4) {
                                                            throw iX.bxT(v4);
                                                        }
                                                        v5 = var10_5;
                                                        cfr_temp_1 = var6_3 - 0.0;
                                                        v6 /* !! */  = cfr_temp_1 == 0.0 ? 0 : (cfr_temp_1 > 0.0 ? 1 : -1);
                                                        if (var4_6 == null) break block30;
                                                    }
                                                    catch (MatchException v7) {
                                                        throw iX.bxT(v7);
                                                    }
                                                    if (v6 /* !! */  <= 0) break block31;
                                                }
                                                catch (MatchException v8) {
                                                    throw iX.bxT(v8);
                                                }
                                                v6 /* !! */  = (double)iX.bxW("f", (int)26366, (long)(5290507197931747894L ^ var2_1));
                                                break block30;
                                            }
                                            v6 /* !! */  = (double)iX.bxW("f", (int)3313, (long)(3844900860821475388L ^ var2_1));
                                        }
                                        var10_5 = v5 + (float)v6 /* !! */ ;
                                        try {
                                            if (var4_6 != null) break block32;
lbl48:
                                            // 2 sources

                                            v2 = (cfr_temp_2 = var8_4 - 0.0) == 0.0 ? 0 : (cfr_temp_2 < 0.0 ? -1 : 1);
                                        }
                                        catch (MatchException v9) {
                                            throw iX.bxT(v9);
                                        }
                                    }
                                    try {
                                        try {
                                            try {
                                                if (var4_6 == null) break block33;
                                                if (v2 >= 0) break block32;
                                            }
                                            catch (MatchException v10) {
                                                throw iX.bxT(v10);
                                            }
                                            v11 = var10_5;
                                            cfr_temp_3 = var6_3 - 0.0;
                                            v12 /* !! */  = cfr_temp_3 == 0.0 ? 0 : (cfr_temp_3 > 0.0 ? 1 : -1);
                                            if (var4_6 == null) break block34;
                                        }
                                        catch (MatchException v13) {
                                            throw iX.bxT(v13);
                                        }
                                        if (v12 /* !! */  <= 0) break block35;
                                    }
                                    catch (MatchException v14) {
                                        throw iX.bxT(v14);
                                    }
                                    v12 /* !! */  = (double)iX.bxW("f", (int)14791, (long)(2611731505434764556L ^ var2_1));
                                    break block34;
                                }
                                v12 /* !! */  = (double)iX.bxW("f", (int)21932, (long)(920338925348800864L ^ var2_1));
                            }
                            var10_5 = v11 + (float)v12 /* !! */ ;
                        }
                        var8_4 = 0.0;
                        cfr_temp_4 = var6_3 - 0.0;
                        v2 = cfr_temp_4 == 0.0 ? 0 : (cfr_temp_4 > 0.0 ? 1 : -1);
                    }
                    try {
                        if (var4_6 == null) break block36;
                        if (v2 > 0) {
                        }
                        ** GOTO lbl94
                    }
                    catch (MatchException v15) {
                        throw iX.bxT(v15);
                    }
                    var6_3 = 1.0;
                    try {
                        try {
                            if (var4_6 != null) break block28;
lbl94:
                            // 2 sources

                            v0 = var6_3;
                            if (var4_6 == null) break block27;
                        }
                        catch (MatchException v16) {
                            throw iX.bxT(v16);
                        }
                        cfr_temp_5 = v0 - 0.0;
                        v2 = cfr_temp_5 == 0.0 ? 0 : (cfr_temp_5 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException v17) {
                        throw iX.bxT(v17);
                    }
                }
                if (v2 < 0) {
                    var6_3 = -1.0;
                }
            }
            v0 = Math.sin(Math.toRadians(var10_5 + 90.0f));
        }
        var11_7 = v0;
        var13_8 = Math.cos(Math.toRadians(var10_5 + 90.0f));
        var15_9 = var6_3 * var0 * var13_8 + var8_4 * var0 * var11_7;
        var17_10 = var6_3 * var0 * var11_7 - var8_4 * var0 * var13_8;
        return new Vec2f((float)var15_9, (float)var17_10);
    }

    public static boolean bxH(mF mF2) {
        boolean bl2;
        block10: {
            block9: {
                block11: {
                    mF mF3;
                    String[] stringArray;
                    block8: {
                        long l2 = UWCYb ^ 0x334443BB31EFL;
                        stringArray = jf.bBe();
                        try {
                            mF3 = mF2;
                            if (stringArray == null) break block8;
                            if (mF3 == null) break block9;
                        }
                        catch (MatchException matchException) {
                            throw iX.bxT(matchException);
                        }
                        mF3 = mF2;
                    }
                    try {
                        try {
                            try {
                                bl2 = mF3.cnH() ^ mF2.cnI();
                                if (stringArray == null) break block10;
                                if (bl2) break block11;
                            }
                            catch (MatchException matchException) {
                                throw iX.bxT(matchException);
                            }
                            bl2 = mF2.cnJ() ^ mF2.cnK();
                            if (stringArray == null) break block10;
                        }
                        catch (MatchException matchException) {
                            throw iX.bxT(matchException);
                        }
                        if (!bl2) break block9;
                    }
                    catch (MatchException matchException) {
                        throw iX.bxT(matchException);
                    }
                }
                bl2 = true;
                break block10;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static float bxS() {
        double d2 = Math.sqrt(Math.pow(rD.dlmvG.player.getX() - rD.dlmvG.player.lastRenderX, 2.0) + Math.pow(rD.dlmvG.player.getY() - rD.dlmvG.player.lastRenderY, 2.0) + Math.pow(rD.dlmvG.player.getZ() - rD.dlmvG.player.lastRenderZ, 2.0));
        float f2 = (float)(d2 * 20.0);
        return (float)Math.round(f2 * 10.0f) / 10.0f;
    }

    public static Vec3d bxJ(Vec3d vec3d, double d2) {
        return iX.bxK(vec3d, d2, 1.0);
    }

    public static Vec3d bxI(Vec3d vec3d) {
        return iX.bxJ(vec3d, Math.hypot(vec3d.x, vec3d.z));
    }

    private static int bxV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = iX.bxU(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite bxW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/iX" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static boolean bxM(PlayerEntity playerEntity) {
        boolean bl2;
        block26: {
            block28: {
                block27: {
                    long l2 = UWCYb ^ 0x1FF81C8E96B0L;
                    String[] stringArray = jf.bBe();
                    try {
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        bl2 = playerEntity.hasStatusEffect(StatusEffects.BLINDNESS);
                                                                        if (stringArray == null) break block26;
                                                                        if (bl2) break block27;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw iX.bxT(matchException);
                                                                    }
                                                                    bl2 = playerEntity.hasStatusEffect(StatusEffects.LEVITATION);
                                                                    if (stringArray == null) break block26;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw iX.bxT(matchException);
                                                                }
                                                                if (bl2) break block27;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw iX.bxT(matchException);
                                                            }
                                                            bl2 = jg.bBs((LivingEntity)playerEntity);
                                                            if (stringArray == null) break block26;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw iX.bxT(matchException);
                                                        }
                                                        if (bl2) break block27;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw iX.bxT(matchException);
                                                    }
                                                    bl2 = playerEntity.isSubmergedInWater();
                                                    if (stringArray == null) break block26;
                                                }
                                                catch (MatchException matchException) {
                                                    throw iX.bxT(matchException);
                                                }
                                                if (bl2) break block27;
                                            }
                                            catch (MatchException matchException) {
                                                throw iX.bxT(matchException);
                                            }
                                            bl2 = playerEntity.isInLava();
                                            if (stringArray == null) break block26;
                                        }
                                        catch (MatchException matchException) {
                                            throw iX.bxT(matchException);
                                        }
                                        if (bl2) break block27;
                                    }
                                    catch (MatchException matchException) {
                                        throw iX.bxT(matchException);
                                    }
                                    bl2 = playerEntity.isClimbing();
                                    if (stringArray == null) break block26;
                                }
                                catch (MatchException matchException) {
                                    throw iX.bxT(matchException);
                                }
                                if (bl2) break block27;
                            }
                            catch (MatchException matchException) {
                                throw iX.bxT(matchException);
                            }
                            bl2 = playerEntity.getAbilities().flying;
                            if (stringArray == null) break block26;
                        }
                        catch (MatchException matchException) {
                            throw iX.bxT(matchException);
                        }
                        if (!bl2) break block28;
                    }
                    catch (MatchException matchException) {
                        throw iX.bxT(matchException);
                    }
                }
                bl2 = true;
                break block26;
            }
            bl2 = false;
        }
        return bl2;
    }

    public static float bxQ() {
        return iX.bxR(jomCs);
    }

    public static Vec3d bxL(Vec3d vec3d, double d2, double d3, mF mF2) {
        long l2 = UWCYb ^ 0x7A0F7F57740EL;
        try {
            if (!iX.bxH(mF2)) {
                return new Vec3d(0.0, vec3d.y, 0.0);
            }
        }
        catch (MatchException matchException) {
            throw iX.bxT(matchException);
        }
        double d4 = 1.0 - d3;
        double d5 = vec3d.x * d4;
        double d6 = vec3d.z * d4;
        double d7 = d2 * d3;
        double d8 = Math.toRadians(iX.bxR(mF2));
        double d9 = d5 - Math.sin(d8) * d7;
        double d10 = d6 + Math.cos(d8) * d7;
        return new Vec3d(d9, vec3d.y, d10);
    }

    /*
     * Unable to fully structure code
     */
    public static float bxR(mF var0) {
        block37: {
            block36: {
                block34: {
                    block35: {
                        block31: {
                            block33: {
                                block32: {
                                    block30: {
                                        var1_1 = iX.UWCYb ^ 30406572095719L;
                                        var4_2 = rD.dlmvG.player.getYaw();
                                        var3_3 = jf.bBe();
                                        try {
                                            try {
                                                try {
                                                    v0 = var0.cnI();
                                                    if (var3_3 == null) break block30;
                                                    if (v0) {
                                                    }
                                                    ** GOTO lbl28
                                                }
                                                catch (MatchException v1) {
                                                    throw iX.bxT(v1);
                                                }
                                                v0 = var0.cnH();
                                                if (var3_3 == null) break block30;
                                            }
                                            catch (MatchException v2) {
                                                throw iX.bxT(v2);
                                            }
                                            if (!v0) {
                                            }
                                            ** GOTO lbl28
                                        }
                                        catch (MatchException v3) {
                                            throw iX.bxT(v3);
                                        }
                                        var4_2 += 180.0f;
                                        var5_4 = -0.5f;
                                        try {
                                            if (var3_3 != null) break block31;
lbl28:
                                            // 3 sources

                                            v0 = var0.cnH();
                                        }
                                        catch (MatchException v4) {
                                            throw iX.bxT(v4);
                                        }
                                    }
                                    try {
                                        try {
                                            if (var3_3 == null) break block32;
                                            if (!v0) break block33;
                                        }
                                        catch (MatchException v5) {
                                            throw iX.bxT(v5);
                                        }
                                        v0 = var0.cnI();
                                    }
                                    catch (MatchException v6) {
                                        throw iX.bxT(v6);
                                    }
                                }
                                if (v0) break block33;
                                var5_4 = 0.5f;
                                if (var3_3 != null) break block31;
                            }
                            var5_4 = 1.0f;
                        }
                        try {
                            try {
                                try {
                                    v7 = var0.cnJ();
                                    if (var3_3 == null) break block34;
                                    if (!v7) break block35;
                                }
                                catch (MatchException v8) {
                                    throw iX.bxT(v8);
                                }
                                v7 = var0.cnK();
                                if (var3_3 == null) break block34;
                            }
                            catch (MatchException v9) {
                                throw iX.bxT(v9);
                            }
                            if (v7) break block35;
                        }
                        catch (MatchException v10) {
                            throw iX.bxT(v10);
                        }
                        var4_2 -= 90.0f * var5_4;
                    }
                    v7 = var0.cnK();
                }
                try {
                    try {
                        if (var3_3 == null) break block36;
                        if (!v7) break block37;
                    }
                    catch (MatchException v11) {
                        throw iX.bxT(v11);
                    }
                    v7 = var0.cnJ();
                }
                catch (MatchException v12) {
                    throw iX.bxT(v12);
                }
            }
            if (!v7) {
                var4_2 += 90.0f * var5_4;
            }
        }
        return var4_2;
    }

    public static Vec3d bxK(Vec3d vec3d, double d2, double d3) {
        return iX.bxL(vec3d, d2, d3, jomCs);
    }

    /*
     * Unable to fully structure code
     */
    public static double bxP(boolean var0) {
        block22: {
            block23: {
                block20: {
                    block21: {
                        block19: {
                            block18: {
                                block17: {
                                    block15: {
                                        block16: {
                                            var1_1 = iX.UWCYb ^ 7187022147685L;
                                            var4_2 = rD.dlX().dbC().cGI();
                                            var3_3 = jf.bBe();
                                            try {
                                                v0 = rD.dlmvG.player.forwardSpeed;
                                                if (var3_3 == null) break block15;
                                                if (!(v0 < 0.0f)) break block16;
                                            }
                                            catch (MatchException v1) {
                                                throw iX.bxT(v1);
                                            }
                                            var4_2 += 180.0f;
                                        }
                                        v0 = 1.0f;
                                    }
                                    var5_4 = v0;
                                    try {
                                        cfr_temp_0 = rD.dlmvG.player.forwardSpeed - 0.0f;
                                        v2 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 < 0.0f ? -1 : 1);
                                        if (var3_3 == null) break block17;
                                        if (v2 < 0) {
                                        }
                                        ** GOTO lbl28
                                    }
                                    catch (MatchException v3) {
                                        throw iX.bxT(v3);
                                    }
                                    var5_4 = -0.5f;
                                    try {
                                        if (var3_3 != null) break block18;
lbl28:
                                        // 2 sources

                                        v2 = (cfr_temp_1 = rD.dlmvG.player.forwardSpeed - 0.0f) == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                                    }
                                    catch (MatchException v4) {
                                        throw iX.bxT(v4);
                                    }
                                }
                                try {
                                    if (var3_3 == null) break block19;
                                    if (v2 <= 0) break block18;
                                }
                                catch (MatchException v5) {
                                    throw iX.bxT(v5);
                                }
                                var5_4 = 0.5f;
                            }
                            v2 = (cfr_temp_2 = rD.dlmvG.player.sidewaysSpeed - 0.0f) == 0.0f ? 0 : (cfr_temp_2 > 0.0f ? 1 : -1);
                        }
                        try {
                            if (var3_3 == null) break block20;
                            if (v2 <= 0) break block21;
                        }
                        catch (MatchException v6) {
                            throw iX.bxT(v6);
                        }
                        var4_2 -= 90.0f * var5_4;
                    }
                    v2 = (cfr_temp_3 = rD.dlmvG.player.sidewaysSpeed - 0.0f) == 0.0f ? 0 : (cfr_temp_3 < 0.0f ? -1 : 1);
                }
                try {
                    if (var3_3 == null) break block22;
                    if (v2 >= 0) break block23;
                }
                catch (MatchException v7) {
                    throw iX.bxT(v7);
                }
                var4_2 += 90.0f * var5_4;
            }
            v2 = (float)var0;
        }
        try {
            v8 = v2 != false ? Math.toRadians(var4_2) : (double)var4_2;
        }
        catch (MatchException v9) {
            throw iX.bxT(v9);
        }
        return v8;
    }

    public static void bxN(double d2) {
        boolean bl2;
        block2: {
            block3: {
                long l2 = UWCYb ^ 0x201010968E48L;
                String[] stringArray = jf.bBe();
                try {
                    bl2 = iX.bxC();
                    if (stringArray == null) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw iX.bxT(matchException);
                }
                return;
            }
            bl2 = true;
        }
        double d3 = iX.bxP(bl2);
        rD.dlmvG.player.setVelocity(-Math.sin(d3) * d2, rD.dlmvG.player.getVelocity().y, Math.cos(d3) * d2);
    }

    private static int bxU(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x705A;
        if (arYfW[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = uATfM[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])gTDLH.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    gTDLH.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/iX", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            iX.arYfW[n3] = n4;
        }
        return arYfW[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(iX.class, "bxV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

