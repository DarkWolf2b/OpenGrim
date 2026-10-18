/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.scoreboard.AbstractTeam
 *  net.minecraft.scoreboard.Scoreboard
 *  net.minecraft.scoreboard.ScoreboardDisplaySlot
 *  net.minecraft.scoreboard.ScoreboardEntry
 *  net.minecraft.scoreboard.ScoreboardObjective
 *  net.minecraft.scoreboard.Team
 *  net.minecraft.scoreboard.number.NumberFormat
 *  net.minecraft.scoreboard.number.StyledNumberFormat
 *  net.minecraft.text.MutableText
 *  net.minecraft.text.StringVisitable
 *  net.minecraft.text.Text
 *  net.minecraft.util.Formatting
 *  net.minecraft.util.math.Vec2f
 *  org.joml.Matrix3x2fc
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Function;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.MinecraftClient;
import net.minecraft.scoreboard.AbstractTeam;
import net.minecraft.scoreboard.Scoreboard;
import net.minecraft.scoreboard.ScoreboardDisplaySlot;
import net.minecraft.scoreboard.ScoreboardEntry;
import net.minecraft.scoreboard.ScoreboardObjective;
import net.minecraft.scoreboard.Team;
import net.minecraft.scoreboard.number.NumberFormat;
import net.minecraft.scoreboard.number.StyledNumberFormat;
import net.minecraft.text.MutableText;
import net.minecraft.text.StringVisitable;
import net.minecraft.text.Text;
import net.minecraft.util.Formatting;
import net.minecraft.util.math.Vec2f;
import org.joml.Matrix3x2fc;
import sixtwo.bX$sj;
import sixtwo.bX$sk;
import sixtwo.cp;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jz;
import sixtwo.jz$tU;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.rD;
import sixtwo.rm;

public class bX
extends cp {
    private static final int Rtycl;
    private static final int wRANw;
    private static final int hDLMV;
    private static final int VhZzF;
    private static final Comparator<ScoreboardEntry> PmBSa;
    private static boolean ckbaU;
    private static final long ueCGs;
    private static final String LoMwA;
    private static final long[] sJLTV;
    private static final Integer[] LWJTM;
    private static final Map HBGny;
    private static final long KkDAQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bX() {
        long l2 = ueCGs ^ 0x36E6039BB7ABL;
        boolean bl2 = bX.Ou();
        int[] nArray = new int[bX.OA("a", (int)8551, (long)(0x728CF540E2CF3588L ^ l2))];
        nArray[0] = (int)bX.OA("a", (int)14440, (long)(0x1DB9B2121E55AC80L ^ l2));
        nArray[1] = (int)bX.OA("a", (int)3833, (long)(0x3A5B5C53B2E79A0AL ^ l2));
        nArray[2] = (int)bX.OA("a", (int)3024, (long)(0x2E46D654838B1F35L ^ l2));
        nArray[3] = (int)bX.OA("a", (int)6135, (long)(0x163F87484116031AL ^ l2));
        nArray[4] = (int)bX.OA("a", (int)26714, (long)(0x35F0143501197CAAL ^ l2));
        nArray[5] = (int)bX.OA("a", (int)4603, (long)(0x6A637BD410830512L ^ l2));
        nArray[bX.OA("a", (int)29550, (long)(0x29DDA1E685C1678AL ^ l2))] = (int)bX.OA("a", (int)15154, (long)(0x2D9E5141AFB7AFD8L ^ l2));
        nArray[bX.OA("a", (int)8338, (long)(0x59E3ED75A4E93472L ^ l2))] = (int)bX.OA("a", (int)15546, (long)(0x47A02E3DF4AD284FL ^ l2));
        nArray[bX.OA("a", (int)13683, (long)(0x121837EE7432192L ^ l2))] = (int)bX.OA("a", (int)30923, (long)(0x1D8E6C78D5C4EC2DL ^ l2));
        nArray[bX.OA("a", (int)29975, (long)(0x4D3585F812E1E5L ^ l2))] = (int)bX.OA("a", (int)11012, (long)(0x50418BAE3BE93FE3L ^ l2));
        super(nArray, lf.TMFYi);
        boolean bl3 = bl2;
        try {
            if (!bl3) {
                iS.bwK("knyA2b");
            }
        }
        catch (MatchException matchException) {
            throw bX.Ow(matchException);
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
                        bX.ueCGs = gb.aYR(-6352574835933114182L, -7086090206663917643L, MethodHandles.lookup().lookupClass()).a(125013036524319L);
                        var16 = bX.ueCGs ^ 89947509825978L;
                        bX.Ot(true);
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
lbl14:
                        // 1 sources

                        while (true) {
                            continue;
                            break;
                        }
                    }
                    var18_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                    var20_3 = var18_1.doFinal("\u00dac`\u0019\u00b6\u00cd\u00c0\u009f".getBytes("ISO-8859-1"));
                    ** while (true)
                    bX.LoMwA = bX.Ox(var20_3).intern();
                    bX.HBGny = new HashMap<K, V>(13);
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
                    var11_6 = new long[23];
                    var8_7 = 0;
                    var9_8 = "\u0015C\u00fa\u00cca1Dg\u0000\u00acH\u00b0[\u00aa\u00d7\u0080Tl\u00ac\u00cf\u0012\u0002h\u00fd\u0096y\u00bb\u00cb\u0084\u0011\u001fe\u008e\u008d\u001c\\\u00b8\u0013r\b@\u00b6\u0011\u0097S\u008e,\u0016\\<jz\u0001@\u00e37\u00dc\u00b7\u001c\u00afx\u00f6\u00c2\u0005\u0089X\u00a7>\u00ebu\u009d\u00a8a\u00e0 +\u0097\u00e1G\u00d3\u0093;;\u0017\u00ed\u009eb\u00e0\u0012\u008c\u00cc\u00ea\u007f\u00ac5\u0007\t0\u00ff\u008dWyP,m\u007f\u0017\u00f4D\u008e\u001e\u000f\u00a85Q&\u00b4\u00a7y|n\u0017;\u00fd\u0086\u00a3\u00c4\u00e3\u0019*~S.\u00e4sU\u00ec\u00d3\u008f\u00c6\u00fc\u00ef{\u0088\u0091ck\u00df)T\u00f3c\u00cb^v\u00dc\u0094\u00e45\u00a1X\u00c6\u0082&~\u00ce\u0014\u00ed";
                    var10_9 = "\u0015C\u00fa\u00cca1Dg\u0000\u00acH\u00b0[\u00aa\u00d7\u0080Tl\u00ac\u00cf\u0012\u0002h\u00fd\u0096y\u00bb\u00cb\u0084\u0011\u001fe\u008e\u008d\u001c\\\u00b8\u0013r\b@\u00b6\u0011\u0097S\u008e,\u0016\\<jz\u0001@\u00e37\u00dc\u00b7\u001c\u00afx\u00f6\u00c2\u0005\u0089X\u00a7>\u00ebu\u009d\u00a8a\u00e0 +\u0097\u00e1G\u00d3\u0093;;\u0017\u00ed\u009eb\u00e0\u0012\u008c\u00cc\u00ea\u007f\u00ac5\u0007\t0\u00ff\u008dWyP,m\u007f\u0017\u00f4D\u008e\u001e\u000f\u00a85Q&\u00b4\u00a7y|n\u0017;\u00fd\u0086\u00a3\u00c4\u00e3\u0019*~S.\u00e4sU\u00ec\u00d3\u008f\u00c6\u00fc\u00ef{\u0088\u0091ck\u00df)T\u00f3c\u00cb^v\u00dc\u0094\u00e45\u00a1X\u00c6\u0082&~\u00ce\u0014\u00ed".length();
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
lbl45:
                    // 1 sources

                    while (true) {
                        v6[v7] = v10;
                        if (var7_10 < var10_9) ** continue;
                        var9_8 = "\u00c9\u00a0\u00edQ\u0097\u009f\u00ff\u000e!\u0011!\u00f5Y \u00d6w";
                        var10_9 = "\u00c9\u00a0\u00edQ\u0097\u009f\u00ff\u000e!\u0011!\u00f5Y \u00d6w".length();
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
lbl58:
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
lbl71:
                    // 1 sources

                    ** continue;
                }
            }
            bX.sJLTV = var11_6;
            bX.LWJTM = new Integer[23];
            bX.hDLMV = (int)bX.OA("a", (int)13182, (long)(var16 ^ 5157849299394769293L));
            bX.Rtycl = (int)bX.OA("a", (int)14090, (long)(var16 ^ 2671455856374953452L));
            bX.VhZzF = (int)bX.OA("a", (int)21854, (long)(var16 ^ 8209158299869206436L));
            bX.wRANw = (int)bX.OA("a", (int)20600, (long)(var16 ^ 3750981237575635591L));
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
lbl89:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_14.init(2, (Key)v11.generateSecret(new DESKeySpec(v13)), new IvParameterSpec(new byte[8]));
        var2_16 = -7413647882450658063L;
        var4_17 = var0_14.doFinal(new byte[]{(byte)(var2_16 >>> 56), (byte)(var2_16 >>> 48), (byte)(var2_16 >>> 40), (byte)(var2_16 >>> 32), (byte)(var2_16 >>> 24), (byte)(var2_16 >>> 16), (byte)(var2_16 >>> 8), (byte)var2_16});
        ** while (true)
        bX.KkDAQ = ((long)var4_17[0] & 255L) << 56 | ((long)var4_17[1] & 255L) << 48 | ((long)var4_17[2] & 255L) << 40 | ((long)var4_17[3] & 255L) << 32 | ((long)var4_17[4] & 255L) << 24 | ((long)var4_17[5] & 255L) << 16 | ((long)var4_17[6] & 255L) << 8 | (long)var4_17[7] & 255L;
        bX.PmBSa = Comparator.comparing((Function<ScoreboardEntry, Integer>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Ljava/lang/Object;, value(), (Lnet/minecraft/scoreboard/ScoreboardEntry;)Ljava/lang/Integer;)()).reversed().thenComparing((Function<ScoreboardEntry, String>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Ljava/lang/Object;, owner(), (Lnet/minecraft/scoreboard/ScoreboardEntry;)Ljava/lang/String;)(), String.CASE_INSENSITIVE_ORDER);
    }

    private void Op(lC lC2, bX$sj bX$sj) {
        block4: {
            long l2 = ueCGs ^ 0x43564746109DL;
            float f2 = this.toIeR + 7.0f;
            int n2 = Math.round(this.toIeR + (float)bX$sj.backgroundWidth());
            boolean bl2 = bX.Ou();
            lC2.ccU(this.toIeR, this.QWaAn, bX$sj.backgroundWidth(), bX$sj.backgroundHeight(), this.ormBS.dhj(), this.gILqY.dhj());
            boolean bl3 = bl2;
            int n3 = Math.round(f2 + (float)(bX$sj.contentWidth() - bX$sj.titleWidth()) / 2.0f);
            int n4 = Math.round(this.QWaAn + 5.0f);
            jz.bGI((Matrix3x2fc)lC2.cfc(), rD.dlmvG.textRenderer, bX$sj.title(), n3, n4, -1, false, jz$tU.iSvaF);
            for (int i2 = 0; i2 < bX$sj.entries().length; ++i2) {
                bX$sk bX$sk = bX$sj.entries()[i2];
                int n5 = Math.round(this.QWaAn + 5.0f + 10.0f + (float)(i2 * bX.OA("a", (int)29975, (long)(0x4D4035BCCF46D3L ^ l2))));
                try {
                    jz.bGI((Matrix3x2fc)lC2.cfc(), rD.dlmvG.textRenderer, bX$sk.name, Math.round(f2), n5, -1, false, jz$tU.iSvaF);
                    jz.bGI((Matrix3x2fc)lC2.cfc(), rD.dlmvG.textRenderer, bX$sk.score, n2 - bX.OA("a", (int)3309, (long)(0x1C7151F58331BF2AL ^ l2)) - bX$sk.scoreWidth, n5, -1, false, jz$tU.iSvaF);
                    if (bl3) {
                        if (bl3) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw bX.Ow(matchException);
                }
            }
            jz.bGJ();
        }
    }

    @Override
    protected void NV(lC lC2) {
        long l2 = ueCGs ^ 0x54B848F0E2B1L;
        bX$sj bX$sj = this.Oo(this.On());
        try {
            if (bX$sj != null) {
                this.Op(lC2, bX$sj);
            }
        }
        catch (MatchException matchException) {
            throw bX.Ow(matchException);
        }
    }

    @Override
    public void LX(lC lC2) {
        float f2;
        block9: {
            block7: {
                bX$sj bX$sj;
                block6: {
                    float f3;
                    boolean bl2;
                    bX$sj bX$sj2;
                    block8: {
                        block5: {
                            bX$sj bX$sj3;
                            block4: {
                                long l2 = ueCGs ^ 0x4003A2F50D71L;
                                bX$sj2 = this.Oo(this.On());
                                bl2 = bX.Ou();
                                try {
                                    bX bX2 = this;
                                    bX$sj3 = bX$sj2;
                                    if (!bl2) break block4;
                                    if (bX$sj3 == null) break block5;
                                }
                                catch (MatchException matchException) {
                                    throw bX.Ow(matchException);
                                }
                                bX$sj3 = bX$sj2;
                            }
                            f3 = bX$sj3.backgroundWidth();
                            break block8;
                        }
                        f3 = 0.0f;
                    }
                    try {
                        bX2.jTsqG = f3;
                        bX bX3 = this;
                        bX$sj = bX$sj2;
                        if (!bl2) break block6;
                        if (bX$sj == null) break block7;
                    }
                    catch (MatchException matchException) {
                        throw bX.Ow(matchException);
                    }
                    bX$sj = bX$sj2;
                }
                f2 = bX$sj.backgroundHeight();
                break block9;
            }
            f2 = 0.0f;
        }
        bX3.Xtjvx = f2;
        super.LX(lC2);
    }

    public static void Ot(boolean bl2) {
        ckbaU = bl2;
    }

    private static CallSite OA(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bX" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException Ow(MatchException matchException) {
        return matchException;
    }

    private bX$sj Oo(ScoreboardObjective scoreboardObjective) {
        int n2;
        int n3;
        int n4;
        Text text;
        bX$sk[] bX$skArray;
        long l2;
        block13: {
            ScoreboardObjective scoreboardObjective2;
            boolean bl2;
            block11: {
                block12: {
                    l2 = ueCGs ^ 0x4BA48AE500F7L;
                    bl2 = bX.Ov();
                    try {
                        try {
                            scoreboardObjective2 = scoreboardObjective;
                            if (bl2) break block11;
                            if (scoreboardObjective2 != null) break block12;
                        }
                        catch (MatchException matchException) {
                            throw bX.Ow(matchException);
                        }
                        return null;
                    }
                    catch (MatchException matchException) {
                        throw bX.Ow(matchException);
                    }
                }
                scoreboardObjective2 = scoreboardObjective;
            }
            Scoreboard scoreboard = scoreboardObjective2.getScoreboard();
            NumberFormat numberFormat = scoreboardObjective.getNumberFormatOr((NumberFormat)StyledNumberFormat.RED);
            bX$skArray = (bX$sk[])scoreboard.getScoreboardEntries(scoreboardObjective).stream().filter(scoreboardEntry -> {
                boolean bl2;
                block2: {
                    block3: {
                        long l2 = ueCGs ^ 0x56769E1D5F48L;
                        boolean bl3 = bX.Ou();
                        try {
                            bl2 = scoreboardEntry.hidden();
                            if (!bl3) break block2;
                            if (bl2) break block3;
                        }
                        catch (MatchException matchException) {
                            throw bX.Ow(matchException);
                        }
                        bl2 = true;
                        break block2;
                    }
                    bl2 = false;
                }
                return bl2;
            }).sorted(PmBSa).limit(KkDAQ).map(scoreboardEntry -> {
                Team team = scoreboard.getScoreHolderTeam(scoreboardEntry.owner());
                Text text = scoreboardEntry.name();
                MutableText mutableText = Team.decorateName((AbstractTeam)team, (Text)text);
                MutableText mutableText2 = scoreboardEntry.formatted(numberFormat);
                int n2 = rD.dlmvG.textRenderer.getWidth((StringVisitable)mutableText2);
                return new bX$sk((Text)mutableText, (Text)mutableText2, n2);
            }).toArray(bX$sk[]::new);
            text = scoreboardObjective.getDisplayName();
            n3 = n4 = rD.dlmvG.textRenderer.getWidth((StringVisitable)text);
            int n5 = rD.dlmvG.textRenderer.getWidth(LoMwA);
            for (bX$sk bX$sk : bX$skArray) {
                int n6;
                int n7;
                block14: {
                    block15: {
                        try {
                            try {
                                try {
                                    n2 = n3;
                                    if (bl2) break block13;
                                    n7 = rD.dlmvG.textRenderer.getWidth((StringVisitable)bX$sk.name);
                                    n6 = bX$sk.scoreWidth;
                                    if (bl2) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw bX.Ow(matchException);
                                }
                                if (n6 <= 0) break block15;
                            }
                            catch (MatchException matchException) {
                                throw bX.Ow(matchException);
                            }
                            n6 = n5 + bX$sk.scoreWidth;
                            break block14;
                        }
                        catch (MatchException matchException) {
                            throw bX.Ow(matchException);
                        }
                    }
                    n6 = 0;
                }
                n3 = Math.max(n2, n7 + n6);
                if (!bl2) continue;
            }
            n2 = bX$skArray.length;
        }
        int n8 = n2;
        int n9 = n3 + bX.OA("a", (int)24047, (long)(0x14F53E5894B3FE50L ^ l2));
        Object object = bX.OA("a", (int)2723, (long)(0x57EAC5DC741A913L ^ l2)) + n8 * bX.OA("a", (int)29975, (long)(0x4D48C7716C56B9L ^ l2)) + bX.OA("a", (int)2723, (long)(0x57EAC5DC741A913L ^ l2));
        return new bX$sj(text, n4, n3, n9, (int)object, bX$skArray);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private ScoreboardObjective On() {
        ScoreboardObjective scoreboardObjective;
        Scoreboard scoreboard;
        block18: {
            ScoreboardObjective scoreboardObjective2;
            boolean bl2;
            block17: {
                ScoreboardDisplaySlot scoreboardDisplaySlot;
                Team team;
                block16: {
                    MinecraftClient minecraftClient;
                    block14: {
                        block15: {
                            block13: {
                                long l2 = ueCGs ^ 0x32DD6E52B445L;
                                bl2 = bX.Ou();
                                try {
                                    try {
                                        minecraftClient = rD.dlmvG;
                                        if (!bl2) break block13;
                                        if (minecraftClient.world == null) return null;
                                    }
                                    catch (MatchException matchException) {
                                        throw bX.Ow(matchException);
                                    }
                                    minecraftClient = rD.dlmvG;
                                }
                                catch (MatchException matchException) {
                                    throw bX.Ow(matchException);
                                }
                            }
                            try {
                                try {
                                    if (!bl2) break block14;
                                    if (minecraftClient.player != null) break block15;
                                    return null;
                                }
                                catch (MatchException matchException) {
                                    throw bX.Ow(matchException);
                                }
                            }
                            catch (MatchException matchException) {
                                throw bX.Ow(matchException);
                            }
                        }
                        minecraftClient = rD.dlmvG;
                    }
                    scoreboard = minecraftClient.world.getScoreboard();
                    scoreboardObjective2 = null;
                    Team team2 = scoreboard.getScoreHolderTeam(rD.dlmvG.player.getNameForScoreboard());
                    try {
                        team = team2;
                        if (!bl2) break block16;
                        if (team == null) break block17;
                    }
                    catch (MatchException matchException) {
                        throw bX.Ow(matchException);
                    }
                    team = team2;
                }
                if ((scoreboardDisplaySlot = ScoreboardDisplaySlot.fromFormatting((Formatting)team.getColor())) != null) {
                    scoreboardObjective2 = scoreboard.getObjectiveForSlot(scoreboardDisplaySlot);
                }
            }
            try {
                scoreboardObjective = scoreboardObjective2;
                if (!bl2) return scoreboardObjective;
                if (scoreboardObjective == null) break block18;
            }
            catch (MatchException matchException) {
                throw bX.Ow(matchException);
            }
            scoreboardObjective = scoreboardObjective2;
            return scoreboardObjective;
        }
        scoreboardObjective = scoreboard.getObjectiveForSlot(ScoreboardDisplaySlot.SIDEBAR);
        return scoreboardObjective;
    }

    private static int Oz(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bX.Oy(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public static boolean Ou() {
        return ckbaU;
    }

    private static String Ox(byte[] byArray) {
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

    public static boolean Ov() {
        boolean bl2 = bX.Ou();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw bX.Ow(matchException);
        }
        return false;
    }

    @Override
    protected void Ol() {
        bX bX2;
        long l2;
        block7: {
            block8: {
                l2 = ueCGs ^ 0x7A702A514192L;
                boolean bl2 = bX.Ov();
                try {
                    try {
                        bX2 = this;
                        if (bl2) break block7;
                        if (bX2.mZZzJ.WF()) break block8;
                    }
                    catch (MatchException matchException) {
                        throw bX.Ow(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw bX.Ow(matchException);
                }
            }
            bX2 = this;
        }
        bX$sj bX$sj = bX2.Oo(this.On());
        try {
            if (bX$sj == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bX.Ow(matchException);
        }
        Vec2f vec2f = rm.dip();
        float f2 = this.RT();
        int n2 = bX$sj.entries().length * bX.OA("a", (int)20943, (long)(0x1FF6C1472DE43300L ^ l2));
        float f3 = (float)n2 * f2;
        float f4 = 10.0f * f2;
        this.toIeR = vec2f.x - this.RU();
        this.QWaAn = vec2f.y / 2.0f + f3 / 3.0f - f3 - f4;
    }

    private static int Oy(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x282D;
        if (LWJTM[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = sJLTV[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])HBGny.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HBGny.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bX", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bX.LWJTM[n3] = n4;
        }
        return LWJTM[n3];
    }

    @Override
    public boolean Om() {
        boolean bl2;
        long l2 = ueCGs ^ 0x5735DE70A79BL;
        try {
            bl2 = this.On() != null;
        }
        catch (MatchException matchException) {
            throw bX.Ow(matchException);
        }
        return bl2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bX.class, "Oz", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

