/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1657
 *  net.minecraft.class_241
 *  net.minecraft.class_408
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1657;
import net.minecraft.class_241;
import net.minecraft.class_408;
import sixtwo.av;
import sixtwo.bJ;
import sixtwo.bK;
import sixtwo.bL;
import sixtwo.bM;
import sixtwo.bN;
import sixtwo.bO;
import sixtwo.bP;
import sixtwo.bQ;
import sixtwo.bS;
import sixtwo.bT;
import sixtwo.bV;
import sixtwo.cr;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.iS;
import sixtwo.jG;
import sixtwo.jf;
import sixtwo.jg;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.le;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rm;

public class bU
extends cr {
    private final cv MAeMK;
    private final bT GExeP;
    private boolean fpgBD;
    private final rk poKgg;
    private final rk Elfgo;
    private final rk axCzv;
    private final rk eAzvd;
    private final ri DIVJZ;
    private final ri wMPQQ;
    private final mT nYkeq;
    private boolean lQdhK;
    private static final long wYIcR;
    private static final String wQtIy;
    private static final long[] xQGbF;
    private static final Integer[] xtGND;
    private static final Map jRiyL;
    private static final long cZlpv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bU() {
        long l = wYIcR ^ 0x68B0A94F8DA0L;
        int[] nArray = new int[bU.Oi("b", (int)8650, (long)(0x3A8F767F31C0956DL ^ l))];
        nArray[0] = (int)bU.Oi("b", (int)8379, (long)(0x48E685F834E5940CL ^ l));
        nArray[1] = (int)bU.Oi("b", (int)5437, (long)(0x36F52D4F92BFA194L ^ l));
        nArray[2] = (int)bU.Oi("b", (int)22953, (long)(0x7AAAE2906B2BED01L ^ l));
        nArray[3] = (int)bU.Oi("b", (int)32692, (long)(0x4C6B5B1068584B07L ^ l));
        nArray[4] = (int)bU.Oi("b", (int)6189, (long)(0x6EA32402CAFDAC82L ^ l));
        nArray[5] = (int)bU.Oi("b", (int)17234, (long)(0x56AF69777EFF7FCL ^ l));
        super(nArray, lf.IcQeZ);
        int[] nArray2 = new int[bU.Oi("b", (int)29686, (long)(0x23F4C59BAB8DC742L ^ l))];
        nArray2[0] = (int)bU.Oi("b", (int)28358, (long)(0x6929138483505A6DL ^ l));
        nArray2[1] = (int)bU.Oi("b", (int)15453, (long)(0x6A5805BA16BB08FBL ^ l));
        nArray2[2] = (int)bU.Oi("b", (int)23890, (long)(0x1244580BDC6DE9F3L ^ l));
        nArray2[3] = (int)bU.Oi("b", (int)21420, (long)(0x57FDDC74033D6709L ^ l));
        nArray2[4] = (int)bU.Oi("b", (int)27567, (long)(0x4C8E8464F25C5F05L ^ l));
        nArray2[5] = (int)bU.Oi("b", (int)32437, (long)(0x59E6587A15A8CA18L ^ l));
        nArray2[bU.Oi("b", (int)9997, (long)(0x6DADF7A0475313A9L ^ l))] = (int)bU.Oi("b", (int)17771, (long)(0x185B7C3AB5F7F1C7L ^ l));
        nArray2[bU.Oi("b", (int)19925, (long)(0x1A83DED295C0F963L ^ l))] = (int)bU.Oi("b", (int)32437, (long)(0x59E6587A15A8CA18L ^ l));
        this.MAeMK = new cv(this, mr.clS(nArray2));
        this.GExeP = new bT(48.0f, 15.0f);
        this.poKgg = new rk((int)bU.Oi("b", (int)25793, (long)(0x56D3BE49CBE6D062L ^ l))).dhs(rj.UPXqT);
        this.Elfgo = new rk((int)bU.Oi("b", (int)22691, (long)(0x39FC6F53D78A6C16L ^ l))).dhs(rj.NJlxm);
        this.axCzv = new rk((int)bU.Oi("b", (int)24535, (long)(0x5E8D5CBFBCA36B77L ^ l))).dhs(rj.NJlxm);
        this.eAzvd = new rk((int)bU.Oi("b", (int)24535, (long)(0x5E8D5CBFBCA36B77L ^ l))).dhs(rj.Zotpp);
        this.DIVJZ = new ri((int)bU.Oi("b", (int)31786, (long)(0x5F75FC5D3BEAC888L ^ l)), mG.QHTxQ).dfW(rj.ceYgU);
        this.wMPQQ = new ri((int)bU.Oi("b", (int)31786, (long)(0x5F75FC5D3BEAC888L ^ l)), mG.hoGuU).dfW(rj.Xmkbr);
        this.nYkeq = mT.cpz();
        new bK(this.MAeMK);
        new bN(this.MAeMK);
        new bQ(this.MAeMK);
        int n = bS.NR();
        try {
            new bO(this.MAeMK);
            new bM(this.MAeMK);
            new bJ(this.MAeMK);
            new bL(this.MAeMK);
            new bP(this.MAeMK);
            hF.bdI(this);
            if (n == 0) {
                iS.bwK("jhtNIc");
            }
        }
        catch (MatchException matchException) {
            throw bU.Oe(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block15: {
            block13: {
                block12: {
                    block14: {
                        bU.wYIcR = gb.aYR(8221421259207978705L, 5707684393802880957L, MethodHandles.lookup().lookupClass()).a(6772413656756L);
                        var16 = bU.wYIcR ^ 76202549229364L;
                        var18_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var16 >>> 56);
                        for (var19_2 = 1; var19_2 < 8; ++var19_2) {
                            v2 = v2;
                            v2[var19_2] = (byte)(var16 << var19_2 * 8 >>> 56);
                        }
                        break block14;
lbl13:
                        // 1 sources

                        while (true) {
                            continue;
                            break;
                        }
                    }
                    var18_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var20_3 = var18_1.doFinal("\u00af\u00f9\u00ca\u00bdmp\u00ac\u00c5".getBytes("ISO-8859-1"));
                    ** while (true)
                    bU.wQtIy = bU.Of(var20_3).intern();
                    bU.jRiyL = new HashMap<K, V>(13);
                    var5_4 = Cipher.getInstance("DES/CBC/NoPadding");
                    v3 = SecretKeyFactory.getInstance("DES");
                    v4 = new byte[8];
                    v5 = v4;
                    v4[0] = (byte)(var16 >>> 56);
                    for (var6_5 = 1; var6_5 < 8; ++var6_5) {
                        v5 = v5;
                        v5[var6_5] = (byte)(var16 << var6_5 * 8 >>> 56);
                    }
                    var5_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                    var11_6 = new long[21];
                    var8_7 = 0;
                    var9_8 = "\u00f5\u00c5@\u009f\u0083\u00eeW\u001a\u0013T\u00b7\u00aa\u00c5|\\8\u00ea\u00b3i{\u00c4\"\u000f\u0001\u00c8X\u00d9\u0086\f\u00e1\u0005\u00d7Iy\u00d7\u00bd\u0098e \u0095\u00cd\u00da\n\u008f\u0015\u0094\u000fk\u0010F\u00da\u0086\\\u0012\u0083aD\u00b4\u0001\u00aa\u00d3\u0080c|\u00c6\u0081\u0095\u00a7\u0089\u00db%C\u00d3Rg\u008fe\f!\u00df\u001f]@P\u00e6@\u008b\u00a8ds\u00afV\u001b\u0081\u00cc\u0083\u0007\u00ff%\u0005\u00f1\u00ec\u0097\u00ac[G\u00f7w\u0096\u00fd\u00a5{6c \u00d0\u00c1\u00c5\u00bd\u00bd\u00d8\u00a7\u0015\u00b4\u0091E\u00b0\u000f\u00b5\u0090\u0086\u00a1\u00d0\u000f\u0006\u0094\u00d5:l\u00a1\u00a8\u000b.\u008e\u00a1\u0095\u00bf#X\u00bc\u00c4b";
                    var10_9 = "\u00f5\u00c5@\u009f\u0083\u00eeW\u001a\u0013T\u00b7\u00aa\u00c5|\\8\u00ea\u00b3i{\u00c4\"\u000f\u0001\u00c8X\u00d9\u0086\f\u00e1\u0005\u00d7Iy\u00d7\u00bd\u0098e \u0095\u00cd\u00da\n\u008f\u0015\u0094\u000fk\u0010F\u00da\u0086\\\u0012\u0083aD\u00b4\u0001\u00aa\u00d3\u0080c|\u00c6\u0081\u0095\u00a7\u0089\u00db%C\u00d3Rg\u008fe\f!\u00df\u001f]@P\u00e6@\u008b\u00a8ds\u00afV\u001b\u0081\u00cc\u0083\u0007\u00ff%\u0005\u00f1\u00ec\u0097\u00ac[G\u00f7w\u0096\u00fd\u00a5{6c \u00d0\u00c1\u00c5\u00bd\u00bd\u00d8\u00a7\u0015\u00b4\u0091E\u00b0\u000f\u00b5\u0090\u0086\u00a1\u00d0\u000f\u0006\u0094\u00d5:l\u00a1\u00a8\u000b.\u008e\u00a1\u0095\u00bf#X\u00bc\u00c4b".length();
                    var7_10 = 0;
                    while (true) {
                        var12_11 = var9_8.substring(var7_10, var7_10 += 8).getBytes("ISO-8859-1");
                        v6 = var11_6;
                        v7 = var8_7++;
                        v8 = ((long)var12_11[0] & 255L) << 56 | ((long)var12_11[1] & 255L) << 48 | ((long)var12_11[2] & 255L) << 40 | ((long)var12_11[3] & 255L) << 32 | ((long)var12_11[4] & 255L) << 24 | ((long)var12_11[5] & 255L) << 16 | ((long)var12_11[6] & 255L) << 8 | (long)var12_11[7] & 255L;
                        v9 = -1;
                        break block12;
                        break;
                    }
lbl44:
                    // 1 sources

                    while (true) {
                        v6[v7] = v10;
                        if (var7_10 < var10_9) ** continue;
                        var9_8 = "f\u00ee\u00a1\u000f\u00e6\u00a0?\u00f4\u00fa\u00ce\u0007\u00ff\u00ca8\u008cB";
                        var10_9 = "f\u00ee\u00a1\u000f\u00e6\u00a0?\u00f4\u00fa\u00ce\u0007\u00ff\u00ca8\u008cB".length();
                        var7_10 = 0;
                        while (true) {
                            var12_11 = var9_8.substring(var7_10, var7_10 += 8).getBytes("ISO-8859-1");
                            v6 = var11_6;
                            v7 = var8_7++;
                            v8 = ((long)var12_11[0] & 255L) << 56 | ((long)var12_11[1] & 255L) << 48 | ((long)var12_11[2] & 255L) << 40 | ((long)var12_11[3] & 255L) << 32 | ((long)var12_11[4] & 255L) << 24 | ((long)var12_11[5] & 255L) << 16 | ((long)var12_11[6] & 255L) << 8 | (long)var12_11[7] & 255L;
                            v9 = 0;
                            break block12;
                            break;
                        }
                        break;
                    }
lbl57:
                    // 1 sources

                    while (true) {
                        v6[v7] = v10;
                        if (var7_10 < var10_9) ** continue;
                        break block13;
                        break;
                    }
                }
                var13_12 = v8;
                var15_13 = var5_4.doFinal(new byte[]{(byte)(var13_12 >>> 56), (byte)(var13_12 >>> 48), (byte)(var13_12 >>> 40), (byte)(var13_12 >>> 32), (byte)(var13_12 >>> 24), (byte)(var13_12 >>> 16), (byte)(var13_12 >>> 8), (byte)var13_12});
                v10 = ((long)var15_13[0] & 255L) << 56 | ((long)var15_13[1] & 255L) << 48 | ((long)var15_13[2] & 255L) << 40 | ((long)var15_13[3] & 255L) << 32 | ((long)var15_13[4] & 255L) << 24 | ((long)var15_13[5] & 255L) << 16 | ((long)var15_13[6] & 255L) << 8 | (long)var15_13[7] & 255L;
                switch (v9) {
                    default: {
                        ** continue;
                    }
                    ** case 0:
lbl70:
                    // 1 sources

                    ** continue;
                }
            }
            bU.xQGbF = var11_6;
            bU.xtGND = new Integer[21];
            var0_14 = Cipher.getInstance("DES/CBC/NoPadding");
            v11 = SecretKeyFactory.getInstance("DES");
            v12 = new byte[8];
            v13 = v12;
            v12[0] = (byte)(var16 >>> 56);
            for (var1_15 = 1; var1_15 < 8; ++var1_15) {
                v13 = v13;
                v13[var1_15] = (byte)(var16 << var1_15 * 8 >>> 56);
            }
            break block15;
lbl84:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_14.init(2, (Key)v11.generateSecret(new DESKeySpec(v13)), new IvParameterSpec(new byte[8]));
        var2_16 = -7674394883744559495L;
        var4_17 = var0_14.doFinal(new byte[]{(byte)(var2_16 >>> 56), (byte)(var2_16 >>> 48), (byte)(var2_16 >>> 40), (byte)(var2_16 >>> 32), (byte)(var2_16 >>> 24), (byte)(var2_16 >>> 16), (byte)(var2_16 >>> 8), (byte)var2_16});
        ** while (true)
        bU.cZlpv = ((long)var4_17[0] & 255L) << 56 | ((long)var4_17[1] & 255L) << 48 | ((long)var4_17[2] & 255L) << 40 | ((long)var4_17[3] & 255L) << 32 | ((long)var4_17[4] & 255L) << 24 | ((long)var4_17[5] & 255L) << 16 | ((long)var4_17[6] & 255L) << 8 | (long)var4_17[7] & 255L;
    }

    public List<bS> NY() {
        return this.MAeMK.Ts().stream().filter(cw2 -> {
            boolean bl;
            block8: {
                block7: {
                    int n;
                    block6: {
                        long l = wYIcR ^ 0x2D69A7F057CCL;
                        n = bS.NR();
                        try {
                            try {
                                bl = ((bS)cw2).MH();
                                if (n == 0) break block6;
                                if (!bl) break block7;
                            }
                            catch (MatchException matchException) {
                                throw bU.Oe(matchException);
                            }
                            bl = cw2.TC();
                        }
                        catch (MatchException matchException) {
                            throw bU.Oe(matchException);
                        }
                    }
                    try {
                        if (n == 0) break block8;
                        if (!bl) break block7;
                    }
                    catch (MatchException matchException) {
                        throw bU.Oe(matchException);
                    }
                    bl = true;
                    break block8;
                }
                bl = false;
            }
            return bl;
        }).map(cw2 -> (bS)cw2).toList().reversed();
    }

    /*
     * Unable to fully structure code
     */
    @Override
    protected void NV(lC var1_1) {
        block84: {
            block82: {
                block81: {
                    block79: {
                        block77: {
                            block78: {
                                block75: {
                                    block69: {
                                        block83: {
                                            block73: {
                                                block72: {
                                                    block68: {
                                                        block67: {
                                                            block65: {
                                                                block61: {
                                                                    block62: {
                                                                        block63: {
                                                                            block64: {
                                                                                var2_2 = bU.wYIcR ^ 111999782132640L;
                                                                                this.jTsqG = this.GExeP.WbmKd;
                                                                                this.Xtjvx = this.GExeP.Joctj;
                                                                                var5_3 = rD.dlM();
                                                                                var6_4 = ld.all(7.0f + 8.0f * this.poKgg.dhj());
                                                                                var7_5 = jf.bBa();
                                                                                var4_6 = bS.NR();
                                                                                try {
                                                                                    v0 = this;
                                                                                    if (var4_6 == 0) break block61;
                                                                                    if (!v0.nYkeq.cpC(bU.cZlpv)) break block62;
                                                                                }
                                                                                catch (MatchException v1) {
                                                                                    throw bU.Oe(v1);
                                                                                }
                                                                                var8_7 = (float)rD.dlmvG.method_22683().method_4489() / 2.0f;
                                                                                var9_9 = (float)rD.dlmvG.method_22683().method_4506() - (this.QWaAn + 5.0f);
                                                                                var10_12 = mG.cop(var8_7, var9_9);
                                                                                try {
                                                                                    v2 = this;
                                                                                    cfr_temp_0 = (var10_12.cor() + var10_12.cos() + var10_12.cot()) / 3.0f - 70.0f;
                                                                                    v3 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                                                    if (var4_6 == 0) break block63;
                                                                                    if (v3 <= 0) break block64;
                                                                                }
                                                                                catch (MatchException v4) {
                                                                                    throw bU.Oe(v4);
                                                                                }
                                                                                v3 = (float)true;
                                                                                break block63;
                                                                            }
                                                                            v3 = (float)false;
                                                                        }
                                                                        v2.lQdhK = v3;
                                                                        this.nYkeq.cpB();
                                                                    }
                                                                    v0 = this;
                                                                }
                                                                try {
                                                                    v5 = v0.wMPQQ;
                                                                    v6 = this.lQdhK != false ? mG.QHTxQ : mG.hoGuU;
                                                                }
                                                                catch (MatchException v7) {
                                                                    throw bU.Oe(v7);
                                                                }
                                                                v5.dfT(v6);
                                                                var8_8 = this.wMPQQ.dfU().coa(255.0f * (1.0f - this.poKgg.dhj()));
                                                                if (rD.dlmvG.field_1724 == null) break block68;
                                                                var9_10 = lE.WTzbi.bYM(7.0f);
                                                                try {
                                                                    block66: {
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    var1_1.cez(var9_10, var7_5, this.toIeR - lE.WTzbi.bYM(9.0f).cao(var7_5) - 4.0f, this.QWaAn + 5.0f, var8_8);
                                                                                    if (var4_6 == 0) break block65;
                                                                                    if (rD.dlmvG.method_47392()) break block66;
                                                                                }
                                                                                catch (MatchException v8) {
                                                                                    throw bU.Oe(v8);
                                                                                }
                                                                                v9 = rD.dlmvG.field_1724;
                                                                                if (var4_6 == 0) break block67;
                                                                            }
                                                                            catch (MatchException v10) {
                                                                                throw bU.Oe(v10);
                                                                            }
                                                                            if (v9.field_3944.method_2871(rD.dlmvG.field_1724.method_5667()) == null) {
                                                                            }
                                                                            ** GOTO lbl75
                                                                        }
                                                                        catch (MatchException v11) {
                                                                            throw bU.Oe(v11);
                                                                        }
                                                                    }
                                                                    var1_1.cem(lf.knMYk, this.toIeR + this.jTsqG + 8.0f, this.QWaAn + 2.5f, 10.0f, var8_8);
                                                                }
                                                                catch (MatchException v12) {
                                                                    throw bU.Oe(v12);
                                                                }
                                                            }
                                                            try {
                                                                if (var4_6 != 0) break block68;
lbl75:
                                                                // 2 sources

                                                                this.eAzvd.dhc(jf.bAG(var1_1, this.toIeR + this.jTsqG + 4.0f + 4.0f * this.eAzvd.dhj(), this.QWaAn + 5.0f, 12.800000190734863, 7.0));
                                                                v9 = rD.dlmvG.field_1724;
                                                            }
                                                            catch (MatchException v13) {
                                                                throw bU.Oe(v13);
                                                            }
                                                        }
                                                        var10_13 = jg.bBx((class_1657)v9);
                                                        var1_1.cez(var9_10, var10_13 + bU.wQtIy, this.toIeR + this.jTsqG + 4.0f + 4.0f * this.eAzvd.dhj(), this.QWaAn + 5.0f, var8_8.cob(this.eAzvd.dhj()));
                                                        le.bXO(var1_1, this.toIeR + this.jTsqG + 9.0f + 4.0f * this.eAzvd.dhj(), this.QWaAn + 5.0f, 1.0f, var10_13, var8_8.cob(1.0f - this.eAzvd.dhj()));
                                                    }
                                                    var9_11 = this.NX();
                                                    this.DIVJZ.dfT(var9_11.MI());
                                                    var10_14 = 2.0f;
                                                    var11_15 = var5_3.bjd().coc(this.DIVJZ.dfU(), 0.05f).coa(191.25f);
                                                    var1_1.cej(this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx, var10_14, var6_4, 1.0f);
                                                    var1_1.cdm(this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx, var10_14, var6_4, var11_15);
                                                    for (cw var13_17 : this.MAeMK.Ts()) {
                                                        block71: {
                                                            block70: {
                                                                try {
                                                                    try {
                                                                        v14 = ((bS)var13_17).NP();
                                                                        v15 = var9_11;
                                                                        if (var4_6 == 0) break block69;
                                                                        if (v15 != var13_17) break block70;
                                                                    }
                                                                    catch (MatchException v16) {
                                                                        throw bU.Oe(v16);
                                                                    }
                                                                    v17 = 1.0f;
                                                                    break block71;
                                                                }
                                                                catch (MatchException v18) {
                                                                    throw bU.Oe(v18);
                                                                }
                                                            }
                                                            v17 = 0.0f;
                                                        }
                                                        v14.dhd(v17);
                                                        if (var4_6 != 0) continue;
                                                    }
                                                    try {
                                                        try {
                                                            jG.bHK(var1_1, this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx);
                                                            v19 = var9_11;
                                                            if (var4_6 == 0) break block72;
                                                            if (v19.NP().dhj() != 1.0f) break block73;
                                                        }
                                                        catch (MatchException v20) {
                                                            throw bU.Oe(v20);
                                                        }
                                                        v19 = var9_11;
                                                    }
                                                    catch (MatchException v21) {
                                                        throw bU.Oe(v21);
                                                    }
                                                }
                                                v19.MG(var1_1, var5_3);
                                                if (var4_6 != 0) break block83;
                                            }
                                            for (cw var13_17 : this.MAeMK.Ts()) {
                                                block74: {
                                                    block76: {
                                                        try {
                                                            try {
                                                                try {
                                                                    v22 = (bS)var13_17;
                                                                    if (var4_6 == 0) break block74;
                                                                    cfr_temp_1 = v22.NP().dhj() - 0.0f;
                                                                    v23 = cfr_temp_1 == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                                                                    if (var4_6 == 0) break block75;
                                                                }
                                                                catch (MatchException v24) {
                                                                    throw bU.Oe(v24);
                                                                }
                                                                if (v23 > 0) break block76;
                                                            }
                                                            catch (MatchException v25) {
                                                                throw bU.Oe(v25);
                                                            }
                                                            if (var4_6 != 0) continue;
                                                        }
                                                        catch (MatchException v26) {
                                                            throw bU.Oe(v26);
                                                        }
                                                    }
                                                    v22 = (bS)var13_17;
                                                }
                                                v22.NN(var1_1, var5_3);
                                                if (var4_6 != 0) continue;
                                            }
                                        }
                                        jG.bHN();
                                        this.Elfgo.dhd(var9_11.fGWTH.WbmKd);
                                        v14 = this.axCzv;
                                        v15 = var9_11;
                                    }
                                    v14.dhd(v15.fGWTH.Joctj);
                                    this.GExeP.NU(this.Elfgo.dhj(), this.axCzv.dhj());
                                    this.poKgg.dhc(this.fpgBD);
                                    v23 = var9_11 instanceof bV;
                                }
                                try {
                                    try {
                                        if (var4_6 == 0) break block77;
                                        if (v23 != 0) break block78;
                                    }
                                    catch (MatchException v27) {
                                        throw bU.Oe(v27);
                                    }
                                    this.fpgBD = false;
                                }
                                catch (MatchException v28) {
                                    throw bU.Oe(v28);
                                }
                            }
                            v23 = rD.dlmvG.field_1755 instanceof class_408;
                        }
                        try {
                            try {
                                block80: {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    if (var4_6 == 0) break block79;
                                                    if (v23 != 0) break block80;
                                                }
                                                catch (MatchException v29) {
                                                    throw bU.Oe(v29);
                                                }
                                                v23 = rD.dlmvG.field_1755 instanceof av;
                                                if (var4_6 == 0) break block79;
                                            }
                                            catch (MatchException v30) {
                                                throw bU.Oe(v30);
                                            }
                                            if (v23 != 0) break block80;
                                        }
                                        catch (MatchException v31) {
                                            throw bU.Oe(v31);
                                        }
                                        if (rD.dlmvG.field_1724 != null) break block81;
                                    }
                                    catch (MatchException v32) {
                                        throw bU.Oe(v32);
                                    }
                                }
                                v33 = this;
                                if (var4_6 == 0) break block82;
                            }
                            catch (MatchException v34) {
                                throw bU.Oe(v34);
                            }
                            v23 = (int)v33.vCMYc;
                        }
                        catch (MatchException v35) {
                            throw bU.Oe(v35);
                        }
                    }
                    if (v23 == 0) break block84;
                }
                v33 = this;
            }
            v33.fpgBD = false;
        }
        try {
            if (iS.bwL() == null) {
                bS.NQ(++var4_6);
            }
        }
        catch (MatchException v36) {
            throw bU.Oe(v36);
        }
    }

    @Override
    public void LX(lC lC2) {
        super.LX(lC2);
        this.jTsqG = this.GExeP.WbmKd;
        this.Xtjvx = this.GExeP.Joctj;
        class_241 class_2412 = rm.dip();
        this.toIeR = class_2412.field_1343 / 2.0f - this.RU() / 2.0f;
        this.QWaAn = 7.0f;
    }

    public boolean NW(double d, double d2, mA mA2) {
        boolean bl;
        block23: {
            block18: {
                int n;
                block19: {
                    block20: {
                        block22: {
                            long l = wYIcR ^ 0x3E3A9A7B18C2L;
                            n = bS.NS();
                            try {
                                block21: {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    if (mA2 != mA.sCBUa) break block18;
                                                    bl = this.fpgBD;
                                                    if (n != 0) break block19;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bU.Oe(matchException);
                                                }
                                                if (!bl) break block20;
                                            }
                                            catch (MatchException matchException) {
                                                throw bU.Oe(matchException);
                                            }
                                            if (jf.bAE(d, d2, this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx)) break block21;
                                        }
                                        catch (MatchException matchException) {
                                            throw bU.Oe(matchException);
                                        }
                                        this.fpgBD = false;
                                        if (n == 0) break block22;
                                    }
                                    catch (MatchException matchException) {
                                        throw bU.Oe(matchException);
                                    }
                                }
                                this.NX().Ne(d, d2, mA2);
                            }
                            catch (MatchException matchException) {
                                throw bU.Oe(matchException);
                            }
                        }
                        return true;
                    }
                    bl = jf.bAE(d, d2, this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx);
                }
                try {
                    try {
                        try {
                            try {
                                if (n != 0) break block23;
                                if (!bl) break block18;
                            }
                            catch (MatchException matchException) {
                                throw bU.Oe(matchException);
                            }
                            bl = this.NX() instanceof bV;
                            if (n != 0) break block23;
                        }
                        catch (MatchException matchException) {
                            throw bU.Oe(matchException);
                        }
                        if (!bl) break block18;
                    }
                    catch (MatchException matchException) {
                        throw bU.Oe(matchException);
                    }
                    this.fpgBD = true;
                    return true;
                }
                catch (MatchException matchException) {
                    throw bU.Oe(matchException);
                }
            }
            bl = false;
        }
        return bl;
    }

    public bT NZ() {
        return this.GExeP;
    }

    private static int Oh(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = bU.Og(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static CallSite Oi(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bU" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public bS NX() {
        return this.NY().getLast();
    }

    private static MatchException Oe(MatchException matchException) {
        return matchException;
    }

    public rk Ob() {
        return this.poKgg;
    }

    private static int Og(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4B73;
        if (xtGND[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = xQGbF[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])jRiyL.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    jRiyL.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bU", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bU.xtGND[n2] = n3;
        }
        return xtGND[n2];
    }

    private static String Of(byte[] byArray) {
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

    public boolean Oa() {
        return this.fpgBD;
    }

    @Override
    public boolean onMouseClicked(double d, double d2, mA mA2) {
        boolean bl;
        block4: {
            block5: {
                long l = wYIcR ^ 0x6EAF0BEC2988L;
                int n = bS.NR();
                try {
                    try {
                        bl = this.NW(d, d2, mA2);
                        if (n == 0) break block4;
                        if (!bl) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bU.Oe(matchException);
                    }
                    return true;
                }
                catch (MatchException matchException) {
                    throw bU.Oe(matchException);
                }
            }
            bl = super.onMouseClicked(d, d2, mA2);
        }
        return bl;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bU.class, "Oh", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
