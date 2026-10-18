/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.Camera
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.util.math.Vec3d
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
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.Camera;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.entity.LivingEntity;
import net.minecraft.util.math.Vec3d;
import sixtwo.cZ;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mG;
import sixtwo.ml;

final class cZ$su {
    private final List<ml> FYVSB;
    private final UUID Abjlp;
    private boolean nYGDp;
    private static final long byLhk = gb.aYR(-3416882283050841335L, -5259282583627597540L, MethodHandles.lookup().lookupClass()).a(87722170772133L);
    private static final long[] dzFFK;
    private static final Integer[] EqhUH;
    private static final Map uPfsb;
    private static final long[] NMglr;
    private static final Long[] alVkZ;
    private static final Map affoO;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    private cZ$su(LivingEntity var1_1, int var2_2, float var3_3, long var4_4, mG var6_5, float var7_6) {
        block9: {
            block8: {
                var8_7 = cZ$su.byLhk ^ 81915334647140L;
                v0 = dh.afl();
                super();
                this.FYVSB = new ArrayList<ml>();
                this.nYGDp = true;
                var10_8 = v0;
                this.Abjlp = var1_1.getUuid();
                var11_9 = var1_1.getEntityPos();
                var12_10 = var1_1.getWidth();
                var13_11 = var1_1.getHeight();
                var14_12 = new Vec3d(var11_9.x, var11_9.y + (double)var13_11 * 0.5, var11_9.z);
                var15_13 = Math.toRadians(var1_1.bodyYaw);
                var17_14 = Math.sin(var15_13);
                var19_15 = Math.cos(var15_13);
                var21_16 = (float)Math.sqrt(var12_10 * var12_10 + var13_11 * var13_11);
                var22_17 = cZ.abf(var1_1);
                try {
                    try {
                        if (var10_8 != null) break block8;
                        if (var22_17.isEmpty()) {
                        }
                        ** GOTO lbl32
                    }
                    catch (MatchException v1) {
                        throw cZ$su.doc(v1);
                    }
                    this.dnX(var2_2, var11_9, var14_12, var12_10, var13_11, var21_16, var7_6, var17_14, var19_15, var3_3, var4_4, var6_5);
                }
                catch (MatchException v2) {
                    throw cZ$su.doc(v2);
                }
            }
            try {
                if (var10_8 == null) break block9;
lbl32:
                // 2 sources

                this.dnW(var2_2, var22_17, var11_9, var14_12, var13_11, var21_16, var7_6, var17_14, var19_15, var3_3, var4_4, var6_5);
            }
            catch (MatchException v3) {
                throw cZ$su.doc(v3);
            }
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        uPfsb = new HashMap(13);
        long l2 = byLhk ^ 0x2975064E6BDDL;
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
        String string = "\u00b0.j\u009fR\u0017\u001e\u00e6 /\u0093z\u00d3\\\u00f6\u001b";
        int n3 = "\u00b0.j\u009fR\u0017\u001e\u00e6 /\u0093z\u00d3\\\u00f6\u001b".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        dzFFK = lArray;
        EqhUH = new Integer[2];
        affoO = new HashMap(13);
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray5 = new byte[8];
        byte[] byArray6 = byArray5;
        byArray5[0] = (byte)(l2 >>> 56);
        for (int i3 = 1; i3 < 8; ++i3) {
            byArray6 = byArray6;
            byArray6[i3] = (byte)(l2 << i3 * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray6)), new IvParameterSpec(new byte[8]));
        long[] lArray2 = new long[2];
        int n6 = 0;
        String string2 = "\u0005S`\u00b2\u00a5\u0095\u00afk\u009e9g)\u00d6\u00a1z\u00fc";
        int n7 = "\u0005S`\u00b2\u00a5\u0095\u00afk\u009e9g)\u00d6\u00a1z\u00fc".length();
        int n8 = 0;
        do {
            byte[] byArray7 = string2.substring(n8, n8 += 8).getBytes("ISO-8859-1");
            int n9 = n6++;
            long l4 = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
            byte[] byArray8 = cipher2.doFinal(new byte[]{(byte)(l4 >>> 56), (byte)(l4 >>> 48), (byte)(l4 >>> 40), (byte)(l4 >>> 32), (byte)(l4 >>> 24), (byte)(l4 >>> 16), (byte)(l4 >>> 8), (byte)l4});
            lArray2[n9] = ((long)byArray8[0] & 0xFFL) << 56 | ((long)byArray8[1] & 0xFFL) << 48 | ((long)byArray8[2] & 0xFFL) << 40 | ((long)byArray8[3] & 0xFFL) << 32 | ((long)byArray8[4] & 0xFFL) << 24 | ((long)byArray8[5] & 0xFFL) << 16 | ((long)byArray8[6] & 0xFFL) << 8 | (long)byArray8[7] & 0xFFL;
        } while (n8 < n7);
        NMglr = lArray2;
        alVkZ = new Long[2];
    }

    private static MatchException doc(MatchException matchException) {
        return matchException;
    }

    private void dnW(int n2, List<float[]> list, Vec3d vec3d, Vec3d vec3d2, float f2, float f3, float f4, double d2, double d3, float f5, long l2, mG mG2) {
        float f6;
        float f7;
        float f8;
        iS[] iSArray;
        float f9;
        float f10;
        block10: {
            block9: {
                float f11;
                float f12;
                block8: {
                    float f13;
                    float f14;
                    float f15;
                    float f16;
                    block7: {
                        long l3 = byLhk ^ 0x16A8AADD9F8BL;
                        float f17 = Float.POSITIVE_INFINITY;
                        f16 = Float.POSITIVE_INFINITY;
                        f15 = Float.POSITIVE_INFINITY;
                        float f18 = Float.NEGATIVE_INFINITY;
                        f10 = Float.NEGATIVE_INFINITY;
                        f14 = Float.NEGATIVE_INFINITY;
                        f9 = 0.0f;
                        iSArray = dh.afl();
                        for (float[] fArray : list) {
                            f17 = Math.min(f17, fArray[0]);
                            f16 = Math.min(f16, fArray[1]);
                            f15 = Math.min(f15, fArray[2]);
                            f18 = Math.max(f18, fArray[3]);
                            f10 = Math.max(f10, fArray[4]);
                            f14 = Math.max(f14, fArray[5]);
                            f13 = f9 + fArray[cZ$su.dof("a", (int)3323, (long)(0x5225D2B70EFAE347L ^ l3))];
                            if (iSArray == null) {
                                f9 = f13;
                                if (iSArray == null) continue;
                            }
                            break block7;
                        }
                        f13 = (f17 + f18) * 0.5f;
                    }
                    f8 = f13;
                    f7 = (f15 + f14) * 0.5f;
                    float f19 = (f10 - f16) / 16.0f;
                    try {
                        try {
                            f12 = f19;
                            f11 = 0.01f;
                            if (iSArray != null) break block8;
                            if (!(f12 > f11)) break block9;
                        }
                        catch (MatchException matchException) {
                            throw cZ$su.doc(matchException);
                        }
                        f12 = f2;
                        f11 = f19;
                    }
                    catch (MatchException matchException) {
                        throw cZ$su.doc(matchException);
                    }
                }
                f6 = f12 / f11;
                break block10;
            }
            f6 = 1.0f;
        }
        float f20 = f6;
        for (int i2 = 0; i2 < n2; ++i2) {
            float[] fArray = cZ$su.dnY(list, f9);
            float[] fArray2 = cZ$su.dnZ(fArray);
            double d4 = (double)(fArray2[0] - f8) / 16.0;
            double d5 = (double)(f10 - fArray2[1]) / 16.0 * (double)f20;
            double d6 = (double)(fArray2[2] - f7) / 16.0;
            double d7 = d4 * d3 - d6 * d2;
            double d8 = d4 * d2 + d6 * d3;
            this.doa(new Vec3d(vec3d.x + d7, vec3d.y + d5, vec3d.z + d8), vec3d2, f3, f4, f5, l2, mG2);
            if (iSArray == null) continue;
        }
    }

    private void dnX(int n2, Vec3d vec3d, Vec3d vec3d2, float f2, float f3, float f4, float f5, double d2, double d3, float f6, long l2, mG mG2) {
        long l3 = byLhk ^ 0x35BE4689819L;
        iS[] iSArray = dh.afl();
        for (int i2 = 0; i2 < n2; ++i2) {
            double d4 = cZ.abk(0.0f, (float)Math.PI * 2);
            double d5 = Math.acos(cZ.abk(-1.0f, 1.0f));
            double d6 = Math.cbrt(cZ.abk(0.0f, 1.0f));
            double d7 = (double)f2 * 0.45 * d6 * Math.sin(d5) * Math.cos(d4);
            double d8 = (double)f3 * 0.45 * d6 * Math.cos(d5) + (double)f3 * 0.5;
            double d9 = (double)f2 * 0.45 * d6 * Math.sin(d5) * Math.sin(d4);
            double d10 = d7 * d3 - d9 * d2;
            double d11 = d7 * d2 + d9 * d3;
            this.doa(new Vec3d(vec3d.x + d10, vec3d.y + d8, vec3d.z + d11), vec3d2, f4, f5, f6, l2, mG2);
            if (iSArray == null) continue;
        }
    }

    private static int doe(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cZ$su.dod(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static long dog(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1FF6;
        if (alVkZ[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = NMglr[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])affoO.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    affoO.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cZ$su", exception);
            }
            long l5 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            cZ$su.alVkZ[n3] = l5;
        }
        return alVkZ[n3];
    }

    private static long doh(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        long l3 = cZ$su.dog(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l3;
    }

    private static CallSite dof(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cZ$su" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static float[] dnZ(float[] fArray) {
        float f2;
        block4: {
            block5: {
                long l2 = byLhk ^ 0x7C0294BB5A9L;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        float f3 = cZ.abk(0.0f, 1.0f) - 0.7f;
                        f2 = f3 == 0.0f ? 0 : (f3 < 0.0f ? -1 : 1);
                        if (iSArray != null) break block4;
                        if (f2 >= 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cZ$su.doc(matchException);
                    }
                    return cZ.abi(fArray[0], fArray[1], fArray[2], fArray[3], fArray[4], fArray[5]);
                }
                catch (MatchException matchException) {
                    throw cZ$su.doc(matchException);
                }
            }
            f2 = 3;
        }
        float[] fArray2 = new float[f2];
        fArray2[0] = cZ.abk(fArray[0], fArray[3]);
        fArray2[1] = cZ.abk(fArray[1], fArray[4]);
        fArray2[2] = cZ.abk(fArray[2], fArray[5]);
        return fArray2;
    }

    private static CallSite doi(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cZ$su" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void doa(Vec3d vec3d, Vec3d vec3d2, float f2, float f3, float f4, long l2, mG mG2) {
        Vec3d vec3d3;
        long l3 = byLhk ^ 0x7452102CA529L;
        Vec3d vec3d4 = vec3d.subtract(vec3d2);
        double d2 = vec3d4.length();
        try {
            vec3d3 = d2 > 0.001 ? vec3d4.multiply(1.0 / d2) : cZ.abj();
        }
        catch (MatchException matchException) {
            throw cZ$su.doc(matchException);
        }
        Vec3d vec3d5 = vec3d3;
        vec3d5 = cZ.abh(vec3d5, Math.min(0.6f, f3 * 0.5f));
        float f5 = f2 * f3 * cZ.abk(0.6f, 1.4f);
        float f6 = f4 * cZ.abk(0.85f, 1.15f);
        long[] lArray = cZ$su.dob(l2, (float)d2, f2);
        this.FYVSB.add(new ml(vec3d, vec3d5, f5, f6, lArray[0], lArray[1], lArray[2], mG2));
    }

    private static long[] dob(long l2, float f2, float f3) {
        float f4;
        long l3;
        block6: {
            block5: {
                float f5;
                float f6;
                block4: {
                    l3 = byLhk ^ 0x78246CB16BD7L;
                    iS[] iSArray = dh.afl();
                    try {
                        try {
                            f6 = f3;
                            f5 = 0.001f;
                            if (iSArray != null) break block4;
                            if (!(f6 > f5)) break block5;
                        }
                        catch (MatchException matchException) {
                            throw cZ$su.doc(matchException);
                        }
                        f6 = 1.0f;
                        f5 = f2 / (f3 * 0.5f);
                    }
                    catch (MatchException matchException) {
                        throw cZ$su.doc(matchException);
                    }
                }
                f4 = Math.min(f6, f5);
                break block6;
            }
            f4 = 0.0f;
        }
        float f7 = f4;
        float f8 = (1.0f - f7 * 0.7f) * cZ.abk(0.4f, 1.0f);
        long l4 = Math.max(0L, (long)Math.round((float)l2 * f8));
        long l5 = Math.max((long)cZ$su.doi("v", (int)32204, (long)(0x11EE592DCB4CD8FL ^ l3)), l2 / cZ$su.doi("v", (int)543, (long)(0x48940FCEC879B25DL ^ l3)));
        long l6 = l2 + l4;
        long l7 = l6 + l5;
        return new long[]{l2, l6, l7};
    }

    private static float[] dnY(List<float[]> list, float f2) {
        float[] fArray;
        block4: {
            long l2 = byLhk ^ 0x788F69BF4915L;
            float f3 = cZ.abk(0.0f, f2);
            float f4 = 0.0f;
            Iterator<float[]> iterator = list.iterator();
            iS[] iSArray = dh.afl();
            while (iterator.hasNext()) {
                fArray = iterator.next();
                if (iSArray != null) break block4;
                float[] fArray2 = fArray;
                f4 += fArray2[cZ$su.dof("a", (int)5605, (long)(0x4557BA395D882CC6L ^ l2))];
                try {
                    if (f3 <= f4) {
                        return fArray2;
                    }
                }
                catch (MatchException matchException) {
                    throw cZ$su.doc(matchException);
                }
                if (iSArray == null) continue;
            }
            fArray = list.getLast();
        }
        return fArray;
    }

    private static int dod(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3454;
        if (EqhUH[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = dzFFK[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])uPfsb.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    uPfsb.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cZ$su", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cZ$su.EqhUH[n3] = n4;
        }
        return EqhUH[n3];
    }

    private void dnU(BufferBuilder bufferBuilder, MatrixStack matrixStack, Camera camera, float f2) {
        long l2 = byLhk ^ 0x573BCC58A13DL;
        Iterator<ml> iterator = this.FYVSB.iterator();
        iS[] iSArray = dh.afl();
        while (iterator.hasNext()) {
            ml ml2 = iterator.next();
            ml2.clh(bufferBuilder, matrixStack, camera, f2);
            if (iSArray == null) continue;
        }
    }

    private void dnV() {
        block12: {
            block11: {
                cZ$su cZ$su;
                boolean bl2;
                block9: {
                    long l2 = byLhk ^ 0x4E3AD7557E1EL;
                    Iterator<ml> iterator = this.FYVSB.iterator();
                    iS[] iSArray = dh.afl();
                    while (iterator.hasNext()) {
                        block10: {
                            ml ml2 = iterator.next();
                            try {
                                try {
                                    bl2 = ml2.clg();
                                    if (iSArray != null) break block9;
                                    if (!bl2) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw cZ$su.doc(matchException);
                                }
                                iterator.remove();
                            }
                            catch (MatchException matchException) {
                                throw cZ$su.doc(matchException);
                            }
                        }
                        if (iSArray == null) continue;
                    }
                    try {
                        cZ$su = this;
                        if (iSArray != null) break block11;
                        bl2 = cZ$su.FYVSB.isEmpty();
                    }
                    catch (MatchException matchException) {
                        throw cZ$su.doc(matchException);
                    }
                }
                if (!bl2) break block12;
                cZ$su = this;
            }
            cZ$su.nYGDp = false;
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cZ$su.class, "doe", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(cZ$su.class, "doh", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

