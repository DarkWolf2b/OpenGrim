/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.google.gson.JsonElement
 *  com.google.gson.JsonObject
 */
package sixtwo;

import com.google.gson.JsonElement;
import com.google.gson.JsonObject;
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
import sixtwo.gb;
import sixtwo.iH;
import sixtwo.iS;
import sixtwo.id;
import sixtwo.ie;
import sixtwo.if;
import sixtwo.mG;
import sixtwo.rp;

public class ig
implements rp {
    private static final id UauPc;
    private static final if ckEfn;
    public static final ig PtFoz;
    public static final ig gsTXO;
    public static final ig hzckK;
    public static final ig eaYCr;
    public static final ig pHENl;
    public static final ig WSWRe;
    public static final ig OetCB;
    private int[] ZMxLk;
    private ie yJarQ;
    private if eurvE;
    private id ZphLO;
    private static int[] sYFFC;
    private static final long yAiNR;
    private static final String[] XkqOU;
    private static final String[] wICbh;
    private static final Map jNjLa;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public mG bio() {
        return this.yJarQ.bhF();
    }

    public ig() {
    }

    public ig(int[] nArray, ie ie2, if if_, id id2) {
        this.ZMxLk = nArray;
        this.yJarQ = ie2;
        this.eurvE = if_;
        this.ZphLO = id2;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        ig.yAiNR = gb.aYR(-775033035814565264L, -894757739909991001L, MethodHandles.lookup().lookupClass()).a(18112101325254L);
                        var20 = ig.yAiNR ^ 55073402633458L;
                        ig.jNjLa = new HashMap<K, V>(13);
                        ig.biD(null);
                        var11_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var20 >>> 56);
                        for (var12_2 = 1; var12_2 < 8; ++var12_2) {
                            v2 = v2;
                            v2[var12_2] = (byte)(var20 << var12_2 * 8 >>> 56);
                        }
                        var11_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var18_3 = new String[9];
                        var16_4 = 0;
                        var15_5 = "\u00c4#\u00af\u008a\u00aae\u00f07p\u001e\u00e6bX\u00f4d\u00ef<\u00f9\u00ec\u00a8\u0003\u00dc\u00a3\u009a\u00c2\u00f4\u009a\u00d1\u00b1{FH*\u00aa\u00fa}g2\u001b\u0016\u0018\u008e\u008d\u0007\u00cb\u0096\u00f8\u00e8t\u00ac\u00b8\u00fe1\\9\u001c$s\u00d7Y\u001f%\u00d1\u00c6\u00c5 \u00a0\f\u0088\u00ed@j9\u0004\u00fc\t\u0097\u00eb\u00cd\u0000h\u00ce\r\u009d\u0092!\u00c8\u00fa&\u00a0\u0089:\u0002|@\u00ad\u00e0M \u008dj\u0092\u0018\u00bc\u00c5\u00de\u00b5v\u00ce\u00f2\u0017ea\u0097\u008c\u007f\u00a1\u00e3\u00d1\u00fe\u0019\u00ff\u0015\u00fe\u00f4\u009c\u00e1d\u00f2`p\u0010\u008c\u00de\u00b4\u00f5\u00ce\t\u008c\u0017\u0082\u00ea\t\u0090\u0012\u009f|\u00ab \u00cc\u0086j\u000fj'R:9\u00f3\u00ff\u00be\u0016.\u00e5Yq\u00ca\u00cf\u0013\u0006\u00a4\u009e\u0083\u00fb\u0088}\u0016\u00ef\u00fd$\u00d1\u0010\u00a3\u00c7fG\u00c5\u00a3<!\u00dcr\u0007\u0010\u00e4G'f";
                        var17_6 = "\u00c4#\u00af\u008a\u00aae\u00f07p\u001e\u00e6bX\u00f4d\u00ef<\u00f9\u00ec\u00a8\u0003\u00dc\u00a3\u009a\u00c2\u00f4\u009a\u00d1\u00b1{FH*\u00aa\u00fa}g2\u001b\u0016\u0018\u008e\u008d\u0007\u00cb\u0096\u00f8\u00e8t\u00ac\u00b8\u00fe1\\9\u001c$s\u00d7Y\u001f%\u00d1\u00c6\u00c5 \u00a0\f\u0088\u00ed@j9\u0004\u00fc\t\u0097\u00eb\u00cd\u0000h\u00ce\r\u009d\u0092!\u00c8\u00fa&\u00a0\u0089:\u0002|@\u00ad\u00e0M \u008dj\u0092\u0018\u00bc\u00c5\u00de\u00b5v\u00ce\u00f2\u0017ea\u0097\u008c\u007f\u00a1\u00e3\u00d1\u00fe\u0019\u00ff\u0015\u00fe\u00f4\u009c\u00e1d\u00f2`p\u0010\u008c\u00de\u00b4\u00f5\u00ce\t\u008c\u0017\u0082\u00ea\t\u0090\u0012\u009f|\u00ab \u00cc\u0086j\u000fj'R:9\u00f3\u00ff\u00be\u0016.\u00e5Yq\u00ca\u00cf\u0013\u0006\u00a4\u009e\u0083\u00fb\u0088}\u0016\u00ef\u00fd$\u00d1\u0010\u00a3\u00c7fG\u00c5\u00a3<!\u00dcr\u0007\u0010\u00e4G'f".length();
                        var14_7 = 40;
                        var13_8 = -1;
lbl21:
                        // 2 sources

                        while (true) {
                            v3 = ++var13_8;
                            v4 = var15_5.substring(v3, v3 + var14_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = ig.biG(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            var15_5 = "\u00fb\u009cO\u00ee\u001f\\\u00cb#\u00a9\u009cS\u00c4\u0093\u001a\u007f\u00f8\u00a4\u00d7\u0014\u009e\u00be\u008d\u00cdn_\u001an\u00fa\u00e8tC\u00c6\u00b1=4\u008e\u00bb\u0006\u00bb\u00e2\u0018\u0014`\u0014\u00b7\u00f9\u00bd\u00de\u0096\u0096\u00ff\u00ecV\u0098\u009c\r`\u000bm3\u0080I\u0014\u0096\u0091";
                            var17_6 = "\u00fb\u009cO\u00ee\u001f\\\u00cb#\u00a9\u009cS\u00c4\u0093\u001a\u007f\u00f8\u00a4\u00d7\u0014\u009e\u00be\u008d\u00cdn_\u001an\u00fa\u00e8tC\u00c6\u00b1=4\u008e\u00bb\u0006\u00bb\u00e2\u0018\u0014`\u0014\u00b7\u00f9\u00bd\u00de\u0096\u0096\u00ff\u00ecV\u0098\u009c\r`\u000bm3\u0080I\u0014\u0096\u0091".length();
                            var14_7 = 40;
                            var13_8 = -1;
lbl35:
                            // 2 sources

                            while (true) {
                                v6 = ++var13_8;
                                v4 = var15_5.substring(v6, v6 + var14_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl40:
                        // 1 sources

                        while (true) {
                            var18_3[var16_4++] = ig.biG(var19_9).intern();
                            if ((var13_8 += var14_7) < var17_6) {
                                var14_7 = var15_5.charAt(var13_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var19_9 = var11_1.doFinal(v4.getBytes("ISO-8859-1"));
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
                ig.XkqOU = var18_3;
                ig.wICbh = new String[9];
                var1_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var20 >>> 56);
                for (var2_11 = 1; var2_11 < 8; ++var2_11) {
                    v9 = v9;
                    v9[var2_11] = (byte)(var20 << var2_11 * 8 >>> 56);
                }
                var1_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var0_12 = new long[31];
                var4_13 = 0;
                var5_14 = "\u00c1\u0001\u00bb\u00cc\u00f8\u0017\u0007\u00cf\u00c8K>\u0096f\u00fd\u00ba\u00ebXvvsie\u00f4\u00d4\u00f2A\u0007\u00c0\u00fc\u00f8H\u001e\u00a4\u00f2\u0014\u00acPB\u00d4q\u00f8T(\r\u00d1\u00c1\u00f5\u007f\u00db\u0096\u00bdMnJ2\u00b9xr\u00ab#>J\u0003\u00a9>=\u0013V2\u00f8W\u0091\u0081\u00cc\u00c0\u00ee}\u0017\u00bdo\u00cc\"/\u0094Z\u00a0\u0004\u00c8\u00f3\fR\"\nq\u000b\u00dc\u0007\u00d9\u0018\u00db@zW1\u001c\u00be \u009c\u00cf\u00cc\u001ftp\u00a0zr\u0007\u00d2\u00be\u00c0\u00e2cq\u0000\u0004\u00c3\u00d3H#a*\u00e5\u00f2^0\u00c1\u00fadD\nc\u00deoF\u00fe\u008d\u0018\u0083\u00be\u00e1\u00f8\u00db\u00cb\u00a3\u00e8\u00b6\u00eeg\u000b\u0007\u0005\u00f09\u00829\u0094\u0011Zi\u00b1&\u009dn\u00e69\u00e9t\u0019I\u00b4\u00f9\u00b7\u00ad\u00aa\u009fK\u0090\u00d6\u00d6\u00af}B\u0000\u009a\u00c9\u00e2A$$i\u0081\u00a5\u008c\u00ac\u00e9\u00eej\u00db.l\u00f46\u00d6\u001a\u001a_\u0082\u00ba\u00c1%\u0092\u0007\u00c8?\u00aa^.P\u00a5\u000f\u009fx";
                var6_15 = "\u00c1\u0001\u00bb\u00cc\u00f8\u0017\u0007\u00cf\u00c8K>\u0096f\u00fd\u00ba\u00ebXvvsie\u00f4\u00d4\u00f2A\u0007\u00c0\u00fc\u00f8H\u001e\u00a4\u00f2\u0014\u00acPB\u00d4q\u00f8T(\r\u00d1\u00c1\u00f5\u007f\u00db\u0096\u00bdMnJ2\u00b9xr\u00ab#>J\u0003\u00a9>=\u0013V2\u00f8W\u0091\u0081\u00cc\u00c0\u00ee}\u0017\u00bdo\u00cc\"/\u0094Z\u00a0\u0004\u00c8\u00f3\fR\"\nq\u000b\u00dc\u0007\u00d9\u0018\u00db@zW1\u001c\u00be \u009c\u00cf\u00cc\u001ftp\u00a0zr\u0007\u00d2\u00be\u00c0\u00e2cq\u0000\u0004\u00c3\u00d3H#a*\u00e5\u00f2^0\u00c1\u00fadD\nc\u00deoF\u00fe\u008d\u0018\u0083\u00be\u00e1\u00f8\u00db\u00cb\u00a3\u00e8\u00b6\u00eeg\u000b\u0007\u0005\u00f09\u00829\u0094\u0011Zi\u00b1&\u009dn\u00e69\u00e9t\u0019I\u00b4\u00f9\u00b7\u00ad\u00aa\u009fK\u0090\u00d6\u00d6\u00af}B\u0000\u009a\u00c9\u00e2A$$i\u0081\u00a5\u008c\u00ac\u00e9\u00eej\u00db.l\u00f46\u00d6\u001a\u001a_\u0082\u00ba\u00c1%\u0092\u0007\u00c8?\u00aa^.P\u00a5\u000f\u009fx".length();
                var3_16 = 0;
                while (true) {
                    var7_17 = var5_14.substring(var3_16, var3_16 += 8).getBytes("ISO-8859-1");
                    v10 = var0_12;
                    v11 = var4_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block20;
                    break;
                }
lbl78:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var3_16 < var6_15) ** continue;
                    var5_14 = "\u00a01\u0012\u00d3\u00cb\u00bfC\u00db\u00b2\u00d6H\u00ad\u000e\u00fb\u00e9I";
                    var6_15 = "\u00a01\u0012\u00d3\u00cb\u00bfC\u00db\u00b2\u00d6H\u00ad\u000e\u00fb\u00e9I".length();
                    var3_16 = 0;
                    while (true) {
                        var7_17 = var5_14.substring(var3_16, var3_16 += 8).getBytes("ISO-8859-1");
                        v10 = var0_12;
                        v11 = var4_13++;
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
                    if (var3_16 < var6_15) ** continue;
                    break block21;
                    break;
                }
            }
            var8_18 = v12;
            var10_19 = var1_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
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
        ig.UauPc = id.bhd(100.0f, 100.0f, 100.0f, 0.0f, 0.0f, mG.UhgnI, 1.5f, mG.hoGuU);
        ig.ckEfn = if.bia(20.0f, 1.0f);
        v15 = new int[(int)var0_12[26]];
        v15[0] = (int)var0_12[7];
        v15[1] = (int)var0_12[28];
        v15[2] = (int)var0_12[4];
        v15[3] = (int)var0_12[23];
        v15[4] = (int)var0_12[10];
        v15[5] = (int)var0_12[11];
        v15[(int)var0_12[20]] = (int)var0_12[18];
        ig.PtFoz = new ig(v15, ie.bhE(mG.hoGuU, mG.hoGuU, mG.cnP(12.0f, 12.0f, 12.0f), mG.cnP(24.0f, 24.0f, 27.0f), mG.yHyOB), ig.ckEfn, ig.UauPc);
        ig.gsTXO = new ig(new int[]{(int)var0_12[29], (int)var0_12[16], (int)var0_12[1]}, ie.bhE(mG.hoGuU, mG.cnP(255.0f, 58.0f, 47.0f), mG.cnP(14.0f, 2.0f, 1.0f), mG.cnP(43.0f, 20.0f, 19.0f), mG.cnP(255.0f, 58.0f, 47.0f)), ig.ckEfn, ig.UauPc);
        ig.hzckK = new ig(new int[]{(int)var0_12[19], (int)var0_12[24], (int)var0_12[27], (int)var0_12[17]}, ie.bhE(mG.hoGuU, mG.cnP(255.0f, 191.0f, 0.0f), mG.cnP(15.0f, 12.0f, 2.0f), mG.cnP(45.0f, 35.0f, 10.0f), mG.cnP(255.0f, 191.0f, 0.0f)), ig.ckEfn, ig.UauPc);
        v16 = new int[(int)var0_12[9]];
        v16[0] = (int)var0_12[21];
        v16[1] = (int)var0_12[3];
        v16[2] = (int)var0_12[16];
        v16[3] = (int)var0_12[30];
        v16[4] = (int)var0_12[12];
        v16[5] = (int)var0_12[27];
        v16[(int)var0_12[0]] = (int)var0_12[17];
        ig.eaYCr = new ig(v16, ie.bhE(mG.hoGuU, mG.cnP(46.0f, 204.0f, 113.0f), mG.cnP(2.0f, 12.0f, 8.0f), mG.cnP(10.0f, 35.0f, 20.0f), mG.cnP(46.0f, 204.0f, 113.0f)), ig.ckEfn, ig.UauPc);
        ig.pHENl = new ig(new int[]{(int)var0_12[5], (int)var0_12[27], (int)var0_12[15], (int)var0_12[16]}, ie.bhE(mG.hoGuU, mG.cnP(79.0f, 124.0f, 255.0f), mG.cnP(5.0f, 5.0f, 8.0f), mG.cnP(8.0f, 10.0f, 20.0f), mG.cnP(79.0f, 124.0f, 255.0f)), ig.ckEfn, ig.UauPc);
        v17 = new int[(int)var0_12[8]];
        v17[0] = (int)var0_12[13];
        v17[1] = (int)var0_12[12];
        v17[2] = (int)var0_12[22];
        v17[3] = (int)var0_12[16];
        v17[4] = (int)var0_12[25];
        v17[5] = (int)var0_12[17];
        v17[(int)var0_12[0]] = (int)var0_12[16];
        v17[(int)var0_12[9]] = (int)var0_12[2];
        ig.WSWRe = new ig(v17, ie.bhE(mG.hoGuU, mG.JTHGB, mG.cnP(10.0f, 10.0f, 22.0f), mG.cnP(22.0f, 22.0f, 38.0f), mG.JTHGB), ig.ckEfn, ig.UauPc);
        v18 = new int[(int)var0_12[0]];
        v18[0] = (int)var0_12[6];
        v18[1] = (int)var0_12[15];
        v18[2] = (int)var0_12[2];
        v18[3] = (int)var0_12[14];
        v18[4] = (int)var0_12[27];
        v18[5] = (int)var0_12[16];
        ig.OetCB = new ig(v18, ie.bhE(mG.hoGuU, mG.yHyOB, mG.cnP(13.0f, 4.0f, 25.0f), mG.cnP(26.0f, 16.0f, 40.0f), mG.yHyOB), ig.ckEfn, ig.UauPc);
    }

    public String bit() {
        long l2 = yAiNR ^ 0xF781B7387FAL;
        return (String)((Object)ig.biJ("c", (int)21808, (long)(0x68B97499C96E60BCL ^ l2))) + iH.bsA(this.ZMxLk);
    }

    public mG bir() {
        return this.yJarQ.bhI();
    }

    @Override
    public void fromJson(JsonObject jsonObject) {
        long l2 = yAiNR ^ 0x1A3494938A28L;
        this.ZMxLk = this.readIntArray(jsonObject, (String)((Object)ig.biJ("c", (int)22006, (long)(0x23F744EB955E6DADL ^ l2))));
        this.yJarQ = this.readObject(jsonObject, (String)((Object)ig.biJ("c", (int)21368, (long)(0x166BD6F754B5EB2DL ^ l2))), ie::new);
        int[] nArray = ig.biE();
        try {
            this.eurvE = this.readObject(jsonObject, (String)((Object)ig.biJ("c", (int)8797, (long)(0x2D12836CEB5A9A01L ^ l2))), if::new);
            this.ZphLO = this.readObject(jsonObject, (String)((Object)ig.biJ("c", (int)25986, (long)(0x5DD0E4A063755DD8L ^ l2))), id::new);
            if (nArray != null) {
                iS.bwK("Mbh4J");
            }
        }
        catch (MatchException matchException) {
            throw ig.biF(matchException);
        }
    }

    @Override
    public JsonObject toJson() {
        JsonObject jsonObject;
        ig ig2;
        JsonObject jsonObject2;
        long l2;
        block22: {
            block23: {
                int[] nArray;
                block20: {
                    block21: {
                        block18: {
                            block19: {
                                l2 = yAiNR ^ 0x43FD0D374A3L;
                                jsonObject2 = new JsonObject();
                                nArray = ig.biE();
                                try {
                                    try {
                                        ig2 = this;
                                        if (nArray != null) break block18;
                                        if (ig2.ZMxLk == null) break block19;
                                    }
                                    catch (MatchException matchException) {
                                        throw ig.biF(matchException);
                                    }
                                    jsonObject2.add((String)((Object)ig.biJ("c", (int)395, (long)(0x5A4D32D9A8C7C759L ^ l2))), (JsonElement)this.writeIntArray(this.ZMxLk));
                                }
                                catch (MatchException matchException) {
                                    throw ig.biF(matchException);
                                }
                            }
                            ig2 = this;
                        }
                        try {
                            try {
                                if (nArray != null) break block20;
                                if (ig2.yJarQ == null) break block21;
                            }
                            catch (MatchException matchException) {
                                throw ig.biF(matchException);
                            }
                            jsonObject2.add((String)((Object)ig.biJ("c", (int)25012, (long)(0x713BD50F64D5A767L ^ l2))), (JsonElement)this.yJarQ.toJson());
                        }
                        catch (MatchException matchException) {
                            throw ig.biF(matchException);
                        }
                    }
                    ig2 = this;
                }
                try {
                    try {
                        if (nArray != null) break block22;
                        if (ig2.eurvE == null) break block23;
                    }
                    catch (MatchException matchException) {
                        throw ig.biF(matchException);
                    }
                    jsonObject2.add((String)((Object)ig.biJ("c", (int)23042, (long)(0x3D2D3F9E99541CD6L ^ l2))), (JsonElement)this.eurvE.toJson());
                }
                catch (MatchException matchException) {
                    throw ig.biF(matchException);
                }
            }
            ig2 = this;
        }
        try {
            if (ig2.ZphLO != null) {
                jsonObject2.add((String)((Object)ig.biJ("c", (int)6026, (long)(0x7DEE55FA6C97515CL ^ l2))), (JsonElement)this.ZphLO.toJson());
            }
        }
        catch (MatchException matchException) {
            throw ig.biF(matchException);
        }
        try {
            jsonObject = jsonObject2;
            if (iS.bwL() == null) {
                ig.biD(new int[1]);
            }
        }
        catch (MatchException matchException) {
            throw ig.biF(matchException);
        }
        return jsonObject;
    }

    public mG bis() {
        return this.yJarQ.bhJ();
    }

    public static void biD(int[] nArray) {
        sYFFC = nArray;
    }

    public mG biq() {
        return this.yJarQ.bhH();
    }

    public id biy() {
        return this.ZphLO;
    }

    public if bix() {
        return this.eurvE;
    }

    public mG bip() {
        return this.yJarQ.bhG();
    }

    public static int[] biE() {
        return sYFFC;
    }

    public void biA(ie ie2) {
        this.yJarQ = ie2;
    }

    private static String biG(byte[] byArray) {
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

    public int[] biv() {
        return this.ZMxLk;
    }

    private static Object biI(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = ig.biH(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public void biB(if if_) {
        this.eurvE = if_;
    }

    private static CallSite biJ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ig" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException biF(MatchException matchException) {
        return matchException;
    }

    public ie biw() {
        return this.yJarQ;
    }

    public void biC(id id2) {
        this.ZphLO = id2;
    }

    public boolean biu() {
        return false;
    }

    private static String biH(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x557E;
        if (wICbh[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])jNjLa.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    jNjLa.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ig", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = XkqOU[n3].getBytes("ISO-8859-1");
            ig.wICbh[n3] = ig.biG(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return wICbh[n3];
    }

    public void biz(int[] nArray) {
        this.ZMxLk = nArray;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ig.class, "biI", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

