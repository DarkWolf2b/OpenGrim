/*
 * Decompiled with CFR 0.152.
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
import sixtwo.gb;
import sixtwo.rj;
import sixtwo.rk;

public class rj$vV
extends rj {
    private static final int ipeRR;
    private static final float wEmyK = 1.0E-5f;
    private static final float AnKrK = 1.0E-6f;
    private final float bArOr;
    private final float MuadK;
    private final float abnpf;
    private final float miipA;
    private static final long DXdxL;
    private static final long[] UQbqj;
    private static final Integer[] IshHt;
    private static final Map AChNI;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public rj$vV(float f2, float f3, float f4, float f5) {
        this.bArOr = f2;
        this.MuadK = f3;
        this.abnpf = f4;
        this.miipA = f5;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        DXdxL = gb.aYR(-6848697711308440762L, 4430593489452481817L, MethodHandles.lookup().lookupClass()).a(126799501890428L);
        AChNI = new HashMap(13);
        long l2 = DXdxL ^ 0x4DECC85F93C8L;
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
        String string = "\u0094\u00bf\u0018\u00f3\u00d8\f\u0014\u00e3}w\u00d8&\u00a6;\u000f\u00a6";
        int n3 = "\u0094\u00bf\u0018\u00f3\u00d8\f\u0014\u00e3}w\u00d8&\u00a6;\u000f\u00a6".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        UQbqj = lArray;
        IshHt = new Integer[2];
        ipeRR = (int)rj$vV.dyB("e", (int)14916, (long)(l2 ^ 0x596AE9E1DE3C0A48L));
    }

    @Override
    public float dga(float f2, float f3, float f4, float f5) {
        float f6;
        float f7;
        block15: {
            float f8;
            block13: {
                String[] stringArray;
                block14: {
                    float f9;
                    block11: {
                        block12: {
                            long l2 = DXdxL ^ 0x6C26CEEB7484L;
                            stringArray = rk.dhz();
                            try {
                                try {
                                    try {
                                        f9 = f5;
                                        if (stringArray != null) break block11;
                                        if (f9 <= 0.0f) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw rj$vV.dyy(matchException);
                                    }
                                    float f10 = f2 - 0.0f;
                                    f8 = f10 == 0.0f ? 0 : (f10 < 0.0f ? -1 : 1);
                                    if (stringArray != null) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw rj$vV.dyy(matchException);
                                }
                                if (f8 > 0) break block14;
                            }
                            catch (MatchException matchException) {
                                throw rj$vV.dyy(matchException);
                            }
                        }
                        f9 = f3;
                    }
                    return f9;
                }
                try {
                    f7 = f2;
                    f6 = f5;
                    if (stringArray != null) break block15;
                    float f11 = f7 - f6;
                    f8 = f11 == 0.0f ? 0 : (f11 > 0.0f ? 1 : -1);
                }
                catch (MatchException matchException) {
                    throw rj$vV.dyy(matchException);
                }
            }
            try {
                if (f8 >= 0) {
                    return f3 + f4;
                }
            }
            catch (MatchException matchException) {
                throw rj$vV.dyy(matchException);
            }
            f7 = f2;
            f6 = f5;
        }
        float f12 = f7 / f6;
        float f13 = this.dyu(f12);
        float f14 = this.dyx(f13);
        return f3 + f4 * f14;
    }

    private float dyu(float f2) {
        float f3;
        block13: {
            long l2 = DXdxL ^ 0xC266EA3E556L;
            float f4 = f2;
            String[] stringArray = rk.dhz();
            for (int i2 = 0; i2 < rj$vV.dyB("e", (int)27462, (long)(0x63473113FE0F2DD5L ^ l2)); ++i2) {
                float f5;
                float f6;
                block14: {
                    float f7 = this.dyv(f4);
                    float f8 = this.dyw(f4);
                    try {
                        block15: {
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                f3 = Math.abs(f7 - f2);
                                                if (stringArray != null || stringArray != null) break block13;
                                            }
                                            catch (MatchException matchException) {
                                                throw rj$vV.dyy(matchException);
                                            }
                                            if (f3 < 1.0E-5f) break;
                                        }
                                        catch (MatchException matchException) {
                                            throw rj$vV.dyy(matchException);
                                        }
                                        f6 = Math.abs(f8);
                                        f5 = 1.0E-6f;
                                        if (stringArray != null) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw rj$vV.dyy(matchException);
                                    }
                                    if (!(f6 < f5)) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw rj$vV.dyy(matchException);
                                }
                                if (stringArray == null) break;
                            }
                            catch (MatchException matchException) {
                                throw rj$vV.dyy(matchException);
                            }
                        }
                        f6 = f4;
                        f5 = (f7 - f2) / f8;
                    }
                    catch (MatchException matchException) {
                        throw rj$vV.dyy(matchException);
                    }
                }
                f4 = f6 - f5;
                f4 = rj.dgq(f4);
                if (stringArray == null) continue;
            }
            f3 = f4;
        }
        return f3;
    }

    private float dyv(float f2) {
        float f3 = 1.0f - f2;
        return 3.0f * f3 * f3 * f2 * this.bArOr + 3.0f * f3 * f2 * f2 * this.abnpf + f2 * f2 * f2;
    }

    private static MatchException dyy(MatchException matchException) {
        return matchException;
    }

    private static CallSite dyB(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/rj$vV" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private float dyx(float f2) {
        float f3 = 1.0f - f2;
        return 3.0f * f3 * f3 * f2 * this.MuadK + 3.0f * f3 * f2 * f2 * this.miipA + f2 * f2 * f2;
    }

    private static int dyA(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = rj$vV.dyz(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private float dyw(float f2) {
        return 3.0f * ((1.0f - f2) * (1.0f - 3.0f * f2) * this.bArOr + (2.0f * f2 - 3.0f * f2 * f2) * this.abnpf) + 3.0f * f2 * f2;
    }

    private static int dyz(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x97C;
        if (IshHt[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = UQbqj[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])AChNI.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    AChNI.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/rj$vV", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            rj$vV.IshHt[n3] = n4;
        }
        return IshHt[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(rj$vV.class, "dyA", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

