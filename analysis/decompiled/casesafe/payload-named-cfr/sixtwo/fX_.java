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
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.aZ;
import sixtwo.aw;
import sixtwo.bD;
import sixtwo.bl;
import sixtwo.cD;
import sixtwo.cI;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gA;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.lc;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rr;

public class fX
extends gg {
    private final cD jGdAR;
    private final ct nJAFn;
    private final cu hltCm;
    private final cu OzuKt;
    private final cu seKrG;
    private final cI HevkM;
    static fX JUwUO;
    private static int[] CgnEr;
    private static final long vDBBc;
    private static final long[] mKhNu;
    private static final Integer[] vnJEn;
    private static final Map yuueo;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fX() {
        long l2 = vDBBc ^ 0x649003D50005L;
        super(gf.aZL((int)fX.aYy("u", (int)25366, (long)(0x331E677103247FCEL ^ l2)), true, gh.KfAlY).aZQ((int)fX.aYy("u", (int)3054, (long)(0xBFC609C458F9715L ^ l2))).aZS(false).aZU(true).aZW(true));
        int[] nArray = new int[fX.aYy("u", (int)21604, (long)(0x2B4E5B5A640DC890L ^ l2))];
        nArray[0] = (int)fX.aYy("u", (int)30725, (long)(0x6BAF0E9B9ABD64DAL ^ l2));
        nArray[1] = (int)fX.aYy("u", (int)20973, (long)(0x55F460D4C4D10L ^ l2));
        nArray[2] = (int)fX.aYy("u", (int)12239, (long)(0x12A1E96363773331L ^ l2));
        nArray[3] = (int)fX.aYy("u", (int)28814, (long)(0x6939680CADFBEC64L ^ l2));
        nArray[4] = (int)fX.aYy("u", (int)27760, (long)(0x7E09979E7A7870A5L ^ l2));
        nArray[5] = (int)fX.aYy("u", (int)7654, (long)(0x71CF2AA5224C013AL ^ l2));
        nArray[fX.aYy("u", (int)28773, (long)(0x75D3C59A7FA66CB1L ^ l2))] = (int)fX.aYy("u", (int)22505, (long)(0x1516DF2A7A40CB05L ^ l2));
        nArray[fX.aYy("u", (int)17862, (long)(0x161BCD5A5D0BD91CL ^ l2))] = (int)fX.aYy("u", (int)13225, (long)(0x3427E3964B05AF48L ^ l2));
        nArray[fX.aYy("u", (int)25131, (long)(0x6F1F247D9DDF7EFDL ^ l2))] = (int)fX.aYy("u", (int)32427, (long)(0x9C4BB9FA4D1626CL ^ l2));
        this.jGdAR = new cD(this, mr.clS(nArray)).VO((int)fX.aYy("u", (int)26541, (long)(0x2350AAC2D448FB5DL ^ l2)));
        this.nJAFn = new ct(this, mr.clS(new int[]{(int)fX.aYy("u", (int)1900, (long)(0x29D571A3DC989BBDL ^ l2)), (int)fX.aYy("u", (int)20179, (long)(0x1B6D39AE28C45236L ^ l2)), (int)fX.aYy("u", (int)8087, (long)(0x39315FC767E88352L ^ l2)), (int)fX.aYy("u", (int)18753, (long)(0x1DAFC86D44E7D5BBL ^ l2)), (int)fX.aYy("u", (int)13225, (long)(0x3427E3964B05AF48L ^ l2))}));
        int[] nArray2 = new int[fX.aYy("u", (int)5707, (long)(0x34481ADD08480A95L ^ l2))];
        nArray2[0] = (int)fX.aYy("u", (int)8755, (long)(0x2CC94C41EDC6BED0L ^ l2));
        nArray2[1] = (int)fX.aYy("u", (int)1623, (long)(0x3E301974FAFD9AA2L ^ l2));
        nArray2[2] = (int)fX.aYy("u", (int)31943, (long)(0x7CB7CDD1261C6029L ^ l2));
        nArray2[3] = (int)fX.aYy("u", (int)29665, (long)(0x124600B101716F10L ^ l2));
        nArray2[4] = (int)fX.aYy("u", (int)30255, (long)(0x55C667AFEB5A6AD8L ^ l2));
        nArray2[5] = (int)fX.aYy("u", (int)30833, (long)(0x6C1F9FFEC108E496L ^ l2));
        nArray2[fX.aYy("u", (int)27254, (long)(0x68FA7BF15582F69DL ^ l2))] = (int)fX.aYy("u", (int)22387, (long)(0x3D6BF921F694BA4L ^ l2));
        nArray2[fX.aYy("u", (int)26611, (long)(0x675485BB641E7B0BL ^ l2))] = (int)fX.aYy("u", (int)5571, (long)(0x717F6578C3390921L ^ l2));
        nArray2[fX.aYy("u", (int)1027, (long)(0x273A46B843EB18FCL ^ l2))] = (int)fX.aYy("u", (int)28786, (long)(0x453EB0B3D62EEC84L ^ l2));
        nArray2[fX.aYy("u", (int)24731, (long)(0x7D09050722AA7C69L ^ l2))] = (int)fX.aYy("u", (int)28330, (long)(0xE4BFA991715726CL ^ l2));
        nArray2[fX.aYy("u", (int)9378, (long)(0x6BFB63628ABAB85EL ^ l2))] = (int)fX.aYy("u", (int)28510, (long)(0x1A920C790341F38DL ^ l2));
        nArray2[fX.aYy("u", (int)28035, (long)(0x4FA569D72DCBF15EL ^ l2))] = (int)fX.aYy("u", (int)20091, (long)(0xBAE72E7187BD294L ^ l2));
        this.hltCm = new cu(this.nJAFn, mr.clS(nArray2));
        this.OzuKt = new cu(this.nJAFn, mr.clS(new int[]{(int)fX.aYy("u", (int)32179, (long)(0x300B30F93B776153L ^ l2)), (int)fX.aYy("u", (int)28786, (long)(0x453EB0B3D62EEC84L ^ l2)), (int)fX.aYy("u", (int)29792, (long)(0x56F9C446FACE6886L ^ l2)), (int)fX.aYy("u", (int)6441, (long)(0x7618EDE60F785F2L ^ l2))})).SY();
        this.seKrG = new cu(this.nJAFn, mr.clS(new int[]{(int)fX.aYy("u", (int)7530, (long)(0x1F74AD6C88560183L ^ l2)), (int)fX.aYy("u", (int)10123, (long)(0x31EE329E00AE3B52L ^ l2)), (int)fX.aYy("u", (int)28786, (long)(0x453EB0B3D62EEC84L ^ l2)), (int)fX.aYy("u", (int)30255, (long)(0x55C667AFEB5A6AD8L ^ l2)), (int)fX.aYy("u", (int)30937, (long)(0x35925212AEA6E42AL ^ l2))}));
        int[] nArray3 = new int[fX.aYy("u", (int)11656, (long)(0x6C2B7B70A535315AL ^ l2))];
        nArray3[0] = (int)fX.aYy("u", (int)30215, (long)(0x55D5F09DDC286AFEL ^ l2));
        nArray3[1] = (int)fX.aYy("u", (int)30937, (long)(0x35925212AEA6E42AL ^ l2));
        nArray3[2] = (int)fX.aYy("u", (int)30255, (long)(0x55C667AFEB5A6AD8L ^ l2));
        nArray3[3] = (int)fX.aYy("u", (int)20179, (long)(0x1B6D39AE28C45236L ^ l2));
        nArray3[4] = (int)fX.aYy("u", (int)22387, (long)(0x3D6BF921F694BA4L ^ l2));
        nArray3[5] = (int)fX.aYy("u", (int)16651, (long)(0x43451D49724C5DDBL ^ l2));
        nArray3[fX.aYy("u", (int)27254, (long)(0x68FA7BF15582F69DL ^ l2))] = (int)fX.aYy("u", (int)6393, (long)(0x2035C4C72CDA0414L ^ l2));
        nArray3[fX.aYy("u", (int)26611, (long)(0x675485BB641E7B0BL ^ l2))] = (int)fX.aYy("u", (int)13225, (long)(0x3427E3964B05AF48L ^ l2));
        nArray3[fX.aYy("u", (int)1027, (long)(0x273A46B843EB18FCL ^ l2))] = (int)fX.aYy("u", (int)8100, (long)(0x54AD0DBE83358340L ^ l2));
        nArray3[fX.aYy("u", (int)24731, (long)(0x7D09050722AA7C69L ^ l2))] = (int)fX.aYy("u", (int)13225, (long)(0x3427E3964B05AF48L ^ l2));
        this.HevkM = new cI(this, mr.clS(nArray3)).Wx(() -> {
            aZ aZ2 = new aZ(2.0f);
            lc lc2 = bl.Ex().Ey();
            float f2 = lc2.bXF() - aZ2.kN() - 10.0f;
            float f3 = lc2.bXG();
            aZ2.sW(f2, f3);
            aw.route(aZ2);
        });
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                fX.vDBBc = gb.aYR(-4192842004149834572L, -234981683376439731L, MethodHandles.lookup().lookupClass()).a(28209348577956L);
                fX.yuueo = new HashMap<K, V>(13);
                fX.aYt(new int[2]);
                var0 = fX.vDBBc ^ 120548145183980L;
                var2_1 = Cipher.getInstance("DES/CBC/NoPadding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var8_3 = new long[51];
                var5_4 = 0;
                var6_5 = "\u00a0\u0013Q\u00ab\u0090M\u0099\u00bd`\u0085\u0019\u00c03\u009dt\u00c1\u001asNt\u00b2\u00f2\r~-9'mI\r9@\u00cb\u00c2\u00b7\u00adK!r\u007f\u00fb\u0098\u00bc9\u00fd\u00f0\u00dcJ\u00ba\u0095%2\u00bc\u000bA \u00c5\u00edt\u009d\u009ds~\u0094\u00b2O\u00b7\u0097\u00e6a\u0015/\u00f4\u0016/\u0087xX8\u00cf\u00e4g(\u0083\u001be\u0015\u00a1\u0097Y0\u00f7\u00ea;\u00d8\u00f5s\u00fdg\u0007\u0004\"~V\u008e\u0086|\u0085Q\u000ff\u00d7\u001b\"\u0019\u0003\u00ef\u0002cy$\"\u00faH\u0098up\t\u00fc \u00c06\u0094\u00e8\u00ee\u0013\u0084\u0081\u0006CK&\u00f4\u00fbs\u00a0\u00bd\u00e0v\u0090{a5~\u00c4\u00f9\u00d9\u00b5r\u00f4\u00e84os/\u001b,-'\u0003/OQ\u00e7\u00c9xD@\u00a3i\u00e22\u0098}N\u00d4B\u0019\u00f8R~d}_\u00de\u00a7\u00b0\u00bd\u0012kD\u00e3p\u0091\fTV\u00c7\u0012g\u00ef\u00e6\u00a2\u001c\u000e\u00cb \u00ef\u00fc\u0002\u000eE\u00f6p\u00aa\u009a \\\u00112\u00b5\u00fb6\u00c2y\u001e\u00bf\u00f5\u00af\u00b3\u00a8\u00c9\u0098\u00e7,\u00d9\u00ec}\u00b3\u0095\u00b2\u00e9\u00e3<\u00d4-\u00f0\u00cd\u009a{\u00a5\u00be.\u0007I\u00cb{D\u00ec\u00c6e\u00ec\u00fd\u009c\u0093\u008b&6\u00ba\u00e0\u00ce\u0086t?|\u001cd\u00c9\u0001>\u00cf\u00c1\u00b7\u00bb\u00d7?\u0084M\u008d\u00b4[\u009c\u00ef\u00df>\u00845\u0098\u0095|\u00e69\u00f8.\u00d8\u00bd\u00cc\u0087\u00b5n?\u00ac\u00e7K~\u00deI\u00ba\u0017h\u00f1\u00b8I\u009f\u001d\u00acf\u0090\u001e\u00e4?\u00ebij\u00b3\u00973\u00a3R*9\u0087g\u00c9l\u00f6\u00bb\u00ca \u00bc\u008f\u009dOoJ\u00b5\u00cd/\u0095\u0011FU\u00bc\u0080\u00c0\u00ad\u007f\u00d7\u00b4\u00fd\u00c5=\u00c2\u0004\u00c1\b\u0097E\u00aa`\u008aT";
                var7_6 = "\u00a0\u0013Q\u00ab\u0090M\u0099\u00bd`\u0085\u0019\u00c03\u009dt\u00c1\u001asNt\u00b2\u00f2\r~-9'mI\r9@\u00cb\u00c2\u00b7\u00adK!r\u007f\u00fb\u0098\u00bc9\u00fd\u00f0\u00dcJ\u00ba\u0095%2\u00bc\u000bA \u00c5\u00edt\u009d\u009ds~\u0094\u00b2O\u00b7\u0097\u00e6a\u0015/\u00f4\u0016/\u0087xX8\u00cf\u00e4g(\u0083\u001be\u0015\u00a1\u0097Y0\u00f7\u00ea;\u00d8\u00f5s\u00fdg\u0007\u0004\"~V\u008e\u0086|\u0085Q\u000ff\u00d7\u001b\"\u0019\u0003\u00ef\u0002cy$\"\u00faH\u0098up\t\u00fc \u00c06\u0094\u00e8\u00ee\u0013\u0084\u0081\u0006CK&\u00f4\u00fbs\u00a0\u00bd\u00e0v\u0090{a5~\u00c4\u00f9\u00d9\u00b5r\u00f4\u00e84os/\u001b,-'\u0003/OQ\u00e7\u00c9xD@\u00a3i\u00e22\u0098}N\u00d4B\u0019\u00f8R~d}_\u00de\u00a7\u00b0\u00bd\u0012kD\u00e3p\u0091\fTV\u00c7\u0012g\u00ef\u00e6\u00a2\u001c\u000e\u00cb \u00ef\u00fc\u0002\u000eE\u00f6p\u00aa\u009a \\\u00112\u00b5\u00fb6\u00c2y\u001e\u00bf\u00f5\u00af\u00b3\u00a8\u00c9\u0098\u00e7,\u00d9\u00ec}\u00b3\u0095\u00b2\u00e9\u00e3<\u00d4-\u00f0\u00cd\u009a{\u00a5\u00be.\u0007I\u00cb{D\u00ec\u00c6e\u00ec\u00fd\u009c\u0093\u008b&6\u00ba\u00e0\u00ce\u0086t?|\u001cd\u00c9\u0001>\u00cf\u00c1\u00b7\u00bb\u00d7?\u0084M\u008d\u00b4[\u009c\u00ef\u00df>\u00845\u0098\u0095|\u00e69\u00f8.\u00d8\u00bd\u00cc\u0087\u00b5n?\u00ac\u00e7K~\u00deI\u00ba\u0017h\u00f1\u00b8I\u009f\u001d\u00acf\u0090\u001e\u00e4?\u00ebij\u00b3\u00973\u00a3R*9\u0087g\u00c9l\u00f6\u00bb\u00ca \u00bc\u008f\u009dOoJ\u00b5\u00cd/\u0095\u0011FU\u00bc\u0080\u00c0\u00ad\u007f\u00d7\u00b4\u00fd\u00c5=\u00c2\u0004\u00c1\b\u0097E\u00aa`\u008aT".length();
                var4_7 = 0;
                while (true) {
                    var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                    v3 = var8_3;
                    v4 = var5_4++;
                    v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                    v6 = -1;
                    break block8;
                    break;
                }
lbl27:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "\u00f4\u00d6\u00a0.\u00dc<A\u0086\b\u00ec\u00ac\u00ceA\bA\u0000";
                    var7_6 = "\u00f4\u00d6\u00a0.\u00dc<A\u0086\b\u00ec\u00ac\u00ceA\bA\u0000".length();
                    var4_7 = 0;
                    while (true) {
                        var9_8 = var6_5.substring(var4_7, var4_7 += 8).getBytes("ISO-8859-1");
                        v3 = var8_3;
                        v4 = var5_4++;
                        v5 = ((long)var9_8[0] & 255L) << 56 | ((long)var9_8[1] & 255L) << 48 | ((long)var9_8[2] & 255L) << 40 | ((long)var9_8[3] & 255L) << 32 | ((long)var9_8[4] & 255L) << 24 | ((long)var9_8[5] & 255L) << 16 | ((long)var9_8[6] & 255L) << 8 | (long)var9_8[7] & 255L;
                        v6 = 0;
                        break block8;
                        break;
                    }
                    break;
                }
lbl40:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    break block9;
                    break;
                }
            }
            var10_9 = v5;
            var12_10 = var2_1.doFinal(new byte[]{(byte)(var10_9 >>> 56), (byte)(var10_9 >>> 48), (byte)(var10_9 >>> 40), (byte)(var10_9 >>> 32), (byte)(var10_9 >>> 24), (byte)(var10_9 >>> 16), (byte)(var10_9 >>> 8), (byte)var10_9});
            v7 = ((long)var12_10[0] & 255L) << 56 | ((long)var12_10[1] & 255L) << 48 | ((long)var12_10[2] & 255L) << 40 | ((long)var12_10[3] & 255L) << 32 | ((long)var12_10[4] & 255L) << 24 | ((long)var12_10[5] & 255L) << 16 | ((long)var12_10[6] & 255L) << 8 | (long)var12_10[7] & 255L;
            switch (v6) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl53:
                // 1 sources

                ** continue;
            }
        }
        fX.mKhNu = var8_3;
        fX.vnJEn = new Integer[51];
    }

    public static float aYh() {
        boolean bl2;
        block7: {
            block8: {
                long l2 = vDBBc ^ 0x63D8E6BE5DFFL;
                int[] nArray = fX.aYu();
                try {
                    try {
                        bl2 = fX.aYe();
                        if (nArray == null) break block7;
                        if (!bl2) break block8;
                    }
                    catch (MatchException matchException) {
                        throw fX.aYv(matchException);
                    }
                    return fX.aYk();
                }
                catch (MatchException matchException) {
                    throw fX.aYv(matchException);
                }
            }
            bl2 = fX.aYf();
        }
        try {
            if (bl2) {
                return fX.aYi();
            }
        }
        catch (MatchException matchException) {
            throw fX.aYv(matchException);
        }
        return fX.aYj();
    }

    public static int[] aYu() {
        return CgnEr;
    }

    @Override
    public void YO() {
        this.baa(true);
    }

    @hG
    public void aYc(gA gA2) {
        block14: {
            int n2;
            block15: {
                int n3;
                int[] nArray;
                block12: {
                    block13: {
                        long l2 = vDBBc ^ 0x372E27FAEE8BL;
                        nArray = fX.aYu();
                        try {
                            n3 = this.bab();
                            if (nArray == null) break block12;
                            if (n3 != 0) break block13;
                        }
                        catch (MatchException matchException) {
                            throw fX.aYv(matchException);
                        }
                        return;
                    }
                    n3 = gA2.bbQ();
                }
                try {
                    if (n3 != 1) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw fX.aYv(matchException);
                }
                try {
                    try {
                        try {
                            if (rD.dlmvG.currentScreen != null) break block14;
                            n2 = gA2.bbP();
                            if (nArray == null) break block15;
                        }
                        catch (MatchException matchException) {
                            throw fX.aYv(matchException);
                        }
                        if (n2 != this.jGdAR.VP()) break block14;
                    }
                    catch (MatchException matchException) {
                        throw fX.aYv(matchException);
                    }
                    n2 = this.aYd() ? 1 : 0;
                }
                catch (MatchException matchException) {
                    throw fX.aYv(matchException);
                }
            }
            if (n2 == 0) {
                bD.LD();
            }
        }
    }

    private static MatchException aYv(MatchException matchException) {
        return matchException;
    }

    public static boolean aYe() {
        return fX.aYl().aYn().SQ(0);
    }

    public static float aYk() {
        return 0.2f;
    }

    public cu aYo() {
        return this.hltCm;
    }

    public cu aYp() {
        return this.OzuKt;
    }

    public cI aYr() {
        return this.HevkM;
    }

    public static void aYt(int[] nArray) {
        CgnEr = nArray;
    }

    private static int aYw(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4FCD;
        if (vnJEn[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = mKhNu[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])yuueo.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    yuueo.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/fX", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            fX.vnJEn[n3] = n4;
        }
        return vnJEn[n3];
    }

    public static float aYj() {
        return 0.85f;
    }

    public static boolean aYg() {
        return fX.aYl().aYn().SQ(2);
    }

    private static CallSite aYy(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/fX" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cu aYq() {
        return this.seKrG;
    }

    private static int aYx(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = fX.aYw(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public static fX aYl() {
        fX fX2;
        block4: {
            block5: {
                long l2 = vDBBc ^ 0x370D12BC6C56L;
                int[] nArray = fX.aYu();
                try {
                    try {
                        fX2 = JUwUO;
                        if (nArray == null) break block4;
                        if (fX2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw fX.aYv(matchException);
                    }
                    JUwUO = rD.dlJ().aZx(fX.class);
                }
                catch (MatchException matchException) {
                    throw fX.aYv(matchException);
                }
            }
            fX2 = JUwUO;
        }
        return fX2;
    }

    private boolean aYd() {
        long l2 = vDBBc ^ 0xB808D77ACAAL;
        return rr.diY((int)fX.aYy("u", (int)7549, (long)(0x48E8506EE123AD3AL ^ l2)));
    }

    public ct aYn() {
        return this.nJAFn;
    }

    public static boolean aYf() {
        return fX.aYl().aYn().SQ(1);
    }

    public static float aYi() {
        return 0.75f;
    }

    public cD aYm() {
        return this.jGdAR;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(fX.class, "aYx", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

