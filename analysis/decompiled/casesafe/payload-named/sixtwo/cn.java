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
import sixtwo.bH;
import sixtwo.cr;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.gb;
import sixtwo.jG;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lG;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;

public abstract class cn
extends cr
implements lG {
    protected cv ZpVra;
    protected boolean bwIta;
    private static final long pgClt;
    private static final long[] wCpej;
    private static final Integer[] Xqssr;
    private static final Map myifd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cn(int[] nArray, lf lf2) {
        long l2 = pgClt ^ 0x77040A6B4705L;
        super(nArray, lf2);
        int[] nArray2 = new int[cn.QV("x", (int)23009, (long)(0x474FABB0636BA18BL ^ l2))];
        nArray2[0] = (int)cn.QV("x", (int)26978, (long)(0x1C5781796C209100L ^ l2));
        nArray2[1] = (int)cn.QV("x", (int)31218, (long)(0x7C8DD25199500193L ^ l2));
        nArray2[2] = (int)cn.QV("x", (int)32758, (long)(0x7FFB613E7AF8798L ^ l2));
        nArray2[3] = (int)cn.QV("x", (int)28964, (long)(0x1D62AF6F61AD895AL ^ l2));
        nArray2[4] = (int)cn.QV("x", (int)7278, (long)(0x412B927AE3EDE40BL ^ l2));
        nArray2[5] = (int)cn.QV("x", (int)13797, (long)(0x314F08B9DA09CD98L ^ l2));
        nArray2[cn.QV("x", (int)3400, (long)(0x456DB8E536597537L ^ l2))] = (int)cn.QV("x", (int)25201, (long)(0x1B24F0B26829A19L ^ l2));
        nArray2[cn.QV("x", (int)28162, (long)(0x69449837CF911665L ^ l2))] = (int)cn.QV("x", (int)21034, (long)(0x29F568279D3D2A49L ^ l2));
        this.ZpVra = new cv(this, mr.clS(nArray2)).Tm(1).Tl(true);
    }

    public cn(int[] nArray, lf lf2, boolean bl2) {
        long l2 = pgClt ^ 0xB69293D7B57L;
        super(nArray, lf2);
        int[] nArray2 = new int[cn.QV("x", (int)12655, (long)(0x387AEF827113F559L ^ l2))];
        nArray2[0] = (int)cn.QV("x", (int)14497, (long)(0x57185EF84CF5FC8FL ^ l2));
        nArray2[1] = (int)cn.QV("x", (int)12842, (long)(0x31B1A88E8FC07611L ^ l2));
        nArray2[2] = (int)cn.QV("x", (int)7278, (long)(0x412BEE17C0BBD859L ^ l2));
        nArray2[3] = (int)cn.QV("x", (int)27754, (long)(0x5C478C9061392855L ^ l2));
        nArray2[4] = (int)cn.QV("x", (int)7278, (long)(0x412BEE17C0BBD859L ^ l2));
        nArray2[5] = (int)cn.QV("x", (int)30522, (long)(0x5B5D28D8E7ACB307L ^ l2));
        nArray2[cn.QV("x", (int)21400, (long)(0x7EF727E5143E17A6L ^ l2))] = (int)cn.QV("x", (int)1591, (long)(0x4ECE29BB3DDAC205L ^ l2));
        nArray2[cn.QV("x", (int)9741, (long)(0x2A4320222F64E234L ^ l2))] = (int)cn.QV("x", (int)29654, (long)(0x6A7C8964404BB7E2L ^ l2));
        this.ZpVra = new cv(this, mr.clS(nArray2)).Tm(1).Tl(true);
        this.bwIta = bl2;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cn.pgClt = gb.aYR(-7849409131986101059L, 8932095221979411149L, MethodHandles.lookup().lookupClass()).a(272723144141615L);
                cn.myifd = new HashMap<K, V>(13);
                var0 = cn.pgClt ^ 35969654478808L;
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
                var8_3 = new long[20];
                var5_4 = 0;
                var6_5 = "\u0086}\u0014\u0082>\u000ea\u00e5\u00fd\u00f1\u0010Q\u00aa\u00e2\u0019\u008c\u00aa0Q\u00f7\u00b7\u008d\u00ff\u00da\u001dX\u00f6\u00cc|\u00c3\u00ce\u0016\u0007Q#f\u008a\u00c5\u0000\u0014\u00f9\u00ba6\u00f6\u00eb\u00e1\u00ce\u00ee*\u00886\n\u00b5l\u00c0Z\u00afF\u008b\u00f4A~\u00f1\u009b1>\u00c2L\u00eb\u00e8$M\u00d7g\u00b2\u00ef\u00e3\u0085\b\u00bc\u0011\u00cb(u*\u00fa8J2\u0095\u0001%kV\u0091\u00a8\u00fc\u0016`VTC\u0018K\u00c8v\u0000\u00bdYC7\u00d21>\"\u00cf\u00b5\u0086\u001f\u0091\u0012~\u0002\u008c\u00de\u00a3\"\u000e\u00bdnHr,|\u009akD>\rT\u00cb\u00b4\\\u008c";
                var7_6 = "\u0086}\u0014\u0082>\u000ea\u00e5\u00fd\u00f1\u0010Q\u00aa\u00e2\u0019\u008c\u00aa0Q\u00f7\u00b7\u008d\u00ff\u00da\u001dX\u00f6\u00cc|\u00c3\u00ce\u0016\u0007Q#f\u008a\u00c5\u0000\u0014\u00f9\u00ba6\u00f6\u00eb\u00e1\u00ce\u00ee*\u00886\n\u00b5l\u00c0Z\u00afF\u008b\u00f4A~\u00f1\u009b1>\u00c2L\u00eb\u00e8$M\u00d7g\u00b2\u00ef\u00e3\u0085\b\u00bc\u0011\u00cb(u*\u00fa8J2\u0095\u0001%kV\u0091\u00a8\u00fc\u0016`VTC\u0018K\u00c8v\u0000\u00bdYC7\u00d21>\"\u00cf\u00b5\u0086\u001f\u0091\u0012~\u0002\u008c\u00de\u00a3\"\u000e\u00bdnHr,|\u009akD>\rT\u00cb\u00b4\\\u008c".length();
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
                    var6_5 = "\u00a5\u0005\u008f\u00db\u00a4<\u00eaW\u00b7:A\u00ba\u00a9\u00a4x\u0099";
                    var7_6 = "\u00a5\u0005\u008f\u00db\u00a4<\u00eaW\u00b7:A\u00ba\u00a9\u00a4x\u0099".length();
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
        cn.wCpej = var8_3;
        cn.Xqssr = new Integer[20];
    }

    private static int QU(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cn.QT(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @Override
    protected void NV(lC var1_1) {
        block30: {
            block38: {
                block29: {
                    block28: {
                        var2_2 = cn.pgClt ^ 77747976203884L;
                        var5_3 = lE.WTzbi.bYM(8.0f);
                        var4_4 = cr.SC();
                        var6_5 = lE.WTzbi.bYM(7.0f);
                        var7_6 = rD.dlM();
                        var8_7 = this.ormBS.dhj();
                        var9_8 = this.gILqY.dhj();
                        var10_9 = var7_6.bjb().coa(255.0f * var8_7);
                        var11_10 = var7_6.bjc().coa(255.0f * var8_7);
                        var12_11 = var11_10.cob(0.5f);
                        var13_12 = mG.QHTxQ.cob(0.3f * var9_8);
                        try {
                            try {
                                var1_1.ccY(this.toIeR - 5.0f, this.QWaAn - 5.0f, this.jTsqG + 10.0f, this.Xtjvx + 10.0f, 15.0f, ld.all(6.0f), var13_12);
                                var1_1.ccU(this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx, var8_7, var9_8);
                                jG.bHK(var1_1, this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx);
                                cn.zXCXX.bUa(var5_3);
                                v0 = this;
                                if (var4_4 == null) break block28;
                                if (!v0.bwIta) break block29;
                            }
                            catch (MatchException v1) {
                                throw cn.QS(v1);
                            }
                            v0 = this;
                        }
                        catch (MatchException v2) {
                            throw cn.QS(v2);
                        }
                    }
                    var14_13 = v0.toIeR + 7.0f;
                    if (var4_4 != null) break block38;
                }
                var15_14 = 8.0f;
                var16_15 = this.toIeR + 7.0f;
                var17_17 = this.QWaAn + jf.bAH(var15_14, this.Xtjvx);
                var1_1.cem(this.jAncU, var16_15, var17_17, var15_14, var11_10);
                var14_13 = this.toIeR + 7.0f + var15_14 + 7.0f;
            }
            var15_14 = this.QWaAn + jf.bAH(2.0f, this.Xtjvx);
            var16_16 = 0;
            for (cw var18_19 : this.ZpVra.Ts()) {
                block40: {
                    block39: {
                        block37: {
                            block36: {
                                block35: {
                                    block34: {
                                        block33: {
                                            block31: {
                                                block32: {
                                                    try {
                                                        try {
                                                            try {
                                                                if (var4_4 == null) break block30;
                                                                v3 = var18_19;
                                                                if (var4_4 == null) break block31;
                                                            }
                                                            catch (MatchException v4) {
                                                                throw cn.QS(v4);
                                                            }
                                                            if (v3.TC()) break block32;
                                                        }
                                                        catch (MatchException v5) {
                                                            throw cn.QS(v5);
                                                        }
                                                        if (var4_4 != null) continue;
                                                    }
                                                    catch (MatchException v6) {
                                                        throw cn.QS(v6);
                                                    }
                                                }
                                                v3 = var18_19;
                                            }
                                            var19_20 = (bH)v3;
                                            try {
                                                v7 = this.bwIta;
                                                if (var4_4 == null) break block33;
                                                if (v7 == 0) break block34;
                                            }
                                            catch (MatchException v8) {
                                                throw cn.QS(v8);
                                            }
                                            v7 = var16_16;
                                        }
                                        try {
                                            if (var4_4 == null) break block35;
                                            if (v7 != 0) break block34;
                                        }
                                        catch (MatchException v9) {
                                            throw cn.QS(v9);
                                        }
                                        v7 = 1;
                                        break block35;
                                    }
                                    v7 = 0;
                                }
                                var20_21 = v7;
                                try {
                                    if (var4_4 == null) break block36;
                                    if (var20_21 != 0) {
                                    }
                                    ** GOTO lbl93
                                }
                                catch (MatchException v10) {
                                    throw cn.QS(v10);
                                }
                                var21_22 = var14_13;
                                try {
                                    if (var4_4 != null) break block37;
lbl93:
                                    // 2 sources

                                    var1_1.cdc(var14_13, var15_14, var12_11);
                                }
                                catch (MatchException v11) {
                                    throw cn.QS(v11);
                                }
                            }
                            var21_22 = var14_13 + 2.0f + 7.0f;
                        }
                        var22_23 = this.QWaAn + jf.bAH(var5_3.cat(), this.Xtjvx);
                        var23_24 = var19_20.Mq();
                        var1_1.ces(var5_3, var23_24, var21_22, var22_23, var10_9);
                        var24_25 = var19_20.Mr();
                        if (var24_25.isBlank()) break block39;
                        var25_26 = var21_22 + var5_3.cap(var23_24) + 1.0f;
                        var26_27 = this.QWaAn + 7.0f;
                        var1_1.cer(var6_5, var24_25, var25_26, var26_27, var10_9.cob(0.5f));
                        var14_13 = var25_26 + var6_5.cao(var24_25) + 7.0f;
                        if (var4_4 != null) break block40;
                    }
                    var14_13 = var21_22 + var5_3.cap(var23_24) + 7.0f;
                }
                ++var16_16;
                if (var4_4 != null) continue;
            }
            cn.zXCXX.endBatch();
            jG.bHN();
            this.jTsqG = var14_13 - this.toIeR;
            this.iArvU.dhd(this.jTsqG);
        }
    }

    @Override
    public void LX(lC lC2) {
        this.Xtjvx = 18.0f;
        super.LX(lC2);
    }

    private static MatchException QS(MatchException matchException) {
        return matchException;
    }

    private static int QT(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x38D2;
        if (Xqssr[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = wCpej[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])myifd.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    myifd.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cn", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cn.Xqssr[n3] = n4;
        }
        return Xqssr[n3];
    }

    private static CallSite QV(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cn" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cn.class, "QU", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

