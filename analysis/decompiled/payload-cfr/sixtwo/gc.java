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
        long l = jBzPG ^ 0x7F2774F049E6L;
        this.byrwS = gd.ipLAD;
        this.XQGcJ = (int)gc.aZn("x", (int)19043, (long)(0x7D42A9C706B68F2AL ^ l));
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        WOqCe = new HashMap(13);
        long l = jBzPG ^ 0x552A193C4AECL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n = 0;
        String string = "\u00ccLP\u00fa\u0081\u00d3\u00e0\u00f2\u0000x\u0099h\u00c2=\u0081\u00a3";
        int n2 = "\u00ccLP\u00fa\u0081\u00d3\u00e0\u00f2\u0000x\u0099h\u00c2=\u0081\u00a3".length();
        int n3 = 0;
        do {
            byte[] byArray3 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n3 < n2);
        BYNbB = lArray;
        echEC = new Integer[2];
    }

    public gc aZj(int n) {
        this.XQGcJ = n;
        return this;
    }

    private static int aZm(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = gc.aZl(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public void aZe() {
        long l = jBzPG ^ 0x6906EB95B1DL;
        this.XQGcJ = (int)gc.aZn("x", (int)19043, (long)(0x7D42D0701CFF9DD1L ^ l));
    }

    public boolean aZd(int n) {
        int n2;
        block10: {
            block11: {
                String[] stringArray;
                block8: {
                    block9: {
                        long l = jBzPG ^ 0xFE510296101L;
                        stringArray = gg.baA();
                        try {
                            try {
                                n2 = this.aZf();
                                if (stringArray != null) break block8;
                                if (n2 == 0) break block9;
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
                    n2 = this.XQGcJ;
                }
                try {
                    try {
                        if (stringArray != null) break block10;
                        if (n2 != n) break block11;
                    }
                    catch (MatchException matchException) {
                        throw gc.aZk(matchException);
                    }
                    n2 = 1;
                    break block10;
                }
                catch (MatchException matchException) {
                    throw gc.aZk(matchException);
                }
            }
            n2 = 0;
        }
        return n2 != 0;
    }

    private static MatchException aZk(MatchException matchException) {
        return matchException;
    }

    public gc aZi(gd gd2) {
        this.byrwS = gd2;
        return this;
    }

    private static int aZl(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x721F;
        if (echEC[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = BYNbB[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])WOqCe.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    WOqCe.put(l3, objectArray);
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
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            gc.echEC[n2] = n3;
        }
        return echEC[n2];
    }

    public gd aZg() {
        return this.byrwS;
    }

    public int aZh() {
        return this.XQGcJ;
    }

    public boolean aZf() {
        boolean bl;
        block4: {
            block5: {
                long l = jBzPG ^ 0x3D259E3C53DL;
                String[] stringArray = gg.baA();
                try {
                    try {
                        bl = this.XQGcJ;
                        if (stringArray != null) break block4;
                        if (bl != gc.aZn("x", (int)7365, (long)(0x7680A86D41485556L ^ l))) break block5;
                    }
                    catch (MatchException matchException) {
                        throw gc.aZk(matchException);
                    }
                    bl = true;
                    break block4;
                }
                catch (MatchException matchException) {
                    throw gc.aZk(matchException);
                }
            }
            bl = false;
        }
        return bl;
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
