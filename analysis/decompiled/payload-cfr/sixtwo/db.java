/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1044
 *  net.minecraft.class_1657
 *  net.minecraft.class_243
 *  net.minecraft.class_4587
 *  net.minecraft.class_7833
 *  org.joml.Quaternionfc
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1044;
import net.minecraft.class_1657;
import net.minecraft.class_243;
import net.minecraft.class_4587;
import net.minecraft.class_7833;
import org.joml.Quaternionfc;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cy;
import sixtwo.db$sw;
import sixtwo.dh;
import sixtwo.gH;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.jd;
import sixtwo.kG;
import sixtwo.lG;
import sixtwo.lv;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.ob;
import sixtwo.oe;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class db
extends gg
implements lG {
    private final cC cMvXG;
    private final cJ iiIVe;
    private final cG CCftK;
    private final ct GZUSi;
    private final cu NcADa;
    private final cu laKOH;
    private final cu AvPuQ;
    private final cy ZQjnc;
    private final mT hvsLj;
    private class_1044 mqXLF;
    private String OlDHF;
    private final List<db$sw> CdBII;
    private final List<class_1657> RbHqK;
    private static final long juqJM;
    private static final String[] eoEJo;
    private static final String[] RZPqY;
    private static final Map HQaif;
    private static final long[] fRWrP;
    private static final Integer[] xjjOW;
    private static final Map wlfYn;
    private static final long[] VTSsC;
    private static final Long[] nlUEb;
    private static final Map JSdXa;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public db() {
        long l = juqJM ^ 0x3F17F145B808L;
        super(gf.aZL((int)db.abU("x", (int)15510, (long)(0x15C333CEA2213703L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[db.abU("x", (int)12040, (long)(0x28E5943FEEE9249AL ^ l))];
        nArray[0] = (int)db.abU("x", (int)28422, (long)(0x58734EBF56DC64A2L ^ l));
        nArray[1] = (int)db.abU("x", (int)6742, (long)(0x217B3308611F91D7L ^ l));
        nArray[2] = (int)db.abU("x", (int)27698, (long)(0x178686C4654D6785L ^ l));
        nArray[3] = (int)db.abU("x", (int)2733, (long)(0x1EE129DFC895810AL ^ l));
        nArray[4] = (int)db.abU("x", (int)30435, (long)(0x575DAF537BF6FD7DL ^ l));
        nArray[5] = (int)db.abU("x", (int)7007, (long)(0xDC5A09F693810F3L ^ l));
        nArray[db.abU("x", (int)18145, (long)(0x3032B8392E3DCD61L ^ l))] = (int)db.abU("x", (int)7638, (long)(0x563EE5287613165CL ^ l));
        nArray[db.abU("x", (int)2682, (long)(0x46D6E92AC25D81C3L ^ l))] = (int)db.abU("x", (int)17629, (long)(0x4204AAA37E62CF41L ^ l));
        nArray[db.abU("x", (int)14941, (long)(0x54C52991800EB1EEL ^ l))] = (int)db.abU("x", (int)27320, (long)(0x2E478C3990F06119L ^ l));
        nArray[db.abU("x", (int)16429, (long)(0x3FEC37226FE7CBB9L ^ l))] = (int)db.abU("x", (int)8083, (long)(0x125789F3C2F9409L ^ l));
        nArray[db.abU("x", (int)9251, (long)(0x3E30BC39BFBC2F92L ^ l))] = (int)db.abU("x", (int)27623, (long)(0x73C11EA69C1FE078L ^ l));
        nArray[db.abU("x", (int)15403, (long)(0x5D985B637A863791L ^ l))] = (int)db.abU("x", (int)17297, (long)(0x67F87FEE4308C800L ^ l));
        this.cMvXG = new cC(this, mr.clS(nArray)).Vy(0.1).Vw(0.5).Vx(5.0).VA(1.0);
        int[] nArray2 = new int[db.abU("x", (int)7860, (long)(0x5E593FF68171519L ^ l))];
        nArray2[0] = (int)db.abU("x", (int)13100, (long)(0x76CC5156FBF73882L ^ l));
        nArray2[1] = (int)db.abU("x", (int)10986, (long)(0x523716FD3D5F2148L ^ l));
        nArray2[2] = (int)db.abU("x", (int)27623, (long)(0x73C11EA69C1FE078L ^ l));
        nArray2[3] = (int)db.abU("x", (int)22762, (long)(0x186005AABA3D340L ^ l));
        nArray2[4] = (int)db.abU("x", (int)2965, (long)(0x7D09F28C893801AL ^ l));
        nArray2[5] = (int)db.abU("x", (int)15964, (long)(0x6F0F9A66A5AA35C7L ^ l));
        nArray2[db.abU("x", (int)30384, (long)(0x8FD8CBE2E657D0BL ^ l))] = (int)db.abU("x", (int)17297, (long)(0x67F87FEE4308C800L ^ l));
        nArray2[db.abU("x", (int)13849, (long)(0x5FD9742A9ED8BDB9L ^ l))] = (int)db.abU("x", (int)27623, (long)(0x73C11EA69C1FE078L ^ l));
        nArray2[db.abU("x", (int)22127, (long)(0x14968A9A0AA7DDEDL ^ l))] = (int)db.abU("x", (int)15765, (long)(0x4371628A482AB633L ^ l));
        this.iiIVe = new cJ(this, mr.clS(nArray2)).WE(false);
        int[] nArray3 = new int[db.abU("x", (int)10491, (long)(0xBE03C396C2EA368L ^ l))];
        nArray3[0] = (int)db.abU("x", (int)22546, (long)(0x7763FDFDD938D3A2L ^ l));
        nArray3[1] = (int)db.abU("x", (int)17531, (long)(0x1A550BD6BB784FE6L ^ l));
        nArray3[2] = (int)db.abU("x", (int)23398, (long)(0x17B7C75A80DC50D8L ^ l));
        nArray3[3] = (int)db.abU("x", (int)27320, (long)(0x2E478C3990F06119L ^ l));
        nArray3[4] = (int)db.abU("x", (int)27623, (long)(0x73C11EA69C1FE078L ^ l));
        nArray3[5] = (int)db.abU("x", (int)17297, (long)(0x67F87FEE4308C800L ^ l));
        nArray3[db.abU("x", (int)30384, (long)(0x8FD8CBE2E657D0BL ^ l))] = (int)db.abU("x", (int)2965, (long)(0x7D09F28C893801AL ^ l));
        nArray3[db.abU("x", (int)13849, (long)(0x5FD9742A9ED8BDB9L ^ l))] = (int)db.abU("x", (int)22546, (long)(0x7763FDFDD938D3A2L ^ l));
        nArray3[db.abU("x", (int)22127, (long)(0x14968A9A0AA7DDEDL ^ l))] = (int)db.abU("x", (int)18788, (long)(0x309455EA8BEFC2ECL ^ l));
        nArray3[db.abU("x", (int)7860, (long)(0x5E593FF68171519L ^ l))] = (int)db.abU("x", (int)27623, (long)(0x73C11EA69C1FE078L ^ l));
        nArray3[db.abU("x", (int)19936, (long)(0x7D9CC723E2874677L ^ l))] = (int)db.abU("x", (int)21955, (long)(0xDF3A319ADB8DE75L ^ l));
        nArray3[db.abU("x", (int)31741, (long)(0x1ADC6A9A464C7058L ^ l))] = (int)db.abU("x", (int)23398, (long)(0x17B7C75A80DC50D8L ^ l));
        this.CCftK = new cG(this, mr.clS(nArray3)).Uf(rD.dlM().bjG().bis());
        int[] nArray4 = new int[db.abU("x", (int)11344, (long)(0x23673087F55827EDL ^ l))];
        nArray4[0] = (int)db.abU("x", (int)22546, (long)(0x7763FDFDD938D3A2L ^ l));
        nArray4[1] = (int)db.abU("x", (int)17531, (long)(0x1A550BD6BB784FE6L ^ l));
        nArray4[2] = (int)db.abU("x", (int)23398, (long)(0x17B7C75A80DC50D8L ^ l));
        nArray4[3] = (int)db.abU("x", (int)27320, (long)(0x2E478C3990F06119L ^ l));
        nArray4[4] = (int)db.abU("x", (int)27623, (long)(0x73C11EA69C1FE078L ^ l));
        nArray4[5] = (int)db.abU("x", (int)17297, (long)(0x67F87FEE4308C800L ^ l));
        nArray4[db.abU("x", (int)30384, (long)(0x8FD8CBE2E657D0BL ^ l))] = (int)db.abU("x", (int)2965, (long)(0x7D09F28C893801AL ^ l));
        nArray4[db.abU("x", (int)13849, (long)(0x5FD9742A9ED8BDB9L ^ l))] = (int)db.abU("x", (int)31979, (long)(0x71A2139B52D67744L ^ l));
        nArray4[db.abU("x", (int)22127, (long)(0x14968A9A0AA7DDEDL ^ l))] = (int)db.abU("x", (int)17297, (long)(0x67F87FEE4308C800L ^ l));
        nArray4[db.abU("x", (int)7860, (long)(0x5E593FF68171519L ^ l))] = (int)db.abU("x", (int)28366, (long)(0x5275488FDDD3E54BL ^ l));
        nArray4[db.abU("x", (int)19936, (long)(0x7D9CC723E2874677L ^ l))] = (int)db.abU("x", (int)4288, (long)(0x4D36F6EE668F9B58L ^ l));
        nArray4[db.abU("x", (int)31741, (long)(0x1ADC6A9A464C7058L ^ l))] = (int)db.abU("x", (int)1906, (long)(0x58F8638867D58CCAL ^ l));
        nArray4[db.abU("x", (int)10491, (long)(0xBE03C396C2EA368L ^ l))] = (int)db.abU("x", (int)23398, (long)(0x17B7C75A80DC50D8L ^ l));
        nArray4[db.abU("x", (int)14093, (long)(0x55AA7488E16B3CB2L ^ l))] = (int)db.abU("x", (int)17297, (long)(0x67F87FEE4308C800L ^ l));
        this.GZUSi = new ct(this, mr.clS(nArray4));
        int[] nArray5 = new int[db.abU("x", (int)13849, (long)(0x5FD9742A9ED8BDB9L ^ l))];
        nArray5[0] = (int)db.abU("x", (int)19750, (long)(0x2A5FD219E1D046A1L ^ l));
        nArray5[1] = (int)db.abU("x", (int)17297, (long)(0x67F87FEE4308C800L ^ l));
        nArray5[2] = (int)db.abU("x", (int)13044, (long)(0x353C323DE46EB977L ^ l));
        nArray5[3] = (int)db.abU("x", (int)11103, (long)(0x25C5C0E297AEA0FCL ^ l));
        nArray5[4] = (int)db.abU("x", (int)1302, (long)(0x6947B5E088910E90L ^ l));
        nArray5[5] = (int)db.abU("x", (int)27623, (long)(0x73C11EA69C1FE078L ^ l));
        nArray5[db.abU("x", (int)30384, (long)(0x8FD8CBE2E657D0BL ^ l))] = (int)db.abU("x", (int)22317, (long)(0x731E00E5458C5C9FL ^ l));
        this.NcADa = new cu(this.GZUSi, mr.clS(nArray5));
        int[] nArray6 = new int[db.abU("x", (int)13849, (long)(0x5FD9742A9ED8BDB9L ^ l))];
        nArray6[0] = (int)db.abU("x", (int)1271, (long)(0x6511DC199C570F42L ^ l));
        nArray6[1] = (int)db.abU("x", (int)27623, (long)(0x73C11EA69C1FE078L ^ l));
        nArray6[2] = (int)db.abU("x", (int)21955, (long)(0xDF3A319ADB8DE75L ^ l));
        nArray6[3] = (int)db.abU("x", (int)27814, (long)(0x31F443718F14670DL ^ l));
        nArray6[4] = (int)db.abU("x", (int)17531, (long)(0x1A550BD6BB784FE6L ^ l));
        nArray6[5] = (int)db.abU("x", (int)27512, (long)(0x6940F9F0590B60F1L ^ l));
        nArray6[db.abU("x", (int)30384, (long)(0x8FD8CBE2E657D0BL ^ l))] = (int)db.abU("x", (int)8315, (long)(0x3C1410C27549ABCFL ^ l));
        this.laKOH = new cu(this.GZUSi, mr.clS(nArray6));
        int[] nArray7 = new int[db.abU("x", (int)30384, (long)(0x8FD8CBE2E657D0BL ^ l))];
        nArray7[0] = (int)db.abU("x", (int)22546, (long)(0x7763FDFDD938D3A2L ^ l));
        nArray7[1] = (int)db.abU("x", (int)1302, (long)(0x6947B5E088910E90L ^ l));
        nArray7[2] = (int)db.abU("x", (int)15069, (long)(0x43AFA89AD8AD3144L ^ l));
        nArray7[3] = (int)db.abU("x", (int)22317, (long)(0x731E00E5458C5C9FL ^ l));
        nArray7[4] = (int)db.abU("x", (int)21955, (long)(0xDF3A319ADB8DE75L ^ l));
        nArray7[5] = (int)db.abU("x", (int)21384, (long)(0x55FC2C1F50D65821L ^ l));
        this.AvPuQ = new cu(this.GZUSi, mr.clS(nArray7));
        int[] nArray8 = new int[db.abU("x", (int)31741, (long)(0x1ADC6A9A464C7058L ^ l))];
        nArray8[0] = (int)db.abU("x", (int)1315, (long)(0x647260DC24368EB5L ^ l));
        nArray8[1] = (int)db.abU("x", (int)17297, (long)(0x67F87FEE4308C800L ^ l));
        nArray8[2] = (int)db.abU("x", (int)3542, (long)(0x71D105AA58FC0646L ^ l));
        nArray8[3] = (int)db.abU("x", (int)22317, (long)(0x731E00E5458C5C9FL ^ l));
        nArray8[4] = (int)db.abU("x", (int)1302, (long)(0x6947B5E088910E90L ^ l));
        nArray8[5] = (int)db.abU("x", (int)23398, (long)(0x17B7C75A80DC50D8L ^ l));
        nArray8[db.abU("x", (int)30384, (long)(0x8FD8CBE2E657D0BL ^ l))] = (int)db.abU("x", (int)17297, (long)(0x67F87FEE4308C800L ^ l));
        nArray8[db.abU("x", (int)13849, (long)(0x5FD9742A9ED8BDB9L ^ l))] = (int)db.abU("x", (int)2965, (long)(0x7D09F28C893801AL ^ l));
        nArray8[db.abU("x", (int)22127, (long)(0x14968A9A0AA7DDEDL ^ l))] = (int)db.abU("x", (int)26736, (long)(0x2F573380C98D63D8L ^ l));
        nArray8[db.abU("x", (int)7860, (long)(0x5E593FF68171519L ^ l))] = (int)db.abU("x", (int)20894, (long)(0x35A3F66D3819DA1AL ^ l));
        nArray8[db.abU("x", (int)19936, (long)(0x7D9CC723E2874677L ^ l))] = (int)db.abU("x", (int)25249, (long)(0x7197E846F87C692AL ^ l));
        this.ZQjnc = new cy(this, mr.clS(nArray8)).Un((int)db.abU("x", (int)10120, (long)(0x4BD613138F772C34L ^ l))).Up("");
        this.hvsLj = mT.cpA();
        this.OlDHF = "";
        this.CdBII = new ArrayList<db$sw>();
        this.RbHqK = new ArrayList<class_1657>();
        this.ZQjnc.Vf(() -> this.GZUSi.SQ(2));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block19: {
            block18: {
                block17: {
                    block16: {
                        block15: {
                            db.juqJM = gb.aYR(7013168725170819713L, -7452434859226803908L, MethodHandles.lookup().lookupClass()).a(237567101097750L);
                            db.HQaif = new HashMap<K, V>(13);
                            var22 = db.juqJM ^ 135927939100571L;
                            var24_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                            v0 = SecretKeyFactory.getInstance("DES");
                            v1 = new byte[8];
                            v2 = v1;
                            v1[0] = (byte)(var22 >>> 56);
                            for (var25_2 = 1; var25_2 < 8; ++var25_2) {
                                v2 = v2;
                                v2[var25_2] = (byte)(var22 << var25_2 * 8 >>> 56);
                            }
                            var24_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                            var31_3 = new String[2];
                            var29_4 = 0;
                            var28_5 = "\u008a\u00b3\u0091\\B\u00d0k\u009f\u00d9\\p2\u00b2\u00f3\u00cc\u00d2 \u001bM\u0091\u00d0\u009c#\u009bg\u00b8\u00b3\u00dc\"\u00ce\u00cd\u00c4\u00a6M\u0083%\u0003\u00acg\u0099\u0012ry\u0017\u00d2\u00f9:\u00fb\u00ed";
                            var30_6 = "\u008a\u00b3\u0091\\B\u00d0k\u009f\u00d9\\p2\u00b2\u00f3\u00cc\u00d2 \u001bM\u0091\u00d0\u009c#\u009bg\u00b8\u00b3\u00dc\"\u00ce\u00cd\u00c4\u00a6M\u0083%\u0003\u00acg\u0099\u0012ry\u0017\u00d2\u00f9:\u00fb\u00ed".length();
                            var27_7 = 16;
                            var26_8 = -1;
lbl20:
                            // 2 sources

                            while (true) {
                                continue;
                                break;
                            }
lbl22:
                            // 1 sources

                            while (true) {
                                var31_3[var29_4++] = db.abO(var32_9).intern();
                                if ((var26_8 += var27_7) < var30_6) {
                                    var27_7 = var28_5.charAt(var26_8);
                                    ** continue;
                                }
                                break block15;
                                break;
                            }
                            v3 = ++var26_8;
                            var32_9 = var24_1.doFinal(var28_5.substring(v3, v3 + var27_7).getBytes("ISO-8859-1"));
                            ** while (true)
                        }
                        db.eoEJo = var31_3;
                        db.RZPqY = new String[2];
                        db.wlfYn = new HashMap<K, V>(13);
                        var11_10 = Cipher.getInstance("DES/CBC/NoPadding");
                        v4 = SecretKeyFactory.getInstance("DES");
                        v5 = new byte[8];
                        v6 = v5;
                        v5[0] = (byte)(var22 >>> 56);
                        for (var12_11 = 1; var12_11 < 8; ++var12_11) {
                            v6 = v6;
                            v6[var12_11] = (byte)(var22 << var12_11 * 8 >>> 56);
                        }
                        var11_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                        var17_12 = new long[61];
                        var14_13 = 0;
                        var15_14 = "\u00e4\u0019yx}\u0090\u008e8\u008e\u0091\u00a8>\u00ef\u008b\u0080u\fAT\u00b5\u00ca\u0005\u00e9\u00d5\u008d\u00ed\u009e\u00b9~\u0087\u00fd\u00b1\u008dw\u0087\u0086v\u00cd\u00a6\u008d\u00a9\u009f\u00ea\u00ee\u00d7\u0081$:\u00b3\u00e0MQ\u00bf\u00fa@?\u0013\u00f2\u00a7\u00d2\u00a6\u00fa\u00c6k\u00bf\u00ee\u00e7S\u00d9\u00da\u00acE\u001c\u0099\u008e\u0085\u001c\u00d9\u00d0\u009c+\u0013\u00c0\u00ee\u00f9A\u0091k\u007f\u00ddO\u0099\u00d6>\u0095\u00f5\u00b9\u00d3\u00c2\u0093\u00bbGQ\u00d1\u00f1\u008e\u0083\u00b9i\u00f2\u00d1\r\u0005\u00f5\u0016\u0082\u00bf\u00049)\u0000\u00e7'\u008db\u00e9\u00e8\u00be*!\u00faY#a\u0000\u0019\u00b4\u0015\u00feS\u00da\u001eR\u0099\"\u00eas\u0095Q\u00f0_y\u00d8yo\u00c1WE(\u00df:\u00d5\u00f82\u001fP\u0099Q\u00d8c\u0004\u00c2\u00cf\t\u00c0\u00dc\u000eC\u0089\u00af\u00c0\f\u00f8Uz\u000bX3qr\u0084\u008b\u00cd\u008a\"Gm\u00b9\u00c3\u00e9\u00dd\u00b5\u00d2\u007fG\u00ef\u00df\u00b0>;\u001e\u00a2\u001a\u0084\u00aem\u00015BTJ\u00d4\u00c6D\u00beQ\u00aa\u00ce`b\u008aO\u00bf\u00f0/Z\u00cf2\u00a3\u00d7\u00bd\u0085\u009a=\u0006\u00bb\u00e1\u00d4\u00ff\u0011%\u00861}\u00c9q\u0089\u0011f\u00cf\u0015\u0082\u0010N\u00de\u0002\u00d4\u00baT\u00d0\u00a8Ep\u00a6\u00f3\u00a1\u00ba\f\u00da\u00aaQ\u0014\u00ee\u00d6\u00b5=)t\u007f\u00caJ9\u008c\u00be\u000f\u00b4\u008a\u00eb0\u0082\u00f0T\u00ca\u000e(\u00f5\u0090D\u00ab\u008bV\t\u00fa\u00ba\u001du\\\u00c5>\u000e\u00ac\u009b\u00ee\nz\u00c4[\u00ea\u008a\u00a6\u00ae~\u00f9Ze\u00c3\u009dq`\u00f3\u00c5\r\u00af\u00f2\u00ce\u008f\u00a4C\u00b7YD\u0017\u00eb\rb\u00f4\u008aK\u0003\u000b?\u009e\u00c9\u00cb\u00f7\u00ad\u00c4\u0012N\u00c9\u00ae\u00c3w\u0004\u00bd\u007f\u00b5n\u00a1I\u00c4#W\u00e5\f\u0082\u00d9\u00d7\\\u00ad\u009af\u00c5\u001d\u00cavZ\u001c\u00cd\u00d8\u00cb\u00fa \u00adE\u0000\u0099@OC\u00f7\u0081\u0098D_/mw\u0016\u00b4U\u00f3\u00aaa\u00bcq\u00fb]\u0002\u0010)&\nO\u0092\u0098\u0085\u0084\u00b7\u009d\u00eaw\u00c3H\u0014\"Bk\u0097\u00cf\u0000\u0083>\u00aaT\u00e3\u00ef$\u00d5\u00b8<\u00a90*\u008aK\u001c\u00eb6\u00d8\u00d5Z";
                        var16_15 = "\u00e4\u0019yx}\u0090\u008e8\u008e\u0091\u00a8>\u00ef\u008b\u0080u\fAT\u00b5\u00ca\u0005\u00e9\u00d5\u008d\u00ed\u009e\u00b9~\u0087\u00fd\u00b1\u008dw\u0087\u0086v\u00cd\u00a6\u008d\u00a9\u009f\u00ea\u00ee\u00d7\u0081$:\u00b3\u00e0MQ\u00bf\u00fa@?\u0013\u00f2\u00a7\u00d2\u00a6\u00fa\u00c6k\u00bf\u00ee\u00e7S\u00d9\u00da\u00acE\u001c\u0099\u008e\u0085\u001c\u00d9\u00d0\u009c+\u0013\u00c0\u00ee\u00f9A\u0091k\u007f\u00ddO\u0099\u00d6>\u0095\u00f5\u00b9\u00d3\u00c2\u0093\u00bbGQ\u00d1\u00f1\u008e\u0083\u00b9i\u00f2\u00d1\r\u0005\u00f5\u0016\u0082\u00bf\u00049)\u0000\u00e7'\u008db\u00e9\u00e8\u00be*!\u00faY#a\u0000\u0019\u00b4\u0015\u00feS\u00da\u001eR\u0099\"\u00eas\u0095Q\u00f0_y\u00d8yo\u00c1WE(\u00df:\u00d5\u00f82\u001fP\u0099Q\u00d8c\u0004\u00c2\u00cf\t\u00c0\u00dc\u000eC\u0089\u00af\u00c0\f\u00f8Uz\u000bX3qr\u0084\u008b\u00cd\u008a\"Gm\u00b9\u00c3\u00e9\u00dd\u00b5\u00d2\u007fG\u00ef\u00df\u00b0>;\u001e\u00a2\u001a\u0084\u00aem\u00015BTJ\u00d4\u00c6D\u00beQ\u00aa\u00ce`b\u008aO\u00bf\u00f0/Z\u00cf2\u00a3\u00d7\u00bd\u0085\u009a=\u0006\u00bb\u00e1\u00d4\u00ff\u0011%\u00861}\u00c9q\u0089\u0011f\u00cf\u0015\u0082\u0010N\u00de\u0002\u00d4\u00baT\u00d0\u00a8Ep\u00a6\u00f3\u00a1\u00ba\f\u00da\u00aaQ\u0014\u00ee\u00d6\u00b5=)t\u007f\u00caJ9\u008c\u00be\u000f\u00b4\u008a\u00eb0\u0082\u00f0T\u00ca\u000e(\u00f5\u0090D\u00ab\u008bV\t\u00fa\u00ba\u001du\\\u00c5>\u000e\u00ac\u009b\u00ee\nz\u00c4[\u00ea\u008a\u00a6\u00ae~\u00f9Ze\u00c3\u009dq`\u00f3\u00c5\r\u00af\u00f2\u00ce\u008f\u00a4C\u00b7YD\u0017\u00eb\rb\u00f4\u008aK\u0003\u000b?\u009e\u00c9\u00cb\u00f7\u00ad\u00c4\u0012N\u00c9\u00ae\u00c3w\u0004\u00bd\u007f\u00b5n\u00a1I\u00c4#W\u00e5\f\u0082\u00d9\u00d7\\\u00ad\u009af\u00c5\u001d\u00cavZ\u001c\u00cd\u00d8\u00cb\u00fa \u00adE\u0000\u0099@OC\u00f7\u0081\u0098D_/mw\u0016\u00b4U\u00f3\u00aaa\u00bcq\u00fb]\u0002\u0010)&\nO\u0092\u0098\u0085\u0084\u00b7\u009d\u00eaw\u00c3H\u0014\"Bk\u0097\u00cf\u0000\u0083>\u00aaT\u00e3\u00ef$\u00d5\u00b8<\u00a90*\u008aK\u001c\u00eb6\u00d8\u00d5Z".length();
                        var13_16 = 0;
                        while (true) {
                            var18_17 = var15_14.substring(var13_16, var13_16 += 8).getBytes("ISO-8859-1");
                            v7 = var17_12;
                            v8 = var14_13++;
                            v9 = ((long)var18_17[0] & 255L) << 56 | ((long)var18_17[1] & 255L) << 48 | ((long)var18_17[2] & 255L) << 40 | ((long)var18_17[3] & 255L) << 32 | ((long)var18_17[4] & 255L) << 24 | ((long)var18_17[5] & 255L) << 16 | ((long)var18_17[6] & 255L) << 8 | (long)var18_17[7] & 255L;
                            v10 = -1;
                            break block16;
                            break;
                        }
lbl58:
                        // 1 sources

                        while (true) {
                            v7[v8] = v11;
                            if (var13_16 < var16_15) ** continue;
                            var15_14 = "\u00d6\u00e6\u00ddlVV\u00f6$Y\u00e8\u00e9\u00b1\u00e6\u0018\u001d\u001d";
                            var16_15 = "\u00d6\u00e6\u00ddlVV\u00f6$Y\u00e8\u00e9\u00b1\u00e6\u0018\u001d\u001d".length();
                            var13_16 = 0;
                            while (true) {
                                var18_17 = var15_14.substring(var13_16, var13_16 += 8).getBytes("ISO-8859-1");
                                v7 = var17_12;
                                v8 = var14_13++;
                                v9 = ((long)var18_17[0] & 255L) << 56 | ((long)var18_17[1] & 255L) << 48 | ((long)var18_17[2] & 255L) << 40 | ((long)var18_17[3] & 255L) << 32 | ((long)var18_17[4] & 255L) << 24 | ((long)var18_17[5] & 255L) << 16 | ((long)var18_17[6] & 255L) << 8 | (long)var18_17[7] & 255L;
                                v10 = 0;
                                break block16;
                                break;
                            }
                            break;
                        }
lbl71:
                        // 1 sources

                        while (true) {
                            v7[v8] = v11;
                            if (var13_16 < var16_15) ** continue;
                            break block17;
                            break;
                        }
                    }
                    var19_18 = v9;
                    var21_19 = var11_10.doFinal(new byte[]{(byte)(var19_18 >>> 56), (byte)(var19_18 >>> 48), (byte)(var19_18 >>> 40), (byte)(var19_18 >>> 32), (byte)(var19_18 >>> 24), (byte)(var19_18 >>> 16), (byte)(var19_18 >>> 8), (byte)var19_18});
                    v11 = ((long)var21_19[0] & 255L) << 56 | ((long)var21_19[1] & 255L) << 48 | ((long)var21_19[2] & 255L) << 40 | ((long)var21_19[3] & 255L) << 32 | ((long)var21_19[4] & 255L) << 24 | ((long)var21_19[5] & 255L) << 16 | ((long)var21_19[6] & 255L) << 8 | (long)var21_19[7] & 255L;
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
                db.fRWrP = var17_12;
                db.xjjOW = new Integer[61];
                db.JSdXa = new HashMap<K, V>(13);
                var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
                v12 = SecretKeyFactory.getInstance("DES");
                v13 = new byte[8];
                v14 = v13;
                v13[0] = (byte)(var22 >>> 56);
                for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                    v14 = v14;
                    v14[var1_21] = (byte)(var22 << var1_21 * 8 >>> 56);
                }
                var0_20.init(2, (Key)v12.generateSecret(new DESKeySpec(v14)), new IvParameterSpec(new byte[8]));
                var6_22 = new long[2];
                var3_23 = 0;
                var4_24 = "\u00e6\u0006\u00b9\u00b9\u00fd9\u00bc\u00a0\u00e1\u00b3\u000f?B\u00ffc ";
                var5_25 = "\u00e6\u0006\u00b9\u00b9\u00fd9\u00bc\u00a0\u00e1\u00b3\u000f?B\u00ffc ".length();
                var2_26 = 0;
                while (true) {
                    break block18;
                    break;
                }
lbl106:
                // 1 sources

                while (true) {
                    var6_22[v15] = ((long)var10_29[0] & 255L) << 56 | ((long)var10_29[1] & 255L) << 48 | ((long)var10_29[2] & 255L) << 40 | ((long)var10_29[3] & 255L) << 32 | ((long)var10_29[4] & 255L) << 24 | ((long)var10_29[5] & 255L) << 16 | ((long)var10_29[6] & 255L) << 8 | (long)var10_29[7] & 255L;
                    if (var2_26 < var5_25) ** continue;
                    break block19;
                    break;
                }
            }
            var7_27 = var4_24.substring(var2_26, var2_26 += 8).getBytes("ISO-8859-1");
            v15 = var3_23++;
            var8_28 = ((long)var7_27[0] & 255L) << 56 | ((long)var7_27[1] & 255L) << 48 | ((long)var7_27[2] & 255L) << 40 | ((long)var7_27[3] & 255L) << 32 | ((long)var7_27[4] & 255L) << 24 | ((long)var7_27[5] & 255L) << 16 | ((long)var7_27[6] & 255L) << 8 | (long)var7_27[7] & 255L;
            var10_29 = var0_20.doFinal(new byte[]{(byte)(var8_28 >>> 56), (byte)(var8_28 >>> 48), (byte)(var8_28 >>> 40), (byte)(var8_28 >>> 32), (byte)(var8_28 >>> 24), (byte)(var8_28 >>> 16), (byte)(var8_28 >>> 8), (byte)var8_28});
            ** while (true)
        }
        db.VTSsC = var6_22;
        db.nlUEb = new Long[2];
    }

    private static long abV(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x64C8;
        if (nlUEb[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = VTSsC[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])JSdXa.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    JSdXa.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/db", exception);
            }
            long l4 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            db.nlUEb[n2] = l4;
        }
        return nlUEb[n2];
    }

    private static String abP(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1BA8;
        if (RZPqY[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])HQaif.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    HQaif.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/db", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = eoEJo[n2].getBytes("ISO-8859-1");
            db.RZPqY[n2] = db.abO(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return RZPqY[n2];
    }

    private static int abS(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2154;
        if (xjjOW[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = fRWrP[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])wlfYn.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    wlfYn.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/db", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            db.xjjOW[n2] = n3;
        }
        return xjjOW[n2];
    }

    private static Object abQ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = db.abP(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String abO(byte[] byArray) {
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

    private static long abW(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        long l2 = db.abV(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l2;
    }

    private static CallSite abR(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/db" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int abT(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = db.abS(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private /* synthetic */ void abH(String string, lv lv2) {
        this.mqXLF = lv2;
        this.OlDHF = string;
        this.hvsLj.cpB();
    }

    @hG
    public void abC(gM gM2) {
        this.CdBII.clear();
        this.RbHqK.clear();
    }

    private static CallSite abU(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/db" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException abN(MatchException matchException) {
        return matchException;
    }

    /*
     * Unable to fully structure code
     */
    private void abG() {
        block16: {
            block22: {
                block21: {
                    block20: {
                        block19: {
                            block17: {
                                block18: {
                                    block15: {
                                        var1_1 = db.juqJM ^ 81548874080958L;
                                        var4_2 = this.GZUSi.ST();
                                        var3_3 = dh.afl();
                                        try {
                                            v0 = this.hvsLj.cpC((long)db.abX("k", (int)7659, (long)(5350044978894047603L ^ var1_1)));
                                            if (var3_3 != null) break block15;
                                            if (v0 == 0) break block16;
                                        }
                                        catch (MatchException v1) {
                                            throw db.abN(v1);
                                        }
                                        v0 = var4_2;
                                    }
                                    if (v0 != 2) ** GOTO lbl51
                                    var5_4 = this.ZQjnc.Us();
                                    try {
                                        try {
                                            v2 = jd.bAm(var5_4);
                                            if (var3_3 != null) break block17;
                                            if (v2) break block18;
                                        }
                                        catch (MatchException v3) {
                                            throw db.abN(v3);
                                        }
                                        this.hvsLj.cpB();
                                        return;
                                    }
                                    catch (MatchException v4) {
                                        throw db.abN(v4);
                                    }
                                }
                                try {
                                    v5 = var5_4;
                                    if (var3_3 != null) break block19;
                                    v2 = v5.equals(this.OlDHF);
                                }
                                catch (MatchException v6) {
                                    throw db.abN(v6);
                                }
                            }
                            if (v2) ** GOTO lbl43
                            v5 = var5_4;
                        }
                        try {
                            oe.cCd(v5).thenAccept((Consumer)(Consumer<lv>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, abH(java.lang.String sixtwo.lv ), (Lsixtwo/lv;)V)((db)this, (String)var5_4));
                            if (var3_3 == null) break block20;
lbl43:
                            // 2 sources

                            this.hvsLj.cpB();
                        }
                        catch (MatchException v7) {
                            throw db.abN(v7);
                        }
                    }
                    try {
                        try {
                            if (var3_3 == null) break block16;
lbl51:
                            // 2 sources

                            v8 = this;
                            if (var4_2 != 0) break block21;
                        }
                        catch (MatchException v9) {
                            throw db.abN(v9);
                        }
                        v10 = ob.cBv((String)db.abR("y", (int)27709, (long)(742483800386471876L ^ var1_1)));
                        break block22;
                    }
                    catch (MatchException v11) {
                        throw db.abN(v11);
                    }
                }
                v10 = ob.cBv((String)db.abR("y", (int)11427, (long)(3668679309299435355L ^ var1_1)));
            }
            v8.mqXLF = v10;
            this.hvsLj.cpB();
        }
    }

    private void abF() {
        this.RbHqK.removeIf(class_16572 -> {
            boolean bl;
            block12: {
                block13: {
                    block11: {
                        class_1657 class_16573;
                        iS[] iSArray;
                        block10: {
                            long l = juqJM ^ 0x1A9B37B2EF3AL;
                            iSArray = dh.afl();
                            try {
                                class_16573 = class_16572;
                                if (iSArray != null) break block10;
                                if (class_16573 == null) break block11;
                            }
                            catch (MatchException matchException) {
                                throw db.abN(matchException);
                            }
                            class_16573 = class_16572;
                        }
                        try {
                            try {
                                try {
                                    try {
                                        bl = class_16573.method_31481();
                                        if (iSArray != null) break block12;
                                        if (bl) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw db.abN(matchException);
                                    }
                                    if (class_16572.method_73183() != rD.dlmvG.field_1687) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw db.abN(matchException);
                                }
                                bl = rD.dlmvG.field_1687.method_18456().contains(class_16572);
                                if (iSArray != null) break block12;
                            }
                            catch (MatchException matchException) {
                                throw db.abN(matchException);
                            }
                            if (bl) break block13;
                        }
                        catch (MatchException matchException) {
                            throw db.abN(matchException);
                        }
                    }
                    bl = true;
                    break block12;
                }
                bl = false;
            }
            return bl;
        });
        rD.dlmvG.field_1687.method_18456().stream().filter(class_7422 -> {
            boolean bl;
            block13: {
                block11: {
                    block12: {
                        boolean bl2;
                        iS[] iSArray;
                        block10: {
                            long l = juqJM ^ 0x218B911AD779L;
                            iSArray = dh.afl();
                            try {
                                try {
                                    bl2 = this.RbHqK.contains(class_7422);
                                    if (iSArray != null) break block10;
                                    if (bl2) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw db.abN(matchException);
                                }
                                bl2 = class_7422.method_24828();
                            }
                            catch (MatchException matchException) {
                                throw db.abN(matchException);
                            }
                        }
                        try {
                            try {
                                try {
                                    if (!bl2) break block11;
                                    if (rD.dlmvG.field_1724 == class_7422) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw db.abN(matchException);
                                }
                                bl = this.iiIVe.WF();
                                if (iSArray != null) break block13;
                            }
                            catch (MatchException matchException) {
                                throw db.abN(matchException);
                            }
                            if (bl) break block11;
                        }
                        catch (MatchException matchException) {
                            throw db.abN(matchException);
                        }
                    }
                    bl = true;
                    break block13;
                }
                bl = false;
            }
            return bl;
        }).forEach(this.RbHqK::add);
        this.RbHqK.removeIf(class_16572 -> {
            boolean bl;
            block8: {
                block7: {
                    class_1657 class_16573;
                    iS[] iSArray;
                    block6: {
                        long l = juqJM ^ 0x2B252A3073A7L;
                        iSArray = dh.afl();
                        try {
                            class_16573 = class_16572;
                            if (iSArray != null) break block6;
                            if (class_16573 == null) break block7;
                        }
                        catch (MatchException matchException) {
                            throw db.abN(matchException);
                        }
                        class_16573 = class_16572;
                    }
                    try {
                        try {
                            bl = class_16573.method_24828();
                            if (iSArray != null) break block8;
                            if (bl) break block7;
                        }
                        catch (MatchException matchException) {
                            throw db.abN(matchException);
                        }
                        this.CdBII.add(new db$sw(new class_243(class_16572.method_23317(), Math.floor(class_16572.method_23318()) + (double)0.001f, class_16572.method_23321())));
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw db.abN(matchException);
                    }
                }
                bl = false;
            }
            return bl;
        });
        this.CdBII.removeIf(db$sw -> {
            boolean bl;
            block8: {
                block7: {
                    iS[] iSArray;
                    block6: {
                        long l = juqJM ^ 0x47C1906B362BL;
                        iSArray = dh.afl();
                        try {
                            try {
                                bl = db$sw.PaBdV;
                                if (iSArray != null) break block6;
                                if (!bl) break block7;
                            }
                            catch (MatchException matchException) {
                                throw db.abN(matchException);
                            }
                            float f = db$sw.pvrxH.dhj() - 0.0f;
                            bl = f == 0.0f ? 0 : (f > 0.0f ? 1 : -1);
                        }
                        catch (MatchException matchException) {
                            throw db.abN(matchException);
                        }
                    }
                    try {
                        if (iSArray != null) break block8;
                        if (bl) break block7;
                    }
                    catch (MatchException matchException) {
                        throw db.abN(matchException);
                    }
                    bl = true;
                    break block8;
                }
                bl = false;
            }
            return bl;
        });
    }

    private static CallSite abX(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_2().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/db" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @hG
    public void abE(go.sX sX2) {
        db db2;
        iS[] iSArray;
        long l;
        block25: {
            boolean bl;
            block23: {
                block24: {
                    l = juqJM ^ 0x7B69C41BDBA1L;
                    iSArray = dh.afl();
                    try {
                        bl = this.bab();
                        if (iSArray != null) break block23;
                        if (bl) break block24;
                        return;
                    }
                    catch (MatchException matchException) {
                        throw db.abN(matchException);
                    }
                }
                try {
                    db2 = this;
                    if (iSArray != null) break block25;
                    bl = db2.CdBII.isEmpty();
                }
                catch (MatchException matchException) {
                    throw db.abN(matchException);
                }
            }
            if (bl) return;
            db2 = this;
        }
        try {
            if (db2.mqXLF == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw db.abN(matchException);
        }
        class_4587 class_45872 = sX2.bbh();
        float f = this.cMvXG.VB();
        mG mG2 = mG.cnQ(this.CCftK.Wh());
        XSRvt.startBatch(this.mqXLF);
        try {
            for (int i = this.CdBII.size() - 1; i >= 0; --i) {
                boolean bl;
                rk rk2;
                db$sw db$sw;
                block28: {
                    block29: {
                        db$sw db$sw2;
                        block26: {
                            block27: {
                                block32: {
                                    block31: {
                                        block30: {
                                            db$sw = this.CdBII.get(i);
                                            if (iSArray != null) return;
                                            db$sw2 = db$sw;
                                            if (iSArray != null) break block26;
                                            break block30;
                                            catch (MatchException matchException) {
                                                throw db.abN(matchException);
                                            }
                                        }
                                        if (db$sw2.PaBdV) break block27;
                                        break block31;
                                        catch (MatchException matchException) {
                                            throw db.abN(matchException);
                                        }
                                    }
                                    db$sw2 = db$sw;
                                    if (iSArray != null) break block26;
                                    break block32;
                                    catch (MatchException matchException) {
                                        throw db.abN(matchException);
                                    }
                                }
                                try {
                                    block33: {
                                        if (!db$sw2.QWqhb.cpC((long)db.abX("k", (int)31128, (long)(0x75D918760983541EL ^ l)))) break block27;
                                        break block33;
                                        catch (MatchException matchException) {
                                            throw db.abN(matchException);
                                        }
                                    }
                                    db$sw.pvrxH.dhs(rj.AYqck);
                                    db$sw.PaBdV = true;
                                }
                                catch (MatchException matchException) {
                                    throw db.abN(matchException);
                                }
                            }
                            db$sw2 = db$sw;
                        }
                        try {
                            rk2 = db$sw2.pvrxH;
                            bl = db$sw.PaBdV;
                            if (iSArray != null) break block28;
                            if (bl) break block29;
                        }
                        catch (MatchException matchException) {
                            throw db.abN(matchException);
                        }
                        bl = true;
                        break block28;
                    }
                    bl = false;
                }
                rk2.dhc(bl);
                float f2 = db$sw.pvrxH.dhj();
                float f3 = f * f2;
                class_45872.method_22903();
                jI.bIs(class_45872, db$sw.AUTLH);
                class_45872.method_22907((Quaternionfc)class_7833.field_40714.rotationDegrees(90.0f));
                float f4 = f3 * 2.0f;
                XSRvt.bUH(kG.bTv(class_45872, -f3, -f3, 0.0, f4, f4).dtF(mG2).dtG());
                class_45872.method_22909();
                if (iSArray == null) continue;
                return;
            }
            return;
        }
        finally {
            XSRvt.endBatch();
        }
    }

    @hG
    public void abD(gH.th th2) {
        db db2;
        block4: {
            block5: {
                long l = juqJM ^ 0x3D0C5728F6B9L;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        db2 = this;
                        if (iSArray != null) break block4;
                        if (db2.bab()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw db.abN(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw db.abN(matchException);
                }
            }
            this.abG();
            db2 = this;
        }
        db2.abF();
    }

    @Override
    public void YO() {
        super.YO();
        this.CdBII.clear();
        this.RbHqK.clear();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(db.class, "abQ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(db.class, "abT", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_2() {
        try {
            return MethodHandles.lookup().findStatic(db.class, "abW", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
