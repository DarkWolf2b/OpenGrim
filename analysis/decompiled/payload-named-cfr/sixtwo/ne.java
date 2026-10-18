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
        int n2;
        block22: {
            block23: {
                ne ne2;
                int n3;
                block20: {
                    block21: {
                        Object object2;
                        block18: {
                            block19: {
                                block16: {
                                    block17: {
                                        long l2 = AdiPa ^ 0x509D67B002AEL;
                                        n3 = nf.cup();
                                        try {
                                            try {
                                                object2 = object;
                                                if (n3 != 0) break block16;
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
                                        if (n3 != 0) break block18;
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
                                n2 = ne2.ctx(this);
                                if (n3 != 0) break block20;
                                if (n2 != 0) break block21;
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
                    n2 = this.ctt();
                }
                try {
                    try {
                        if (n3 != 0) break block22;
                        if (n2 == ne2.ctt()) break block23;
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
            n2 = 1;
        }
        return n2 != 0;
    }

    public String toString() {
        long l2 = AdiPa ^ 0x6D62AF29269FL;
        return (String)((Object)ne.ctC("p", (int)10024, (long)(0x53F266BBC6EB83ACL ^ l2))) + this.ctt() + (String)((Object)ne.ctC("p", (int)19132, (long)(0x332B889C1FF2EE3AL ^ l2))) + this.ctu() + ")";
    }

    public int hashCode() {
        long l2 = AdiPa ^ 0x4E8B2C39ED98L;
        CallSite callSite = ne.ctF("o", (int)28963, (long)(0x6749E823E6AB0BB1L ^ l2));
        int n2 = 1;
        n2 = n2 * ne.ctF("o", (int)15283, (long)(0x4A50173AD3644120L ^ l2)) + this.ctt();
        return n2;
    }

    protected boolean ctx(Object object) {
        return object instanceof ne;
    }

    public boolean ctr() {
        int n2;
        block10: {
            block9: {
                int n3;
                block8: {
                    long l2 = AdiPa ^ 0x788D778EA3AEL;
                    n3 = nf.cup();
                    try {
                        try {
                            n2 = this.cto();
                            if (n3 != 0) break block8;
                            if (n2 == 0) break block9;
                        }
                        catch (MatchException matchException) {
                            throw ne.cty(matchException);
                        }
                        n2 = this.mxtEm;
                    }
                    catch (MatchException matchException) {
                        throw ne.cty(matchException);
                    }
                }
                try {
                    try {
                        if (n3 != 0) break block10;
                        if (n2 < this.LOMJC) break block9;
                    }
                    catch (MatchException matchException) {
                        throw ne.cty(matchException);
                    }
                    n2 = 1;
                    break block10;
                }
                catch (MatchException matchException) {
                    throw ne.cty(matchException);
                }
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    private static MatchException cty(MatchException matchException) {
        return matchException;
    }

    public boolean cts(int n2) {
        boolean bl2;
        block4: {
            block5: {
                long l2 = AdiPa ^ 0x1F63E8DA9EB6L;
                int n3 = nf.cup();
                try {
                    try {
                        bl2 = this.cto();
                        if (n3 != 0) break block4;
                        if (bl2) break block5;
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
            this.mxtEm += Math.max(0, n2);
            bl2 = this.ctr();
        }
        return bl2;
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l2 = AdiPa ^ 0x715A3E8EB4FFL;
        this.LOMJC = this.readInt(jsonObject, (String)((Object)ne.ctC("p", (int)2068, (long)(0x5005AC40D11D3EF3L ^ l2))));
        this.mxtEm = 0;
    }

    @Override
    public JsonObject toJson() {
        long l2 = AdiPa ^ 0x6F517ACE4A74L;
        JsonObject jsonObject = new JsonObject();
        jsonObject.addProperty((String)((Object)ne.ctC("p", (int)27258, (long)(0x6EEA3CCCE02C2214L ^ l2))), (Number)this.LOMJC);
        return jsonObject;
    }

    public int ctt() {
        return this.LOMJC;
    }

    private static Object ctB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = ne.ctA(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public void ctw(int n2) {
        this.mxtEm = n2;
    }

    public int ctu() {
        return this.mxtEm;
    }

    private static String ctA(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5BC5;
        if (bLMIm[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])ZkIIf.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ZkIIf.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ne", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = OIsku[n3].getBytes("ISO-8859-1");
            ne.bLMIm[n3] = ne.ctz(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return bLMIm[n3];
    }

    public void ctv(int n2) {
        this.LOMJC = n2;
    }

    public boolean cto() {
        boolean bl2;
        block2: {
            block3: {
                long l2 = AdiPa ^ 0x653BF39B0735L;
                int n2 = nf.cuo();
                try {
                    bl2 = this.LOMJC;
                    if (n2 == 0) break block2;
                    if (bl2 <= false) break block3;
                }
                catch (MatchException matchException) {
                    throw ne.cty(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        return bl2;
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
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }

    public int ctq() {
        int n2;
        block4: {
            block5: {
                long l2 = AdiPa ^ 0xEA8AECC33C2L;
                int n3 = nf.cuo();
                try {
                    try {
                        n2 = this.cto();
                        if (n3 == 0) break block4;
                        if (n2 != 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ne.cty(matchException);
                    }
                    return (int)ne.ctF("o", (int)26825, (long)(0x208B60434DC44C03L ^ l2));
                }
                catch (MatchException matchException) {
                    throw ne.cty(matchException);
                }
            }
            n2 = Math.max(0, this.LOMJC - this.mxtEm);
        }
        return n2;
    }

    private static int ctE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = ne.ctD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public void ctp() {
        this.mxtEm = 0;
    }

    private static int ctD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4ED6;
        if (qPvdD[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = dllYw[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])tDnlj.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    tDnlj.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ne.qPvdD[n3] = n4;
        }
        return qPvdD[n3];
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

