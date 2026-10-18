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
import sixtwo.az;
import sixtwo.gb;
import sixtwo.lC;
import sixtwo.rj;
import sixtwo.rk;

public class ah
extends az {
    private double jHuGT;
    private double TCqpd;
    private double spjLF;
    private double sZwZd;
    private double UUSmJ;
    private final rk xyejr;
    private static final long DnwET;
    private static final long[] Ewwsz;
    private static final Integer[] MFJtF;
    private static final Map yjZJj;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ah() {
        long l2 = DnwET ^ 0x2C7BB6337FB5L;
        this.TCqpd = 0.0;
        this.spjLF = 0.0;
        this.sZwZd = 20.0;
        this.UUSmJ = 0.0;
        this.xyejr = new rk((int)ah.nY("d", (int)27226, (long)(0x56D05FFF79B059A1L ^ l2))).dhs(rj.XzDkv);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                ah.DnwET = gb.aYR(3253819375579256058L, -242973308182835243L, MethodHandles.lookup().lookupClass()).a(112643053348745L);
                ah.yjZJj = new HashMap<K, V>(13);
                var0 = ah.DnwET ^ 96048043455601L;
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[5];
                var5_4 = 0;
                var6_5 = "\u00d7\u0099@\u00f4\u00e8\u0001\u0014\u00c2\u00b9*\u00ff\u00f7H\u0014l\u0080\u00bfI\u00ce\u00b4\u001b\u00f8\u00c3\u0003";
                var7_6 = "\u00d7\u0099@\u00f4\u00e8\u0001\u0014\u00c2\u00b9*\u00ff\u00f7H\u0014l\u0080\u00bfI\u00ce\u00b4\u001b\u00f8\u00c3\u0003".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "y`V?\u00ab\u008f\u009f\u0094e\u0011\u00a7R\u00bf\u00fd\u00a2\u00c0";
                    var7_6 = "y`V?\u00ab\u008f\u009f\u0094e\u0011\u00a7R\u00bf\u00fd\u00a2\u00c0".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl52:
                // 1 sources

                ** continue;
            }
        }
        ah.Ewwsz = var8_3;
        ah.MFJtF = new Integer[5];
    }

    @Override
    public boolean dm(int n2, int n3, int n4) {
        boolean bl2;
        block11: {
            CallSite callSite;
            block9: {
                String[] stringArray;
                long l2;
                block10: {
                    l2 = DnwET ^ 0x32FE639A1C7L;
                    stringArray = aj.oA();
                    try {
                        try {
                            bl2 = n2;
                            callSite = ah.nY("d", (int)16454, (long)(0x2C2BA9749025ADCCL ^ l2));
                            if (stringArray == null) break block9;
                            if (bl2 != callSite) break block10;
                        }
                        catch (MatchException matchException) {
                            throw ah.nV(matchException);
                        }
                        this.nJ(1.0);
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw ah.nV(matchException);
                    }
                }
                try {
                    bl2 = n2;
                    if (stringArray == null) break block11;
                    callSite = ah.nY("d", (int)17877, (long)(0x7D6109240D9BA85DL ^ l2));
                }
                catch (MatchException matchException) {
                    throw ah.nV(matchException);
                }
            }
            try {
                if (bl2 == callSite) {
                    this.nJ(-1.0);
                    return true;
                }
            }
            catch (MatchException matchException) {
                throw ah.nV(matchException);
            }
            bl2 = super.dm(n2, n3, n4);
        }
        return bl2;
    }

    @Override
    protected void bV(lC lC2) {
        ah ah2;
        block10: {
            block11: {
                block9: {
                    double d2;
                    block8: {
                        long l2 = DnwET ^ 0x786293EDF108L;
                        String[] stringArray = aj.oA();
                        try {
                            try {
                                try {
                                    double d3 = this.UUSmJ - (double)this.WjISQ;
                                    d2 = d3 == 0.0 ? 0 : (d3 < 0.0 ? -1 : 1);
                                    if (stringArray == null) break block8;
                                    if (d2 <= 0) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw ah.nV(matchException);
                                }
                                ah2 = this;
                                if (stringArray == null) break block10;
                            }
                            catch (MatchException matchException) {
                                throw ah.nV(matchException);
                            }
                            double d4 = ah2.jHuGT - 0.0;
                            d2 = d4 == 0.0 ? 0 : (d4 < 0.0 ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw ah.nV(matchException);
                        }
                    }
                    if (d2 > 0) break block11;
                }
                return;
            }
            ah2 = this;
        }
        float f2 = ah2.WjISQ / (float)this.UUSmJ;
        float f3 = Math.max(24.0f, this.WjISQ * f2);
        double d5 = this.nH();
        d5 = Math.max(0.0, Math.min(d5, this.jHuGT));
        float f4 = this.WjISQ - f3;
        float f5 = (float)(d5 / this.jHuGT);
    }

    private static int nW(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0xF79;
        if (MFJtF[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = Ewwsz[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])yjZJj.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    yjZJj.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ah", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ah.MFJtF[n3] = n4;
        }
        return MFJtF[n3];
    }

    public void nG() {
        block6: {
            block7: {
                rj rj2;
                rk rk2;
                double d2;
                long l2;
                block9: {
                    block8: {
                        l2 = DnwET ^ 0x271AC9925F79L;
                        this.spjLF = Math.max(0.0, Math.min(this.spjLF, this.jHuGT));
                        double d3 = this.spjLF - this.TCqpd;
                        this.TCqpd += d3;
                        String[] stringArray = aj.oA();
                        d2 = Math.abs(d3);
                        try {
                            try {
                                try {
                                    if (stringArray == null) break block6;
                                    if (!(d2 > 0.0)) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw ah.nV(matchException);
                                }
                                rk2 = this.xyejr;
                                if (!(d2 > 21.0)) break block8;
                            }
                            catch (MatchException matchException) {
                                throw ah.nV(matchException);
                            }
                            rj2 = rj.JbGQS;
                            break block9;
                        }
                        catch (MatchException matchException) {
                            throw ah.nV(matchException);
                        }
                    }
                    rj2 = rj.XzDkv;
                }
                rk2.dhs(rj2);
                CallSite callSite = ah.nY("d", (int)30077, (long)(0x120FB0FE01106648L ^ l2));
                int n2 = (int)Math.ceil((d2 - 61.0) / 20.0);
                n2 = Math.max(0, Math.min(3, n2));
                reference var10_7 = callSite + n2 * ah.nY("d", (int)27501, (long)(0x39F0A68E7E1DF85DL ^ l2));
                this.xyejr.dhq((int)var10_7);
            }
            this.xyejr.dhd((float)this.TCqpd);
        }
    }

    public void nI() {
        this.TCqpd = 0.0;
        this.spjLF = 0.0;
        this.xyejr.dhg();
    }

    public ah nQ(double d2) {
        this.jHuGT = d2;
        return this;
    }

    public double nH() {
        return this.xyejr.dhj();
    }

    public void nJ(double d2) {
        this.spjLF -= d2 * this.sZwZd;
    }

    public double nN() {
        return this.sZwZd;
    }

    public double nK() {
        return this.jHuGT;
    }

    public double nO() {
        return this.UUSmJ;
    }

    public rk nP() {
        return this.xyejr;
    }

    public ah nR(double d2) {
        this.TCqpd = d2;
        return this;
    }

    private static MatchException nV(MatchException matchException) {
        return matchException;
    }

    private static int nX(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = ah.nW(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public ah nS(double d2) {
        this.spjLF = d2;
        return this;
    }

    public double nM() {
        return this.spjLF;
    }

    public ah nU(double d2) {
        this.UUSmJ = d2;
        return this;
    }

    private static CallSite nY(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ah" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public double nL() {
        return this.TCqpd;
    }

    public ah nT(double d2) {
        this.sZwZd = d2;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ah.class, "nX", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

