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
import sixtwo.ie;
import sixtwo.rp;

public class if
implements rp {
    private float oiSwF;
    private float KLUBM;
    private static final long duldL;
    private static final String[] byyuw;
    private static final String[] GeaKN;
    private static final Map rJnaA;
    private static final long[] waMdm;
    private static final Integer[] GAyVU;
    private static final Map lKMAG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block16: {
            block15: {
                block14: {
                    block13: {
                        if.duldL = gb.aYR(1112118321749536250L, -4631589397090665998L, MethodHandles.lookup().lookupClass()).a(155657763135764L);
                        if.rJnaA = new HashMap<K, V>(13);
                        var11 = if.duldL ^ 83083579722568L;
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
                        var20_3 = new String[6];
                        var18_4 = 0;
                        var17_5 = "\u0093\u00c7KW\u009a\"\u00f1\u00b7,ll\u0011\u0010\u00ce\u001d\u008e\u00a3\u00c25\u00f4W\u00fddM\u0018\u00bb\u001f\u0001\u0093\u00d4\u009a6R/\u0086\u00944\u00ad\u0099\u00fa\u0090\u009a\u008a\u00f0\u00e1\u00d0\u00cb\u00a6\u0081\u0010;;\u00d2w\u00129<\u0002]\u0000\u008f\u00a2\u009d\u0091\u00c5\u00ab\u0010\u00b7GN\u0000\u0085\u00acSP\u0082\u0019\u00bc\u00f8T\u00af\u009b\u0018";
                        var19_6 = "\u0093\u00c7KW\u009a\"\u00f1\u00b7,ll\u0011\u0010\u00ce\u001d\u008e\u00a3\u00c25\u00f4W\u00fddM\u0018\u00bb\u001f\u0001\u0093\u00d4\u009a6R/\u0086\u00944\u00ad\u0099\u00fa\u0090\u009a\u008a\u00f0\u00e1\u00d0\u00cb\u00a6\u0081\u0010;;\u00d2w\u00129<\u0002]\u0000\u008f\u00a2\u009d\u0091\u00c5\u00ab\u0010\u00b7GN\u0000\u0085\u00acSP\u0082\u0019\u00bc\u00f8T\u00af\u009b\u0018".length();
                        var16_7 = 24;
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
                            var20_3[var18_4++] = if.bih(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "\u00aak\u00b4\u00a8{\u00d4\u00c88\u001b<\u00aa\u0095v\u00cc+\u001e+\u00f6\u00f7\b\u0088J\u00fb\u00a4\u009bY\u0094\u00ecq\u0093kW\u001a\u0097\u001e\u00cd\u00da\u00d1H\u00e9 \u00d6\u00e0\u00c2/\u000b\u00be\u009e\u008e\u00aa\u0017\u00bf\u001f\u00f6\u00ec\u00b5\u00be\u00185\u00e8\u001b\u00a4\u00f2\u00ab\u00c6\u009c\u00a5:\u00b3\u00d8\u00bc@\u00bf";
                            var19_6 = "\u00aak\u00b4\u00a8{\u00d4\u00c88\u001b<\u00aa\u0095v\u00cc+\u001e+\u00f6\u00f7\b\u0088J\u00fb\u00a4\u009bY\u0094\u00ecq\u0093kW\u001a\u0097\u001e\u00cd\u00da\u00d1H\u00e9 \u00d6\u00e0\u00c2/\u000b\u00be\u009e\u008e\u00aa\u0017\u00bf\u001f\u00f6\u00ec\u00b5\u00be\u00185\u00e8\u001b\u00a4\u00f2\u00ab\u00c6\u009c\u00a5:\u00b3\u00d8\u00bc@\u00bf".length();
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
                            var20_3[var18_4++] = if.bih(var21_9).intern();
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
                if.byyuw = var20_3;
                if.GeaKN = new String[6];
                if.lKMAG = new HashMap<K, V>(13);
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
                var6_12 = new long[2];
                var3_13 = 0;
                var4_14 = "\u00b9\u00fd]u\u00d7\u00878\u00f8\u00e7\u0007\u00c8i\u00ddA\u0090\u00bd";
                var5_15 = "\u00b9\u00fd]u\u00d7\u00878\u00f8\u00e7\u0007\u00c8i\u00ddA\u0090\u00bd".length();
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
        if.waMdm = var6_12;
        if.GAyVU = new Integer[2];
    }

    public boolean equals(Object object) {
        int n2;
        block28: {
            block29: {
                String string;
                block26: {
                    if if_;
                    block27: {
                        block24: {
                            block25: {
                                Object object2;
                                block22: {
                                    block23: {
                                        block20: {
                                            block21: {
                                                long l2 = duldL ^ 0x76FC42CC0B79L;
                                                string = ie.bhR();
                                                try {
                                                    try {
                                                        object2 = object;
                                                        if (string != null) break block20;
                                                        if (object2 != this) break block21;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw if.big(matchException);
                                                    }
                                                    return true;
                                                }
                                                catch (MatchException matchException) {
                                                    throw if.big(matchException);
                                                }
                                            }
                                            object2 = object;
                                        }
                                        try {
                                            try {
                                                if (string != null) break block22;
                                                if (object2 instanceof if) break block23;
                                            }
                                            catch (MatchException matchException) {
                                                throw if.big(matchException);
                                            }
                                            return false;
                                        }
                                        catch (MatchException matchException) {
                                            throw if.big(matchException);
                                        }
                                    }
                                    object2 = object;
                                }
                                if_ = (if)object2;
                                try {
                                    try {
                                        n2 = if_.bif(this);
                                        if (string != null) break block24;
                                        if (n2 != 0) break block25;
                                    }
                                    catch (MatchException matchException) {
                                        throw if.big(matchException);
                                    }
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw if.big(matchException);
                                }
                            }
                            n2 = Float.compare(this.bib(), if_.bib());
                        }
                        try {
                            try {
                                if (string != null) break block26;
                                if (n2 == 0) break block27;
                            }
                            catch (MatchException matchException) {
                                throw if.big(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw if.big(matchException);
                        }
                    }
                    n2 = Float.compare(this.bic(), if_.bic());
                }
                try {
                    try {
                        if (string != null) break block28;
                        if (n2 == 0) break block29;
                    }
                    catch (MatchException matchException) {
                        throw if.big(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw if.big(matchException);
                }
            }
            n2 = 1;
        }
        return n2 != 0;
    }

    public String toString() {
        long l2 = duldL ^ 0x30B3ADE93A36L;
        return (String)((Object)if.bik("q", (int)11286, (long)(0x5070B752257F0A2BL ^ l2))) + this.bib() + (String)((Object)if.bik("q", (int)14658, (long)(0x10FB20F2BE659F7AL ^ l2))) + this.bic() + ")";
    }

    public int hashCode() {
        long l2 = duldL ^ 0x451CDDCA08B3L;
        CallSite callSite = if.bin("w", (int)27259, (long)(0x1070B19F48D5C4E7L ^ l2));
        int n2 = 1;
        n2 = n2 * if.bin("w", (int)8592, (long)(0x45AB31DFF8BE0F0DL ^ l2)) + Float.floatToIntBits(this.bib());
        n2 = n2 * if.bin("w", (int)8592, (long)(0x45AB31DFF8BE0F0DL ^ l2)) + Float.floatToIntBits(this.bic());
        return n2;
    }

    private static MatchException big(MatchException matchException) {
        return matchException;
    }

    private static CallSite bin(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/if" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public float bic() {
        return this.KLUBM;
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l2 = duldL ^ 0x2CF04948A459L;
        this.oiSwF = this.readFloat(jsonObject, (String)((Object)if.bik("q", (int)4945, (long)(0x646C6701D9D6AB05L ^ l2))));
        this.KLUBM = this.readFloat(jsonObject, (String)((Object)if.bik("q", (int)29113, (long)(0x56002556D2A549EAL ^ l2))));
    }

    @Override
    public JsonObject toJson() {
        long l2 = duldL ^ 0x32FB0D085AD2L;
        JsonObject jsonObject = new JsonObject();
        jsonObject.addProperty((String)((Object)if.bik("q", (int)21211, (long)(0xA0C049201731405L ^ l2))), (Number)Float.valueOf(this.oiSwF));
        jsonObject.addProperty((String)((Object)if.bik("q", (int)13743, (long)(0x24DE9BCB3672F372L ^ l2))), (Number)Float.valueOf(this.KLUBM));
        return jsonObject;
    }

    public float bib() {
        return this.oiSwF;
    }

    public static if bia(float f2, float f3) {
        return new if().bid(f2).bie(f3);
    }

    private static String bii(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5575;
        if (GeaKN[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])rJnaA.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    rJnaA.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/if", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = byyuw[n3].getBytes("ISO-8859-1");
            if.GeaKN[n3] = if.bih(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return GeaKN[n3];
    }

    private static Object bij(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = if.bii(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    protected boolean bif(Object object) {
        return object instanceof if;
    }

    private static int bim(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = if.bil(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite bik(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/if" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public if bie(float f2) {
        this.KLUBM = f2;
        return this;
    }

    private static int bil(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6F54;
        if (GAyVU[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = waMdm[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])lKMAG.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    lKMAG.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/if", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            if.GAyVU[n3] = n4;
        }
        return GAyVU[n3];
    }

    public if bid(float f2) {
        this.oiSwF = f2;
        return this;
    }

    private static String bih(byte[] byArray) {
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

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(if.class, "bim", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(if.class, "bij", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

