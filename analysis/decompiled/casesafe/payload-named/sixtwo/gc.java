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
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.gd;
import sixtwo.gg;

public class gc {
    private gd byrwS;
    private int XQGcJ;
    private static final long jBzPG = gb.aYR(-3656354283383529996L, -6907814533791359157L, MethodHandles.lookup().lookupClass()).a(227654918747051L);
    private static final long[] BYNbB;
    private static final Integer[] echEC;
    private static final Map WOqCe;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public gc() {
        long l2 = jBzPG ^ 0x7F2774F049E6L;
        this.byrwS = gd.ipLAD;
        this.XQGcJ = (int)gc.aZn("x", (int)19043, (long)(0x7D42A9C706B68F2AL ^ l2));
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        WOqCe = new HashMap(13);
        long l2 = jBzPG ^ 0x552A193C4AECL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "\u00ccLP\u00fa\u0081\u00d3\u00e0\u00f2\u0000x\u0099h\u00c2=\u0081\u00a3";
        int n3 = "\u00ccLP\u00fa\u0081\u00d3\u00e0\u00f2\u0000x\u0099h\u00c2=\u0081\u00a3".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        BYNbB = lArray;
        echEC = new Integer[2];
    }

    public gc aZj(int n2) {
        this.XQGcJ = n2;
        return this;
    }

    private static int aZm(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = gc.aZl(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public void aZe() {
        long l2 = jBzPG ^ 0x6906EB95B1DL;
        this.XQGcJ = (int)gc.aZn("x", (int)19043, (long)(0x7D42D0701CFF9DD1L ^ l2));
    }

    public boolean aZd(int n2) {
        int n3;
        block10: {
            block11: {
                String[] stringArray;
                block8: {
                    block9: {
                        long l2 = jBzPG ^ 0xFE510296101L;
                        stringArray = gg.baA();
                        try {
                            try {
                                n3 = this.aZf();
                                if (stringArray != null) break block8;
                                if (n3 == 0) break block9;
                            }
                            catch (MatchException matchException) {
                                throw gc.aZk(matchException);
                            }
                            return false;
                        }
                        catch (MatchException matchException) {
                            throw gc.aZk(matchException);
                        }
                    }
                    n3 = this.XQGcJ;
                }
                try {
                    try {
                        if (stringArray != null) break block10;
                        if (n3 != n2) break block11;
                    }
                    catch (MatchException matchException) {
                        throw gc.aZk(matchException);
                    }
                    n3 = 1;
                    break block10;
                }
                catch (MatchException matchException) {
                    throw gc.aZk(matchException);
                }
            }
            n3 = 0;
        }
        return n3 != 0;
    }

    private static MatchException aZk(MatchException matchException) {
        return matchException;
    }

    public gc aZi(gd gd2) {
        this.byrwS = gd2;
        return this;
    }

    private static int aZl(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x721F;
        if (echEC[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = BYNbB[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])WOqCe.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    WOqCe.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/gc", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            gc.echEC[n3] = n4;
        }
        return echEC[n3];
    }

    public gd aZg() {
        return this.byrwS;
    }

    public int aZh() {
        return this.XQGcJ;
    }

    public boolean aZf() {
        boolean bl2;
        block4: {
            block5: {
                long l2 = jBzPG ^ 0x3D259E3C53DL;
                String[] stringArray = gg.baA();
                try {
                    try {
                        bl2 = this.XQGcJ;
                        if (stringArray != null) break block4;
                        if (bl2 != gc.aZn("x", (int)7365, (long)(0x7680A86D41485556L ^ l2))) break block5;
                    }
                    catch (MatchException matchException) {
                        throw gc.aZk(matchException);
                    }
                    bl2 = true;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw gc.aZk(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    private static CallSite aZn(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/gc" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(gc.class, "aZm", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

