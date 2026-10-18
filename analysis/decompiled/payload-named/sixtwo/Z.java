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
import sixtwo.az;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.rj;
import sixtwo.rk;

public class Z
extends az {
    private lq fljZp;
    private float IkNZT;
    private int NndmE;
    private rj WsaNZ;
    private String sOpHR;
    private boolean PbmID;
    private mG abQsz;
    private float fOnos;
    private final String[] uVTfv;
    private final String[] DgqEL;
    private rk[] OEheO;
    private static int[] JaaVs;
    private static final long XeosK;
    private static final long[] PfyPW;
    private static final Integer[] PUEHi;
    private static final Map uXCQW;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public Z(lq lq2, float f2, int n2, rj rj2, String string) {
        this(lq2, f2, n2, rj2);
        this.kP(string);
    }

    public Z(lq lq2, float f2, int n2, rj rj2) {
        this();
        this.kJ(lq2);
        this.kK(f2);
        this.kL(n2);
        this.kM(rj2);
    }

    public Z() {
        long l2 = XeosK ^ 0x41F5E8FB4E04L;
        this.fljZp = lE.joxgd.bYM(7.0f);
        this.IkNZT = 3.0f;
        this.NndmE = (int)Z.kY("p", (int)28464, (long)(0x156BE2DB0E31689FL ^ l2));
        this.WsaNZ = rj.UPXqT;
        this.abQsz = mG.hoGuU;
        this.uVTfv = new String[]{"", ""};
        this.DgqEL = new String[]{"", ""};
        this.kI();
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        XeosK = gb.aYR(4907853140165818940L, -2309557172119715206L, MethodHandles.lookup().lookupClass()).a(260885394833235L);
        uXCQW = new HashMap(13);
        Z.kT(new int[1]);
        long l2 = XeosK ^ 0x521EA9AA7AB4L;
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
        long[] lArray = new long[3];
        int n2 = 0;
        String string = "\u00aao\u00a9\u008d!\u00d3>\u00eb\u00c7\u00f8\u00df\u00cfD\r\u00ca/\u00a4\u00f2Tp\u00bd\u00e5\u00be\u00fd";
        int n3 = "\u00aao\u00a9\u008d!\u00d3>\u00eb\u00c7\u00f8\u00df\u00cfD\r\u00ca/\u00a4\u00f2Tp\u00bd\u00e5\u00be\u00fd".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        PfyPW = lArray;
        PUEHi = new Integer[3];
    }

    @Override
    public void bV(lC lC2) {
        block12: {
            String string;
            block11: {
                int[] nArray;
                block10: {
                    long l2 = XeosK ^ 0x67045DC50954L;
                    rk[] rkArray = this.OEheO;
                    int n2 = rkArray.length;
                    nArray = Z.kU();
                    for (int i2 = 0; i2 < n2; ++i2) {
                        rk rk2 = rkArray[i2];
                        try {
                            rk2.dhd(1.0f);
                            if (nArray == null) break block10;
                            if (nArray != null) continue;
                        }
                        catch (MatchException matchException) {
                            throw Z.kV(matchException);
                        }
                        iS.bwK("CJ93mc");
                        break;
                    }
                    lC2.cez(this.fljZp, this.DgqEL[0], this.MCnYt, this.pNyTQ + this.IkNZT * this.OEheO[0].dhj(), this.abQsz.coa(this.abQsz.cou() * (1.0f - this.OEheO[0].dhj())));
                    lC2.cez(this.fljZp, this.uVTfv[0], this.MCnYt, this.pNyTQ - this.IkNZT + this.IkNZT * this.OEheO[0].dhj(), this.abQsz.coa(this.abQsz.cou() * this.OEheO[0].dhj()));
                    lC2.cez(this.fljZp, this.DgqEL[1], this.MCnYt + this.fOnos, this.pNyTQ + this.IkNZT * this.OEheO[1].dhj(), this.abQsz.coa(this.abQsz.cou() * (1.0f - this.OEheO[1].dhj())));
                    lC2.cez(this.fljZp, this.uVTfv[1], this.MCnYt + this.fljZp.cao(this.uVTfv[0]), this.pNyTQ - this.IkNZT + this.IkNZT * this.OEheO[1].dhj(), this.abQsz.coa(this.abQsz.cou() * this.OEheO[1].dhj()));
                }
                try {
                    try {
                        string = this.sOpHR;
                        if (nArray == null) break block11;
                        if (string == null) break block12;
                    }
                    catch (MatchException matchException) {
                        throw Z.kV(matchException);
                    }
                    string = this.sOpHR;
                }
                catch (MatchException matchException) {
                    throw Z.kV(matchException);
                }
            }
            try {
                if (!string.isBlank()) {
                    lC2.cez(this.fljZp, this.sOpHR, this.MCnYt + this.fljZp.cao(this.uVTfv[0] + this.uVTfv[1]), this.pNyTQ, this.abQsz);
                }
            }
            catch (MatchException matchException) {
                throw Z.kV(matchException);
            }
        }
    }

    private static CallSite kY(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/Z" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void kI() {
        long l2 = XeosK ^ 0x64CD14722D31L;
        this.OEheO = new rk[2];
        int[] nArray = Z.kU();
        for (int i2 = 0; i2 < this.OEheO.length; ++i2) {
            this.OEheO[i2] = new rk(this.NndmE).dhs(this.WsaNZ);
            if (nArray != null) continue;
        }
    }

    private static MatchException kV(MatchException matchException) {
        return matchException;
    }

    public Z kQ(boolean bl2) {
        this.PbmID = bl2;
        return this;
    }

    public Z kR(mG mG2) {
        this.abQsz = mG2;
        return this;
    }

    public static void kT(int[] nArray) {
        JaaVs = nArray;
    }

    private static int kW(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x72C1;
        if (PUEHi[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = PfyPW[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])uXCQW.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    uXCQW.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/Z", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            Z.PUEHi[n3] = n4;
        }
        return PUEHi[n3];
    }

    public static int[] kU() {
        return JaaVs;
    }

    private static int kX(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = Z.kW(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    @Override
    public float kN() {
        float f2;
        String string;
        String string2;
        block11: {
            block9: {
                Z z;
                block10: {
                    String string3;
                    block8: {
                        long l2 = XeosK ^ 0xED592644FCEL;
                        string2 = this.uVTfv[0] + this.uVTfv[1];
                        int[] nArray = Z.kU();
                        string = this.DgqEL[0] + this.DgqEL[1];
                        try {
                            try {
                                try {
                                    string3 = this.sOpHR;
                                    if (nArray == null) break block8;
                                    if (string3 == null) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw Z.kV(matchException);
                                }
                                z = this;
                                if (nArray == null) break block10;
                            }
                            catch (MatchException matchException) {
                                throw Z.kV(matchException);
                            }
                            string3 = z.sOpHR;
                        }
                        catch (MatchException matchException) {
                            throw Z.kV(matchException);
                        }
                    }
                    try {
                        if (string3.isBlank()) break block9;
                        z = this;
                    }
                    catch (MatchException matchException) {
                        throw Z.kV(matchException);
                    }
                }
                f2 = z.fljZp.cao(this.sOpHR);
                break block11;
            }
            f2 = 0.0f;
        }
        float f3 = f2;
        return Math.max(this.fljZp.cao(string2), this.fljZp.cao(string)) + f3;
    }

    public void kO(int n2) {
        block14: {
            String string;
            block17: {
                boolean bl2;
                String string2;
                block15: {
                    int[] nArray;
                    block16: {
                        boolean bl3;
                        block12: {
                            block13: {
                                long l2 = XeosK ^ 0x5471DD32F6C1L;
                                string2 = String.valueOf(n2 / Z.kY("p", (int)31236, (long)(0x36A664E7E1FD456DL ^ l2)));
                                String string3 = String.valueOf(n2 % Z.kY("p", (int)21081, (long)(0x740F4EF4291B6D31L ^ l2)));
                                nArray = Z.kU();
                                try {
                                    try {
                                        bl3 = string3.equals(this.uVTfv[1]);
                                        if (nArray == null) break block12;
                                        if (bl3) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw Z.kV(matchException);
                                    }
                                    this.fOnos = this.fljZp.cao(this.uVTfv[0]);
                                    this.DgqEL[1] = this.uVTfv[1];
                                    this.uVTfv[1] = string3;
                                    this.OEheO[1].dhg();
                                }
                                catch (MatchException matchException) {
                                    throw Z.kV(matchException);
                                }
                            }
                            bl3 = string2.equals(this.uVTfv[0]);
                        }
                        try {
                            try {
                                try {
                                    if (bl3) break block14;
                                    this.DgqEL[0] = this.uVTfv[0];
                                    String[] stringArray = this.uVTfv;
                                    int n3 = 0;
                                    bl2 = this.PbmID;
                                    if (nArray == null) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw Z.kV(matchException);
                                }
                                if (!bl2) break block16;
                            }
                            catch (MatchException matchException) {
                                throw Z.kV(matchException);
                            }
                            string = string2;
                            break block17;
                        }
                        catch (MatchException matchException) {
                            throw Z.kV(matchException);
                        }
                    }
                    try {
                        string = string2;
                        if (nArray == null) break block17;
                        bl2 = string.equals("0");
                    }
                    catch (MatchException matchException) {
                        throw Z.kV(matchException);
                    }
                }
                string = bl2 ? "" : string2;
            }
            stringArray[n3] = string;
            this.OEheO[0].dhg();
        }
    }

    public Z kS(boolean bl2, mG mG2) {
        this.PbmID = bl2;
        this.abQsz = mG2;
        return this;
    }

    public Z kJ(lq lq2) {
        this.fljZp = lq2;
        return this;
    }

    public Z kL(int n2) {
        this.NndmE = n2;
        this.kI();
        return this;
    }

    public Z kM(rj rj2) {
        this.WsaNZ = rj2;
        this.kI();
        return this;
    }

    public Z kK(float f2) {
        this.IkNZT = f2;
        return this;
    }

    public Z kP(String string) {
        this.sOpHR = string;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(Z.class, "kX", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

