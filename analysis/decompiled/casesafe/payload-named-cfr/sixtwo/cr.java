/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec2f
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
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec2f;
import sixtwo.ap;
import sixtwo.bU;
import sixtwo.cB;
import sixtwo.cC;
import sixtwo.ck;
import sixtwo.cl;
import sixtwo.cs;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jF;
import sixtwo.jH;
import sixtwo.jf;
import sixtwo.jk;
import sixtwo.lA;
import sixtwo.lC;
import sixtwo.lG;
import sixtwo.lf;
import sixtwo.mA;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rm;
import sixtwo.rr;

public abstract class cr
extends iS
implements cs,
lA,
lG {
    protected float toIeR;
    protected float QWaAn;
    protected float jTsqG;
    protected float Xtjvx;
    protected final rk ormBS;
    protected final rk KgDVz;
    protected final rk gILqY;
    protected final rk OsbYH;
    protected final rk AyAnj;
    protected final rk iArvU;
    protected boolean LkpAS;
    protected boolean vCMYc;
    protected boolean pAjuu;
    protected float lGacw;
    protected float WjFpo;
    protected float TSvLw;
    protected float VngMS;
    protected int[] eqWHC;
    protected lf jAncU;
    protected final cC WUOUc;
    private static iS[] vFBld;
    private static final long yIaJZ;
    private static final String[] tsSMY;
    private static final String[] FmiwT;
    private static final Map cSkUg;
    private static final long[] pSShx;
    private static final Integer[] pIOSJ;
    private static final Map wWYME;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cr(int[] nArray, lf lf2) {
        long l2 = yIaJZ ^ 0x7488EF839935L;
        this.ormBS = new rk((int)cr.SK("h", (int)1477, (long)(0x7776480BED7ACECFL ^ l2))).dhs(rj.NJlxm);
        this.KgDVz = new rk((int)cr.SK("h", (int)18508, (long)(0x45295B730BE50345L ^ l2))).dhs(rj.NJlxm);
        this.gILqY = new rk((int)cr.SK("h", (int)18508, (long)(0x45295B730BE50345L ^ l2))).dhs(rj.UPXqT);
        this.OsbYH = new rk((int)cr.SK("h", (int)18508, (long)(0x45295B730BE50345L ^ l2))).dhs(rj.NJlxm);
        this.AyAnj = new rk((int)cr.SK("h", (int)24503, (long)(0x5BDFDF71336614B8L ^ l2))).dhs(rj.yiIHY);
        this.iArvU = new rk((int)cr.SK("h", (int)18508, (long)(0x45295B730BE50345L ^ l2))).dhs(rj.NJlxm);
        this.WUOUc = new cC(mr.clS(new int[]{(int)cr.SK("h", (int)16150, (long)(0x94135F2E6CE7418L ^ l2)), (int)cr.SK("h", (int)30109, (long)(0x51F7E794577BE91L ^ l2)), (int)cr.SK("h", (int)32371, (long)(0x4107EDADA07DB57EL ^ l2)), (int)cr.SK("h", (int)6674, (long)(0x25706542A67B511AL ^ l2))})).Vy(1.0).Vw(50.0).Vx(200.0).VA(100.0).Vz("%");
        this.eqWHC = nArray;
        this.jAncU = lf2;
        this.oZllQ.add(this.WUOUc);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    cr.yIaJZ = gb.aYR(-5607814429691454069L, 3264665966983370356L, MethodHandles.lookup().lookupClass()).a(110351274464627L);
                    cr.cSkUg = new HashMap<K, V>(13);
                    cr.SB(new iS[3]);
                    var11 = cr.yIaJZ ^ 46570476029976L;
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
                    var17_5 = "f|\u0098\u00d4\u0091\u001e\u0014x\u00d4\u00ae0.\u00d5\u00c1YX1\u0096,\u0012\u00df\u0019-C\u00b8\u00c8\u00c3\f\u00e8\u0093\u0087O\u0010\u0081\u0016\u00b3\u00f9GRS\u00d5\u0083\u00c9\u00a1\u0095\u00abZ\u00a6R\u0010\u009a\u0006\u00ed\u0018\u00b3\u007fm3\u00d9\u00bei\u00ff7\u009c\u00d1\u0007";
                    var19_6 = "f|\u0098\u00d4\u0091\u001e\u0014x\u00d4\u00ae0.\u00d5\u00c1YX1\u0096,\u0012\u00df\u0019-C\u00b8\u00c8\u00c3\f\u00e8\u0093\u0087O\u0010\u0081\u0016\u00b3\u00f9GRS\u00d5\u0083\u00c9\u00a1\u0095\u00abZ\u00a6R\u0010\u009a\u0006\u00ed\u0018\u00b3\u007fm3\u00d9\u00bei\u00ff7\u009c\u00d1\u0007".length();
                    var16_7 = 32;
                    var15_8 = -1;
lbl21:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl23:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = cr.SE(var21_9).intern();
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
                cr.tsSMY = var20_3;
                cr.FmiwT = new String[3];
                cr.wWYME = new HashMap<K, V>(13);
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
                var6_12 = new long[8];
                var3_13 = 0;
                var4_14 = "\u00a1s\u00c7E\u00a4\u00b8\u00c7\u0003\u0013\u00fa\u00ec\u00f3M\u00ae\u00a0ya\u001f\u00aaU.\"\u00bb\u00a6\u0091P,\u0014Z\u00f2\fH\u0088\u00dc\u00dc\u00ac\u00c3f\u00fa\u00ae\u0095\u00cb\u00ae\fcR\u00c6\u00bf";
                var5_15 = "\u00a1s\u00c7E\u00a4\u00b8\u00c7\u0003\u0013\u00fa\u00ec\u00f3M\u00ae\u00a0ya\u001f\u00aaU.\"\u00bb\u00a6\u0091P,\u0014Z\u00f2\fH\u0088\u00dc\u00dc\u00ac\u00c3f\u00fa\u00ae\u0095\u00cb\u00ae\fcR\u00c6\u00bf".length();
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
lbl59:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u00adpGB\u00dag\u009ed\u00d9\u00e6[\u00ae\u00fc7\u00f1\u00ad";
                    var5_15 = "\u00adpGB\u00dag\u009ed\u00d9\u00e6[\u00ae\u00fc7\u00f1\u00ad".length();
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
lbl72:
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
lbl85:
                // 1 sources

                ** continue;
            }
        }
        cr.pSShx = var6_12;
        cr.pIOSJ = new Integer[8];
    }

    private static Object SG(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cr.SF(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public lf Sm() {
        return this.jAncU;
    }

    public rk Sc() {
        return this.AyAnj;
    }

    public float Sk() {
        return this.VngMS;
    }

    public cr So(float f2) {
        this.toIeR = f2;
        return this;
    }

    private static CallSite SH(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cr" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public float Si() {
        return this.WjFpo;
    }

    public float Sj() {
        return this.TSvLw;
    }

    public void Ph(lC lC2) {
        float f2;
        float f3;
        block15: {
            float f4;
            block13: {
                float f5;
                iS[] iSArray;
                block14: {
                    float f6;
                    float f7;
                    block11: {
                        float f8;
                        block12: {
                            long l2 = yIaJZ ^ 0x5C675520520BL;
                            iS[] iSArray2 = cr.SC();
                            this.LX(lC2);
                            f8 = this.ormBS.dhj() * this.KgDVz.dhj();
                            iSArray = iSArray2;
                            try {
                                try {
                                    f7 = f8;
                                    f6 = 0.0f;
                                    if (iSArray == null) break block11;
                                    if (f7 != f6) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw cr.SD(matchException);
                                }
                                return;
                            }
                            catch (MatchException matchException) {
                                throw cr.SD(matchException);
                            }
                        }
                        jF.bHz(1.0f, 1.0f, 1.0f, Math.min(1.0f, f8));
                        f7 = 0.5f + f8 * 0.5f;
                        f6 = 0.05f * this.OsbYH.dhj();
                    }
                    float f9 = f7 - f6;
                    f5 = this.RT();
                    try {
                        try {
                            jH.bId(lC2, this.toIeR + this.RU() / 2.0f, this.QWaAn + this.RV() / 2.0f, f9);
                            float f10 = f5 - 1.0f;
                            f4 = f10 == 0.0f ? 0 : (f10 > 0.0f ? 1 : -1);
                            if (iSArray == null) break block13;
                            if (f4 == false) break block14;
                        }
                        catch (MatchException matchException) {
                            throw cr.SD(matchException);
                        }
                        jH.bId(lC2, this.toIeR, this.QWaAn, f5);
                    }
                    catch (MatchException matchException) {
                        throw cr.SD(matchException);
                    }
                }
                try {
                    this.NV(lC2);
                    f3 = f5;
                    f2 = 1.0f;
                    if (iSArray == null) break block15;
                    float f11 = f3 - f2;
                    f4 = f11 == 0.0f ? 0 : (f11 > 0.0f ? 1 : -1);
                }
                catch (MatchException matchException) {
                    throw cr.SD(matchException);
                }
            }
            if (f4 != false) {
                jH.bIf();
            }
            jH.bIf();
            f3 = 1.0f;
            f2 = 1.0f;
        }
        jF.bHz(f3, f2, 1.0f, 1.0f);
    }

    public float RT() {
        return this.WUOUc.VB() / 100.0f;
    }

    public static iS[] SC() {
        return vFBld;
    }

    public cr Sz(int[] nArray) {
        this.eqWHC = nArray;
        return this;
    }

    private static CallSite SK(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cr" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static void SB(iS[] iSArray) {
        vFBld = iSArray;
    }

    private static String SE(byte[] byArray) {
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

    public cr SA(lf lf2) {
        this.jAncU = lf2;
        return this;
    }

    private static String SF(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x38F7;
        if (FmiwT[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])cSkUg.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    cSkUg.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cr", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = tsSMY[n3].getBytes("ISO-8859-1");
            cr.FmiwT[n3] = cr.SE(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return FmiwT[n3];
    }

    private static int SI(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x158D;
        if (pIOSJ[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = pSShx[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])wWYME.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    wWYME.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cr", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cr.pIOSJ[n3] = n4;
        }
        return pIOSJ[n3];
    }

    private float RN(ck ck2, float f2, List<Float> list, List<Float> list2) {
        float f3;
        block11: {
            long l2 = yIaJZ ^ 0x296186338E9FL;
            iS[] iSArray = cr.SC();
            for (int i2 = 0; i2 < list.size(); ++i2) {
                float f4;
                float f5;
                block14: {
                    float f6;
                    block12: {
                        float f7;
                        block13: {
                            f7 = Math.abs(f2 + list.get(i2).floatValue() - ck2.QG());
                            try {
                                try {
                                    try {
                                        f3 = f7;
                                        if (iSArray == null) break block11;
                                        float f8 = f3 - 25.0f;
                                        f6 = f8 == 0.0f ? 0 : (f8 < 0.0f ? -1 : 1);
                                        if (iSArray == null) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw cr.SD(matchException);
                                    }
                                    if (f6 >= 0) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw cr.SD(matchException);
                                }
                                ck2.QI(true);
                            }
                            catch (MatchException matchException) {
                                throw cr.SD(matchException);
                            }
                        }
                        try {
                            f5 = f7;
                            f4 = 5.0f;
                            if (iSArray == null) break block14;
                            float f9 = f5 - f4;
                            f6 = f9 == 0.0f ? 0 : (f9 < 0.0f ? -1 : 1);
                        }
                        catch (MatchException matchException) {
                            throw cr.SD(matchException);
                        }
                    }
                    try {
                        if (f6 >= 0) continue;
                        f5 = ck2.QG();
                        f4 = list2.get(i2).floatValue();
                    }
                    catch (MatchException matchException) {
                        throw cr.SD(matchException);
                    }
                }
                f2 = f5 + f4;
                if (iSArray != null) continue;
            }
            f3 = f2;
        }
        return f3;
    }

    public rk Sb() {
        return this.OsbYH;
    }

    public float RW() {
        return this.toIeR;
    }

    public double RR(double d2) {
        return (double)this.toIeR + (d2 - (double)this.toIeR) / (double)this.RT();
    }

    public boolean RP(double d2, double d3) {
        return jf.bAE(d2, d3, this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx);
    }

    public rk RY() {
        return this.ormBS;
    }

    public rk RZ() {
        return this.KgDVz;
    }

    public boolean Sf() {
        return this.vCMYc;
    }

    public float Sh() {
        return this.lGacw;
    }

    public cC Sn() {
        return this.WUOUc;
    }

    public cr Sp(float f2) {
        this.QWaAn = f2;
        return this;
    }

    public cr Sq(float f2) {
        this.jTsqG = f2;
        return this;
    }

    protected abstract void NV(lC var1);

    public boolean RQ(lC lC2) {
        return this.RP(this.RR(lC2.cff()), this.RS(lC2.cfg()));
    }

    public rk Sa() {
        return this.gILqY;
    }

    public double RS(double d2) {
        return (double)this.QWaAn + (d2 - (double)this.QWaAn) / (double)this.RT();
    }

    public rk Sd() {
        return this.iArvU;
    }

    public int[] Sl() {
        return this.eqWHC;
    }

    public cr Sr(float f2) {
        this.Xtjvx = f2;
        return this;
    }

    public void LX(lC lC2) {
        block19: {
            boolean bl2;
            rk rk2;
            boolean bl3;
            float f2;
            float f3;
            iS[] iSArray;
            block20: {
                block21: {
                    boolean bl4;
                    block18: {
                        rj rj2;
                        rk rk3;
                        rj rj3;
                        rk rk4;
                        long l2 = yIaJZ ^ 0x60D2A8E341A7L;
                        Vec2f vec2f = rm.dip();
                        iSArray = cr.SC();
                        float f4 = this.iArvU.dhd(this.jTsqG);
                        float f5 = this.RT();
                        f3 = f4 * f5;
                        f2 = this.Xtjvx * f5;
                        try {
                            this.jTsqG = f4;
                            this.gILqY.dhc(this.pAjuu);
                            rk4 = this.ormBS;
                            rj3 = this.LkpAS ? rj.XzDkv : rj.AYqck;
                        }
                        catch (MatchException matchException) {
                            throw cr.SD(matchException);
                        }
                        try {
                            rk4.dhs(rj3);
                            this.ormBS.dhc(this.LkpAS);
                            rk3 = this.KgDVz;
                            rj2 = this.Om() ? rj.XzDkv : rj.AYqck;
                        }
                        catch (MatchException matchException) {
                            throw cr.SD(matchException);
                        }
                        try {
                            try {
                                rk3.dhs(rj2);
                                this.KgDVz.dhc(this.Om());
                                this.OsbYH.dhc(this.vCMYc);
                                bl4 = this.pAjuu;
                                if (iSArray == null) break block18;
                                if (!bl4) break block19;
                            }
                            catch (MatchException matchException) {
                                throw cr.SD(matchException);
                            }
                            this.toIeR = MathHelper.clamp((float)((float)lC2.cff() - this.lGacw), (float)0.0f, (float)(vec2f.x - f3));
                            this.QWaAn = MathHelper.clamp((float)((float)lC2.cfg() - this.WjFpo), (float)0.0f, (float)(vec2f.y - f2));
                            bl4 = rr.diY((int)cr.SK("h", (int)5942, (long)(0x72125F24498A04AFL ^ l2)));
                        }
                        catch (MatchException matchException) {
                            throw cr.SD(matchException);
                        }
                    }
                    bl3 = bl4;
                    try {
                        rk2 = rD.dlK().RB().QQ();
                        bl2 = bl3;
                        if (iSArray == null) break block20;
                        if (bl2) break block21;
                    }
                    catch (MatchException matchException) {
                        throw cr.SD(matchException);
                    }
                    bl2 = true;
                    break block20;
                }
                bl2 = false;
            }
            try {
                rk2.dhc(bl2);
                if (bl3) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw cr.SD(matchException);
            }
            for (ck ck2 : rD.dlK().RB().QP()) {
                block22: {
                    block23: {
                        try {
                            try {
                                if (iSArray == null) break block22;
                                if (ck2.QF() != cl.zjBim) break block23;
                            }
                            catch (MatchException matchException) {
                                throw cr.SD(matchException);
                            }
                            this.toIeR = this.RN(ck2, this.toIeR, List.of(Float.valueOf(0.0f), Float.valueOf(f3), Float.valueOf(f3 / 2.0f)), List.of(Float.valueOf(0.0f), Float.valueOf(-f3), Float.valueOf(-f3 / 2.0f)));
                            if (iSArray != null) continue;
                        }
                        catch (MatchException matchException) {
                            throw cr.SD(matchException);
                        }
                    }
                    this.QWaAn = this.RN(ck2, this.QWaAn, List.of(Float.valueOf(0.0f), Float.valueOf(f2)), List.of(Float.valueOf(0.0f), Float.valueOf(-f2)));
                }
                if (iSArray != null) continue;
            }
        }
    }

    public cr RO(float f2, float f3) {
        this.toIeR = f2;
        this.QWaAn = f3;
        return this;
    }

    private static MatchException SD(MatchException matchException) {
        return matchException;
    }

    public cr Ss(boolean bl2) {
        this.LkpAS = bl2;
        return this;
    }

    public cr St(boolean bl2) {
        this.vCMYc = bl2;
        return this;
    }

    public cr Su(boolean bl2) {
        this.pAjuu = bl2;
        return this;
    }

    public boolean Sg() {
        return this.pAjuu;
    }

    public cr Sv(float f2) {
        this.lGacw = f2;
        return this;
    }

    public cr Sw(float f2) {
        this.WjFpo = f2;
        return this;
    }

    public cr Sx(float f2) {
        this.TSvLw = f2;
        return this;
    }

    public cr Sy(float f2) {
        this.VngMS = f2;
        return this;
    }

    public float RX() {
        return this.QWaAn;
    }

    private static int SJ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cr.SI(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public float RU() {
        return this.jTsqG * this.RT();
    }

    public boolean Om() {
        return true;
    }

    public boolean Se() {
        return this.LkpAS;
    }

    public float RV() {
        return this.Xtjvx * this.RT();
    }

    @Override
    public boolean onMouseClicked(double d2, double d3, mA mA2) {
        boolean bl2;
        block23: {
            block24: {
                mA mA3;
                mA mA4;
                iS[] iSArray;
                long l2;
                block25: {
                    block26: {
                        cr cr2;
                        block27: {
                            block28: {
                                l2 = yIaJZ ^ 0x7F1AB2301C4FL;
                                boolean bl3 = this.RP(d2, d3);
                                iSArray = cr.SC();
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                bl2 = bl3;
                                                                if (iSArray == null) break block23;
                                                                if (!bl2) break block24;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cr.SD(matchException);
                                                            }
                                                            bl2 = this.LkpAS;
                                                            if (iSArray == null) break block23;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cr.SD(matchException);
                                                        }
                                                        if (!bl2) break block24;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw cr.SD(matchException);
                                                    }
                                                    mA4 = mA2;
                                                    mA3 = mA.sCBUa;
                                                    if (iSArray == null) break block25;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cr.SD(matchException);
                                                }
                                                if (mA4 != mA3) break block26;
                                            }
                                            catch (MatchException matchException) {
                                                throw cr.SD(matchException);
                                            }
                                            cr2 = this;
                                            if (iSArray == null) break block27;
                                        }
                                        catch (MatchException matchException) {
                                            throw cr.SD(matchException);
                                        }
                                        if (!(cr2 instanceof bU)) break block28;
                                    }
                                    catch (MatchException matchException) {
                                        throw cr.SD(matchException);
                                    }
                                    return false;
                                }
                                catch (MatchException matchException) {
                                    throw cr.SD(matchException);
                                }
                            }
                            this.pAjuu = true;
                            cr2 = this;
                        }
                        float f2 = cr2.RT();
                        this.lGacw = (float)(d2 - (double)this.toIeR) * f2;
                        this.WjFpo = (float)(d3 - (double)this.QWaAn) * f2;
                        this.TSvLw = this.toIeR;
                        this.VngMS = this.QWaAn;
                        return true;
                    }
                    mA4 = mA2;
                    mA3 = mA.frWTZ;
                }
                if (mA4 == mA3) {
                    block29: {
                        CallSite callSite;
                        ap ap2;
                        this.pAjuu = false;
                        this.vCMYc = true;
                        this.AyAnj.dhg();
                        float f3 = this.toIeR + (float)(d2 - (double)this.toIeR) * this.RT();
                        float f4 = this.QWaAn + (float)(d3 - (double)this.QWaAn) * this.RT();
                        try {
                            ap2 = new ap(f3, f4, 110.0f, 6.0f);
                            callSite = this.oZllQ.isEmpty() ? cr.SH("u", (int)31643, (long)(0x5F4E0899FF911891L ^ l2)) : cr.SH("u", (int)3802, (long)(0x2CE150DF83CEEDD1L ^ l2));
                        }
                        catch (MatchException matchException) {
                            throw cr.SD(matchException);
                        }
                        ap ap3 = ap2.pW((String)((Object)callSite)).qq();
                        for (cB cB2 : this.oZllQ) {
                            try {
                                ap3.pU(cB2);
                                if (iSArray != null) {
                                    if (iSArray != null) continue;
                                    break;
                                }
                                break block29;
                            }
                            catch (MatchException matchException) {
                                throw cr.SD(matchException);
                            }
                        }
                        ap3.qn((String)((Object)cr.SH("u", (int)6072, (long)(0x59099E596AC2F4B1L ^ l2))), lf.JHGge, jk.mPXGi, jk.mPXGi, aj2 -> {
                            this.LkpAS = false;
                            aj2.oj(false);
                        }).qo(() -> {
                            this.vCMYc = false;
                        });
                        rD.dlK().Rs(ap3);
                    }
                    return true;
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    @Override
    public boolean onMouseReleased(double d2, double d3, mA mA2) {
        boolean bl2;
        block6: {
            block7: {
                long l2 = yIaJZ ^ 0x16737CF5A1E2L;
                iS[] iSArray = cr.SC();
                try {
                    try {
                        try {
                            bl2 = this.pAjuu;
                            if (iSArray == null) break block6;
                            if (!bl2) break block7;
                        }
                        catch (MatchException matchException) {
                            throw cr.SD(matchException);
                        }
                        if (mA2 != mA.sCBUa) break block7;
                    }
                    catch (MatchException matchException) {
                        throw cr.SD(matchException);
                    }
                    this.pAjuu = false;
                }
                catch (MatchException matchException) {
                    throw cr.SD(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cr.class, "SG", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(cr.class, "SJ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

