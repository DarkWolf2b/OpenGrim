/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.platform.DepthTestFunction
 */
package sixtwo;

import com.mojang.blaze3d.platform.DepthTestFunction;
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
import sixtwo.iS;
import sixtwo.kR;
import sixtwo.kS$ur;
import sixtwo.lh;

public final class kS {
    private final lh vZbkm;
    private final DepthTestFunction oUMAN;
    private final boolean tzDoa;
    private final boolean ZYDbu;
    private static final long ChKiU;
    private static final long[] ZJWWD;
    private static final Integer[] duoUG;
    private static final Map uBoRz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private kS(lh lh2, DepthTestFunction depthTestFunction, boolean bl, boolean bl2) {
        this.vZbkm = lh2;
        this.oUMAN = depthTestFunction;
        this.tzDoa = bl;
        this.ZYDbu = bl2;
    }

    private kS(kS$ur kS$ur) {
        this(kS$ur.QzklF, kS$ur.NpNot, kS$ur.bEunq, kS$ur.wgMTt);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                kS.ChKiU = gb.aYR(-3901967882336315437L, 7506001769993996843L, MethodHandles.lookup().lookupClass()).a(20918945148665L);
                kS.uBoRz = new HashMap<K, V>(13);
                var0 = kS.ChKiU ^ 94831269508244L;
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
                var8_3 = new long[8];
                var5_4 = 0;
                var6_5 = "'\u008fk\u0097\u008eJ\u00a3\u0080k\u0013\u0095g\u000f\u0093(\u00b8\u00af\u0015\u00b7T\u0012\u00af\u0081ny\u0090\u00c9\u00ef\"o\u009cr@\u00ae\u009a\u00d3\n\u0004\u0016\u00e8Y\u00a9\u00c3g\u00f7\u00af3/";
                var7_6 = "'\u008fk\u0097\u008eJ\u00a3\u0080k\u0013\u0095g\u000f\u0093(\u00b8\u00af\u0015\u00b7T\u0012\u00af\u0081ny\u0090\u00c9\u00ef\"o\u009cr@\u00ae\u009a\u00d3\n\u0004\u0016\u00e8Y\u00a9\u00c3g\u00f7\u00af3/".length();
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
                    var6_5 = " \u0098\u0087_\u007f\u00b4\u00c8ir\u00a3\u00a2\u0085df\u00d4q";
                    var7_6 = " \u0098\u0087_\u007f\u00b4\u00c8ir\u00a3\u00a2\u0085df\u00d4q".length();
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
        kS.ZJWWD = var8_3;
        kS.duoUG = new Integer[8];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean equals(Object object) {
        DepthTestFunction depthTestFunction;
        DepthTestFunction depthTestFunction2;
        boolean bl;
        block45: {
            DepthTestFunction depthTestFunction3;
            block46: {
                kS kS2;
                block44: {
                    lh lh2;
                    lh lh3;
                    block42: {
                        lh lh4;
                        block43: {
                            kS kS3;
                            block41: {
                                boolean bl2;
                                boolean bl3;
                                block39: {
                                    block40: {
                                        Object object2;
                                        block37: {
                                            block38: {
                                                block35: {
                                                    block36: {
                                                        long l = ChKiU ^ 0x39A10C344E88L;
                                                        bl = kR.bVy();
                                                        try {
                                                            try {
                                                                object2 = object;
                                                                if (bl) break block35;
                                                                if (object2 != this) break block36;
                                                                return true;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw kS.bVN(matchException);
                                                            }
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw kS.bVN(matchException);
                                                        }
                                                    }
                                                    object2 = object;
                                                }
                                                try {
                                                    try {
                                                        if (bl) break block37;
                                                        if (object2 instanceof kS) break block38;
                                                        return false;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw kS.bVN(matchException);
                                                    }
                                                }
                                                catch (MatchException matchException) {
                                                    throw kS.bVN(matchException);
                                                }
                                            }
                                            object2 = object;
                                        }
                                        kS2 = (kS)object2;
                                        try {
                                            try {
                                                bl3 = this.bVL();
                                                bl2 = kS2.bVL();
                                                if (bl) break block39;
                                                if (bl3 == bl2) break block40;
                                                return false;
                                            }
                                            catch (MatchException matchException) {
                                                throw kS.bVN(matchException);
                                            }
                                        }
                                        catch (MatchException matchException) {
                                            throw kS.bVN(matchException);
                                        }
                                    }
                                    try {
                                        kS3 = this;
                                        if (bl) break block41;
                                        bl3 = kS3.bVM();
                                        bl2 = kS2.bVM();
                                    }
                                    catch (MatchException matchException) {
                                        throw kS.bVN(matchException);
                                    }
                                }
                                try {
                                    if (bl3 != bl2) {
                                        return false;
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw kS.bVN(matchException);
                                }
                                kS3 = this;
                            }
                            lh4 = kS3.bVJ();
                            lh3 = kS2.bVJ();
                            try {
                                try {
                                    try {
                                        lh2 = lh4;
                                        if (bl) break block42;
                                        if (lh2 != null) break block43;
                                    }
                                    catch (MatchException matchException) {
                                        throw kS.bVN(matchException);
                                    }
                                    if (lh3 == null) break block44;
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw kS.bVN(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw kS.bVN(matchException);
                            }
                        }
                        lh2 = lh4;
                    }
                    try {
                        boolean bl4 = ((Object)((Object)lh2)).equals((Object)lh3);
                        if (bl) return bl4;
                        if (bl4) break block44;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw kS.bVN(matchException);
                    }
                }
                depthTestFunction3 = this.bVK();
                depthTestFunction2 = kS2.bVK();
                try {
                    try {
                        try {
                            depthTestFunction = depthTestFunction3;
                            if (bl) break block45;
                            if (depthTestFunction != null) break block46;
                        }
                        catch (MatchException matchException) {
                            throw kS.bVN(matchException);
                        }
                        if (depthTestFunction2 == null) return true;
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw kS.bVN(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw kS.bVN(matchException);
                }
            }
            depthTestFunction = depthTestFunction3;
        }
        try {
            try {
                boolean bl5 = depthTestFunction.equals(depthTestFunction2);
                if (bl) return bl5;
                if (bl5) return true;
                return false;
            }
            catch (MatchException matchException) {
                throw kS.bVN(matchException);
            }
        }
        catch (MatchException matchException) {
            throw kS.bVN(matchException);
        }
    }

    public int hashCode() {
        int n;
        Object object;
        int n2;
        boolean bl;
        int n3;
        block24: {
            DepthTestFunction depthTestFunction;
            block22: {
                DepthTestFunction depthTestFunction2;
                block23: {
                    Object object2;
                    int n4;
                    long l;
                    block21: {
                        lh lh2;
                        block19: {
                            lh lh3;
                            block20: {
                                Object object3;
                                int n5;
                                block17: {
                                    block18: {
                                        Object object4;
                                        int n6;
                                        block15: {
                                            block16: {
                                                l = ChKiU ^ 0x4FB734186B87L;
                                                CallSite callSite = kS.bVQ("y", (int)24529, (long)(0x32D8E8C34AEA779DL ^ l));
                                                n3 = 1;
                                                bl = kR.bVx();
                                                try {
                                                    n6 = n3 * kS.bVQ("y", (int)16211, (long)(0x5BD74CAFE5CE9718L ^ l));
                                                    object4 = this.bVL();
                                                    if (!bl) break block15;
                                                    if (object4 == 0) break block16;
                                                }
                                                catch (MatchException matchException) {
                                                    throw kS.bVN(matchException);
                                                }
                                                object4 = kS.bVQ("y", (int)31758, (long)(0x7586ACB250D5446L ^ l));
                                                break block15;
                                            }
                                            object4 = kS.bVQ("y", (int)9973, (long)(0x1BBE8783DC2A0EBAL ^ l));
                                        }
                                        n3 = n6 + object4;
                                        try {
                                            n5 = n3 * kS.bVQ("y", (int)16211, (long)(0x5BD74CAFE5CE9718L ^ l));
                                            object3 = this.bVM();
                                            if (!bl) break block17;
                                            if (object3 == 0) break block18;
                                        }
                                        catch (MatchException matchException) {
                                            throw kS.bVN(matchException);
                                        }
                                        object3 = kS.bVQ("y", (int)29968, (long)(0x18E6AFAF26CF5D5AL ^ l));
                                        break block17;
                                    }
                                    object3 = kS.bVQ("y", (int)6603, (long)(0x4F65924CCDDFB182L ^ l));
                                }
                                n3 = n5 + object3;
                                lh3 = this.bVJ();
                                try {
                                    try {
                                        n4 = n3 * kS.bVQ("y", (int)16211, (long)(0x5BD74CAFE5CE9718L ^ l));
                                        lh2 = lh3;
                                        if (!bl) break block19;
                                        if (lh2 != null) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw kS.bVN(matchException);
                                    }
                                    object2 = kS.bVQ("y", (int)31797, (long)(0x3E25F277777D47BL ^ l));
                                    break block21;
                                }
                                catch (MatchException matchException) {
                                    throw kS.bVN(matchException);
                                }
                            }
                            lh2 = lh3;
                        }
                        object2 = ((Object)((Object)lh2)).hashCode();
                    }
                    n3 = n4 + object2;
                    depthTestFunction2 = this.bVK();
                    try {
                        try {
                            n2 = n3 * kS.bVQ("y", (int)16211, (long)(0x5BD74CAFE5CE9718L ^ l));
                            depthTestFunction = depthTestFunction2;
                            if (!bl) break block22;
                            if (depthTestFunction != null) break block23;
                        }
                        catch (MatchException matchException) {
                            throw kS.bVN(matchException);
                        }
                        object = kS.bVQ("y", (int)16406, (long)(0x3E42E4B21345E85BL ^ l));
                        break block24;
                    }
                    catch (MatchException matchException) {
                        throw kS.bVN(matchException);
                    }
                }
                depthTestFunction = depthTestFunction2;
            }
            object = depthTestFunction.hashCode();
        }
        n3 = n2 + object;
        try {
            n = n3;
            if (!bl) {
                iS.bwK("AtZWO");
            }
        }
        catch (MatchException matchException) {
            throw kS.bVN(matchException);
        }
        return n;
    }

    public kS bVH(boolean bl) {
        return new kS(this.vZbkm, this.oUMAN, bl, this.ZYDbu);
    }

    public kS bVG(DepthTestFunction depthTestFunction) {
        return new kS(this.vZbkm, depthTestFunction, this.tzDoa, this.ZYDbu);
    }

    public static kS$ur bVE() {
        return new kS$ur();
    }

    private static CallSite bVQ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kS" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public DepthTestFunction bVK() {
        return this.oUMAN;
    }

    private static int bVO(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7BC2;
        if (duoUG[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = ZJWWD[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])uBoRz.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    uBoRz.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kS", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            kS.duoUG[n2] = n3;
        }
        return duoUG[n2];
    }

    public lh bVJ() {
        return this.vZbkm;
    }

    public boolean bVM() {
        return this.ZYDbu;
    }

    public boolean bVL() {
        return this.tzDoa;
    }

    public kS bVF(lh lh2) {
        return new kS(lh2, this.oUMAN, this.tzDoa, this.ZYDbu);
    }

    private static int bVP(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = kS.bVO(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static MatchException bVN(MatchException matchException) {
        return matchException;
    }

    public kS bVI(boolean bl) {
        return new kS(this.vZbkm, this.oUMAN, this.tzDoa, bl);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kS.class, "bVP", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
