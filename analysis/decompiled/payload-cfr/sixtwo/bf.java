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
import java.time.Instant;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.aA;
import sixtwo.ag;
import sixtwo.ag$rR;
import sixtwo.bg;
import sixtwo.bl;
import sixtwo.gb;
import sixtwo.jF;
import sixtwo.jf;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mE;
import sixtwo.mG;
import sixtwo.rj;
import sixtwo.rk;

public class bf
extends aA {
    private final rk WZJax;
    private final rk LfVhX;
    private final mE QmUDf;
    private final ag StMVo;
    private boolean lGpSg;
    private static final long yhsxx = gb.aYR(-2964692983370650862L, 5945782339383189539L, MethodHandles.lookup().lookupClass()).a(67608889055075L);
    private static final String ZzLYN;
    private static final long[] xkIge;
    private static final Integer[] BNxZH;
    private static final Map dVkdH;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bf(mE mE2) {
        long l = yhsxx ^ 0x2A9F930E0F22L;
        this.WZJax = new rk((int)bf.CM("z", (int)481, (long)(0x7A26127DD9FF9257L ^ l))).dhs(rj.UPXqT);
        this.LfVhX = new rk((int)bf.CM("z", (int)11671, (long)(0x50F5C399B4423E20L ^ l))).dhs(rj.UPXqT);
        this.lGpSg = false;
        this.QmUDf = mE2;
        this.StMVo = new ag(mE2.cnD(), ag$rR.VdGoA);
        this.StMVo.sX(15.0f, 45.0f);
        this.BcpIo = 115.0f;
        this.WjISQ = 55.0f;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = yhsxx ^ 0x56554218C519L;
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
        byte[] byArray3 = cipher.doFinal("\u0012\u0087\u0090\u00c2\u00ba(\u00db\u0012\u000bX<S\u00d4\u00de\u0088P".getBytes("ISO-8859-1"));
        ZzLYN = bf.CJ(byArray3).intern();
        dVkdH = new HashMap(13);
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
        String string = "\u00cd\u0007g\u0099iK\u00bc\u00b5j8\u00d8\u008c\u00ff\u00cd\u00fc\u00b3";
        int n2 = "\u00cd\u0007g\u0099iK\u00bc\u00b5j8\u00d8\u008c\u00ff\u00cd\u00fc\u00b3".length();
        int n3 = 0;
        do {
            byte[] byArray6 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n3 < n2);
        xkIge = lArray;
        BNxZH = new Integer[2];
    }

    @Override
    public void dl(double d, double d2, mA mA2) {
        this.StMVo.dl(d, d2, mA2);
        super.dl(d, d2, mA2);
    }

    public mE CE() {
        return this.QmUDf;
    }

    private static MatchException CI(MatchException matchException) {
        return matchException;
    }

    public bf CH(boolean bl) {
        this.lGpSg = bl;
        return this;
    }

    @Override
    public boolean dk(double d, double d2, mA mA2) {
        boolean bl;
        block9: {
            block10: {
                int n;
                block8: {
                    boolean bl2;
                    block7: {
                        long l = yhsxx ^ 0x2B63723D23AFL;
                        n = bg.De();
                        try {
                            bl2 = this.StMVo.dk(d, d2, mA2);
                            if (n == 0) break block7;
                            if (!bl2) break block8;
                        }
                        catch (MatchException matchException) {
                            throw bf.CI(matchException);
                        }
                        bl2 = true;
                    }
                    return bl2;
                }
                if (mA2 == mA.sCBUa) {
                    lc lc2 = new lc(this.MCnYt + this.BcpIo - 15.0f, this.pNyTQ + this.WjISQ - 15.0f, 8.0f, 8.0f);
                    try {
                        try {
                            bl = lc2.bXD(d, d2);
                            if (n == 0) break block9;
                            if (!bl) break block10;
                        }
                        catch (MatchException matchException) {
                            throw bf.CI(matchException);
                        }
                        this.QmUDf.cnB();
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw bf.CI(matchException);
                    }
                }
            }
            bl = super.dk(d, d2, mA2);
        }
        return bl;
    }

    @Override
    protected void bV(lC lC2) {
        float f2;
        float f3;
        block14: {
            block15: {
                block13: {
                    float f4;
                    block12: {
                        boolean bl2;
                        rk rk2;
                        int n;
                        block10: {
                            block11: {
                                long l = yhsxx ^ 0x76F6BA94F76BL;
                                int n2 = bg.De();
                                this.LfVhX.dhc(this.ti(lC2));
                                n = n2;
                                try {
                                    rk2 = this.WZJax;
                                    bl2 = this.lGpSg;
                                    if (n == 0) break block10;
                                    if (bl2) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw bf.CI(matchException);
                                }
                                bl2 = true;
                                break block10;
                            }
                            bl2 = false;
                        }
                        rk2.dhc(bl2);
                        float f5 = 7.0f;
                        f3 = this.WZJax.dhj();
                        mG mG2 = this.CtPwV.bje().cob(0.8f).cob(f3);
                        lC2.cdm(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, 5.0f, ld.M, mG2);
                        lq lq2 = lE.WTzbi.bYM(7.0f);
                        float f6 = this.MCnYt + 15.0f + this.StMVo.kN() + 15.0f;
                        float f7 = this.pNyTQ + 8.0f;
                        mG mG3 = this.CtPwV.bjb().cob(jF.bHw()[3] * 0.75f + 0.25f * this.LfVhX.dhj()).cob(f3);
                        lC2.cez(lq2, this.QmUDf.cnD(), f6, f7, mG3);
                        mG mG4 = this.CtPwV.bjb().cob(0.5f * f3);
                        lq lq3 = lE.joxgd.bYM(6.0f);
                        float f8 = f7 + lq2.cat() + 3.0f;
                        lC2.cez(lq3, ZzLYN, f6, f8, mG4);
                        float f9 = f8 + lq3.cat() + 3.0f;
                        lC2.ceH(lq3, jf.bAS(Instant.ofEpochSecond(this.QmUDf.cnE())), f6, f9, mG4, 0.8f, 0.99f, this.BcpIo - (f6 - this.MCnYt) - 7.0f);
                        lc lc2 = new lc(this.MCnYt + this.BcpIo - 15.0f, this.pNyTQ + this.WjISQ - 15.0f, 8.0f, 8.0f);
                        try {
                            try {
                                try {
                                    lC2.ceq(lf.JHGge, lc2, jk.mPXGi.cob(f3));
                                    this.StMVo.sW(this.MCnYt + 15.0f, this.pNyTQ + f5);
                                    float f10 = bl.Ex().sf() - 0.8f;
                                    f4 = f10 == 0.0f ? 0 : (f10 < 0.0f ? -1 : 1);
                                    if (n == 0) break block12;
                                    if (f4 <= 0) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw bf.CI(matchException);
                                }
                                f2 = f3;
                                if (n == 0) break block14;
                            }
                            catch (MatchException matchException) {
                                throw bf.CI(matchException);
                            }
                            float f11 = f2 - 0.8f;
                            f4 = f11 == 0.0f ? 0 : (f11 < 0.0f ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw bf.CI(matchException);
                        }
                    }
                    if (f4 >= 0) break block15;
                }
                return;
            }
            f2 = jF.bHw()[3];
        }
        float f12 = f2;
        jF.bHz(1.0f, 1.0f, 1.0f, Math.min(1.0f, f3));
        this.StMVo.su(lC2);
        jF.bHz(1.0f, 1.0f, 1.0f, f12);
    }

    @Override
    public boolean dB(double d, double d2, mA mA2, double d3, double d4) {
        boolean bl2;
        block4: {
            block5: {
                long l = yhsxx ^ 0x3B3D1BD1362L;
                int n = bg.De();
                try {
                    try {
                        bl2 = this.StMVo.dB(d, d2, mA2, d3, d4);
                        if (n == 0) break block4;
                        if (!bl2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bf.CI(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw bf.CI(matchException);
                }
            }
            bl2 = super.dB(d, d2, mA2, d3, d4);
        }
        return bl2;
    }

    @Override
    public void dY() {
        super.dY();
        this.StMVo.dY();
    }

    private static CallSite CM(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bf" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public rk CC() {
        return this.WZJax;
    }

    private static String CJ(byte[] byArray) {
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

    public ag CF() {
        return this.StMVo;
    }

    private static int CK(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x59C2;
        if (BNxZH[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = xkIge[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])dVkdH.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    dVkdH.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bf", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bf.BNxZH[n2] = n3;
        }
        return BNxZH[n2];
    }

    private static int CL(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = bf.CK(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public rk CD() {
        return this.LfVhX;
    }

    public boolean CG() {
        return this.lGpSg;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bf.class, "CL", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
