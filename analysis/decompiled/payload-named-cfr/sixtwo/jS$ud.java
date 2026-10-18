/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.textures.GpuTextureView
 *  net.minecraft.client.gl.GpuSampler
 *  net.minecraft.client.texture.AbstractTexture
 *  org.joml.Matrix3x2fStack
 */
package sixtwo;

import com.mojang.blaze3d.textures.GpuTextureView;
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
import net.minecraft.client.gl.GpuSampler;
import net.minecraft.client.texture.AbstractTexture;
import org.joml.Matrix3x2fStack;
import sixtwo.gb;
import sixtwo.jO;
import sixtwo.jS;
import sixtwo.la;
import sixtwo.mG;

public class jS$ud {
    private Matrix3x2fStack KGEiK;
    private float MHPhb;
    private float YsqLC;
    private float xbPqZ;
    private float NsNNW;
    private float vNJrU;
    private float tfwoa;
    private float Wdqlk;
    private float SoHbR;
    private la wSvyy;
    private AbstractTexture ZxOWE;
    private GpuTextureView Jebuc;
    private GpuSampler kVzNI;
    private boolean RaaGc;
    private mG KQCbq;
    private boolean zpzvY;
    private float XLXVL;
    private boolean ejGJN;
    private boolean UYULD;
    private boolean pYZxw;
    private boolean lyHrl;
    private boolean rvTlZ;
    private float Hkwko;
    private boolean NEKxo;
    private float Ctdmb;
    private boolean iPtob;
    private float wnZQe;
    private boolean YTTyt;
    private float FnXWE;
    private boolean LZhUC;
    private float Wuwvs;
    private boolean cKYFq;
    private float AgmNw;
    private static final long hwJvP;
    private static final String[] SsEUB;
    private static final String[] WRlpT;
    private static final Map AIBpJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static Object dss(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = jS$ud.dsr(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    jS$ud() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jS$ud.hwJvP = gb.aYR(-8015772933691496123L, -5383940048960802246L, MethodHandles.lookup().lookupClass()).a(173280452988450L);
                jS$ud.AIBpJ = new HashMap<K, V>(13);
                var0 = jS$ud.hwJvP ^ 85558208837219L;
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
                var6_5 = "Y\u00b0^\u00cf\u001f\u00c8\u0014\u00c0h\u00da\t*.\u008bm\u00ff\u00b9\u0010\u0092Hy\u00cc\u00c0-}\u00fd[\u00ac\u00de\u00e2W\u00c1\u0018H\u00f7<\u0096\u00cc\u00e0x\u00f5\u00ed/E\u000eE\u00e2a\u00be\u0081p@v.\u0099az(.\u00ed=2&wV\u00a5\u00e6\u009e\u009b\u00c2\u00aea\u00a0\u00c8b\u00c6\u00d95\u00a1}\u007f9G\u0089$\u00a3w0T\u001e\r\u00e6e\u009e\u009bL%S \u00dd3\u00b4\u0095SIPx1\u0085\u00fc\u0099d\u00c9\u00feU\u00a7Gm\u00a9\u00eer!\u00d4\u0013\u00cb\u00dd\u00c7qo\u00d6% \u0001\u009bG\u00a5)d\u00ef\u00ed\u008c\u0016\u0001\u00f2\u00f1\u00c5\u00e43\u00ff/\u00e7~\u007f$\u00c9z\u009d\u00e2P\u001cKEM\u00ba\u0010\u000f\u00873\u001e\u00d3B\u00fbW\u009fJ/d\u0016p\u00f4\u008ah]q\u009a_b\u0093\u00a7^)\u00cbi\u00f5@\u000b\u00f2\u00bf)3\u0013v\u00a3P\u00b0X\u00f5\u00c2a\u00cf-\u00b9q\u00e17\u0005\u0007\u008b_\u009aX\u0081\u00f96n#\u008d\u000b\u008c\u00b4\u001c\u00cctX\u000b\u00d3D\u00c3f5\u00e0\u00ba\u0004\u00843Ti<XC\u0090\u000e~\u00fa\u001b[\u0086\u00f6\u00c6(>|Y\u00acv\u00fdJ\u00af\u00a5\u009d!7\u00871r\u00df\u00aa\t*\u001f\u00108\u00b48\u0096u(\u00ee\u008ek\u00e1;\u00a9\u009f2\u00c6\u0011h\u009bd\t\u0094\u00afj\u0005\u00c1\u00da\u0007mp\u00b8g\u009f\u00f1N\u00b4\u00eb4\u00ada`\u00f3\u00b6(\u00ba\u0080\u00ef(N@\u00e8\u000e\f\u00c9\u00a2\u00fd\u0087)=\u00be\u0094\u00e1\u0012D\u009f\u00a5\u00fd\u0084t\u00a3\u00ce\u0089\u00e8jo\u000f<N\u00a0\u00d8\u00a9E+\u00ad\u0082\u00c2\u00b1\u00dd(\u0004\u00d4\u001cb\u007f\u00af\u0089\u00ab\u009d|\u0096i\u00c8\u0082\u009e\u00f2'\u0003\u001c\u00e8A\u00bac~q\u001a\u00ed\u0001\u00dd@\u00c9\u0003q\"\u001d7\u00ce\u0001\u00cdS \u00c4\u0081\u00a7\u0093[\u00c63\na\u00a8\"\u00f1G\u00f8\u0093\u00ca\u0099\u000e\u00d2nM\u000b\u00bf\u000b`\u00f3\u009d\u00e8H\u007f\u00d7k(\u00a9% #(#o\u009ex\u0000G\u0013\u0092\u0002H\u001f\u00ba\u00ac\\\u00b5\u00ac\u0012\u0004\u00e6P\t\u00b5Q3\u00de\u00db\u00ec0\u007f22\u00866d\u001c \u00c6z\u00fcUu\u00cb\u00a5Jw\u00c2\u00d0\u00eaz\u00de\u00fe[g\u00f6\u00fa\u00ec\u00ce\u00fa\u00e8M\u001d]q\u00fa\u0012\u0093\u00a5\u00f2 \u00ee\u00a4\u00b0]\u0093yd\u00d4B6A8\u00f9(6\r\u0093C\u00b9\u0094=\u00b2y\u00d0 {Zy\u00a5\u00de\u00bf\u00a3 \u00fa\u00b7\u00ff\u0080\u00a46\u0080\r\u00e7\u0095+\u00ac\u0018\u00a8\u00d8n@\u0019\u001c\u00c3\u0000\u0000\u00cf\u00f9%\u00e3\u00e7^\u000f\u0010\ng mn\u00b2=B'\u0089\u00eb\u00d6\u00df\u00e5\u00bcv\u00c4(\u00edN\u00d1\u001e\u00e8\u00aa\u0086\u0081\u00e7\u00aff\u00ff\u0014\u00cb\u00eb\u00a9o\u0018\u00b8E*\u00b3\u001c\u001d\b\u0005\u000e\u00b9\u0084\u0093\u00d1\u0014\u00ebP~\u00e3\u0017\u00a9\u009c\u009aj\u00b9 \u00d0\u00861Pu\u00cfY\u00a5\u008d\u0005P\u00fcW\u0018-\u001c\u00a5'\u00aa\u00e7P\u0017\"R\u0091\u00fc\u00f6/q\u00e3\u0002\u00c5(!/\u0096\u0096\u00bf\u00ca1\u00a53C\u00e4\u0084\u0017\u00ec\u0089\u0085\u00d8\b\u0013\u00ebR\u0085e\u000f%5@\u00af\u00fd\u0004\u00b0\u00c0\u00a8\u00c7\u00e0\u00eb\u00f0\u008cU\u00f9 \u0018\u0017^\u00da\u00a1\u0014M\u009eRI\u00a4\u0082\u00a3\u0013\u00fe\u00b38\u00f3\u00f5\u00acZ\u0094\u00c6`2\u000f\u0086J\u00d3\\\u0000\u00d2\u0018\u00d34\u0085\u00a2\b\u00c0F\u00f1B\u00fd\u000b,\u009f\u0083\u00f4/\u00f1\u0084\\\u00aa*m\u00d9\u000f";
                var8_6 = "Y\u00b0^\u00cf\u001f\u00c8\u0014\u00c0h\u00da\t*.\u008bm\u00ff\u00b9\u0010\u0092Hy\u00cc\u00c0-}\u00fd[\u00ac\u00de\u00e2W\u00c1\u0018H\u00f7<\u0096\u00cc\u00e0x\u00f5\u00ed/E\u000eE\u00e2a\u00be\u0081p@v.\u0099az(.\u00ed=2&wV\u00a5\u00e6\u009e\u009b\u00c2\u00aea\u00a0\u00c8b\u00c6\u00d95\u00a1}\u007f9G\u0089$\u00a3w0T\u001e\r\u00e6e\u009e\u009bL%S \u00dd3\u00b4\u0095SIPx1\u0085\u00fc\u0099d\u00c9\u00feU\u00a7Gm\u00a9\u00eer!\u00d4\u0013\u00cb\u00dd\u00c7qo\u00d6% \u0001\u009bG\u00a5)d\u00ef\u00ed\u008c\u0016\u0001\u00f2\u00f1\u00c5\u00e43\u00ff/\u00e7~\u007f$\u00c9z\u009d\u00e2P\u001cKEM\u00ba\u0010\u000f\u00873\u001e\u00d3B\u00fbW\u009fJ/d\u0016p\u00f4\u008ah]q\u009a_b\u0093\u00a7^)\u00cbi\u00f5@\u000b\u00f2\u00bf)3\u0013v\u00a3P\u00b0X\u00f5\u00c2a\u00cf-\u00b9q\u00e17\u0005\u0007\u008b_\u009aX\u0081\u00f96n#\u008d\u000b\u008c\u00b4\u001c\u00cctX\u000b\u00d3D\u00c3f5\u00e0\u00ba\u0004\u00843Ti<XC\u0090\u000e~\u00fa\u001b[\u0086\u00f6\u00c6(>|Y\u00acv\u00fdJ\u00af\u00a5\u009d!7\u00871r\u00df\u00aa\t*\u001f\u00108\u00b48\u0096u(\u00ee\u008ek\u00e1;\u00a9\u009f2\u00c6\u0011h\u009bd\t\u0094\u00afj\u0005\u00c1\u00da\u0007mp\u00b8g\u009f\u00f1N\u00b4\u00eb4\u00ada`\u00f3\u00b6(\u00ba\u0080\u00ef(N@\u00e8\u000e\f\u00c9\u00a2\u00fd\u0087)=\u00be\u0094\u00e1\u0012D\u009f\u00a5\u00fd\u0084t\u00a3\u00ce\u0089\u00e8jo\u000f<N\u00a0\u00d8\u00a9E+\u00ad\u0082\u00c2\u00b1\u00dd(\u0004\u00d4\u001cb\u007f\u00af\u0089\u00ab\u009d|\u0096i\u00c8\u0082\u009e\u00f2'\u0003\u001c\u00e8A\u00bac~q\u001a\u00ed\u0001\u00dd@\u00c9\u0003q\"\u001d7\u00ce\u0001\u00cdS \u00c4\u0081\u00a7\u0093[\u00c63\na\u00a8\"\u00f1G\u00f8\u0093\u00ca\u0099\u000e\u00d2nM\u000b\u00bf\u000b`\u00f3\u009d\u00e8H\u007f\u00d7k(\u00a9% #(#o\u009ex\u0000G\u0013\u0092\u0002H\u001f\u00ba\u00ac\\\u00b5\u00ac\u0012\u0004\u00e6P\t\u00b5Q3\u00de\u00db\u00ec0\u007f22\u00866d\u001c \u00c6z\u00fcUu\u00cb\u00a5Jw\u00c2\u00d0\u00eaz\u00de\u00fe[g\u00f6\u00fa\u00ec\u00ce\u00fa\u00e8M\u001d]q\u00fa\u0012\u0093\u00a5\u00f2 \u00ee\u00a4\u00b0]\u0093yd\u00d4B6A8\u00f9(6\r\u0093C\u00b9\u0094=\u00b2y\u00d0 {Zy\u00a5\u00de\u00bf\u00a3 \u00fa\u00b7\u00ff\u0080\u00a46\u0080\r\u00e7\u0095+\u00ac\u0018\u00a8\u00d8n@\u0019\u001c\u00c3\u0000\u0000\u00cf\u00f9%\u00e3\u00e7^\u000f\u0010\ng mn\u00b2=B'\u0089\u00eb\u00d6\u00df\u00e5\u00bcv\u00c4(\u00edN\u00d1\u001e\u00e8\u00aa\u0086\u0081\u00e7\u00aff\u00ff\u0014\u00cb\u00eb\u00a9o\u0018\u00b8E*\u00b3\u001c\u001d\b\u0005\u000e\u00b9\u0084\u0093\u00d1\u0014\u00ebP~\u00e3\u0017\u00a9\u009c\u009aj\u00b9 \u00d0\u00861Pu\u00cfY\u00a5\u008d\u0005P\u00fcW\u0018-\u001c\u00a5'\u00aa\u00e7P\u0017\"R\u0091\u00fc\u00f6/q\u00e3\u0002\u00c5(!/\u0096\u0096\u00bf\u00ca1\u00a53C\u00e4\u0084\u0017\u00ec\u0089\u0085\u00d8\b\u0013\u00ebR\u0085e\u000f%5@\u00af\u00fd\u0004\u00b0\u00c0\u00a8\u00c7\u00e0\u00eb\u00f0\u008cU\u00f9 \u0018\u0017^\u00da\u00a1\u0014M\u009eRI\u00a4\u0082\u00a3\u0013\u00fe\u00b38\u00f3\u00f5\u00acZ\u0094\u00c6`2\u000f\u0086J\u00d3\\\u0000\u00d2\u0018\u00d34\u0085\u00a2\b\u00c0F\u00f1B\u00fd\u000b,\u009f\u0083\u00f4/\u00f1\u0084\\\u00aa*m\u00d9\u000f".length();
                var5_7 = 32;
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
                    var9_3[var7_4++] = jS$ud.dsq(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00bf$\u009dV\u00ff\u0002X+U\u00e5\u00fb\u00cf\u001c(W\u00c8 \u00f5I\u00dc\u00ab2\u008a\u00ab?\u00eb-E0\u0013\u00e0\u009ch\u0000\u00ec\u00a2\u00a9e\u00cca\u00df\u00cd\u00f6#\u0083\u00f0\u00cb\u00d8\u00ca";
                    var8_6 = "\u00bf$\u009dV\u00ff\u0002X+U\u00e5\u00fb\u00cf\u001c(W\u00c8 \u00f5I\u00dc\u00ab2\u008a\u00ab?\u00eb-E0\u0013\u00e0\u009ch\u0000\u00ec\u00a2\u00a9e\u00cca\u00df\u00cd\u00f6#\u0083\u00f0\u00cb\u00d8\u00ca".length();
                    var5_7 = 16;
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
                    var9_3[var7_4++] = jS$ud.dsq(var10_9).intern();
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
        jS$ud.SsEUB = var9_3;
        jS$ud.WRlpT = new String[23];
    }

    public String toString() {
        long l2 = hwJvP ^ 0x2B6AAAFAFE26L;
        float f2 = this.AgmNw;
        float f3 = this.Wuwvs;
        float f4 = this.FnXWE;
        float f5 = this.wnZQe;
        float f6 = this.Ctdmb;
        float f7 = this.Hkwko;
        boolean bl2 = this.lyHrl;
        boolean bl3 = this.UYULD;
        float f8 = this.XLXVL;
        String string = String.valueOf(this.KQCbq);
        String string2 = String.valueOf(this.kVzNI);
        String string3 = String.valueOf(this.Jebuc);
        String string4 = String.valueOf(this.ZxOWE);
        String string5 = String.valueOf(this.wSvyy);
        float f9 = this.SoHbR;
        float f10 = this.Wdqlk;
        float f11 = this.tfwoa;
        float f12 = this.vNJrU;
        float f13 = this.NsNNW;
        float f14 = this.xbPqZ;
        float f15 = this.YsqLC;
        float f16 = this.MHPhb;
        String string6 = String.valueOf(this.KGEiK);
        return (String)((Object)jS$ud.dst("w", (int)32168, (long)(0x2D5D7AC279391A9L ^ l2))) + string6 + (String)((Object)jS$ud.dst("w", (int)21954, (long)(0xAE31532DD7539D0L ^ l2))) + f16 + (String)((Object)jS$ud.dst("w", (int)6850, (long)(0x3D53B81C80C676C0L ^ l2))) + f15 + (String)((Object)jS$ud.dst("w", (int)13935, (long)(0x13902A86D50D5A66L ^ l2))) + f14 + (String)((Object)jS$ud.dst("w", (int)24164, (long)(0x31AF2CFD2C733272L ^ l2))) + f13 + (String)((Object)jS$ud.dst("w", (int)23379, (long)(0x60696EF2800BB757L ^ l2))) + f12 + (String)((Object)jS$ud.dst("w", (int)3019, (long)(0x537483A872B2E7DAL ^ l2))) + f11 + (String)((Object)jS$ud.dst("w", (int)25926, (long)(0x69968F56213B894CL ^ l2))) + f10 + (String)((Object)jS$ud.dst("w", (int)6488, (long)(0x61D9FB735E45F54FL ^ l2))) + f9 + (String)((Object)jS$ud.dst("w", (int)24359, (long)(0x64385A4913B7B32FL ^ l2))) + string5 + (String)((Object)jS$ud.dst("w", (int)3198, (long)(0x3667677F94AAE079L ^ l2))) + string4 + (String)((Object)jS$ud.dst("w", (int)30223, (long)(0x5A2DCC59492B9A04L ^ l2))) + string3 + (String)((Object)jS$ud.dst("w", (int)25230, (long)(0xBC3A643EE1D8E81L ^ l2))) + string2 + (String)((Object)jS$ud.dst("w", (int)18972, (long)(0x41296137698A608L ^ l2))) + string + (String)((Object)jS$ud.dst("w", (int)20103, (long)(0x719559AFA61F2282L ^ l2))) + f8 + (String)((Object)jS$ud.dst("w", (int)28698, (long)(0x6FD10AE7A2B19C0FL ^ l2))) + bl3 + (String)((Object)jS$ud.dst("w", (int)575, (long)(0x2B60E3FD48D6E31L ^ l2))) + bl2 + (String)((Object)jS$ud.dst("w", (int)3912, (long)(0x4E2308E81FB76344L ^ l2))) + f7 + (String)((Object)jS$ud.dst("w", (int)20048, (long)(0x7C72079A98B9A250L ^ l2))) + f6 + (String)((Object)jS$ud.dst("w", (int)6394, (long)(0x70064DDCFF4AF4FCL ^ l2))) + f5 + (String)((Object)jS$ud.dst("w", (int)17403, (long)(0x7E27172FD6652FF6L ^ l2))) + f4 + (String)((Object)jS$ud.dst("w", (int)29072, (long)(0x8A01F77AC8C1D93L ^ l2))) + f3 + (String)((Object)jS$ud.dst("w", (int)24644, (long)(0x14BD8981729E8C57L ^ l2))) + f2 + ")";
    }

    private static CallSite dst(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jS$ud" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public jS$ud dsl(float f2) {
        this.FnXWE = f2;
        this.YTTyt = true;
        return this;
    }

    public jS$ud dse(mG mG2) {
        this.KQCbq = mG2;
        this.RaaGc = true;
        return this;
    }

    public jS$ud dsa(la la2) {
        this.wSvyy = la2;
        return this;
    }

    public jS$ud dsf(float f2) {
        this.XLXVL = f2;
        this.zpzvY = true;
        return this;
    }

    private static String dsq(byte[] byArray) {
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

    private static String dsr(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4470;
        if (WRlpT[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])AIBpJ.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    AIBpJ.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jS$ud", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = SsEUB[n3].getBytes("ISO-8859-1");
            jS$ud.WRlpT[n3] = jS$ud.dsq(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return WRlpT[n3];
    }

    public jS$ud drV(float f2) {
        this.NsNNW = f2;
        return this;
    }

    public jS$ud drS(float f2) {
        this.MHPhb = f2;
        return this;
    }

    public jS$ud drR(Matrix3x2fStack matrix3x2fStack) {
        this.KGEiK = matrix3x2fStack;
        return this;
    }

    public jS$ud drT(float f2) {
        this.YsqLC = f2;
        return this;
    }

    public jS$ud drU(float f2) {
        this.xbPqZ = f2;
        return this;
    }

    public jS$ud dsn(float f2) {
        this.AgmNw = f2;
        this.cKYFq = true;
        return this;
    }

    public jS$ud dsm(float f2) {
        this.Wuwvs = f2;
        this.LZhUC = true;
        return this;
    }

    public jS$ud dsk(float f2) {
        this.wnZQe = f2;
        this.iPtob = true;
        return this;
    }

    private static MatchException dsp(MatchException matchException) {
        return matchException;
    }

    public jS$ud dsc(GpuTextureView gpuTextureView) {
        this.Jebuc = gpuTextureView;
        return this;
    }

    public jS$ud dsj(float f2) {
        this.Ctdmb = f2;
        this.NEKxo = true;
        return this;
    }

    public jS$ud dsb(AbstractTexture abstractTexture) {
        this.ZxOWE = abstractTexture;
        return this;
    }

    public jS$ud drW(float f2) {
        this.vNJrU = f2;
        return this;
    }

    public jS$ud dsi(float f2) {
        this.Hkwko = f2;
        this.rvTlZ = true;
        return this;
    }

    public jS$ud dsh(boolean bl2) {
        this.lyHrl = bl2;
        this.pYZxw = true;
        return this;
    }

    public jS$ud dsg(boolean bl2) {
        this.UYULD = bl2;
        this.ejGJN = true;
        return this;
    }

    public jS$ud drX(float f2) {
        this.tfwoa = f2;
        return this;
    }

    public jS$ud drZ(float f2) {
        this.SoHbR = f2;
        return this;
    }

    public jS$ud dsd(GpuSampler gpuSampler) {
        this.kVzNI = gpuSampler;
        return this;
    }

    public jS$ud drY(float f2) {
        this.Wdqlk = f2;
        return this;
    }

    public jS dso() {
        jS$ud jS$ud;
        float f2;
        float f3;
        float f4;
        float f5;
        float f6;
        boolean bl2;
        boolean bl3;
        float f7;
        mG mG2;
        block35: {
            block36: {
                jS$ud jS$ud2;
                String string;
                block33: {
                    block34: {
                        jS$ud jS$ud3;
                        block31: {
                            block32: {
                                jS$ud jS$ud4;
                                block29: {
                                    block30: {
                                        jS$ud jS$ud5;
                                        block27: {
                                            block28: {
                                                jS$ud jS$ud6;
                                                block25: {
                                                    block26: {
                                                        boolean bl4;
                                                        block23: {
                                                            block24: {
                                                                boolean bl5;
                                                                block21: {
                                                                    block22: {
                                                                        jS$ud jS$ud7;
                                                                        block19: {
                                                                            block20: {
                                                                                long l2 = hwJvP ^ 0x1DC95C1C11F5L;
                                                                                mG2 = this.KQCbq;
                                                                                string = jO.bKy();
                                                                                try {
                                                                                    jS$ud7 = this;
                                                                                    if (string == null) break block19;
                                                                                    if (jS$ud7.RaaGc) break block20;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw jS$ud.dsp(matchException);
                                                                                }
                                                                                mG2 = jS.bMd();
                                                                            }
                                                                            jS$ud7 = this;
                                                                        }
                                                                        f7 = jS$ud7.XLXVL;
                                                                        try {
                                                                            bl5 = this.zpzvY;
                                                                            if (string == null) break block21;
                                                                            if (bl5) break block22;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw jS$ud.dsp(matchException);
                                                                        }
                                                                        f7 = jS.bMe();
                                                                    }
                                                                    bl5 = this.UYULD;
                                                                }
                                                                bl3 = bl5;
                                                                try {
                                                                    bl4 = this.ejGJN;
                                                                    if (string == null) break block23;
                                                                    if (bl4) break block24;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw jS$ud.dsp(matchException);
                                                                }
                                                                bl3 = jS.bMf();
                                                            }
                                                            bl4 = this.lyHrl;
                                                        }
                                                        bl2 = bl4;
                                                        try {
                                                            jS$ud6 = this;
                                                            if (string == null) break block25;
                                                            if (jS$ud6.pYZxw) break block26;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jS$ud.dsp(matchException);
                                                        }
                                                        bl2 = jS.bMg();
                                                    }
                                                    jS$ud6 = this;
                                                }
                                                f6 = jS$ud6.Hkwko;
                                                try {
                                                    jS$ud5 = this;
                                                    if (string == null) break block27;
                                                    if (jS$ud5.rvTlZ) break block28;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jS$ud.dsp(matchException);
                                                }
                                                f6 = jS.bMh();
                                            }
                                            jS$ud5 = this;
                                        }
                                        f5 = jS$ud5.Ctdmb;
                                        try {
                                            jS$ud4 = this;
                                            if (string == null) break block29;
                                            if (jS$ud4.NEKxo) break block30;
                                        }
                                        catch (MatchException matchException) {
                                            throw jS$ud.dsp(matchException);
                                        }
                                        f5 = jS.bMi();
                                    }
                                    jS$ud4 = this;
                                }
                                f4 = jS$ud4.wnZQe;
                                try {
                                    jS$ud3 = this;
                                    if (string == null) break block31;
                                    if (jS$ud3.iPtob) break block32;
                                }
                                catch (MatchException matchException) {
                                    throw jS$ud.dsp(matchException);
                                }
                                f4 = jS.bMj();
                            }
                            jS$ud3 = this;
                        }
                        f3 = jS$ud3.FnXWE;
                        try {
                            jS$ud2 = this;
                            if (string == null) break block33;
                            if (jS$ud2.YTTyt) break block34;
                        }
                        catch (MatchException matchException) {
                            throw jS$ud.dsp(matchException);
                        }
                        f3 = jS.bMk();
                    }
                    jS$ud2 = this;
                }
                f2 = jS$ud2.Wuwvs;
                try {
                    jS$ud = this;
                    if (string == null) break block35;
                    if (jS$ud.LZhUC) break block36;
                }
                catch (MatchException matchException) {
                    throw jS$ud.dsp(matchException);
                }
                f2 = jS.bMl();
            }
            jS$ud = this;
        }
        float f8 = jS$ud.AgmNw;
        if (!this.cKYFq) {
            f8 = jS.bMm();
        }
        return new jS(this.KGEiK, this.MHPhb, this.YsqLC, this.xbPqZ, this.NsNNW, this.vNJrU, this.tfwoa, this.Wdqlk, this.SoHbR, this.wSvyy, this.ZxOWE, this.Jebuc, this.kVzNI, mG2, f7, bl3, bl2, f6, f5, f4, f3, f2, f8);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jS$ud.class, "dss", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

