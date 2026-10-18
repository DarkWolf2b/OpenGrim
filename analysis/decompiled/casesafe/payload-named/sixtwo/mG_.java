/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.MathHelper
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.nio.ByteBuffer;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.util.math.MathHelper;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jk;
import sixtwo.lT;
import sixtwo.mZ;
import sixtwo.mr;

public class mG {
    public static mG QHTxQ;
    public static mG hoGuU;
    public static mG vuAhq;
    public static mG rxCUH;
    public static mG FQWvo;
    public static mG Cgzkn;
    public static mG NwQaf;
    public static mG JTHGB;
    public static mG NiWiU;
    public static mG xeUrY;
    public static mG yHyOB;
    public static mG ibYER;
    public static mG UhgnI;
    private final float xjQHn;
    private final float FZDzG;
    private final float YYINU;
    private final float WkNmh;
    private transient float[] ovptP;
    private static mG sxpMj;
    private static final ByteBuffer eJMAE;
    private static int EyWoz;
    private static final long SITGr;
    private static final String jvVIY;
    private static final long[] QAIuI;
    private static final Integer[] MsXTk;
    private static final Map nZyyJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public mG cob(float f2) {
        return new mG(this.xjQHn, this.FZDzG, this.YYINU, this.WkNmh * f2);
    }

    private mG(float f2, float f3, float f4) {
        this(f2, f3, f4, 255.0f);
    }

    private mG(float f2, float f3, float f4, float f5) {
        f2 = MathHelper.clamp((float)f2, (float)0.0f, (float)255.0f);
        f3 = MathHelper.clamp((float)f3, (float)0.0f, (float)255.0f);
        f4 = MathHelper.clamp((float)f4, (float)0.0f, (float)255.0f);
        f5 = MathHelper.clamp((float)f5, (float)0.0f, (float)255.0f);
        this.xjQHn = f2;
        this.FZDzG = f3;
        this.YYINU = f4;
        this.WkNmh = f5;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    mG.SITGr = gb.aYR(1187944685927143086L, -224467402785640834L, MethodHandles.lookup().lookupClass()).a(168219105537300L);
                    var11 = mG.SITGr ^ 68379434736826L;
                    mG.cov(0);
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
lbl14:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("\u00d6\f\u00a4N\u0014SS\u00c9\u00c4y\u00ba\u00d5\u00b4\u00cc\u008d=\u00ae\u00d9\u001b\u00b4N{Ec".getBytes("ISO-8859-1"));
                ** while (true)
                mG.jvVIY = mG.coz(var15_3).intern();
                mG.nZyyJ = new HashMap<K, V>(13);
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
                var6_6 = new long[9];
                var3_7 = 0;
                var4_8 = "/Kfz\u00bb\u00fc\u00c4u\u00b5\u008f\u009a\u00cf(f\u00e2\u001bI\u00a7\u000f\u00d2\u0096*\u0018w\u00ef\r\u0087\u0089\u0098)2\u008c\u0013\u00ae\u00db\u00bbZJ3\u00c3\u00e7SU\u0095\u0000\u00c4\u00be\u00a8\u00e2\u00d6\u00a1\u009ax\t\u00b4\u0003";
                var5_9 = "/Kfz\u00bb\u00fc\u00c4u\u00b5\u008f\u009a\u00cf(f\u00e2\u001bI\u00a7\u000f\u00d2\u0096*\u0018w\u00ef\r\u0087\u0089\u0098)2\u008c\u0013\u00ae\u00db\u00bbZJ3\u00c3\u00e7SU\u0095\u0000\u00c4\u00be\u00a8\u00e2\u00d6\u00a1\u009ax\t\u00b4\u0003".length();
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
lbl45:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "\u00b6H'\u0093\u00ffD\u00c3(\u00fb\u00f1\u008bF(\u0095\u00d2[";
                    var5_9 = "\u00b6H'\u0093\u00ffD\u00c3(\u00fb\u00f1\u008bF(\u0095\u00d2[".length();
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
lbl58:
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
lbl71:
                // 1 sources

                ** continue;
            }
        }
        mG.QAIuI = var6_6;
        mG.MsXTk = new Integer[9];
        mG.QHTxQ = mG.cnP(0.0f, 0.0f, 0.0f);
        mG.hoGuU = mG.cnP(255.0f, 255.0f, 255.0f);
        mG.vuAhq = mG.cnP(255.0f, 0.0f, 0.0f);
        mG.rxCUH = mG.cnP(0.0f, 255.0f, 71.0f);
        mG.FQWvo = mG.cnP(0.0f, 255.0f, 255.0f);
        mG.Cgzkn = mG.cnP(0.0f, 71.0f, 255.0f);
        mG.NwQaf = mG.cnP(128.0f, 205.0f, 255.0f);
        mG.JTHGB = mG.cnP(88.0f, 86.0f, 214.0f);
        mG.NiWiU = mG.cnP(255.0f, 255.0f, 0.0f);
        mG.xeUrY = mG.cnP(255.0f, 155.0f, 0.0f);
        mG.yHyOB = mG.cnP(151.0f, 71.0f, 255.0f);
        mG.ibYER = mG.cnP(255.0f, 45.0f, 85.0f);
        mG.UhgnI = mG.cnR(0.0f, 0.0f, 0.0f, 0.0f);
        mG.sxpMj = mG.hoGuU;
        mG.eJMAE = ByteBuffer.allocateDirect(4);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public boolean equals(Object object) {
        Object object2;
        int[] nArray;
        block13: {
            block14: {
                long l2 = SITGr ^ 0x43280403A1ADL;
                nArray = mr.clW();
                try {
                    try {
                        object2 = this;
                        if (nArray != null) break block13;
                        if (object2 != object) break block14;
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw mG.coy(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw mG.coy(matchException);
                }
            }
            object2 = object;
        }
        try {
            boolean bl2 = object2 instanceof mG;
            if (nArray != null) return bl2;
            if (!bl2) return false;
        }
        catch (MatchException matchException) {
            throw mG.coy(matchException);
        }
        mG mG2 = (mG)object;
        try {
            if (nArray != null) {
                return false;
            }
        }
        catch (MatchException matchException) {
            throw mG.coy(matchException);
        }
        try {
            try {
                int n2 = this.coh();
                if (nArray != null) return n2 != 0;
                if (n2 != mG2.coh()) return 0 != 0;
                return 1 != 0;
            }
            catch (MatchException matchException) {
                throw mG.coy(matchException);
            }
        }
        catch (MatchException matchException) {
            throw mG.coy(matchException);
        }
    }

    public int hashCode() {
        return Integer.hashCode(this.coh());
    }

    public float cos() {
        return this.FZDzG;
    }

    public float[] con() {
        return new float[]{this.xjQHn / 255.0f, this.FZDzG / 255.0f, this.YYINU / 255.0f, this.WkNmh / 255.0f};
    }

    private static MatchException coy(MatchException matchException) {
        return matchException;
    }

    private float[] col() {
        float[] fArray;
        block4: {
            block5: {
                long l2 = SITGr ^ 0x5E570D1A29B0L;
                int[] nArray = mr.clW();
                try {
                    try {
                        fArray = this.ovptP;
                        if (nArray != null) break block4;
                        if (fArray != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw mG.coy(matchException);
                    }
                    this.ovptP = this.com();
                }
                catch (MatchException matchException) {
                    throw mG.coy(matchException);
                }
            }
            fArray = this.ovptP;
        }
        return fArray;
    }

    public static mG cnQ(int n2) {
        int n3 = jk.bDp(n2);
        int n4 = jk.bDq(n2);
        int n5 = jk.bDr(n2);
        int n6 = jk.bDs(n2);
        return new mG(n3, n4, n5, n6);
    }

    public mG coa(float f2) {
        return new mG(this.xjQHn, this.FZDzG, this.YYINU, f2);
    }

    public mG cod() {
        return this.coe(0.7f);
    }

    public static mG cnP(float f2, float f3, float f4) {
        return new mG(f2, f3, f4);
    }

    public mG coe(float f2) {
        float f3 = Math.max(this.xjQHn * f2, 0.0f);
        float f4 = Math.max(this.FZDzG * f2, 0.0f);
        float f5 = Math.max(this.YYINU * f2, 0.0f);
        return new mG(f3, f4, f5, this.WkNmh);
    }

    public static void cov(int n2) {
        EyWoz = n2;
    }

    public static mG cnT(String string) {
        long l2 = SITGr ^ 0x5EF9AD47B680L;
        int n2 = Integer.decode(string);
        return mG.cnP(n2 >> mG.coC("y", (int)31717, (long)(0x13CC3A8147F8BD54L ^ l2)) & mG.coC("y", (int)965, (long)(0x339B7928DB86C572L ^ l2)), n2 >> mG.coC("y", (int)24932, (long)(0x5C5FAAE458DDA7D2L ^ l2)) & mG.coC("y", (int)5525, (long)(0x46EB1534814E5325L ^ l2)), n2 & mG.coC("y", (int)5525, (long)(0x46EB1534814E5325L ^ l2)));
    }

    /*
     * Unable to fully structure code
     */
    public static float[] cnV(int var0, int var1_1, int var2_2, float[] var3_3) {
        block51: {
            block48: {
                block50: {
                    block53: {
                        block49: {
                            block47: {
                                block52: {
                                    block46: {
                                        block45: {
                                            block43: {
                                                block44: {
                                                    block41: {
                                                        block42: {
                                                            block40: {
                                                                block39: {
                                                                    var4_4 = mG.SITGr ^ 106917368748664L;
                                                                    var6_5 = mr.clW();
                                                                    try {
                                                                        try {
                                                                            v0 = var3_3;
                                                                            if (var6_5 != null) break block39;
                                                                            if (v0 != null) break block40;
                                                                        }
                                                                        catch (MatchException v1) {
                                                                            throw mG.coy(v1);
                                                                        }
                                                                        v0 = new float[3];
                                                                    }
                                                                    catch (MatchException v2) {
                                                                        throw mG.coy(v2);
                                                                    }
                                                                }
                                                                var3_3 = v0;
                                                            }
                                                            var10_6 = Math.max(var0, var1_1);
                                                            try {
                                                                v3 = var2_2;
                                                                v4 = var10_6;
                                                                if (var6_5 != null) break block41;
                                                                if (v3 <= v4) break block42;
                                                            }
                                                            catch (MatchException v5) {
                                                                throw mG.coy(v5);
                                                            }
                                                            var10_6 = var2_2;
                                                        }
                                                        v3 = var0;
                                                        v4 = var1_1;
                                                    }
                                                    var11_7 = Math.min(v3, v4);
                                                    try {
                                                        v6 = var2_2;
                                                        if (var6_5 != null) break block43;
                                                        if (v6 >= var11_7) break block44;
                                                    }
                                                    catch (MatchException v7) {
                                                        throw mG.coy(v7);
                                                    }
                                                    var11_7 = var2_2;
                                                }
                                                v6 = var10_6;
                                            }
                                            var9_8 = (float)v6 / 255.0f;
                                            try {
                                                try {
                                                    v8 = var10_6;
                                                    if (var6_5 != null) break block45;
                                                    if (v8 == 0) break block46;
                                                }
                                                catch (MatchException v9) {
                                                    throw mG.coy(v9);
                                                }
                                                v8 = var10_6 - var11_7;
                                            }
                                            catch (MatchException v10) {
                                                throw mG.coy(v10);
                                            }
                                        }
                                        var8_9 = (float)v8 / (float)var10_6;
                                        if (var6_5 == null) break block52;
                                    }
                                    var8_9 = 0.0f;
                                }
                                try {
                                    cfr_temp_0 = var8_9 - 0.0f;
                                    v11 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                    if (var6_5 != null) break block47;
                                    if (v11 == false) {
                                    }
                                    ** GOTO lbl75
                                }
                                catch (MatchException v12) {
                                    throw mG.coy(v12);
                                }
                                var7_10 = 0.0f;
                                try {
                                    if (var6_5 == null) break block48;
lbl75:
                                    // 2 sources

                                    v11 = var10_6 - var0;
                                }
                                catch (MatchException v13) {
                                    throw mG.coy(v13);
                                }
                            }
                            var12_11 = (float)v11 / (float)(var10_6 - var11_7);
                            var13_12 = (float)(var10_6 - var1_1) / (float)(var10_6 - var11_7);
                            var14_13 = (float)(var10_6 - var2_2) / (float)(var10_6 - var11_7);
                            try {
                                v14 = var0;
                                v15 = var10_6;
                                if (var6_5 != null) break block49;
                                if (v14 == v15) {
                                }
                                ** GOTO lbl95
                            }
                            catch (MatchException v16) {
                                throw mG.coy(v16);
                            }
                            var7_10 = var14_13 - var13_12;
                            try {
                                if (var6_5 == null) break block50;
lbl95:
                                // 2 sources

                                v14 = var1_1;
                                v15 = var10_6;
                            }
                            catch (MatchException v17) {
                                throw mG.coy(v17);
                            }
                        }
                        if (v14 != v15) break block53;
                        var7_10 = 2.0f + var12_11 - var14_13;
                        if (var6_5 == null) break block50;
                    }
                    var7_10 = 4.0f + var13_12 - var12_11;
                }
                var7_10 /= 6.0f;
                try {
                    if (var6_5 != null) break block51;
                    if (!(var7_10 < 0.0f)) break block48;
                }
                catch (MatchException v18) {
                    throw mG.coy(v18);
                }
                var7_10 += 1.0f;
            }
            var3_3[0] = var7_10;
            var3_3[1] = var8_9;
            var3_3[2] = var9_8;
        }
        try {
            v19 = var3_3;
            if (iS.bwL() == null) {
                mr.clV(new int[3]);
            }
        }
        catch (MatchException v20) {
            throw mG.coy(v20);
        }
        return v19;
    }

    public static mG cnR(float f2, float f3, float f4, float f5) {
        return new mG(f2, f3, f4, f5);
    }

    public mG cnZ(float f2) {
        return new mG(this.xjQHn, this.FZDzG, f2, this.WkNmh);
    }

    public mG cnY(float f2) {
        return new mG(this.xjQHn, f2, this.YYINU, this.WkNmh);
    }

    public mG coc(mG mG2, float f2) {
        f2 = Math.min(1.0f, Math.max(0.0f, f2));
        return new mG(mZ.csl(this.cor(), mG2.cor(), f2), mZ.csl(this.cos(), mG2.cos(), f2), mZ.csl(this.cot(), mG2.cot(), f2), mZ.csl(this.cou(), mG2.cou(), f2));
    }

    public float cok() {
        return this.col()[1];
    }

    /*
     * Unable to fully structure code
     */
    public static mG cnS(float var0, float var1_1, float var2_2) {
        block17: {
            block16: {
                block15: {
                    var3_3 = mG.SITGr ^ 94785707059028L;
                    var6_4 = 0;
                    var5_5 = mr.clW();
                    var7_6 = 0;
                    var8_7 = 0;
                    try {
                        v0 = var1_1;
                        v1 = 0.0f;
                        if (var5_5 != null) break block15;
                        if (v0 == v1) {
                        }
                        ** GOTO lbl19
                    }
                    catch (MatchException v2) {
                        throw mG.coy(v2);
                    }
                    var7_6 = var8_7 = (int)(var2_2 * 255.0f + 0.5f);
                    var6_4 = var8_7;
                    try {
                        if (var5_5 == null) break block16;
lbl19:
                        // 2 sources

                        v0 = var0 - (float)Math.floor(var0);
                        v1 = 6.0f;
                    }
                    catch (MatchException v3) {
                        throw mG.coy(v3);
                    }
                }
                var9_8 = v0 * v1;
                var10_9 = var9_8 - (float)Math.floor(var9_8);
                var11_10 = var2_2 * (1.0f - var1_1);
                var12_11 = var2_2 * (1.0f - var1_1 * var10_9);
                var13_12 = var2_2 * (1.0f - var1_1 * (1.0f - var10_9));
                try {
                    v4 = (int)var9_8;
                    if (var5_5 != null) break block17;
                }
                catch (MatchException v5) {
                    throw mG.coy(v5);
                }
                {
                    ** switch (v4)
                }
lbl-1000:
                // 1 sources

                {
                    case 0: {
                        var6_4 = (int)(var2_2 * 255.0f + 0.5f);
                        var7_6 = (int)(var13_12 * 255.0f + 0.5f);
                        var8_7 = (int)(var11_10 * 255.0f + 0.5f);
                        if (var5_5 == null) break;
                    }
lbl42:
                    // 2 sources

                    case 1: {
                        var6_4 = (int)(var12_11 * 255.0f + 0.5f);
                        var7_6 = (int)(var2_2 * 255.0f + 0.5f);
                        var8_7 = (int)(var11_10 * 255.0f + 0.5f);
                        if (var5_5 == null) break;
                    }
lbl47:
                    // 2 sources

                    case 2: {
                        var6_4 = (int)(var11_10 * 255.0f + 0.5f);
                        var7_6 = (int)(var2_2 * 255.0f + 0.5f);
                        var8_7 = (int)(var13_12 * 255.0f + 0.5f);
                        if (var5_5 == null) break;
                    }
lbl52:
                    // 2 sources

                    case 3: {
                        var6_4 = (int)(var11_10 * 255.0f + 0.5f);
                        var7_6 = (int)(var12_11 * 255.0f + 0.5f);
                        var8_7 = (int)(var2_2 * 255.0f + 0.5f);
                        if (var5_5 == null) break;
                    }
lbl57:
                    // 2 sources

                    case 4: {
                        var6_4 = (int)(var13_12 * 255.0f + 0.5f);
                        var7_6 = (int)(var11_10 * 255.0f + 0.5f);
                        var8_7 = (int)(var2_2 * 255.0f + 0.5f);
                        if (var5_5 == null) break;
                    }
lbl62:
                    // 2 sources

                    case 5: {
                        var6_4 = (int)(var2_2 * 255.0f + 0.5f);
                        var7_6 = (int)(var11_10 * 255.0f + 0.5f);
                        var8_7 = (int)(var12_11 * 255.0f + 0.5f);
                    }
                }
            }
            v4 = mG.coC("y", (int)27913, (long)(4817312303983999589L ^ var3_3)) | var6_4 << mG.coC("y", (int)31717, (long)(1426570492270685312L ^ var3_3)) | var7_6 << mG.coC("y", (int)24932, (long)(6656217071019111942L ^ var3_3)) | var8_7;
        }
        return mG.cnQ(v4);
    }

    private static CallSite coC(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mG" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     */
    public static int cnU(float var0, float var1_1, float var2_2) {
        block17: {
            block16: {
                block15: {
                    var3_3 = mG.SITGr ^ 76710289469772L;
                    var6_4 = 0;
                    var7_5 = 0;
                    var5_6 = mr.clW();
                    var8_7 = 0;
                    try {
                        v0 = var1_1;
                        v1 = 0.0f;
                        if (var5_6 != null) break block15;
                        if (v0 == v1) {
                        }
                        ** GOTO lbl19
                    }
                    catch (MatchException v2) {
                        throw mG.coy(v2);
                    }
                    var7_5 = var8_7 = (int)(var2_2 * 255.0f + 0.5f);
                    var6_4 = var8_7;
                    try {
                        if (var5_6 == null) break block16;
lbl19:
                        // 2 sources

                        v0 = var0 - (float)Math.floor(var0);
                        v1 = 6.0f;
                    }
                    catch (MatchException v3) {
                        throw mG.coy(v3);
                    }
                }
                var9_8 = v0 * v1;
                var10_9 = var9_8 - (float)Math.floor(var9_8);
                var11_10 = var2_2 * (1.0f - var1_1);
                var12_11 = var2_2 * (1.0f - var1_1 * var10_9);
                var13_12 = var2_2 * (1.0f - var1_1 * (1.0f - var10_9));
                try {
                    v4 = (int)var9_8;
                    if (var5_6 != null) break block17;
                }
                catch (MatchException v5) {
                    throw mG.coy(v5);
                }
                {
                    ** switch (v4)
                }
lbl-1000:
                // 1 sources

                {
                    case 0: {
                        var6_4 = (int)(var2_2 * 255.0f + 0.5f);
                        var7_5 = (int)(var13_12 * 255.0f + 0.5f);
                        var8_7 = (int)(var11_10 * 255.0f + 0.5f);
                        if (var5_6 == null) break;
                    }
lbl42:
                    // 2 sources

                    case 1: {
                        var6_4 = (int)(var12_11 * 255.0f + 0.5f);
                        var7_5 = (int)(var2_2 * 255.0f + 0.5f);
                        var8_7 = (int)(var11_10 * 255.0f + 0.5f);
                        if (var5_6 == null) break;
                    }
lbl47:
                    // 2 sources

                    case 2: {
                        var6_4 = (int)(var11_10 * 255.0f + 0.5f);
                        var7_5 = (int)(var2_2 * 255.0f + 0.5f);
                        var8_7 = (int)(var13_12 * 255.0f + 0.5f);
                        if (var5_6 == null) break;
                    }
lbl52:
                    // 2 sources

                    case 3: {
                        var6_4 = (int)(var11_10 * 255.0f + 0.5f);
                        var7_5 = (int)(var12_11 * 255.0f + 0.5f);
                        var8_7 = (int)(var2_2 * 255.0f + 0.5f);
                        if (var5_6 == null) break;
                    }
lbl57:
                    // 2 sources

                    case 4: {
                        var6_4 = (int)(var13_12 * 255.0f + 0.5f);
                        var7_5 = (int)(var11_10 * 255.0f + 0.5f);
                        var8_7 = (int)(var2_2 * 255.0f + 0.5f);
                        if (var5_6 == null) break;
                    }
lbl62:
                    // 2 sources

                    case 5: {
                        var6_4 = (int)(var2_2 * 255.0f + 0.5f);
                        var7_5 = (int)(var11_10 * 255.0f + 0.5f);
                        var8_7 = (int)(var12_11 * 255.0f + 0.5f);
                    }
                }
            }
            v4 = mG.coC("y", (int)3097, (long)(8533461138107207009L ^ var3_3)) | var6_4 << mG.coC("y", (int)9171, (long)(4613309662125499052L ^ var3_3)) | var7_5 << mG.coC("y", (int)30857, (long)(7821173852076177904L ^ var3_3)) | var8_7;
        }
        return v4;
    }

    public float cot() {
        return this.YYINU;
    }

    /*
     * Unable to fully structure code
     */
    private float[] com() {
        block26: {
            block24: {
                block25: {
                    block19: {
                        block20: {
                            block22: {
                                block23: {
                                    block21: {
                                        var1_1 = mG.SITGr ^ 18409743815041L;
                                        var4_2 = this.xjQHn / 255.0f;
                                        var5_3 = this.FZDzG / 255.0f;
                                        var6_4 = this.YYINU / 255.0f;
                                        var7_5 = Math.max(var4_2, Math.max(var5_3, var6_4));
                                        var8_6 = Math.min(var4_2, Math.min(var5_3, var6_4));
                                        var3_7 = mr.clW();
                                        var9_8 = var7_5 - var8_6;
                                        var10_9 = 0.0f;
                                        try {
                                            try {
                                                try {
                                                    cfr_temp_0 = var9_8 - 0.0f;
                                                    v0 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                    if (var3_7 != null) break block19;
                                                    if (v0 == false) break block20;
                                                }
                                                catch (MatchException v1) {
                                                    throw mG.coy(v1);
                                                }
                                                v2 = var7_5 == var4_2 ? 0 : (var7_5 > var4_2 ? 1 : -1);
                                                if (var3_7 != null) break block21;
                                            }
                                            catch (MatchException v3) {
                                                throw mG.coy(v3);
                                            }
                                            if (v2 == false) {
                                            }
                                            ** GOTO lbl34
                                        }
                                        catch (MatchException v4) {
                                            throw mG.coy(v4);
                                        }
                                        var10_9 = (var5_3 - var6_4) / var9_8;
                                        try {
                                            try {
                                                if (var3_7 == null) break block22;
lbl34:
                                                // 2 sources

                                                v5 = var7_5;
                                                v6 = var5_3;
                                                if (var3_7 != null) break block23;
                                            }
                                            catch (MatchException v7) {
                                                throw mG.coy(v7);
                                            }
                                            cfr_temp_1 = v5 - v6;
                                            v2 = cfr_temp_1 == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                                        }
                                        catch (MatchException v8) {
                                            throw mG.coy(v8);
                                        }
                                    }
                                    if (v2 != false) ** GOTO lbl50
                                    var10_9 = (var6_4 - var4_2) / var9_8 + 2.0f;
                                    try {
                                        if (var3_7 == null) break block22;
lbl50:
                                        // 2 sources

                                        v5 = (var4_2 - var5_3) / var9_8;
                                        v6 = 4.0f;
                                    }
                                    catch (MatchException v9) {
                                        throw mG.coy(v9);
                                    }
                                }
                                var10_9 = v5 + v6;
                            }
                            var10_9 /= 6.0f;
                            try {
                                cfr_temp_2 = var10_9 - 0.0f;
                                v0 = cfr_temp_2 == 0.0f ? 0 : (cfr_temp_2 < 0.0f ? -1 : 1);
                                if (var3_7 != null) break block19;
                                if (v0 >= 0) break block20;
                            }
                            catch (MatchException v10) {
                                throw mG.coy(v10);
                            }
                            var10_9 += 1.0f;
                        }
                        try {
                            v11 = var7_5;
                            v12 = 0.0f;
                            if (var3_7 != null) break block24;
                            cfr_temp_3 = v11 - v12;
                            v0 = cfr_temp_3 == 0.0f ? 0 : (cfr_temp_3 > 0.0f ? 1 : -1);
                        }
                        catch (MatchException v13) {
                            throw mG.coy(v13);
                        }
                    }
                    try {
                        if (v0 != false) break block25;
                        v14 = 0.0f;
                        break block26;
                    }
                    catch (MatchException v15) {
                        throw mG.coy(v15);
                    }
                }
                v11 = var9_8;
                v12 = var7_5;
            }
            v14 = v11 / v12;
        }
        var11_10 = v14;
        var12_11 = var7_5;
        return new float[]{var10_9, var11_10, var12_11};
    }

    public float cor() {
        return this.xjQHn;
    }

    public mG cog(float f2) {
        float f3 = Math.min(this.xjQHn / f2, 255.0f);
        float f4 = Math.min(this.FZDzG / f2, 255.0f);
        float f5 = Math.min(this.YYINU / f2, 255.0f);
        return new mG(f3, f4, f5, this.WkNmh);
    }

    public float coj() {
        return this.col()[2];
    }

    private static int coA(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1EC5;
        if (MsXTk[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = QAIuI[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])nZyyJ.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    nZyyJ.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mG", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mG.MsXTk[n3] = n4;
        }
        return MsXTk[n3];
    }

    public static int cox() {
        int n2 = mG.cow();
        try {
            if (n2 == 0) {
                return 89;
            }
        }
        catch (MatchException matchException) {
            throw mG.coy(matchException);
        }
        return 0;
    }

    public boolean cnW() {
        float f2;
        block2: {
            block3: {
                long l2 = SITGr ^ 0x458A00D23502L;
                int[] nArray = mr.clW();
                try {
                    float f3 = this.WkNmh - 0.0f;
                    f2 = f3 == 0.0f ? 0 : (f3 < 0.0f ? -1 : 1);
                    if (nArray != null) break block2;
                    if (f2 > 0) break block3;
                }
                catch (MatchException matchException) {
                    throw mG.coy(matchException);
                }
                f2 = 1.0f;
                break block2;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }

    public float cou() {
        return this.WkNmh;
    }

    public mG cof() {
        return this.cog(0.7f);
    }

    public float coi() {
        return this.col()[0];
    }

    public String coo() {
        long l2 = SITGr ^ 0x70908712C06DL;
        return String.format(jvVIY, Math.round(this.WkNmh), Math.round(this.xjQHn), Math.round(this.FZDzG), Math.round(this.YYINU));
    }

    public static mG cop(float f2, float f3) {
        mG mG2;
        long l2 = SITGr ^ 0x585FE0B0A30CL;
        eJMAE.clear();
        lT.ciQ().readPixel((int)f2, (int)f3, eJMAE);
        int n2 = eJMAE.get() & mG.coC("y", (int)5525, (long)(0x46EB1392CCB946A9L ^ l2));
        int n3 = eJMAE.get() & mG.coC("y", (int)5525, (long)(0x46EB1392CCB946A9L ^ l2));
        int n4 = eJMAE.get() & mG.coC("y", (int)5525, (long)(0x46EB1392CCB946A9L ^ l2));
        sxpMj = mG2 = new mG(n2, n3, n4);
        return mG2;
    }

    public static mG coq() {
        return sxpMj;
    }

    private static String coz(byte[] byArray) {
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

    private static int coB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = mG.coA(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public mG cnX(float f2) {
        return new mG(f2, this.FZDzG, this.YYINU, this.WkNmh);
    }

    public int coh() {
        long l2 = SITGr ^ 0x46A4C5C1A2CDL;
        int n2 = Math.round(this.WkNmh);
        int n3 = Math.round(this.xjQHn);
        int n4 = Math.round(this.FZDzG);
        int n5 = Math.round(this.YYINU);
        return (n2 & mG.coC("y", (int)5525, (long)(0x46EB0D69E9C84768L ^ l2))) << mG.coC("y", (int)31181, (long)(0x3F99E452261D2B32L ^ l2)) | (n3 & mG.coC("y", (int)5525, (long)(0x46EB0D69E9C84768L ^ l2))) << mG.coC("y", (int)31717, (long)(0x13CC22DC2F7EA919L ^ l2)) | (n4 & mG.coC("y", (int)5525, (long)(0x46EB0D69E9C84768L ^ l2))) << mG.coC("y", (int)24932, (long)(0x5C5FB2B9305BB39FL ^ l2)) | n5 & mG.coC("y", (int)5525, (long)(0x46EB0D69E9C84768L ^ l2));
    }

    public static int cow() {
        return EyWoz;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(mG.class, "coB", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

