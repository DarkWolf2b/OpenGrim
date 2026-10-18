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
import sixtwo.cN;
import sixtwo.cv;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.mr;
import sixtwo.rj;
import sixtwo.rk;

public class cw {
    private final cv yxpCS;
    private final int[] fvuVZ;
    private boolean wefqQ;
    private boolean RDnKR;
    private float rFBJr;
    private final rk vpibn;
    private final rk sXriw;
    private final rk FDzJk;
    private static int[] Lllxb;
    private static final long uHspP;
    private static final String RnzsT;
    private static final long[] fmilM;
    private static final Integer[] ZUFQT;
    private static final Map FQVgq;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public static int[] TL() {
        return Lllxb;
    }

    public cw(cv cv2, mr mr2) {
        long l = uHspP ^ 0x1EF45D27CBCCL;
        this.wefqQ = true;
        this.RDnKR = true;
        this.vpibn = new rk((int)cw.TQ("m", (int)31329, (long)(0x3BD105DC7DC7CDD4L ^ l))).dhs(rj.UPXqT);
        int[] nArray = cw.TL();
        try {
            this.sXriw = new rk((int)cw.TQ("m", (int)23276, (long)(0x25C3B56C3191ED58L ^ l))).dhs(rj.UPXqT);
            this.FDzJk = new rk((int)cw.TQ("m", (int)23276, (long)(0x25C3B56C3191ED58L ^ l))).dhs(rj.XzDkv);
            this.yxpCS = cv2;
            this.fvuVZ = mr2.clT();
            cv2.Ts().add(this);
            if (nArray == null) {
                iS.bwK("xj1Bvb");
            }
        }
        catch (MatchException matchException) {
            throw cw.TM(matchException);
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        uHspP = gb.aYR(-2576606539899926608L, 5530636504189042914L, MethodHandles.lookup().lookupClass()).a(93770905611452L);
        long l = uHspP ^ 0x5A0818D302AAL;
        cw.TK(new int[4]);
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
        byte[] byArray3 = cipher.doFinal("\u009ag2;dr\u00a2tE\u00aeV\u0010Q\u00ae}F\u0014\u00d6k\u00ce\u00aaN\u001d+I\u00a9\u009di\u00b9&\u000b\u0088\u00f1u\u00c3|\u00c2r\u009c\u0094".getBytes("ISO-8859-1"));
        RnzsT = cw.TN(byArray3).intern();
        FQVgq = new HashMap(13);
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
        String string = "]\u008e3\u00a9\u00a7\u00e6\u00d3#\u00c6\u0092z\u00ce3\u00b0\u00cb\u00b6";
        int n2 = "]\u008e3\u00a9\u00a7\u00e6\u00d3#\u00c6\u0092z\u00ce3\u00b0\u00cb\u00b6".length();
        int n3 = 0;
        do {
            byte[] byArray6 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n3 < n2);
        fmilM = lArray;
        ZUFQT = new Integer[2];
    }

    public rk TH() {
        return this.vpibn;
    }

    private static int TO(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1F94;
        if (ZUFQT[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = fmilM[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])FQVgq.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    FQVgq.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cw", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cw.ZUFQT[n2] = n3;
        }
        return ZUFQT[n2];
    }

    public int[] TE() {
        return this.fvuVZ;
    }

    public cw Tz() {
        this.yxpCS.To(this);
        return this;
    }

    public boolean TC() {
        boolean bl;
        block4: {
            block5: {
                long l = uHspP ^ 0x59E6724C524CL;
                int[] nArray = cw.TL();
                try {
                    try {
                        bl = this.RDnKR;
                        if (nArray == null) break block4;
                        if (bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cw.TM(matchException);
                    }
                    return false;
                }
                catch (MatchException matchException) {
                    throw cw.TM(matchException);
                }
            }
            bl = this.yxpCS.Tn(this);
        }
        return bl;
    }

    private static int TP(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cw.TO(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static CallSite TQ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cw" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public float TG() {
        return this.rFBJr;
    }

    public cw Tx(float f) {
        this.rFBJr = f;
        return this;
    }

    private static String TN(byte[] byArray) {
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

    public rk TI() {
        return this.sXriw;
    }

    public static void TK(int[] nArray) {
        Lllxb = nArray;
    }

    public cw TB() {
        this.wefqQ = false;
        return this;
    }

    public rk TJ() {
        return this.FDzJk;
    }

    public boolean TF() {
        return this.RDnKR;
    }

    public cw Ty(boolean bl) {
        this.RDnKR = bl;
        return this;
    }

    private static MatchException TM(MatchException matchException) {
        return matchException;
    }

    public cv TD() {
        return this.yxpCS;
    }

    /*
     * Unable to fully structure code
     */
    public cw TA() {
        block18: {
            block19: {
                block15: {
                    block16: {
                        block17: {
                            var1_1 = cw.uHspP ^ 34535596477122L;
                            var3_2 = cw.TL();
                            try {
                                try {
                                    try {
                                        try {
                                            v0 = this.yxpCS;
                                            v1 = this;
                                            if (var3_2 == null) break block15;
                                            if (v0.Tn(v1)) {
                                            }
                                            ** GOTO lbl45
                                        }
                                        catch (MatchException v2) {
                                            throw cw.TM(v2);
                                        }
                                        v3 = this.wefqQ;
                                        if (var3_2 == null) break block16;
                                    }
                                    catch (MatchException v4) {
                                        throw cw.TM(v4);
                                    }
                                    if (v3 != 0) break block17;
                                }
                                catch (MatchException v5) {
                                    throw cw.TM(v5);
                                }
                                cN.XI(cw.RnzsT);
                                return this;
                            }
                            catch (MatchException v6) {
                                throw cw.TM(v6);
                            }
                        }
                        try {
                            v7 = this;
                            if (var3_2 == null) break block18;
                            v3 = v7.yxpCS.Tt().size();
                        }
                        catch (MatchException v8) {
                            throw cw.TM(v8);
                        }
                    }
                    try {
                        try {
                            if (v3 <= this.yxpCS.Tu()) break block19;
                            this.yxpCS.Tp(this);
                            if (var3_2 != null) break block19;
                        }
                        catch (MatchException v9) {
                            throw cw.TM(v9);
                        }
lbl45:
                        // 2 sources

                        v0 = this.yxpCS;
                        v1 = this;
                    }
                    catch (MatchException v10) {
                        throw cw.TM(v10);
                    }
                }
                v0.To(v1);
            }
            v7 = this;
        }
        return v7;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cw.class, "TP", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
