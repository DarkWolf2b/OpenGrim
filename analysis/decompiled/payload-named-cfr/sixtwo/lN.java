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
import java.util.Objects;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.kS;
import sixtwo.lB;

public record lN(String renderer, kS pipelineState, lB renderSpace, Object resource) {
    private static final lN IMMEDIATE;
    private static boolean a;
    private static final long b;
    private static final String[] c;
    private static final String[] d;
    private static final Map e;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public lN {
        long l2 = b ^ 0x39A488CC37B2L;
        Objects.requireNonNull(string, (String)((Object)lN.a("o", (int)27057, (long)(0x2E88A56607DEE64CL ^ l2))));
        Objects.requireNonNull(lB2, (String)((Object)lN.a("o", (int)28520, (long)(0x1CBEF39730636094L ^ l2))));
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        b = gb.aYR(5880012721855372879L, -4905016764603109200L, MethodHandles.lookup().lookupClass()).a(205852695859779L);
        long l2 = b ^ 0x40B00E1D6984L;
        e = new HashMap(13);
        lN.b(false);
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[3];
        int n2 = 0;
        String string = "\u00dax\u00bd\u00c8\u00b6Bp\u001f\u00d9\u00cc1\u00af\u00dc\u00bf4\u00a9\u001b\u00a9*1}(0 \u0018\u00c7\u0007\u0088\u0092\u0010c\u00cbD\u00e2\u0097\u0013\u0003\u009e#\u00c6\u00ed\b\u00c9h\u00acE\u001d2Y :\u0099@\u00fb(]\u00d6A\u00bb3WS>\u00bf\u00f5\u00c2\u00dbIM\u009c\u00c1\u00e5\u00bb\t\u0099\u00f3T:\u00ea\u00ac\u00be1";
        int n3 = "\u00dax\u00bd\u00c8\u00b6Bp\u001f\u00d9\u00cc1\u00af\u00dc\u00bf4\u00a9\u001b\u00a9*1}(0 \u0018\u00c7\u0007\u0088\u0092\u0010c\u00cbD\u00e2\u0097\u0013\u0003\u009e#\u00c6\u00ed\b\u00c9h\u00acE\u001d2Y :\u0099@\u00fb(]\u00d6A\u00bb3WS>\u00bf\u00f5\u00c2\u00dbIM\u009c\u00c1\u00e5\u00bb\t\u0099\u00f3T:\u00ea\u00ac\u00be1".length();
        int n4 = 24;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = lN.a(byArray3).intern();
            if ((n5 += n4) >= n3) {
                c = stringArray;
                d = new String[3];
                IMMEDIATE = new lN((String)((Object)lN.a("o", (int)18145, (long)(0x42604E172A7D1729L ^ l2))), null, lB.xCeuB, null);
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static lN of(String string, kS kS2, lB lB2) {
        return lN.of(string, kS2, lB2, null);
    }

    public static lN of(String string, kS kS2, lB lB2, Object object) {
        return new lN(string, kS2, lB2, object);
    }

    public static boolean b() {
        return a;
    }

    public static void b(boolean bl2) {
        a = bl2;
    }

    public static boolean c() {
        boolean bl2 = lN.b();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw lN.a(matchException);
        }
        return false;
    }

    private static String a(byte[] byArray) {
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

    private static Object a(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = lN.a(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String a(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2ABA;
        if (d[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])e.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    e.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lN", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = c[n3].getBytes("ISO-8859-1");
            lN.d[n3] = lN.a(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return d[n3];
    }

    private static MatchException a(MatchException matchException) {
        return matchException;
    }

    private static CallSite a(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lN" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static lN immediate() {
        return IMMEDIATE;
    }

    public boolean batchable() {
        boolean bl2;
        block2: {
            block3: {
                long l2 = b ^ 0x20FE2FFA3FB6L;
                boolean bl3 = lN.c();
                try {
                    bl2 = this.equals(IMMEDIATE);
                    if (!bl3) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw lN.a(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        return bl2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lN.class, "a", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

