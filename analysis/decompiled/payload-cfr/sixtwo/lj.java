/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1044
 *  net.minecraft.class_4588
 *  org.joml.Matrix4f
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.ConcurrentHashMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1044;
import net.minecraft.class_4588;
import org.joml.Matrix4f;
import sixtwo.gb;
import sixtwo.jk;
import sixtwo.lE;
import sixtwo.li$ut;
import sixtwo.li$ux;
import sixtwo.ll;
import sixtwo.lq;

public final class lj {
    private final class_1044 gIqkN;
    private final li.ux huWPq;
    private final li$ut ZTLTq;
    private final Map<Integer, ll> ppJSr;
    private final Map<Integer, Map<Integer, Float>> hyjPr;
    private final ConcurrentHashMap<Long, Float> sJMLD = new ConcurrentHashMap();
    private final ConcurrentHashMap<Long, Float> RMDjl = new ConcurrentHashMap();
    private static String oxhLM;
    private static final long NptTm;
    private static final long[] BvobX;
    private static final Integer[] WnbWs;
    private static final Map rQzTB;
    private static final long[] wHyUV;
    private static final Long[] Wnpsy;
    private static final Map HqyXG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public lj(class_1044 class_10442, li.ux ux2, li$ut ut2, Map<Integer, ll> map, Map<Integer, Map<Integer, Float>> map2) {
        this.gIqkN = class_10442;
        this.huWPq = ux2;
        this.ZTLTq = ut2;
        this.ppJSr = map;
        this.hyjPr = map2;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    block11: {
                        lj.NptTm = gb.aYR(7281799083301821257L, 293512084061843237L, MethodHandles.lookup().lookupClass()).a(123464497878635L);
                        lj.rQzTB = new HashMap<K, V>(13);
                        lj.bYU("Yh2DZ");
                        var11 = lj.NptTm ^ 117272306303326L;
                        var13_1 = Cipher.getInstance("DES/CBC/NoPadding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var11 >>> 56);
                        for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                            v2 = v2;
                            v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                        }
                        var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var19_3 = new long[10];
                        var16_4 = 0;
                        var17_5 = "\u00e5 \u007f\u001c\u0093\u00e9\u00c5\u0099\u00ff\u0006\u00d2\u00bc\u00d2\u0087\u00a7\u00a6\u00dd\u00bd\u00d2\u00ee\u00ea\u00e18k\u0014q\u00d3\u00ff\u00a0\u00bd\u00cei\u00b0-[\u00f3 \u00b7\u00be\u008d\b-!\u00c7\u00f2\u00f3J'\u00c1G\u00f6}\u00ca+\u00b9\u00ce$!\u00e8\u009a>\u00dd7\u00e4";
                        var18_6 = "\u00e5 \u007f\u001c\u0093\u00e9\u00c5\u0099\u00ff\u0006\u00d2\u00bc\u00d2\u0087\u00a7\u00a6\u00dd\u00bd\u00d2\u00ee\u00ea\u00e18k\u0014q\u00d3\u00ff\u00a0\u00bd\u00cei\u00b0-[\u00f3 \u00b7\u00be\u008d\b-!\u00c7\u00f2\u00f3J'\u00c1G\u00f6}\u00ca+\u00b9\u00ce$!\u00e8\u009a>\u00dd7\u00e4".length();
                        var15_7 = 0;
                        while (true) {
                            var20_8 = var17_5.substring(var15_7, var15_7 += 8).getBytes("ISO-8859-1");
                            v3 = var19_3;
                            v4 = var16_4++;
                            v5 = ((long)var20_8[0] & 255L) << 56 | ((long)var20_8[1] & 255L) << 48 | ((long)var20_8[2] & 255L) << 40 | ((long)var20_8[3] & 255L) << 32 | ((long)var20_8[4] & 255L) << 24 | ((long)var20_8[5] & 255L) << 16 | ((long)var20_8[6] & 255L) << 8 | (long)var20_8[7] & 255L;
                            v6 = -1;
                            break block11;
                            break;
                        }
lbl27:
                        // 1 sources

                        while (true) {
                            v3[v4] = v7;
                            if (var15_7 < var18_6) ** continue;
                            var17_5 = "\u00c6\u0010<;T\u00e4\u00db\b\u00ddb\u00da\u00055\u007f\u00e6V";
                            var18_6 = "\u00c6\u0010<;T\u00e4\u00db\b\u00ddb\u00da\u00055\u007f\u00e6V".length();
                            var15_7 = 0;
                            while (true) {
                                var20_8 = var17_5.substring(var15_7, var15_7 += 8).getBytes("ISO-8859-1");
                                v3 = var19_3;
                                v4 = var16_4++;
                                v5 = ((long)var20_8[0] & 255L) << 56 | ((long)var20_8[1] & 255L) << 48 | ((long)var20_8[2] & 255L) << 40 | ((long)var20_8[3] & 255L) << 32 | ((long)var20_8[4] & 255L) << 24 | ((long)var20_8[5] & 255L) << 16 | ((long)var20_8[6] & 255L) << 8 | (long)var20_8[7] & 255L;
                                v6 = 0;
                                break block11;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            v3[v4] = v7;
                            if (var15_7 < var18_6) ** continue;
                            break block12;
                            break;
                        }
                    }
                    var21_9 = v5;
                    var23_10 = var13_1.doFinal(new byte[]{(byte)(var21_9 >>> 56), (byte)(var21_9 >>> 48), (byte)(var21_9 >>> 40), (byte)(var21_9 >>> 32), (byte)(var21_9 >>> 24), (byte)(var21_9 >>> 16), (byte)(var21_9 >>> 8), (byte)var21_9});
                    v7 = ((long)var23_10[0] & 255L) << 56 | ((long)var23_10[1] & 255L) << 48 | ((long)var23_10[2] & 255L) << 40 | ((long)var23_10[3] & 255L) << 32 | ((long)var23_10[4] & 255L) << 24 | ((long)var23_10[5] & 255L) << 16 | ((long)var23_10[6] & 255L) << 8 | (long)var23_10[7] & 255L;
                    switch (v6) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl53:
                        // 1 sources

                        ** continue;
                    }
                }
                lj.BvobX = var19_3;
                lj.WnbWs = new Integer[10];
                lj.HqyXG = new HashMap<K, V>(13);
                var0_11 = Cipher.getInstance("DES/CBC/NoPadding");
                v8 = SecretKeyFactory.getInstance("DES");
                v9 = new byte[8];
                v10 = v9;
                v9[0] = (byte)(var11 >>> 56);
                for (var1_12 = 1; var1_12 < 8; ++var1_12) {
                    v10 = v10;
                    v10[var1_12] = (byte)(var11 << var1_12 * 8 >>> 56);
                }
                var0_11.init(2, (Key)v8.generateSecret(new DESKeySpec(v10)), new IvParameterSpec(new byte[8]));
                var6_13 = new long[2];
                var3_14 = 0;
                var4_15 = "\u00c3\u0011\u00ea\"0d\u00b7\u00e4\u00b7\u00ef\u00d2\u00d2\u00b7%\u00a9_";
                var5_16 = "\u00c3\u0011\u00ea\"0d\u00b7\u00e4\u00b7\u00ef\u00d2\u00d2\u00b7%\u00a9_".length();
                var2_17 = 0;
                while (true) {
                    break block13;
                    break;
                }
lbl75:
                // 1 sources

                while (true) {
                    var6_13[v11] = ((long)var10_20[0] & 255L) << 56 | ((long)var10_20[1] & 255L) << 48 | ((long)var10_20[2] & 255L) << 40 | ((long)var10_20[3] & 255L) << 32 | ((long)var10_20[4] & 255L) << 24 | ((long)var10_20[5] & 255L) << 16 | ((long)var10_20[6] & 255L) << 8 | (long)var10_20[7] & 255L;
                    if (var2_17 < var5_16) ** continue;
                    break block14;
                    break;
                }
            }
            var7_18 = var4_15.substring(var2_17, var2_17 += 8).getBytes("ISO-8859-1");
            v11 = var3_14++;
            var8_19 = ((long)var7_18[0] & 255L) << 56 | ((long)var7_18[1] & 255L) << 48 | ((long)var7_18[2] & 255L) << 40 | ((long)var7_18[3] & 255L) << 32 | ((long)var7_18[4] & 255L) << 24 | ((long)var7_18[5] & 255L) << 16 | ((long)var7_18[6] & 255L) << 8 | (long)var7_18[7] & 255L;
            var10_20 = var0_11.doFinal(new byte[]{(byte)(var8_19 >>> 56), (byte)(var8_19 >>> 48), (byte)(var8_19 >>> 40), (byte)(var8_19 >>> 32), (byte)(var8_19 >>> 24), (byte)(var8_19 >>> 16), (byte)(var8_19 >>> 8), (byte)var8_19});
            ** while (true)
        }
        lj.wHyUV = var6_13;
        lj.Wnpsy = new Long[2];
    }

    private static int bYY(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = lj.bYX(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public void bYL() {
        this.sJMLD.clear();
        this.RMDjl.clear();
    }

    private static int bYX(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7039;
        if (WnbWs[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = BvobX[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])rQzTB.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    rQzTB.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lj", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            lj.WnbWs[n2] = n3;
        }
        return WnbWs[n2];
    }

    public ConcurrentHashMap<Long, Float> bYT() {
        return this.RMDjl;
    }

    private static long bYA(String string, float f) {
        long l = NptTm ^ 0x4340F155478L;
        int n = string.hashCode();
        return (long)n & lj.bZc("y", (int)218, (long)(0x589E0E0440501E55L ^ l)) ^ (long)Float.floatToIntBits(f) << lj.bYZ("h", (int)21178, (long)(0x223FAF0E53DEFD5DL ^ l));
    }

    public li.ux bYO() {
        return this.huWPq;
    }

    private static long bZb(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        long l2 = lj.bZa(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l2;
    }

    /*
     * Unable to fully structure code
     */
    private float bYx(int[] var1_1, int var2_2, int var3_3, float var4_4) {
        var5_5 = lj.NptTm ^ 37590951591482L;
        var8_6 = -1;
        var9_7 = 0.0f;
        var10_8 = 0;
        var7_10 = lj.bYV();
        for (var11_9 = var2_2; var11_9 < var3_3; ++var11_9) {
            block23: {
                block24: {
                    block21: {
                        block20: {
                            block19: {
                                block18: {
                                    var12_11 = var1_1[var11_9];
                                    try {
                                        v0 = var10_8;
                                        if (var7_10 == null) break block18;
                                        if (v0 != 0) {
                                        }
                                        ** GOTO lbl19
                                    }
                                    catch (MatchException v1) {
                                        throw lj.bYW(v1);
                                    }
                                    var10_8 = 0;
                                    try {
                                        if (var7_10 != null) continue;
lbl19:
                                        // 2 sources

                                        v0 = var12_11;
                                    }
                                    catch (MatchException v2) {
                                        throw lj.bYW(v2);
                                    }
                                }
                                try {
                                    try {
                                        if (var7_10 == null) break block19;
                                        if (v0 != lj.bYZ("h", (int)1757, (long)(884385236789822325L ^ var5_5))) break block20;
                                    }
                                    catch (MatchException v3) {
                                        throw lj.bYW(v3);
                                    }
                                    v0 = 1;
                                }
                                catch (MatchException v4) {
                                    throw lj.bYW(v4);
                                }
                            }
                            var10_8 = v0;
                            if (var7_10 != null) continue;
                        }
                        var13_12 = this.ppJSr.get(var12_11);
                        try {
                            block22: {
                                try {
                                    try {
                                        v5 = var13_12;
                                        if (var7_10 == null) break block21;
                                        if (v5 != null) break block22;
                                    }
                                    catch (MatchException v6) {
                                        throw lj.bYW(v6);
                                    }
                                    if (var7_10 != null) continue;
                                }
                                catch (MatchException v7) {
                                    throw lj.bYW(v7);
                                }
                            }
                            v5 = this.hyjPr.get(var8_6);
                        }
                        catch (MatchException v8) {
                            throw lj.bYW(v8);
                        }
                    }
                    var14_13 = (Map)v5;
                    try {
                        if (var7_10 == null) break block23;
                        if (var14_13 == null) break block24;
                    }
                    catch (MatchException v9) {
                        throw lj.bYW(v9);
                    }
                    var9_7 += var14_13.getOrDefault(var12_11, Float.valueOf(0.0f)).floatValue() * var4_4;
                }
                var9_7 += var13_12.bZl(var4_4) + 0.25f;
            }
            var8_6 = var12_11;
            if (var7_10 != null) continue;
        }
        return var9_7;
    }

    public li$ut bYP() {
        return this.ZTLTq;
    }

    public ConcurrentHashMap<Long, Float> bYS() {
        return this.sJMLD;
    }

    private static long bZa(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4159;
        if (Wnpsy[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = wHyUV[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])HqyXG.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HqyXG.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lj", exception);
            }
            long l4 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            lj.Wnpsy[n2] = l4;
        }
        return Wnpsy[n2];
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private float bYz(int[] var1_1, float var2_2) {
        block50: {
            block49: {
                block37: {
                    var3_3 = lj.NptTm ^ 122264315296935L;
                    var6_4 = 0.0f;
                    var7_5 = 0;
                    var8_6 = 0;
                    var9_7 = lE.SVnNc;
                    var10_8 = '\u0000';
                    var5_10 = lj.bYV();
                    while (var10_8 < var1_1.length) {
                        block36: {
                            block38: {
                                block48: {
                                    block47: {
                                        block46: {
                                            block44: {
                                                block45: {
                                                    block40: {
                                                        block41: {
                                                            block43: {
                                                                block42: {
                                                                    block39: {
                                                                        var11_11 = var1_1[var10_8];
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            try {
                                                                                                if (var5_10 == null) break block36;
                                                                                                v0 = var11_11;
                                                                                                v1 /* !! */  = (int)lj.bYZ("h", (int)1757, (long)(884318155536663016L ^ var3_3));
                                                                                                if (var5_10 == null) break block37;
                                                                                            }
                                                                                            catch (MatchException v2) {
                                                                                                throw lj.bYW(v2);
                                                                                            }
                                                                                            if (v0 != v1 /* !! */ ) break block38;
                                                                                        }
                                                                                        catch (MatchException v3) {
                                                                                            throw lj.bYW(v3);
                                                                                        }
                                                                                        v4 = var10_8 + 1;
                                                                                        v5 = var1_1.length;
                                                                                        if (var5_10 == null) break block39;
                                                                                    }
                                                                                    catch (MatchException v6) {
                                                                                        throw lj.bYW(v6);
                                                                                    }
                                                                                    if (v4 >= v5) break block38;
                                                                                }
                                                                                catch (MatchException v7) {
                                                                                    throw lj.bYW(v7);
                                                                                }
                                                                                v4 = var10_8;
                                                                                if (var5_10 == null) break block40;
                                                                            }
                                                                            catch (MatchException v8) {
                                                                                throw lj.bYW(v8);
                                                                            }
                                                                            v5 = var7_5;
                                                                        }
                                                                        catch (MatchException v9) {
                                                                            throw lj.bYW(v9);
                                                                        }
                                                                    }
                                                                    try {
                                                                        try {
                                                                            if (v4 <= v5) break block41;
                                                                            if (var8_6 == 0) break block42;
                                                                        }
                                                                        catch (MatchException v10) {
                                                                            throw lj.bYW(v10);
                                                                        }
                                                                        v11 = var9_7;
                                                                        break block43;
                                                                    }
                                                                    catch (MatchException v12) {
                                                                        throw lj.bYW(v12);
                                                                    }
                                                                }
                                                                v11 = this;
                                                            }
                                                            var12_13 = v11;
                                                            var6_4 += var12_13.bYx(var1_1, var7_5, var10_8, var2_2);
                                                        }
                                                        v4 = Character.toLowerCase((char)var1_1[++var10_8]);
                                                    }
                                                    var12_12 = v4;
                                                    try {
                                                        try {
                                                            try {
                                                                v13 = jk.bDy(var12_12);
                                                                if (var5_10 == null) break block44;
                                                                if (v13) break block45;
                                                            }
                                                            catch (MatchException v14) {
                                                                throw lj.bYW(v14);
                                                            }
                                                            v15 = var12_12;
                                                            v16 = (char)lj.bYZ("h", (int)21032, (long)(7454797377166693662L ^ var3_3));
                                                            if (var5_10 == null) break block46;
                                                        }
                                                        catch (MatchException v17) {
                                                            throw lj.bYW(v17);
                                                        }
                                                        if (v15 == v16) {
                                                        }
                                                        ** GOTO lbl93
                                                    }
                                                    catch (MatchException v18) {
                                                        throw lj.bYW(v18);
                                                    }
                                                }
                                                v13 = false;
                                            }
                                            var8_6 = (int)v13;
                                            try {
                                                if (var5_10 != null) break block47;
lbl93:
                                                // 2 sources

                                                v15 = var12_12;
                                                v16 = (char)lj.bYZ("h", (int)15202, (long)(4989260936498429009L ^ var3_3));
                                            }
                                            catch (MatchException v19) {
                                                throw lj.bYW(v19);
                                            }
                                        }
                                        try {
                                            if (var5_10 == null) break block48;
                                            if (v15 != v16) break block47;
                                        }
                                        catch (MatchException v20) {
                                            throw lj.bYW(v20);
                                        }
                                        var8_6 = 1;
                                    }
                                    v15 = var10_8;
                                    v16 = '\u0001';
                                }
                                var7_5 = v15 + v16;
                            }
                            ++var10_8;
                        }
                        if (var5_10 != null) continue;
                    }
                    try {
                        v0 = var7_5;
                        if (var5_10 == null) break block49;
                        v1 /* !! */  = var1_1.length;
                    }
                    catch (MatchException v21) {
                        throw lj.bYW(v21);
                    }
                }
                if (v0 >= v1 /* !! */ ) break block50;
                v0 = var8_6;
            }
            try {
                v22 = v0 != 0 ? var9_7 : this;
            }
            catch (MatchException v23) {
                throw lj.bYW(v23);
            }
            var10_9 = v22;
            var6_4 += var10_9.bYx(var1_1, var7_5, var1_1.length, var2_2);
        }
        return var6_4;
    }

    private static CallSite bZc(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lj" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public class_1044 bYN() {
        return this.gIqkN;
    }

    /*
     * Unable to fully structure code
     */
    private float bYH(String var1_1, float var2_2) {
        block26: {
            block24: {
                block25: {
                    block23: {
                        var3_3 = lj.NptTm ^ 59557580876940L;
                        var6_4 = this.bYG(var2_2);
                        var5_5 = lj.bYV();
                        var7_6 = this.ZTLTq.duE() * var2_2;
                        try {
                            v0 = var1_1;
                            if (var5_5 == null) break block23;
                            if (v0 != null) {
                            }
                            ** GOTO lbl23
                        }
                        catch (MatchException v1) {
                            throw lj.bYW(v1);
                        }
                        v0 = var1_1;
                    }
                    try {
                        try {
                            v2 = v0.isEmpty();
                            if (var5_5 == null) break block24;
                            if (v2 == '\u0000') break block25;
                        }
                        catch (MatchException v3) {
                            throw lj.bYW(v3);
                        }
lbl23:
                        // 2 sources

                        return var6_4;
                    }
                    catch (MatchException v4) {
                        throw lj.bYW(v4);
                    }
                }
                v2 = '\u0000';
            }
            var8_7 = v2;
            var9_8 = 0.0f;
            var10_9 = 0.0f;
            var11_10 = 1;
            for (var12_11 = 0; var12_11 < var1_1.length(); ++var12_11) {
                block28: {
                    block27: {
                        var13_12 = var1_1.charAt(var12_11);
                        try {
                            try {
                                if (var5_5 == null) break block26;
                                v5 = var8_7;
                                if (var5_5 == null) break block27;
                            }
                            catch (MatchException v6) {
                                throw lj.bYW(v6);
                            }
                            if (v5 != '\u0000') {
                            }
                            ** GOTO lbl51
                        }
                        catch (MatchException v7) {
                            throw lj.bYW(v7);
                        }
                        var8_7 = '\u0000';
                        try {
                            if (var5_5 != null) continue;
lbl51:
                            // 2 sources

                            v5 = var13_12;
                        }
                        catch (MatchException v8) {
                            throw lj.bYW(v8);
                        }
                    }
                    try {
                        v9 = lj.bYZ("h", (int)1757, (long)(884363270194352579L ^ var3_3));
                        if (var5_5 == null) break block28;
                        if (v5 == v9) {
                        }
                        ** GOTO lbl67
                    }
                    catch (MatchException v10) {
                        throw lj.bYW(v10);
                    }
                    var8_7 = '\u0001';
                    try {
                        if (var5_5 != null) continue;
lbl67:
                        // 2 sources

                        v5 = var13_12;
                        v9 = lj.bYZ("h", (int)15418, (long)(3787250746039200544L ^ var3_3));
                    }
                    catch (MatchException v11) {
                        throw lj.bYW(v11);
                    }
                }
                if (v5 == v9) {
                    var10_9 += Math.max(var6_4, var9_8);
                    var9_8 = 0.0f;
                    ++var11_10;
                    if (var5_5 != null) continue;
                }
                var14_13 = this.ppJSr.get(var13_12);
                try {
                    if (var14_13 == null && var5_5 != null) continue;
                }
                catch (MatchException v12) {
                    throw lj.bYW(v12);
                }
                var9_8 = Math.max(var9_8, var14_13.bZu() * var2_2);
                if (var5_5 != null) continue;
            }
            var10_9 += Math.max(var6_4, var9_8);
            var10_9 += (float)Math.max(0, var11_10 - 1) * var7_6;
        }
        return var10_9;
    }

    /*
     * Unable to fully structure code
     */
    private float bYI(int[] var1_1, float var2_2) {
        block26: {
            block24: {
                block25: {
                    block23: {
                        var3_3 = lj.NptTm ^ 107018596532867L;
                        var6_4 = this.bYG(var2_2);
                        var7_5 = this.ZTLTq.duE() * var2_2;
                        var5_6 = lj.bYV();
                        try {
                            v0 = var1_1;
                            if (var5_6 == null) break block23;
                            if (v0 != null) {
                            }
                            ** GOTO lbl23
                        }
                        catch (MatchException v1) {
                            throw lj.bYW(v1);
                        }
                        v0 = var1_1;
                    }
                    try {
                        try {
                            v2 = v0.length;
                            if (var5_6 == null) break block24;
                            if (v2 != 0) break block25;
                        }
                        catch (MatchException v3) {
                            throw lj.bYW(v3);
                        }
lbl23:
                        // 2 sources

                        return var6_4;
                    }
                    catch (MatchException v4) {
                        throw lj.bYW(v4);
                    }
                }
                v2 = 0;
            }
            var8_7 = v2;
            var9_8 = 0.0f;
            var10_9 = 0.0f;
            var11_10 = 1;
            for (int var15_14 : var1_1) {
                block28: {
                    block27: {
                        try {
                            try {
                                if (var5_6 == null) break block26;
                                v5 = var8_7;
                                if (var5_6 == null) break block27;
                            }
                            catch (MatchException v6) {
                                throw lj.bYW(v6);
                            }
                            if (v5 != 0) {
                            }
                            ** GOTO lbl50
                        }
                        catch (MatchException v7) {
                            throw lj.bYW(v7);
                        }
                        var8_7 = 0;
                        try {
                            if (var5_6 != null) continue;
lbl50:
                            // 2 sources

                            v5 = var15_14;
                        }
                        catch (MatchException v8) {
                            throw lj.bYW(v8);
                        }
                    }
                    try {
                        v9 = lj.bYZ("h", (int)13452, (long)(8998600500341607825L ^ var3_3));
                        if (var5_6 == null) break block28;
                        if (v5 == v9) {
                        }
                        ** GOTO lbl66
                    }
                    catch (MatchException v10) {
                        throw lj.bYW(v10);
                    }
                    var8_7 = 1;
                    try {
                        if (var5_6 != null) continue;
lbl66:
                        // 2 sources

                        v5 = var15_14;
                        v9 = lj.bYZ("h", (int)24116, (long)(5590149976216102695L ^ var3_3));
                    }
                    catch (MatchException v11) {
                        throw lj.bYW(v11);
                    }
                }
                if (v5 == v9) {
                    var10_9 += Math.max(var6_4, var9_8);
                    var9_8 = 0.0f;
                    ++var11_10;
                    if (var5_6 != null) continue;
                }
                var16_15 = this.ppJSr.get(var15_14);
                try {
                    if (var16_15 == null && var5_6 != null) continue;
                }
                catch (MatchException v12) {
                    throw lj.bYW(v12);
                }
                var9_8 = Math.max(var9_8, var16_15.bZu() * var2_2);
                if (var5_6 != null) continue;
            }
            var10_9 += Math.max(var6_4, var9_8);
            var10_9 += (float)Math.max(0, var11_10 - 1) * var7_5;
        }
        return var10_9;
    }

    public Map<Integer, ll> bYQ() {
        return this.ppJSr;
    }

    private static long bYB(int[] nArray, float f) {
        long l = NptTm ^ 0x52EEFD507F31L;
        int n = Arrays.hashCode(nArray);
        return (long)n & lj.bZc("y", (int)9842, (long)(0xB87CC3AAA8693B5L ^ l)) ^ (long)Float.floatToIntBits(f) << lj.bYZ("h", (int)18020, (long)(0x6F4D7E81D6FA42C0L ^ l));
    }

    public static void bYU(String string) {
        oxhLM = string;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private float bYy(String var1_1, float var2_2) {
        block50: {
            block49: {
                block37: {
                    var3_3 = lj.NptTm ^ 93395772294272L;
                    var6_4 = 0.0f;
                    var7_5 = 0;
                    var8_6 = 0;
                    var9_7 = lE.SVnNc;
                    var5_8 = lj.bYV();
                    var10_9 = '\u0000';
                    while (var10_9 < var1_1.length()) {
                        block36: {
                            block38: {
                                block48: {
                                    block47: {
                                        block46: {
                                            block44: {
                                                block45: {
                                                    block40: {
                                                        block41: {
                                                            block43: {
                                                                block42: {
                                                                    block39: {
                                                                        var11_11 = var1_1.charAt(var10_9);
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            try {
                                                                                                if (var5_8 == null) break block36;
                                                                                                v0 = var11_11;
                                                                                                v1 /* !! */  = (int)lj.bYZ("h", (int)1757, (long)(884255215018129871L ^ var3_3));
                                                                                                if (var5_8 == null) break block37;
                                                                                            }
                                                                                            catch (MatchException v2) {
                                                                                                throw lj.bYW(v2);
                                                                                            }
                                                                                            if (v0 != v1 /* !! */ ) break block38;
                                                                                        }
                                                                                        catch (MatchException v3) {
                                                                                            throw lj.bYW(v3);
                                                                                        }
                                                                                        v4 = var10_9 + 1;
                                                                                        v5 = var1_1.length();
                                                                                        if (var5_8 == null) break block39;
                                                                                    }
                                                                                    catch (MatchException v6) {
                                                                                        throw lj.bYW(v6);
                                                                                    }
                                                                                    if (v4 >= v5) break block38;
                                                                                }
                                                                                catch (MatchException v7) {
                                                                                    throw lj.bYW(v7);
                                                                                }
                                                                                v4 = var10_9;
                                                                                if (var5_8 == null) break block40;
                                                                            }
                                                                            catch (MatchException v8) {
                                                                                throw lj.bYW(v8);
                                                                            }
                                                                            v5 = var7_5;
                                                                        }
                                                                        catch (MatchException v9) {
                                                                            throw lj.bYW(v9);
                                                                        }
                                                                    }
                                                                    try {
                                                                        try {
                                                                            if (v4 <= v5) break block41;
                                                                            if (var8_6 == 0) break block42;
                                                                        }
                                                                        catch (MatchException v10) {
                                                                            throw lj.bYW(v10);
                                                                        }
                                                                        v11 = var9_7;
                                                                        break block43;
                                                                    }
                                                                    catch (MatchException v12) {
                                                                        throw lj.bYW(v12);
                                                                    }
                                                                }
                                                                v11 = this;
                                                            }
                                                            var12_13 = v11;
                                                            var6_4 += var12_13.bYw(var1_1, var7_5, var10_9, var2_2);
                                                        }
                                                        v4 = Character.toLowerCase(var1_1.charAt(++var10_9));
                                                    }
                                                    var12_12 = v4;
                                                    try {
                                                        try {
                                                            try {
                                                                v13 = jk.bDy(var12_12);
                                                                if (var5_8 == null) break block44;
                                                                if (v13) break block45;
                                                            }
                                                            catch (MatchException v14) {
                                                                throw lj.bYW(v14);
                                                            }
                                                            v15 = var12_12;
                                                            v16 = (char)lj.bYZ("h", (int)24034, (long)(8422686112232694517L ^ var3_3));
                                                            if (var5_8 == null) break block46;
                                                        }
                                                        catch (MatchException v17) {
                                                            throw lj.bYW(v17);
                                                        }
                                                        if (v15 == v16) {
                                                        }
                                                        ** GOTO lbl93
                                                    }
                                                    catch (MatchException v18) {
                                                        throw lj.bYW(v18);
                                                    }
                                                }
                                                v13 = false;
                                            }
                                            var8_6 = (int)v13;
                                            try {
                                                if (var5_8 != null) break block47;
lbl93:
                                                // 2 sources

                                                v15 = var12_12;
                                                v16 = (char)lj.bYZ("h", (int)6315, (long)(7786519906126997432L ^ var3_3));
                                            }
                                            catch (MatchException v19) {
                                                throw lj.bYW(v19);
                                            }
                                        }
                                        try {
                                            if (var5_8 == null) break block48;
                                            if (v15 != v16) break block47;
                                        }
                                        catch (MatchException v20) {
                                            throw lj.bYW(v20);
                                        }
                                        var8_6 = 1;
                                    }
                                    v15 = var10_9;
                                    v16 = '\u0001';
                                }
                                var7_5 = v15 + v16;
                            }
                            ++var10_9;
                        }
                        if (var5_8 != null) continue;
                    }
                    try {
                        v0 = var7_5;
                        if (var5_8 == null) break block49;
                        v1 /* !! */  = var1_1.length();
                    }
                    catch (MatchException v21) {
                        throw lj.bYW(v21);
                    }
                }
                if (v0 >= v1 /* !! */ ) break block50;
                v0 = var8_6;
            }
            try {
                v22 = v0 != 0 ? var9_7 : this;
            }
            catch (MatchException v23) {
                throw lj.bYW(v23);
            }
            var10_10 = v22;
            var6_4 += var10_10.bYw(var1_1, var7_5, var1_1.length(), var2_2);
        }
        return var6_4;
    }

    public Map<Integer, Map<Integer, Float>> bYR() {
        return this.hyjPr;
    }

    public lq bYM(float f) {
        return new lq(this, f);
    }

    public float bYF(int n, float f) {
        return this.ppJSr.get(n).bZu() * f;
    }

    public float bYJ(String string, float f) {
        long l;
        block3: {
            Float f2;
            block2: {
                long l2 = NptTm ^ 0x4FC48C8A14BFL;
                l = lj.bYA(string, f);
                String string2 = lj.bYV();
                Float f3 = this.RMDjl.get(l);
                try {
                    f2 = f3;
                    if (string2 == null) break block2;
                    if (f2 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw lj.bYW(matchException);
                }
                f2 = f3;
            }
            return f2.floatValue();
        }
        float f4 = this.bYH(string, f);
        this.RMDjl.put(l, Float.valueOf(f4));
        return f4;
    }

    public float bYE(int n, float f) {
        return this.ppJSr.get(n).bZt() * f;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public float bYD(int[] nArray, float f) {
        long l;
        block17: {
            Float f2;
            int[] nArray2;
            String string;
            block16: {
                int n;
                block14: {
                    block15: {
                        int[] nArray3;
                        block13: {
                            long l2 = NptTm ^ 0x480354752AD8L;
                            string = lj.bYV();
                            try {
                                nArray3 = nArray;
                                if (string == null) break block13;
                                if (nArray3 == null) return 0.0f;
                            }
                            catch (MatchException matchException) {
                                throw lj.bYW(matchException);
                            }
                            nArray3 = nArray;
                        }
                        try {
                            try {
                                n = nArray3.length;
                                if (string == null) break block14;
                                if (n != 0) break block15;
                                return 0.0f;
                            }
                            catch (MatchException matchException) {
                                throw lj.bYW(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw lj.bYW(matchException);
                        }
                    }
                    try {
                        nArray2 = nArray;
                        if (string == null) break block16;
                        n = jk.bDA(nArray2) ? 1 : 0;
                    }
                    catch (MatchException matchException) {
                        throw lj.bYW(matchException);
                    }
                }
                try {
                    if (n != 0) {
                        return this.bYz(nArray, f);
                    }
                }
                catch (MatchException matchException) {
                    throw lj.bYW(matchException);
                }
                nArray2 = nArray;
            }
            l = lj.bYB(nArray2, f);
            Float f3 = this.sJMLD.get(l);
            try {
                f2 = f3;
                if (string == null) return f2.floatValue();
                if (f2 == null) break block17;
            }
            catch (MatchException matchException) {
                throw lj.bYW(matchException);
            }
            f2 = f3;
            return f2.floatValue();
        }
        float f4 = this.bYv(nArray, f);
        this.sJMLD.put(l, Float.valueOf(f4));
        return f4;
    }

    public float bYG(float f) {
        return 0.7f * f;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public float bYC(String string, float f) {
        long l;
        block17: {
            Float f2;
            String string2;
            String string3;
            block16: {
                boolean bl;
                block14: {
                    block15: {
                        String string4;
                        block13: {
                            long l2 = NptTm ^ 0x5B202B656DA2L;
                            string3 = lj.bYV();
                            try {
                                string4 = string;
                                if (string3 == null) break block13;
                                if (string4 == null) return 0.0f;
                            }
                            catch (MatchException matchException) {
                                throw lj.bYW(matchException);
                            }
                            string4 = string;
                        }
                        try {
                            try {
                                bl = string4.isBlank();
                                if (string3 == null) break block14;
                                if (!bl) break block15;
                                return 0.0f;
                            }
                            catch (MatchException matchException) {
                                throw lj.bYW(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw lj.bYW(matchException);
                        }
                    }
                    try {
                        string2 = string;
                        if (string3 == null) break block16;
                        bl = jk.bDz(string2);
                    }
                    catch (MatchException matchException) {
                        throw lj.bYW(matchException);
                    }
                }
                try {
                    if (bl) {
                        return this.bYy(string, f);
                    }
                }
                catch (MatchException matchException) {
                    throw lj.bYW(matchException);
                }
                string2 = string;
            }
            l = lj.bYA(string2, f);
            Float f3 = this.sJMLD.get(l);
            try {
                f2 = f3;
                if (string3 == null) return f2.floatValue();
                if (f2 == null) break block17;
            }
            catch (MatchException matchException) {
                throw lj.bYW(matchException);
            }
            f2 = f3;
            return f2.floatValue();
        }
        float f4 = this.bYu(string, f);
        this.sJMLD.put(l, Float.valueOf(f4));
        return f4;
    }

    public float bYK(int[] nArray, float f) {
        long l;
        block3: {
            Float f2;
            block2: {
                long l2 = NptTm ^ 0x1BF97E91F5E0L;
                l = lj.bYB(nArray, f);
                String string = lj.bYV();
                Float f3 = this.RMDjl.get(l);
                try {
                    f2 = f3;
                    if (string == null) break block2;
                    if (f2 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw lj.bYW(matchException);
                }
                f2 = f3;
            }
            return f2.floatValue();
        }
        float f4 = this.bYI(nArray, f);
        this.RMDjl.put(l, Float.valueOf(f4));
        return f4;
    }

    public static String bYV() {
        return oxhLM;
    }

    /*
     * Unable to fully structure code
     */
    public void bYt(Matrix4f var1_1, class_4588 var2_2, int[] var3_3, float var4_4, float var5_5, float var6_6, float var7_7, float var8_8, float var9_9, int var10_10) {
        var11_11 = lj.NptTm ^ 75542359778228L;
        var14_12 = -1;
        var15_13 = 0;
        var13_14 = lj.bYV();
        for (int var19_18 : var3_3) {
            block23: {
                block24: {
                    block21: {
                        block20: {
                            block19: {
                                block18: {
                                    try {
                                        v0 = var15_13;
                                        if (var13_14 == null) break block18;
                                        if (v0 != 0) {
                                        }
                                        ** GOTO lbl17
                                    }
                                    catch (MatchException v1) {
                                        throw lj.bYW(v1);
                                    }
                                    var15_13 = 0;
                                    try {
                                        if (var13_14 != null) continue;
lbl17:
                                        // 2 sources

                                        v0 = var19_18;
                                    }
                                    catch (MatchException v2) {
                                        throw lj.bYW(v2);
                                    }
                                }
                                try {
                                    try {
                                        if (var13_14 == null) break block19;
                                        if (v0 != lj.bYZ("h", (int)1757, (long)(884272516449754875L ^ var11_11))) break block20;
                                    }
                                    catch (MatchException v3) {
                                        throw lj.bYW(v3);
                                    }
                                    v0 = 1;
                                }
                                catch (MatchException v4) {
                                    throw lj.bYW(v4);
                                }
                            }
                            var15_13 = v0;
                            if (var13_14 != null) continue;
                        }
                        var20_19 = this.ppJSr.get(var19_18);
                        try {
                            block22: {
                                try {
                                    try {
                                        v5 = var20_19;
                                        if (var13_14 == null) break block21;
                                        if (v5 != null) break block22;
                                    }
                                    catch (MatchException v6) {
                                        throw lj.bYW(v6);
                                    }
                                    if (var13_14 != null) continue;
                                }
                                catch (MatchException v7) {
                                    throw lj.bYW(v7);
                                }
                            }
                            v5 = this.hyjPr.get(var14_12);
                        }
                        catch (MatchException v8) {
                            throw lj.bYW(v8);
                        }
                    }
                    var21_20 = (Map)v5;
                    try {
                        if (var13_14 == null) break block23;
                        if (var21_20 == null) break block24;
                    }
                    catch (MatchException v9) {
                        throw lj.bYW(v9);
                    }
                    var7_7 += var21_20.getOrDefault(var19_18, Float.valueOf(0.0f)).floatValue() * var4_4;
                }
                var7_7 += var20_19.bZk(var1_1, var2_2, var4_4, var7_7, var8_8, var9_9, var10_10) + var5_5 + var6_6;
            }
            var14_12 = var19_18;
            if (var13_14 != null) continue;
        }
    }

    /*
     * Unable to fully structure code
     */
    private float bYw(String var1_1, int var2_2, int var3_3, float var4_4) {
        var5_5 = lj.NptTm ^ 36278295564132L;
        var8_6 = -1;
        var7_7 = lj.bYV();
        var9_8 = 0.0f;
        var10_9 = '\u0000';
        for (var11_10 = var2_2; var11_10 < var3_3; ++var11_10) {
            block23: {
                block24: {
                    block21: {
                        block20: {
                            block19: {
                                block18: {
                                    var12_11 = var1_1.charAt(var11_10);
                                    try {
                                        v0 = var10_9;
                                        if (var7_7 == null) break block18;
                                        if (v0 != '\u0000') {
                                        }
                                        ** GOTO lbl19
                                    }
                                    catch (MatchException v1) {
                                        throw lj.bYW(v1);
                                    }
                                    var10_9 = '\u0000';
                                    try {
                                        if (var7_7 != null) continue;
lbl19:
                                        // 2 sources

                                        v0 = var12_11;
                                    }
                                    catch (MatchException v2) {
                                        throw lj.bYW(v2);
                                    }
                                }
                                try {
                                    try {
                                        if (var7_7 == null) break block19;
                                        if (v0 != lj.bYZ("h", (int)1757, (long)(884382698990105131L ^ var5_5))) break block20;
                                    }
                                    catch (MatchException v3) {
                                        throw lj.bYW(v3);
                                    }
                                    v0 = '\u0001';
                                }
                                catch (MatchException v4) {
                                    throw lj.bYW(v4);
                                }
                            }
                            var10_9 = v0;
                            if (var7_7 != null) continue;
                        }
                        var13_12 = this.ppJSr.get(var12_11);
                        try {
                            block22: {
                                try {
                                    try {
                                        v5 = var13_12;
                                        if (var7_7 == null) break block21;
                                        if (v5 != null) break block22;
                                    }
                                    catch (MatchException v6) {
                                        throw lj.bYW(v6);
                                    }
                                    if (var7_7 != null) continue;
                                }
                                catch (MatchException v7) {
                                    throw lj.bYW(v7);
                                }
                            }
                            v5 = this.hyjPr.get(var8_6);
                        }
                        catch (MatchException v8) {
                            throw lj.bYW(v8);
                        }
                    }
                    var14_13 = (Map)v5;
                    try {
                        if (var7_7 == null) break block23;
                        if (var14_13 == null) break block24;
                    }
                    catch (MatchException v9) {
                        throw lj.bYW(v9);
                    }
                    var9_8 += var14_13.getOrDefault(var12_11, Float.valueOf(0.0f)).floatValue() * var4_4;
                }
                var9_8 += var13_12.bZl(var4_4) + 0.25f;
            }
            var8_6 = var12_11;
            if (var7_7 != null) continue;
        }
        return var9_8;
    }

    private float bYv(int[] nArray, float f) {
        return this.bYx(nArray, 0, nArray.length, f);
    }

    private static MatchException bYW(MatchException matchException) {
        return matchException;
    }

    private static CallSite bYZ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lj" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public float bYu(String string, float f) {
        return this.bYw(string, 0, string.length(), f);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lj.class, "bZb", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
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
            return MethodHandles.lookup().findStatic(lj.class, "bYY", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
