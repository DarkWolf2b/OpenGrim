/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonObject;
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
import sixtwo.nf;
import sixtwo.rp;

public class ne
implements rp {
    private int LOMJC;
    private transient int mxtEm;
    private static final long AdiPa;
    private static final String[] OIsku;
    private static final String[] bLMIm;
    private static final Map ZkIIf;
    private static final long[] dllYw;
    private static final Integer[] qPvdD;
    private static final Map tDnlj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block16: {
            block15: {
                block14: {
                    block13: {
                        ne.AdiPa = gb.aYR(-5591567316391317439L, 4056276759534062257L, MethodHandles.lookup().lookupClass()).a(165024987489519L);
                        ne.ZkIIf = new HashMap<K, V>(13);
                        var11 = ne.AdiPa ^ 139143043845502L;
                        var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var11 >>> 56);
                        for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                            v2 = v2;
                            v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                        }
                        var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var20_3 = new String[4];
                        var18_4 = 0;
                        var17_5 = "\u00a7\u009b\u008f^\u00dc\u00b3\u001f@\u00d7\u00f01\\6~\u0000U\u00e7Q\u00d39\u0089;\u000b\u0003\u0016\u00a5\u00d9m\u00bb\u000f\u007f\u00fbp\u0086\u00b3\u00b2\u0090\u00a4<\u00b0\u0010\u0018s\u0014J\u00db\u00c2\u00e1\u0006=/:\u00c1\u00e3\u0084\u0098\u00a7";
                        var19_6 = "\u00a7\u009b\u008f^\u00dc\u00b3\u001f@\u00d7\u00f01\\6~\u0000U\u00e7Q\u00d39\u0089;\u000b\u0003\u0016\u00a5\u00d9m\u00bb\u000f\u007f\u00fbp\u0086\u00b3\u00b2\u0090\u00a4<\u00b0\u0010\u0018s\u0014J\u00db\u00c2\u00e1\u0006=/:\u00c1\u00e3\u0084\u0098\u00a7".length();
                        var16_7 = 40;
                        var15_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block13;
                            break;
                        }
lbl25:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = ne.ctz(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "$4\u00c7Me\u00cfr(\u000fl\u00fd\u008c+\u00dd}B\u0018\u0097\u00c1Z\u00a9h]g\u0098\u00db\u00d0/J\u00d6 \u0011zT\u00d1zaPA\u00eb\u0010\u0004\u001d\u008a?I\u00f8\u00e3\u00be`Z\u00f9\u00a8{l\u00f4\u00f0";
                            var19_6 = "$4\u00c7Me\u00cfr(\u000fl\u00fd\u008c+\u00dd}B\u0018\u0097\u00c1Z\u00a9h]g\u0098\u00db\u00d0/J\u00d6 \u0011zT\u00d1zaPA\u00eb\u0010\u0004\u001d\u008a?I\u00f8\u00e3\u00be`Z\u00f9\u00a8{l\u00f4\u00f0".length();
                            var16_7 = 40;
                            var15_8 = -1;
lbl34:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block13;
                                break;
                            }
                            break;
                        }
lbl39:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = ne.ctz(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block14;
                            break;
                        }
                    }
                    var21_9 = var13_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl51:
                        // 1 sources

                        ** continue;
                    }
                }
                ne.OIsku = var20_3;
                ne.bLMIm = new String[4];
                ne.tDnlj = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[3];
                var3_13 = 0;
                var4_14 = "\u008a\u00f5U\u0011\u00c4\u00d2D\u0011\u001f\u00ef\u001a\u00a9\"v\u0088\u0084\u00e6b\u00e0\tgs\u0017\u00e3";
                var5_15 = "\u008a\u00f5U\u0011\u00c4\u00d2D\u0011\u001f\u00ef\u001a\u00a9\"v\u0088\u0084\u00e6b\u00e0\tgs\u0017\u00e3".length();
                var2_16 = 0;
                while (true) {
                    break block15;
                    break;
                }
lbl73:
                // 1 sources

                while (true) {
                    var6_12[v10] = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
                    if (var2_16 < var5_15) ** continue;
                    break block16;
                    break;
                }
            }
            var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
            v10 = var3_13++;
            var8_18 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            ** while (true)
        }
        ne.dllYw = var6_12;
        ne.qPvdD = new Integer[3];
    }

    public boolean equals(Object object) {
        int n;
        block22: {
            block23: {
                ne ne2;
                int n2;
                block20: {
                    block21: {
                        Object object2;
                        block18: {
                            block19: {
                                block16: {
                                    block17: {
                                        long l = AdiPa ^ 0x509D67B002AEL;
                                        n2 = nf.cup();
                                        try {
                                            try {
                                                object2 = object;
                                                if (n2 != 0) break block16;
                                                if (object2 != this) break block17;
                                            }
                                            catch (MatchException matchException) {
                                                throw ne.cty(matchException);
                                            }
                                            return true;
                                        }
                                        catch (MatchException matchException) {
                                            throw ne.cty(matchException);
                                        }
                                    }
                                    object2 = object;
                                }
                                try {
                                    try {
                                        if (n2 != 0) break block18;
                                        if (object2 instanceof ne) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw ne.cty(matchException);
                                    }
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw ne.cty(matchException);
                                }
                            }
                            object2 = object;
                        }
                        ne2 = (ne)object2;
                        try {
                            try {
                                n = ne2.ctx(this);
                                if (n2 != 0) break block20;
                                if (n != 0) break block21;
                            }
                            catch (MatchException matchException) {
                                throw ne.cty(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw ne.cty(matchException);
                        }
                    }
                    n = this.ctt();
                }
                try {
                    try {
                        if (n2 != 0) break block22;
                        if (n == ne2.ctt()) break block23;
                    }
                    catch (MatchException matchException) {
                        throw ne.cty(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw ne.cty(matchException);
                }
            }
            n = 1;
        }
        return n != 0;
    }

    public String toString() {
        long l = AdiPa ^ 0x6D62AF29269FL;
        return (String)((Object)ne.ctC("p", (int)10024, (long)(0x53F266BBC6EB83ACL ^ l))) + this.ctt() + (String)((Object)ne.ctC("p", (int)19132, (long)(0x332B889C1FF2EE3AL ^ l))) + this.ctu() + ")";
    }

    public int hashCode() {
        long l = AdiPa ^ 0x4E8B2C39ED98L;
        CallSite callSite = ne.ctF("o", (int)28963, (long)(0x6749E823E6AB0BB1L ^ l));
        int n = 1;
        n = n * ne.ctF("o", (int)15283, (long)(0x4A50173AD3644120L ^ l)) + this.ctt();
        return n;
    }

    protected boolean ctx(Object object) {
        return object instanceof ne;
    }

    public boolean ctr() {
        int n;
        block10: {
            block9: {
                int n2;
                block8: {
                    long l = AdiPa ^ 0x788D778EA3AEL;
                    n2 = nf.cup();
                    try {
                        try {
                            n = this.cto();
                            if (n2 != 0) break block8;
                            if (n == 0) break block9;
                        }
                        catch (MatchException matchException) {
                            throw ne.cty(matchException);
                        }
                        n = this.mxtEm;
                    }
                    catch (MatchException matchException) {
                        throw ne.cty(matchException);
                    }
                }
                try {
                    try {
                        if (n2 != 0) break block10;
                        if (n < this.LOMJC) break block9;
                    }
                    catch (MatchException matchException) {
                        throw ne.cty(matchException);
                    }
                    n = 1;
                    break block10;
                }
                catch (MatchException matchException) {
                    throw ne.cty(matchException);
                }
            }
            n = 0;
        }
        return n != 0;
    }

    private static MatchException cty(MatchException matchException) {
        return matchException;
    }

    public boolean cts(int n) {
        boolean bl;
        block4: {
            block5: {
                long l = AdiPa ^ 0x1F63E8DA9EB6L;
                int n2 = nf.cup();
                try {
                    try {
                        bl = this.cto();
                        if (n2 != 0) break block4;
                        if (bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ne.cty(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw ne.cty(matchException);
                }
            }
            this.mxtEm += Math.max(0, n);
            bl = this.ctr();
        }
        return bl;
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l = AdiPa ^ 0x715A3E8EB4FFL;
        this.LOMJC = this.readInt(jsonObject, (String)((Object)ne.ctC("p", (int)2068, (long)(0x5005AC40D11D3EF3L ^ l))));
        this.mxtEm = 0;
    }

    @Override
    public JsonObject toJson() {
        long l = AdiPa ^ 0x6F517ACE4A74L;
        JsonObject jsonObject = new JsonObject();
        jsonObject.addProperty((String)((Object)ne.ctC("p", (int)27258, (long)(0x6EEA3CCCE02C2214L ^ l))), (Number)this.LOMJC);
        return jsonObject;
    }

    public int ctt() {
        return this.LOMJC;
    }

    private static Object ctB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ne.ctA(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public void ctw(int n) {
        this.mxtEm = n;
    }

    public int ctu() {
        return this.mxtEm;
    }

    private static String ctA(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5BC5;
        if (bLMIm[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])ZkIIf.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ZkIIf.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ne", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = OIsku[n2].getBytes("ISO-8859-1");
            ne.bLMIm[n2] = ne.ctz(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return bLMIm[n2];
    }

    public void ctv(int n) {
        this.LOMJC = n;
    }

    public boolean cto() {
        boolean bl;
        block2: {
            block3: {
                long l = AdiPa ^ 0x653BF39B0735L;
                int n = nf.cuo();
                try {
                    bl = this.LOMJC;
                    if (n == 0) break block2;
                    if (bl <= false) break block3;
                }
                catch (MatchException matchException) {
                    throw ne.cty(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        return bl;
    }

    private static CallSite ctC(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ne" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String ctz(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    public int ctq() {
        int n;
        block4: {
            block5: {
                long l = AdiPa ^ 0xEA8AECC33C2L;
                int n2 = nf.cuo();
                try {
                    try {
                        n = this.cto();
                        if (n2 == 0) break block4;
                        if (n != 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ne.cty(matchException);
                    }
                    return (int)ne.ctF("o", (int)26825, (long)(0x208B60434DC44C03L ^ l));
                }
                catch (MatchException matchException) {
                    throw ne.cty(matchException);
                }
            }
            n = Math.max(0, this.LOMJC - this.mxtEm);
        }
        return n;
    }

    private static int ctE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = ne.ctD(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public void ctp() {
        this.mxtEm = 0;
    }

    private static int ctD(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4ED6;
        if (qPvdD[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = dllYw[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])tDnlj.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    tDnlj.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ne", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ne.qPvdD[n2] = n3;
        }
        return qPvdD[n2];
    }

    private static CallSite ctF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ne" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ne.class, "ctB", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(ne.class, "ctE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
