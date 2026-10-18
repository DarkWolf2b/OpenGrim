/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_3532
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.math.BigDecimal;
import java.math.RoundingMode;
import java.security.Key;
import java.text.SimpleDateFormat;
import java.time.Duration;
import java.time.Instant;
import java.time.ZoneId;
import java.time.format.DateTimeFormatter;
import java.util.ArrayList;
import java.util.Date;
import java.util.HashMap;
import java.util.List;
import java.util.Locale;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_3532;
import sixtwo.A;
import sixtwo.B;
import sixtwo.C;
import sixtwo.D;
import sixtwo.ak;
import sixtwo.az;
import sixtwo.cA;
import sixtwo.cB;
import sixtwo.cC;
import sixtwo.cD;
import sixtwo.cF;
import sixtwo.cG;
import sixtwo.cH;
import sixtwo.cI;
import sixtwo.cJ;
import sixtwo.cK;
import sixtwo.cL;
import sixtwo.ct;
import sixtwo.cv;
import sixtwo.cx;
import sixtwo.cy;
import sixtwo.cz;
import sixtwo.gb;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.lq;
import sixtwo.o;
import sixtwo.p;
import sixtwo.q;
import sixtwo.r;
import sixtwo.rD;
import sixtwo.u;
import sixtwo.v;
import sixtwo.w;
import sixtwo.x;
import sixtwo.y;

public class jf {
    private static final SimpleDateFormat Jlqur;
    private static String[] KVigV;
    private static final long qUVwV;
    private static final String[] OdySV;
    private static final String[] cCYcp;
    private static final Map XKQjR;
    private static final long[] RAjsP;
    private static final Integer[] COJav;
    private static final Map yjAZm;
    private static final long[] yPLqH;
    private static final Long[] LGHNj;
    private static final Map jNPAX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static boolean bAV(float f2, float f3, float f4, float f5, az az2) {
        float f6;
        block18: {
            block15: {
                String[] stringArray;
                block17: {
                    float f7;
                    block16: {
                        block14: {
                            long l = qUVwV ^ 0x45A5DC063F0AL;
                            float f8 = f2 + f4;
                            stringArray = jf.bBe();
                            f7 = f3 + f5;
                            try {
                                try {
                                    float f9 = az2.tc() - f2;
                                    f6 = f9 == 0.0f ? 0 : (f9 > 0.0f ? 1 : -1);
                                    if (stringArray == null) break block14;
                                    if (f6 <= 0) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                                float f10 = az2.tr() - f8;
                                f6 = f10 == 0.0f ? 0 : (f10 < 0.0f ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block16;
                                if (f6 >= 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            float f11 = az2.tb() - f3;
                            f6 = f11 == 0.0f ? 0 : (f11 > 0.0f ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (f6 <= 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                        float f12 = az2.ts() - f7;
                        f6 = f12 == 0.0f ? 0 : (f12 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block18;
                    if (f6 >= 0) break block15;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
                f6 = 1.0f;
                break block18;
            }
            f6 = 0.0f;
        }
        return (boolean)f6;
    }

    public static boolean bAW(lc lc2, az az2) {
        float f2;
        block18: {
            block15: {
                String[] stringArray;
                block17: {
                    block16: {
                        block14: {
                            long l = qUVwV ^ 0x3244DB784F93L;
                            stringArray = jf.bBe();
                            try {
                                try {
                                    float f3 = az2.tc() - lc2.bXF();
                                    f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                                    if (stringArray == null) break block14;
                                    if (f2 <= 0) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                                float f4 = az2.tr() - lc2.bXz();
                                f2 = f4 == 0.0f ? 0 : (f4 < 0.0f ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block16;
                                if (f2 >= 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            float f5 = az2.tb() - lc2.bXG();
                            f2 = f5 == 0.0f ? 0 : (f5 > 0.0f ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (f2 <= 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                        float f6 = az2.ts() - lc2.bXA();
                        f2 = f6 == 0.0f ? 0 : (f6 < 0.0f ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block18;
                    if (f2 >= 0) break block15;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
                f2 = 1.0f;
                break block18;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }

    public static boolean bAX(double d, double d2, double d3, double d4, double d5, double d6) {
        double d7;
        block18: {
            block15: {
                String[] stringArray;
                block17: {
                    block16: {
                        block14: {
                            long l = qUVwV ^ 0x652217FF95EL;
                            stringArray = jf.bBe();
                            try {
                                try {
                                    d7 = d5 == d ? 0 : (d5 > d ? 1 : -1);
                                    if (stringArray == null) break block14;
                                    if (d7 < 0) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                                double d8 = d5 - (d + d3);
                                d7 = d8 == 0.0 ? 0 : (d8 < 0.0 ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block16;
                                if (d7 >= 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            d7 = d6 == d2 ? 0 : (d6 > d2 ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (d7 < 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                        double d9 = d6 - (d2 + d4);
                        d7 = d9 == 0.0 ? 0 : (d9 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block18;
                    if (d7 >= 0) break block15;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
                d7 = 1.0;
                break block18;
            }
            d7 = 0.0;
        }
        return (boolean)d7;
    }

    private static String bBh(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x3E3A;
        if (cCYcp[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])XKQjR.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    XKQjR.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jf", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = OdySV[n2].getBytes("ISO-8859-1");
            jf.cCYcp[n2] = jf.bBg(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return cCYcp[n2];
    }

    public static String bAT(Instant instant) {
        String string;
        long l;
        CallSite callSite;
        long l2;
        long l3;
        block31: {
            long l4;
            long l5;
            block29: {
                String[] stringArray;
                block30: {
                    String string2;
                    long l6;
                    block27: {
                        block28: {
                            String string3;
                            long l7;
                            block25: {
                                block26: {
                                    String string4;
                                    long l8;
                                    block23: {
                                        block24: {
                                            l3 = qUVwV ^ 0x5944EC41648BL;
                                            Instant instant2 = Instant.now();
                                            Duration duration = Duration.between(instant, instant2);
                                            l5 = duration.getSeconds();
                                            stringArray = jf.bBe();
                                            try {
                                                try {
                                                    long l9 = l5 - jf.bBp("v", (int)11562, (long)(0x651076705E47398BL ^ l3));
                                                    l4 = l9 == 0L ? 0 : (l9 < 0L ? -1 : 1);
                                                    if (stringArray == null) break block23;
                                                    if (l4 >= 0) break block24;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jf.bBf(matchException);
                                                }
                                                return jf.bBj("f", (int)6320, (long)(0x55D2E9B2634014D2L ^ l3));
                                            }
                                            catch (MatchException matchException) {
                                                throw jf.bBf(matchException);
                                            }
                                        }
                                        long l10 = l5 - jf.bBp("v", (int)1631, (long)(0x6350B383F48A12F9L ^ l3));
                                        l4 = l10 == 0L ? 0 : (l10 < 0L ? -1 : 1);
                                    }
                                    try {
                                        if (stringArray == null) break block25;
                                        if (l4 >= 0) break block26;
                                    }
                                    catch (MatchException matchException) {
                                        throw jf.bBf(matchException);
                                    }
                                    long l11 = l5 / jf.bBp("v", (int)11562, (long)(0x651076705E47398BL ^ l3));
                                    try {
                                        l8 = l11;
                                        string4 = l11 > 1L ? "s" : "";
                                    }
                                    catch (MatchException matchException) {
                                        throw jf.bBf(matchException);
                                    }
                                    return l8 + (String)((Object)jf.bBj("f", (int)26885, (long)(0xD78FFF9B464656EL ^ l3))) + string4 + (String)((Object)jf.bBj("f", (int)9483, (long)(0x7DB68F2B031C296AL ^ l3)));
                                }
                                long l12 = l5 - jf.bBp("v", (int)18330, (long)(0x62F3589E87D2D333L ^ l3));
                                l4 = l12 == 0L ? 0 : (l12 < 0L ? -1 : 1);
                            }
                            try {
                                if (stringArray == null) break block27;
                                if (l4 >= 0) break block28;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            long l13 = l5 / jf.bBp("v", (int)11420, (long)(0x137A40B0F4F8B83CL ^ l3));
                            try {
                                l7 = l13;
                                string3 = l13 > 1L ? "s" : "";
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            return l7 + (String)((Object)jf.bBj("f", (int)21168, (long)(0x654661FF7CB7DED3L ^ l3))) + string3 + (String)((Object)jf.bBj("f", (int)27460, (long)(0x641C5AC758B0E722L ^ l3)));
                        }
                        long l14 = l5 - jf.bBp("v", (int)22732, (long)(0x4A1BB2C3D6C9CC64L ^ l3));
                        l4 = l14 == 0L ? 0 : (l14 < 0L ? -1 : 1);
                    }
                    try {
                        if (stringArray == null) break block29;
                        if (l4 >= 0) break block30;
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                    long l15 = l5 / jf.bBp("v", (int)2511, (long)(0x642DCB5E187D9D6CL ^ l3));
                    try {
                        l6 = l15;
                        string2 = l15 > 1L ? "s" : "";
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                    return l6 + (String)((Object)jf.bBj("f", (int)3511, (long)(0x2801BA91D02101DFL ^ l3))) + string2 + (String)((Object)jf.bBj("f", (int)27460, (long)(0x641C5AC758B0E722L ^ l3)));
                }
                try {
                    l2 = l5;
                    callSite = jf.bBp("v", (int)25267, (long)(0x6AA2A894FD2A7619L ^ l3));
                    if (stringArray == null) break block31;
                    long l16 = l2 - callSite;
                    l4 = l16 == 0L ? 0 : (l16 < 0L ? -1 : 1);
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
            }
            if (l4 < 0) {
                String string5;
                long l17;
                long l18 = l5 / jf.bBp("v", (int)7002, (long)(0x79823089F91E8FF1L ^ l3));
                try {
                    l17 = l18;
                    string5 = l18 > 1L ? "s" : "";
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
                return l17 + (String)((Object)jf.bBj("f", (int)16788, (long)(0x1303D0F56D294DFEL ^ l3))) + string5 + (String)((Object)jf.bBj("f", (int)27460, (long)(0x641C5AC758B0E722L ^ l3)));
            }
            l2 = l5;
            callSite = jf.bBp("v", (int)15713, (long)(0x73069083085DA9C3L ^ l3));
        }
        long l19 = l2 / callSite;
        try {
            l = l19;
            string = l19 > 1L ? "s" : "";
        }
        catch (MatchException matchException) {
            throw jf.bBf(matchException);
        }
        return l + (String)((Object)jf.bBj("f", (int)29572, (long)(0x4C3D4AB7CF83FFE4L ^ l3))) + string + (String)((Object)jf.bBj("f", (int)27460, (long)(0x641C5AC758B0E722L ^ l3)));
    }

    private static long bBn(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x26F9;
        if (LGHNj[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = yPLqH[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])jNPAX.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    jNPAX.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jf", exception);
            }
            long l4 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            jf.LGHNj[n2] = l4;
        }
        return LGHNj[n2];
    }

    private static int bBl(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = jf.bBk(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public static void bAZ(String string) {
        rD.dlmvG.field_1774.method_1455(string);
    }

    private static long bBo(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        long l2 = jf.bBn(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l2;
    }

    private static Object bBi(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = jf.bBh(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String bBg(byte[] byArray) {
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

    private static int bBk(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2AA2;
        if (COJav[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = RAjsP[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])yjAZm.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    yjAZm.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jf", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jf.COJav[n2] = n3;
        }
        return COJav[n2];
    }

    public static String bBa() {
        return Jlqur.format(new Date());
    }

    public static boolean bAU(float f2, float f3, float f4, float f5, float f6, float f7, float f8, float f9) {
        float f10;
        block18: {
            block15: {
                String[] stringArray;
                block17: {
                    float f11;
                    block16: {
                        block14: {
                            long l = qUVwV ^ 0x4F577A9CC17DL;
                            float f12 = f2 + f4;
                            stringArray = jf.bBe();
                            f11 = f3 + f5;
                            try {
                                try {
                                    float f13 = f6 + f8 - f2;
                                    f10 = f13 == 0.0f ? 0 : (f13 > 0.0f ? 1 : -1);
                                    if (stringArray == null) break block14;
                                    if (f10 <= 0) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                                f10 = f6 == f12 ? 0 : (f6 < f12 ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block16;
                                if (f10 >= 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            float f14 = f7 + f9 - f3;
                            f10 = f14 == 0.0f ? 0 : (f14 > 0.0f ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (f10 <= 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                        f10 = f7 == f11 ? 0 : (f7 < f11 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block18;
                    if (f10 >= 0) break block15;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
                f10 = 1.0f;
                break block18;
            }
            f10 = 0.0f;
        }
        return (boolean)f10;
    }

    public static int bBb(double d) {
        return String.valueOf(Math.abs((long)d)).length();
    }

    public static String bAS(Instant instant) {
        long l = qUVwV ^ 0x197CD6A542DEL;
        DateTimeFormatter dateTimeFormatter = DateTimeFormatter.ofPattern((String)((Object)jf.bBj("f", (int)5667, (long)(0x7221F14DDB81BC12L ^ l)))).withZone(ZoneId.systemDefault());
        return dateTimeFormatter.format(instant);
    }

    public static boolean bAY(lc lc2, double d, double d2) {
        double d3;
        block18: {
            block15: {
                String[] stringArray;
                block17: {
                    block16: {
                        block14: {
                            long l = qUVwV ^ 0x42BD7D7D829L;
                            stringArray = jf.bBe();
                            try {
                                try {
                                    double d4 = d - (double)lc2.bXF();
                                    d3 = d4 == 0.0 ? 0 : (d4 > 0.0 ? 1 : -1);
                                    if (stringArray == null) break block14;
                                    if (d3 < 0) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                                double d5 = d - (double)lc2.bXz();
                                d3 = d5 == 0.0 ? 0 : (d5 < 0.0 ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block16;
                                if (d3 >= 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            double d6 = d2 - (double)lc2.bXG();
                            d3 = d6 == 0.0 ? 0 : (d6 > 0.0 ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (d3 < 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                        double d7 = d2 - (double)lc2.bXA();
                        d3 = d7 == 0.0 ? 0 : (d7 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block18;
                    if (d3 >= 0) break block15;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
                d3 = 1.0;
                break block18;
            }
            d3 = 0.0;
        }
        return (boolean)d3;
    }

    public static float bAH(float f2, float f3) {
        return (f3 - f2) * 0.5f;
    }

    public static boolean bAE(double d, double d2, double d3, double d4, double d5, double d6) {
        double d7;
        block18: {
            block15: {
                String[] stringArray;
                block17: {
                    block16: {
                        block14: {
                            long l = qUVwV ^ 0x5B74EAD4BCB1L;
                            stringArray = jf.bBe();
                            try {
                                try {
                                    d7 = d == d3 ? 0 : (d > d3 ? 1 : -1);
                                    if (stringArray == null) break block14;
                                    if (d7 < 0) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                                double d8 = d - (d3 + d5);
                                d7 = d8 == 0.0 ? 0 : (d8 < 0.0 ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block16;
                                if (d7 > 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            d7 = d2 == d4 ? 0 : (d2 > d4 ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (d7 < 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                        double d9 = d2 - (d4 + d6);
                        d7 = d9 == 0.0 ? 0 : (d9 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block18;
                    if (d7 > 0) break block15;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
                d7 = 1.0;
                break block18;
            }
            d7 = 0.0;
        }
        return (boolean)d7;
    }

    private static MatchException bBf(MatchException matchException) {
        return matchException;
    }

    public static boolean bAG(lC lC2, double d, double d2, double d3, double d4) {
        double d5;
        block18: {
            block15: {
                String[] stringArray;
                block17: {
                    double d6;
                    block16: {
                        block14: {
                            long l = qUVwV ^ 0x345E65FA1E5EL;
                            double d7 = lC2.cff();
                            stringArray = jf.bBe();
                            d6 = lC2.cfg();
                            try {
                                try {
                                    d5 = d7 == d ? 0 : (d7 > d ? 1 : -1);
                                    if (stringArray == null) break block14;
                                    if (d5 < 0) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                                double d8 = d7 - (d + d3);
                                d5 = d8 == 0.0 ? 0 : (d8 < 0.0 ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block16;
                                if (d5 > 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            d5 = d6 == d2 ? 0 : (d6 > d2 ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (d5 < 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                        double d9 = d6 - (d2 + d4);
                        d5 = d9 == 0.0 ? 0 : (d9 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block18;
                    if (d5 > 0) break block15;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
                d5 = 1.0;
                break block18;
            }
            d5 = 0.0;
        }
        return (boolean)d5;
    }

    public static boolean bAF(lC lC2, az az2) {
        double d;
        block18: {
            block15: {
                String[] stringArray;
                block17: {
                    double d2;
                    block16: {
                        block14: {
                            long l = qUVwV ^ 0x71077AE43393L;
                            double d3 = lC2.cff();
                            stringArray = jf.bBe();
                            d2 = lC2.cfg();
                            try {
                                try {
                                    double d4 = d3 - (double)az2.tr();
                                    d = d4 == 0.0 ? 0 : (d4 > 0.0 ? 1 : -1);
                                    if (stringArray == null) break block14;
                                    if (d < 0) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                                double d5 = d3 - (double)az2.tc();
                                d = d5 == 0.0 ? 0 : (d5 < 0.0 ? -1 : 1);
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                        }
                        try {
                            try {
                                if (stringArray == null) break block16;
                                if (d > 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            double d6 = d2 - (double)az2.ts();
                            d = d6 == 0.0 ? 0 : (d6 > 0.0 ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                    }
                    try {
                        try {
                            if (stringArray == null) break block17;
                            if (d < 0) break block15;
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                        double d7 = d2 - (double)az2.tb();
                        d = d7 == 0.0 ? 0 : (d7 < 0.0 ? -1 : 1);
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                try {
                    if (stringArray == null) break block18;
                    if (d > 0) break block15;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
                d = 1.0;
                break block18;
            }
            d = 0.0;
        }
        return (boolean)d;
    }

    public static String bAN(long l) {
        String string;
        String string2;
        long l2;
        long l3;
        long l4;
        block6: {
            block7: {
                l4 = qUVwV ^ 0x4697C9B6304FL;
                String[] stringArray = jf.bBe();
                try {
                    long l5 = l - 0L;
                    l3 = l5 == 0L ? 0 : (l5 < 0L ? -1 : 1);
                    if (stringArray == null) break block6;
                    if (l3 >= 0) break block7;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
                l3 = 1;
                break block6;
            }
            l3 = 0;
        }
        long l6 = l3;
        long l7 = Math.abs(l);
        long l8 = l7 / jf.bBp("v", (int)9252, (long)(0x401BDC8B3FA6445L ^ l4));
        long l9 = l7 % jf.bBp("v", (int)11562, (long)(0x651069A37BB06D4FL ^ l4));
        try {
            l2 = l8;
            string2 = l9 < jf.bBp("v", (int)270, (long)(0x2CBCFEFCA1EE416DL ^ l4)) ? "0" : "";
        }
        catch (MatchException matchException) {
            throw jf.bBf(matchException);
        }
        String string3 = l2 + ":" + string2 + l9;
        try {
            string = l6 != false ? "-" + string3 : string3;
        }
        catch (MatchException matchException) {
            throw jf.bBf(matchException);
        }
        return string;
    }

    private static CallSite bBm(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jf" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static /* synthetic */ void bBc(List list, List list2) {
        block9: {
            block10: {
                int n;
                String[] stringArray;
                block8: {
                    long l = qUVwV ^ 0x25EBC3E1B4D4L;
                    stringArray = jf.bBe();
                    try {
                        try {
                            n = list.isEmpty();
                            if (stringArray == null) break block8;
                            if (n != 0) break block9;
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                        n = list.size();
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                int[] nArray = new int[n];
                for (int i = 0; i < list.size(); ++i) {
                    try {
                        nArray[i] = (Integer)list.get(i);
                        if (stringArray != null) {
                            if (stringArray != null) continue;
                            break;
                        }
                        break block10;
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                list2.add(nArray);
            }
            list.clear();
        }
    }

    public static String bAP(double d) {
        String string;
        block16: {
            String string2;
            block17: {
                BigDecimal bigDecimal;
                String[] stringArray;
                long l;
                block14: {
                    block15: {
                        double d2;
                        block12: {
                            block13: {
                                l = qUVwV ^ 0x748FE21CD3C1L;
                                stringArray = jf.bBe();
                                try {
                                    try {
                                        d2 = d;
                                        if (stringArray == null) break block12;
                                        if (Double.isFinite(d2)) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw jf.bBf(matchException);
                                    }
                                    return Double.toString(d);
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                            }
                            d2 = d;
                        }
                        BigDecimal bigDecimal2 = BigDecimal.valueOf(d2).setScale(2, RoundingMode.HALF_UP);
                        try {
                            try {
                                bigDecimal = bigDecimal2;
                                if (stringArray == null) break block14;
                                if (bigDecimal.compareTo(BigDecimal.valueOf(d)) != 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            return jf.bAO(d);
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                    }
                    bigDecimal = BigDecimal.valueOf(d).setScale(5, RoundingMode.HALF_UP).stripTrailingZeros();
                }
                BigDecimal bigDecimal3 = bigDecimal;
                string2 = bigDecimal3.toPlainString();
                try {
                    try {
                        string = string2;
                        if (stringArray == null) break block16;
                        if (!string.equals(jf.bBj("f", (int)15730, (long)(0x214C4FCF2DF50651L ^ l)))) break block17;
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                    string = "0";
                    break block16;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
            }
            string = string2;
        }
        return string;
    }

    public static String bAL(String string) {
        Object object;
        block10: {
            block11: {
                String string2;
                block8: {
                    long l = qUVwV ^ 0x45CB671C41E2L;
                    String[] stringArray = jf.bBe();
                    try {
                        block9: {
                            try {
                                try {
                                    try {
                                        string2 = string;
                                        if (stringArray == null) break block8;
                                        if (string2 == null) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw jf.bBf(matchException);
                                    }
                                    object = string;
                                    if (stringArray == null) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                                if (!((String)object).isBlank()) break block11;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                        }
                        string2 = string;
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                }
                return string2;
            }
            object = string.substring(0, 1).toUpperCase() + string.substring(1).toLowerCase();
        }
        return object;
    }

    public static float bAJ(float f2, float f3, float f4, float f5, double d) {
        return (float)(Math.min(1.0, Math.max(0.0, (d - (double)f4) / (double)f5)) * (double)(f3 - f2) + (double)f2);
    }

    public static float bAI(float f2, float f3, float f4) {
        return (f2 - f3) / (f4 - f3);
    }

    public static String bAM(double d) {
        long l = qUVwV ^ 0x20B152C38B0L;
        long l2 = Math.round(d * 10.0);
        long l3 = l2 / jf.bBp("v", (int)26697, (long)(0x166BAFBE4FE8A0D6L ^ l));
        long l4 = Math.abs(l2 % jf.bBp("v", (int)270, (long)(0x2CBCBA607D744992L ^ l)));
        return l3 + "." + l4;
    }

    private static CallSite bBp(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jf" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite bBj(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_2().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jf" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public static List<int[]> bAQ(int[] var0, float var1_1, lq var2_2) {
        block77: {
            block78: {
                block59: {
                    var3_3 = jf.qUVwV ^ 139093659863263L;
                    var6_4 = new ArrayList<int[]>();
                    var7_5 = new ArrayList<Integer>();
                    var8_6 = 0.0f;
                    var9_7 = var2_2.cap(new int[]{(int)jf.bBm("k", (int)25490, (long)(2414719603086481213L ^ var3_3))});
                    var5_8 = jf.bBe();
                    var10_9 = 0;
                    var11_10 = var0.length;
                    var12_11 = (Runnable)LambdaMetafactory.metafactory(null, null, null, ()V, bBc(java.util.List java.util.List ), ()V)(var7_5, var6_4);
                    while (var10_9 < var11_10) {
                        block76: {
                            block75: {
                                block69: {
                                    block71: {
                                        block70: {
                                            block61: {
                                                block68: {
                                                    block67: {
                                                        block66: {
                                                            block64: {
                                                                block65: {
                                                                    block62: {
                                                                        block63: {
                                                                            block60: {
                                                                                v0 = var10_9;
                                                                                if (var5_8 == null) break block59;
                                                                                for (var13_12 = v2120; var13_12 < var11_10; ++var13_12) {
                                                                                    try {
                                                                                        try {
                                                                                            try {
                                                                                                v1 = var0[var13_12];
                                                                                                v2 /* !! */  = (int)jf.bBm("k", (int)18398, (long)(3975649367283102576L ^ var3_3));
                                                                                                if (var5_8 == null || var5_8 == null) break block60;
                                                                                            }
                                                                                            catch (MatchException v3) {
                                                                                                throw jf.bBf(v3);
                                                                                            }
                                                                                            if (v1 == v2 /* !! */ ) break;
                                                                                            continue;
                                                                                        }
                                                                                        catch (MatchException v4) {
                                                                                            throw jf.bBf(v4);
                                                                                        }
                                                                                    }
                                                                                    catch (MatchException v5) {
                                                                                        throw jf.bBf(v5);
                                                                                    }
                                                                                }
                                                                                v1 = var13_12;
                                                                                v2 /* !! */  = var10_9;
                                                                            }
                                                                            var14_14 = v1 - v2 /* !! */ ;
                                                                            var15_15 = new int[var14_14];
                                                                            System.arraycopy(var0, var10_9, var15_15, 0, var14_14);
                                                                            var16_16 = var2_2.cap(var15_15);
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        v6 = var16_16 == var1_1 ? 0 : (var16_16 < var1_1 ? -1 : 1);
                                                                                        if (var5_8 == null) break block61;
                                                                                        if (v6 <= 0) {
                                                                                        }
                                                                                        ** GOTO lbl109
                                                                                    }
                                                                                    catch (MatchException v7) {
                                                                                        throw jf.bBf(v7);
                                                                                    }
                                                                                    v8 = var7_5.isEmpty();
                                                                                    if (var5_8 == null) break block62;
                                                                                }
                                                                                catch (MatchException v9) {
                                                                                    throw jf.bBf(v9);
                                                                                }
                                                                                if (v8) break block63;
                                                                            }
                                                                            catch (MatchException v10) {
                                                                                throw jf.bBf(v10);
                                                                            }
                                                                            v8 = true;
                                                                            break block62;
                                                                        }
                                                                        v8 = false;
                                                                    }
                                                                    var17_17 = v8;
                                                                    try {
                                                                        v11 = var8_6;
                                                                        v12 = var17_17 != false ? var9_7 : 0.0f;
                                                                    }
                                                                    catch (MatchException v13) {
                                                                        throw jf.bBf(v13);
                                                                    }
                                                                    var18_19 = v11 + v12 + var16_16;
                                                                    try {
                                                                        v14 = var18_19 == var1_1 ? 0 : (var18_19 > var1_1 ? 1 : -1);
                                                                        if (var5_8 == null) break block64;
                                                                        if (v14 <= 0) break block65;
                                                                    }
                                                                    catch (MatchException v15) {
                                                                        throw jf.bBf(v15);
                                                                    }
                                                                    var12_11.run();
                                                                    var8_6 = 0.0f;
                                                                    var17_17 = false;
                                                                }
                                                                v14 = (float)var17_17;
                                                            }
                                                            try {
                                                                try {
                                                                    if (var5_8 == null) break block66;
                                                                    if (v14 == false) break block67;
                                                                }
                                                                catch (MatchException v16) {
                                                                    throw jf.bBf(v16);
                                                                }
                                                                v14 = (float)var7_5.add((int)jf.bBm("k", (int)18398, (long)(3975649367283102576L ^ var3_3)));
                                                            }
                                                            catch (MatchException v17) {
                                                                throw jf.bBf(v17);
                                                            }
                                                        }
                                                        var8_6 += var9_7;
                                                    }
                                                    for (int var22_25 : var15_15) {
                                                        try {
                                                            var7_5.add(var22_25);
                                                            if (var5_8 != null) {
                                                                if (var5_8 != null) continue;
                                                                break;
                                                            }
                                                            break block68;
                                                        }
                                                        catch (MatchException v18) {
                                                            throw jf.bBf(v18);
                                                        }
                                                    }
                                                    var8_6 += var16_16;
                                                }
                                                try {
                                                    try {
                                                        if (var5_8 != null) break block69;
lbl109:
                                                        // 2 sources

                                                        v19 = var7_5;
                                                        if (var5_8 == null) break block70;
                                                    }
                                                    catch (MatchException v20) {
                                                        throw jf.bBf(v20);
                                                    }
                                                    v6 = (float)v19.isEmpty();
                                                }
                                                catch (MatchException v21) {
                                                    throw jf.bBf(v21);
                                                }
                                            }
                                            try {
                                                if (v6 == false) {
                                                    var12_11.run();
                                                }
                                            }
                                            catch (MatchException v22) {
                                                throw jf.bBf(v22);
                                            }
                                            v19 = new ArrayList<Integer>();
                                        }
                                        var17_18 = v19;
                                        var18_19 = 0.0f;
                                        for (var19_21 = 0; var19_21 < var14_14; ++var19_21) {
                                            block72: {
                                                block73: {
                                                    block74: {
                                                        var20_22 = var15_15[var19_21];
                                                        var21_24 = var2_2.cap(new int[]{var20_22});
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        v23 = var17_18.isEmpty();
                                                                        if (var5_8 == null) break block71;
                                                                        if (var5_8 == null) break block72;
                                                                    }
                                                                    catch (MatchException v24) {
                                                                        throw jf.bBf(v24);
                                                                    }
                                                                    if (v23) break block73;
                                                                }
                                                                catch (MatchException v25) {
                                                                    throw jf.bBf(v25);
                                                                }
                                                                cfr_temp_0 = var18_19 + var21_24 - var1_1;
                                                                v26 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                                if (var5_8 == null) break block72;
                                                            }
                                                            catch (MatchException v27) {
                                                                throw jf.bBf(v27);
                                                            }
                                                            if (v26 <= 0) break block73;
                                                        }
                                                        catch (MatchException v28) {
                                                            throw jf.bBf(v28);
                                                        }
                                                        var22_26 = new int[var17_18.size()];
                                                        for (var23_27 = 0; var23_27 < var17_18.size(); ++var23_27) {
                                                            try {
                                                                var22_26[var23_27] = (Integer)var17_18.get(var23_27);
                                                                if (var5_8 != null) {
                                                                    if (var5_8 != null) continue;
                                                                    break;
                                                                }
                                                                break block74;
                                                            }
                                                            catch (MatchException v29) {
                                                                throw jf.bBf(v29);
                                                            }
                                                        }
                                                        var6_4.add(var22_26);
                                                        var17_18.clear();
                                                    }
                                                    var18_19 = 0.0f;
                                                }
                                                v26 = var17_18.add(var20_22);
                                            }
                                            var18_19 += var21_24;
                                            if (var5_8 != null) continue;
                                        }
                                        var7_5.clear();
                                        v23 = var7_5.addAll(var17_18);
                                    }
                                    var8_6 = var18_19;
                                }
                                var10_9 = var13_12;
                                try {
                                    try {
                                        v30 = var10_9;
                                        v31 /* !! */  = var11_10;
                                        if (var5_8 == null) break block75;
                                        if (v30 >= v31 /* !! */ ) break block76;
                                    }
                                    catch (MatchException v32) {
                                        throw jf.bBf(v32);
                                    }
                                    v30 = var0[var10_9];
                                    v31 /* !! */  = (int)jf.bBm("k", (int)18398, (long)(3975649367283102576L ^ var3_3));
                                }
                                catch (MatchException v33) {
                                    throw jf.bBf(v33);
                                }
                            }
                            if (v30 == v31 /* !! */ ) {
                                ++var10_9;
                            }
                        }
                        if (var5_8 != null) continue;
                    }
                    try {
                        v34 = var7_5;
                        if (var5_8 == null) break block77;
                        v0 = (int)v34.isEmpty();
                    }
                    catch (MatchException v35) {
                        throw jf.bBf(v35);
                    }
                }
                if (v0 == 0) {
                    var13_13 = new int[var7_5.size()];
                    for (var14_14 = 0; var14_14 < var7_5.size(); ++var14_14) {
                        try {
                            var13_13[var14_14] = (Integer)var7_5.get(var14_14);
                            if (var5_8 != null) {
                                if (var5_8 != null) continue;
                                break;
                            }
                            break block78;
                        }
                        catch (MatchException v36) {
                            throw jf.bBf(v36);
                        }
                    }
                    var6_4.add(var13_13);
                }
            }
            v34 = var6_4;
        }
        return v34;
    }

    public static String bAO(double d) {
        String string;
        block10: {
            String string2;
            block11: {
                double d2;
                String[] stringArray;
                long l;
                block8: {
                    block9: {
                        l = qUVwV ^ 0x5D5F424DAC8AL;
                        stringArray = jf.bBe();
                        try {
                            try {
                                d2 = d;
                                if (stringArray == null) break block8;
                                if (Double.isFinite(d2)) break block9;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                            return Double.toString(d);
                        }
                        catch (MatchException matchException) {
                            throw jf.bBf(matchException);
                        }
                    }
                    d2 = d;
                }
                BigDecimal bigDecimal = BigDecimal.valueOf(d2).setScale(2, RoundingMode.HALF_UP).stripTrailingZeros();
                string2 = bigDecimal.toPlainString();
                try {
                    try {
                        string = string2;
                        if (stringArray == null) break block10;
                        if (!string.equals(jf.bBj("f", (int)22129, (long)(0x44FB70DDD4669217L ^ l)))) break block11;
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                    string = "0";
                    break block10;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
            }
            string = string2;
        }
        return string;
    }

    public static float bAK(float f2, float f3, float f4, double d) {
        block5: {
            double d2;
            double d3;
            block4: {
                long l = qUVwV ^ 0x414DED9613E6L;
                String[] stringArray = jf.bBe();
                try {
                    try {
                        d3 = d;
                        d2 = 0.0;
                        if (stringArray == null) break block4;
                        if (!(d3 > d2)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                    d3 = (double)Math.round((double)(f2 - f3) / d) * d;
                    d2 = f3;
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
            }
            f2 = (float)(d3 + d2);
        }
        return class_3532.method_15363((float)f2, (float)f3, (float)f4);
    }

    public static ak<? extends cB> bAR(cB cB2, az az2) {
        ak ak2;
        block65: {
            ak ak3;
            block66: {
                String[] stringArray;
                block67: {
                    cB cB3;
                    block64: {
                        boolean bl;
                        block62: {
                            block63: {
                                block60: {
                                    block61: {
                                        block58: {
                                            block59: {
                                                block56: {
                                                    block57: {
                                                        block54: {
                                                            block55: {
                                                                block52: {
                                                                    block53: {
                                                                        block50: {
                                                                            block51: {
                                                                                block48: {
                                                                                    block49: {
                                                                                        block46: {
                                                                                            block47: {
                                                                                                block44: {
                                                                                                    block45: {
                                                                                                        block42: {
                                                                                                            block43: {
                                                                                                                block40: {
                                                                                                                    block41: {
                                                                                                                        block38: {
                                                                                                                            block39: {
                                                                                                                                block36: {
                                                                                                                                    block37: {
                                                                                                                                        long l = qUVwV ^ 0x2D3D8A74E017L;
                                                                                                                                        ak3 = null;
                                                                                                                                        stringArray = jf.bBe();
                                                                                                                                        try {
                                                                                                                                            bl = cB2 instanceof cJ;
                                                                                                                                            if (stringArray == null) break block36;
                                                                                                                                            if (!bl) break block37;
                                                                                                                                        }
                                                                                                                                        catch (MatchException matchException) {
                                                                                                                                            throw jf.bBf(matchException);
                                                                                                                                        }
                                                                                                                                        cJ cJ2 = (cJ)cB2;
                                                                                                                                        ak3 = new v(cJ2, az2);
                                                                                                                                        break block67;
                                                                                                                                    }
                                                                                                                                    bl = cB2 instanceof cz;
                                                                                                                                }
                                                                                                                                try {
                                                                                                                                    if (stringArray == null) break block38;
                                                                                                                                    if (!bl) break block39;
                                                                                                                                }
                                                                                                                                catch (MatchException matchException) {
                                                                                                                                    throw jf.bBf(matchException);
                                                                                                                                }
                                                                                                                                cz cz2 = (cz)cB2;
                                                                                                                                ak3 = new x<cz>(cz2, az2);
                                                                                                                                break block67;
                                                                                                                            }
                                                                                                                            bl = cB2 instanceof cF;
                                                                                                                        }
                                                                                                                        try {
                                                                                                                            if (stringArray == null) break block40;
                                                                                                                            if (!bl) break block41;
                                                                                                                        }
                                                                                                                        catch (MatchException matchException) {
                                                                                                                            throw jf.bBf(matchException);
                                                                                                                        }
                                                                                                                        cF cF2 = (cF)cB2;
                                                                                                                        ak3 = new x<cF>(cF2, az2);
                                                                                                                        break block67;
                                                                                                                    }
                                                                                                                    bl = cB2 instanceof cK;
                                                                                                                }
                                                                                                                try {
                                                                                                                    if (stringArray == null) break block42;
                                                                                                                    if (!bl) break block43;
                                                                                                                }
                                                                                                                catch (MatchException matchException) {
                                                                                                                    throw jf.bBf(matchException);
                                                                                                                }
                                                                                                                cK cK2 = (cK)cB2;
                                                                                                                ak3 = new x<cK>(cK2, az2);
                                                                                                                break block67;
                                                                                                            }
                                                                                                            bl = cB2 instanceof cD;
                                                                                                        }
                                                                                                        try {
                                                                                                            if (stringArray == null) break block44;
                                                                                                            if (!bl) break block45;
                                                                                                        }
                                                                                                        catch (MatchException matchException) {
                                                                                                            throw jf.bBf(matchException);
                                                                                                        }
                                                                                                        cD cD2 = (cD)cB2;
                                                                                                        ak3 = new y(cD2, az2);
                                                                                                        break block67;
                                                                                                    }
                                                                                                    bl = cB2 instanceof cx;
                                                                                                }
                                                                                                try {
                                                                                                    if (stringArray == null) break block46;
                                                                                                    if (!bl) break block47;
                                                                                                }
                                                                                                catch (MatchException matchException) {
                                                                                                    throw jf.bBf(matchException);
                                                                                                }
                                                                                                cx cx2 = (cx)cB2;
                                                                                                ak3 = new u(cx2, az2);
                                                                                                break block67;
                                                                                            }
                                                                                            bl = cB2 instanceof cG;
                                                                                        }
                                                                                        try {
                                                                                            if (stringArray == null) break block48;
                                                                                            if (!bl) break block49;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw jf.bBf(matchException);
                                                                                        }
                                                                                        cG cG2 = (cG)cB2;
                                                                                        ak3 = new A(cG2, az2);
                                                                                        break block67;
                                                                                    }
                                                                                    bl = cB2 instanceof ct;
                                                                                }
                                                                                try {
                                                                                    if (stringArray == null) break block50;
                                                                                    if (!bl) break block51;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw jf.bBf(matchException);
                                                                                }
                                                                                ct ct2 = (ct)cB2;
                                                                                ak3 = new q(ct2, az2);
                                                                                break block67;
                                                                            }
                                                                            bl = cB2 instanceof cv;
                                                                        }
                                                                        try {
                                                                            if (stringArray == null) break block52;
                                                                            if (!bl) break block53;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw jf.bBf(matchException);
                                                                        }
                                                                        cv cv2 = (cv)cB2;
                                                                        ak3 = new r(cv2, az2);
                                                                        break block67;
                                                                    }
                                                                    bl = cB2 instanceof cA;
                                                                }
                                                                try {
                                                                    if (stringArray == null) break block54;
                                                                    if (!bl) break block55;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw jf.bBf(matchException);
                                                                }
                                                                cA cA2 = (cA)cB2;
                                                                ak3 = new p(cA2, az2);
                                                                break block67;
                                                            }
                                                            bl = cB2 instanceof cL;
                                                        }
                                                        try {
                                                            if (stringArray == null) break block56;
                                                            if (!bl) break block57;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jf.bBf(matchException);
                                                        }
                                                        cL cL2 = (cL)cB2;
                                                        ak3 = new D(cL2, az2);
                                                        break block67;
                                                    }
                                                    bl = cB2 instanceof cC;
                                                }
                                                try {
                                                    if (stringArray == null) break block58;
                                                    if (!bl) break block59;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jf.bBf(matchException);
                                                }
                                                cC cC2 = (cC)cB2;
                                                ak3 = new o(cC2, az2);
                                                break block67;
                                            }
                                            bl = cB2 instanceof cy;
                                        }
                                        try {
                                            if (stringArray == null) break block60;
                                            if (!bl) break block61;
                                        }
                                        catch (MatchException matchException) {
                                            throw jf.bBf(matchException);
                                        }
                                        cy cy2 = (cy)cB2;
                                        ak3 = new w(cy2, az2);
                                        break block67;
                                    }
                                    bl = cB2 instanceof cI;
                                }
                                try {
                                    if (stringArray == null) break block62;
                                    if (!bl) break block63;
                                }
                                catch (MatchException matchException) {
                                    throw jf.bBf(matchException);
                                }
                                cI cI2 = (cI)cB2;
                                ak3 = new C(cI2, az2);
                                break block67;
                            }
                            try {
                                cB3 = cB2;
                                if (stringArray == null) break block64;
                                bl = cB3 instanceof cH;
                            }
                            catch (MatchException matchException) {
                                throw jf.bBf(matchException);
                            }
                        }
                        if (!bl) break block67;
                        cB3 = cB2;
                    }
                    cH cH2 = (cH)cB3;
                    ak3 = new B(cH2, az2);
                }
                try {
                    try {
                        ak2 = ak3;
                        if (stringArray == null) break block65;
                        if (ak2 == null) break block66;
                    }
                    catch (MatchException matchException) {
                        throw jf.bBf(matchException);
                    }
                    ((az)ak3).dY();
                }
                catch (MatchException matchException) {
                    throw jf.bBf(matchException);
                }
            }
            ak2 = ak3;
        }
        return ak2;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block26: {
            block25: {
                block24: {
                    block23: {
                        block22: {
                            block21: {
                                jf.qUVwV = gb.aYR(1721898729720351064L, 4639039868156347492L, MethodHandles.lookup().lookupClass()).a(226751541499181L);
                                var31 = jf.qUVwV ^ 121133083164871L;
                                jf.XKQjR = new HashMap<K, V>(13);
                                jf.bBd(new String[2]);
                                var22_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                                v0 = SecretKeyFactory.getInstance("DES");
                                v1 = new byte[8];
                                v2 = v1;
                                v1[0] = (byte)(var31 >>> 56);
                                for (var23_2 = 1; var23_2 < 8; ++var23_2) {
                                    v2 = v2;
                                    v2[var23_2] = (byte)(var31 << var23_2 * 8 >>> 56);
                                }
                                var22_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                                var29_3 = new String[12];
                                var27_4 = 0;
                                var26_5 = "\u009c#\u00d5\u0095n\u001d\u00deH\u00c4\u00a3*\"\u00d0T=J\u00e8\u0082E_\u00b2\u00a7I+\u0010&=\u00e2W\u00968\u00900*(G%\u009bW[0\u0010\u00c8\u00b1E\u00ad\u00c0\u00f1\u00be\u00c3\u0095\u00db\u00c0\u00c9\u009c\u0085<t\u0010\u00c3\u008d\u0017r\u00a3\u00c4\u00fc|\u00e9&\t\u0007u(S\u007f\u0010\u0017Q\u00a8\u00c5\u00dc\u00cb\u00d2Ee\u00c8\u009c\u00faU\u0089t\u0091\u0010\u00d7:\u0003T\u00c6\u001d\u00f3\r&\u00bb\u008d\u00bd\u00da\u00ae_\u00f1 \u00a5\u001e\u0080f\u00b51\u00a4v\u0082\u0017\u00a1j\n\u001eRB\u0098\t\u00f7\u0000\u00d2\u00dd\u00f6\u00e4>\u0015\u008a\u00e3\u00a5\u0088r\u00f8\u0010\u00e2\u00e6\u00d4\u0019)\u00b1\u00c0\u0001A>\u00d1\u0091}\u00c2\u00bb\u0002\u0010uq\u00f8\u00b9f3\u00ce\u0096R\u0084V\u00c0\u00c6\u00a9\u00184\u0010\r@\u00a2\u00bf\u00166\u0002\u0097\u0015\u00a4\u0080\u008eU\u00de\u00e1\u0097";
                                var28_6 = "\u009c#\u00d5\u0095n\u001d\u00deH\u00c4\u00a3*\"\u00d0T=J\u00e8\u0082E_\u00b2\u00a7I+\u0010&=\u00e2W\u00968\u00900*(G%\u009bW[0\u0010\u00c8\u00b1E\u00ad\u00c0\u00f1\u00be\u00c3\u0095\u00db\u00c0\u00c9\u009c\u0085<t\u0010\u00c3\u008d\u0017r\u00a3\u00c4\u00fc|\u00e9&\t\u0007u(S\u007f\u0010\u0017Q\u00a8\u00c5\u00dc\u00cb\u00d2Ee\u00c8\u009c\u00faU\u0089t\u0091\u0010\u00d7:\u0003T\u00c6\u001d\u00f3\r&\u00bb\u008d\u00bd\u00da\u00ae_\u00f1 \u00a5\u001e\u0080f\u00b51\u00a4v\u0082\u0017\u00a1j\n\u001eRB\u0098\t\u00f7\u0000\u00d2\u00dd\u00f6\u00e4>\u0015\u008a\u00e3\u00a5\u0088r\u00f8\u0010\u00e2\u00e6\u00d4\u0019)\u00b1\u00c0\u0001A>\u00d1\u0091}\u00c2\u00bb\u0002\u0010uq\u00f8\u00b9f3\u00ce\u0096R\u0084V\u00c0\u00c6\u00a9\u00184\u0010\r@\u00a2\u00bf\u00166\u0002\u0097\u0015\u00a4\u0080\u008eU\u00de\u00e1\u0097".length();
                                var25_7 = 24;
                                var24_8 = -1;
lbl21:
                                // 2 sources

                                while (true) {
                                    v3 = ++var24_8;
                                    v4 = var26_5.substring(v3, v3 + var25_7);
                                    v5 = -1;
                                    break block21;
                                    break;
                                }
lbl26:
                                // 1 sources

                                while (true) {
                                    var29_3[var27_4++] = jf.bBg(var30_9).intern();
                                    if ((var24_8 += var25_7) < var28_6) {
                                        var25_7 = var26_5.charAt(var24_8);
                                        ** continue;
                                    }
                                    var26_5 = "\u00d9\u0005\u00f8J)\tB\u00b7\u00e1z!\u00978<\u001d[\u00107\u0092\u00bfr\u00cdj\u00ba\u009c\u00c0;\f|(]\u00af\u0019";
                                    var28_6 = "\u00d9\u0005\u00f8J)\tB\u00b7\u00e1z!\u00978<\u001d[\u00107\u0092\u00bfr\u00cdj\u00ba\u009c\u00c0;\f|(]\u00af\u0019".length();
                                    var25_7 = 16;
                                    var24_8 = -1;
lbl35:
                                    // 2 sources

                                    while (true) {
                                        v6 = ++var24_8;
                                        v4 = var26_5.substring(v6, v6 + var25_7);
                                        v5 = 0;
                                        break block21;
                                        break;
                                    }
                                    break;
                                }
lbl40:
                                // 1 sources

                                while (true) {
                                    var29_3[var27_4++] = jf.bBg(var30_9).intern();
                                    if ((var24_8 += var25_7) < var28_6) {
                                        var25_7 = var26_5.charAt(var24_8);
                                        ** continue;
                                    }
                                    break block22;
                                    break;
                                }
                            }
                            var30_9 = var22_1.doFinal(v4.getBytes("ISO-8859-1"));
                            switch (v5) {
                                default: {
                                    ** continue;
                                }
                                ** case 0:
lbl52:
                                // 1 sources

                                ** continue;
                            }
                        }
                        jf.OdySV = var29_3;
                        jf.cCYcp = new String[12];
                        jf.yjAZm = new HashMap<K, V>(13);
                        var11_10 = Cipher.getInstance("DES/CBC/NoPadding");
                        v7 = SecretKeyFactory.getInstance("DES");
                        v8 = new byte[8];
                        v9 = v8;
                        v8[0] = (byte)(var31 >>> 56);
                        for (var12_11 = 1; var12_11 < 8; ++var12_11) {
                            v9 = v9;
                            v9[var12_11] = (byte)(var31 << var12_11 * 8 >>> 56);
                        }
                        var11_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                        var17_12 = new long[2];
                        var14_13 = 0;
                        var15_14 = "P\u009d\u00b9\u00dd/\u0082\u0089\u0003\u00fc0:\u009a\t\f\u00fc\u00bb";
                        var16_15 = "P\u009d\u00b9\u00dd/\u0082\u0089\u0003\u00fc0:\u009a\t\f\u00fc\u00bb".length();
                        var13_16 = 0;
                        while (true) {
                            break block23;
                            break;
                        }
lbl74:
                        // 1 sources

                        while (true) {
                            var17_12[v10] = ((long)var21_19[0] & 255L) << 56 | ((long)var21_19[1] & 255L) << 48 | ((long)var21_19[2] & 255L) << 40 | ((long)var21_19[3] & 255L) << 32 | ((long)var21_19[4] & 255L) << 24 | ((long)var21_19[5] & 255L) << 16 | ((long)var21_19[6] & 255L) << 8 | (long)var21_19[7] & 255L;
                            if (var13_16 < var16_15) ** continue;
                            break block24;
                            break;
                        }
                    }
                    var18_17 = var15_14.substring(var13_16, var13_16 += 8).getBytes("ISO-8859-1");
                    v10 = var14_13++;
                    var19_18 = ((long)var18_17[0] & 255L) << 56 | ((long)var18_17[1] & 255L) << 48 | ((long)var18_17[2] & 255L) << 40 | ((long)var18_17[3] & 255L) << 32 | ((long)var18_17[4] & 255L) << 24 | ((long)var18_17[5] & 255L) << 16 | ((long)var18_17[6] & 255L) << 8 | (long)var18_17[7] & 255L;
                    var21_19 = var11_10.doFinal(new byte[]{(byte)(var19_18 >>> 56), (byte)(var19_18 >>> 48), (byte)(var19_18 >>> 40), (byte)(var19_18 >>> 32), (byte)(var19_18 >>> 24), (byte)(var19_18 >>> 16), (byte)(var19_18 >>> 8), (byte)var19_18});
                    ** while (true)
                }
                jf.RAjsP = var17_12;
                jf.COJav = new Integer[2];
                jf.jNPAX = new HashMap<K, V>(13);
                var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
                v11 = SecretKeyFactory.getInstance("DES");
                v12 = new byte[8];
                v13 = v12;
                v12[0] = (byte)(var31 >>> 56);
                for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                    v13 = v13;
                    v13[var1_21] = (byte)(var31 << var1_21 * 8 >>> 56);
                }
                var0_20.init(2, (Key)v11.generateSecret(new DESKeySpec(v13)), new IvParameterSpec(new byte[8]));
                var6_22 = new long[12];
                var3_23 = 0;
                var4_24 = "\u00d0\u00cc\u00f9v\u00a6s\u00d2\u0081\u001eljy\u00e7\u0002\u0098\u0007\u0007\u00ac\ncF4hOrfa\u00d16!N\u0090\u00f6\u00a5\u00ae\u00a0\u0084\u00fbw\u00c4\u00af\u00de\u0081N\u00eb\u00c2\u00f41Di/^\u00af.\u001a[KY\u00f2\u00c9;\u008eF^&^?\u000e\u0097\u0098\u00c4\t d/\u00ee\u00a4\u0006\u00e7\u00fd";
                var5_25 = "\u00d0\u00cc\u00f9v\u00a6s\u00d2\u0081\u001eljy\u00e7\u0002\u0098\u0007\u0007\u00ac\ncF4hOrfa\u00d16!N\u0090\u00f6\u00a5\u00ae\u00a0\u0084\u00fbw\u00c4\u00af\u00de\u0081N\u00eb\u00c2\u00f41Di/^\u00af.\u001a[KY\u00f2\u00c9;\u008eF^&^?\u000e\u0097\u0098\u00c4\t d/\u00ee\u00a4\u0006\u00e7\u00fd".length();
                var2_26 = 0;
                while (true) {
                    var7_27 = var4_24.substring(var2_26, var2_26 += 8).getBytes("ISO-8859-1");
                    v14 = var6_22;
                    v15 = var3_23++;
                    v16 = ((long)var7_27[0] & 255L) << 56 | ((long)var7_27[1] & 255L) << 48 | ((long)var7_27[2] & 255L) << 40 | ((long)var7_27[3] & 255L) << 32 | ((long)var7_27[4] & 255L) << 24 | ((long)var7_27[5] & 255L) << 16 | ((long)var7_27[6] & 255L) << 8 | (long)var7_27[7] & 255L;
                    v17 = -1;
                    break block25;
                    break;
                }
lbl113:
                // 1 sources

                while (true) {
                    v14[v15] = v18;
                    if (var2_26 < var5_25) ** continue;
                    var4_24 = "\u00df\u0098uW\u008dp\u00a5{\u00a6|\u00fcd\u00a1L\u00a5@";
                    var5_25 = "\u00df\u0098uW\u008dp\u00a5{\u00a6|\u00fcd\u00a1L\u00a5@".length();
                    var2_26 = 0;
                    while (true) {
                        var7_27 = var4_24.substring(var2_26, var2_26 += 8).getBytes("ISO-8859-1");
                        v14 = var6_22;
                        v15 = var3_23++;
                        v16 = ((long)var7_27[0] & 255L) << 56 | ((long)var7_27[1] & 255L) << 48 | ((long)var7_27[2] & 255L) << 40 | ((long)var7_27[3] & 255L) << 32 | ((long)var7_27[4] & 255L) << 24 | ((long)var7_27[5] & 255L) << 16 | ((long)var7_27[6] & 255L) << 8 | (long)var7_27[7] & 255L;
                        v17 = 0;
                        break block25;
                        break;
                    }
                    break;
                }
lbl126:
                // 1 sources

                while (true) {
                    v14[v15] = v18;
                    if (var2_26 < var5_25) ** continue;
                    break block26;
                    break;
                }
            }
            var8_28 = v16;
            var10_29 = var0_20.doFinal(new byte[]{(byte)(var8_28 >>> 56), (byte)(var8_28 >>> 48), (byte)(var8_28 >>> 40), (byte)(var8_28 >>> 32), (byte)(var8_28 >>> 24), (byte)(var8_28 >>> 16), (byte)(var8_28 >>> 8), (byte)var8_28});
            v18 = ((long)var10_29[0] & 255L) << 56 | ((long)var10_29[1] & 255L) << 48 | ((long)var10_29[2] & 255L) << 40 | ((long)var10_29[3] & 255L) << 32 | ((long)var10_29[4] & 255L) << 24 | ((long)var10_29[5] & 255L) << 16 | ((long)var10_29[6] & 255L) << 8 | (long)var10_29[7] & 255L;
            switch (v17) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl139:
                // 1 sources

                ** continue;
            }
        }
        jf.yPLqH = var6_22;
        jf.LGHNj = new Long[12];
        jf.Jlqur = new SimpleDateFormat((String)jf.bBj("f", (int)24478, (long)(762683943723284407L ^ var31)), Locale.getDefault());
    }

    public static String[] bBe() {
        return KVigV;
    }

    public static void bBd(String[] stringArray) {
        KVigV = stringArray;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jf.class, "bBl", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(jf.class, "bBo", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_2() {
        try {
            return MethodHandles.lookup().findStatic(jf.class, "bBi", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
