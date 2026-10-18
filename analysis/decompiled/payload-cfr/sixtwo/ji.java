/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1291
 *  net.minecraft.class_1293
 *  net.minecraft.class_1799
 *  net.minecraft.class_1844
 *  net.minecraft.class_4081
 *  net.minecraft.class_6880
 *  net.minecraft.class_9334
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1291;
import net.minecraft.class_1293;
import net.minecraft.class_1799;
import net.minecraft.class_1844;
import net.minecraft.class_4081;
import net.minecraft.class_6880;
import net.minecraft.class_9334;
import sixtwo.gb;
import sixtwo.jf;

public class ji {
    private static final long ddkOp = gb.aYR(-8770930556179578709L, 1365867104116320953L, MethodHandles.lookup().lookupClass()).a(151922222827004L);
    private static final String[] MISSp;
    private static final String[] QMarr;
    private static final Map iyXhB;
    private static final long[] jEdlK;
    private static final Integer[] knWfQ;
    private static final Map ChJqY;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        iyXhB = new HashMap(13);
        long l = ddkOp ^ 0x7B2DA9AF58FL;
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
        String[] stringArray = new String[2];
        int n = 0;
        String string = "\u0019\u008e\u00ea R\u0091\u0001\u0093\u00b7\u008dH\u0011\u008e\u00d0\u009e%\u0010H\u00f0\u00a4+\u00d9\u008e\u00aaG\u0012\u000b[\u00d2\u00f3\u00f4\u00be\u0002";
        int n2 = "\u0019\u008e\u00ea R\u0091\u0001\u0093\u00b7\u008dH\u0011\u008e\u00d0\u009e%\u0010H\u00f0\u00a4+\u00d9\u008e\u00aaG\u0012\u000b[\u00d2\u00f3\u00f4\u00be\u0002".length();
        int n3 = 16;
        int n4 = -1;
        while (true) {
            int n5 = ++n4;
            byte[] byArray3 = cipher.doFinal(string.substring(n5, n5 + n3).getBytes("ISO-8859-1"));
            stringArray[n++] = ji.bCz(byArray3).intern();
            if ((n4 += n3) >= n2) break;
            n3 = string.charAt(n4);
        }
        MISSp = stringArray;
        QMarr = new String[2];
        ChJqY = new HashMap(13);
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
        int n6 = 0;
        String string2 = "u;\u00b7\u00ba\u0084\u0015W*J|\u00e5\u0093\u00f5S\u00a1\u008c\u00b3\u000b\u0092\u0080\u00ffbah";
        int n7 = "u;\u00b7\u00ba\u0084\u0015W*J|\u00e5\u0093\u00f5S\u00a1\u008c\u00b3\u000b\u0092\u0080\u00ffbah".length();
        int n8 = 0;
        do {
            byte[] byArray6 = string2.substring(n8, n8 += 8).getBytes("ISO-8859-1");
            int n9 = n6++;
            long l2 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n9] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n8 < n7);
        jEdlK = lArray;
        knWfQ = new Integer[3];
    }

    private static int bCD(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x50E1;
        if (knWfQ[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = jEdlK[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])ChJqY.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ChJqY.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ji", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ji.knWfQ[n2] = n3;
        }
        return knWfQ[n2];
    }

    private static MatchException bCy(MatchException matchException) {
        return matchException;
    }

    private static CallSite bCF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ji" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static boolean bCx(class_1799 class_17992) {
        boolean bl;
        block5: {
            long l = ddkOp ^ 0x68104BB8D983L;
            class_1844 class_18442 = (class_1844)class_17992.method_57353().method_58695(class_9334.field_49651, (Object)class_1844.field_49274);
            Iterator iterator = class_18442.method_57397().iterator();
            String[] stringArray = jf.bBe();
            while (iterator.hasNext()) {
                block7: {
                    boolean bl2;
                    block6: {
                        class_1293 class_12932 = (class_1293)iterator.next();
                        try {
                            try {
                                bl = ((class_1291)class_12932.method_5579().comp_349()).method_18792().equals((Object)class_4081.field_18272);
                                if (stringArray == null) break block5;
                                if (stringArray == null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw ji.bCy(matchException);
                            }
                            if (!bl) break block7;
                        }
                        catch (MatchException matchException) {
                            throw ji.bCy(matchException);
                        }
                        bl2 = true;
                    }
                    return bl2;
                }
                if (stringArray != null) continue;
            }
            bl = false;
        }
        return bl;
    }

    private static String bCz(byte[] byArray) {
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

    private static Object bCB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ji.bCA(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static CallSite bCC(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ji" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static boolean bCw(class_1799 class_17992, class_6880<class_1291> class_68802) {
        long l = ddkOp ^ 0x3E427235B875L;
        class_1844 class_18442 = (class_1844)class_17992.method_57353().method_58695(class_9334.field_49651, (Object)class_1844.field_49274);
        String[] stringArray = jf.bBe();
        for (class_1293 class_12932 : class_18442.method_57397()) {
            try {
                if (class_12932.method_5579() == class_68802) {
                    return true;
                }
            }
            catch (MatchException matchException) {
                throw ji.bCy(matchException);
            }
            if (stringArray != null) continue;
        }
        return false;
    }

    private static int bCE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = ji.bCD(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static String bCA(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7509;
        if (QMarr[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])iyXhB.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    iyXhB.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ji", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = MISSp[n2].getBytes("ISO-8859-1");
            ji.QMarr[n2] = ji.bCz(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return QMarr[n2];
    }

    public static String bCv(class_1293 class_12932) {
        int n;
        long l;
        block4: {
            block5: {
                l = ddkOp ^ 0x6A4D8876740FL;
                String[] stringArray = jf.bBe();
                try {
                    try {
                        n = class_12932.method_48559();
                        if (stringArray == null) break block4;
                        if (n == 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ji.bCy(matchException);
                    }
                    return ji.bCC("p", (int)22249, (long)(0x768FC0AE8D0D2F70L ^ l));
                }
                catch (MatchException matchException) {
                    throw ji.bCy(matchException);
                }
            }
            n = class_12932.method_5584();
        }
        int n2 = n;
        int n3 = n2 / ji.bCF("n", (int)28564, (long)(0x474A35C9E27A33E5L ^ l));
        String string = String.format((String)((Object)ji.bCC("p", (int)25763, (long)(0x7BA11368CF089D3BL ^ l))), n2 % ji.bCF("n", (int)2676, (long)(0x5864ED8FB0B5607L ^ l)) / ji.bCF("n", (int)23611, (long)(0x333966AAB127804BL ^ l)));
        return n3 + ":" + string;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ji.class, "bCE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(ji.class, "bCB", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
