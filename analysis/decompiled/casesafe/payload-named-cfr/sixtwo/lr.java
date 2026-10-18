/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.buffers.GpuBuffer
 *  com.mojang.blaze3d.systems.RenderSystem
 */
package sixtwo;

import com.mojang.blaze3d.buffers.GpuBuffer;
import com.mojang.blaze3d.systems.RenderSystem;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.nio.ByteBuffer;
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
import sixtwo.lr$uz;
import sixtwo.lt;

public final class lr {
    private static final int VJMON;
    private static final lr$uz[] RXENs;
    private static int nWKgM;
    private static final long XCHUs;
    private static final String xEpkA;
    private static final long[] LNAAw;
    private static final Integer[] DecpM;
    private static final Map uXNQV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     * Enabled unnecessary exception pruning
     * Enabled aggressive exception aggregation
     */
    static {
        XCHUs = gb.aYR(7341820058995402095L, 323359609039465152L, MethodHandles.lookup().lookupClass()).a(8048501820849L);
        long l2 = XCHUs ^ 0x5E6FE48B420L;
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
        byte[] byArray3 = cipher.doFinal("e\u00c7\u00f4\u0004\u0015\bk$\u00bf\u00d3\u0013\u008b\u00f0a\"M\t\u00f7\u00b2\u00a1:\u00f7\u0085\u0091l\u0000wzL\u000e[\u0082".getBytes("ISO-8859-1"));
        xEpkA = lr.caG(byArray3).intern();
        uXNQV = new HashMap(13);
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        for (int i3 = 1; i3 < 8; ++i3) {
            byArray5 = byArray5;
            byArray5[i3] = (byte)(l2 << i3 * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "\u00e0(a^`0b\u00f4\u0001\u00eaD\u00dc4\u00e9\u0094e";
        int n3 = "\u00e0(a^`0b\u00f4\u0001\u00eaD\u00dc4\u00e9\u0094e".length();
        int n4 = 0;
        do {
            byte[] byArray6 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n4 < n3);
        LNAAw = lArray;
        DecpM = new Integer[2];
        VJMON = (int)lr.caJ("j", (int)22687, (long)(l2 ^ 0x2E607489302FE616L));
        RXENs = new lr$uz[3];
        try {
            for (int i4 = 0; i4 < RXENs.length; ++i4) {
                lr.RXENs[i4] = new lr$uz();
            }
            return;
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw lr.caF(illegalArgumentException);
        }
    }

    private static CallSite caJ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lr" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String caG(byte[] byArray) {
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

    private static int caH(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5D20;
        if (DecpM[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = LNAAw[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])uXNQV.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    uXNQV.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lr", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            lr.DecpM[n3] = n4;
        }
        return DecpM[n3];
    }

    private static int caI(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = lr.caH(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public static GpuBuffer caC(ByteBuffer byteBuffer, String string) {
        GpuBuffer gpuBuffer;
        long l2 = XCHUs ^ 0x643D0A167B9BL;
        ByteBuffer byteBuffer2 = byteBuffer.duplicate();
        int n2 = byteBuffer2.remaining();
        iS[] iSArray = lt.cbc();
        try {
            if (n2 <= 0) {
                throw new IllegalArgumentException(xEpkA);
            }
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw lr.caF(illegalArgumentException);
        }
        GpuBuffer gpuBuffer2 = RXENs[nWKgM].dvq(n2, string);
        try {
            RenderSystem.getDevice().createCommandEncoder().writeToBuffer(gpuBuffer2.slice(0L, (long)n2), byteBuffer2);
            gpuBuffer = gpuBuffer2;
            if (iS.bwL() == null) {
                lt.cbb(new iS[5]);
            }
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw lr.caF(illegalArgumentException);
        }
        return gpuBuffer;
    }

    private static IllegalArgumentException caF(IllegalArgumentException illegalArgumentException) {
        return illegalArgumentException;
    }

    private static GpuBuffer caD(long l2, String string) {
        long l3 = XCHUs ^ 0x7464FB4073BEL;
        return RenderSystem.getDevice().createBuffer(() -> string, (int)lr.caJ("j", (int)715, (long)(0x713B9BE82F15FBDDL ^ l3)), l2);
    }

    public static void caB() {
        nWKgM = (nWKgM + 1) % RXENs.length;
        RXENs[nWKgM].dvr();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lr.class, "caI", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

