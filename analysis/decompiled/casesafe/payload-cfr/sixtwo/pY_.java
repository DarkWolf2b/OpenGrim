/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_591
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
import net.minecraft.class_591;
import sixtwo.gb;
import sixtwo.pX;
import sixtwo.qa;

public interface pY {
    public static final long QZmgt = gb.aYR(-6133195020221149175L, -1383166985107431704L, MethodHandles.lookup().lookupClass()).a(272923819504050L);
    public static final String GPwAt;
    public static final long[] DbCCK;
    public static final Integer[] pIufn;
    public static final Map Lfqki;

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = QZmgt ^ 0x5B0D0DB7B417L;
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        byte[] byArray3 = cipher.doFinal("\u00c2I\u0015\u00a2\u00c0\u00cf\u00fd:".getBytes("ISO-8859-1"));
        GPwAt = pY.a(byArray3).intern();
        Lfqki = new HashMap(13);
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray5 = byArray5;
            byArray5[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[3];
        int n = 0;
        String string = "\u00f7JD\u00b2\u0092\u0094\u000e\u00e3\u0099'`\u0084 \u00ab\u00c0\u0010\u00a1\u00cc\u00dd\u0082\u00dc\u009f\u0010\u0010";
        int n2 = "\u00f7JD\u00b2\u0092\u0094\u000e\u00e3\u0099'`\u0084 \u00ab\u00c0\u0010\u00a1\u00cc\u00dd\u0082\u00dc\u009f\u0010\u0010".length();
        int n3 = 0;
        do {
            byte[] byArray6 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n3 < n2);
        DbCCK = lArray;
        pIufn = new Integer[3];
    }

    private static MatchException b(MatchException matchException) {
        return matchException;
    }

    private static CallSite a(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pY" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String a(byte[] byArray) {
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

    private static int a(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1DA7;
        if (pIufn[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = DbCCK[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Lfqki.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Lfqki.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pY", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            pY.pIufn[n2] = n3;
        }
        return pIufn[n2];
    }

    private static int a(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = pY.a(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public String id();

    default public String label() {
        String string;
        block43: {
            StringBuilder stringBuilder;
            block41: {
                StringBuilder stringBuilder2;
                block42: {
                    boolean bl;
                    String string2;
                    block34: {
                        String string3;
                        String[] stringArray;
                        long l;
                        block32: {
                            block33: {
                                String string4;
                                block30: {
                                    l = QZmgt ^ 0x163301B5F2C9L;
                                    string2 = this.id();
                                    stringArray = qa.cUe();
                                    try {
                                        block31: {
                                            try {
                                                try {
                                                    try {
                                                        string4 = string2;
                                                        if (stringArray == null) break block30;
                                                        if (string4 == null) break block31;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw pY.b(matchException);
                                                    }
                                                    string3 = string2;
                                                    if (stringArray == null) break block32;
                                                }
                                                catch (MatchException matchException) {
                                                    throw pY.b(matchException);
                                                }
                                                if (!string3.isBlank()) break block33;
                                            }
                                            catch (MatchException matchException) {
                                                throw pY.b(matchException);
                                            }
                                        }
                                        string4 = GPwAt;
                                    }
                                    catch (MatchException matchException) {
                                        throw pY.b(matchException);
                                    }
                                }
                                return string4;
                            }
                            string3 = string2.replace((char)pY.a("h", (int)21558, (long)(0x668AA56D1D673F30L ^ l)), (char)pY.a("h", (int)5283, (long)(0x67527C5ADEF77FA6L ^ l)));
                        }
                        String[] stringArray2 = string3.split("_");
                        stringBuilder2 = new StringBuilder();
                        String[] stringArray3 = stringArray2;
                        int n = stringArray3.length;
                        int n2 = 0;
                        while (n2 < n) {
                            block40: {
                                block37: {
                                    int n3;
                                    String string5;
                                    block38: {
                                        block39: {
                                            block35: {
                                                string5 = stringArray3[n2];
                                                try {
                                                    block36: {
                                                        try {
                                                            try {
                                                                try {
                                                                    bl = string5.isBlank();
                                                                    if (stringArray == null) break block34;
                                                                    if (stringArray == null) break block35;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw pY.b(matchException);
                                                                }
                                                                if (!bl) break block36;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw pY.b(matchException);
                                                            }
                                                            if (stringArray != null) break block37;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw pY.b(matchException);
                                                        }
                                                    }
                                                    n3 = stringBuilder2.isEmpty();
                                                }
                                                catch (MatchException matchException) {
                                                    throw pY.b(matchException);
                                                }
                                            }
                                            try {
                                                try {
                                                    if (stringArray == null) break block38;
                                                    if (n3 != 0) break block39;
                                                }
                                                catch (MatchException matchException) {
                                                    throw pY.b(matchException);
                                                }
                                                stringBuilder2.append((char)pY.a("h", (int)20896, (long)(0x1717E7648D59BAA7L ^ l)));
                                            }
                                            catch (MatchException matchException) {
                                                throw pY.b(matchException);
                                            }
                                        }
                                        try {
                                            stringBuilder2.append(string5.substring(0, 1).toUpperCase());
                                            if (stringArray == null) break block40;
                                            n3 = string5.length();
                                        }
                                        catch (MatchException matchException) {
                                            throw pY.b(matchException);
                                        }
                                    }
                                    try {
                                        if (n3 > 1) {
                                            stringBuilder2.append(string5.substring(1).toLowerCase());
                                        }
                                    }
                                    catch (MatchException matchException) {
                                        throw pY.b(matchException);
                                    }
                                }
                                ++n2;
                            }
                            if (stringArray != null) continue;
                        }
                        try {
                            stringBuilder = stringBuilder2;
                            if (stringArray == null) break block41;
                            bl = stringBuilder.isEmpty();
                        }
                        catch (MatchException matchException) {
                            throw pY.b(matchException);
                        }
                    }
                    try {
                        if (!bl) break block42;
                        string = string2;
                        break block43;
                    }
                    catch (MatchException matchException) {
                        throw pY.b(matchException);
                    }
                }
                stringBuilder = stringBuilder2;
            }
            string = stringBuilder.toString();
        }
        return string;
    }

    public pX createInstance();

    public void applyPreviewKeyframe(class_591 var1);

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pY.class, "a", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
