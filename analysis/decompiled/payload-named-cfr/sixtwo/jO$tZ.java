/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.texture.AbstractTexture
 *  org.joml.Matrix3x2fStack
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
import net.minecraft.client.texture.AbstractTexture;
import org.joml.Matrix3x2fStack;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jO;
import sixtwo.kd;
import sixtwo.kf;
import sixtwo.la;
import sixtwo.ld;
import sixtwo.mG;

public class jO$tZ {
    private Matrix3x2fStack zqyMa;
    private float ViidM;
    private float QEyRn;
    private float GfHAw;
    private float UHtFB;
    private boolean avkzP;
    private kd QvCTr;
    private boolean YAJPy;
    private kf ScNJe;
    private boolean vPiDj;
    private ld UaHoW;
    private boolean NqnQn;
    private mG wLguT;
    private la fcOAu;
    private AbstractTexture mMDiK;
    private boolean KOTFK;
    private boolean HXHff;
    private boolean WnNZm;
    private float UwXpQ;
    private boolean gTFVI;
    private float rNfXw;
    private boolean gBPCX;
    private float vwICI;
    private boolean aBbKD;
    private float lmpfr;
    private boolean hzTrm;
    private float UpAGt;
    private boolean IkXsY;
    private float BNfdr;
    private boolean nCioZ;
    private float XmitP;
    private boolean XTvuT;
    private float RcElA;
    private boolean bYgMB;
    private float UxNBE;
    private boolean KZbcI;
    private float oFQqY;
    private boolean bqdjk;
    private float RkjyL;
    private static final long BfVpk;
    private static final String[] Kxqtf;
    private static final String[] YClXp;
    private static final Map cYqfd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    jO$tZ() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jO$tZ.BfVpk = gb.aYR(432562138399754221L, 2540498334252928184L, MethodHandles.lookup().lookupClass()).a(58561791290852L);
                jO$tZ.cYqfd = new HashMap<K, V>(13);
                var0 = jO$tZ.BfVpk ^ 78323890482015L;
                var2_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var9_3 = new String[23];
                var7_4 = 0;
                var6_5 = "F\u00fc\u0098\u00fbU\u0017\b\u007f-\u00cc\u00e9\u00a9\u0094\u00d4>\u0007 1\u00bd\u001d|\u009a\u00ad\u00d8\u00a4l\u001cH\u00c2x\u0005\u00d3\n\u00af\u009d\u00fc\u000f\u00d5x\u00a4\u0095\u001cg\u00bf\u0001(\u00bd\u00a6\u00ed ZA+\u00e0p\u00a3P\u00f6x'\u00b1\u00d1\u0085\u0094t)\u0018!B\u00d9\u0013\u00e1m\u00b3\u0099\u008eT\u00cb\u009f:t\u00e38\u00d5\fH\u00c3\u0013\u009a\u00d9\u00d3\u00dd\u0015\u00eb\u00fd\u00b4e\u00c9j\u000b?\u00a9\u00f3/\n\u00a1\u00d0j\u00c3Y\u009e#\u00d0JS\u00a1\u00b4W\u00c0\u00c9{\u00beR\u0018\u000fq9;\u00a4\u009c\u0006\u0000\u00ce\u00a7\u001b\u0010\b(\u00e5(\u00c9\u0088\u0004\u000f)V\u00a5w\u00b9\u009a\u0005k\u0095Z6\u00bc\u00dcd\u009cs\u000bj\u001a\u00f1\u00d0\u00a7\u0011f\u00fd\u00dc\u00a9\u001e\u0015m\u00c3\u00f0[\u00c04\u00d2\u0010G~\u00f1\u00ef\u0003\u00be\u0018\u00f9z\u0093\u0001 \u0000\u0010\u00a7\u00ee\u0018=y\u0016&\u00f4&2{\u00ac)UA\u00e4\u0083$O]\u00924\"\u00ac\u00e1\u00f3<(\u00f2w%4\u009d\u00bb\u0000Q\u00a8\u00dd\u00ee M\u00a7\u001f\u00de\u0019\u00b2\u00ba '\u00bd\"\u0092\u00f4h\u001fI\u00ab\u0092\u00ad\u0086\u00f4G?\u0088\u008d@}\u00dc \u009dNt\u00f9\u00fa\u00d0{\u00be7+\u00e1>K\u00c9v^k\u00d5\u00b3\u0093\u008f`\u000e\u00ab\u0094\u0094L\u00dcSkE\u0086\u0018Vz\u00c3\u0096FC\u008c\u00bf\u0001\u00a9\u00d1\u00e4O\u0089\u00e0\r\u00ef\u00a1\u001eH\u008aTL\u0087(0\u009a\u00b4*\u00ea\u00c4\u00fe_=\u00e2\u00f1[`\u00e2\u009a\u0013\u00b2\u00c4.\u0089\u00e4j\u00bd.\u00a8\u0098\u00b0\u00f0\u00db-\u00b3\u00b1\u0087v6\u00dc(\f\u00e2\u00920\u00b8]h\u0017~[\u001d\u0085\u00d0?8\u00f4G\u00de\u008f\u00df\u0017\u0080]\u0000\u009e\u00bd\u001f\u00cfV!\u0083\u0010 )u\u00f4\u00b7\u00a3%6\u0092\u00ee\u00a3\u00ee>/g\u00a4c\t\u009f\u00a0 `\u00f8\u00a6\u00df\u00c8\u00ac\u0095yo\u00f6\u00f19\u00d8&`\u00d0\u0011F\u00f7\u0096\u00f8h\u0088zZ\u0090{#\u00e2\u0000\u00c0\u0085H\u00815\u00a5\u0018v\u00ca\u00f7\u00dd\u00a9\u008f\u0087\u00ba\u00be\u00af\u00a2Xn)\u00c4\u0014\n\u00c8\u00d6\u008a\u00c6\u00fci\u00a4<\u00fe\u00198\u00d4\u0085\u00be\u00d1\u008a\u0083\u0017l\u00a7\u00e0o\u0002/4\u009a}d\u00e2\u00fc7N\u00bd=\u00bf\u00a1t\u0011;\u00ad\u0099\u0082B\u00d1q\u00afu\u0092?\u00f6\u00b3(\u00ab_\u00b5xU\u00ff:|\u00ef'\u00d1?M\u00a9\u00ff\u00d2=[I\u0098\u00a8\u00a19Z\u00d9\u0096\u00da\u00c6\u00f1\u00cf\u00ad\u00a1sE\u009ed\u00ae\u00eb\u0098\u00e6 \u0087\u00c4\u00c8\u00ee<\u00b8\u00b9^X\u00b0n\u009a\u00a5\u0096\u00c5\u00d0\u00d8\u00b5\u0015\u000b\u00c2\u00c5\u00c9\u0092\r\u0017\u008b>\u00fc\u00af\u00cd\u00f5(\u0010\u00a8\u00b2\u0007\u00ae\u00f4\u0015\u00ba#R\u0003\u00eb\u0016=5B#\u00ab'0\u0019\u00b4\u008b<\u00ae\u00f0\u00f5\u0006\"0\u0006\u00e2\u001a\u00fe[_\u00ed\u00b8\n\u001e8\u000f\u00d9gxQ\u00b2\u0097\u00ce\u00a8\u00c2pF\u00d1\u00e7\nL2\u0080\u0091\u0082/\u00c3\u00a8VA\u001a/\u0092\u00c4(\u0085\u00f39\u0092ObJ\u00d8\u00cdI\u0006@\u00bf\r0$\\\u00d2i\u001d\u00d6H\u00921\u009c\u00b4\u0018&\u0096\u00bb\u00d3\u000eE@,\u009bQ\u00f1\u009f?\u00a3\u00a3A~\u00bf \u00f3e\u00e1/\u00e5\u00188\u0003\u0092\u00c2\u00c3\u0003\u0095\u001a\u0017\u0080\u0092J\u00df\u0016\u00e2\u00f1\u008e\u00bc\u00bd\u00c8\t\u00afO\u007f !\t,\f\u0081F\u00b2-\u0001\u009dx\u00ea\u00c2\u00e8\u00df\u0011\u001f\t-\u00ef\u00ec\u00b1\u00c6q\t\u0007X\u00cc\u00a2\u00e4\t\u0090";
                var8_6 = "F\u00fc\u0098\u00fbU\u0017\b\u007f-\u00cc\u00e9\u00a9\u0094\u00d4>\u0007 1\u00bd\u001d|\u009a\u00ad\u00d8\u00a4l\u001cH\u00c2x\u0005\u00d3\n\u00af\u009d\u00fc\u000f\u00d5x\u00a4\u0095\u001cg\u00bf\u0001(\u00bd\u00a6\u00ed ZA+\u00e0p\u00a3P\u00f6x'\u00b1\u00d1\u0085\u0094t)\u0018!B\u00d9\u0013\u00e1m\u00b3\u0099\u008eT\u00cb\u009f:t\u00e38\u00d5\fH\u00c3\u0013\u009a\u00d9\u00d3\u00dd\u0015\u00eb\u00fd\u00b4e\u00c9j\u000b?\u00a9\u00f3/\n\u00a1\u00d0j\u00c3Y\u009e#\u00d0JS\u00a1\u00b4W\u00c0\u00c9{\u00beR\u0018\u000fq9;\u00a4\u009c\u0006\u0000\u00ce\u00a7\u001b\u0010\b(\u00e5(\u00c9\u0088\u0004\u000f)V\u00a5w\u00b9\u009a\u0005k\u0095Z6\u00bc\u00dcd\u009cs\u000bj\u001a\u00f1\u00d0\u00a7\u0011f\u00fd\u00dc\u00a9\u001e\u0015m\u00c3\u00f0[\u00c04\u00d2\u0010G~\u00f1\u00ef\u0003\u00be\u0018\u00f9z\u0093\u0001 \u0000\u0010\u00a7\u00ee\u0018=y\u0016&\u00f4&2{\u00ac)UA\u00e4\u0083$O]\u00924\"\u00ac\u00e1\u00f3<(\u00f2w%4\u009d\u00bb\u0000Q\u00a8\u00dd\u00ee M\u00a7\u001f\u00de\u0019\u00b2\u00ba '\u00bd\"\u0092\u00f4h\u001fI\u00ab\u0092\u00ad\u0086\u00f4G?\u0088\u008d@}\u00dc \u009dNt\u00f9\u00fa\u00d0{\u00be7+\u00e1>K\u00c9v^k\u00d5\u00b3\u0093\u008f`\u000e\u00ab\u0094\u0094L\u00dcSkE\u0086\u0018Vz\u00c3\u0096FC\u008c\u00bf\u0001\u00a9\u00d1\u00e4O\u0089\u00e0\r\u00ef\u00a1\u001eH\u008aTL\u0087(0\u009a\u00b4*\u00ea\u00c4\u00fe_=\u00e2\u00f1[`\u00e2\u009a\u0013\u00b2\u00c4.\u0089\u00e4j\u00bd.\u00a8\u0098\u00b0\u00f0\u00db-\u00b3\u00b1\u0087v6\u00dc(\f\u00e2\u00920\u00b8]h\u0017~[\u001d\u0085\u00d0?8\u00f4G\u00de\u008f\u00df\u0017\u0080]\u0000\u009e\u00bd\u001f\u00cfV!\u0083\u0010 )u\u00f4\u00b7\u00a3%6\u0092\u00ee\u00a3\u00ee>/g\u00a4c\t\u009f\u00a0 `\u00f8\u00a6\u00df\u00c8\u00ac\u0095yo\u00f6\u00f19\u00d8&`\u00d0\u0011F\u00f7\u0096\u00f8h\u0088zZ\u0090{#\u00e2\u0000\u00c0\u0085H\u00815\u00a5\u0018v\u00ca\u00f7\u00dd\u00a9\u008f\u0087\u00ba\u00be\u00af\u00a2Xn)\u00c4\u0014\n\u00c8\u00d6\u008a\u00c6\u00fci\u00a4<\u00fe\u00198\u00d4\u0085\u00be\u00d1\u008a\u0083\u0017l\u00a7\u00e0o\u0002/4\u009a}d\u00e2\u00fc7N\u00bd=\u00bf\u00a1t\u0011;\u00ad\u0099\u0082B\u00d1q\u00afu\u0092?\u00f6\u00b3(\u00ab_\u00b5xU\u00ff:|\u00ef'\u00d1?M\u00a9\u00ff\u00d2=[I\u0098\u00a8\u00a19Z\u00d9\u0096\u00da\u00c6\u00f1\u00cf\u00ad\u00a1sE\u009ed\u00ae\u00eb\u0098\u00e6 \u0087\u00c4\u00c8\u00ee<\u00b8\u00b9^X\u00b0n\u009a\u00a5\u0096\u00c5\u00d0\u00d8\u00b5\u0015\u000b\u00c2\u00c5\u00c9\u0092\r\u0017\u008b>\u00fc\u00af\u00cd\u00f5(\u0010\u00a8\u00b2\u0007\u00ae\u00f4\u0015\u00ba#R\u0003\u00eb\u0016=5B#\u00ab'0\u0019\u00b4\u008b<\u00ae\u00f0\u00f5\u0006\"0\u0006\u00e2\u001a\u00fe[_\u00ed\u00b8\n\u001e8\u000f\u00d9gxQ\u00b2\u0097\u00ce\u00a8\u00c2pF\u00d1\u00e7\nL2\u0080\u0091\u0082/\u00c3\u00a8VA\u001a/\u0092\u00c4(\u0085\u00f39\u0092ObJ\u00d8\u00cdI\u0006@\u00bf\r0$\\\u00d2i\u001d\u00d6H\u00921\u009c\u00b4\u0018&\u0096\u00bb\u00d3\u000eE@,\u009bQ\u00f1\u009f?\u00a3\u00a3A~\u00bf \u00f3e\u00e1/\u00e5\u00188\u0003\u0092\u00c2\u00c3\u0003\u0095\u001a\u0017\u0080\u0092J\u00df\u0016\u00e2\u00f1\u008e\u00bc\u00bd\u00c8\t\u00afO\u007f !\t,\f\u0081F\u00b2-\u0001\u009dx\u00ea\u00c2\u00e8\u00df\u0011\u001f\t-\u00ef\u00ec\u00b1\u00c6q\t\u0007X\u00cc\u00a2\u00e4\t\u0090".length();
                var5_7 = 16;
                var4_8 = -1;
lbl20:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = jO$tZ.dqB(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00cb\u00ee\u00b5k\u0000\u00f4\u00b1\u00adY\u00ac\u009c\u0091\u009f\u00e7=\u00ad\u001a\u00ac&?u'\u0089\u0010\u0018\u000b5!\u00d5\u00ed\u00ec\u00b48#\u00d8\u00c3\u0012\u008ap\u009dGfj\u000b\u00d8\fL2G";
                    var8_6 = "\u00cb\u00ee\u00b5k\u0000\u00f4\u00b1\u00adY\u00ac\u009c\u0091\u009f\u00e7=\u00ad\u001a\u00ac&?u'\u0089\u0010\u0018\u000b5!\u00d5\u00ed\u00ec\u00b48#\u00d8\u00c3\u0012\u008ap\u009dGfj\u000b\u00d8\fL2G".length();
                    var5_7 = 24;
                    var4_8 = -1;
lbl34:
                    // 2 sources

                    while (true) {
                        v6 = ++var4_8;
                        v4 = var6_5.substring(v6, v6 + var5_7);
                        v5 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = jO$tZ.dqB(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    break block11;
                    break;
                }
            }
            var10_9 = var2_1.doFinal(v4.getBytes("ISO-8859-1"));
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
        jO$tZ.Kxqtf = var9_3;
        jO$tZ.YClXp = new String[23];
    }

    public String toString() {
        long l2 = BfVpk ^ 0x67A90CEBB052L;
        float f2 = this.RkjyL;
        float f3 = this.oFQqY;
        float f4 = this.UxNBE;
        float f5 = this.RcElA;
        float f6 = this.XmitP;
        float f7 = this.BNfdr;
        float f8 = this.UpAGt;
        float f9 = this.lmpfr;
        float f10 = this.vwICI;
        float f11 = this.rNfXw;
        float f12 = this.UwXpQ;
        boolean bl2 = this.HXHff;
        String string = String.valueOf(this.mMDiK);
        String string2 = String.valueOf(this.fcOAu);
        String string3 = String.valueOf(this.wLguT);
        String string4 = String.valueOf(this.UaHoW);
        String string5 = String.valueOf((Object)this.ScNJe);
        String string6 = String.valueOf((Object)this.QvCTr);
        float f13 = this.UHtFB;
        float f14 = this.GfHAw;
        float f15 = this.QEyRn;
        float f16 = this.ViidM;
        String string7 = String.valueOf(this.zqyMa);
        return (String)((Object)jO$tZ.dqE("t", (int)6136, (long)(0x39EDA3941154F86EL ^ l2))) + string7 + (String)((Object)jO$tZ.dqE("t", (int)7819, (long)(0x3A5C192757CA7110L ^ l2))) + f16 + (String)((Object)jO$tZ.dqE("t", (int)32317, (long)(0x4138F10002C711A3L ^ l2))) + f15 + (String)((Object)jO$tZ.dqE("t", (int)2664, (long)(0x35459261A1C5E5FFL ^ l2))) + f14 + (String)((Object)jO$tZ.dqE("t", (int)1466, (long)(0x276A128FF2A5EA2EL ^ l2))) + f13 + (String)((Object)jO$tZ.dqE("t", (int)16232, (long)(0x42804B9E903AD0E3L ^ l2))) + string6 + (String)((Object)jO$tZ.dqE("t", (int)9610, (long)(0x47E5A5DC81B1CA13L ^ l2))) + string5 + (String)((Object)jO$tZ.dqE("t", (int)30430, (long)(0x37069F4DD915994CL ^ l2))) + string4 + (String)((Object)jO$tZ.dqE("t", (int)2160, (long)(0x453EB9952AC567F8L ^ l2))) + string3 + (String)((Object)jO$tZ.dqE("t", (int)9922, (long)(0x3CD86658E39A494DL ^ l2))) + string2 + (String)((Object)jO$tZ.dqE("t", (int)10728, (long)(0x113E4AA5C7BBC666L ^ l2))) + string + (String)((Object)jO$tZ.dqE("t", (int)14714, (long)(0x2AC3539DACB6D6EFL ^ l2))) + bl2 + (String)((Object)jO$tZ.dqE("t", (int)1351, (long)(0x4495C7BDF9026AD6L ^ l2))) + f12 + (String)((Object)jO$tZ.dqE("t", (int)8819, (long)(0x379C3FB1384BCDEBL ^ l2))) + f11 + (String)((Object)jO$tZ.dqE("t", (int)14748, (long)(0x4AA2C3629DD5D60CL ^ l2))) + f10 + (String)((Object)jO$tZ.dqE("t", (int)988, (long)(0x533A9D350EFC6C56L ^ l2))) + f9 + (String)((Object)jO$tZ.dqE("t", (int)4069, (long)(0x267E8591ECD76079L ^ l2))) + f8 + (String)((Object)jO$tZ.dqE("t", (int)31421, (long)(0x2628327E7F2F1522L ^ l2))) + f7 + (String)((Object)jO$tZ.dqE("t", (int)7847, (long)(0x14C55263168F713DL ^ l2))) + f6 + (String)((Object)jO$tZ.dqE("t", (int)3583, (long)(0x5927974986B7E276L ^ l2))) + f5 + (String)((Object)jO$tZ.dqE("t", (int)23545, (long)(0x74ECF5A2007A3474L ^ l2))) + f4 + (String)((Object)jO$tZ.dqE("t", (int)32575, (long)(0x43AAC7AF0E5190ACL ^ l2))) + f3 + (String)((Object)jO$tZ.dqE("t", (int)2465, (long)(0x1879D70877AB663CL ^ l2))) + f2 + ")";
    }

    public jO$tZ dqx(float f2) {
        this.oFQqY = f2;
        this.KZbcI = true;
        return this;
    }

    public jO dqz() {
        jO jO2;
        jO$tZ jO$tZ;
        float f2;
        float f3;
        float f4;
        float f5;
        float f6;
        float f7;
        float f8;
        float f9;
        float f10;
        float f11;
        boolean bl2;
        mG mG2;
        ld ld2;
        kf kf2;
        kd kd2;
        block62: {
            block63: {
                jO$tZ jO$tZ2;
                String string;
                block60: {
                    block61: {
                        jO$tZ jO$tZ3;
                        block58: {
                            block59: {
                                jO$tZ jO$tZ4;
                                block56: {
                                    block57: {
                                        jO$tZ jO$tZ5;
                                        block54: {
                                            block55: {
                                                jO$tZ jO$tZ6;
                                                block52: {
                                                    block53: {
                                                        jO$tZ jO$tZ7;
                                                        block50: {
                                                            block51: {
                                                                jO$tZ jO$tZ8;
                                                                block48: {
                                                                    block49: {
                                                                        jO$tZ jO$tZ9;
                                                                        block46: {
                                                                            block47: {
                                                                                jO$tZ jO$tZ10;
                                                                                block44: {
                                                                                    block45: {
                                                                                        jO$tZ jO$tZ11;
                                                                                        block42: {
                                                                                            block43: {
                                                                                                boolean bl3;
                                                                                                block40: {
                                                                                                    block41: {
                                                                                                        jO$tZ jO$tZ12;
                                                                                                        block38: {
                                                                                                            block39: {
                                                                                                                jO$tZ jO$tZ13;
                                                                                                                block36: {
                                                                                                                    block37: {
                                                                                                                        jO$tZ jO$tZ14;
                                                                                                                        block34: {
                                                                                                                            block35: {
                                                                                                                                long l2 = BfVpk ^ 0x7AC191F2348BL;
                                                                                                                                kd2 = this.QvCTr;
                                                                                                                                string = jO.bKy();
                                                                                                                                try {
                                                                                                                                    jO$tZ14 = this;
                                                                                                                                    if (string == null) break block34;
                                                                                                                                    if (jO$tZ14.avkzP) break block35;
                                                                                                                                }
                                                                                                                                catch (MatchException matchException) {
                                                                                                                                    throw jO$tZ.dqA(matchException);
                                                                                                                                }
                                                                                                                                kd2 = jO.bJJ();
                                                                                                                            }
                                                                                                                            jO$tZ14 = this;
                                                                                                                        }
                                                                                                                        kf2 = jO$tZ14.ScNJe;
                                                                                                                        try {
                                                                                                                            jO$tZ13 = this;
                                                                                                                            if (string == null) break block36;
                                                                                                                            if (jO$tZ13.YAJPy) break block37;
                                                                                                                        }
                                                                                                                        catch (MatchException matchException) {
                                                                                                                            throw jO$tZ.dqA(matchException);
                                                                                                                        }
                                                                                                                        kf2 = jO.bJK();
                                                                                                                    }
                                                                                                                    jO$tZ13 = this;
                                                                                                                }
                                                                                                                ld2 = jO$tZ13.UaHoW;
                                                                                                                try {
                                                                                                                    jO$tZ12 = this;
                                                                                                                    if (string == null) break block38;
                                                                                                                    if (jO$tZ12.vPiDj) break block39;
                                                                                                                }
                                                                                                                catch (MatchException matchException) {
                                                                                                                    throw jO$tZ.dqA(matchException);
                                                                                                                }
                                                                                                                ld2 = jO.bJL();
                                                                                                            }
                                                                                                            jO$tZ12 = this;
                                                                                                        }
                                                                                                        mG2 = jO$tZ12.wLguT;
                                                                                                        try {
                                                                                                            bl3 = this.NqnQn;
                                                                                                            if (string == null) break block40;
                                                                                                            if (bl3) break block41;
                                                                                                        }
                                                                                                        catch (MatchException matchException) {
                                                                                                            throw jO$tZ.dqA(matchException);
                                                                                                        }
                                                                                                        mG2 = jO.bJM();
                                                                                                    }
                                                                                                    bl3 = this.HXHff;
                                                                                                }
                                                                                                bl2 = bl3;
                                                                                                try {
                                                                                                    jO$tZ11 = this;
                                                                                                    if (string == null) break block42;
                                                                                                    if (jO$tZ11.KOTFK) break block43;
                                                                                                }
                                                                                                catch (MatchException matchException) {
                                                                                                    throw jO$tZ.dqA(matchException);
                                                                                                }
                                                                                                bl2 = jO.bJN();
                                                                                            }
                                                                                            jO$tZ11 = this;
                                                                                        }
                                                                                        f11 = jO$tZ11.UwXpQ;
                                                                                        try {
                                                                                            jO$tZ10 = this;
                                                                                            if (string == null) break block44;
                                                                                            if (jO$tZ10.WnNZm) break block45;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw jO$tZ.dqA(matchException);
                                                                                        }
                                                                                        f11 = jO.bJO();
                                                                                    }
                                                                                    jO$tZ10 = this;
                                                                                }
                                                                                f10 = jO$tZ10.rNfXw;
                                                                                try {
                                                                                    jO$tZ9 = this;
                                                                                    if (string == null) break block46;
                                                                                    if (jO$tZ9.gTFVI) break block47;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw jO$tZ.dqA(matchException);
                                                                                }
                                                                                f10 = jO.bJP();
                                                                            }
                                                                            jO$tZ9 = this;
                                                                        }
                                                                        f9 = jO$tZ9.vwICI;
                                                                        try {
                                                                            jO$tZ8 = this;
                                                                            if (string == null) break block48;
                                                                            if (jO$tZ8.gBPCX) break block49;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw jO$tZ.dqA(matchException);
                                                                        }
                                                                        f9 = jO.bJQ();
                                                                    }
                                                                    jO$tZ8 = this;
                                                                }
                                                                f8 = jO$tZ8.lmpfr;
                                                                try {
                                                                    jO$tZ7 = this;
                                                                    if (string == null) break block50;
                                                                    if (jO$tZ7.aBbKD) break block51;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw jO$tZ.dqA(matchException);
                                                                }
                                                                f8 = jO.bJR();
                                                            }
                                                            jO$tZ7 = this;
                                                        }
                                                        f7 = jO$tZ7.UpAGt;
                                                        try {
                                                            jO$tZ6 = this;
                                                            if (string == null) break block52;
                                                            if (jO$tZ6.hzTrm) break block53;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jO$tZ.dqA(matchException);
                                                        }
                                                        f7 = jO.bJS();
                                                    }
                                                    jO$tZ6 = this;
                                                }
                                                f6 = jO$tZ6.BNfdr;
                                                try {
                                                    jO$tZ5 = this;
                                                    if (string == null) break block54;
                                                    if (jO$tZ5.IkXsY) break block55;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jO$tZ.dqA(matchException);
                                                }
                                                f6 = jO.bJT();
                                            }
                                            jO$tZ5 = this;
                                        }
                                        f5 = jO$tZ5.XmitP;
                                        try {
                                            jO$tZ4 = this;
                                            if (string == null) break block56;
                                            if (jO$tZ4.nCioZ) break block57;
                                        }
                                        catch (MatchException matchException) {
                                            throw jO$tZ.dqA(matchException);
                                        }
                                        f5 = jO.bJU();
                                    }
                                    jO$tZ4 = this;
                                }
                                f4 = jO$tZ4.RcElA;
                                try {
                                    jO$tZ3 = this;
                                    if (string == null) break block58;
                                    if (jO$tZ3.XTvuT) break block59;
                                }
                                catch (MatchException matchException) {
                                    throw jO$tZ.dqA(matchException);
                                }
                                f4 = jO.bJV();
                            }
                            jO$tZ3 = this;
                        }
                        f3 = jO$tZ3.UxNBE;
                        try {
                            jO$tZ2 = this;
                            if (string == null) break block60;
                            if (jO$tZ2.bYgMB) break block61;
                        }
                        catch (MatchException matchException) {
                            throw jO$tZ.dqA(matchException);
                        }
                        f3 = jO.bJW();
                    }
                    jO$tZ2 = this;
                }
                f2 = jO$tZ2.oFQqY;
                try {
                    jO$tZ = this;
                    if (string == null) break block62;
                    if (jO$tZ.KZbcI) break block63;
                }
                catch (MatchException matchException) {
                    throw jO$tZ.dqA(matchException);
                }
                f2 = jO.bJX();
            }
            jO$tZ = this;
        }
        float f12 = jO$tZ.RkjyL;
        if (!this.bqdjk) {
            f12 = jO.bJY();
        }
        try {
            jO2 = new jO(this.zqyMa, this.ViidM, this.QEyRn, this.GfHAw, this.UHtFB, kd2, kf2, ld2, mG2, this.fcOAu, this.mMDiK, bl2, f11, f10, f9, f8, f7, f6, f5, f4, f3, f2, f12);
            if (iS.bwL() == null) {
                jO.bKx("Dlh2P");
            }
        }
        catch (MatchException matchException) {
            throw jO$tZ.dqA(matchException);
        }
        return jO2;
    }

    public jO$tZ dqy(float f2) {
        this.RkjyL = f2;
        this.bqdjk = true;
        return this;
    }

    public jO$tZ dqk(mG mG2) {
        this.wLguT = mG2;
        this.NqnQn = true;
        return this;
    }

    public jO$tZ dqv(float f2) {
        this.RcElA = f2;
        this.XTvuT = true;
        return this;
    }

    public jO$tZ dqm(AbstractTexture abstractTexture) {
        this.mMDiK = abstractTexture;
        return this;
    }

    public jO$tZ dqo(float f2) {
        this.UwXpQ = f2;
        this.WnNZm = true;
        return this;
    }

    public jO$tZ dqw(float f2) {
        this.UxNBE = f2;
        this.bYgMB = true;
        return this;
    }

    public jO$tZ dqh(kd kd2) {
        this.QvCTr = kd2;
        this.avkzP = true;
        return this;
    }

    public jO$tZ dqj(ld ld2) {
        this.UaHoW = ld2;
        this.vPiDj = true;
        return this;
    }

    public jO$tZ dql(la la2) {
        this.fcOAu = la2;
        return this;
    }

    public jO$tZ dqr(float f2) {
        this.lmpfr = f2;
        this.aBbKD = true;
        return this;
    }

    public jO$tZ dqu(float f2) {
        this.XmitP = f2;
        this.nCioZ = true;
        return this;
    }

    public jO$tZ dqt(float f2) {
        this.BNfdr = f2;
        this.IkXsY = true;
        return this;
    }

    public jO$tZ dqs(float f2) {
        this.UpAGt = f2;
        this.hzTrm = true;
        return this;
    }

    private static MatchException dqA(MatchException matchException) {
        return matchException;
    }

    public jO$tZ dqp(float f2) {
        this.rNfXw = f2;
        this.gTFVI = true;
        return this;
    }

    private static String dqB(byte[] byArray) {
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

    private static CallSite dqE(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jO$tZ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String dqC(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0xC3D;
        if (YClXp[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])cYqfd.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    cYqfd.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jO$tZ", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = Kxqtf[n3].getBytes("ISO-8859-1");
            jO$tZ.YClXp[n3] = jO$tZ.dqB(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return YClXp[n3];
    }

    private static Object dqD(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = jO$tZ.dqC(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public jO$tZ dqi(kf kf2) {
        this.ScNJe = kf2;
        this.YAJPy = true;
        return this;
    }

    public jO$tZ dqq(float f2) {
        this.vwICI = f2;
        this.gBPCX = true;
        return this;
    }

    public jO$tZ dqn(boolean bl2) {
        this.HXHff = bl2;
        this.KOTFK = true;
        return this;
    }

    public jO$tZ dqc(Matrix3x2fStack matrix3x2fStack) {
        this.zqyMa = matrix3x2fStack;
        return this;
    }

    public jO$tZ dqf(float f2) {
        this.GfHAw = f2;
        return this;
    }

    public jO$tZ dqd(float f2) {
        this.ViidM = f2;
        return this;
    }

    public jO$tZ dqe(float f2) {
        this.QEyRn = f2;
        return this;
    }

    public jO$tZ dqg(float f2) {
        this.UHtFB = f2;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jO$tZ.class, "dqD", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

