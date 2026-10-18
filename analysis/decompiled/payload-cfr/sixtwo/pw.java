/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1297
 *  net.minecraft.class_1309
 *  net.minecraft.class_1799
 *  net.minecraft.class_1802
 *  net.minecraft.class_241
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
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1297;
import net.minecraft.class_1309;
import net.minecraft.class_1799;
import net.minecraft.class_1802;
import net.minecraft.class_241;
import sixtwo.cJ;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jc;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.oP;
import sixtwo.pD;
import sixtwo.pM;
import sixtwo.pv;
import sixtwo.py;
import sixtwo.pz;
import sixtwo.rD;

public class pw
extends py
implements pz {
    private final pD aOASd;
    private final cJ OloIp;
    private static final long IKziL;
    private static final String[] JjFpr;
    private static final String[] DWrFD;
    private static final Map IENpm;
    private static final long[] oZrxe;
    private static final Integer[] nXGGC;
    private static final Map PZzkR;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pw() {
        long l = IKziL ^ 0x3CB9B5C8FB30L;
        super((String)((Object)pw.cQl("f", (int)20513, (long)(0x443AE0DA9B5E266DL ^ l))), (String)((Object)pw.cQl("f", (int)24606, (long)(0x11CB1BE517EE1653L ^ l))), 1.25);
        this.aOASd = new pD(this).cSd(true);
        int[] nArray = new int[pw.cQo("v", (int)11087, (long)(0xD1BD3B1D878B631L ^ l))];
        nArray[0] = (int)pw.cQo("v", (int)17367, (long)(0x771E9ADE70F95EA5L ^ l));
        nArray[1] = (int)pw.cQo("v", (int)13471, (long)(0xB26A680373B29E4L ^ l));
        nArray[2] = (int)pw.cQo("v", (int)27631, (long)(0x5D590BD57012F69AL ^ l));
        nArray[3] = (int)pw.cQo("v", (int)32556, (long)(0x968FCC405C1624FL ^ l));
        nArray[4] = (int)pw.cQo("v", (int)14842, (long)(0x6934E44518A3A49AL ^ l));
        nArray[5] = (int)pw.cQo("v", (int)9267, (long)(0x707B2CC3E8413940L ^ l));
        nArray[pw.cQo("v", (int)10367, (long)(0x483AB51B9685B500L ^ l))] = (int)pw.cQo("v", (int)29397, (long)(0x10126FC56B4EFA8L ^ l));
        nArray[pw.cQo("v", (int)588, (long)(0xB70792B96EC9F36L ^ l))] = (int)pw.cQo("v", (int)12046, (long)(0x4191759DD8313279L ^ l));
        nArray[pw.cQo("v", (int)23158, (long)(0x76A6001C5B0B4702L ^ l))] = (int)pw.cQo("v", (int)1592, (long)(0x2107942DA7049B40L ^ l));
        nArray[pw.cQo("v", (int)4601, (long)(0x297A836236808C88L ^ l))] = (int)pw.cQo("v", (int)26759, (long)(0x99D82D8B118F5F7L ^ l));
        this.OloIp = new cJ(this, mr.clS(nArray)).WE(true);
        String string = pv.cPR();
        try {
            this.position(pM.gvTMb);
            this.aOASd.cSn().VA(50.0);
            if (iS.bwL() == null) {
                pv.cPQ("I96q1b");
            }
        }
        catch (MatchException matchException) {
            throw pw.cQh(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    pw.IKziL = gb.aYR(-5794470918470730534L, -7543978674238232209L, MethodHandles.lookup().lookupClass()).a(260206726731924L);
                    pw.IENpm = new HashMap<K, V>(13);
                    var11 = pw.IKziL ^ 92365587332259L;
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
                    var20_3 = new String[2];
                    var18_4 = 0;
                    var17_5 = "\u0094\"b\u00d4\u00c6\u00d6I\u00f2B\u00f4s\u008668\u0080\u00dd\u0010\u00c0\u008b\u00cf=:\u0099\u00d9\u00c0A\u0096\u009f\u0018\u00159z\u00d0";
                    var19_6 = "\u0094\"b\u00d4\u00c6\u00d6I\u00f2B\u00f4s\u008668\u0080\u00dd\u0010\u00c0\u008b\u00cf=:\u0099\u00d9\u00c0A\u0096\u009f\u0018\u00159z\u00d0".length();
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
                        var20_3[var18_4++] = pw.cQi(var21_9).intern();
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
                pw.JjFpr = var20_3;
                pw.DWrFD = new String[2];
                pw.PZzkR = new HashMap<K, V>(13);
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
                var6_12 = new long[20];
                var3_13 = 0;
                var4_14 = "\u00ef\u00cfk\u00fa\u00146\u00e0\u00da\u0000T\u00e1K\u00bf\u0012\u0002\u009f\u000e\u00d7\u00eb-&LX\u00d4\u001e\u00d3\u00cf2\u008d\u009a\u00f6\u00e3\u008e\u00c0\u0004{\u008c\u009f\u00c6\u008d\u00c3\u00c22\u0092]\u00d8\u00f2RC+)}#\u009f\u0016\u00e4\u0012\u00c2\u0001[\u0096\u0004\u00d8,\u00ee\u00a1]@\u00c0IW\u008a\u00ec\u00b4z\u00adGo\u00197\u009dP\u008c\u00d9\u00b4>A\u0014\u00aa\u0000\u00a1h\u00daH\u00e86\t\u00bc\u0084:[\u0019F\u00d6\u00be\u00b7\u00a4\u00a9fz\u00c1\u00d3\tsI\u0095' \n/G\u0000cnw\u00d4%\u0005k/\u001cMY]\u00ef1\u00e6\u00f4\u00c48\u00e2T\u0003\u00a0";
                var5_15 = "\u00ef\u00cfk\u00fa\u00146\u00e0\u00da\u0000T\u00e1K\u00bf\u0012\u0002\u009f\u000e\u00d7\u00eb-&LX\u00d4\u001e\u00d3\u00cf2\u008d\u009a\u00f6\u00e3\u008e\u00c0\u0004{\u008c\u009f\u00c6\u008d\u00c3\u00c22\u0092]\u00d8\u00f2RC+)}#\u009f\u0016\u00e4\u0012\u00c2\u0001[\u0096\u0004\u00d8,\u00ee\u00a1]@\u00c0IW\u008a\u00ec\u00b4z\u00adGo\u00197\u009dP\u008c\u00d9\u00b4>A\u0014\u00aa\u0000\u00a1h\u00daH\u00e86\t\u00bc\u0084:[\u0019F\u00d6\u00be\u00b7\u00a4\u00a9fz\u00c1\u00d3\tsI\u0095' \n/G\u0000cnw\u00d4%\u0005k/\u001cMY]\u00ef1\u00e6\u00f4\u00c48\u00e2T\u0003\u00a0".length();
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
                    var4_14 = "\u00d5j\u00de\b\u00bb\u00af^\u00c0\u0084\u00df\u001e\u008f\u00a3#\\\u0084";
                    var5_15 = "\u00d5j\u00de\b\u00bb\u00af^\u00c0\u0084\u00df\u001e\u008f\u00a3#\\\u0084".length();
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
        pw.oZrxe = var6_12;
        pw.nXGGC = new Integer[20];
    }

    @Override
    public class_241 measure(lC lC2, lc lc2, class_1297 class_12972, boolean bl) {
        float f2;
        float f3;
        List<class_1799> list;
        block9: {
            pw pw2;
            block7: {
                block8: {
                    long l = IKziL ^ 0x758DC773353EL;
                    list = this.cQd(class_12972, bl);
                    String string = pv.cPR();
                    try {
                        if (list.isEmpty()) {
                            return this.cQL();
                        }
                    }
                    catch (MatchException matchException) {
                        throw pw.cQh(matchException);
                    }
                    f3 = this.cQJ(lc2, bl);
                    try {
                        try {
                            pw2 = this;
                            if (string != null) break block7;
                            if (!pw2.OloIp.WF()) break block8;
                        }
                        catch (MatchException matchException) {
                            throw pw.cQh(matchException);
                        }
                        f2 = this.cQb(list, f3);
                        break block9;
                    }
                    catch (MatchException matchException) {
                        throw pw.cQh(matchException);
                    }
                }
                pw2 = this;
            }
            f2 = Math.max(pw2.cQg(f3), this.cQI(16.0f, f3));
        }
        float f4 = f2;
        float f5 = (float)list.size() * this.cQI(16.0f, f3) + (float)Math.max(0, list.size() - 1) * this.cQI(2.0f, f3);
        return new class_241(f4, f5);
    }

    @Override
    public void drawBox(lC lC2, lc lc2, lc lc3, class_1297 class_12972, boolean bl) {
        float f2;
        float f3;
        String string;
        List<class_1799> list;
        block8: {
            block9: {
                long l = IKziL ^ 0x7409E7097F73L;
                list = this.cQd(class_12972, bl);
                string = pv.cPR();
                try {
                    if (list.isEmpty()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw pw.cQh(matchException);
                }
                f3 = this.cQM(bl);
                try {
                    try {
                        f2 = f3;
                        if (string != null) break block8;
                        if (f2 != 0.0f) break block9;
                    }
                    catch (MatchException matchException) {
                        throw pw.cQh(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw pw.cQh(matchException);
                }
            }
            f2 = this.cQJ(lc3, bl);
        }
        float f4 = f2;
        float f5 = this.cQI(0.5f, f4);
        float f6 = 16.0f * f5;
        float f7 = this.cQI(16.0f, f4);
        float f8 = this.cQI(2.0f, f4);
        lq lq2 = this.cQf(f4);
        float f9 = lc2.bXG();
        for (class_1799 class_17992 : list) {
            this.cQa(lC2, class_17992, lc2.bXF(), f9, lc2.bXH(), f7, f5, f6, lq2, f4, f3);
            f9 += f7 + f8;
            if (string == null) continue;
        }
    }

    private void cQa(lC lC2, class_1799 class_17992, float f2, float f3, float f4, float f5, float f6, float f7, lq lq2, float f8, float f9) {
        pw pw2;
        float f10;
        block6: {
            block7: {
                float f11;
                long l = IKziL ^ 0x27891FAE9B0FL;
                String string = pv.cPR();
                this.aOASd.cSe(lC2, new lc(f2, f3, f4, f5), f8, f9);
                String string2 = string;
                try {
                    f11 = this.OloIp.WF() ? f2 + this.cQI(5.0f, f8) : f2 + jf.bAH(f7, f4);
                }
                catch (MatchException matchException) {
                    throw pw.cQh(matchException);
                }
                f10 = f11;
                float f12 = f3 + jf.bAH(f7, f5);
                try {
                    try {
                        this.cQK(lC2, class_17992, f10, f12, f6, f9);
                        pw2 = this;
                        if (string2 != null) break block6;
                        if (pw2.OloIp.WF()) break block7;
                    }
                    catch (MatchException matchException) {
                        throw pw.cQh(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw pw.cQh(matchException);
                }
            }
            pw2 = this;
        }
        String string = pw2.cQc(class_17992);
        mG mG2 = rD.dlM().bjb().coa(255.0f * f9);
        float f13 = f10 + f7 + this.cQI(2.0f, f8);
        float f14 = f3 + jf.bAH(lq2.cat(), f5);
        lC2.cez(lq2, string, f13, f14, mG2);
    }

    private float cQb(List<class_1799> list, float f2) {
        float f3;
        block2: {
            long l = IKziL ^ 0x2432D89A5F59L;
            lq lq2 = this.cQf(f2);
            float f4 = 0.0f;
            String string = pv.cPR();
            for (class_1799 class_17992 : list) {
                f3 = Math.max(f4, lq2.cao(this.cQc(class_17992)));
                if (string == null) {
                    f4 = f3;
                    if (string == null) continue;
                }
                break block2;
            }
            f3 = this.cQI(5.0f, f2) + this.cQg(f2) + this.cQI(2.0f, f2) + f4 + this.cQI(5.0f, f2);
        }
        return f3;
    }

    private static String cQi(byte[] byArray) {
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

    private static Object cQk(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = pw.cQj(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int cQm(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1341;
        if (nXGGC[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = oZrxe[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])PZzkR.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    PZzkR.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pw", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            pw.nXGGC[n2] = n3;
        }
        return nXGGC[n2];
    }

    private lq cQf(float f2) {
        return lE.joxgd.bYM(this.cQI(7.0f, f2));
    }

    private class_1799 cQe(class_1799 class_17992, int n) {
        int n2;
        block4: {
            long l;
            block5: {
                l = IKziL ^ 0x76A0E7A983F5L;
                String string = pv.cPR();
                try {
                    try {
                        n2 = class_17992.method_7963();
                        if (string != null) break block4;
                        if (n2 != 0) break block5;
                    }
                    catch (MatchException matchException) {
                        throw pw.cQh(matchException);
                    }
                    return class_17992;
                }
                catch (MatchException matchException) {
                    throw pw.cQh(matchException);
                }
            }
            n2 = Math.clamp((long)n, 0, (int)pw.cQo("v", (int)21663, (long)(0x1B61DAE76FB7B13BL ^ l)));
        }
        int n3 = n2;
        int n4 = Math.round((float)class_17992.method_7936() * (100.0f - (float)n3) / 100.0f);
        class_17992.method_7974(n4);
        return class_17992;
    }

    private static CallSite cQo(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pw" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private List<class_1799> cQd(class_1297 class_12972, boolean bl) {
        class_1297 class_12973;
        String string;
        ArrayList<class_1799> arrayList;
        block16: {
            boolean bl2;
            block14: {
                block15: {
                    long l = IKziL ^ 0x3FF5763C29E3L;
                    arrayList = new ArrayList<class_1799>();
                    string = pv.cPR();
                    try {
                        try {
                            bl2 = bl;
                            if (string != null) break block14;
                            if (!bl2) break block15;
                        }
                        catch (MatchException matchException) {
                            throw pw.cQh(matchException);
                        }
                        arrayList.add(this.cQe(class_1802.field_22027.method_7854(), (int)pw.cQo("v", (int)24650, (long)(0x409A1CD6A4202FEFL ^ l))));
                        arrayList.add(this.cQe(class_1802.field_22028.method_7854(), (int)pw.cQo("v", (int)3256, (long)(0x73F7178A7ECC4312L ^ l))));
                        arrayList.add(this.cQe(class_1802.field_22029.method_7854(), (int)pw.cQo("v", (int)29194, (long)(0x198F6128C773DA5L ^ l))));
                        arrayList.add(this.cQe(class_1802.field_22030.method_7854(), (int)pw.cQo("v", (int)4254, (long)(0x1C85C5BB376F5F2FL ^ l))));
                        return arrayList;
                    }
                    catch (MatchException matchException) {
                        throw pw.cQh(matchException);
                    }
                }
                try {
                    class_12973 = class_12972;
                    if (string != null) break block16;
                    bl2 = class_12973 instanceof class_1309;
                }
                catch (MatchException matchException) {
                    throw pw.cQh(matchException);
                }
            }
            if (!bl2) return arrayList;
            class_12973 = class_12972;
        }
        class_1309 class_13092 = (class_1309)class_12973;
        try {
            if (string != null) {
                return arrayList;
            }
        }
        catch (MatchException matchException) {
            throw pw.cQh(matchException);
        }
        List<class_1799> list = oP.cJr(class_13092).cJE();
        int n = list.size() - 1;
        while (n >= 0) {
            block17: {
                block18: {
                    class_1799 class_17992 = list.get(n);
                    try {
                        try {
                            if (string != null) break block17;
                            if (class_17992.method_7960()) break block18;
                        }
                        catch (MatchException matchException) {
                            throw pw.cQh(matchException);
                        }
                        arrayList.add(class_17992);
                    }
                    catch (MatchException matchException) {
                        throw pw.cQh(matchException);
                    }
                }
                --n;
            }
            if (string == null) continue;
        }
        return arrayList;
    }

    private String cQc(class_1799 class_17992) {
        return jc.bze(class_17992) + "%";
    }

    private static MatchException cQh(MatchException matchException) {
        return matchException;
    }

    private static int cQn(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = pw.cQm(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private float cQg(float f2) {
        return 16.0f * this.cQI(0.5f, f2);
    }

    private static String cQj(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x787E;
        if (DWrFD[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])IENpm.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    IENpm.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pw", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = JjFpr[n2].getBytes("ISO-8859-1");
            pw.DWrFD[n2] = pw.cQi(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return DWrFD[n2];
    }

    private static CallSite cQl(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pw" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pw.class, "cQn", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(pw.class, "cQk", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
