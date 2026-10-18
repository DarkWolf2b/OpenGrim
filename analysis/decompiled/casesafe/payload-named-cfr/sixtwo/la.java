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
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.kW;
import sixtwo.kX;
import sixtwo.kY;
import sixtwo.la$us;
import sixtwo.lb;
import sixtwo.mG;

public class la {
    public static final int dSrGG;
    protected kY irnms;
    protected mG ynWlL;
    protected mG EzdzQ;
    protected mG MbRuH;
    protected mG pUlwC;
    protected mG[] DIglq;
    protected float[] UGbmX;
    protected float VlJqC;
    private static iS[] tZGSB;
    private static final long LrJMC;
    private static final long[] chDhf;
    private static final Integer[] YxUPE;
    private static final Map Pfwiz;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    protected la(mG mG2, mG mG3, mG mG4, mG mG5) {
        long l2 = LrJMC ^ 0x2D8A3669288BL;
        iS[] iSArray = la.bXl();
        this.irnms = kY.DsgDa;
        this.DIglq = new mG[0];
        this.UGbmX = new float[0];
        this.VlJqC = 0.0f;
        iS[] iSArray2 = iSArray;
        try {
            this.bWW(mG2, mG3, mG4, mG5);
            if (iS.bwL() == null) {
                la.bXk(new iS[4]);
            }
        }
        catch (MatchException matchException) {
            throw la.bXm(matchException);
        }
    }

    protected la(kY kY2, mG[] mGArray, float[] fArray, float f2) {
        long l2 = LrJMC ^ 0xC47AAB5B48EL;
        iS[] iSArray = la.bXl();
        iS[] iSArray2 = iSArray;
        try {
            this.irnms = la.bWZ(kY2);
            this.bWY(mGArray, fArray);
            this.VlJqC = f2;
            this.bWW(this.DIglq[0], this.DIglq[this.DIglq.length - 1], this.DIglq[0], this.DIglq[this.DIglq.length - 1]);
            if (iSArray2 == null) {
                iS.bwK("iuOlM");
            }
        }
        catch (MatchException matchException) {
            throw la.bXm(matchException);
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        LrJMC = gb.aYR(-2861327991740537490L, -2468379374040924800L, MethodHandles.lookup().lookupClass()).a(254068701844855L);
        Pfwiz = new HashMap(13);
        la.bXk(new iS[4]);
        long l2 = LrJMC ^ 0x1233DA737F0AL;
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
        String string = "\u00f9\u0091d_z\u001b\u0005\u00df\u00baTh<a\u0085\u00cf7";
        int n3 = "\u00f9\u0091d_z\u001b\u0005\u00df\u00baTh<a\u0085\u00cf7".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        chDhf = lArray;
        YxUPE = new Integer[2];
        dSrGG = (int)la.bXp("l", (int)6189, (long)(l2 ^ 0x91FC07D5C22A692L));
    }

    protected final void bWW(mG mG2, mG mG3, mG mG4, mG mG5) {
        this.ynWlL = mG2;
        this.EzdzQ = mG3;
        this.MbRuH = mG4;
        this.pUlwC = mG5;
    }

    public la bWu() {
        return this.bWX(this.VlJqC);
    }

    public float[] bWV() {
        return (float[])this.UGbmX.clone();
    }

    public static la bWH(mG[] mGArray, float[] fArray) {
        return la.bWE().dut(mGArray, fArray).duy();
    }

    public static la bWD(mG mG2, mG mG3) {
        return new lb(mG2, mG3);
    }

    public la bWP(float f2) {
        return this.bWO(f2);
    }

    private static float[] bXb(float[] fArray, int n2) {
        float[] fArray2;
        block23: {
            int n3;
            iS[] iSArray;
            float[] fArray3;
            block17: {
                int n4;
                block18: {
                    float[] fArray4;
                    block19: {
                        block16: {
                            float[] fArray5;
                            block15: {
                                long l2 = LrJMC ^ 0x77822F1A5A56L;
                                fArray3 = new float[n2];
                                iSArray = la.bXl();
                                try {
                                    fArray5 = fArray;
                                    if (iSArray == null) break block15;
                                    if (fArray5 == null) break block16;
                                }
                                catch (MatchException matchException) {
                                    throw la.bXm(matchException);
                                }
                                fArray5 = fArray;
                            }
                            try {
                                n4 = fArray5.length;
                                if (iSArray == null) break block17;
                                if (n4 >= n2) break block18;
                            }
                            catch (MatchException matchException) {
                                throw la.bXm(matchException);
                            }
                        }
                        for (int i2 = 0; i2 < n2; ++i2) {
                            float f2;
                            block22: {
                                int n5;
                                block20: {
                                    block21: {
                                        try {
                                            try {
                                                try {
                                                    fArray4 = fArray3;
                                                    if (iSArray == null) break block19;
                                                    int n6 = i2;
                                                    n5 = n2;
                                                    if (iSArray == null) break block20;
                                                }
                                                catch (MatchException matchException) {
                                                    throw la.bXm(matchException);
                                                }
                                                if (n5 != 1) break block21;
                                            }
                                            catch (MatchException matchException) {
                                                throw la.bXm(matchException);
                                            }
                                            f2 = 0.0f;
                                            break block22;
                                        }
                                        catch (MatchException matchException) {
                                            throw la.bXm(matchException);
                                        }
                                    }
                                    n5 = i2;
                                }
                                f2 = (float)n5 / (float)(n2 - 1);
                            }
                            fArray4[n6] = f2;
                            if (iSArray != null) continue;
                        }
                        fArray4 = fArray3;
                    }
                    return fArray4;
                }
                n4 = n3 = 0;
            }
            while (n3 < n2) {
                try {
                    fArray2 = fArray3;
                    if (iSArray != null) {
                        fArray2[n3] = Math.clamp(fArray[n3], 0.0f, 1.0f);
                        ++n3;
                        if (iSArray != null) continue;
                        break;
                    }
                    break block23;
                }
                catch (MatchException matchException) {
                    throw la.bXm(matchException);
                }
            }
            fArray2 = fArray3;
        }
        return fArray2;
    }

    public mG[] bWU() {
        return (mG[])this.DIglq.clone();
    }

    private static CallSite bXp(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/la" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public boolean bWQ() {
        return this.irnms.bWx();
    }

    public static void bXk(iS[] iSArray) {
        tZGSB = iSArray;
    }

    public static la bWC(mG mG2, mG mG3) {
        return new kW(mG2, mG3);
    }

    public mG bXf() {
        return this.EzdzQ;
    }

    public static la bWA(mG mG2, mG mG3, mG mG4, mG mG5) {
        return new la(mG2, mG3, mG4, mG5);
    }

    public float bXi() {
        return this.VlJqC;
    }

    private static int bXo(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = la.bXn(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static MatchException bXm(MatchException matchException) {
        return matchException;
    }

    public float bWT(int n2) {
        return this.UGbmX[n2];
    }

    private la bWX(float f2) {
        la la2;
        block2: {
            block3: {
                long l2 = LrJMC ^ 0x7B741FF976E5L;
                iS[] iSArray = la.bXl();
                try {
                    la2 = this;
                    if (iSArray == null) break block2;
                    if (la2.bWQ()) break block3;
                }
                catch (MatchException matchException) {
                    throw la.bXm(matchException);
                }
                la la3 = la.bWA(this.ynWlL, this.EzdzQ, this.MbRuH, this.pUlwC);
                la3.VlJqC = f2;
                return la3;
            }
            la2 = new la(this.irnms, this.DIglq, this.UGbmX, f2);
        }
        return la2;
    }

    public mG bXh() {
        return this.pUlwC;
    }

    private static int bXn(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5EB2;
        if (YxUPE[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = chDhf[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Pfwiz.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Pfwiz.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/la", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            la.YxUPE[n3] = n4;
        }
        return YxUPE[n3];
    }

    public static la$us bWK(kY kY2) {
        return new la$us(kY2);
    }

    public static la bWG(mG ... mGArray) {
        return la.bWE().dus(mGArray).duy();
    }

    public kY bXd() {
        return this.irnms;
    }

    public mG bXe() {
        return this.ynWlL;
    }

    public static iS[] bXl() {
        return tZGSB;
    }

    private static void bXc(mG[] mGArray, float[] fArray) {
        block9: {
            iS[] iSArray;
            Integer[] integerArray;
            int n4;
            block8: {
                long l2 = LrJMC ^ 0x7F0FF84CABC4L;
                n4 = fArray.length;
                integerArray = new Integer[n4];
                iSArray = la.bXl();
                for (int i2 = 0; i2 < n4; ++i2) {
                    try {
                        integerArray[i2] = i2;
                        if (iSArray != null) {
                            if (iSArray != null) continue;
                            break;
                        }
                        break block8;
                    }
                    catch (MatchException matchException) {
                        throw la.bXm(matchException);
                    }
                }
                Arrays.sort(integerArray, (n2, n3) -> Float.compare(fArray[n2], fArray[n3]));
            }
            mG[] mGArray2 = (mG[])mGArray.clone();
            float[] fArray2 = (float[])fArray.clone();
            for (int i3 = 0; i3 < n4; ++i3) {
                try {
                    mGArray2[i3] = mGArray[integerArray[i3]];
                    fArray2[i3] = fArray[integerArray[i3]];
                    if (iSArray != null) {
                        if (iSArray != null) continue;
                        break;
                    }
                    break block9;
                }
                catch (MatchException matchException) {
                    throw la.bXm(matchException);
                }
            }
            System.arraycopy(mGArray2, 0, mGArray, 0, n4);
            System.arraycopy(fArray2, 0, fArray, 0, n4);
        }
    }

    public la bWN(float f2) {
        return this.bWM(f2);
    }

    public mG bXg() {
        return this.MbRuH;
    }

    private static mG[] bXa(mG[] mGArray) {
        mG[] mGArray2;
        block16: {
            mG[] mGArray3;
            block17: {
                int n2;
                iS[] iSArray;
                block14: {
                    long l2;
                    block15: {
                        mG[] mGArray4;
                        block12: {
                            l2 = LrJMC ^ 0x6EA8CA2C3A0FL;
                            iSArray = la.bXl();
                            try {
                                block13: {
                                    try {
                                        try {
                                            try {
                                                mGArray4 = mGArray;
                                                if (iSArray == null) break block12;
                                                if (mGArray4 == null) break block13;
                                            }
                                            catch (MatchException matchException) {
                                                throw la.bXm(matchException);
                                            }
                                            n2 = mGArray.length;
                                            if (iSArray == null) break block14;
                                        }
                                        catch (MatchException matchException) {
                                            throw la.bXm(matchException);
                                        }
                                        if (n2 != 0) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw la.bXm(matchException);
                                    }
                                }
                                mG[] mGArray5 = new mG[2];
                                mGArray5[0] = mG.hoGuU;
                                mGArray4 = mGArray5;
                                mGArray5[1] = mG.hoGuU;
                            }
                            catch (MatchException matchException) {
                                throw la.bXm(matchException);
                            }
                        }
                        return mGArray4;
                    }
                    n2 = Math.min(mGArray.length, (int)la.bXp("l", (int)17268, (long)(0x7C1EB776E75738CFL ^ l2)));
                }
                int n3 = n2;
                mGArray3 = new mG[n3];
                try {
                    try {
                        System.arraycopy(mGArray, 0, mGArray3, 0, n3);
                        mGArray2 = mGArray3;
                        if (iSArray == null) break block16;
                        if (mGArray2.length != 1) break block17;
                    }
                    catch (MatchException matchException) {
                        throw la.bXm(matchException);
                    }
                    return new mG[]{mGArray3[0], mGArray3[0]};
                }
                catch (MatchException matchException) {
                    throw la.bXm(matchException);
                }
            }
            mGArray2 = mGArray3;
        }
        return mGArray2;
    }

    public mG bWS(int n2) {
        return this.DIglq[n2];
    }

    public static la bWF(mG mG2, mG mG3) {
        return la.bWE().dus(mG2, mG3).duy();
    }

    public static la$us bWE() {
        return la.bWK(kY.YYiVQ);
    }

    public static la bWB(mG mG2, mG mG3) {
        return new kX(mG2, mG3);
    }

    public la bWO(float f2) {
        return this.bWM((float)Math.toRadians(f2));
    }

    private void bWY(mG[] mGArray, float[] fArray) {
        this.DIglq = la.bXa(mGArray);
        this.UGbmX = la.bXb(fArray, this.DIglq.length);
        la.bXc(this.DIglq, this.UGbmX);
    }

    private static kY bWZ(kY kY2) {
        kY kY3;
        block10: {
            block11: {
                kY kY4;
                block8: {
                    long l2 = LrJMC ^ 0x37D4BB20BA9EL;
                    iS[] iSArray = la.bXl();
                    try {
                        block9: {
                            try {
                                try {
                                    try {
                                        kY4 = kY2;
                                        if (iSArray == null) break block8;
                                        if (kY4 == null) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw la.bXm(matchException);
                                    }
                                    kY3 = kY2;
                                    if (iSArray == null) break block10;
                                }
                                catch (MatchException matchException) {
                                    throw la.bXm(matchException);
                                }
                                if (kY3.bWx()) break block11;
                            }
                            catch (MatchException matchException) {
                                throw la.bXm(matchException);
                            }
                        }
                        kY4 = kY.YYiVQ;
                    }
                    catch (MatchException matchException) {
                        throw la.bXm(matchException);
                    }
                }
                return kY4;
            }
            kY3 = kY2;
        }
        return kY3;
    }

    public static la bWL(kY kY2, mG[] mGArray, float[] fArray) {
        return la.bWK(kY2).dut(mGArray, fArray).duy();
    }

    public la bWM(float f2) {
        return this.bWX(f2);
    }

    public int bWR() {
        return this.DIglq.length;
    }

    public static la bWI(float f2, mG[] mGArray, float[] fArray) {
        return la.bWE().duw(f2).dut(mGArray, fArray).duy();
    }

    public static la bWJ(float f2, mG ... mGArray) {
        return la.bWE().dux(f2).dus(mGArray).duy();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(la.class, "bXo", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

