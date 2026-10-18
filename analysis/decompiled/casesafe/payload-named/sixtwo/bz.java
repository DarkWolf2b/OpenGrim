/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.Screen
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.CallSite;
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
import java.util.Objects;
import java.util.Optional;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.gui.screen.Screen;
import net.minecraft.util.math.Vec2f;
import sixtwo.ad;
import sixtwo.ah;
import sixtwo.aj;
import sixtwo.ap;
import sixtwo.aq;
import sixtwo.av;
import sixtwo.aw;
import sixtwo.az;
import sixtwo.bd;
import sixtwo.bl;
import sixtwo.br;
import sixtwo.bt;
import sixtwo.bw;
import sixtwo.by;
import sixtwo.bz$sh;
import sixtwo.cN;
import sixtwo.g;
import sixtwo.gb;
import sixtwo.iD;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.iy;
import sixtwo.jF;
import sixtwo.jG;
import sixtwo.jH;
import sixtwo.k;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.mA;
import sixtwo.mZ;
import sixtwo.mu;
import sixtwo.nf;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rm;

public class bz
extends av
implements aw {
    private static bz EjcFr;
    private final lc DZWUG;
    private final lc aZGpn;
    private final lc mbChM;
    private final bw HDtRm;
    private final aq vhydZ;
    private final aq rzpmv;
    private final ah dimez;
    private final mu<by> RHgUi;
    private final g bvQae;
    private final az DNlcF;
    private iy LlNRn;
    private boolean OwOuM;
    private boolean aXfUv;
    private iy LhWtM;
    private nf KLjmC;
    private final rk OjRjG;
    private final rk PrMWO;
    private final rk wgnWc;
    private static String bTgYE;
    private static final long kleqM;
    private static final String[] BuVTR;
    private static final String[] OcNPP;
    private static final Map nMXOH;
    private static final long[] BMxWP;
    private static final Integer[] lmFlx;
    private static final Map ugCiQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bz() {
        long l2 = kleqM ^ 0x123561A66D49L;
        this.dimez = new ah();
        this.RHgUi = new mu();
        this.bvQae = new g();
        this.OjRjG = new rk((int)bz.Lp("t", (int)24533, (long)(0x6CCA0F798A0D53C4L ^ l2))).dhs(rj.yiIHY);
        this.PrMWO = new rk((int)bz.Lp("t", (int)30600, (long)(0x1C29370BC276FB9BL ^ l2))).dhs(rj.yiIHY);
        this.wgnWc = new rk((int)bz.Lp("t", (int)18830, (long)(0x35486FA930BAC598L ^ l2))).dhs(rj.UPXqT);
        EjcFr = this;
        this.bvQae.aV(() -> this.sg());
        float f2 = 402.0f;
        float f3 = 220.0f;
        Vec2f vec2f = rm.diq();
        this.DZWUG = new lc(vec2f.x / 2.0f - f2 / 2.0f, vec2f.y / 2.0f - f3 / 2.0f, f2, f3);
        this.aZGpn = new lc(this.DZWUG.bXF(), this.DZWUG.bXA() + 7.0f, f2, 30.0f);
        this.mbChM = new lc(this.DZWUG.bXF() + 8.0f, this.DZWUG.bXG() + 8.0f, this.DZWUG.bXH() - 16.0f, this.DZWUG.bXI() - 16.0f);
        this.vhydZ = new aq((String)((Object)bz.Lm("c", (int)12435, (long)(0x4471CA09396F6025L ^ l2))), (String)((Object)bz.Lm("c", (int)9397, (long)(0x6DD8C95CD03EF404L ^ l2))));
        String string = bz.Lh();
        this.rzpmv = new aq((String)((Object)bz.Lm("c", (int)25044, (long)(0x3FDDCAC3DD52B16FL ^ l2))), (String)((Object)bz.Lm("c", (int)29576, (long)(0x2809E51B0BE22338L ^ l2))));
        this.HDtRm = new bw();
        this.DNlcF = new bz$sh(this);
        this.DNlcF.sI(this.HDtRm);
        String string2 = string;
        try {
            this.bvQae.aE(this.DNlcF);
            if (string2 == null) {
                iS.bwK("HdjxFc");
            }
        }
        catch (MatchException matchException) {
            throw bz.Li(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        bz.kleqM = gb.aYR(-6241896568748446855L, -7788375777216042359L, MethodHandles.lookup().lookupClass()).a(171208799013154L);
                        bz.nMXOH = new HashMap<K, V>(13);
                        var11 = bz.kleqM ^ 89972296966990L;
                        bz.Lg("SC1U6b");
                        var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var11 >>> 56);
                        for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                            v2 = v2;
                            v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                        }
                        var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var20_3 = new String[9];
                        var18_4 = 0;
                        var17_5 = "\u00d17\u00cf\u00b8\u00c2\u00e5\u001c\u0000\u0094\u00b1]+d\u00f0\u0003\u00c3\u00f1OO9\u00fc\u00ab\u000b\u00ac\u00a4\u00e5\u00a8\u00ac'-P\u0003\u008a\u00b7\u0019!\u00bdO\u0010L(\u0012\t\u00977\u0002\u00f5\u00acA<\u00d1\u0094\u00fa4\u00bc\u00b8$]\u00aet\u00d2\u0085\u00c7\u0095\u008f\u0087\u0010\u001f\u00bd_\u0091\u00a5;\u00a9\u00f9]h\u0018\u00c8N\u0080X\u0010(\u009c{g`}e\u00ae>\u00c0o\u001f\u00d5\u0002\u00af\u00c70\u00a0E6\u00ac\u00af1\u00a3]\u0082\u0016\u00b3\u00fd\u00f0[\u00c4Z\u0091\u0096\u0081\u00eb\t\b\u00cf\u0007\u0086\u00cd3!\u00d9\u00bb-\u00e4\u0081.y\u0083d\u0016[\u00cb\u001e6\u0097\u00d9\u00e8\u00e1h4\u00ec\u0089':MI\u000b\u00b1-j\u00e8\u000e\u00feb\u009c\u00d1\u00bbS\u0099\u00a3qfP\u00a3\u00f7*\u0091&\u00e5\u00cb1kt\u00c3'\u00a7\u00c6D\u00d8\u00bfC\u00ee=\u00d1/lx`/[\u00ca\u009e\\\u00c8\u00b6}\u00c6\u00a3\u00f6\fg\u00be'\u0088H\u00e8v\u001e\u0089\u00c3\u00a1\u00d3az\u0013\u00cc\u00b1\u00f7\u00fc\u00d5\u00c6H2\u00d1\u00a7\u009b\u00d5\u00f3X)\u00bf\u008c\u009bzp(\u00b9;\u00b7\u00c5\u0006\u00b5u@\u000f\u0088\u00db\u009f\u00fa\u00daq\u00a3\u0087\u00aen\u00c8\u0013/\u00baY\u000b\u00f8\u000b\u000e\u0087\u00ca\u00bb\u0082\u00cf\u009cCG\u00e3JP\\\u0001\u00dd\u0002(\u00887\u0082\u0016\u001e\u00f5N\\\u00939\u00e03\bq\u009b\u009c\u008e\u0090E4acr\u0014\u00b6\u00b5\u00bf]8\u009e\u000f\u0015\u00d8\u00b3\u00fb\u00fb\u00d7\u008d\u00c2\u00dd\u009bCk\u0097h\u00bc\u008ap\u00c2\u009bXh\u001e\u001c\u009b\u00a4\u00b7\u00d9\u0085\u0007^\u00d5\u00bd\u0006}\u009d) 2\u0096\u00d8\u00bfw\u00b9\u001a*\u00d8\u0016z\u00ef\u00c7Iet\u008b 1[4I|\u00df\u00f6+\u00d7\u008a\u00b8\u00c6\u001eGlG<\u008c\u0095\u00a4\u0087\u0006.\u008d\u00b1F\u00d4\u00b9\u00e4^\u0019\u00c7";
                        var19_6 = "\u00d17\u00cf\u00b8\u00c2\u00e5\u001c\u0000\u0094\u00b1]+d\u00f0\u0003\u00c3\u00f1OO9\u00fc\u00ab\u000b\u00ac\u00a4\u00e5\u00a8\u00ac'-P\u0003\u008a\u00b7\u0019!\u00bdO\u0010L(\u0012\t\u00977\u0002\u00f5\u00acA<\u00d1\u0094\u00fa4\u00bc\u00b8$]\u00aet\u00d2\u0085\u00c7\u0095\u008f\u0087\u0010\u001f\u00bd_\u0091\u00a5;\u00a9\u00f9]h\u0018\u00c8N\u0080X\u0010(\u009c{g`}e\u00ae>\u00c0o\u001f\u00d5\u0002\u00af\u00c70\u00a0E6\u00ac\u00af1\u00a3]\u0082\u0016\u00b3\u00fd\u00f0[\u00c4Z\u0091\u0096\u0081\u00eb\t\b\u00cf\u0007\u0086\u00cd3!\u00d9\u00bb-\u00e4\u0081.y\u0083d\u0016[\u00cb\u001e6\u0097\u00d9\u00e8\u00e1h4\u00ec\u0089':MI\u000b\u00b1-j\u00e8\u000e\u00feb\u009c\u00d1\u00bbS\u0099\u00a3qfP\u00a3\u00f7*\u0091&\u00e5\u00cb1kt\u00c3'\u00a7\u00c6D\u00d8\u00bfC\u00ee=\u00d1/lx`/[\u00ca\u009e\\\u00c8\u00b6}\u00c6\u00a3\u00f6\fg\u00be'\u0088H\u00e8v\u001e\u0089\u00c3\u00a1\u00d3az\u0013\u00cc\u00b1\u00f7\u00fc\u00d5\u00c6H2\u00d1\u00a7\u009b\u00d5\u00f3X)\u00bf\u008c\u009bzp(\u00b9;\u00b7\u00c5\u0006\u00b5u@\u000f\u0088\u00db\u009f\u00fa\u00daq\u00a3\u0087\u00aen\u00c8\u0013/\u00baY\u000b\u00f8\u000b\u000e\u0087\u00ca\u00bb\u0082\u00cf\u009cCG\u00e3JP\\\u0001\u00dd\u0002(\u00887\u0082\u0016\u001e\u00f5N\\\u00939\u00e03\bq\u009b\u009c\u008e\u0090E4acr\u0014\u00b6\u00b5\u00bf]8\u009e\u000f\u0015\u00d8\u00b3\u00fb\u00fb\u00d7\u008d\u00c2\u00dd\u009bCk\u0097h\u00bc\u008ap\u00c2\u009bXh\u001e\u001c\u009b\u00a4\u00b7\u00d9\u0085\u0007^\u00d5\u00bd\u0006}\u009d) 2\u0096\u00d8\u00bfw\u00b9\u001a*\u00d8\u0016z\u00ef\u00c7Iet\u008b 1[4I|\u00df\u00f6+\u00d7\u008a\u00b8\u00c6\u001eGlG<\u008c\u0095\u00a4\u0087\u0006.\u008d\u00b1F\u00d4\u00b9\u00e4^\u0019\u00c7".length();
                        var16_7 = 40;
                        var15_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = bz.Lj(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "\u00e1S\u0017\u00f3\u00efn\u0000\u009bS\u0099\u00c2N\u00a1\u00d4^\u00a74g\u00ffE\u008c\"\u0003OJ\u00aeK\u0086\u00ea\u00cfF\u0093\u00acq\u00c7\u0091\u00b4B@\u001a@u\u00c4\u00d55\u00a9\u00b37\u00a0\n\u0017\u0091\u00ee\u00b9\u001f\u0005U\u0080\u000fG\b\nNj\u00db\u00eb\u0093\u00bc\u0002\u00d2\u0096\u00bb.\t*\b[O\u00d2\u00d1a\u0005\u00d9\u00be\n\u0019k'\u00bf S\u0019~\u00edh\u00baw\r\u009eB\u0089\u00c6\u00ab/0";
                            var19_6 = "\u00e1S\u0017\u00f3\u00efn\u0000\u009bS\u0099\u00c2N\u00a1\u00d4^\u00a74g\u00ffE\u008c\"\u0003OJ\u00aeK\u0086\u00ea\u00cfF\u0093\u00acq\u00c7\u0091\u00b4B@\u001a@u\u00c4\u00d55\u00a9\u00b37\u00a0\n\u0017\u0091\u00ee\u00b9\u001f\u0005U\u0080\u000fG\b\nNj\u00db\u00eb\u0093\u00bc\u0002\u00d2\u0096\u00bb.\t*\b[O\u00d2\u00d1a\u0005\u00d9\u00be\n\u0019k'\u00bf S\u0019~\u00edh\u00baw\r\u009eB\u0089\u00c6\u00ab/0".length();
                            var16_7 = 40;
                            var15_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = bz.Lj(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var21_9 = var13_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl52:
                        // 1 sources

                        ** continue;
                    }
                }
                bz.BuVTR = var20_3;
                bz.OcNPP = new String[9];
                bz.ugCiQ = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[6];
                var3_13 = 0;
                var4_14 = "\u0085\u00e0\u00db,\u0019\u0016\u00c8\u00ee\u00c4\u00aa]\u0099\u0098\u00b9\u00d5\u00fa\u00fe\u008b4_q\u0005\u0090s\u0001\u00d5R#\u00a1\u009b}P";
                var5_15 = "\u0085\u00e0\u00db,\u0019\u0016\u00c8\u00ee\u00c4\u00aa]\u0099\u0098\u00b9\u00d5\u00fa\u00fe\u008b4_q\u0005\u0090s\u0001\u00d5R#\u00a1\u009b}P".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v10 = var6_12;
                    v11 = var3_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block20;
                    break;
                }
lbl79:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u00f24\u009fB\u00e9;i\u00ff\u009e\u001f\u0005\u00d6/\u00be\u00e4d";
                    var5_15 = "\u00f24\u009fB\u00e9;i\u00ff\u009e\u001f\u0005\u00d6/\u00be\u00e4d".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v10 = var6_12;
                        v11 = var3_13++;
                        v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v13 = 0;
                        break block20;
                        break;
                    }
                    break;
                }
lbl92:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    break block21;
                    break;
                }
            }
            var8_18 = v12;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v14 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v13) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl105:
                // 1 sources

                ** continue;
            }
        }
        bz.BMxWP = var6_12;
        bz.lmFlx = new Integer[6];
    }

    @Override
    protected Vec2f n() {
        float f2 = this.DZWUG.bXI() + 7.0f + this.aZGpn.bXI();
        return new Vec2f(this.DZWUG.bXH() + 14.0f, f2 + 14.0f);
    }

    @Override
    public void m(lC lC2) {
        rj rj2;
        rk rk2;
        int n2;
        block24: {
            block22: {
                String string;
                block23: {
                    block21: {
                        rj rj3;
                        rk rk3;
                        boolean bl2;
                        rk rk4;
                        block19: {
                            block20: {
                                long l2 = kleqM ^ 0x3DFD2B48824DL;
                                string = bz.Lh();
                                try {
                                    rk4 = this.Weytw;
                                    bl2 = this.VWsmm;
                                    if (string == null) break block19;
                                    if (bl2) break block20;
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                                bl2 = true;
                                break block19;
                            }
                            bl2 = false;
                        }
                        try {
                            rk4.dhc(bl2);
                            rk3 = this.Weytw;
                            rj3 = !this.VWsmm ? rj.XzDkv : rj.AYqck;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                        try {
                            try {
                                rk3.dhs(rj3);
                                n2 = this.VWsmm;
                                if (string == null) break block21;
                                if (n2 != false) break block22;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                            n2 = this.Weytw.dho();
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                    }
                    try {
                        try {
                            if (string == null) break block23;
                            if (n2 == false) break block22;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                        float f2 = this.Weytw.dhj() - 1.0f;
                        n2 = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                }
                try {
                    if (string == null) break block24;
                    if (n2 < 0) break block22;
                }
                catch (MatchException matchException) {
                    throw bz.Li(matchException);
                }
                n2 = 1;
                break block24;
            }
            n2 = false;
        }
        boolean bl3 = n2;
        try {
            rk2 = this.OjRjG;
            rj2 = !this.VWsmm ? rj.JbGQS : rj.AYqck;
        }
        catch (MatchException matchException) {
            throw bz.Li(matchException);
        }
        try {
            rk2.dhs(rj2);
            this.OjRjG.dhc(bl3);
            this.Ko();
            this.DNlcF.sY(Math.min(this.DZWUG.bXF(), this.aZGpn.bXF()), Math.min(this.DZWUG.bXG(), this.aZGpn.bXG()), Math.max(this.DZWUG.bXz(), this.aZGpn.bXz()) - Math.min(this.DZWUG.bXF(), this.aZGpn.bXF()), Math.max(this.DZWUG.bXA(), this.aZGpn.bXA()) - Math.min(this.DZWUG.bXG(), this.aZGpn.bXG()));
            this.bvQae.aL(lC2);
            if (iS.bwL() == null) {
                bz.Lg("wHV4ab");
            }
        }
        catch (MatchException matchException) {
            throw bz.Li(matchException);
        }
    }

    @Override
    public g manager() {
        return this.bvQae;
    }

    private static Object Ll(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = bz.Lk(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static CallSite Lm(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bz" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int Lo(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bz.Ln(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public iy KR() {
        return this.LlNRn;
    }

    public rk KW() {
        return this.OjRjG;
    }

    public void KC() {
        this.KD(null);
    }

    public void KB(iy iy2) {
        block11: {
            long l2 = kleqM ^ 0x2CB03B603A62L;
            Iterator<aj> iterator = this.Kz().iterator();
            String string = bz.Lh();
            while (iterator.hasNext()) {
                block12: {
                    aj aj2 = iterator.next();
                    try {
                        aj aj3;
                        block13: {
                            try {
                                try {
                                    try {
                                        try {
                                            if (string == null) break block11;
                                            aj3 = aj2;
                                            if (string == null) break block12;
                                        }
                                        catch (MatchException matchException) {
                                            throw bz.Li(matchException);
                                        }
                                        if (aj3 instanceof bt) break block13;
                                    }
                                    catch (MatchException matchException) {
                                        throw bz.Li(matchException);
                                    }
                                    aj3 = aj2;
                                    if (string == null) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                                if (!(aj3 instanceof br)) break block12;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                        }
                        aj3 = aj2.oj(false);
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                }
                if (string != null) continue;
            }
            this.aXfUv = false;
            this.KLjmC = null;
            this.OwOuM = true;
            this.LhWtM = iy2;
        }
    }

    public static void KE() {
        long l2 = kleqM ^ 0x5EC48BA3191BL;
        try {
            if (rD.dlmvG.world == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bz.Li(matchException);
        }
        bz bz2 = bz.KH();
        bz2.VWsmm = false;
        bz2.sj().dhg();
        rD.dlmvG.setScreen((Screen)bz2);
    }

    public void KG() {
        long l2 = kleqM ^ 0x73A5DFA5E16FL;
        this.VWsmm = true;
        this.OwOuM = false;
        this.aXfUv = false;
        this.LhWtM = null;
        this.KLjmC = null;
        Iterator<aj> iterator = this.bvQae.aY(aj.class).iterator();
        String string = bz.Lh();
        while (iterator.hasNext()) {
            aj aj2 = iterator.next();
            aj2.oj(false);
            if (string != null) continue;
        }
    }

    public static void KF() {
        bz.KH().KG();
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public void KA() {
        block14: {
            var1_1 = bz.kleqM ^ 7640148903930L;
            var4_2 = false;
            var3_3 = bz.Lh();
            for (aj var6_5 : this.Kz()) {
                block16: {
                    block15: {
                        try {
                            try {
                                v0 = var6_5 instanceof bt;
                                if (var3_3 == null) break block14;
                                if (var3_3 == null) break block15;
                            }
                            catch (MatchException v1) {
                                throw bz.Li(v1);
                            }
                            if (v0) {
                            }
                            ** GOTO lbl22
                        }
                        catch (MatchException v2) {
                            throw bz.Li(v2);
                        }
                        var4_2 = true;
                        try {
                            try {
                                if (var3_3 != null) break block16;
lbl22:
                                // 2 sources

                                v3 /* !! */  = var6_5;
                                if (var3_3 == null) break block16;
                            }
                            catch (MatchException v4) {
                                throw bz.Li(v4);
                            }
                            v5 = v3 /* !! */  instanceof br;
                        }
                        catch (MatchException v6) {
                            throw bz.Li(v6);
                        }
                    }
                    try {
                        if (v5) {
                            v3 /* !! */  = var6_5.oj(false);
                        }
                    }
                    catch (MatchException v7) {
                        throw bz.Li(v7);
                    }
                }
                if (var3_3 != null) continue;
            }
            v0 = var4_2;
        }
        if (v0) {
            return;
        }
        this.aXfUv = false;
        this.KLjmC = null;
        this.LhWtM = null;
        this.OwOuM = true;
    }

    public boolean KS() {
        return this.OwOuM;
    }

    @Override
    public boolean onMouseDragged(double d2, double d3, mA mA2, double d4, double d5) {
        return this.bvQae.aP(d2, d3, mA2, d4, d5);
    }

    @Override
    public boolean onCharTyped(char c2) {
        return this.bvQae.aT(c2);
    }

    @Override
    public boolean onMouseClicked(double d2, double d3, mA mA2) {
        return this.bvQae.aN(d2, d3, mA2);
    }

    @Override
    public boolean onKeyPressed(int n2, int n3, int n4) {
        int n5;
        block10: {
            block11: {
                String string;
                long l2;
                block8: {
                    block9: {
                        l2 = kleqM ^ 0x78EE3853607L;
                        string = bz.Lh();
                        try {
                            try {
                                n5 = this.bvQae.aS(n2, n3, n4);
                                if (string == null) break block8;
                                if (n5 == 0) break block9;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                            return true;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                    }
                    n5 = n2;
                }
                try {
                    try {
                        if (string == null) break block10;
                        if (n5 != bz.Lp("t", (int)29799, (long)(0x3BCDF54FC395A33EL ^ l2))) break block11;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                    this.KG();
                    return true;
                }
                catch (MatchException matchException) {
                    throw bz.Li(matchException);
                }
            }
            n5 = 0;
        }
        return n5 != 0;
    }

    @Override
    public boolean onMouseReleased(double d2, double d3, mA mA2) {
        return this.bvQae.aO(d2, d3, mA2);
    }

    @Override
    public boolean onMouseScrolled(double d2, double d3, double d4) {
        return this.bvQae.aQ(d2, d3, d4);
    }

    @Override
    public void addTooltip(k k2) {
        block5: {
            az az2;
            long l2 = kleqM ^ 0x5720157FFDDFL;
            Iterator<k> iterator = this.bvQae.aY(k.class).iterator();
            String string = bz.Lh();
            while (iterator.hasNext()) {
                block6: {
                    k k3 = iterator.next();
                    try {
                        try {
                            az2 = k3.cn();
                            if (string == null) break block5;
                            if (az2 != k2.cn()) break block6;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                        return;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                }
                if (string != null) continue;
            }
            k2.sS(true);
            az2 = this.bvQae.aF(k2);
        }
    }

    @Override
    public void addPopup(ap ap2) {
        long l2 = kleqM ^ 0x7ABAA3144E46L;
        ap2.sP((int)bz.Lp("t", (int)24316, (long)(0x6F6B32FD300AF1E1L ^ l2))).sT(false);
        this.bvQae.aF(ap2);
        Iterator<ap> iterator = this.bvQae.aY(ap.class).iterator();
        String string = bz.Lh();
        while (iterator.hasNext()) {
            block15: {
                ap ap3;
                int n2;
                ap ap4;
                block16: {
                    ap ap5;
                    block14: {
                        ap4 = iterator.next();
                        try {
                            try {
                                ap5 = ap4;
                                if (string == null) break block14;
                                if (ap5 == ap2) break block15;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                            ap5 = ap4;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                    }
                    try {
                        try {
                            try {
                                n2 = ap5.sN();
                                if (string == null) break block16;
                                if (n2 <= 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                            ap3 = ap4;
                            if (string == null) break block15;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                        n2 = ap3.tz() ? 1 : 0;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                }
                try {
                    if (n2 == 0) {
                        ap3 = ap4.oj(false);
                    }
                }
                catch (MatchException matchException) {
                    throw bz.Li(matchException);
                }
            }
            if (string != null) continue;
        }
    }

    @Override
    public void addPopupComponent(aj aj2) {
        long l2 = kleqM ^ 0x518288A03DA9L;
        aj2.sP((int)bz.Lp("t", (int)31464, (long)(0x352B55A139B2A618L ^ l2))).sT(false);
        this.bvQae.aF(aj2);
    }

    /*
     * Unable to fully structure code
     */
    public void close() {
        block21: {
            block23: {
                block22: {
                    block20: {
                        var1_1 = bz.kleqM ^ 14794528120631L;
                        var3_2 = bz.Lh();
                        try {
                            try {
                                v0 = this.VWsmm;
                                if (var3_2 == null) break block20;
                                if (v0 == 0) break block21;
                            }
                            catch (MatchException v1) {
                                throw bz.Li(v1);
                            }
                            this.Weytw.dhd(0.0f);
                            cfr_temp_0 = this.Weytw.dhj() - 0.0f;
                            v0 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 < 0.0f ? -1 : 1);
                        }
                        catch (MatchException v2) {
                            throw bz.Li(v2);
                        }
                    }
                    try {
                        try {
                            try {
                                if (v0 > 0) break block21;
                                v3 = ad.rmmkh;
                                if (var3_2 == null) break block22;
                            }
                            catch (MatchException v4) {
                                throw bz.Li(v4);
                            }
                            if (v3 == null) break block22;
                        }
                        catch (MatchException v5) {
                            throw bz.Li(v5);
                        }
                        v3 = ad.rmmkh.lQ(false);
                    }
                    catch (MatchException v6) {
                        throw bz.Li(v6);
                    }
                }
                if (rD.dlmvG.world == null) ** GOTO lbl64
                for (bd var5_4 : bl.Ex().manager().aY(bd.class)) {
                    block25: {
                        block24: {
                            try {
                                try {
                                    try {
                                        if (var3_2 == null) break block23;
                                        v7 = var5_4;
                                        if (var3_2 == null) break block24;
                                    }
                                    catch (MatchException v8) {
                                        throw bz.Li(v8);
                                    }
                                    if (!v7.Ca()) break block25;
                                }
                                catch (MatchException v9) {
                                    throw bz.Li(v9);
                                }
                                v7 = var5_4;
                            }
                            catch (MatchException v10) {
                                throw bz.Li(v10);
                            }
                        }
                        v7.BU().dhg();
                    }
                    if (var3_2 != null) continue;
                }
                bl.Eu();
            }
            try {
                if (var3_2 != null) break block21;
lbl64:
                // 2 sources

                super.close();
            }
            catch (MatchException v11) {
                throw bz.Li(v11);
            }
        }
    }

    public void init() {
        this.VWsmm = false;
        this.HDtRm.dY();
        this.OwOuM = false;
        this.aXfUv = false;
        this.LhWtM = null;
        this.KLjmC = null;
        this.rzpmv.qB();
        this.vhydZ.qB();
        this.OjRjG.dhg();
        this.PrMWO.dhg();
        this.Kx();
    }

    public void tick() {
        this.si();
        this.close();
    }

    public static bz KH() {
        bz bz2;
        block4: {
            block5: {
                long l2 = kleqM ^ 0x4F21C7F997E0L;
                String string = bz.Lh();
                try {
                    try {
                        bz2 = EjcFr;
                        if (string == null) break block4;
                        if (bz2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                    new bz();
                }
                catch (MatchException matchException) {
                    throw bz.Li(matchException);
                }
            }
            bz2 = EjcFr;
        }
        return bz2;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public void KD(nf var1_1) {
        block25: {
            block23: {
                block24: {
                    block22: {
                        block20: {
                            block21: {
                                var2_2 = bz.kleqM ^ 27999608984664L;
                                var5_3 = rD.dlV().bnM();
                                var4_4 = bz.Lh();
                                try {
                                    try {
                                        v0 = var5_3;
                                        if (var4_4 == null) break block20;
                                        if (v0 != null) break block21;
                                    }
                                    catch (MatchException v1) {
                                        throw bz.Li(v1);
                                    }
                                    v2 /* !! */  = Optional.empty();
                                    break block22;
                                }
                                catch (MatchException v3) {
                                    throw bz.Li(v3);
                                }
                            }
                            v0 = var5_3;
                        }
                        v2 /* !! */  = v0.bmP();
                    }
                    var6_5 = v2 /* !! */ ;
                    try {
                        v4 = var6_5.isEmpty();
                        if (var4_4 == null) break block23;
                        if (!v4) break block24;
                    }
                    catch (MatchException v5) {
                        throw bz.Li(v5);
                    }
                    return;
                }
                v4 = false;
            }
            var7_6 = v4;
            for (aj var9_8 : this.Kz()) {
                block27: {
                    block26: {
                        try {
                            try {
                                v6 = var9_8 instanceof br;
                                if (var4_4 == null) break block25;
                                if (var4_4 == null) break block26;
                            }
                            catch (MatchException v7) {
                                throw bz.Li(v7);
                            }
                            if (v6) {
                            }
                            ** GOTO lbl55
                        }
                        catch (MatchException v8) {
                            throw bz.Li(v8);
                        }
                        var10_9 = (br)var9_8;
                        var7_6 = true;
                        try {
                            try {
                                var10_9.Go(var1_1);
                                if (var4_4 != null) break block27;
lbl55:
                                // 2 sources

                                v9 /* !! */  = var9_8;
                                if (var4_4 == null) break block27;
                            }
                            catch (MatchException v10) {
                                throw bz.Li(v10);
                            }
                            v11 = v9 /* !! */  instanceof bt;
                        }
                        catch (MatchException v12) {
                            throw bz.Li(v12);
                        }
                    }
                    try {
                        if (v11) {
                            v9 /* !! */  = var9_8.oj(false);
                        }
                    }
                    catch (MatchException v13) {
                        throw bz.Li(v13);
                    }
                }
                if (var4_4 != null) continue;
            }
            v6 = var7_6;
        }
        if (v6) {
            return;
        }
        this.OwOuM = false;
        this.aXfUv = true;
        this.LhWtM = null;
        this.KLjmC = var1_1;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private void Kv(iy iy2) {
        String string;
        List<nf> list;
        block50: {
            boolean bl2;
            block51: {
                mu<by> mu2;
                block52: {
                    bz bz2;
                    block48: {
                        block49: {
                            block41: {
                                block42: {
                                    List<nf> list2;
                                    block44: {
                                        block45: {
                                            block43: {
                                                String string2;
                                                String string3;
                                                block40: {
                                                    iy iy3;
                                                    block38: {
                                                        block39: {
                                                            long l2 = kleqM ^ 0x6DAFA54FD03L;
                                                            list = iy2.boD();
                                                            string = bz.Lh();
                                                            string3 = iy2.boj();
                                                            try {
                                                                try {
                                                                    iy3 = this.LlNRn;
                                                                    if (string == null) break block38;
                                                                    if (iy3 != null) break block39;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw bz.Li(matchException);
                                                                }
                                                                string2 = null;
                                                                break block40;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw bz.Li(matchException);
                                                            }
                                                        }
                                                        iy3 = this.LlNRn;
                                                    }
                                                    string2 = iy3.boj();
                                                }
                                                String string4 = string2;
                                                try {
                                                    try {
                                                        try {
                                                            if (string == null) break block41;
                                                            if (Objects.equals(string3, string4)) break block42;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw bz.Li(matchException);
                                                        }
                                                        this.LlNRn = iy2;
                                                        this.RHgUi.clear();
                                                        this.dimez.nI();
                                                        list2 = list;
                                                        if (string == null) break block43;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bz.Li(matchException);
                                                    }
                                                    if (list2 == null) return;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bz.Li(matchException);
                                                }
                                                list2 = list;
                                            }
                                            try {
                                                try {
                                                    if (string == null) break block44;
                                                    if (!list2.isEmpty()) break block45;
                                                    return;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bz.Li(matchException);
                                                }
                                            }
                                            catch (MatchException matchException) {
                                                throw bz.Li(matchException);
                                            }
                                        }
                                        list2 = list;
                                    }
                                    for (nf nf2 : list2) {
                                        block46: {
                                            block47: {
                                                try {
                                                    try {
                                                        if (string == null) break block46;
                                                        if (nf2 != null) break block47;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bz.Li(matchException);
                                                    }
                                                    if (string != null) continue;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bz.Li(matchException);
                                                }
                                            }
                                            this.RHgUi.add(new by(iy2, nf2));
                                        }
                                        if (string != null) continue;
                                    }
                                    return;
                                }
                                try {
                                    bz2 = this;
                                    if (string == null) break block48;
                                    bz2.LlNRn = iy2;
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                            }
                            try {
                                try {
                                    if (list == null) break block49;
                                    bl2 = list.isEmpty();
                                    if (string == null) break block50;
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                                if (!bl2) break block51;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                        }
                        bz2 = this;
                    }
                    try {
                        try {
                            mu2 = bz2.RHgUi;
                            if (string == null) break block52;
                            if (mu2.isEmpty()) return;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                        mu2 = this.RHgUi;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                }
                mu2.clear();
                this.dimez.nI();
                return;
            }
            bl2 = this.RHgUi.removeIf(by2 -> {
                boolean bl2;
                block8: {
                    block9: {
                        String string;
                        block6: {
                            block7: {
                                long l2 = kleqM ^ 0x7DBA0DA51561L;
                                string = bz.Lh();
                                try {
                                    try {
                                        bl2 = by2.JN();
                                        if (string == null) break block6;
                                        if (!bl2) break block7;
                                    }
                                    catch (MatchException matchException) {
                                        throw bz.Li(matchException);
                                    }
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                            }
                            bl2 = list.contains(by2.Js());
                        }
                        try {
                            if (string == null) break block8;
                            if (bl2) break block9;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                        bl2 = true;
                        break block8;
                    }
                    bl2 = false;
                }
                return bl2;
            });
        }
        for (nf nf3 : list) {
            block53: {
                try {
                    if (nf3 == null && string != null) continue;
                }
                catch (MatchException matchException) {
                    throw bz.Li(matchException);
                }
                by by3 = this.Kw(nf3);
                try {
                    by by4;
                    block54: {
                        try {
                            try {
                                by4 = by3;
                                if (string == null) break block53;
                                if (by4 != null) break block54;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                            this.RHgUi.add(new by(iy2, nf3));
                            if (string != null) break block53;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                    }
                    by3.JS(iy2);
                    by4 = by3.IU(nf3);
                }
                catch (MatchException matchException) {
                    throw bz.Li(matchException);
                }
            }
            if (string != null) continue;
        }
    }

    private void Ku(lC lC2) {
        block21: {
            float f2;
            Object object32;
            String string;
            float[] fArray;
            float[] fArray2;
            int n2;
            float f3;
            float f4;
            int n3;
            block18: {
                double d2;
                block19: {
                    float f5;
                    block17: {
                        long l2 = kleqM ^ 0x152A57EBF0F6L;
                        n3 = 2;
                        f4 = 5.0f;
                        f3 = (this.mbChM.bXH() - f4 * (float)(n3 - 1)) / (float)n3;
                        n2 = this.RHgUi.size();
                        fArray2 = new float[n2];
                        fArray = new float[n2];
                        float[] fArray3 = new float[n3];
                        int[] nArray = new int[n3];
                        string = bz.Lh();
                        for (int i2 = 0; i2 < n2; ++i2) {
                            float f6;
                            Object object2 = this.RHgUi.get(i2);
                            ((az)object2).tn(f3);
                            int n4 = i2 % n3;
                            try {
                                if (nArray[n4] > 0) {
                                    int n5 = n4;
                                    fArray3[n5] = fArray3[n5] + f4;
                                }
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                            fArray2[i2] = f6 = ((by)object2).dn();
                            fArray[i2] = fArray3[n4];
                            int n6 = n4;
                            fArray3[n6] = fArray3[n6] + f6;
                            int n7 = n4;
                            nArray[n7] = nArray[n7] + 1;
                            if (string != null) continue;
                        }
                        float f7 = 0.0f;
                        for (Object object32 : fArray3) {
                            f5 = Math.max(f7, (float)object32);
                            if (string != null) {
                                f7 = f5;
                                if (string != null) continue;
                            }
                            break block17;
                        }
                        f5 = f7 - this.mbChM.bXI();
                    }
                    float f8 = f5;
                    d2 = Math.max(0.0f, f8);
                    try {
                        f2 = f8;
                        if (string == null) break block18;
                        if (!(f2 > 0.0f)) break block19;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                    d2 += 8.0;
                }
                this.dimez.nQ(d2);
                this.dimez.nG();
                jG.bHI(lC2, this.mbChM);
                f2 = (float)this.dimez.nH();
            }
            object32 = f2;
            for (int i3 = 0; i3 < n2; ++i3) {
                by by2;
                block20: {
                    int n8 = i3 % n3;
                    float f9 = this.mbChM.bXF() + (float)n8 * (f3 + f4);
                    float f10 = this.mbChM.bXG() + fArray[i3] - object32;
                    by by3 = this.RHgUi.get(i3);
                    try {
                        block22: {
                            try {
                                try {
                                    try {
                                        by3.tn(f3);
                                        by2 = by3;
                                        if (string == null) break block20;
                                        by2.tG(f9, f10);
                                        if (string == null) break block21;
                                    }
                                    catch (MatchException matchException) {
                                        throw bz.Li(matchException);
                                    }
                                    if (jG.bHX(f9, f10, f3, fArray2[i3])) break block22;
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                                if (string != null) continue;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                        }
                        by2 = by3;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                }
                by2.su(lC2);
                if (string != null) continue;
            }
            jG.bHN();
        }
    }

    private void Kt(iy iy4, nf nf2) {
        ArrayList<nf> arrayList;
        String string;
        block36: {
            iy iy5;
            boolean bl2;
            block34: {
                String string2;
                block35: {
                    boolean bl3;
                    block31: {
                        block33: {
                            block32: {
                                ArrayList<nf> arrayList2;
                                block30: {
                                    Object object;
                                    block28: {
                                        long l2;
                                        block27: {
                                            l2 = kleqM ^ 0x2B1930B43A7EL;
                                            string2 = bz.Lh();
                                            try {
                                                try {
                                                    if (iy4 != null && nf2 != null) break block27;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bz.Li(matchException);
                                                }
                                                return;
                                            }
                                            catch (MatchException matchException) {
                                                throw bz.Li(matchException);
                                            }
                                        }
                                        string = iy4.boj();
                                        try {
                                            block29: {
                                                try {
                                                    try {
                                                        try {
                                                            object = string;
                                                            if (string2 == null) break block28;
                                                            if (object == null) break block29;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw bz.Li(matchException);
                                                        }
                                                        object = string;
                                                        if (string2 == null) break block28;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bz.Li(matchException);
                                                    }
                                                    if (!((String)object).isBlank()) break block30;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bz.Li(matchException);
                                                }
                                            }
                                            object = bz.Lm("c", (int)12669, (long)(0x1B997A41980DB6FEL ^ l2));
                                        }
                                        catch (MatchException matchException) {
                                            throw bz.Li(matchException);
                                        }
                                    }
                                    cN.XI((String)object);
                                    return;
                                }
                                List<nf> list = iy4.boD();
                                try {
                                    arrayList2 = list == null ? new ArrayList<nf>() : new ArrayList<nf>(list);
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                                arrayList = arrayList2;
                                boolean bl4 = arrayList.removeIf(nf3 -> {
                                    boolean bl2;
                                    long l2 = kleqM ^ 0x3E2CBF080043L;
                                    try {
                                        bl2 = nf3 == nf2;
                                    }
                                    catch (MatchException matchException) {
                                        throw bz.Li(matchException);
                                    }
                                    return bl2;
                                });
                                try {
                                    try {
                                        try {
                                            bl3 = bl4;
                                            if (string2 == null) break block31;
                                            if (bl3) break block32;
                                        }
                                        catch (MatchException matchException) {
                                            throw bz.Li(matchException);
                                        }
                                        bl3 = arrayList.remove(nf2);
                                        if (string2 == null) break block31;
                                    }
                                    catch (MatchException matchException) {
                                        throw bz.Li(matchException);
                                    }
                                    if (!bl3) break block33;
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                            }
                            bl3 = true;
                            break block31;
                        }
                        bl3 = false;
                    }
                    boolean bl5 = bl3;
                    try {
                        bl2 = bl5;
                        if (string2 == null) break block34;
                        if (bl2) break block35;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                    return;
                }
                try {
                    iy5 = iy4;
                    if (string2 == null) break block36;
                    bl2 = iy5.boi();
                }
                catch (MatchException matchException) {
                    throw bz.Li(matchException);
                }
            }
            try {
                if (!bl2) {
                    rD.dlO().bqb(iy4, arrayList).thenAccept(iy2 -> {
                        block4: {
                            long l2;
                            block5: {
                                l2 = kleqM ^ 0x3BFC66987CA2L;
                                String string = bz.Lh();
                                try {
                                    try {
                                        if (string == null) break block4;
                                        if (iy2 != null) break block5;
                                    }
                                    catch (MatchException matchException) {
                                        throw bz.Li(matchException);
                                    }
                                    cN.XI((String)((Object)bz.Lm("c", (int)27259, (long)(0x3756FFA5849C2B23L ^ l2))));
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                            }
                            rD.dlO().bqc((iy)iy2);
                            cN.XG((String)((Object)bz.Lm("c", (int)28745, (long)(0x6E950073B24C3115L ^ l2))));
                        }
                    });
                    return;
                }
            }
            catch (MatchException matchException) {
                throw bz.Li(matchException);
            }
            iy5 = iy4.boY(arrayList);
        }
        iD iD2 = new iD().brl(iy4.bol()).brm(iy4.bom()).brn(iy4.bon()).bro(iy4.boo()).brp(iy4.bop()).brq(iy4.boq()).brr(iy4.bor()).brs(iy4.bos()).brt(iy4.bot()).bru(iy4.bou()).brv(iy4.bov()).brw(iy4.bow()).brx(iy4.box()).bry(iy4.boy()).brz(iy4.boz()).brA(iy4.boA()).brB(iy4.boB()).brC(iy4.boC()).brD(arrayList);
        rD.dlO().bqa(string, iD2).thenAccept(iy3 -> {
            long l2;
            block4: {
                iy iy4;
                block5: {
                    l2 = kleqM ^ 0x2812A04B1394L;
                    String string = bz.Lh();
                    try {
                        try {
                            iy4 = iy3;
                            if (string == null) break block4;
                            if (iy4 != null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                        cN.XI((String)((Object)bz.Lm("c", (int)1918, (long)(0x6B6D1AE3F350A911L ^ l2))));
                        return;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                }
                iy4 = iy4.boY(iy3.boD());
            }
            cN.XG((String)((Object)bz.Lm("c", (int)22109, (long)(0x71A12B257E5F835L ^ l2))));
        });
    }

    private by Kw(nf nf2) {
        long l2 = kleqM ^ 0x78DA7002FAE7L;
        Iterator<by> iterator = this.RHgUi.cmj().iterator();
        String string = bz.Lh();
        while (iterator.hasNext()) {
            block6: {
                by by2;
                block5: {
                    by by3 = iterator.next();
                    try {
                        try {
                            by2 = by3;
                            if (string == null) break block5;
                            if (!Objects.equals(by2.Js(), nf2)) break block6;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                        by2 = by3;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                }
                return by2;
            }
            if (string != null) continue;
        }
        return null;
    }

    private static MatchException Li(MatchException matchException) {
        return matchException;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private void Kp(lC var1_1, ii var2_2, float var3_3) {
        block16: {
            block15: {
                block14: {
                    block12: {
                        block13: {
                            var4_4 = bz.kleqM ^ 79474065778805L;
                            jF.bHz(1.0f, 1.0f, 1.0f, var3_3);
                            v0 = bz.Lh();
                            jH.bId(var1_1, this.DZWUG.bXF() + this.DZWUG.bXH() / 2.0f, this.DZWUG.bXG() + this.DZWUG.bXI() / 2.0f, this.sf());
                            var1_1.cej(this.DZWUG.bXF(), this.DZWUG.bXG(), this.DZWUG.bXH(), this.DZWUG.bXI(), 5.0f, ld.all(11.0f), var3_3);
                            var1_1.cdm(this.DZWUG.bXF(), this.DZWUG.bXG(), this.DZWUG.bXH(), this.DZWUG.bXI(), 5.0f, ld.all(6.0f + 5.0f * var3_3), var2_2.bjd().coa(255.0f * var3_3).coc(var2_2.bje(), 0.3f).coc(var2_2.bjd().cob(0.75f), var3_3));
                            var7_5 = rD.dlV().bnM();
                            var6_6 = v0;
                            try {
                                try {
                                    v1 = var7_5;
                                    if (var6_6 == null) break block12;
                                    if (v1 != null) break block13;
                                }
                                catch (MatchException v2) {
                                    throw bz.Li(v2);
                                }
                                v3 /* !! */  = Optional.empty();
                                break block14;
                            }
                            catch (MatchException v4) {
                                throw bz.Li(v4);
                            }
                        }
                        v1 = var7_5;
                    }
                    v3 /* !! */  = v1.bmP();
                }
                var8_7 = v3 /* !! */ ;
                try {
                    try {
                        if (var6_6 == null) break block15;
                        if (var8_7.isEmpty()) {
                        }
                        ** GOTO lbl45
                    }
                    catch (MatchException v5) {
                        throw bz.Li(v5);
                    }
                    this.Kx();
                    this.vhydZ.sZ(this.DZWUG);
                    this.vhydZ.su(var1_1);
                }
                catch (MatchException v6) {
                    throw bz.Li(v6);
                }
            }
            try {
                if (var6_6 != null) break block16;
lbl45:
                // 2 sources

                this.Kr(var1_1, var8_7.get());
            }
            catch (MatchException v7) {
                throw bz.Li(v7);
            }
        }
        jH.bIf();
        jF.bHz(1.0f, 1.0f, 1.0f, 1.0f);
    }

    private static CallSite Lp(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bz" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     */
    private void Ko() {
        block82: {
            block88: {
                block86: {
                    block85: {
                        block84: {
                            block83: {
                                block78: {
                                    block81: {
                                        block79: {
                                            block74: {
                                                block73: {
                                                    block72: {
                                                        block71: {
                                                            block70: {
                                                                block68: {
                                                                    block69: {
                                                                        var1_1 = bz.kleqM ^ 68207306208302L;
                                                                        var4_2 = this.Kz();
                                                                        var3_3 = bz.Lh();
                                                                        try {
                                                                            v0 = var4_2.isEmpty();
                                                                            if (var3_3 == null) break block68;
                                                                            if (v0) break block69;
                                                                        }
                                                                        catch (MatchException v1) {
                                                                            throw bz.Li(v1);
                                                                        }
                                                                        v0 = true;
                                                                        break block68;
                                                                    }
                                                                    v0 = false;
                                                                }
                                                                var5_4 = v0;
                                                                var6_5 = 140.0f;
                                                                var7_6 = 10.0f;
                                                                try {
                                                                    try {
                                                                        v2 = var5_4;
                                                                        if (var3_3 == null) break block70;
                                                                        if (!v2) {
                                                                        }
                                                                        ** GOTO lbl48
                                                                    }
                                                                    catch (MatchException v3) {
                                                                        throw bz.Li(v3);
                                                                    }
                                                                    v2 = this.OwOuM;
                                                                }
                                                                catch (MatchException v4) {
                                                                    throw bz.Li(v4);
                                                                }
                                                            }
                                                            try {
                                                                try {
                                                                    if (var3_3 == null) break block71;
                                                                    if (!v2) {
                                                                    }
                                                                    ** GOTO lbl48
                                                                }
                                                                catch (MatchException v5) {
                                                                    throw bz.Li(v5);
                                                                }
                                                                v2 = this.aXfUv;
                                                            }
                                                            catch (MatchException v6) {
                                                                throw bz.Li(v6);
                                                            }
                                                        }
                                                        try {
                                                            if (!v2) break block72;
lbl48:
                                                            // 3 sources

                                                            v7 = (var6_5 + var7_6) / 2.0f;
                                                            break block73;
                                                        }
                                                        catch (MatchException v8) {
                                                            throw bz.Li(v8);
                                                        }
                                                    }
                                                    v7 = 0.0f;
                                                }
                                                var8_7 = v7;
                                                var9_8 = this.PrMWO.dhd(var8_7);
                                                var10_9 = rm.diq();
                                                var11_10 = var10_9.x / 2.0f - this.DZWUG.bXH() / 2.0f - var9_8;
                                                var12_11 = var10_9.y / 2.0f - this.DZWUG.bXI() / 2.0f;
                                                this.DZWUG.bXt(var11_10, var12_11);
                                                this.aZGpn.bXt(var11_10, this.DZWUG.bXA() + 7.0f);
                                                this.mbChM.bXt(var11_10 + 8.0f, var12_11 + 8.0f);
                                                var13_12 = this.DZWUG.bXz() + var7_6;
                                                var14_13 = this.DZWUG.bXG();
                                                var15_14 = this.DZWUG.bXI() + 10.0f + this.aZGpn.bXI();
                                                for (aj var17_16 : var4_2) {
                                                    block76: {
                                                        block77: {
                                                            block75: {
                                                                try {
                                                                    try {
                                                                        v9 = var17_16 instanceof bt;
                                                                        if (var3_3 == null) break block74;
                                                                        if (var3_3 == null) break block75;
                                                                    }
                                                                    catch (MatchException v10) {
                                                                        throw bz.Li(v10);
                                                                    }
                                                                    if (v9) {
                                                                    }
                                                                    ** GOTO lbl85
                                                                }
                                                                catch (MatchException v11) {
                                                                    throw bz.Li(v11);
                                                                }
                                                                var18_17 = (bt)var17_16;
                                                                try {
                                                                    try {
                                                                        var18_17.HB(var13_12, var14_13, var15_14);
                                                                        if (var3_3 != null) break block76;
lbl85:
                                                                        // 2 sources

                                                                        v12 = var17_16;
                                                                        if (var3_3 == null) break block77;
                                                                    }
                                                                    catch (MatchException v13) {
                                                                        throw bz.Li(v13);
                                                                    }
                                                                    v14 = v12 instanceof br;
                                                                }
                                                                catch (MatchException v15) {
                                                                    throw bz.Li(v15);
                                                                }
                                                            }
                                                            if (!v14) break block76;
                                                            v12 = var17_16;
                                                        }
                                                        var19_18 = (br)v12;
                                                        var19_18.Gn(var13_12, var14_13, var15_14);
                                                    }
                                                    if (var3_3 != null) continue;
                                                }
                                                v9 = this.OwOuM;
                                            }
                                            try {
                                                block80: {
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    if (var3_3 == null) break block78;
                                                                                    if (v9) {
                                                                                    }
                                                                                    ** GOTO lbl165
                                                                                }
                                                                                catch (MatchException v16) {
                                                                                    throw bz.Li(v16);
                                                                                }
                                                                                v9 = var5_4;
                                                                                if (var3_3 == null) break block78;
                                                                            }
                                                                            catch (MatchException v17) {
                                                                                throw bz.Li(v17);
                                                                            }
                                                                            if (!v9) {
                                                                            }
                                                                            ** GOTO lbl165
                                                                        }
                                                                        catch (MatchException v18) {
                                                                            throw bz.Li(v18);
                                                                        }
                                                                        v9 = this.PrMWO.dho();
                                                                        if (var3_3 == null) break block78;
                                                                    }
                                                                    catch (MatchException v19) {
                                                                        throw bz.Li(v19);
                                                                    }
                                                                    if (v9) {
                                                                    }
                                                                    ** GOTO lbl165
                                                                }
                                                                catch (MatchException v20) {
                                                                    throw bz.Li(v20);
                                                                }
                                                                v21 = this;
                                                                if (var3_3 == null) break block79;
                                                            }
                                                            catch (MatchException v22) {
                                                                throw bz.Li(v22);
                                                            }
                                                            if (v21.LhWtM != null) break block80;
                                                        }
                                                        catch (MatchException v23) {
                                                            throw bz.Li(v23);
                                                        }
                                                        this.Ky(new bt());
                                                        if (var3_3 != null) break block81;
                                                    }
                                                    catch (MatchException v24) {
                                                        throw bz.Li(v24);
                                                    }
                                                }
                                                v21 = this;
                                            }
                                            catch (MatchException v25) {
                                                throw bz.Li(v25);
                                            }
                                        }
                                        v21.Ky(new bt(this.LhWtM));
                                    }
                                    try {
                                        this.OwOuM = false;
                                        this.LhWtM = null;
                                        if (var3_3 != null) break block82;
lbl165:
                                        // 4 sources

                                        v9 = this.aXfUv;
                                    }
                                    catch (MatchException v26) {
                                        throw bz.Li(v26);
                                    }
                                }
                                try {
                                    if (var3_3 == null) break block83;
                                    if (!v9) break block82;
                                }
                                catch (MatchException v27) {
                                    throw bz.Li(v27);
                                }
                                v9 = var5_4;
                            }
                            try {
                                try {
                                    try {
                                        if (var3_3 == null) break block84;
                                        if (v9) break block82;
                                    }
                                    catch (MatchException v28) {
                                        throw bz.Li(v28);
                                    }
                                    v29 = this;
                                    if (var3_3 == null) break block85;
                                }
                                catch (MatchException v30) {
                                    throw bz.Li(v30);
                                }
                                v9 = v29.PrMWO.dho();
                            }
                            catch (MatchException v31) {
                                throw bz.Li(v31);
                            }
                        }
                        if (!v9) break block82;
                        v29 = this;
                    }
                    try {
                        block87: {
                            try {
                                try {
                                    if (var3_3 == null) break block86;
                                    if (v29.KLjmC != null) break block87;
                                }
                                catch (MatchException v32) {
                                    throw bz.Li(v32);
                                }
                                this.Ky(new br());
                                if (var3_3 != null) break block88;
                            }
                            catch (MatchException v33) {
                                throw bz.Li(v33);
                            }
                        }
                        v29 = this;
                    }
                    catch (MatchException v34) {
                        throw bz.Li(v34);
                    }
                }
                v29.Ky(new br(this.KLjmC));
            }
            this.aXfUv = false;
            this.KLjmC = null;
        }
    }

    private List<aj> Kz() {
        return this.bvQae.aY(aj.class).stream().filter(aj2 -> {
            boolean bl2;
            block6: {
                block8: {
                    block7: {
                        long l2 = kleqM ^ 0x5129B91C3CD9L;
                        String string = bz.Lh();
                        try {
                            try {
                                try {
                                    bl2 = aj2 instanceof bt;
                                    if (string == null) break block6;
                                    if (bl2) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                                bl2 = aj2 instanceof br;
                                if (string == null) break block6;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                            if (!bl2) break block8;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                    }
                    bl2 = true;
                    break block6;
                }
                bl2 = false;
            }
            return bl2;
        }).toList();
    }

    private void Ks() {
        this.RHgUi.removeIf(by2 -> {
            boolean bl2;
            block13: {
                block14: {
                    int n2;
                    String string;
                    block12: {
                        block11: {
                            block10: {
                                long l2 = kleqM ^ 0x655F62444A4FL;
                                string = bz.Lh();
                                try {
                                    try {
                                        n2 = by2.JN();
                                        if (string == null) break block10;
                                        if (n2 == false) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw bz.Li(matchException);
                                    }
                                    float f2 = by2.JP().dhj() - 0.0f;
                                    n2 = f2 == 0.0f ? 0 : (f2 < 0.0f ? -1 : 1);
                                }
                                catch (MatchException matchException) {
                                    throw bz.Li(matchException);
                                }
                            }
                            try {
                                if (string == null) break block12;
                                if (n2 > 0) break block11;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                            n2 = 1;
                            break block12;
                        }
                        n2 = false;
                    }
                    boolean bl3 = n2;
                    try {
                        try {
                            bl2 = bl3;
                            if (string == null) break block13;
                            if (bl2) break block14;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                        return false;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                }
                this.Kt(by2.Jr(), by2.Js());
                bl2 = true;
            }
            return bl2;
        });
    }

    private void Kq(lC lC2, ii ii2, float f2) {
        float f3;
        float f4;
        float f5;
        block4: {
            block5: {
                long l2 = kleqM ^ 0x7CE6F2047D78L;
                f5 = this.OjRjG.dhj();
                String string = bz.Lh();
                try {
                    try {
                        f4 = f5;
                        f3 = 0.0f;
                        if (string == null) break block4;
                        if (f4 != f3) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw bz.Li(matchException);
                }
            }
            f4 = f2;
            f3 = f5;
        }
        float f6 = f4 * f3;
        float f7 = mZ.csl(this.aZGpn.bXG() - 12.0f, this.aZGpn.bXG(), f5);
        jF.bHz(1.0f, 1.0f, 1.0f, f6);
        lC2.cej(this.aZGpn.bXF(), f7, this.aZGpn.bXH(), this.aZGpn.bXI(), 5.0f, ld.all(11.0f), f2);
        lC2.cdm(this.aZGpn.bXF(), f7, this.aZGpn.bXH(), this.aZGpn.bXI(), 5.0f, ld.all(6.0f + 5.0f * f6), ii2.bjd().coa(255.0f * f6).coc(ii2.bje(), 0.3f).coc(ii2.bjd().cob(0.75f), f6));
        jG.bHI(lC2, this.aZGpn);
        this.HDtRm.sW(this.aZGpn.bXF(), f7);
        this.HDtRm.sX(this.aZGpn.bXH(), this.aZGpn.bXI());
        this.HDtRm.su(lC2);
        jG.bHN();
        jF.bHz(1.0f, 1.0f, 1.0f, 1.0f);
    }

    public static String Lh() {
        return bTgYE;
    }

    public static void Lg(String string) {
        bTgYE = string;
    }

    public void Ky(aj aj2) {
        long l2 = kleqM ^ 0x502D008AF7BL;
        String string = bz.Lh();
        aj2.sP(0).sT(false);
        String string2 = string;
        this.bvQae.aF(aj2);
        for (aj aj3 : this.Kz()) {
            block5: {
                try {
                    aj aj4;
                    try {
                        aj4 = aj3;
                        if (string2 == null || aj4 == aj2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bz.Li(matchException);
                    }
                    aj4 = aj3.oj(false);
                }
                catch (MatchException matchException) {
                    throw bz.Li(matchException);
                }
            }
            if (string2 != null) continue;
        }
    }

    private void Kn(lC lC2) {
        ii ii2 = rD.dlM();
        float f2 = Math.min(1.0f, this.Weytw.dhj());
        this.Kp(lC2, ii2, f2);
        this.Kq(lC2, ii2, f2);
    }

    private void Kx() {
        this.LlNRn = null;
        this.RHgUi.clear();
        this.dimez.nI();
    }

    private void Kr(lC lC2, iy iy2) {
        block8: {
            bz bz2;
            block6: {
                long l2 = kleqM ^ 0x7175BF77D53FL;
                String string = bz.Lh();
                this.Ks();
                String string2 = string;
                try {
                    block7: {
                        try {
                            try {
                                this.Kv(iy2);
                                bz2 = this;
                                if (string2 == null) break block6;
                                if (!bz2.RHgUi.isEmpty()) break block7;
                            }
                            catch (MatchException matchException) {
                                throw bz.Li(matchException);
                            }
                            this.rzpmv.sZ(this.DZWUG);
                            this.rzpmv.su(lC2);
                            if (string2 != null) break block8;
                        }
                        catch (MatchException matchException) {
                            throw bz.Li(matchException);
                        }
                    }
                    bz2 = this;
                }
                catch (MatchException matchException) {
                    throw bz.Li(matchException);
                }
            }
            bz2.Ku(lC2);
        }
    }

    public aq KM() {
        return this.vhydZ;
    }

    public az KQ() {
        return this.DNlcF;
    }

    public aq KN() {
        return this.rzpmv;
    }

    public mu<by> KP() {
        return this.RHgUi;
    }

    public bw KL() {
        return this.HDtRm;
    }

    public ah KO() {
        return this.dimez;
    }

    private static String Lj(byte[] byArray) {
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

    public boolean KT() {
        return this.aXfUv;
    }

    public rk KY() {
        return this.wgnWc;
    }

    private static String Lk(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4AE;
        if (OcNPP[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])nMXOH.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    nMXOH.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bz", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = BuVTR[n3].getBytes("ISO-8859-1");
            bz.OcNPP[n3] = bz.Lj(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return OcNPP[n3];
    }

    public iy KU() {
        return this.LhWtM;
    }

    public nf KV() {
        return this.KLjmC;
    }

    public lc KK() {
        return this.mbChM;
    }

    private static int Ln(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x580F;
        if (lmFlx[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = BMxWP[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])ugCiQ.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ugCiQ.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bz", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bz.lmFlx[n3] = n4;
        }
        return lmFlx[n3];
    }

    public lc KJ() {
        return this.aZGpn;
    }

    public lc KI() {
        return this.DZWUG;
    }

    public rk KX() {
        return this.PrMWO;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bz.class, "Ll", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(bz.class, "Lo", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

