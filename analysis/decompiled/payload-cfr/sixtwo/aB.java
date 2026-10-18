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
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.R;
import sixtwo.W;
import sixtwo.Z;
import sixtwo.aF;
import sixtwo.al;
import sixtwo.aq;
import sixtwo.aw;
import sixtwo.az;
import sixtwo.be;
import sixtwo.bf;
import sixtwo.bi;
import sixtwo.bl;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jG;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mE;
import sixtwo.mG;
import sixtwo.od;
import sixtwo.rD;
import sixtwo.rj;

public class aB
extends aF {
    private final List<bf> AUdhE;
    private final Z RzEBK;
    private final R tZXAh;
    private final aq EPfGw;
    private static final long ZGbQs;
    private static final String[] oUFpP;
    private static final String[] wsktb;
    private static final Map loIRo;
    private static final long[] sPLxc;
    private static final Integer[] eXrVy;
    private static final Map xqEzU;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public aB() {
        block4: {
            long l = ZGbQs ^ 0x6E080684504EL;
            iS[] iSArray = lc.bXK();
            int[] nArray = new int[aB.uf("d", (int)32194, (long)(0x353E756E5D1CCC85L ^ l))];
            nArray[0] = (int)aB.uf("d", (int)823, (long)(0x7D11A90A25E1327FL ^ l));
            nArray[1] = (int)aB.uf("d", (int)7375, (long)(0x180E6DBA778AAD84L ^ l));
            nArray[2] = (int)aB.uf("d", (int)14762, (long)(0xC029F4D8D2808E7L ^ l));
            nArray[3] = (int)aB.uf("d", (int)5763, (long)(0x69F4B113F96FA7CDL ^ l));
            nArray[4] = (int)aB.uf("d", (int)9014, (long)(0x21A28EB5083F127AL ^ l));
            nArray[5] = (int)aB.uf("d", (int)12121, (long)(0x53FDDCFC6EBE9E13L ^ l));
            nArray[aB.uf("d", (int)22509, (long)(0x65ACC53612C9E6ABL ^ l))] = (int)aB.uf("d", (int)21618, (long)(0x786324C684E53BL ^ l));
            super(nArray);
            iS[] iSArray2 = iSArray;
            this.AUdhE = new ArrayList<bf>();
            this.EPfGw = new aq((String)((Object)aB.uc("c", (int)7774, (long)(0x5AF1134907B82F15L ^ l))), (String)((Object)aB.uc("c", (int)31973, (long)(0x5726B665B3254DADL ^ l)))).qC(lE.WTzbi.bYM(12.0f)).qD(lE.joxgd.bYM(9.0f)).qE(30.0f);
            for (mE mE2 : rD.dmc().ddE()) {
                bf bf2 = new bf(mE2);
                try {
                    this.AUdhE.add(bf2);
                    if (iSArray2 != null) {
                        if (iSArray2 != null) continue;
                        break;
                    }
                    break block4;
                }
                catch (MatchException matchException) {
                    throw aB.tY(matchException);
                }
            }
            this.RzEBK = new Z().kJ(lE.joxgd.bYM(7.0f)).kK(5.0f).kL((int)aB.uf("d", (int)13067, (long)(0x3E7C1C40B8450244L ^ l))).kM(rj.UPXqT);
            this.tZXAh = (R)new R(od.cBQ((String)((Object)aB.uc("c", (int)16062, (long)(0x7BAE4E895D910FF4L ^ l))))).iA(W.igoQj).sX(20.0f, 20.0f);
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
                        aB.ZGbQs = gb.aYR(-3499594539942174950L, -7895749289035004343L, MethodHandles.lookup().lookupClass()).a(169079032966189L);
                        aB.loIRo = new HashMap<K, V>(13);
                        var11 = aB.ZGbQs ^ 106123193346128L;
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
                        var20_3 = new String[5];
                        var18_4 = 0;
                        var17_5 = "Y\u0000\u00e9\u00aa\u00a0[\t\u00f0Zn~\u00bcz\u00c0\u00e27\u00ca\u008f\u0095+\u0096\u0007\u00cc_\u0085\u009f\u0089\u00dd\u00efno\u00cd\u007f;\u0080\u0012\u00d0\u00e7\u009cw\u00cd\u0094\u0014\u00e9/\t\u00c6\u00db\u0017\u008a\u00f1o\u00ae]\u001aI\u008b\u00a5\u001f\u00d8\u0011.\u007f\u00a1\u00b7 \u0080k\u00ebC-_\u0099D\u00a8i\u00a6\u007f\u0018\u00ee\u0018\u00ff,\u00c0\u00b8\u0017\u0012\u00a4\u008f`\\\u00cc\u00ae2\u00eb@\u00b1\u00e8<R\u00c0\u00917\u00d0\u00fd\u0010yn\u00a8\u00de\u00a5s-\u0004\u007f\u00acu\u00d9P\u0086L.";
                        var19_6 = "Y\u0000\u00e9\u00aa\u00a0[\t\u00f0Zn~\u00bcz\u00c0\u00e27\u00ca\u008f\u0095+\u0096\u0007\u00cc_\u0085\u009f\u0089\u00dd\u00efno\u00cd\u007f;\u0080\u0012\u00d0\u00e7\u009cw\u00cd\u0094\u0014\u00e9/\t\u00c6\u00db\u0017\u008a\u00f1o\u00ae]\u001aI\u008b\u00a5\u001f\u00d8\u0011.\u007f\u00a1\u00b7 \u0080k\u00ebC-_\u0099D\u00a8i\u00a6\u007f\u0018\u00ee\u0018\u00ff,\u00c0\u00b8\u0017\u0012\u00a4\u008f`\\\u00cc\u00ae2\u00eb@\u00b1\u00e8<R\u00c0\u00917\u00d0\u00fd\u0010yn\u00a8\u00de\u00a5s-\u0004\u007f\u00acu\u00d9P\u0086L.".length();
                        var16_7 = 80;
                        var15_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl25:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = aB.tZ(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = ".15-\u00c0\u0012\u00b6\u00e1>\u00ecR\u00e5;k\u0014$\u00a3m\u00e9\u00defE\u00be\u00be\u00f5#\u00a5\u00a2T\u00bb\u0084\u00af\u00d6\u007fJ\u00a4\u00dc\u0017\u00bc\u00d7\u0093\u00c8\u00da:\u00afu\u00ba\u00ecT*\u00d6\u0006\u0084r4\u0099 \u00deN6\f\u00a6\u0012\u00e0\u0094(E\u00b2\u00a6\u000e\u00ad\u001d\u001a\u0016\u00a6\u001f}\u00ae\u00c3\u0018\u00f0\u00dd\u00bam\u00d8\u0013\u00ff\u0099=";
                            var19_6 = ".15-\u00c0\u0012\u00b6\u00e1>\u00ecR\u00e5;k\u0014$\u00a3m\u00e9\u00defE\u00be\u00be\u00f5#\u00a5\u00a2T\u00bb\u0084\u00af\u00d6\u007fJ\u00a4\u00dc\u0017\u00bc\u00d7\u0093\u00c8\u00da:\u00afu\u00ba\u00ecT*\u00d6\u0006\u0084r4\u0099 \u00deN6\f\u00a6\u0012\u00e0\u0094(E\u00b2\u00a6\u000e\u00ad\u001d\u001a\u0016\u00a6\u001f}\u00ae\u00c3\u0018\u00f0\u00dd\u00bam\u00d8\u0013\u00ff\u0099=".length();
                            var16_7 = 56;
                            var15_8 = -1;
lbl34:
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
lbl39:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = aB.tZ(var21_9).intern();
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
lbl51:
                        // 1 sources

                        ** continue;
                    }
                }
                aB.oUFpP = var20_3;
                aB.wsktb = new String[5];
                aB.xqEzU = new HashMap<K, V>(13);
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
                var6_12 = new long[10];
                var3_13 = 0;
                var4_14 = "\u00f0H@\u008a\u00d8\u00b9n\u008f\u00fbrsfn\u00c0\u00c5zR\u00b5\u00fbp\u00d4(\u00ec\u00a0GH\u0003r\u000f\u008fY\u00a2\u00dcn\u00e7\u000fV\u00e7\b\u00e7T\u00d9\u00f0\u00f3Z\u008a\u0091\u00a2\u00a2E\u0000\u0015\u00e1\u00c4;\u00f0\u00fe\u0001\u00feM\u00b3\u0096^\u00bf";
                var5_15 = "\u00f0H@\u008a\u00d8\u00b9n\u008f\u00fbrsfn\u00c0\u00c5zR\u00b5\u00fbp\u00d4(\u00ec\u00a0GH\u0003r\u000f\u008fY\u00a2\u00dcn\u00e7\u000fV\u00e7\b\u00e7T\u00d9\u00f0\u00f3Z\u008a\u0091\u00a2\u00a2E\u0000\u0015\u00e1\u00c4;\u00f0\u00fe\u0001\u00feM\u00b3\u0096^\u00bf".length();
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
lbl78:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "/J\u00a6\u00ca\u00c61_\u00c5\u00ac\u00aaM\u0083n\u0015\u00a9\u001c";
                    var5_15 = "/J\u00a6\u00ca\u00c61_\u00c5\u00ac\u00aaM\u0083n\u0015\u00a9\u001c".length();
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
lbl91:
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
lbl104:
                // 1 sources

                ** continue;
            }
        }
        aB.sPLxc = var6_12;
        aB.eXrVy = new Integer[10];
    }

    private static CallSite uc(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/aB" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String ua(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2A5F;
        if (wsktb[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])loIRo.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    loIRo.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/aB", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = oUFpP[n2].getBytes("ISO-8859-1");
            aB.wsktb[n2] = aB.tZ(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return wsktb[n2];
    }

    private static int ud(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2A59;
        if (eXrVy[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = sPLxc[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])xqEzU.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    xqEzU.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/aB", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            aB.eXrVy[n2] = n3;
        }
        return eXrVy[n2];
    }

    @Override
    public boolean dk(double d, double d2, mA mA2) {
        boolean bl2;
        block26: {
            bi bi2;
            iS[] iSArray;
            block25: {
                boolean bl3;
                block24: {
                    block23: {
                        boolean bl4;
                        block22: {
                            long l = ZGbQs ^ 0x47F5787BADA1L;
                            iSArray = lc.bXK();
                            try {
                                try {
                                    bl4 = this.tZXAh.dk(d, d2, mA2);
                                    if (iSArray == null) break block22;
                                    if (!bl4) break block23;
                                }
                                catch (MatchException matchException) {
                                    throw aB.tY(matchException);
                                }
                                this.tQ(d, d2);
                                bl4 = true;
                            }
                            catch (MatchException matchException) {
                                throw aB.tY(matchException);
                            }
                        }
                        return bl4;
                    }
                    bi2 = bl.Ex().ED();
                    try {
                        bl3 = bi2.Dw(d, d2);
                        if (iSArray == null) break block24;
                        if (bl3) break block25;
                    }
                    catch (MatchException matchException) {
                        throw aB.tY(matchException);
                    }
                    bl3 = false;
                }
                return bl3;
            }
            for (az az2 : this.LGwHI) {
                block30: {
                    boolean bl5;
                    block29: {
                        block27: {
                            block28: {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    bl2 = az2.tf();
                                                    if (iSArray == null) break block26;
                                                    if (iSArray == null) break block27;
                                                }
                                                catch (MatchException matchException) {
                                                    throw aB.tY(matchException);
                                                }
                                                if (!bl2) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw aB.tY(matchException);
                                            }
                                            bl5 = bi2.Dv(az2);
                                            if (iSArray == null) break block27;
                                        }
                                        catch (MatchException matchException) {
                                            throw aB.tY(matchException);
                                        }
                                        if (bl5) break block28;
                                    }
                                    catch (MatchException matchException) {
                                        throw aB.tY(matchException);
                                    }
                                    if (iSArray != null) continue;
                                }
                                catch (MatchException matchException) {
                                    throw aB.tY(matchException);
                                }
                            }
                            bl5 = az2.dk(d, d2, mA2);
                        }
                        try {
                            if (iSArray == null) break block29;
                            if (!bl5) break block30;
                        }
                        catch (MatchException matchException) {
                            throw aB.tY(matchException);
                        }
                        bl5 = true;
                    }
                    return bl5;
                }
                if (iSArray != null) continue;
            }
            try {
                if (mA2 == mA.frWTZ) {
                    this.tQ(d, d2);
                    return true;
                }
            }
            catch (MatchException matchException) {
                throw aB.tY(matchException);
            }
            bl2 = super.dk(d, d2, mA2);
        }
        return bl2;
    }

    private static int ue(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = aB.ud(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    @Override
    public void bV(lC lC2) {
        block13: {
            List list;
            iS[] iSArray;
            block11: {
                long l = ZGbQs ^ 0x1A60B0D27965L;
                iSArray = lc.bXK();
                try {
                    block12: {
                        try {
                            try {
                                list = this.LGwHI;
                                if (iSArray == null) break block11;
                                if (!list.isEmpty()) break block12;
                            }
                            catch (MatchException matchException) {
                                throw aB.tY(matchException);
                            }
                            this.EPfGw.sY(this.MCnYt, this.pNyTQ, this.BcpIo, this.WjISQ);
                            this.EPfGw.su(lC2);
                            if (iSArray != null) break block13;
                        }
                        catch (MatchException matchException) {
                            throw aB.tY(matchException);
                        }
                    }
                    list = this.LGwHI;
                }
                catch (MatchException matchException) {
                    throw aB.tY(matchException);
                }
            }
            for (az az2 : list) {
                az az3;
                block14: {
                    block15: {
                        try {
                            try {
                                az3 = az2;
                                if (iSArray == null) break block14;
                                if (jG.bHY(az3)) break block15;
                            }
                            catch (MatchException matchException) {
                                throw aB.tY(matchException);
                            }
                            if (iSArray != null) continue;
                        }
                        catch (MatchException matchException) {
                            throw aB.tY(matchException);
                        }
                    }
                    az3 = az2;
                }
                az3.su(lC2);
                if (iSArray != null) continue;
            }
        }
    }

    private static Object ub(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = aB.ua(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    @Override
    public void dY() {
        long l = ZGbQs ^ 0x5F2089B6D044L;
        iS[] iSArray = lc.bXK();
        super.dY();
        List<mE> list = rD.dmc().ddE();
        iS[] iSArray2 = iSArray;
        this.EPfGw.qB();
        this.LGwHI.clear();
        for (mE mE2 : list) {
            bf bf3;
            bf bf4;
            block3: {
                block4: {
                    bf4 = this.AUdhE.stream().filter(bf2 -> bf2.CE().cnD().equals(mE2.cnD())).findFirst().orElse(null);
                    try {
                        bf3 = bf4;
                        if (iSArray2 == null) break block3;
                        if (bf3 != null) break block4;
                    }
                    catch (MatchException matchException) {
                        throw aB.tY(matchException);
                    }
                    bf4 = new bf(mE2);
                    this.AUdhE.add(bf4);
                }
                bf4.dY();
                bf3 = bf4;
            }
            bf3.CC().dhg();
            this.LGwHI.add(bf4);
            if (iSArray2 != null) continue;
        }
    }

    @Override
    public void fX(lC lC2) {
        super.fX(lC2);
        this.LGwHI.removeIf(az2 -> {
            boolean bl;
            block12: {
                block13: {
                    boolean bl2;
                    block17: {
                        boolean bl3;
                        block18: {
                            boolean bl4;
                            iS[] iSArray;
                            block16: {
                                block15: {
                                    block14: {
                                        long l = ZGbQs ^ 0x45717B09A459L;
                                        iSArray = lc.bXK();
                                        try {
                                            bl = az2 instanceof bf;
                                            if (iSArray == null) break block12;
                                            if (!bl) break block13;
                                        }
                                        catch (MatchException matchException) {
                                            throw aB.tY(matchException);
                                        }
                                        bf bf2 = (bf)az2;
                                        try {
                                            try {
                                                bl4 = bf2.CG();
                                                if (iSArray == null) break block14;
                                                if (!bl4) break block15;
                                            }
                                            catch (MatchException matchException) {
                                                throw aB.tY(matchException);
                                            }
                                            float f2 = bf2.CC().dhj() - 0.0f;
                                            bl4 = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                                        }
                                        catch (MatchException matchException) {
                                            throw aB.tY(matchException);
                                        }
                                    }
                                    try {
                                        if (iSArray == null) break block16;
                                        if (bl4) break block15;
                                    }
                                    catch (MatchException matchException) {
                                        throw aB.tY(matchException);
                                    }
                                    bl4 = true;
                                    break block16;
                                }
                                bl4 = false;
                            }
                            bl3 = bl4;
                            try {
                                try {
                                    bl2 = bl3;
                                    if (iSArray == null) break block17;
                                    if (!bl2) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw aB.tY(matchException);
                                }
                                this.AUdhE.remove(az2);
                            }
                            catch (MatchException matchException) {
                                throw aB.tY(matchException);
                            }
                        }
                        bl2 = bl3;
                    }
                    return bl2;
                }
                bl = false;
            }
            return bl;
        });
    }

    @Override
    public void tP(lC lC2, float f2, al al2) {
        long l = ZGbQs ^ 0x54132D20F43CL;
        List<mE> list = rD.dmc().ddE();
        lq lq2 = lE.joxgd.bYM(7.0f);
        mG mG2 = this.CtPwV.bjb().cob(0.5f);
        float f3 = al2.ts() + jf.bAH(lq2.cat(), al2.dn());
        CallSite callSite = aB.uc("c", (int)30394, (long)(0x3BF28E709177E381L ^ l));
        lC2.cez(lq2, (String)((Object)callSite), f2, f3, mG2);
        this.RzEBK.kO(list.size());
        this.RzEBK.kS(false, mG2);
        this.RzEBK.sW(f2 + lq2.cao((String)((Object)callSite)), f3);
        this.RzEBK.su(lC2);
        float f4 = al2.tc() - 7.0f - bl.Ex().EI().kN() - 7.0f - this.tZXAh.kN();
        float f5 = al2.ts() + jf.bAH(this.tZXAh.dn(), al2.dn());
        this.tZXAh.sW(f4, f5);
        this.tZXAh.su(lC2);
    }

    @Override
    protected int tR() {
        return 3;
    }

    private static MatchException tY(MatchException matchException) {
        return matchException;
    }

    private void tQ(double d, double d2) {
        long l = ZGbQs ^ 0x4270B07902EBL;
        be be2 = new be((float)d, (float)d2, 6.0f, (String)((Object)aB.uc("c", (int)7887, (long)(0x32A9A59405997D26L ^ l))));
        aw.route(be2);
    }

    private static CallSite uf(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/aB" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public List<bf> tS() {
        return this.AUdhE;
    }

    public Z tT() {
        return this.RzEBK;
    }

    public R tU() {
        return this.tZXAh;
    }

    public aq tV() {
        return this.EPfGw;
    }

    private static String tZ(byte[] byArray) {
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
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(aB.class, "ub", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(aB.class, "ue", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
