/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1657
 *  net.minecraft.class_241
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
import net.minecraft.class_1297;
import net.minecraft.class_1657;
import net.minecraft.class_241;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.jg;
import sixtwo.lC;
import sixtwo.lc;
import sixtwo.le;
import sixtwo.mr;
import sixtwo.pA;
import sixtwo.pM;
import sixtwo.pm$vv;
import sixtwo.pq;

public class pm
extends pA {
    private final cv wmwwQ;
    private final cw UWuKt;
    private final cw GuPiN;
    private static final long itXeZ;
    private static final String[] BoTju;
    private static final String[] bDxhm;
    private static final Map XiyBs;
    private static final long[] wXsxf;
    private static final Integer[] GTbia;
    private static final Map dwQBi;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pm() {
        long l = itXeZ ^ 0x23036AC36017L;
        super((String)((Object)pm.cOg("s", (int)11639, (long)(0x1958572DFB492DD5L ^ l))), (String)((Object)pm.cOg("s", (int)24776, (long)(0x3DA27D77AF81606BL ^ l))));
        int[] nArray = new int[pm.cOj("z", (int)5162, (long)(0x48C3A66FBC576085L ^ l))];
        nArray[0] = (int)pm.cOj("z", (int)19205, (long)(0x249419118032BFA6L ^ l));
        nArray[1] = (int)pm.cOj("z", (int)18589, (long)(0x5F263C883C56BC31L ^ l));
        nArray[2] = (int)pm.cOj("z", (int)11947, (long)(0x3411EBB3BC2E5A06L ^ l));
        nArray[3] = (int)pm.cOj("z", (int)30454, (long)(0x30D7606B773A0258L ^ l));
        nArray[4] = (int)pm.cOj("z", (int)4021, (long)(0x200D9A3B8FD77B11L ^ l));
        nArray[5] = (int)pm.cOj("z", (int)7858, (long)(0x7D4964CF63CEA07L ^ l));
        nArray[pm.cOj("z", (int)29350, (long)(0x306F1ADEAAC060CL ^ l))] = (int)pm.cOj("z", (int)16226, (long)(0x5EF8CBFD0E43CBC2L ^ l));
        nArray[pm.cOj("z", (int)27591, (long)(0x8C191C51BC81F71L ^ l))] = (int)pm.cOj("z", (int)11937, (long)(0x4550894E972DDA04L ^ l));
        this.wmwwQ = new cv(this, mr.clS(nArray)).Tm(1).Tl(true);
        this.UWuKt = new cw(this.wmwwQ, mr.clS(new int[]{(int)pm.cOj("z", (int)19404, (long)(0x6DEE490191E83F64L ^ l)), (int)pm.cOj("z", (int)12862, (long)(0x3297EB8A0FFFC69FL ^ l)), (int)pm.cOj("z", (int)5504, (long)(0x1D09B4CC11266134L ^ l)), (int)pm.cOj("z", (int)27369, (long)(0x159329775DFD9E4EL ^ l))})).Tz();
        this.GuPiN = new cw(this.wmwwQ, mr.clS(new int[]{(int)pm.cOj("z", (int)11470, (long)(0x5FFBA1196DD5586CL ^ l)), (int)pm.cOj("z", (int)4021, (long)(0x200D9A3B8FD77B11L ^ l)), (int)pm.cOj("z", (int)14386, (long)(0x3EFA71EE3B094C9BL ^ l)), (int)pm.cOj("z", (int)16802, (long)(0x1EC80396D89B3509L ^ l))})).Tz();
        this.position(pM.ODjfB);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    pm.itXeZ = gb.aYR(5021050216701824963L, -5341645102715513153L, MethodHandles.lookup().lookupClass()).a(126845200019705L);
                    pm.XiyBs = new HashMap<K, V>(13);
                    var11 = pm.itXeZ ^ 20176128734507L;
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
                    var20_3 = new String[3];
                    var18_4 = 0;
                    var17_5 = "\u0091\u0094\u00d7 dnV\u00bfB\u001e\u00bd\u00a6\u001c\u00fd\u00adO\u00107n\u00e6\u00cb\u00f9@\u009d\u0005\u0002\u00a3O\u0086\u0098\u0011\u009e|\u0010\u00a5\u00db\u0098\u00bcc\u00d9|\u0003\u009dK\u008e\u00ca<\u00f8\u008f\u009d";
                    var19_6 = "\u0091\u0094\u00d7 dnV\u00bfB\u001e\u00bd\u00a6\u001c\u00fd\u00adO\u00107n\u00e6\u00cb\u00f9@\u009d\u0005\u0002\u00a3O\u0086\u0098\u0011\u009e|\u0010\u00a5\u00db\u0098\u00bcc\u00d9|\u0003\u009dK\u008e\u00ca<\u00f8\u008f\u009d".length();
                    var16_7 = 16;
                    var15_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl22:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = pm.cOd(var21_9).intern();
                        if ((var15_8 += var16_7) < var19_6) {
                            var16_7 = var17_5.charAt(var15_8);
                            ** continue;
                        }
                        break block12;
                        break;
                    }
                    v3 = ++var15_8;
                    var21_9 = var13_1.doFinal(var17_5.substring(v3, v3 + var16_7).getBytes("ISO-8859-1"));
                    ** while (true)
                }
                pm.BoTju = var20_3;
                pm.bDxhm = new String[3];
                pm.dwQBi = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v4 = SecretKeyFactory.getInstance("DES");
                v5 = new byte[8];
                v6 = v5;
                v5[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v6 = v6;
                    v6[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[19];
                var3_13 = 0;
                var4_14 = "\u00dd\u00a6\u00a5\u00e9\u001d\u00b9\u008bp\u00f5$\u0006Z\u0015\u00b2\u000e*\u00c8oO\u0011:\u00c0\u00b9\u00e2u\u00c7\u00b7\u00db7i\u00c2\u00a7\u00ec\u0017\u00bd}O\u00ebF\u001c\u00f9R\u00b24\u0099\u00fb\u00af*$F)\u001aX\tF\u0001d\u000fl\nC4n\u00a1y~\u00ab\u00eeSSO\u0006ps0\u0091\u00b2k#\u00bd\u00ee\u00c0\u0086\u00f6\u00d3\u00dc{\u00b2H\u00d8\bZ\u00ab\u00b0\u00a3\u0018H\u00c0\u00afo>\u00da\u001f\u008d\u007fJ\u0097\u008e&\u00c8\u00c8\u00ad\u00f6K${:\u00da\u00ebq\u0013\u00f5u\u00c3\u00d3\u00ec%R\u00a2\u00ce\u0090\u00d8\u00942f\u00ed";
                var5_15 = "\u00dd\u00a6\u00a5\u00e9\u001d\u00b9\u008bp\u00f5$\u0006Z\u0015\u00b2\u000e*\u00c8oO\u0011:\u00c0\u00b9\u00e2u\u00c7\u00b7\u00db7i\u00c2\u00a7\u00ec\u0017\u00bd}O\u00ebF\u001c\u00f9R\u00b24\u0099\u00fb\u00af*$F)\u001aX\tF\u0001d\u000fl\nC4n\u00a1y~\u00ab\u00eeSSO\u0006ps0\u0091\u00b2k#\u00bd\u00ee\u00c0\u0086\u00f6\u00d3\u00dc{\u00b2H\u00d8\bZ\u00ab\u00b0\u00a3\u0018H\u00c0\u00afo>\u00da\u001f\u008d\u007fJ\u0097\u008e&\u00c8\u00c8\u00ad\u00f6K${:\u00da\u00ebq\u0013\u00f5u\u00c3\u00d3\u00ec%R\u00a2\u00ce\u0090\u00d8\u00942f\u00ed".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v7 = var6_12;
                    v8 = var3_13++;
                    v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v10 = -1;
                    break block13;
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "u#<T\u0097{\u00e5\u00b60\u00fb\u001f\u00ed\u00b9\u00d4\u008a{";
                    var5_15 = "u#<T\u0097{\u00e5\u00b60\u00fb\u001f\u00ed\u00b9\u00d4\u008a{".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v7 = var6_12;
                        v8 = var3_13++;
                        v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v10 = 0;
                        break block13;
                        break;
                    }
                    break;
                }
lbl71:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    break block14;
                    break;
                }
            }
            var8_18 = v9;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v11 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v10) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl84:
                // 1 sources

                ** continue;
            }
        }
        pm.wXsxf = var6_12;
        pm.GTbia = new Integer[19];
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public class_241 measure(lC var1_1, lc var2_2, class_1297 var3_3, boolean var4_4) {
        var5_5 = pm.itXeZ ^ 50899084850426L;
        var8_6 = this.cNZ(var2_2, var3_3, var4_4);
        var7_7 = pq.cOM();
        try {
            if (var8_6 == null) {
                return this.cQL();
            }
        }
        catch (MatchException v0) {
            throw pm.cOc(v0);
        }
        var9_8 = 0.0f;
        var10_9 = 0.0f;
        var11_10 = 0.0f;
        for (cw var13_12 : this.wmwwQ.Ts()) {
            block21: {
                block18: {
                    block19: {
                        block20: {
                            try {
                                v1 = var13_12;
                                v2 = this.UWuKt;
                                if (var7_7 != null) break block18;
                                if (v1 == v2) {
                                }
                                ** GOTO lbl47
                            }
                            catch (MatchException v3) {
                                throw pm.cOc(v3);
                            }
                            var14_13 = var8_6.iconOutput();
                            try {
                                try {
                                    v4 = var14_13;
                                    v5 = 0.0f;
                                    if (var7_7 != null) break block19;
                                    if (v4 != v5) break block20;
                                }
                                catch (MatchException v6) {
                                    throw pm.cOc(v6);
                                }
                                if (var7_7 == null) continue;
                            }
                            catch (MatchException v7) {
                                throw pm.cOc(v7);
                            }
                        }
                        var9_8 += this.cOb(var8_6.renderScale(), var11_10, var14_13);
                        var9_8 += var8_6.iconWidth() * var14_13;
                        v4 = var10_9;
                        v5 = var8_6.iconHeight() * var14_13;
                    }
                    var10_9 = Math.max(v4, v5);
                    var11_10 = var14_13;
                    try {
                        if (var7_7 == null) break block21;
lbl47:
                        // 2 sources

                        v1 = var13_12;
                        v2 = this.GuPiN;
                    }
                    catch (MatchException v8) {
                        throw pm.cOc(v8);
                    }
                }
                if (v1 == v2) {
                    block22: {
                        block23: {
                            var14_13 = var8_6.textOutput();
                            try {
                                try {
                                    v9 = var14_13;
                                    v10 = 0.0f;
                                    if (var7_7 != null) break block22;
                                    if (v9 != v10) break block23;
                                }
                                catch (MatchException v11) {
                                    throw pm.cOc(v11);
                                }
                                if (var7_7 == null) continue;
                            }
                            catch (MatchException v12) {
                                throw pm.cOc(v12);
                            }
                        }
                        var9_8 += this.cOb(var8_6.renderScale(), var11_10, var14_13);
                        var9_8 += var8_6.textWidth() * var14_13;
                        v9 = var10_9;
                        v10 = var8_6.textHeight() * var14_13;
                    }
                    var10_9 = Math.max(v9, v10);
                    var11_10 = var14_13;
                }
            }
            if (var7_7 == null) continue;
        }
        return new class_241(var9_8 + var8_6.paddingX() * 2.0f, var10_9 + var8_6.paddingY() * 2.0f);
    }

    /*
     * Unable to fully structure code
     */
    @Override
    public void drawBox(lC var1_1, lc var2_2, lc var3_3, class_1297 var4_4, boolean var5_5) {
        block19: {
            block20: {
                var6_6 = pm.itXeZ ^ 52566065249975L;
                var9_7 = this.cNZ(var3_3, var4_4, var5_5);
                var8_8 = pq.cOM();
                try {
                    try {
                        if (var8_8 != null) break block19;
                        if (var9_7 != null) break block20;
                    }
                    catch (MatchException v0) {
                        throw pm.cOc(v0);
                    }
                    return;
                }
                catch (MatchException v1) {
                    throw pm.cOc(v1);
                }
            }
            this.cRI(var1_1, var2_2, var9_7.renderScale(), var9_7.alpha());
        }
        var10_9 = var2_2.bXF() + var9_7.paddingX();
        var11_10 = 0.0f;
        for (cw var13_12 : this.wmwwQ.Ts()) {
            block24: {
                block21: {
                    block22: {
                        block23: {
                            try {
                                v2 = var13_12;
                                v3 = this.UWuKt;
                                if (var8_8 != null) break block21;
                                if (v2 == v3) {
                                }
                                ** GOTO lbl54
                            }
                            catch (MatchException v4) {
                                throw pm.cOc(v4);
                            }
                            var14_13 = var9_7.iconOutput();
                            try {
                                try {
                                    v5 = var14_13;
                                    v6 = 0.0f;
                                    if (var8_8 != null) break block22;
                                    if (v5 != v6) break block23;
                                }
                                catch (MatchException v7) {
                                    throw pm.cOc(v7);
                                }
                                if (var8_8 == null) continue;
                            }
                            catch (MatchException v8) {
                                throw pm.cOc(v8);
                            }
                        }
                        var10_9 += this.cOb(var9_7.renderScale(), var11_10, var14_13);
                        v5 = var2_2.bXG();
                        v6 = jf.bAH(var9_7.iconHeight(), var2_2.bXI());
                    }
                    var15_14 = v5 + v6;
                    le.bXO(var1_1, var10_9, var15_14, var9_7.renderScale(), var9_7.ping(), this.cRH(var9_7.alpha() * var14_13));
                    var10_9 += var9_7.iconWidth() * var14_13;
                    var11_10 = var14_13;
                    try {
                        if (var8_8 == null) break block24;
lbl54:
                        // 2 sources

                        v2 = var13_12;
                        v3 = this.GuPiN;
                    }
                    catch (MatchException v9) {
                        throw pm.cOc(v9);
                    }
                }
                if (v2 == v3) {
                    block25: {
                        block26: {
                            var14_13 = var9_7.textOutput();
                            try {
                                try {
                                    v10 = var14_13;
                                    v11 = 0.0f;
                                    if (var8_8 != null) break block25;
                                    if (v10 != v11) break block26;
                                }
                                catch (MatchException v12) {
                                    throw pm.cOc(v12);
                                }
                                if (var8_8 == null) continue;
                            }
                            catch (MatchException v13) {
                                throw pm.cOc(v13);
                            }
                        }
                        var10_9 += this.cOb(var9_7.renderScale(), var11_10, var14_13);
                        v10 = var2_2.bXG();
                        v11 = jf.bAH(var9_7.textHeight(), var2_2.bXI());
                    }
                    var15_14 = v10 + v11;
                    this.cRG(var1_1, var9_7.font(), var9_7.text(), var10_9, var15_14, var9_7.alpha() * var14_13);
                    var10_9 += var9_7.textWidth() * var14_13;
                    var11_10 = var14_13;
                }
            }
            if (var8_8 == null) continue;
        }
    }

    @Override
    protected String cNC(class_1297 class_12972, boolean bl) {
        int n;
        long l;
        block4: {
            int n2;
            block5: {
                l = itXeZ ^ 0x37B179B4227FL;
                n2 = this.cOa(class_12972, bl);
                String string = pq.cOM();
                try {
                    try {
                        n = n2;
                        if (string != null) break block4;
                        if (n >= 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw pm.cOc(matchException);
                    }
                    return null;
                }
                catch (MatchException matchException) {
                    throw pm.cOc(matchException);
                }
            }
            n = n2;
        }
        return n + (String)((Object)pm.cOg("s", (int)31324, (long)(0x489797B5E042B894L ^ l)));
    }

    private static MatchException cOc(MatchException matchException) {
        return matchException;
    }

    private static CallSite cOj(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pm" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String cOe(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1473;
        if (bDxhm[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])XiyBs.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    XiyBs.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pm", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = BoTju[n2].getBytes("ISO-8859-1");
            pm.bDxhm[n2] = pm.cOd(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return bDxhm[n2];
    }

    private static Object cOf(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = pm.cOe(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private pm$vv cNZ(lc lc2, class_1297 class_12972, boolean bl) {
        float f2;
        float f3;
        float f4;
        int n;
        String string;
        block17: {
            block18: {
                int n2;
                String string2;
                block16: {
                    String string3;
                    block15: {
                        long l = itXeZ ^ 0x53A3F1586D08L;
                        string = this.cRJ(class_12972, bl);
                        string2 = pq.cOM();
                        n = this.cOa(class_12972, bl);
                        try {
                            string3 = string;
                            if (string2 != null) break block15;
                            if (string3 == null) return null;
                        }
                        catch (MatchException matchException) {
                            throw pm.cOc(matchException);
                        }
                        string3 = string;
                    }
                    try {
                        n2 = string3.isBlank();
                        if (string2 != null) break block16;
                        if (n2 != 0) return null;
                    }
                    catch (MatchException matchException) {
                        throw pm.cOc(matchException);
                    }
                    n2 = n;
                }
                try {
                    if (n2 < 0) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw pm.cOc(matchException);
                }
                this.UWuKt.TI().dhc(this.UWuKt.TC());
                this.GuPiN.TI().dhc(this.GuPiN.TC());
                f4 = this.UWuKt.TI().dhj();
                f3 = this.GuPiN.TI().dhj();
                try {
                    try {
                        try {
                            try {
                                f2 = f4;
                                if (string2 != null) break block17;
                                if (f2 != 0.0f) break block18;
                            }
                            catch (MatchException matchException) {
                                throw pm.cOc(matchException);
                            }
                            f2 = f3;
                            if (string2 != null) break block17;
                        }
                        catch (MatchException matchException) {
                            throw pm.cOc(matchException);
                        }
                        if (f2 != 0.0f) break block18;
                        return null;
                    }
                    catch (MatchException matchException) {
                        throw pm.cOc(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw pm.cOc(matchException);
                }
            }
            f2 = this.cQJ(lc2, bl);
        }
        float f5 = f2;
        float f6 = this.cQI(1.0f, f5);
        return new pm$vv(string, this.cRL(f5), f5, this.cQM(bl), f6, f6, n, f4, f3);
    }

    private static CallSite cOg(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pm" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String cOd(byte[] byArray) {
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

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private int cOa(class_1297 class_12972, boolean bl) {
        int n;
        String string;
        block8: {
            block9: {
                long l = itXeZ ^ 0x6DA65B5793BEL;
                string = pq.cOM();
                try {
                    try {
                        n = bl;
                        if (string != null) break block8;
                        if (n == 0) break block9;
                        return (int)pm.cOj("z", (int)25653, (long)(0x7572421EEE60633AL ^ l));
                    }
                    catch (MatchException matchException) {
                        throw pm.cOc(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw pm.cOc(matchException);
                }
            }
            n = class_12972 instanceof class_1657;
        }
        try {
            if (string != null) return n;
            if (n == 0) return -1;
        }
        catch (MatchException matchException) {
            throw pm.cOc(matchException);
        }
        class_1657 class_16572 = (class_1657)class_12972;
        try {
            if (string == null) return Math.max(0, jg.bBx(class_16572));
            return -1;
        }
        catch (MatchException matchException) {
            throw pm.cOc(matchException);
        }
    }

    private float cOb(float f2, float f3, float f4) {
        float f5;
        float f6;
        block4: {
            block5: {
                long l = itXeZ ^ 0x26EDAB0DBBE3L;
                String string = pq.cOM();
                try {
                    try {
                        f6 = f3;
                        f5 = 0.0f;
                        if (string != null) break block4;
                        if (f6 != f5) break block5;
                    }
                    catch (MatchException matchException) {
                        throw pm.cOc(matchException);
                    }
                    return 0.0f;
                }
                catch (MatchException matchException) {
                    throw pm.cOc(matchException);
                }
            }
            f6 = this.cQI(2.0f, f2);
            f5 = Math.min(f3, f4);
        }
        return f6 * f5;
    }

    private static int cOh(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x6075;
        if (GTbia[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = wXsxf[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])dwQBi.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    dwQBi.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pm", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            pm.GTbia[n2] = n3;
        }
        return GTbia[n2];
    }

    private static int cOi(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = pm.cOh(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pm.class, "cOi", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(pm.class, "cOf", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
