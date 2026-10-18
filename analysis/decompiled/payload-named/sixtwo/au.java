/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  sixtwo.at
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
import sixtwo.at;
import sixtwo.az;
import sixtwo.gb;
import sixtwo.ig;
import sixtwo.jH;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.ld;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.ob;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class au
extends az {
    private final rk HxBzM;
    private final ri pNvvb;
    private at VhaVC;
    private boolean qSAqB;
    private static final long vzfUG = gb.aYR(3384193007651451487L, -2449311745717754863L, MethodHandles.lookup().lookupClass()).a(260161488895751L);
    private static final String kheUW;
    private static final long[] hlCPm;
    private static final Integer[] adMRv;
    private static final Map safNd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public au(float f2) {
        mG mG2;
        CallSite callSite;
        ri ri2;
        ri ri3;
        long l2 = vzfUG ^ 0x4BAE19083E83L;
        this.HxBzM = new rk((int)au.se("n", (int)19508, (long)(0x4ABFA29ADA7D4296L ^ l2))).dhs(rj.UPXqT);
        this.BcpIo = f2;
        this.WjISQ = f2;
        ig ig2 = rD.dlM().bjG();
        try {
            ri ri4;
            au au2 = this;
            ri3 = ri4;
            ri2 = ri4;
            callSite = au.se("n", (int)32661, (long)(0x2149166B45E0F136L ^ l2));
            mG2 = this.qSAqB ? ig2.bis() : ig2.bir();
        }
        catch (MatchException matchException) {
            throw au.sa(matchException);
        }
        ri3((int)callSite, mG2);
        au2.pNvvb = ri2;
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = vzfUG ^ 0x18EF48C7230AL;
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
        byte[] byArray3 = cipher.doFinal("\u0007\t\u0089\u0006G\u00c4\u00a1\u00c5\u00fcwFbvS\u00ce\u0000".getBytes("ISO-8859-1"));
        kheUW = au.sb(byArray3).intern();
        safNd = new HashMap(13);
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
        String string = "`\u0080\u00f2v\u0087\u00a2\u00cfn\t\b\u000e\u00ff\u00c1\u00bdj\u00de";
        int n3 = "`\u0080\u00f2v\u0087\u00a2\u00cfn\t\b\u000e\u00ff\u00c1\u00bdj\u00de".length();
        int n4 = 0;
        do {
            byte[] byArray6 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n4 < n3);
        hlCPm = lArray;
        adMRv = new Integer[2];
    }

    private static MatchException sa(MatchException matchException) {
        return matchException;
    }

    private static String sb(byte[] byArray) {
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

    private static int sc(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4196;
        if (adMRv[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = hlCPm[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])safNd.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    safNd.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/au", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            au.adMRv[n3] = n4;
        }
        return adMRv[n3];
    }

    private static CallSite se(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/au" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int sd(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = au.sc(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    @Override
    public boolean dk(double d2, double d3, mA mA2) {
        boolean bl2;
        block12: {
            block13: {
                block17: {
                    at at2;
                    block16: {
                        boolean bl3;
                        String[] stringArray;
                        block14: {
                            block15: {
                                long l2 = vzfUG ^ 0x25E36435174EL;
                                stringArray = aj.oA();
                                try {
                                    try {
                                        try {
                                            try {
                                                bl2 = this.tg(d2, d3);
                                                if (stringArray == null) break block12;
                                                if (!bl2) break block13;
                                            }
                                            catch (MatchException matchException) {
                                                throw au.sa(matchException);
                                            }
                                            if (mA2 != mA.sCBUa) break block13;
                                        }
                                        catch (MatchException matchException) {
                                            throw au.sa(matchException);
                                        }
                                        au au2 = this;
                                        bl3 = this.qSAqB;
                                        if (stringArray == null) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw au.sa(matchException);
                                    }
                                    if (bl3) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw au.sa(matchException);
                                }
                                bl3 = true;
                                break block14;
                            }
                            bl3 = false;
                        }
                        try {
                            try {
                                au2.qSAqB = bl3;
                                at2 = this.VhaVC;
                                if (stringArray == null) break block16;
                                if (at2 == null) break block17;
                            }
                            catch (MatchException matchException) {
                                throw au.sa(matchException);
                            }
                            at2 = this.VhaVC;
                        }
                        catch (MatchException matchException) {
                            throw au.sa(matchException);
                        }
                    }
                    at2.run(this);
                }
                return true;
            }
            bl2 = super.dk(d2, d3, mA2);
        }
        return bl2;
    }

    public au rV(boolean bl2) {
        this.qSAqB = bl2;
        return this;
    }

    @Override
    protected void bV(lC lC2) {
        float f2;
        mG mG2;
        mG mG3;
        ri ri2;
        block8: {
            au au2;
            block6: {
                block7: {
                    long l2 = vzfUG ^ 0x7876AC9CC38AL;
                    String[] stringArray = aj.oA();
                    try {
                        try {
                            ri2 = this.pNvvb;
                            au2 = this;
                            if (stringArray == null) break block6;
                            if (!au2.qSAqB) break block7;
                        }
                        catch (MatchException matchException) {
                            throw au.sa(matchException);
                        }
                        mG3 = this.CtPwV.bjf();
                        break block8;
                    }
                    catch (MatchException matchException) {
                        throw au.sa(matchException);
                    }
                }
                au2 = this;
            }
            mG3 = au2.CtPwV.bje();
        }
        try {
            ri2.dfT(mG3);
            this.HxBzM.dhc(this.qSAqB);
            mG2 = this.pNvvb.dfU();
            f2 = this.qSAqB ? 255.0f : 155.0f;
        }
        catch (MatchException matchException) {
            throw au.sa(matchException);
        }
        mG mG4 = mG2.coa(f2);
        lC2.cdg(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, ld.all(1.5f), mG4);
        float f3 = this.HxBzM.dhj();
        mG mG5 = this.CtPwV.bjb().coa(255.0f * f3);
        float f4 = 6.0f;
        float f5 = this.MCnYt + jf.bAH(f4, this.BcpIo);
        float f6 = this.pNyTQ + jf.bAH(f4, this.WjISQ);
        jH.bId(lC2, this.MCnYt + this.BcpIo * 0.5f, this.pNyTQ + this.WjISQ * 0.5f, f3);
        lC2.cdW(ob.cBv(kheUW), f5, f6, f4, f4, mG5);
        jH.bIf();
    }

    public au rU(at at2) {
        this.VhaVC = at2;
        return this;
    }

    public boolean rZ() {
        return this.qSAqB;
    }

    public rk rW() {
        return this.HxBzM;
    }

    public ri rX() {
        return this.pNvvb;
    }

    public at rY() {
        return this.VhaVC;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(au.class, "sd", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

