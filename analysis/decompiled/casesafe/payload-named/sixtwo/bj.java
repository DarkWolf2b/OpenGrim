/*
 * Decompiled with CFR 0.152.
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.concurrent.CompletableFuture;
import java.util.function.Function;
import java.util.function.Predicate;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.Q;
import sixtwo.aA;
import sixtwo.aW;
import sixtwo.aX;
import sixtwo.aY;
import sixtwo.aj;
import sixtwo.bg;
import sixtwo.bl;
import sixtwo.cN;
import sixtwo.gb;
import sixtwo.iM;
import sixtwo.iO;
import sixtwo.iQ;
import sixtwo.iS;
import sixtwo.jF;
import sixtwo.jf;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.ob;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class bj
extends aA {
    private aX bowKs;
    private iO VBBbm;
    private boolean hzXMQ;
    private boolean spRbd;
    private final mT MjYjp;
    private final ri jCGIU;
    private final rk mynHs;
    private final rk cciMk;
    private final rk zIquG;
    private final List<Q> MNfVN;
    private static final long rxqEL;
    private static final String[] iKrJf;
    private static final String[] usfNW;
    private static final Map PAMXr;
    private static final long[] AJxRJ;
    private static final Integer[] boWdj;
    private static final Map Uzhog;
    private static final long BiNEt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public boolean DH() {
        return this.spRbd;
    }

    private void DC() {
        rD.dlN().buY(this.VBBbm.bub()).thenAccept(bj::DT);
    }

    /*
     * Unable to fully structure code
     */
    public bj(iO var1_1) {
        block7: {
            block6: {
                var2_2 = bj.rxqEL ^ 140580541078712L;
                super();
                this.hzXMQ = false;
                this.spRbd = false;
                this.MjYjp = mT.cpA();
                this.mynHs = new rk((int)bj.Ek("v", (int)23467, (long)(2566303972136420090L ^ var2_2))).dhs(rj.UPXqT);
                this.cciMk = new rk((int)bj.Ek("v", (int)24466, (long)(359708986952320712L ^ var2_2))).dhs(rj.UPXqT);
                this.zIquG = new rk((int)bj.Ek("v", (int)23974, (long)(8763467546796262644L ^ var2_2)), 0.75f).dhs(rj.yiIHY);
                this.MNfVN = new ArrayList<Q>();
                this.VBBbm = var1_1;
                var4_3 = bg.Dd();
                this.BcpIo = 115.0f;
                this.WjISQ = 36.0f;
                var5_4 = mG.UhgnI;
                try {
                    v0 = var1_1.btW();
                    if (var4_3 != 0) break block6;
                    if (v0) {
                    }
                    ** GOTO lbl26
                }
                catch (MatchException v1) {
                    throw bj.Ed(v1);
                }
                var5_4 = jk.jEkxo;
                try {
                    if (var4_3 == 0) break block7;
lbl26:
                    // 2 sources

                    v0 = var1_1.btV();
                }
                catch (MatchException v2) {
                    throw bj.Ed(v2);
                }
            }
            if (v0) {
                var5_4 = jk.tSRYI;
            }
        }
        this.jCGIU = new ri((int)bj.Ek("v", (int)24466, (long)(359708986952320712L ^ var2_2)), var5_4);
        this.Dz();
        rD.dlP().bsm(var1_1.bug());
    }

    /*
     * Unable to fully structure code
     */
    static {
        block24: {
            block23: {
                block22: {
                    block21: {
                        block20: {
                            bj.rxqEL = gb.aYR(3076549665549014300L, 288091292817125813L, MethodHandles.lookup().lookupClass()).a(280097577542423L);
                            bj.PAMXr = new HashMap<K, V>(13);
                            var16 = bj.rxqEL ^ 22047531095032L;
                            var18_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                            v0 = SecretKeyFactory.getInstance("DES");
                            v1 = new byte[8];
                            v2 = v1;
                            v1[0] = (byte)(var16 >>> 56);
                            for (var19_2 = 1; var19_2 < 8; ++var19_2) {
                                v2 = v2;
                                v2[var19_2] = (byte)(var16 << var19_2 * 8 >>> 56);
                            }
                            var18_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                            var25_3 = new String[4];
                            var23_4 = 0;
                            var22_5 = "\u00f36*\u00ab+\u0015\u001f\u00bf\u00b2\u0010\u0017N\u0087\u00cdLxO\u0080B\f\u0002x\u00f2z\u00f5.{6\u001e\u0019S\u00e9\u00db\u00c3\u0087\u00f8\u00f4\u00be\u0093CR\n\u0091\u00deL\u00bd&\u00fb\u00d1\u00cbX\u0018\u00822\u00abJ Y&\u00a1\u00d0\u0019\u00d2\u00d2G\u0013NN\u00c5\u00d0,\u00c4*\u00d0\n\u0088\u00c6+\u008dJ\u00a9\u00fa\u00f8\u0004C\u00ba\u0082\u00ff\u000f";
                            var24_6 = "\u00f36*\u00ab+\u0015\u001f\u00bf\u00b2\u0010\u0017N\u0087\u00cdLxO\u0080B\f\u0002x\u00f2z\u00f5.{6\u001e\u0019S\u00e9\u00db\u00c3\u0087\u00f8\u00f4\u00be\u0093CR\n\u0091\u00deL\u00bd&\u00fb\u00d1\u00cbX\u0018\u00822\u00abJ Y&\u00a1\u00d0\u0019\u00d2\u00d2G\u0013NN\u00c5\u00d0,\u00c4*\u00d0\n\u0088\u00c6+\u008dJ\u00a9\u00fa\u00f8\u0004C\u00ba\u0082\u00ff\u000f".length();
                            var21_7 = 56;
                            var20_8 = -1;
lbl20:
                            // 2 sources

                            while (true) {
                                v3 = ++var20_8;
                                v4 = var22_5.substring(v3, v3 + var21_7);
                                v5 = -1;
                                break block20;
                                break;
                            }
lbl25:
                            // 1 sources

                            while (true) {
                                var25_3[var23_4++] = bj.Ee(var26_9).intern();
                                if ((var20_8 += var21_7) < var24_6) {
                                    var21_7 = var22_5.charAt(var20_8);
                                    ** continue;
                                }
                                var22_5 = "s\u0098S\u00dc\u00f0\u0081\u00ac\u00b1\u00f7\u0005\u00fe\u00cd\u00ae\u00c6\u00f6\u00e7\u0097\u001a^\u00c1?\u00ace\u00eaX'\u00aa(\u00f3/\u001d\u00f0U2n@u\u008a\u00c2\u00e58Pb\u00b7\u00df4KJ\u0018<\u00ca\u00b5\u0000{\u0014c\u00e9]\u00c4 \u00c0\u00bc\u00d8VJ)\u001f^%\u0006\u0012\u00b5\u0019";
                                var24_6 = "s\u0098S\u00dc\u00f0\u0081\u00ac\u00b1\u00f7\u0005\u00fe\u00cd\u00ae\u00c6\u00f6\u00e7\u0097\u001a^\u00c1?\u00ace\u00eaX'\u00aa(\u00f3/\u001d\u00f0U2n@u\u008a\u00c2\u00e58Pb\u00b7\u00df4KJ\u0018<\u00ca\u00b5\u0000{\u0014c\u00e9]\u00c4 \u00c0\u00bc\u00d8VJ)\u001f^%\u0006\u0012\u00b5\u0019".length();
                                var21_7 = 48;
                                var20_8 = -1;
lbl34:
                                // 2 sources

                                while (true) {
                                    v6 = ++var20_8;
                                    v4 = var22_5.substring(v6, v6 + var21_7);
                                    v5 = 0;
                                    break block20;
                                    break;
                                }
                                break;
                            }
lbl39:
                            // 1 sources

                            while (true) {
                                var25_3[var23_4++] = bj.Ee(var26_9).intern();
                                if ((var20_8 += var21_7) < var24_6) {
                                    var21_7 = var22_5.charAt(var20_8);
                                    ** continue;
                                }
                                break block21;
                                break;
                            }
                        }
                        var26_9 = var18_1.doFinal(v4.getBytes("ISO-8859-1"));
                        switch (v5) {
                            default: {
                                ** continue;
                            }
                            ** case 0:
lbl51:
                            // 1 sources

                            ** continue;
                        }
                    }
                    bj.iKrJf = var25_3;
                    bj.usfNW = new String[4];
                    bj.Uzhog = new HashMap<K, V>(13);
                    var5_10 = Cipher.getInstance("DES/CBC/NoPadding");
                    v7 = SecretKeyFactory.getInstance("DES");
                    v8 = new byte[8];
                    v9 = v8;
                    v8[0] = (byte)(var16 >>> 56);
                    for (var6_11 = 1; var6_11 < 8; ++var6_11) {
                        v9 = v9;
                        v9[var6_11] = (byte)(var16 << var6_11 * 8 >>> 56);
                    }
                    var5_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                    var11_12 = new long[21];
                    var8_13 = 0;
                    var9_14 = "t\u0003C\u00d1\u00a6\u0096\b|F9\u0014\u00ffW\u00c6=G\u001f\u001d\u00bb}j$\u00d9!rq\u00c5\u00ea\u00f3\u000b\u00eb\u00ae\u00dd\u00e0\u00e3\u0003\u00a4>\u00bfs\u00a9P\u00ff\u00cc\u00b5\u001f\f\u00dc[\u00b1\u0002\u0085?\u00ec\u00b6C3F\u00f6\u0006\u00b4\u00e4\u0001=\u00e1\u001a\n\nU\u00a0C\u00edL\u009b\u00bd\u00ed \u00b8r\u0099a\u0010J\u00ee\u000e\u0086K\u00c0y\u00d2\u00acr\u009f\u0087\u0011\u0011\u00c4\u001c\u00deCz\u00b6g\u00e0\u00de\u00db\u009e\\$\u000e\u009b&{\u008f\u00f9\n\u0082\u00d7\u00fb\u008bu\u00031;\b2\u0000\u00c3=nV)\u0093:7\u0096\u00e2VVl\u00e7qK\u00d0\u00e4T\u0090\u0092\u00bf\u00a5~\u00d1";
                    var10_15 = "t\u0003C\u00d1\u00a6\u0096\b|F9\u0014\u00ffW\u00c6=G\u001f\u001d\u00bb}j$\u00d9!rq\u00c5\u00ea\u00f3\u000b\u00eb\u00ae\u00dd\u00e0\u00e3\u0003\u00a4>\u00bfs\u00a9P\u00ff\u00cc\u00b5\u001f\f\u00dc[\u00b1\u0002\u0085?\u00ec\u00b6C3F\u00f6\u0006\u00b4\u00e4\u0001=\u00e1\u001a\n\nU\u00a0C\u00edL\u009b\u00bd\u00ed \u00b8r\u0099a\u0010J\u00ee\u000e\u0086K\u00c0y\u00d2\u00acr\u009f\u0087\u0011\u0011\u00c4\u001c\u00deCz\u00b6g\u00e0\u00de\u00db\u009e\\$\u000e\u009b&{\u008f\u00f9\n\u0082\u00d7\u00fb\u008bu\u00031;\b2\u0000\u00c3=nV)\u0093:7\u0096\u00e2VVl\u00e7qK\u00d0\u00e4T\u0090\u0092\u00bf\u00a5~\u00d1".length();
                    var7_16 = 0;
                    while (true) {
                        var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                        v10 = var11_12;
                        v11 = var8_13++;
                        v12 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                        v13 = -1;
                        break block22;
                        break;
                    }
lbl78:
                    // 1 sources

                    while (true) {
                        v10[v11] = v14;
                        if (var7_16 < var10_15) ** continue;
                        var9_14 = "\u00fc\u00dd\u00cb\u00c8\u00b3\u00ad\u0015\u008f\u00aa\u00abW\u00e4\u00de\u0096Tw";
                        var10_15 = "\u00fc\u00dd\u00cb\u00c8\u00b3\u00ad\u0015\u008f\u00aa\u00abW\u00e4\u00de\u0096Tw".length();
                        var7_16 = 0;
                        while (true) {
                            var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                            v10 = var11_12;
                            v11 = var8_13++;
                            v12 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                            v13 = 0;
                            break block22;
                            break;
                        }
                        break;
                    }
lbl91:
                    // 1 sources

                    while (true) {
                        v10[v11] = v14;
                        if (var7_16 < var10_15) ** continue;
                        break block23;
                        break;
                    }
                }
                var13_18 = v12;
                var15_19 = var5_10.doFinal(new byte[]{(byte)(var13_18 >>> 56), (byte)(var13_18 >>> 48), (byte)(var13_18 >>> 40), (byte)(var13_18 >>> 32), (byte)(var13_18 >>> 24), (byte)(var13_18 >>> 16), (byte)(var13_18 >>> 8), (byte)var13_18});
                v14 = ((long)var15_19[0] & 255L) << 56 | ((long)var15_19[1] & 255L) << 48 | ((long)var15_19[2] & 255L) << 40 | ((long)var15_19[3] & 255L) << 32 | ((long)var15_19[4] & 255L) << 24 | ((long)var15_19[5] & 255L) << 16 | ((long)var15_19[6] & 255L) << 8 | (long)var15_19[7] & 255L;
                switch (v13) {
                    default: {
                        ** continue;
                    }
                    ** case 0:
lbl104:
                    // 1 sources

                    ** continue;
                }
            }
            bj.AJxRJ = var11_12;
            bj.boWdj = new Integer[21];
            var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
            v15 = SecretKeyFactory.getInstance("DES");
            v16 = new byte[8];
            v17 = v16;
            v16[0] = (byte)(var16 >>> 56);
            for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                v17 = v17;
                v17[var1_21] = (byte)(var16 << var1_21 * 8 >>> 56);
            }
            break block24;
lbl118:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_20.init(2, (Key)v15.generateSecret(new DESKeySpec(v17)), new IvParameterSpec(new byte[8]));
        var2_22 = 6387438058091079061L;
        var4_23 = var0_20.doFinal(new byte[]{(byte)(var2_22 >>> 56), (byte)(var2_22 >>> 48), (byte)(var2_22 >>> 40), (byte)(var2_22 >>> 32), (byte)(var2_22 >>> 24), (byte)(var2_22 >>> 16), (byte)(var2_22 >>> 8), (byte)var2_22});
        ** while (true)
        bj.BiNEt = ((long)var4_23[0] & 255L) << 56 | ((long)var4_23[1] & 255L) << 48 | ((long)var4_23[2] & 255L) << 40 | ((long)var4_23[3] & 255L) << 32 | ((long)var4_23[4] & 255L) << 24 | ((long)var4_23[5] & 255L) << 16 | ((long)var4_23[6] & 255L) << 8 | (long)var4_23[7] & 255L;
    }

    @Override
    public boolean dk(double d2, double d3, mA mA2) {
        boolean bl2;
        block11: {
            block12: {
                int n2;
                block13: {
                    long l2 = rxqEL ^ 0x23FCCB7B731EL;
                    n2 = bg.De();
                    try {
                        bl2 = this.tg(d2, d3);
                        if (n2 == 0) break block11;
                        if (!bl2) break block12;
                    }
                    catch (MatchException matchException) {
                        throw bj.Ed(matchException);
                    }
                    for (Q q2 : this.MNfVN) {
                        block15: {
                            boolean bl3;
                            block14: {
                                try {
                                    try {
                                        bl2 = q2.dk(d2, d3, mA2);
                                        if (n2 == 0) break block13;
                                        if (n2 == 0) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw bj.Ed(matchException);
                                    }
                                    if (!bl2) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw bj.Ed(matchException);
                                }
                                bl3 = true;
                            }
                            return bl3;
                        }
                        if (n2 != 0) continue;
                    }
                    bl2 = this.MjYjp.cpC(BiNEt);
                }
                try {
                    try {
                        if (n2 == 0) break block11;
                        if (!bl2) break block12;
                    }
                    catch (MatchException matchException) {
                        throw bj.Ed(matchException);
                    }
                    this.DA();
                    this.MjYjp.cpB();
                    return true;
                }
                catch (MatchException matchException) {
                    throw bj.Ed(matchException);
                }
            }
            bl2 = super.dk(d2, d3, mA2);
        }
        return bl2;
    }

    public aX DE() {
        return this.bowKs;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    protected void bV(lC var1_1) {
        block38: {
            block37: {
                block36: {
                    block35: {
                        block34: {
                            block33: {
                                block32: {
                                    block31: {
                                        block29: {
                                            block30: {
                                                var2_2 = bj.rxqEL ^ 138989500803034L;
                                                v0 = bg.De();
                                                this.cciMk.dhc(this.tg(var1_1.cff(), var1_1.cfg()));
                                                var4_3 = v0;
                                                try {
                                                    v1 = this.mynHs;
                                                    v2 = this.hzXMQ;
                                                    if (var4_3 == 0) break block29;
                                                    if (v2) break block30;
                                                }
                                                catch (MatchException v3) {
                                                    throw bj.Ed(v3);
                                                }
                                                v2 = true;
                                                break block29;
                                            }
                                            v2 = false;
                                        }
                                        v1.dhc(v2);
                                        var5_4 = this.mynHs.dhj();
                                        var6_5 = this.CtPwV.bje().cob(0.8f).cob(var5_4);
                                        var1_1.cdm(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ, 5.0f, ld.M, var6_5);
                                        var7_6 = 5.0f;
                                        var8_7 = this.WjISQ - var7_6 * 2.0f;
                                        var9_8 = this.MCnYt + var7_6;
                                        var10_9 = this.pNyTQ + var7_6;
                                        var11_10 = rD.dlP().bso(this.VBBbm.bug(), ob.cBv((String)bj.Eh("h", (int)1965, (long)(3902771955228555046L ^ var2_2))));
                                        var12_11 = jF.bHw()[3];
                                        try {
                                            try {
                                                if (var4_3 == 0) break block31;
                                                if (var11_10 == null) break block32;
                                            }
                                            catch (MatchException v4) {
                                                throw bj.Ed(v4);
                                            }
                                            jF.bHz(1.0f, 1.0f, 1.0f, Math.min(1.0f, var12_11 * var5_4));
                                            var1_1.cee(var11_10, var9_8, var10_9, var8_7, var8_7, ld.all(4.0f));
                                        }
                                        catch (MatchException v5) {
                                            throw bj.Ed(v5);
                                        }
                                    }
                                    jF.bHz(1.0f, 1.0f, 1.0f, var12_11);
                                }
                                var13_12 = this.CtPwV.bjb().cob(var12_11 * 0.75f + 0.25f * this.cciMk.dhj()).cob(var5_4);
                                var14_13 = this.MCnYt + var7_6 + var8_7 + 7.0f;
                                var15_14 = this.pNyTQ + var7_6;
                                var16_15 = lE.WTzbi.bYM(7.0f);
                                var1_1.ceI(var16_15, this.VBBbm.buc(), var14_13, var15_14, var13_12, 0.7f, 0.99f, this.BcpIo - var8_7 - 7.0f - var7_6 * 2.0f - 7.0f);
                                var17_16 = this.CtPwV.bjb().cob(0.5f).cob(var5_4);
                                var18_17 = lE.joxgd.bYM(6.0f);
                                var19_18 = var15_14 + var16_15.cat() + 3.0f;
                                var1_1.ceH(var18_17, jf.bAS(this.VBBbm.bul()), var14_13, var19_18, var17_16, 0.7f, 0.99f, this.BcpIo - var8_7 - 7.0f - var7_6 * 2.0f);
                                var20_19 = this.MCnYt + var7_6 + var8_7 + 7.0f;
                                var21_20 = var10_9 + var8_7 - 8.0f;
                                for (Q var23_22 : this.MNfVN) {
                                    var23_22.jt(var5_4);
                                    var23_22.sW(var20_19, var21_20);
                                    var23_22.su(var1_1);
                                    var20_19 += var23_22.kN() + 5.0f;
                                    if (var4_3 != 0) continue;
                                }
                                var22_21 = mG.UhgnI;
                                try {
                                    v6 = this.VBBbm.btW();
                                    if (var4_3 == 0) break block33;
                                    if (v6) {
                                    }
                                    ** GOTO lbl75
                                }
                                catch (MatchException v7) {
                                    throw bj.Ed(v7);
                                }
                                var22_21 = jk.jEkxo;
                                try {
                                    try {
                                        if (var4_3 != 0) break block34;
lbl75:
                                        // 2 sources

                                        v8 = this;
                                        if (var4_3 == 0) break block35;
                                    }
                                    catch (MatchException v9) {
                                        throw bj.Ed(v9);
                                    }
                                    v6 = v8.VBBbm.btV();
                                }
                                catch (MatchException v10) {
                                    throw bj.Ed(v10);
                                }
                            }
                            if (v6) {
                                var22_21 = jk.tSRYI;
                            }
                        }
                        v8 = this;
                    }
                    v8.jCGIU.dfT((mG)var22_21);
                    var23_23 = 5.0f;
                    var1_1.cdg(this.tc() - var7_6 - var23_23, this.pNyTQ + var7_6, var23_23, var23_23, ld.all(var23_23 / 2.0f), this.jCGIU.dfU().cob(var5_4));
                    var24_24 = 10.0f;
                    var25_25 = this.zIquG.dhd(var24_24);
                    var26_26 = this.jCGIU.dfU();
                    try {
                        if (var4_3 == 0) break block36;
                        if (!(var25_25 >= 6.0f)) break block37;
                    }
                    catch (MatchException v11) {
                        throw bj.Ed(v11);
                    }
                    var26_26 = var26_26.cob((var24_24 - var25_25) / 4.0f).cob(var5_4);
                }
                if (var4_3 != 0) break block38;
            }
            var26_26 = var26_26.cob(var5_4);
        }
        try {
            if (var25_25 == var24_24) {
                this.zIquG.dhe(0.75f);
            }
        }
        catch (MatchException v12) {
            throw bj.Ed(v12);
        }
        try {
            var1_1.ccY(this.tc() - var7_6 - var23_23, this.pNyTQ + var7_6, var23_23, var23_23, var25_25, ld.all(var23_23 / 2.0f), var26_26);
            if (iS.bwL() == null) {
                bg.Dc(++var4_3);
            }
        }
        catch (MatchException v13) {
            throw bj.Ed(v13);
        }
    }

    public void DA() {
        CompletableFuture<iM> completableFuture = rD.dlN().bvb(this.VBBbm.bub());
        CompletableFuture<int[]> completableFuture2 = this.VBBbm.btS();
        completableFuture.thenCombine(completableFuture2, this::DW);
    }

    public bj DR(boolean bl2) {
        this.spRbd = bl2;
        return this;
    }

    public boolean DG() {
        return this.hzXMQ;
    }

    public bj DQ(boolean bl2) {
        this.hzXMQ = bl2;
        return this;
    }

    public rk DK() {
        return this.mynHs;
    }

    public aX Dy() {
        long l2 = rxqEL ^ 0x628E64612F09L;
        Iterator<aj> iterator = bl.Ex().manager().aY(aj.class).iterator();
        int n2 = bg.De();
        while (iterator.hasNext()) {
            block10: {
                aX aX2;
                block11: {
                    aj aj2;
                    block9: {
                        aj aj3 = iterator.next();
                        try {
                            try {
                                aj2 = aj3;
                                if (n2 == 0) break block9;
                                if (!(aj2 instanceof aX)) break block10;
                            }
                            catch (MatchException matchException) {
                                throw bj.Ed(matchException);
                            }
                            aj2 = aj3;
                        }
                        catch (MatchException matchException) {
                            throw bj.Ed(matchException);
                        }
                    }
                    aX aX3 = (aX)aj2;
                    try {
                        try {
                            aX2 = aX3;
                            if (n2 == 0) break block11;
                            if (!aX2.zU().bub().equals(this.VBBbm.bub())) break block10;
                        }
                        catch (MatchException matchException) {
                            throw bj.Ed(matchException);
                        }
                        aX2 = aX3;
                    }
                    catch (MatchException matchException) {
                        throw bj.Ed(matchException);
                    }
                }
                return aX2;
            }
            if (n2 != 0) continue;
        }
        return null;
    }

    public iO DF() {
        return this.VBBbm;
    }

    private void DD() {
        iQ iQ2 = rD.dlN();
        CompletableFuture<iM> completableFuture = iQ2.bvb(this.VBBbm.bub());
        completableFuture.thenAccept(iM2 -> {
            long l2 = rxqEL ^ 0x789AF18DFA9L;
            try {
                if (iM2 != null) {
                    iQ2.bvf((iM)iM2);
                }
            }
            catch (MatchException matchException) {
                throw bj.Ed(matchException);
            }
        });
    }

    private static /* synthetic */ aY DY(aj aj2) {
        return (aY)aj2;
    }

    private static String Ee(byte[] byArray) {
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

    private static String Ef(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2B4;
        if (usfNW[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])PAMXr.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    PAMXr.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bj", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = iKrJf[n3].getBytes("ISO-8859-1");
            bj.usfNW[n3] = bj.Ee(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return usfNW[n3];
    }

    private /* synthetic */ boolean DX(aY aY2) {
        return aY2.zU().bub().equals(this.VBBbm.bub());
    }

    private static Object Eg(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = bj.Ef(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static MatchException Ed(MatchException matchException) {
        return matchException;
    }

    private static int Ei(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5001;
        if (boWdj[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = AJxRJ[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Uzhog.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Uzhog.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bj", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bj.boWdj[n3] = n4;
        }
        return boWdj[n3];
    }

    private static int Ej(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bj.Ei(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private void DB(Q q2) {
        boolean bl2;
        Q q3;
        boolean bl3;
        block2: {
            block3: {
                long l2 = rxqEL ^ 0x608396AE4338L;
                bl3 = q2.jC();
                int n2 = bg.De();
                try {
                    q3 = q2;
                    bl2 = bl3;
                    if (n2 == 0) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw bj.Ed(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        q3.jh(bl2);
        iQ iQ2 = rD.dlN();
        ((CompletableFuture)iQ2.bve(this.VBBbm.bub()).thenAccept(iM2 -> {
            long l2 = rxqEL ^ 0x625E55DD1D14L;
            try {
                if (iM2 != null) {
                    q2.jh(this.VBBbm.btV());
                }
            }
            catch (MatchException matchException) {
                throw bj.Ed(matchException);
            }
        })).exceptionally(throwable -> {
            q2.jg(bl3);
            return null;
        });
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private /* synthetic */ Object DW(iM var1_1, int[] var2_2) {
        block17: {
            block19: {
                block18: {
                    block15: {
                        block16: {
                            var3_3 = bj.rxqEL ^ 91549203165262L;
                            var5_4 = bg.Dd();
                            try {
                                if (var1_1 != null && var2_2 != null) {
                                }
                                ** GOTO lbl34
                            }
                            catch (MatchException v0) {
                                throw bj.Ed(v0);
                            }
                            var6_5 = bl.Ex().manager().aY(aj.class);
                            var7_6 = var6_5.stream().filter((Predicate<aj>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, DZ(sixtwo.aj ), (Lsixtwo/aj;)Z)()).map((Function<aj, aY>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Ljava/lang/Object;, DY(sixtwo.aj ), (Lsixtwo/aj;)Lsixtwo/aY;)()).anyMatch((Predicate<aY>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, DX(sixtwo.aY ), (Lsixtwo/aY;)Z)((bj)this));
                            try {
                                try {
                                    v1 = var7_6;
                                    if (var5_4 != 0) break block15;
                                    if (!v1) break block16;
                                }
                                catch (MatchException v2) {
                                    throw bj.Ed(v2);
                                }
                                return null;
                            }
                            catch (MatchException v3) {
                                throw bj.Ed(v3);
                            }
                        }
                        v1 = var1_1.bua();
                    }
                    if (!v1) break block18;
                    var8_7 /* !! */  = new aW(2.0f, var2_2, var1_1);
                    if (var5_4 == 0) break block19;
                }
                var8_7 /* !! */  = new aX(2.0f, var2_2, var1_1);
            }
            try {
                bl.Ex().addPopupComponent(var8_7 /* !! */ );
                if (var5_4 == 0) break block17;
lbl34:
                // 2 sources

                cN.XI((String)bj.Eh("h", (int)23014, (long)(2658055291640921848L ^ var3_3)));
            }
            catch (MatchException v4) {
                throw bj.Ed(v4);
            }
        }
        return null;
    }

    private static CallSite Ek(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bj" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void Dz() {
        long l2 = rxqEL ^ 0x20E9A51F1957L;
        Q q3 = (Q)new Q().io(lf.dBvvZ).in(lf.jfwAa).is(7.0f).jb(this::DB).jm(jk.tSRYI).jl(jk.tSRYI).jg(true).jh(this.VBBbm.btV()).sX(8.0f, 8.0f);
        this.MNfVN.add(q3);
        int[] nArray = new int[bj.Ek("v", (int)7182, (long)(0x7D65A12B7E9740BCL ^ l2))];
        nArray[0] = (int)bj.Ek("v", (int)9956, (long)(0x12A40C725382FA5DL ^ l2));
        nArray[1] = (int)bj.Ek("v", (int)4767, (long)(0x1679E1CFE162CE3DL ^ l2));
        nArray[2] = (int)bj.Ek("v", (int)24840, (long)(0x1E9425EDAA053DB4L ^ l2));
        nArray[3] = (int)bj.Ek("v", (int)28211, (long)(0x104FAAC8EBA0B284L ^ l2));
        nArray[4] = (int)bj.Ek("v", (int)21686, (long)(0x5562FECBB188080EL ^ l2));
        nArray[5] = (int)bj.Ek("v", (int)15631, (long)(0x6FB12D1B5F0C61ABL ^ l2));
        nArray[bj.Ek("v", (int)10221, (long)(0x6F91423B5E897B59L ^ l2))] = (int)bj.Ek("v", (int)16993, (long)(0x3AB5D38CE9709EC0L ^ l2));
        Q q4 = (Q)((Q)new Q().io(lf.JIteU).is(7.0f).jb(q2 -> this.DA()).jc(nArray)).sX(8.0f, 8.0f);
        this.MNfVN.add(q4);
        Q q5 = (Q)((Q)new Q().io(lf.BSuOE).is(7.0f).jb(q2 -> this.DD()).jc(new int[]{(int)bj.Ek("v", (int)337, (long)(0x707A5D23ED095DEAL ^ l2)), (int)bj.Ek("v", (int)31195, (long)(0x203C6C9414B12568L ^ l2)), (int)bj.Ek("v", (int)27172, (long)(0x5C55EBA223D0B694L ^ l2)), (int)bj.Ek("v", (int)14914, (long)(0x64BF53B0F706E6E2L ^ l2))})).sX(11.0f, 8.0f);
        this.MNfVN.add(q5);
        int[] nArray2 = new int[bj.Ek("v", (int)1812, (long)(0x5652235BFB3F5BA5L ^ l2))];
        nArray2[0] = (int)bj.Ek("v", (int)18034, (long)(0x22FCEEAA76211AD1L ^ l2));
        nArray2[1] = (int)bj.Ek("v", (int)24244, (long)(0x10375D4E439820EL ^ l2));
        nArray2[2] = (int)bj.Ek("v", (int)27689, (long)(0x57C473A8E11E309FL ^ l2));
        nArray2[3] = (int)bj.Ek("v", (int)24244, (long)(0x10375D4E439820EL ^ l2));
        nArray2[4] = (int)bj.Ek("v", (int)13236, (long)(0x53C32965C7416F0BL ^ l2));
        nArray2[5] = (int)bj.Ek("v", (int)24244, (long)(0x10375D4E439820EL ^ l2));
        Q q6 = (Q)((Q)new Q().io(lf.JHGge).is(7.0f).jb(q2 -> this.DC()).jc(nArray2)).sX(8.0f, 8.0f);
        this.MNfVN.add(q6);
    }

    /*
     * Unable to fully structure code
     */
    private static /* synthetic */ void DT(Boolean var0) {
        block9: {
            block8: {
                var1_1 = bj.rxqEL ^ 116713977184121L;
                var3_2 = bg.Dd();
                try {
                    try {
                        if (var3_2 != 0) break block8;
                        if (var0.booleanValue()) {
                        }
                        ** GOTO lbl18
                    }
                    catch (MatchException v0) {
                        throw bj.Ed(v0);
                    }
                    cN.XG((String)bj.Eh("h", (int)3289, (long)(4052640332121335027L ^ var1_1)));
                }
                catch (MatchException v1) {
                    throw bj.Ed(v1);
                }
            }
            try {
                if (var3_2 == 0) break block9;
lbl18:
                // 2 sources

                cN.XI((String)bj.Eh("h", (int)17589, (long)(3245285261714893982L ^ var1_1)));
            }
            catch (MatchException v2) {
                throw bj.Ed(v2);
            }
        }
    }

    public mT DI() {
        return this.MjYjp;
    }

    public ri DJ() {
        return this.jCGIU;
    }

    public rk DL() {
        return this.cciMk;
    }

    public rk DM() {
        return this.zIquG;
    }

    public List<Q> DN() {
        return this.MNfVN;
    }

    public bj DO(aX aX2) {
        this.bowKs = aX2;
        return this;
    }

    private static CallSite Eh(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bj" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public bj DP(iO iO2) {
        this.VBBbm = iO2;
        return this;
    }

    private static /* synthetic */ boolean DZ(aj aj2) {
        return aj2 instanceof aY;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bj.class, "Ej", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(bj.class, "Eg", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

