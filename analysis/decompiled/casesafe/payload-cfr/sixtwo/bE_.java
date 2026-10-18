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
import sixtwo.cJ;
import sixtwo.cn;
import sixtwo.fS;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.lC;
import sixtwo.lf;
import sixtwo.mZ;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.ry;

public class bE
extends cn {
    cJ RblnL;
    bH laKMA;
    bH XAxpb;
    bH oEstM;
    private static final long piSZG;
    private static final String TxDro;
    private static final long[] YOiuM;
    private static final Integer[] YBoJQ;
    private static final Map OTFbL;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bE() {
        long l = piSZG ^ 0x98158D37D21L;
        int[] nArray = new int[bE.Mc("k", (int)3276, (long)(0x318AD6B4EA73869CL ^ l))];
        nArray[0] = (int)bE.Mc("k", (int)17293, (long)(0x550AE3217AC6C9C0L ^ l));
        nArray[1] = (int)bE.Mc("k", (int)16465, (long)(0x35A7505D4C5F4A10L ^ l));
        nArray[2] = (int)bE.Mc("k", (int)14584, (long)(0x6A63EF63CAC0B2B4L ^ l));
        nArray[3] = (int)bE.Mc("k", (int)24869, (long)(0x22B85D0CD45C6B7BL ^ l));
        nArray[4] = (int)bE.Mc("k", (int)23735, (long)(0x61DD2D91CBA056DBL ^ l));
        nArray[5] = (int)bE.Mc("k", (int)26810, (long)(0x3777B62FDC1962F4L ^ l));
        nArray[bE.Mc("k", (int)5586, (long)(0x38E87E46F7929F83L ^ l))] = (int)bE.Mc("k", (int)26788, (long)(0x7ECD327194D2E2CBL ^ l));
        nArray[bE.Mc("k", (int)25429, (long)(0x54921A522579E903L ^ l))] = (int)bE.Mc("k", (int)14464, (long)(0x3ECF04B9AFE532E5L ^ l));
        nArray[bE.Mc("k", (int)18449, (long)(0xEE402D1035DC258L ^ l))] = (int)bE.Mc("k", (int)19137, (long)(0x203D0DB30AC9C08AL ^ l));
        super(nArray, lf.Blydk, true);
        int[] nArray2 = new int[bE.Mc("k", (int)11836, (long)(0x2471736A25C32460L ^ l))];
        nArray2[0] = (int)bE.Mc("k", (int)28570, (long)(0x7D0A91D40A6AE5FCL ^ l));
        nArray2[1] = (int)bE.Mc("k", (int)14464, (long)(0x3ECF04B9AFE532E5L ^ l));
        nArray2[2] = (int)bE.Mc("k", (int)3854, (long)(0x7DC0C3BD7D92855CL ^ l));
        nArray2[3] = (int)bE.Mc("k", (int)27064, (long)(0x260CA204543E63DBL ^ l));
        nArray2[4] = (int)bE.Mc("k", (int)8501, (long)(0x764CCBC51D852B52L ^ l));
        nArray2[5] = (int)bE.Mc("k", (int)15436, (long)(0x4A8FFB416E00B609L ^ l));
        nArray2[bE.Mc("k", (int)32614, (long)(0x65372BF193327521L ^ l))] = (int)bE.Mc("k", (int)27064, (long)(0x260CA204543E63DBL ^ l));
        nArray2[bE.Mc("k", (int)31010, (long)(0x60163F592D2B7340L ^ l))] = (int)bE.Mc("k", (int)23252, (long)(0x1B77B91C4F55D090L ^ l));
        nArray2[bE.Mc("k", (int)31156, (long)(0x1FE840F21C1BF3DDL ^ l))] = (int)bE.Mc("k", (int)15719, (long)(0x7040F8D4ABD0B725L ^ l));
        nArray2[bE.Mc("k", (int)31533, (long)(0x26BF597B7E88717AL ^ l))] = (int)bE.Mc("k", (int)26788, (long)(0x7ECD327194D2E2CBL ^ l));
        nArray2[bE.Mc("k", (int)13461, (long)(0x1A199160CC43BEDFL ^ l))] = (int)bE.Mc("k", (int)12503, (long)(0x2F1DBB4AAA90BA8AL ^ l));
        nArray2[bE.Mc("k", (int)9985, (long)(0xC4E0D7E167A2D47L ^ l))] = (int)bE.Mc("k", (int)8501, (long)(0x764CCBC51D852B52L ^ l));
        this.RblnL = new cJ(this, mr.clS(nArray2)).WE(true);
        int[] nArray3 = new int[bE.Mc("k", (int)13683, (long)(0x7C7EE1243B96BF17L ^ l))];
        nArray3[0] = (int)bE.Mc("k", (int)30194, (long)(0x350023FC0DC07FAAL ^ l));
        nArray3[1] = (int)bE.Mc("k", (int)9169, (long)(0x3C075CF9E7B0A988L ^ l));
        nArray3[2] = (int)bE.Mc("k", (int)16258, (long)(0x3944242EDF36B5C1L ^ l));
        nArray3[3] = (int)bE.Mc("k", (int)8501, (long)(0x764CCBC51D852B52L ^ l));
        nArray3[4] = (int)bE.Mc("k", (int)22035, (long)(0x48F2054D36D6DC47L ^ l));
        nArray3[5] = (int)bE.Mc("k", (int)27064, (long)(0x260CA204543E63DBL ^ l));
        nArray3[bE.Mc("k", (int)32614, (long)(0x65372BF193327521L ^ l))] = (int)bE.Mc("k", (int)32735, (long)(0x2339AC02172F75B1L ^ l));
        nArray3[bE.Mc("k", (int)31010, (long)(0x60163F592D2B7340L ^ l))] = (int)bE.Mc("k", (int)10934, (long)(0x79DF44EAC65620F6L ^ l));
        nArray3[bE.Mc("k", (int)31156, (long)(0x1FE840F21C1BF3DDL ^ l))] = (int)bE.Mc("k", (int)26788, (long)(0x7ECD327194D2E2CBL ^ l));
        nArray3[bE.Mc("k", (int)31533, (long)(0x26BF597B7E88717AL ^ l))] = (int)bE.Mc("k", (int)12503, (long)(0x2F1DBB4AAA90BA8AL ^ l));
        nArray3[bE.Mc("k", (int)24361, (long)(0x3BFB8A227DD0D543L ^ l))] = (int)bE.Mc("k", (int)8501, (long)(0x764CCBC51D852B52L ^ l));
        this.laKMA = new bH(this.ZpVra, mr.clS(nArray3));
        this.XAxpb = new bH(this.ZpVra, mr.clS(new int[]{(int)bE.Mc("k", (int)23993, (long)(0x45BA00220BD557F1L ^ l)), (int)bE.Mc("k", (int)5059, (long)(0x154ABA6DDA0A1999L ^ l)), (int)bE.Mc("k", (int)20743, (long)(0x1123A59D81F0DB6FL ^ l))}), TxDro);
        int[] nArray4 = new int[bE.Mc("k", (int)32614, (long)(0x65372BF193327521L ^ l))];
        nArray4[0] = (int)bE.Mc("k", (int)4954, (long)(0x52BC66133A86990FL ^ l));
        nArray4[1] = (int)bE.Mc("k", (int)347, (long)(0x5B755928D7E90B08L ^ l));
        nArray4[2] = (int)bE.Mc("k", (int)26788, (long)(0x7ECD327194D2E2CBL ^ l));
        nArray4[3] = (int)bE.Mc("k", (int)28595, (long)(0x3E2D78C23DF8E5E8L ^ l));
        nArray4[4] = (int)bE.Mc("k", (int)8501, (long)(0x764CCBC51D852B52L ^ l));
        nArray4[5] = (int)bE.Mc("k", (int)14464, (long)(0x3ECF04B9AFE532E5L ^ l));
        this.oEstM = new bH(this.ZpVra, mr.clS(nArray4));
        String[] stringArray = bH.Mt();
        try {
            this.RO(10.0f, 10.0f);
            this.Ss(true);
            this.XAxpb.TB();
            int[] nArray5 = new int[bE.Mc("k", (int)13683, (long)(0x7C7EE1243B96BF17L ^ l))];
            nArray5[0] = (int)bE.Mc("k", (int)29119, (long)(0x5AF145F9FC807BF0L ^ l));
            nArray5[1] = (int)bE.Mc("k", (int)14464, (long)(0x3ECF04B9AFE532E5L ^ l));
            nArray5[2] = (int)bE.Mc("k", (int)8445, (long)(0x2DED460BC50FAAA2L ^ l));
            nArray5[3] = (int)bE.Mc("k", (int)12503, (long)(0x2F1DBB4AAA90BA8AL ^ l));
            nArray5[4] = (int)bE.Mc("k", (int)32735, (long)(0x2339AC02172F75B1L ^ l));
            nArray5[5] = (int)bE.Mc("k", (int)6843, (long)(0x36D2CA2825390D0L ^ l));
            nArray5[bE.Mc("k", (int)32614, (long)(0x65372BF193327521L ^ l))] = (int)bE.Mc("k", (int)347, (long)(0x5B755928D7E90B08L ^ l));
            nArray5[bE.Mc("k", (int)31010, (long)(0x60163F592D2B7340L ^ l))] = (int)bE.Mc("k", (int)8445, (long)(0x2DED460BC50FAAA2L ^ l));
            nArray5[bE.Mc("k", (int)31156, (long)(0x1FE840F21C1BF3DDL ^ l))] = (int)bE.Mc("k", (int)8501, (long)(0x764CCBC51D852B52L ^ l));
            nArray5[bE.Mc("k", (int)31533, (long)(0x26BF597B7E88717AL ^ l))] = (int)bE.Mc("k", (int)13246, (long)(0x1CE0FA12F6C739D3L ^ l));
            nArray5[bE.Mc("k", (int)24361, (long)(0x3BFB8A227DD0D543L ^ l))] = (int)bE.Mc("k", (int)27064, (long)(0x260CA204543E63DBL ^ l));
            this.laKMA.Mp(nArray5);
            ry.dkB();
            this.XAxpb.Mo(String.valueOf(1337));
            if (stringArray == null) {
                iS.bwK("wqke4b");
            }
        }
        catch (MatchException matchException) {
            throw bE.LY(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    bE.piSZG = gb.aYR(6916381278953319919L, 1988034001570874581L, MethodHandles.lookup().lookupClass()).a(229229543666914L);
                    var11 = bE.piSZG ^ 119153465203386L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("ou\u00f1.\u00ben\u00aa\u00d1".getBytes("ISO-8859-1"));
                ** while (true)
                bE.TxDro = bE.LZ(var15_3).intern();
                bE.OTFbL = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[46];
                var3_7 = 0;
                var4_8 = "\u00c8\u0013:\u0000@\u008e\u00d1\u00be\u00c4\u0087\u000b\u00ee\u00a0\u0014:\u0007\u00b9e\u00efZt\u0099\u009a\u000b\u008d\u008b\u00d1\u00b1\u0015\u00cf^\u00fa'\u00d8PFU\u00c9$\u00b0\r\u0001.\u00b6\u008e\u00e1%\u00da \u000b\u00dbnu\u00f8\u0002lR\u0093'\u0083\u00cd\n\u0000\u000e\u00aaJ\u00b7C*p\u00b1\u00f2\u00c8g\u001a\u0017&\u008b\u0005(\u00e2\u00b9Qg'v\u0089\u00aez\u00efP1I f\u00c7\u00c3\u0085\u00ba\u00db|4\u00ff\u00b1VT\u000b\u00e7Aigq\u0013M\u009d\u0096\u0084@^D\u00b8\u000e\u00f1\bym\u0094c\u0004XX\u00e6\u00fe\u0018\u00869iBEX\u0003>+\u00b5\b\u00b6\u008ax;\u0083\r\u009a\u0002$\u009cRS\u00cdq\u00c8\u00849me\u00cd\u00afWegn\u00c9\u0096\u0016F\u0087\u0014a6:::\u00e6\u00b6%\u0001/\u001bT\u000f}\u00c4\u00ad\u00ce\u00e7k\u00c2\u00e7\u00a7X\u00d8\u00f0\u00b8\u00bb?\u00ff\u0006O\u00c6\u008am\u009c\u00a6\u00a5\u00f8M,\u00cb\u00ef\u00a92[\u00e9u1]ieR\u0003\u0080\u0015\u0019E\u0005\u00a3\u00f2\u0004\u00a7\u0000\u00e147DT]\u00a5[\u00d1\u00c13\u00e0mr\u0084\u00f4Z\u00dd\u00c2ON\u0019\u00b77#\u00c5V\u008eU.\u0015>\u00bf'h\u00a7\u00c5\b\u00c6=&$\u00ed\u00beA(\u0017\u00f0\u00c7\u00a2\u00fah<\u00a2\u00a0\u0094p\u00a2+\u0011\"-TmM)\u00a3\nq\u0086$\u00f1\n<C3\u009bs\u00e9\u00e8\u00df>\u00c8\u0092\u00cb\u0019O\u009a\u0081\u000f\f\u0012\u009e\u0014\u00e0kX\u00be\u0099\u00e4\u00d3\u008c +\u00d39r\u00a3$\u00ba\u00ad\"\u00a6";
                var5_9 = "\u00c8\u0013:\u0000@\u008e\u00d1\u00be\u00c4\u0087\u000b\u00ee\u00a0\u0014:\u0007\u00b9e\u00efZt\u0099\u009a\u000b\u008d\u008b\u00d1\u00b1\u0015\u00cf^\u00fa'\u00d8PFU\u00c9$\u00b0\r\u0001.\u00b6\u008e\u00e1%\u00da \u000b\u00dbnu\u00f8\u0002lR\u0093'\u0083\u00cd\n\u0000\u000e\u00aaJ\u00b7C*p\u00b1\u00f2\u00c8g\u001a\u0017&\u008b\u0005(\u00e2\u00b9Qg'v\u0089\u00aez\u00efP1I f\u00c7\u00c3\u0085\u00ba\u00db|4\u00ff\u00b1VT\u000b\u00e7Aigq\u0013M\u009d\u0096\u0084@^D\u00b8\u000e\u00f1\bym\u0094c\u0004XX\u00e6\u00fe\u0018\u00869iBEX\u0003>+\u00b5\b\u00b6\u008ax;\u0083\r\u009a\u0002$\u009cRS\u00cdq\u00c8\u00849me\u00cd\u00afWegn\u00c9\u0096\u0016F\u0087\u0014a6:::\u00e6\u00b6%\u0001/\u001bT\u000f}\u00c4\u00ad\u00ce\u00e7k\u00c2\u00e7\u00a7X\u00d8\u00f0\u00b8\u00bb?\u00ff\u0006O\u00c6\u008am\u009c\u00a6\u00a5\u00f8M,\u00cb\u00ef\u00a92[\u00e9u1]ieR\u0003\u0080\u0015\u0019E\u0005\u00a3\u00f2\u0004\u00a7\u0000\u00e147DT]\u00a5[\u00d1\u00c13\u00e0mr\u0084\u00f4Z\u00dd\u00c2ON\u0019\u00b77#\u00c5V\u008eU.\u0015>\u00bf'h\u00a7\u00c5\b\u00c6=&$\u00ed\u00beA(\u0017\u00f0\u00c7\u00a2\u00fah<\u00a2\u00a0\u0094p\u00a2+\u0011\"-TmM)\u00a3\nq\u0086$\u00f1\n<C3\u009bs\u00e9\u00e8\u00df>\u00c8\u0092\u00cb\u0019O\u009a\u0081\u000f\f\u0012\u009e\u0014\u00e0kX\u00be\u0099\u00e4\u00d3\u008c +\u00d39r\u00a3$\u00ba\u00ad\"\u00a6".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "\u00d9/kUBG\u00c3\u00d6\u00b3\u0002\u00c5%\u00e3\u0003s\u00eb";
                    var5_9 = "\u00d9/kUBG\u00c3\u00d6\u00b3\u0002\u00c5%\u00e3\u0003s\u00eb".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl57:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
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
        bE.YOiuM = var6_6;
        bE.YBoJQ = new Integer[46];
    }

    private static CallSite Mc(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bE" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void LX(lC var1_1) {
        block10: {
            var2_2 = bE.piSZG ^ 69248129013690L;
            v0 = bH.Mt();
            super.LX(var1_1);
            var5_3 = rD.dlJ().aZx(fS.class);
            var4_4 = v0;
            try {
                try {
                    try {
                        v1 = this.RblnL.WF();
                        if (var4_4 == null) break block10;
                        if (v1) {
                        }
                        ** GOTO lbl-1000
                    }
                    catch (MatchException v2) {
                        throw bE.LY(v2);
                    }
                    v3 = var5_3;
                    if (var4_4 != null) {
                    }
                    ** GOTO lbl29
                }
                catch (MatchException v4) {
                    throw bE.LY(v4);
                }
                v1 = v3.bag();
            }
            catch (MatchException v5) {
                throw bE.LY(v5);
            }
        }
        if (v1) {
            v3 = var5_3;
lbl29:
            // 2 sources

            v6 = v3.aWX().Us();
        } else lbl-1000:
        // 2 sources

        {
            v6 = rD.dlmvG.field_1724.method_7334().name();
        }
        var6_5 = mZ.csh(v6);
        this.oEstM.Mp(var6_5);
    }

    private static int Mb(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = bE.Ma(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int Ma(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x66C1;
        if (YBoJQ[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = YOiuM[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])OTFbL.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    OTFbL.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bE", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bE.YBoJQ[n2] = n3;
        }
        return YBoJQ[n2];
    }

    private static String LZ(byte[] byArray) {
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

    private static MatchException LY(MatchException matchException) {
        return matchException;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bE.class, "Mb", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
