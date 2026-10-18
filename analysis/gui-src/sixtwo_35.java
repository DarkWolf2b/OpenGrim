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
import sixtwo.aj;
import sixtwo.ax;
import sixtwo.az;
import sixtwo.cB;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.mG;
import sixtwo.rj;
import sixtwo.rk;

public abstract class ak<T extends cB>
extends az {
    public static ak<?> SPSBS;
    protected final az uVhpi;
    protected final T sCXfR;
    protected final rk QmyNF;
    protected final rk tDliG;
    private static final long ZyPUF;
    private static final long[] lVcnQ;
    private static final Integer[] aZoru;
    private static final Map nWsJs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ak(T t, az az2) {
        long l2 = ZyPUF ^ 0x31862CD0B3F7L;
        this.QmyNF = new rk((int)ak.oP("j", (int)16635, (long)(0x3D397616045A5429L ^ l2))).dhs(rj.MBpuQ);
        this.tDliG = new rk((int)ak.oP("j", (int)15, (long)(0xEEA561015E914DCL ^ l2))).dhs(rj.UPXqT);
        this.uVhpi = az2;
        this.sCXfR = t;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        ZyPUF = gb.aYR(-1244836903602851909L, -2102368253998822455L, MethodHandles.lookup().lookupClass()).a(83502704156515L);
        nWsJs = new HashMap(13);
        long l2 = ZyPUF ^ 0x7A5751C2FF37L;
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
        String string = "\u00cc\u00f7\u00f1\u00dcO%\u0088Lq\u007f\u00d7\u0089\u00b1\u0011\u00e4\u00ff";
        int n3 = "\u00cc\u00f7\u00f1\u00dcO%\u0088Lq\u007f\u00d7\u0089\u00b1\u0011\u00e4\u00ff".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        lVcnQ = lArray;
        aZoru = new Integer[2];
    }

    public boolean oG() {
        float f2;
        block2: {
            block3: {
                long l2 = ZyPUF ^ 0xB256CC1EED1L;
                String[] stringArray = aj.oA();
                try {
                    float f3 = this.QmyNF.dhj() - 0.0f;
                    f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                    if (stringArray == null) break block2;
                    if (f2 == false) break block3;
                }
                catch (MatchException matchException) {
                    throw ak.oM(matchException);
                }
                f2 = 1.0f;
                break block2;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }

    private static MatchException oM(MatchException matchException) {
        return matchException;
    }

    private static int oN(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7316;
        if (aZoru[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = lVcnQ[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])nWsJs.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    nWsJs.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ak", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ak.aZoru[n3] = n4;
        }
        return aZoru[n3];
    }

    public rk oK() {
        return this.QmyNF;
    }

    private static int oO(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = ak.oN(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite oP(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ak" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public void oF(lC lC2, float f2) {
        mG mG2 = this.CtPwV.bjb().coa(255.0f * (0.75f + 0.25f * this.tDliG.dhj()));
        float f3 = this.MCnYt + 9.0f;
        float f4 = this.pNyTQ + jf.bAH(ax.aqGSY.cat(), 18.0f);
        lC2.ceI(ax.aqGSY, ((cB)this.sCXfR).Vm(), f3, f4, mG2, 0.7f, 0.99f, f2);
    }

    public az oI() {
        return this.uVhpi;
    }

    public rk oL() {
        return this.tDliG;
    }

    public float oH() {
        return this.QmyNF.dhj();
    }

    public T oJ() {
        return this.sCXfR;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ak.class, "oO", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

