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
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.cM;
import sixtwo.cN;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.jH;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.ob;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class cO {
    private final int[] iiNmF;
    private final int[] JeBrr;
    private final mT JDVbW;
    private final long inlwG;
    private LocalTime FXora;
    private cM elVoN;
    private final rk rJzYE;
    private final rk IosXQ;
    private final rk RzMsO;
    private static final long ayAdd;
    private static final String[] fUKvm;
    private static final String[] FnKDz;
    private static final Map ccuta;
    private static final long[] lEezb;
    private static final Integer[] vIIBZ;
    private static final Map KPEDz;
    private static final long xTsAN;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cO(int[] nArray, cM cM2) {
        long l2 = ayAdd ^ 0x695C85E1A1ACL;
        int[] nArray2 = new int[cO.Yq("o", (int)13303, (long)(0x410BEFF224DBEF0FL ^ l2))];
        nArray2[0] = (int)cO.Yq("o", (int)27524, (long)(0x148959821039B776L ^ l2));
        nArray2[1] = (int)cO.Yq("o", (int)16124, (long)(0x23993B35C4706219L ^ l2));
        nArray2[2] = (int)cO.Yq("o", (int)4496, (long)(0x47C46A84354F4D61L ^ l2));
        nArray2[3] = (int)cO.Yq("o", (int)1103, (long)(0x1F3E151D28458BAL ^ l2));
        nArray2[4] = (int)cO.Yq("o", (int)4891, (long)(0x6E83BBB7E0E24FE5L ^ l2));
        nArray2[5] = (int)cO.Yq("o", (int)15415, (long)(0x65C7C6CCD99060CAL ^ l2));
        nArray2[cO.Yq("o", (int)32647, (long)(0x1D3A35B8A9A2370L ^ l2))] = (int)cO.Yq("o", (int)27499, (long)(0x6453DCBA7B70B797L ^ l2));
        nArray2[cO.Yq("o", (int)3616, (long)(0x69BD679E4EC852C3L ^ l2))] = (int)cO.Yq("o", (int)6960, (long)(0x6A8A08504842C7CAL ^ l2));
        nArray2[cO.Yq("o", (int)28472, (long)(0x3B44FCBAD246B3CEL ^ l2))] = (int)cO.Yq("o", (int)31320, (long)(0x165BB5CF028C26BCL ^ l2));
        nArray2[cO.Yq("o", (int)16146, (long)(0xFF4E698DF1BE3F4L ^ l2))] = (int)cO.Yq("o", (int)15415, (long)(0x65C7C6CCD99060CAL ^ l2));
        nArray2[cO.Yq("o", (int)1944, (long)(0x1816EC2F4F95DB7AL ^ l2))] = (int)cO.Yq("o", (int)16798, (long)(0x3D775D31717E1D79L ^ l2));
        nArray2[cO.Yq("o", (int)30013, (long)(0x49441987D9B29C4L ^ l2))] = (int)cO.Yq("o", (int)25693, (long)(0x3FED88DA4186B8ADL ^ l2));
        this(nArray2, nArray, cM2);
    }

    public cO(int[] nArray, int[] nArray2, cM cM2) {
        long l2 = ayAdd ^ 0x7FF0DE2FCDE6L;
        this.JDVbW = mT.cpz();
        this.rJzYE = new rk((int)cO.Yq("o", (int)6225, (long)(0x34B9233DEFE928E0L ^ l2))).dhs(rj.XzDkv);
        this.IosXQ = new rk((int)cO.Yq("o", (int)12154, (long)(0x69A34AF2284B9FC4L ^ l2))).dhs(rj.NJlxm);
        this.RzMsO = new rk((int)cO.Yq("o", (int)20052, (long)(0xA70A0B9F8FEE1L ^ l2))).dhs(rj.XzDkv);
        this.iiNmF = nArray;
        this.JeBrr = nArray2;
        this.inlwG = xTsAN;
        this.FXora = LocalTime.now();
        this.elVoN = cM2;
        int n2 = cN.XT();
        try {
            if (iS.bwL() == null) {
                cN.XR(++n2);
            }
        }
        catch (MatchException matchException) {
            throw cO.Yj(matchException);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block17: {
            block16: {
                block15: {
                    block14: {
                        cO.ayAdd = gb.aYR(3981959989755749009L, -3203703168605022708L, MethodHandles.lookup().lookupClass()).a(137114852567232L);
                        cO.ccuta = new HashMap<K, V>(13);
                        var16 = cO.ayAdd ^ 74607018597392L;
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
                        var25_3 = new String[2];
                        var23_4 = 0;
                        var22_5 = "\u00fcdb\u0098\u00e3\u0098\u00e3A~I\u0085|/\u009b}\r\u0010\u001d@\u00f2j\u00db\u0006A>'\u00af[\u001e\u0006Q\u00eby";
                        var24_6 = "\u00fcdb\u0098\u00e3\u0098\u00e3A~I\u0085|/\u009b}\r\u0010\u001d@\u00f2j\u00db\u0006A>'\u00af[\u001e\u0006Q\u00eby".length();
                        var21_7 = 16;
                        var20_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            continue;
                            break;
                        }
lbl22:
                        // 1 sources

                        while (true) {
                            var25_3[var23_4++] = cO.Yk(var26_9).intern();
                            if ((var20_8 += var21_7) < var24_6) {
                                var21_7 = var22_5.charAt(var20_8);
                                ** continue;
                            }
                            break block14;
                            break;
                        }
                        v3 = ++var20_8;
                        var26_9 = var18_1.doFinal(var22_5.substring(v3, v3 + var21_7).getBytes("ISO-8859-1"));
                        ** while (true)
                    }
                    cO.fUKvm = var25_3;
                    cO.FnKDz = new String[2];
                    cO.KPEDz = new HashMap<K, V>(13);
                    var5_10 = Cipher.getInstance("DES/CBC/NoPadding");
                    v4 = SecretKeyFactory.getInstance("DES");
                    v5 = new byte[8];
                    v6 = v5;
                    v5[0] = (byte)(var16 >>> 56);
                    for (var6_11 = 1; var6_11 < 8; ++var6_11) {
                        v6 = v6;
                        v6[var6_11] = (byte)(var16 << var6_11 * 8 >>> 56);
                    }
                    var5_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                    var11_12 = new long[22];
                    var8_13 = 0;
                    var9_14 = "\n\\\u009bt/.\u00d1\u00f0Wk\u00b50\u0080\bTf\u008al\u00a3\b\u0094@\u00b7L\u00d0\u00ff\u00d4\u00b32\u00c4$O\u0012\u008c\u0006Z\u00cb\u00db\u00b0\u00f7\u00bb\u0098p>a#\u000e\u0085B\u00c91\u00ab\u00df\u00a4\u00ea\u00dd\u00df\u00cf\u0091\fe\u001a\u0019\u0099\u00ea\u00ed\u00fa\u00ba\u00bf/D\u00c5EF^\u0098\u00b0\u00dfH\u00a0\u0086\u0084\u0017\u008d\u00c1\u00d3\u0014\u00d6\u0018\u0014mK-#n\u00c4\u0094Jm\u0082Sj\u00b4JM\u008f\u00b4e^3\u00e0\u00c1 \u007f\u00e3\u0014\u001ar\u0012\n\u009f\u00f6\u0089\u00d6b\u008d\u00cc\u00b5\\\u0097\u00f1\u00f2\u00da\u00af%\u0019\u00c6(\u00ed\u00ce@\u0005\u00ffE\u008d\u0011\u0012\u0017\u007f\u00c6#\u0096\u00fd9\u00d4\u007f\u0088e>\u00be";
                    var10_15 = "\n\\\u009bt/.\u00d1\u00f0Wk\u00b50\u0080\bTf\u008al\u00a3\b\u0094@\u00b7L\u00d0\u00ff\u00d4\u00b32\u00c4$O\u0012\u008c\u0006Z\u00cb\u00db\u00b0\u00f7\u00bb\u0098p>a#\u000e\u0085B\u00c91\u00ab\u00df\u00a4\u00ea\u00dd\u00df\u00cf\u0091\fe\u001a\u0019\u0099\u00ea\u00ed\u00fa\u00ba\u00bf/D\u00c5EF^\u0098\u00b0\u00dfH\u00a0\u0086\u0084\u0017\u008d\u00c1\u00d3\u0014\u00d6\u0018\u0014mK-#n\u00c4\u0094Jm\u0082Sj\u00b4JM\u008f\u00b4e^3\u00e0\u00c1 \u007f\u00e3\u0014\u001ar\u0012\n\u009f\u00f6\u0089\u00d6b\u008d\u00cc\u00b5\\\u0097\u00f1\u00f2\u00da\u00af%\u0019\u00c6(\u00ed\u00ce@\u0005\u00ffE\u008d\u0011\u0012\u0017\u007f\u00c6#\u0096\u00fd9\u00d4\u007f\u0088e>\u00be".length();
                    var7_16 = 0;
                    while (true) {
                        var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                        v7 = var11_12;
                        v8 = var8_13++;
                        v9 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                        v10 = -1;
                        break block15;
                        break;
                    }
lbl58:
                    // 1 sources

                    while (true) {
                        v7[v8] = v11;
                        if (var7_16 < var10_15) ** continue;
                        var9_14 = "\u00b7y\u00c7\u00fd\u00d6\u00fb(=\u00f3[\u00ae\u00c7e\u00c19\u008b";
                        var10_15 = "\u00b7y\u00c7\u00fd\u00d6\u00fb(=\u00f3[\u00ae\u00c7e\u00c19\u008b".length();
                        var7_16 = 0;
                        while (true) {
                            var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                            v7 = var11_12;
                            v8 = var8_13++;
                            v9 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                            v10 = 0;
                            break block15;
                            break;
                        }
                        break;
                    }
lbl71:
                    // 1 sources

                    while (true) {
                        v7[v8] = v11;
                        if (var7_16 < var10_15) ** continue;
                        break block16;
                        break;
                    }
                }
                var13_18 = v9;
                var15_19 = var5_10.doFinal(new byte[]{(byte)(var13_18 >>> 56), (byte)(var13_18 >>> 48), (byte)(var13_18 >>> 40), (byte)(var13_18 >>> 32), (byte)(var13_18 >>> 24), (byte)(var13_18 >>> 16), (byte)(var13_18 >>> 8), (byte)var13_18});
                v11 = ((long)var15_19[0] & 255L) << 56 | ((long)var15_19[1] & 255L) << 48 | ((long)var15_19[2] & 255L) << 40 | ((long)var15_19[3] & 255L) << 32 | ((long)var15_19[4] & 255L) << 24 | ((long)var15_19[5] & 255L) << 16 | ((long)var15_19[6] & 255L) << 8 | (long)var15_19[7] & 255L;
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
            cO.lEezb = var11_12;
            cO.vIIBZ = new Integer[22];
            var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
            v12 = SecretKeyFactory.getInstance("DES");
            v13 = new byte[8];
            v14 = v13;
            v13[0] = (byte)(var16 >>> 56);
            for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                v14 = v14;
                v14[var1_21] = (byte)(var16 << var1_21 * 8 >>> 56);
            }
            break block17;
lbl98:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_20.init(2, (Key)v12.generateSecret(new DESKeySpec(v14)), new IvParameterSpec(new byte[8]));
        var2_22 = -984624533690350455L;
        var4_23 = var0_20.doFinal(new byte[]{(byte)(var2_22 >>> 56), (byte)(var2_22 >>> 48), (byte)(var2_22 >>> 40), (byte)(var2_22 >>> 32), (byte)(var2_22 >>> 24), (byte)(var2_22 >>> 16), (byte)(var2_22 >>> 8), (byte)var2_22});
        ** while (true)
        cO.xTsAN = ((long)var4_23[0] & 255L) << 56 | ((long)var4_23[1] & 255L) << 48 | ((long)var4_23[2] & 255L) << 40 | ((long)var4_23[3] & 255L) << 32 | ((long)var4_23[4] & 255L) << 24 | ((long)var4_23[5] & 255L) << 16 | ((long)var4_23[6] & 255L) << 8 | (long)var4_23[7] & 255L;
    }

    public boolean XX() {
        float f2;
        block8: {
            block7: {
                int n2;
                block6: {
                    long l2 = ayAdd ^ 0x8B837815F27L;
                    n2 = cN.XT();
                    try {
                        try {
                            float f3 = this.rJzYE.dhj() - 0.0f;
                            f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                            if (n2 == 0) break block6;
                            if (f2 != false) break block7;
                        }
                        catch (MatchException matchException) {
                            throw cO.Yj(matchException);
                        }
                        f2 = (float)this.JDVbW.cpC(this.inlwG);
                    }
                    catch (MatchException matchException) {
                        throw cO.Yj(matchException);
                    }
                }
                try {
                    if (n2 == 0) break block8;
                    if (f2 == false) break block7;
                }
                catch (MatchException matchException) {
                    throw cO.Yj(matchException);
                }
                f2 = 1.0f;
                break block8;
            }
            f2 = 0.0f;
        }
        return (boolean)f2;
    }

    public int[] XZ() {
        return this.JeBrr;
    }

    public void XW() {
        float f2;
        rk rk2;
        rj rj2;
        rk rk3;
        long l2 = ayAdd ^ 0x34F50A76FEF7L;
        try {
            this.rJzYE.dhq((int)cO.Yq("o", (int)23763, (long)(0x1A2A9D10532CDF7BL ^ l2)));
            rk3 = this.rJzYE;
            rj2 = this.JDVbW.cpC(this.inlwG) ? rj.AYqck : rj.XzDkv;
        }
        catch (MatchException matchException) {
            throw cO.Yj(matchException);
        }
        try {
            rk3.dhs(rj2);
            rk2 = this.rJzYE;
            f2 = this.JDVbW.cpC(this.inlwG) ? 0.0f : 1.0f;
        }
        catch (MatchException matchException) {
            throw cO.Yj(matchException);
        }
        rk2.dhd(f2);
    }

    public long Yb() {
        return this.inlwG;
    }

    public rk Ye() {
        return this.rJzYE;
    }

    public cM Yd() {
        return this.elVoN;
    }

    public mT Ya() {
        return this.JDVbW;
    }

    public int[] XY() {
        return this.iiNmF;
    }

    public void XV(lC lC2, float f2, float f3, float f4, float f5, float f6, boolean bl2) {
        mG mG2;
        long l2 = ayAdd ^ 0x651FDCCAA9FBL;
        lq lq2 = lE.ePKsc.bYM(7.0f);
        int n2 = cN.XS();
        lq lq3 = lE.WTzbi.bYM(6.0f);
        lq lq4 = lE.joxgd.bYM(6.0f);
        ii ii2 = rD.dlM();
        float f7 = this.rJzYE.dhj();
        mG mG3 = ii2.bjb().coa(255.0f * f7);
        jH.bId(lC2, f2 + f4 / 2.0f, f3 + 12.0f + f5 / 2.0f, 0.5f + 0.5f * f7 * f6);
        lC2.ccU(f2, f3, f4, f5, f7, 0.0f);
        int n3 = n2;
        float f8 = f2 + f5 / 2.0f - 9.0f;
        float f9 = f3 + f5 / 2.0f - 9.0f;
        try {
            lC2.cdg(f8, f9, 18.0f, 18.0f, ld.all(4.0f), mG.cnP(0.0f, 0.0f, 0.0f).coa(51.0f * f7));
            mG2 = bl2 ? this.elVoN.XC() : ii2.bjc();
        }
        catch (MatchException matchException) {
            throw cO.Yj(matchException);
        }
        mG mG4 = mG2;
        float f10 = f2 + f5 / 2.0f - 5.0f;
        float f11 = f3 + f5 / 2.0f - 5.0f;
        lC2.cdW(ob.cBv((String)((Object)cO.Yn("a", (int)22819, (long)(0x3DE5D94EFF916679L ^ l2))) + this.elVoN.XB()), f10, f11, 10.0f, 10.0f, mG4.cob(0.8f));
        lC2.ceA(lq2, this.iiNmF, f2 + 27.0f, f3 + 7.0f, mG3);
        lC2.ceA(lq3, this.JeBrr, f2 + 27.0f, f3 + 15.0f, mG3);
        DateTimeFormatter dateTimeFormatter = DateTimeFormatter.ofPattern((String)((Object)cO.Yn("a", (int)25730, (long)(0x21E83F6137EB5BD9L ^ l2))));
        String string = this.FXora.format(dateTimeFormatter);
        float f12 = f2 + f4 - 7.0f;
        float f13 = f3 + 7.0f;
        try {
            lC2.ceP(lq4, string, f12, f13, mG3.cob(0.5f));
            jH.bIf();
            if (n3 != 0) {
                iS.bwK("sAFTE");
            }
        }
        catch (MatchException matchException) {
            throw cO.Yj(matchException);
        }
    }

    public rk Yg() {
        return this.RzMsO;
    }

    public cO Yi(cM cM2) {
        this.elVoN = cM2;
        return this;
    }

    public cO Yh(LocalTime localTime) {
        this.FXora = localTime;
        return this;
    }

    public LocalTime Yc() {
        return this.FXora;
    }

    private static MatchException Yj(MatchException matchException) {
        return matchException;
    }

    private static CallSite Yq(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cO" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public rk Yf() {
        return this.IosXQ;
    }

    private static String Yk(byte[] byArray) {
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

    private static CallSite Yn(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cO" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int Yo(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3613;
        if (vIIBZ[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = lEezb[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])KPEDz.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    KPEDz.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cO", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cO.vIIBZ[n3] = n4;
        }
        return vIIBZ[n3];
    }

    private static int Yp(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cO.Yo(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static Object Ym(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cO.Yl(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String Yl(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5DE9;
        if (FnKDz[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])ccuta.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ccuta.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cO", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = fUKvm[n3].getBytes("ISO-8859-1");
            cO.FnKDz[n3] = cO.Yk(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return FnKDz[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cO.class, "Yp", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(cO.class, "Ym", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

