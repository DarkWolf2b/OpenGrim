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
        long l = XCHUs ^ 0x5E6FE48B420L;
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
        byte[] byArray3 = cipher.doFinal("e\u00c7\u00f4\u0004\u0015\bk$\u00bf\u00d3\u0013\u008b\u00f0a\"M\t\u00f7\u00b2\u00a1:\u00f7\u0085\u0091l\u0000wzL\u000e[\u0082".getBytes("ISO-8859-1"));
        xEpkA = lr.caG(byArray3).intern();
        uXNQV = new HashMap(13);
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
        long[] lArray = new long[2];
        int n = 0;
        String string = "\u00e0(a^`0b\u00f4\u0001\u00eaD\u00dc4\u00e9\u0094e";
        int n2 = "\u00e0(a^`0b\u00f4\u0001\u00eaD\u00dc4\u00e9\u0094e".length();
        int n3 = 0;
        do {
            byte[] byArray6 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n3 < n2);
        LNAAw = lArray;
        DecpM = new Integer[2];
        VJMON = (int)lr.caJ("j", (int)22687, (long)(l ^ 0x2E607489302FE616L));
        RXENs = new lr$uz[3];
        try {
            for (int i = 0; i < RXENs.length; ++i) {
                lr.RXENs[i] = new lr$uz();
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

    private static int caH(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5D20;
        if (DecpM[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = LNAAw[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])uXNQV.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    uXNQV.put(l3, objectArray);
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
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            lr.DecpM[n2] = n3;
        }
        return DecpM[n2];
    }

    private static int caI(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = lr.caH(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public static GpuBuffer caC(ByteBuffer byteBuffer, String string) {
        GpuBuffer gpuBuffer;
        long l = XCHUs ^ 0x643D0A167B9BL;
        ByteBuffer byteBuffer2 = byteBuffer.duplicate();
        int n = byteBuffer2.remaining();
        iS[] iSArray = lt.cbc();
        try {
            if (n <= 0) {
                throw new IllegalArgumentException(xEpkA);
            }
        }
        catch (IllegalArgumentException illegalArgumentException) {
            throw lr.caF(illegalArgumentException);
        }
        GpuBuffer gpuBuffer2 = RXENs[nWKgM].dvq(n, string);
        try {
            RenderSystem.getDevice().createCommandEncoder().writeToBuffer(gpuBuffer2.slice(0L, (long)n), byteBuffer2);
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

    private static GpuBuffer caD(long l, String string) {
        long l2 = XCHUs ^ 0x7464FB4073BEL;
        return RenderSystem.getDevice().createBuffer(() -> string, (int)lr.caJ("j", (int)715, (long)(0x713B9BE82F15FBDDL ^ l2)), l);
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
