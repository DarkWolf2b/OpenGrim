/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  media.IMediaSession
 *  media.MediaInfo
 *  media.impl.win.WindowsMediaSession
 *  net.minecraft.client.gui.screen.ChatScreen
 *  net.minecraft.client.texture.AbstractTexture
 *  net.minecraft.util.math.MathHelper
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import media.IMediaSession;
import media.MediaInfo;
import media.impl.win.WindowsMediaSession;
import net.minecraft.client.gui.screen.ChatScreen;
import net.minecraft.client.texture.AbstractTexture;
import net.minecraft.util.math.MathHelper;
import sixtwo.ca;
import sixtwo.cr;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.jf;
import sixtwo.kW;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.ob;
import sixtwo.qO;
import sixtwo.rD;
import sixtwo.ri;
import sixtwo.rj;
import sixtwo.rk;

public class cc
extends cr {
    private final ct poEJg;
    private final cu cdPcl;
    private final cu DnfPC;
    private final rk[] nKTkB;
    private final float[] ywaEw;
    private final mT Uslxa;
    private final ri tYJbR;
    private final ri wNrIZ;
    private final rk LzQrF;
    private final rk QpQRV;
    private final rk debmQ;
    private final rk IbiJA;
    private final rk zzuzN;
    private static final long axaUP;
    private static final String[] wtTpp;
    private static final String[] vRGNc;
    private static final Map nvHhc;
    private static final long[] dunGn;
    private static final Integer[] NQYLH;
    private static final Map rhxtg;
    private static final long QlUSv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static Object PD(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cc.PC(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public cc() {
        long l2 = axaUP ^ 0x482FA3832EE7L;
        super(new int[]{(int)cc.PH("l", (int)7657, (long)(0x74364B9612E6E35L ^ l2)), (int)cc.PH("l", (int)19555, (long)(0x7846DBF4EA433FA9L ^ l2)), (int)cc.PH("l", (int)10145, (long)(0x23552468933BD468L ^ l2)), (int)cc.PH("l", (int)26710, (long)(0x1C8D464F4A6D9BB3L ^ l2)), (int)cc.PH("l", (int)18870, (long)(0xA2DAEB111C3A63L ^ l2))}, lf.MZXpZ);
        int[] nArray = new int[cc.PH("l", (int)12172, (long)(0x99C86710E15C63L ^ l2))];
        nArray[0] = (int)cc.PH("l", (int)1992, (long)(0x4B92F4C16677F42AL ^ l2));
        nArray[1] = (int)cc.PH("l", (int)17592, (long)(0x2F2C546BD2F63755L ^ l2));
        nArray[2] = (int)cc.PH("l", (int)13380, (long)(0x1FA1E7E78042C781L ^ l2));
        nArray[3] = (int)cc.PH("l", (int)18365, (long)(0x968C72AAEE9B46BL ^ l2));
        nArray[4] = (int)cc.PH("l", (int)26133, (long)(0x28F7CED857BD95D6L ^ l2));
        nArray[5] = (int)cc.PH("l", (int)8647, (long)(0x7E018394989A5210L ^ l2));
        nArray[cc.PH("l", (int)13599, (long)(0x58796B82F35BC6C0L ^ l2))] = (int)cc.PH("l", (int)31573, (long)(0x155EF2C6E0C9889EL ^ l2));
        nArray[cc.PH("l", (int)26194, (long)(0x4998720FEF551580L ^ l2))] = (int)cc.PH("l", (int)16470, (long)(0x3315C4774C8FB391L ^ l2));
        nArray[cc.PH("l", (int)14469, (long)(0x645B9B8A720ACB6BL ^ l2))] = (int)cc.PH("l", (int)2901, (long)(0x51854AFBF17BF895L ^ l2));
        nArray[cc.PH("l", (int)29670, (long)(0x303323D2838E8007L ^ l2))] = (int)cc.PH("l", (int)678, (long)(0x4D993E056D8AF17FL ^ l2));
        nArray[cc.PH("l", (int)29721, (long)(0x4250A9EF8CE507DBL ^ l2))] = (int)cc.PH("l", (int)30040, (long)(0x7AAE5CE874506B4L ^ l2));
        nArray[cc.PH("l", (int)13901, (long)(0x38AB11ADC0F545ADL ^ l2))] = (int)cc.PH("l", (int)14655, (long)(0x10D58622F2674AEBL ^ l2));
        nArray[cc.PH("l", (int)15394, (long)(0x4DFB99FDC5E8CFFAL ^ l2))] = (int)cc.PH("l", (int)2901, (long)(0x51854AFBF17BF895L ^ l2));
        nArray[cc.PH("l", (int)31788, (long)(0x13FD252F24990FFCL ^ l2))] = (int)cc.PH("l", (int)29898, (long)(0x2D57F50D47B8711L ^ l2));
        nArray[cc.PH("l", (int)14582, (long)(0x6ADDD8135CF7CB1EL ^ l2))] = (int)cc.PH("l", (int)10598, (long)(0x17256900C93E5AB5L ^ l2));
        this.poEJg = new ct(this, mr.clS(nArray));
        int[] nArray2 = new int[cc.PH("l", (int)18904, (long)(0x5CB083C2FC753A3CL ^ l2))];
        nArray2[0] = (int)cc.PH("l", (int)5237, (long)(0x4EB9B1DFFFFDE7B8L ^ l2));
        nArray2[1] = (int)cc.PH("l", (int)22068, (long)(0x31C83AC1855325EEL ^ l2));
        nArray2[2] = (int)cc.PH("l", (int)18992, (long)(0x45D1C42E962639FCL ^ l2));
        nArray2[3] = (int)cc.PH("l", (int)12827, (long)(0x419B21AA9284C1D5L ^ l2));
        nArray2[4] = (int)cc.PH("l", (int)14371, (long)(0x57E314EBA20F4BE5L ^ l2));
        nArray2[5] = (int)cc.PH("l", (int)23535, (long)(0x228C630214A4A82EL ^ l2));
        this.cdPcl = new cu(this.poEJg, mr.clS(nArray2));
        int[] nArray3 = new int[cc.PH("l", (int)18904, (long)(0x5CB083C2FC753A3CL ^ l2))];
        nArray3[0] = (int)cc.PH("l", (int)18210, (long)(0x3316EDB2461634C1L ^ l2));
        nArray3[1] = (int)cc.PH("l", (int)10312, (long)(0xF71F1C60FDB5B8CL ^ l2));
        nArray3[2] = (int)cc.PH("l", (int)16438, (long)(0x4FA9724E719AB3F9L ^ l2));
        nArray3[3] = (int)cc.PH("l", (int)14609, (long)(0x6A688C0C45934AFAL ^ l2));
        nArray3[4] = (int)cc.PH("l", (int)27836, (long)(0x7B4A57361C3D9F55L ^ l2));
        nArray3[5] = (int)cc.PH("l", (int)12827, (long)(0x419B21AA9284C1D5L ^ l2));
        this.DnfPC = new cu(this.poEJg, mr.clS(nArray3)).SY();
        this.nKTkB = new rk[cc.PH("l", (int)18904, (long)(0x5CB083C2FC753A3CL ^ l2))];
        this.ywaEw = new float[cc.PH("l", (int)18904, (long)(0x5CB083C2FC753A3CL ^ l2))];
        this.Uslxa = mT.cpz();
        boolean bl2 = ca.OX();
        this.tYJbR = new ri((int)cc.PH("l", (int)15293, (long)(0x1DC14A1942D74863L ^ l2)));
        this.wNrIZ = new ri((int)cc.PH("l", (int)9998, (long)(0xE5425EE485E54C6L ^ l2)));
        this.LzQrF = new rk((int)cc.PH("l", (int)3475, (long)(0x282B88B91D7E79L ^ l2))).dhs(rj.NJlxm);
        this.QpQRV = new rk((int)cc.PH("l", (int)23819, (long)(0x449AD816D47DAEDAL ^ l2))).dhs(rj.UPXqT);
        this.debmQ = new rk((int)cc.PH("l", (int)23819, (long)(0x449AD816D47DAEDAL ^ l2))).dhs(rj.UPXqT);
        this.IbiJA = new rk((int)cc.PH("l", (int)23819, (long)(0x449AD816D47DAEDAL ^ l2))).dhs(rj.UPXqT);
        this.zzuzN = new rk((int)cc.PH("l", (int)21582, (long)(0x3C5E234D48D0A793L ^ l2))).dhs(rj.Xmkbr);
        for (int i2 = 0; i2 < this.nKTkB.length; ++i2) {
            this.nKTkB[i2] = new rk((int)cc.PH("l", (int)9998, (long)(0xE5425EE485E54C6L ^ l2))).dhs(rj.Xmkbr);
            this.nKTkB[i2].dhf(0.35f);
            this.ywaEw[i2] = 0.35f;
            if (!bl2) continue;
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
                        cc.axaUP = gb.aYR(5575654254560810711L, 2251488754095607058L, MethodHandles.lookup().lookupClass()).a(201337464245299L);
                        cc.nvHhc = new HashMap<K, V>(13);
                        var16 = cc.axaUP ^ 59834845167809L;
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
                        var22_5 = "6\u00bc=\u00c4\u00a5\u00de\u00aa\u00cb\u0088\u00f159C\u00a6\u00fb\u00b9\u00be\u001cD\u0098\u00e7\u00f8k-\u008c+\u0005\u00881\u0086\u00ac\u00f3\u00b1$\u00ea{\u0017Qy\u00bd \u00dfv\u0089*}\u00e2VnL\u00f3\u0016\u00a9\u0016,\u00a9\u00fd,9OH\u0093\u0006\u00ef\u008c#\u00d5\u0082\u00c6\u00c7Li7";
                        var24_6 = "6\u00bc=\u00c4\u00a5\u00de\u00aa\u00cb\u0088\u00f159C\u00a6\u00fb\u00b9\u00be\u001cD\u0098\u00e7\u00f8k-\u008c+\u0005\u00881\u0086\u00ac\u00f3\u00b1$\u00ea{\u0017Qy\u00bd \u00dfv\u0089*}\u00e2VnL\u00f3\u0016\u00a9\u0016,\u00a9\u00fd,9OH\u0093\u0006\u00ef\u008c#\u00d5\u0082\u00c6\u00c7Li7".length();
                        var21_7 = 40;
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
                            var25_3[var23_4++] = cc.PB(var26_9).intern();
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
                    cc.wtTpp = var25_3;
                    cc.vRGNc = new String[2];
                    cc.rhxtg = new HashMap<K, V>(13);
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
                    var11_12 = new long[46];
                    var8_13 = 0;
                    var9_14 = "rFK\u001d\u00e2\u00bf\u009b\u009b\u00b8\u00c8\u00f1\u00a4\u0015!\t\u007fq08b\u0016\u008b\u00e3\u00d6\u00d8\u001aQ\u00cbb\u00be?W\u008c\u00c9\u00fe\u00e4{\u008d0\u00c6.Um\u00c5x\u00b8\u00cdE\u00f6\u0005V+\u00a6\u001a\u00a7@g\u00e9\u0007,\u00b94\u00ec\u00fa\u00fe\u00b1\u00fb\u00b3Gd\u001e9*D\u00a8p\u00feqV\u00b7\u00eb_{v0\u00043:\u0093\u00b7<\u0081\u0093_\u00a9c\u00e3#\u00d7^7_ZQ\u0086\u009923 I\u00fdf\u0083?\u0005\u001c^\u0003t\u0006\u00db}&0X\u00a4l\u0010\u00be\u00d6l\u00ab\u0080\u00f2\u0014x_\u00f5\u00ab\u0092J\u00ce\u0081gPO8\u0007j'n\u00b9\u00ecr\u0012\u0007\u00e0\u0004\u0096~Y\u00a19\u000e\u00fc@\u001aP\u00b3\u00c5<<\u001b\u00bcq\u00d0<\u00e04\u001e\u00d6\u0005\u00a3\u00c4\u008c\u00a1e\u009c5\u00b7\u00fc2\u000ev\u00e3\"\u0086x0\u00f4\u00fch\u00b1l\u00c4\u0087\u00cf\u00ef\u0011\u00e5\u00ce\u00a2\u00d2c\u00b9\u001d\u00b6\u00ce\t3&$\u001f\u00a8\u00a7\u00b4Z|\u00a2_\u00dd\u0083\u0003\u00ae\u001a\u00c0\u000f\u008bQ\u00b7\u00baG\u00f9\u009d\u00ffE#\u008f\u00d6\u0005\u00fb\u00d6\u00ae\r\u00f3\u001b\u00bd\u00a5\u00d4\u00a5:*L+\u00ca%\u00eb\u00f1\u007f\u00eb\u00d1\u00d4@{\u00ce,\u00de\u00d0^\u00c6\u00ec\u0003\u0089\u00c3\u008b/\u00d3\u00f0) \u00d0\u000es\u0011)\u00e4'\u008bsw\u00f0\u000bi\rPP(\u00c2\u00ab\u00a3\u0081\u0084\u0015\u00ed\u00f7\u0001\u00a7\u009dN\u00fcU ;]2^_\u009c\u00fd\u00dc\u00fc\u00e3\u009e\u0018\u0019\u00c3[\u001c\u0006\u001d\u00b9\u009e\u00eb\u00c7k5\u00f9\u008d\u009c\u00fe:t";
                    var10_15 = "rFK\u001d\u00e2\u00bf\u009b\u009b\u00b8\u00c8\u00f1\u00a4\u0015!\t\u007fq08b\u0016\u008b\u00e3\u00d6\u00d8\u001aQ\u00cbb\u00be?W\u008c\u00c9\u00fe\u00e4{\u008d0\u00c6.Um\u00c5x\u00b8\u00cdE\u00f6\u0005V+\u00a6\u001a\u00a7@g\u00e9\u0007,\u00b94\u00ec\u00fa\u00fe\u00b1\u00fb\u00b3Gd\u001e9*D\u00a8p\u00feqV\u00b7\u00eb_{v0\u00043:\u0093\u00b7<\u0081\u0093_\u00a9c\u00e3#\u00d7^7_ZQ\u0086\u009923 I\u00fdf\u0083?\u0005\u001c^\u0003t\u0006\u00db}&0X\u00a4l\u0010\u00be\u00d6l\u00ab\u0080\u00f2\u0014x_\u00f5\u00ab\u0092J\u00ce\u0081gPO8\u0007j'n\u00b9\u00ecr\u0012\u0007\u00e0\u0004\u0096~Y\u00a19\u000e\u00fc@\u001aP\u00b3\u00c5<<\u001b\u00bcq\u00d0<\u00e04\u001e\u00d6\u0005\u00a3\u00c4\u008c\u00a1e\u009c5\u00b7\u00fc2\u000ev\u00e3\"\u0086x0\u00f4\u00fch\u00b1l\u00c4\u0087\u00cf\u00ef\u0011\u00e5\u00ce\u00a2\u00d2c\u00b9\u001d\u00b6\u00ce\t3&$\u001f\u00a8\u00a7\u00b4Z|\u00a2_\u00dd\u0083\u0003\u00ae\u001a\u00c0\u000f\u008bQ\u00b7\u00baG\u00f9\u009d\u00ffE#\u008f\u00d6\u0005\u00fb\u00d6\u00ae\r\u00f3\u001b\u00bd\u00a5\u00d4\u00a5:*L+\u00ca%\u00eb\u00f1\u007f\u00eb\u00d1\u00d4@{\u00ce,\u00de\u00d0^\u00c6\u00ec\u0003\u0089\u00c3\u008b/\u00d3\u00f0) \u00d0\u000es\u0011)\u00e4'\u008bsw\u00f0\u000bi\rPP(\u00c2\u00ab\u00a3\u0081\u0084\u0015\u00ed\u00f7\u0001\u00a7\u009dN\u00fcU ;]2^_\u009c\u00fd\u00dc\u00fc\u00e3\u009e\u0018\u0019\u00c3[\u001c\u0006\u001d\u00b9\u009e\u00eb\u00c7k5\u00f9\u008d\u009c\u00fe:t".length();
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
                        var9_14 = "\u00fc\u00bf\u008a\u0090x\u0012\u008e\u00d5\u00c0.\u00af`\u0088\u009c\u00bd\u0091";
                        var10_15 = "\u00fc\u00bf\u008a\u0090x\u0012\u008e\u00d5\u00c0.\u00af`\u0088\u009c\u00bd\u0091".length();
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
            cc.dunGn = var11_12;
            cc.NQYLH = new Integer[46];
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
        var2_22 = 6537864497686658242L;
        var4_23 = var0_20.doFinal(new byte[]{(byte)(var2_22 >>> 56), (byte)(var2_22 >>> 48), (byte)(var2_22 >>> 40), (byte)(var2_22 >>> 32), (byte)(var2_22 >>> 24), (byte)(var2_22 >>> 16), (byte)(var2_22 >>> 8), (byte)var2_22});
        ** while (true)
        cc.QlUSv = ((long)var4_23[0] & 255L) << 56 | ((long)var4_23[1] & 255L) << 48 | ((long)var4_23[2] & 255L) << 40 | ((long)var4_23[3] & 255L) << 32 | ((long)var4_23[4] & 255L) << 24 | ((long)var4_23[5] & 255L) << 16 | ((long)var4_23[6] & 255L) << 8 | (long)var4_23[7] & 255L;
    }

    @Override
    protected void NV(lC lC2) {
        block20: {
            float f2;
            rk rk2;
            qO qO2;
            float f3;
            float f4;
            mG mG2;
            lq lq2;
            lq lq3;
            qO qO3;
            block19: {
                Object object;
                boolean bl2;
                block18: {
                    qO qO4;
                    block16: {
                        block17: {
                            AbstractTexture abstractTexture;
                            float f5;
                            ii ii2;
                            long l2;
                            block14: {
                                block15: {
                                    l2 = axaUP ^ 0xBE3EA5B5313L;
                                    ii2 = rD.dlM();
                                    bl2 = ca.OY();
                                    f5 = this.ormBS.dhj();
                                    float f6 = this.gILqY.dhj();
                                    mG mG3 = mG.QHTxQ.cob(0.3f * f6);
                                    lC2.ccY(this.toIeR - 5.0f, this.QWaAn - 5.0f, this.jTsqG + 10.0f, this.Xtjvx + 10.0f, 15.0f, ld.all(6.0f), mG3);
                                    lC2.ccU(this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx, f5, f6);
                                    qO3 = rD.dmg();
                                    try {
                                        try {
                                            abstractTexture = qO3.dcK();
                                            if (!bl2) break block14;
                                            if (abstractTexture == null) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw cc.PA(matchException);
                                        }
                                        abstractTexture = qO3.dcK();
                                        break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw cc.PA(matchException);
                                    }
                                }
                                abstractTexture = ob.cBv((String)((Object)cc.PE("g", (int)25611, (long)(0x2DF1D2A8801054F8L ^ l2))));
                            }
                            AbstractTexture abstractTexture2 = abstractTexture;
                            float f7 = 26.0f;
                            lC2.cef(abstractTexture2, this.toIeR + 7.0f, this.QWaAn + 7.0f, f7, f7, ld.all(3.0f), mG.hoGuU);
                            lq3 = lE.SVnNc.bYM(8.0f);
                            lq2 = lE.SVnNc.bYM(7.0f);
                            mG2 = ii2.bjb().coa(255.0f * f5);
                            f4 = this.toIeR + 7.0f + f7 + 7.0f;
                            f3 = this.QWaAn + 10.0f;
                            try {
                                try {
                                    qO4 = qO3;
                                    if (!bl2) break block16;
                                    if (!qO4.dcX().isBlank()) break block17;
                                }
                                catch (MatchException matchException) {
                                    throw cc.PA(matchException);
                                }
                                object = cc.PE("g", (int)24446, (long)(0x191C6EBCC759EF8CL ^ l2));
                                break block18;
                            }
                            catch (MatchException matchException) {
                                throw cc.PA(matchException);
                            }
                        }
                        qO4 = qO3;
                    }
                    object = qO4.dcX();
                }
                String string = object;
                try {
                    try {
                        lC2.ceH(lq3, string, f4, f3, mG2, 0.3f, 0.7f, 140.0f);
                        qO2 = qO3;
                        if (!bl2) break block19;
                        if (!qO2.dcQ()) break block20;
                    }
                    catch (MatchException matchException) {
                        throw cc.PA(matchException);
                    }
                    qO2 = qO3;
                }
                catch (MatchException matchException) {
                    throw cc.PA(matchException);
                }
            }
            IMediaSession iMediaSession = qO2.dcS();
            MediaInfo mediaInfo = iMediaSession.media();
            try {
                rk2 = this.LzQrF;
                f2 = mediaInfo.playing() ? 1.0f : 0.0f;
            }
            catch (MatchException matchException) {
                throw cc.PA(matchException);
            }
            rk2.dhd(f2);
            String string = mediaInfo.artist();
            lC2.ceH(lq2, string, f4, f3 + lq3.cat() + 4.0f, mG2.cob(0.5f), 0.3f, 0.7f, 140.0f);
            this.Pw(lC2, mG2, mediaInfo);
            this.Px(lC2, qO3.dcU(), mG2, mediaInfo);
            this.Pz(lC2, mG2, iMediaSession);
        }
    }

    @Override
    public void LX(lC lC2) {
        this.jTsqG = 160.0f;
        this.Xtjvx = 75.0f;
        super.LX(lC2);
    }

    @Override
    public boolean Om() {
        boolean bl2;
        block6: {
            block8: {
                block7: {
                    long l2 = axaUP ^ 0x86E7CDB1639L;
                    boolean bl3 = ca.OY();
                    try {
                        try {
                            try {
                                bl2 = rD.dmg().dcQ();
                                if (!bl3) break block6;
                                if (bl2) break block7;
                            }
                            catch (MatchException matchException) {
                                throw cc.PA(matchException);
                            }
                            bl2 = rD.dlmvG.currentScreen instanceof ChatScreen;
                            if (!bl3) break block6;
                        }
                        catch (MatchException matchException) {
                            throw cc.PA(matchException);
                        }
                        if (!bl2) break block8;
                    }
                    catch (MatchException matchException) {
                        throw cc.PA(matchException);
                    }
                }
                bl2 = true;
                break block6;
            }
            bl2 = false;
        }
        return bl2;
    }

    @Override
    public boolean onMouseClicked(double d2, double d3, mA mA2) {
        boolean bl2;
        block23: {
            block24: {
                long l2 = axaUP ^ 0x901A8DE13BL;
                qO qO2 = rD.dmg();
                boolean bl3 = ca.OY();
                IMediaSession iMediaSession = qO2.dcS();
                if (iMediaSession != null) {
                    block21: {
                        lc lc2;
                        block22: {
                            block19: {
                                lc lc3;
                                block20: {
                                    block17: {
                                        lc lc4;
                                        block18: {
                                            float f2 = this.toIeR + this.jTsqG / 2.0f;
                                            float f3 = this.QWaAn + 50.0f;
                                            lc lc5 = new lc(f2 - 40.0f, f3, 16.0f, 16.0f);
                                            lc4 = new lc(f2 - 8.0f, f3, 16.0f, 16.0f);
                                            lc3 = new lc(f2 + 24.0f, f3, 16.0f, 16.0f);
                                            lc2 = new lc(this.toIeR + this.jTsqG - 24.0f, f3 + 4.0f, 8.0f, 8.0f);
                                            try {
                                                try {
                                                    bl2 = lc5.bXD(d2, d3);
                                                    if (!bl3) break block17;
                                                    if (!bl2) break block18;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cc.PA(matchException);
                                                }
                                                iMediaSession.previous();
                                                return true;
                                            }
                                            catch (MatchException matchException) {
                                                throw cc.PA(matchException);
                                            }
                                        }
                                        bl2 = lc4.bXD(d2, d3);
                                    }
                                    try {
                                        try {
                                            if (!bl3) break block19;
                                            if (!bl2) break block20;
                                        }
                                        catch (MatchException matchException) {
                                            throw cc.PA(matchException);
                                        }
                                        iMediaSession.playPause();
                                        return true;
                                    }
                                    catch (MatchException matchException) {
                                        throw cc.PA(matchException);
                                    }
                                }
                                bl2 = lc3.bXD(d2, d3);
                            }
                            try {
                                try {
                                    if (!bl3) break block21;
                                    if (!bl2) break block22;
                                }
                                catch (MatchException matchException) {
                                    throw cc.PA(matchException);
                                }
                                iMediaSession.next();
                                return true;
                            }
                            catch (MatchException matchException) {
                                throw cc.PA(matchException);
                            }
                        }
                        bl2 = lc2.bXD(d2, d3);
                    }
                    try {
                        try {
                            if (!bl3) break block23;
                            if (!bl2) break block24;
                        }
                        catch (MatchException matchException) {
                            throw cc.PA(matchException);
                        }
                        iMediaSession.swapCycle();
                        WindowsMediaSession.setCycle((int)iMediaSession.getCycleType());
                        return true;
                    }
                    catch (MatchException matchException) {
                        throw cc.PA(matchException);
                    }
                }
            }
            bl2 = super.onMouseClicked(d2, d3, mA2);
        }
        return bl2;
    }

    private static MatchException PA(MatchException matchException) {
        return matchException;
    }

    private void Pw(lC lC2, mG mG2, MediaInfo mediaInfo) {
        lq lq2 = lE.SVnNc.bYM(6.0f);
        String string = jf.bAN(mediaInfo.position());
        long l2 = Math.max(0L, mediaInfo.duration() - mediaInfo.position());
        String string2 = jf.bAN(l2);
        float f2 = 110.0f;
        float f3 = 3.0f;
        float f4 = this.toIeR + this.jTsqG / 2.0f - f2 / 2.0f;
        float f5 = this.QWaAn + 40.0f;
        lC2.cdg(f4, f5, f2, f3, ld.all(0.5f), mG2.coa(63.75f));
        this.zzuzN.dhd(Math.min(1.0f, (float)mediaInfo.position() / (float)mediaInfo.duration()));
        float f6 = f2 * this.zzuzN.dhj();
        lC2.cdg(f4, f5, f6, f3, ld.all(0.5f), mG2.coa(150.0f));
        lC2.cez(lq2, string, f4 - lq2.cao(string) - 3.0f, f5 - 0.75f, mG2.cob(0.5f));
        lC2.cez(lq2, string2, f4 + f2 + 3.0f, f5 - 0.75f, mG2.cob(0.5f));
    }

    private static CallSite PE(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cc" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void Py(boolean n2) {
        int n3;
        boolean bl2;
        block9: {
            int n4;
            block10: {
                block7: {
                    block8: {
                        long l2 = axaUP ^ 0x5E5C282A2EB4L;
                        bl2 = ca.OX();
                        try {
                            try {
                                n4 = n2;
                                if (bl2) break block7;
                                if (n4 != 0) break block8;
                            }
                            catch (MatchException matchException) {
                                throw cc.PA(matchException);
                            }
                            Arrays.fill(this.ywaEw, 0.35f);
                            return;
                        }
                        catch (MatchException matchException) {
                            throw cc.PA(matchException);
                        }
                    }
                    n4 = this.Uslxa.cpE(QlUSv) ? 1 : 0;
                }
                try {
                    if (bl2) break block9;
                    if (n4 != 0) break block10;
                }
                catch (MatchException matchException) {
                    throw cc.PA(matchException);
                }
                return;
            }
            n4 = n3 = 0;
        }
        while (n3 < this.ywaEw.length) {
            this.ywaEw[n3] = MathHelper.lerp((float)((float)Math.random()), (float)0.35f, (float)1.0f);
            ++n3;
            if (!bl2) continue;
        }
    }

    private static String PC(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5927;
        if (vRGNc[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])nvHhc.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    nvHhc.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cc", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = wtTpp[n3].getBytes("ISO-8859-1");
            cc.vRGNc[n3] = cc.PB(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return vRGNc[n3];
    }

    private static String PB(byte[] byArray) {
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

    /*
     * Exception decompiling
     */
    private void Pz(lC var1_1, mG var2_2, IMediaSession var3_3) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 4[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private static int PF(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x67E9;
        if (NQYLH[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = dunGn[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])rhxtg.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    rhxtg.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cc", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cc.NQYLH[n3] = n4;
        }
        return NQYLH[n3];
    }

    private void Px(lC lC2, mG mG2, mG mG3, MediaInfo mediaInfo) {
        mG mG4;
        long l2 = axaUP ^ 0x4B00523EA6BFL;
        boolean bl2 = ca.OX();
        this.Py(mediaInfo.playing());
        boolean bl3 = bl2;
        try {
            mG4 = this.cdPcl.SZ() ? mG2.coc(mG.hoGuU, 0.2f) : mG3;
        }
        catch (MatchException matchException) {
            throw cc.PA(matchException);
        }
        mG mG5 = mG4;
        mG mG6 = this.tYJbR.dfT(mG5.cob(this.ormBS.dhj()));
        kW kW2 = new kW(mG6.cof(), mG6);
        float f2 = 1.2f;
        float f3 = 7.0f;
        float f4 = 1.0f;
        int n2 = this.nKTkB.length;
        float f5 = f2 * (float)n2 + (float)(n2 - 1) * f4;
        float f6 = this.toIeR + this.jTsqG - 7.0f - f5 * this.ormBS.dhj();
        float f7 = this.QWaAn + 10.0f + 3.5f;
        for (int i2 = 0; i2 < n2; ++i2) {
            this.nKTkB[i2].dhq((int)cc.PH("l", (int)23819, (long)(0x449ADB3925C02682L ^ l2)));
            float f8 = this.nKTkB[i2].dhd(this.ywaEw[i2]);
            float f9 = f3 * f8;
            float f10 = f6 + (float)i2 * (f2 + f4);
            float f11 = f7 - f9 / 2.0f;
            lC2.cdP(f10, f11, f2, f9, ld.all(0.5f), kW2, 0.5f);
            if (!bl3) continue;
        }
    }

    private static int PG(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cc.PF(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite PH(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cc" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cc.class, "PD", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(cc.class, "PG", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

