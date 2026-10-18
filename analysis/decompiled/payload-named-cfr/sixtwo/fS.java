/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.font.TextRenderer
 *  net.minecraft.scoreboard.ScoreboardEntry
 *  net.minecraft.text.MutableText
 *  net.minecraft.text.StringVisitable
 *  net.minecraft.text.StringVisitable$StyledVisitor
 *  net.minecraft.text.Style
 *  net.minecraft.text.Text
 *  org.apache.commons.lang3.mutable.MutableInt
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
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.function.BiConsumer;
import java.util.function.IntConsumer;
import java.util.function.IntFunction;
import java.util.regex.Pattern;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.font.TextRenderer;
import net.minecraft.scoreboard.ScoreboardEntry;
import net.minecraft.text.MutableText;
import net.minecraft.text.StringVisitable;
import net.minecraft.text.Style;
import net.minecraft.text.Text;
import org.apache.commons.lang3.mutable.MutableInt;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.cy;
import sixtwo.fS$sV;
import sixtwo.fX;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.jd;
import sixtwo.mE;
import sixtwo.mO;
import sixtwo.mr;
import sixtwo.qu;
import sixtwo.rD;
import sixtwo.ru;

public class fS
extends gg {
    private final cv lHFev;
    private final cw JniNV;
    private final cw serPq;
    private final cw VNukw;
    private final cy nVujd;
    private final cy MSZPL;
    private final cy IKiTs;
    private final Comparator<ScoreboardEntry> oHxpG;
    private static final long IRkCy;
    private static final String[] bgliR;
    private static final String[] wzHAy;
    private static final Map dwVZR;
    private static final long[] ZTpYF;
    private static final Integer[] mEaUS;
    private static final Map KvXEV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public fS() {
        long l2 = IRkCy ^ 0x6ABAC02AF154L;
        super(gf.aZL((int)fS.aXo("w", (int)10057, (long)(0x714F0789C070B4C3L ^ l2)), false, gh.KfAlY));
        int[] nArray = new int[fS.aXo("w", (int)23720, (long)(0x799AC92E96394F05L ^ l2))];
        nArray[0] = (int)fS.aXo("w", (int)9006, (long)(0x1A68DF083154B09EL ^ l2));
        nArray[1] = (int)fS.aXo("w", (int)16134, (long)(0x1D5F61ED49EBAC88L ^ l2));
        nArray[2] = (int)fS.aXo("w", (int)2850, (long)(0x71441285B7E398BEL ^ l2));
        nArray[3] = (int)fS.aXo("w", (int)25933, (long)(0x2E3BC2AD1B8276EBL ^ l2));
        nArray[4] = (int)fS.aXo("w", (int)27969, (long)(0x543E27253862FEC0L ^ l2));
        nArray[5] = (int)fS.aXo("w", (int)1998, (long)(0xEB9851637A79461L ^ l2));
        nArray[fS.aXo("w", (int)7783, (long)(0x7C3CDE47B9E28DFCL ^ l2))] = (int)fS.aXo("w", (int)14441, (long)(0x6E437080A59D2BDBL ^ l2));
        this.lHFev = new cv(this, mr.clS(nArray));
        this.JniNV = new cw(this.lHFev, mr.clS(new int[]{(int)fS.aXo("w", (int)21186, (long)(0x64E6D669F5FE4167L ^ l2)), (int)fS.aXo("w", (int)24430, (long)(0x76C154989C704CD2L ^ l2)), (int)fS.aXo("w", (int)70, (long)(0x2EA134827D7E93CBL ^ l2)), (int)fS.aXo("w", (int)30576, (long)(0x2433E9CF70CFE4F6L ^ l2))})).Tz();
        int[] nArray2 = new int[fS.aXo("w", (int)14656, (long)(0x7BDEEE7A66B62AFEL ^ l2))];
        nArray2[0] = (int)fS.aXo("w", (int)7394, (long)(0x1CDDA035ABD90F46L ^ l2));
        nArray2[1] = (int)fS.aXo("w", (int)25605, (long)(0x324A4AFBAEF77B8L ^ l2));
        nArray2[2] = (int)fS.aXo("w", (int)22870, (long)(0x1C929A66C2AECAD5L ^ l2));
        nArray2[3] = (int)fS.aXo("w", (int)30576, (long)(0x2433E9CF70CFE4F6L ^ l2));
        nArray2[4] = (int)fS.aXo("w", (int)25728, (long)(0x69DCDEB6F2FD7737L ^ l2));
        nArray2[5] = (int)fS.aXo("w", (int)12189, (long)(0x6FE5A03A1FC8BC15L ^ l2));
        nArray2[fS.aXo("w", (int)5469, (long)(0x43E9BCE3C9C986DFL ^ l2))] = (int)fS.aXo("w", (int)3022, (long)(0x213B5E288CAE1862L ^ l2));
        this.serPq = new cw(this.lHFev, mr.clS(nArray2));
        int[] nArray3 = new int[fS.aXo("w", (int)5469, (long)(0x43E9BCE3C9C986DFL ^ l2))];
        nArray3[0] = (int)fS.aXo("w", (int)1388, (long)(0x52C6A815C80796C2L ^ l2));
        nArray3[1] = (int)fS.aXo("w", (int)30576, (long)(0x2433E9CF70CFE4F6L ^ l2));
        nArray3[2] = (int)fS.aXo("w", (int)25605, (long)(0x324A4AFBAEF77B8L ^ l2));
        nArray3[3] = (int)fS.aXo("w", (int)24127, (long)(0x40C0590F1912CDB4L ^ l2));
        nArray3[4] = (int)fS.aXo("w", (int)30576, (long)(0x2433E9CF70CFE4F6L ^ l2));
        nArray3[5] = (int)fS.aXo("w", (int)25605, (long)(0x324A4AFBAEF77B8L ^ l2));
        this.VNukw = new cw(this.lHFev, mr.clS(nArray3));
        this.nVujd = new cy(this, mr.clS(new int[]{(int)fS.aXo("w", (int)21901, (long)(0x4CF57D0001814636L ^ l2)), (int)fS.aXo("w", (int)17772, (long)(0x12BCB27C624A56D9L ^ l2)), (int)fS.aXo("w", (int)30579, (long)(0x12D202843C10E4EEL ^ l2)), (int)fS.aXo("w", (int)30576, (long)(0x2433E9CF70CFE4F6L ^ l2))})).Un((int)fS.aXo("w", (int)25903, (long)(0x763BFD7868F8F687L ^ l2))).Up((String)((Object)fS.aXl("x", (int)18335, (long)(0x20F70F4069BCBD7EL ^ l2))));
        int[] nArray4 = new int[fS.aXo("w", (int)28920, (long)(0x34CAC84EBA13E378L ^ l2))];
        nArray4[0] = (int)fS.aXo("w", (int)9485, (long)(0x429356165E7E3692L ^ l2));
        nArray4[1] = (int)fS.aXo("w", (int)25605, (long)(0x324A4AFBAEF77B8L ^ l2));
        nArray4[2] = (int)fS.aXo("w", (int)918, (long)(0x2CC021AED3741012L ^ l2));
        nArray4[3] = (int)fS.aXo("w", (int)30576, (long)(0x2433E9CF70CFE4F6L ^ l2));
        nArray4[4] = (int)fS.aXo("w", (int)3621, (long)(0x6ECC55AD7D0B1D82L ^ l2));
        nArray4[5] = (int)fS.aXo("w", (int)11648, (long)(0x69B6973BBAE03E39L ^ l2));
        nArray4[fS.aXo("w", (int)5469, (long)(0x43E9BCE3C9C986DFL ^ l2))] = (int)fS.aXo("w", (int)30166, (long)(0xB23F6967A79E651L ^ l2));
        nArray4[fS.aXo("w", (int)14656, (long)(0x7BDEEE7A66B62AFEL ^ l2))] = (int)fS.aXo("w", (int)13636, (long)(0x5675439EA70426EFL ^ l2));
        nArray4[fS.aXo("w", (int)18205, (long)(0x74E242B44993D491L ^ l2))] = (int)fS.aXo("w", (int)21901, (long)(0x4CF57D0001814636L ^ l2));
        nArray4[fS.aXo("w", (int)24959, (long)(0x58203CB2CD3D72C0L ^ l2))] = (int)fS.aXo("w", (int)17772, (long)(0x12BCB27C624A56D9L ^ l2));
        nArray4[fS.aXo("w", (int)32422, (long)(0x42C62CB787176D0CL ^ l2))] = (int)fS.aXo("w", (int)30579, (long)(0x12D202843C10E4EEL ^ l2));
        nArray4[fS.aXo("w", (int)32677, (long)(0x695D8DA1235E6C3DL ^ l2))] = (int)fS.aXo("w", (int)30576, (long)(0x2433E9CF70CFE4F6L ^ l2));
        this.MSZPL = new cy(this, mr.clS(nArray4)).Un((int)fS.aXo("w", (int)25887, (long)(0x17B51C09D727688L ^ l2))).Up((String)((Object)fS.aXl("x", (int)14060, (long)(0xE6F8BDE596A4C0EL ^ l2))));
        int[] nArray5 = new int[fS.aXo("w", (int)3834, (long)(0x4689767E9EC89D4EL ^ l2))];
        nArray5[0] = (int)fS.aXo("w", (int)17937, (long)(0x7DDD21E868F15598L ^ l2));
        nArray5[1] = (int)fS.aXo("w", (int)30576, (long)(0x2433E9CF70CFE4F6L ^ l2));
        nArray5[2] = (int)fS.aXo("w", (int)25605, (long)(0x324A4AFBAEF77B8L ^ l2));
        nArray5[3] = (int)fS.aXo("w", (int)32018, (long)(0x20FF2F4EE77F6E88L ^ l2));
        nArray5[4] = (int)fS.aXo("w", (int)30576, (long)(0x2433E9CF70CFE4F6L ^ l2));
        nArray5[5] = (int)fS.aXo("w", (int)25605, (long)(0x324A4AFBAEF77B8L ^ l2));
        nArray5[fS.aXo("w", (int)5469, (long)(0x43E9BCE3C9C986DFL ^ l2))] = (int)fS.aXo("w", (int)14227, (long)(0x4938EC8DD160A432L ^ l2));
        nArray5[fS.aXo("w", (int)14656, (long)(0x7BDEEE7A66B62AFEL ^ l2))] = (int)fS.aXo("w", (int)21901, (long)(0x4CF57D0001814636L ^ l2));
        nArray5[fS.aXo("w", (int)903, (long)(0xA74014247B1034L ^ l2))] = (int)fS.aXo("w", (int)17772, (long)(0x12BCB27C624A56D9L ^ l2));
        nArray5[fS.aXo("w", (int)27095, (long)(0x275C291340E47A49L ^ l2))] = (int)fS.aXo("w", (int)30579, (long)(0x12D202843C10E4EEL ^ l2));
        nArray5[fS.aXo("w", (int)8424, (long)(0x2362806839D23367L ^ l2))] = (int)fS.aXo("w", (int)30576, (long)(0x2433E9CF70CFE4F6L ^ l2));
        this.IKiTs = new cy(this, mr.clS(nArray5)).Un((int)fS.aXo("w", (int)25887, (long)(0x17B51C09D727688L ^ l2))).Up((String)((Object)fS.aXl("x", (int)11720, (long)(0x3EAA1529B88B572BL ^ l2))));
        this.oHxpG = Comparator.comparing(ScoreboardEntry::value).reversed().thenComparing(ScoreboardEntry::owner, String.CASE_INSENSITIVE_ORDER);
        this.nVujd.Vf(this.JniNV::TC);
        this.MSZPL.Vf(this.serPq::TC);
        this.IKiTs.Vf(this.VNukw::TC);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        fS.IRkCy = gb.aYR(-2839741502377196459L, -7431597977380522631L, MethodHandles.lookup().lookupClass()).a(72607446886649L);
                        fS.dwVZR = new HashMap<K, V>(13);
                        var11 = fS.IRkCy ^ 64542017902453L;
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
                        var20_3 = new String[4];
                        var18_4 = 0;
                        var17_5 = "\u00e9\u00d7Hv\u008b\u008f\u00eb\u0017\u00ad,\u00bdW\u0088\u00c803\u00e7\bsm\u00f8~c\u009c;\u00d3H\u008f\u00c8\u001d\u00da\u0093\u00edJr\u001c}cco \u0098\u00eaO\u00db\u00f2\u00bb\u00c3\u0090@\u0019\u00feA\u0098s_\u00b9)\u0082\u00b7\u00ad\u0016\u00f8\u00b9\u00bcG\f\u000b\u007fB\u00ad\u0000\u001c";
                        var19_6 = "\u00e9\u00d7Hv\u008b\u008f\u00eb\u0017\u00ad,\u00bdW\u0088\u00c803\u00e7\bsm\u00f8~c\u009c;\u00d3H\u008f\u00c8\u001d\u00da\u0093\u00edJr\u001c}cco \u0098\u00eaO\u00db\u00f2\u00bb\u00c3\u0090@\u0019\u00feA\u0098s_\u00b9)\u0082\u00b7\u00ad\u0016\u00f8\u00b9\u00bcG\f\u000b\u007fB\u00ad\u0000\u001c".length();
                        var16_7 = 40;
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
                            var20_3[var18_4++] = fS.aXi(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "\u0095\u0080\u0080\u00c8\u0095)\u008fp#u}\u00a2\u00b2\u0091\u00f15\u0018k\u00f0\u009cx\u0095\u00d7\u00cf\u00f7\u00a6\\\u0080\u00c43\u00ab+DSb\u008f\u00cf\u00e9\f\u00ad6";
                            var19_6 = "\u0095\u0080\u0080\u00c8\u0095)\u008fp#u}\u00a2\u00b2\u0091\u00f15\u0018k\u00f0\u009cx\u0095\u00d7\u00cf\u00f7\u00a6\\\u0080\u00c43\u00ab+DSb\u008f\u00cf\u00e9\f\u00ad6".length();
                            var16_7 = 16;
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
                            var20_3[var18_4++] = fS.aXi(var21_9).intern();
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
                fS.bgliR = var20_3;
                fS.wzHAy = new String[4];
                fS.KvXEV = new HashMap<K, V>(13);
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
                var6_12 = new long[57];
                var3_13 = 0;
                var4_14 = "\u00ea6q\u008d`|F\u008cC\u00a7\u00dc\u0018\u008f\u00c9:\u00a0\u00f8Z\u00b8L-\"\u00a0o\u00a4\u008f\r\u00f5\u00fa\u00b1:M\u0007\u008e\u00edW\u00a7k\u00bdV\u00f1\u008esv\u0018A\f\u0092\u0014\u00d1\u00fdr\u00ca\u008d\u0002\u00fc\u00cc$\u00b1\u00c9NX\u0006\u0010\u00deO\u00aa\u00a6\u00ce\u0081\"+\u00cb\u00ed1\u00a5?\u0002S\u0002\u008f//\u008b\u00ac\u00ff\u008f\u008b\u001a\u008d\u00c9\u0003}\u001d \u00a9o\u00c7\u000e\u00ae\u008cwU\u00f8\u00aa\u0012\u001c\u00b9\u00a9\u0004)\u00b9\u008aw\u00b1\u00cb\u008a:\u00eb\u009f\u0097V\u00aa\u00ba\u00dcW\u000b\u0001n<\u00b1\u00d2\u0082W\u0094\u00eae\f\u0010\u0096\u001f\u00a2\u00afFZmW\u0090v4\u00f7u8x\u00b2\u00b8\u00e9\u00b7\u001b\u00c8j\u0007\u00d2Y!\u0098\u00ccnz\u00d8\u00a8\u00e6\u008f\u00cfV1p\u00f6RuiWj\u00f4F\u00f8\u00deI\u00d7\u0006\u00dbrVT\u00cc,\u0011;\u00b0\u0006\u0087\u00b8[&sj^\u00a4\u00aa\u00ba|H\u00df/\u00fa\u00b0\u0002\u00b3q8\u008e\u00bc\u0086\u009a\u0087g\u00db\u00eb\u00d4\u00d3b\t9<\u00c5_\u00e7\u0095\u008eo\u00b3\u0094\u00b8\u00c5\u0019+\u00d1+8\u00ffR\u00f0d\u008bm\u0093\u008e\u001b_\ra(\tZ/e\u001f\u00f0V\u00e4\u00db\u0080\u000b\u0007\u00d6F\\\u0005\u00b9\u00de[NeZ\u00de!&\u00c8\u00c2D2tf\u00b3\u00c2\u00f3\u00c5\u00a7+\u00dc\u00fc\u00a4!\u00de\u00fa\u00c2\u00a1\u00ef(,ZI\u009aN\u00ed\u00c8F\u00ab\u008b\u00aa\u001fv\u00e2\u009a\u00fa\u00aem\u00e3\u0087\u00ac\u00b7oz\u0096\u00c0\u00e7\u0092=\u00bcR\u001erv\u00f9\u00d9\u00f5\u008b\u00db\u0084\u00e3l\u00b7\u0097\u008a\u00a7z\u00ac\u00b6\u00dcP\u0081\b\u00b1v\u00e9\u00b1ew_%3\u007f\u001a\u00c1|\u001f&\u00b2\u00cdZ\u00db\u008d\u00d7O\u00f8\u00b7\u00feH\u0089\u00b0\u0002\u00af\u0082\u00da\u00f3\u0099\u0083\th\u00da\u00af\u00c7l\u008c\u00cfmT\u009e\u0086l\u00fb\u00a7q\u00e2P\u009e\u0010!M\u00ed\u00a9D\u0018E\u00f6\u00df\u00abXR\u009d\u0093\u0086{\u001f$H\u00fb\u00b8br";
                var5_15 = "\u00ea6q\u008d`|F\u008cC\u00a7\u00dc\u0018\u008f\u00c9:\u00a0\u00f8Z\u00b8L-\"\u00a0o\u00a4\u008f\r\u00f5\u00fa\u00b1:M\u0007\u008e\u00edW\u00a7k\u00bdV\u00f1\u008esv\u0018A\f\u0092\u0014\u00d1\u00fdr\u00ca\u008d\u0002\u00fc\u00cc$\u00b1\u00c9NX\u0006\u0010\u00deO\u00aa\u00a6\u00ce\u0081\"+\u00cb\u00ed1\u00a5?\u0002S\u0002\u008f//\u008b\u00ac\u00ff\u008f\u008b\u001a\u008d\u00c9\u0003}\u001d \u00a9o\u00c7\u000e\u00ae\u008cwU\u00f8\u00aa\u0012\u001c\u00b9\u00a9\u0004)\u00b9\u008aw\u00b1\u00cb\u008a:\u00eb\u009f\u0097V\u00aa\u00ba\u00dcW\u000b\u0001n<\u00b1\u00d2\u0082W\u0094\u00eae\f\u0010\u0096\u001f\u00a2\u00afFZmW\u0090v4\u00f7u8x\u00b2\u00b8\u00e9\u00b7\u001b\u00c8j\u0007\u00d2Y!\u0098\u00ccnz\u00d8\u00a8\u00e6\u008f\u00cfV1p\u00f6RuiWj\u00f4F\u00f8\u00deI\u00d7\u0006\u00dbrVT\u00cc,\u0011;\u00b0\u0006\u0087\u00b8[&sj^\u00a4\u00aa\u00ba|H\u00df/\u00fa\u00b0\u0002\u00b3q8\u008e\u00bc\u0086\u009a\u0087g\u00db\u00eb\u00d4\u00d3b\t9<\u00c5_\u00e7\u0095\u008eo\u00b3\u0094\u00b8\u00c5\u0019+\u00d1+8\u00ffR\u00f0d\u008bm\u0093\u008e\u001b_\ra(\tZ/e\u001f\u00f0V\u00e4\u00db\u0080\u000b\u0007\u00d6F\\\u0005\u00b9\u00de[NeZ\u00de!&\u00c8\u00c2D2tf\u00b3\u00c2\u00f3\u00c5\u00a7+\u00dc\u00fc\u00a4!\u00de\u00fa\u00c2\u00a1\u00ef(,ZI\u009aN\u00ed\u00c8F\u00ab\u008b\u00aa\u001fv\u00e2\u009a\u00fa\u00aem\u00e3\u0087\u00ac\u00b7oz\u0096\u00c0\u00e7\u0092=\u00bcR\u001erv\u00f9\u00d9\u00f5\u008b\u00db\u0084\u00e3l\u00b7\u0097\u008a\u00a7z\u00ac\u00b6\u00dcP\u0081\b\u00b1v\u00e9\u00b1ew_%3\u007f\u001a\u00c1|\u001f&\u00b2\u00cdZ\u00db\u008d\u00d7O\u00f8\u00b7\u00feH\u0089\u00b0\u0002\u00af\u0082\u00da\u00f3\u0099\u0083\th\u00da\u00af\u00c7l\u008c\u00cfmT\u009e\u0086l\u00fb\u00a7q\u00e2P\u009e\u0010!M\u00ed\u00a9D\u0018E\u00f6\u00df\u00abXR\u009d\u0093\u0086{\u001f$H\u00fb\u00b8br".length();
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
                    var4_14 = "\u00a3,\u0097\u00db.\u0094)\u00aa\u00c6z:\u00b3\u0084\u00f5\u00a5\u009a";
                    var5_15 = "\u00a3,\u0097\u00db.\u0094)\u00aa\u00c6z:\u00b3\u0084\u00f5\u00a5\u009a".length();
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
        fS.ZTpYF = var6_12;
        fS.mEaUS = new Integer[57];
    }

    public Text aWR(Text text) {
        block13: {
            Text text2;
            block10: {
                block11: {
                    boolean bl2;
                    block12: {
                        long l2 = IRkCy ^ 0x7D7323C4B466L;
                        int[] nArray = fX.aYu();
                        try {
                            try {
                                try {
                                    try {
                                        text2 = text;
                                        if (nArray == null) break block10;
                                        if (text2 == null) break block11;
                                    }
                                    catch (MatchException matchException) {
                                        throw fS.aXh(matchException);
                                    }
                                    bl2 = this.RliRe;
                                    if (nArray == null) break block12;
                                }
                                catch (MatchException matchException) {
                                    throw fS.aXh(matchException);
                                }
                                if (!bl2) break block11;
                            }
                            catch (MatchException matchException) {
                                throw fS.aXh(matchException);
                            }
                            bl2 = qu.cmARD.get();
                        }
                        catch (MatchException matchException) {
                            throw fS.aXh(matchException);
                        }
                    }
                    if (!bl2) break block13;
                }
                text2 = text;
            }
            return text2;
        }
        MutableText mutableText = Text.empty();
        text.visit((style, string) -> {
            String string2 = this.aWQ(this.aWP(string));
            mutableText.append((Text)Text.literal((String)string2).setStyle(style));
            return Optional.empty();
        }, Style.EMPTY);
        return mutableText;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public Text aWS(Text var1_1, TextRenderer var2_2, MutableInt var3_3) {
        block190: {
            block189: {
                block170: {
                    block171: {
                        block172: {
                            block167: {
                                block168: {
                                    block169: {
                                        block165: {
                                            block166: {
                                                block163: {
                                                    block164: {
                                                        block161: {
                                                            block162: {
                                                                block158: {
                                                                    block160: {
                                                                        block159: {
                                                                            block157: {
                                                                                block156: {
                                                                                    block155: {
                                                                                        block154: {
                                                                                            block153: {
                                                                                                block152: {
                                                                                                    block151: {
                                                                                                        block150: {
                                                                                                            block191: {
                                                                                                                block149: {
                                                                                                                    block148: {
                                                                                                                        block147: {
                                                                                                                            block146: {
                                                                                                                                block145: {
                                                                                                                                    var4_4 = fS.IRkCy ^ 70130708169503L;
                                                                                                                                    var6_5 = fX.aYu();
                                                                                                                                    try {
                                                                                                                                        try {
                                                                                                                                            v0 = this.RliRe;
                                                                                                                                            if (var6_5 == null) break block145;
                                                                                                                                            if (v0) {
                                                                                                                                            }
                                                                                                                                            ** GOTO lbl32
                                                                                                                                        }
                                                                                                                                        catch (MatchException v1) {
                                                                                                                                            throw fS.aXh(v1);
                                                                                                                                        }
                                                                                                                                        v0 = this.VNukw.TC();
                                                                                                                                    }
                                                                                                                                    catch (MatchException v2) {
                                                                                                                                        throw fS.aXh(v2);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                                try {
                                                                                                                                    try {
                                                                                                                                        if (var6_5 == null) break block146;
                                                                                                                                        if (v0) {
                                                                                                                                        }
                                                                                                                                        ** GOTO lbl32
                                                                                                                                    }
                                                                                                                                    catch (MatchException v3) {
                                                                                                                                        throw fS.aXh(v3);
                                                                                                                                    }
                                                                                                                                    v0 = qu.cmARD.get();
                                                                                                                                }
                                                                                                                                catch (MatchException v4) {
                                                                                                                                    throw fS.aXh(v4);
                                                                                                                                }
                                                                                                                            }
                                                                                                                            try {
                                                                                                                                if (!v0) break block147;
lbl32:
                                                                                                                                // 3 sources

                                                                                                                                return var1_1;
                                                                                                                            }
                                                                                                                            catch (MatchException v5) {
                                                                                                                                throw fS.aXh(v5);
                                                                                                                            }
                                                                                                                        }
                                                                                                                        var7_6 = var1_1.getString();
                                                                                                                        var8_7 = rD.dlmvG.getCurrentServerEntry();
                                                                                                                        var9_8 = this.IKiTs.Us();
                                                                                                                        var10_9 = ru.djF(var9_8);
                                                                                                                        try {
                                                                                                                            v6 = var8_7;
                                                                                                                            if (var6_5 == null) break block148;
                                                                                                                            if (v6 == null) break block149;
                                                                                                                        }
                                                                                                                        catch (MatchException v7) {
                                                                                                                            throw fS.aXh(v7);
                                                                                                                        }
                                                                                                                        v6 = var8_7;
                                                                                                                    }
                                                                                                                    v8 = v6.address.toLowerCase();
                                                                                                                    break block191;
                                                                                                                }
                                                                                                                v8 = "";
                                                                                                            }
                                                                                                            var11_10 = v8;
                                                                                                            try {
                                                                                                                v9 = var11_10;
                                                                                                                if (var6_5 == null) break block150;
                                                                                                                if (!v9.isEmpty()) {
                                                                                                                }
                                                                                                                ** GOTO lbl71
                                                                                                            }
                                                                                                            catch (MatchException v10) {
                                                                                                                throw fS.aXh(v10);
                                                                                                            }
                                                                                                            var13_11 = var11_10.indexOf((int)fS.aXo("w", (int)25326, (long)(497836538724696838L ^ var4_4)));
                                                                                                            try {
                                                                                                                v11 = var13_11 > -1 ? var11_10.substring(0, var13_11) : var11_10;
                                                                                                            }
                                                                                                            catch (MatchException v12) {
                                                                                                                throw fS.aXh(v12);
                                                                                                            }
                                                                                                            var12_13 = v11;
                                                                                                            try {
                                                                                                                if (var6_5 != null) break block151;
lbl71:
                                                                                                                // 2 sources

                                                                                                                v9 = "";
                                                                                                            }
                                                                                                            catch (MatchException v13) {
                                                                                                                throw fS.aXh(v13);
                                                                                                            }
                                                                                                        }
                                                                                                        var12_13 = v9;
                                                                                                    }
                                                                                                    var13_12 = ru.djG(var7_6).toLowerCase();
                                                                                                    try {
                                                                                                        try {
                                                                                                            v14 = var11_10.isEmpty();
                                                                                                            if (var6_5 == null) break block152;
                                                                                                            if (v14 != 0) break block153;
                                                                                                        }
                                                                                                        catch (MatchException v15) {
                                                                                                            throw fS.aXh(v15);
                                                                                                        }
                                                                                                        v14 = var13_12.contains(var11_10);
                                                                                                    }
                                                                                                    catch (MatchException v16) {
                                                                                                        throw fS.aXh(v16);
                                                                                                    }
                                                                                                }
                                                                                                try {
                                                                                                    if (var6_5 == null) break block154;
                                                                                                    if (v14 == 0) break block153;
                                                                                                }
                                                                                                catch (MatchException v17) {
                                                                                                    throw fS.aXh(v17);
                                                                                                }
                                                                                                v14 = 1;
                                                                                                break block154;
                                                                                            }
                                                                                            v14 = 0;
                                                                                        }
                                                                                        var14_14 = v14;
                                                                                        try {
                                                                                            try {
                                                                                                v18 = var12_13.isEmpty();
                                                                                                if (var6_5 == null) break block155;
                                                                                                if (v18 != 0) break block156;
                                                                                            }
                                                                                            catch (MatchException v19) {
                                                                                                throw fS.aXh(v19);
                                                                                            }
                                                                                            v18 = var13_12.contains(var12_13);
                                                                                        }
                                                                                        catch (MatchException v20) {
                                                                                            throw fS.aXh(v20);
                                                                                        }
                                                                                    }
                                                                                    try {
                                                                                        if (var6_5 == null) break block157;
                                                                                        if (v18 == 0) break block156;
                                                                                    }
                                                                                    catch (MatchException v21) {
                                                                                        throw fS.aXh(v21);
                                                                                    }
                                                                                    v18 = 1;
                                                                                    break block157;
                                                                                }
                                                                                v18 = 0;
                                                                            }
                                                                            var15_15 = v18;
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        v22 = jd.dCIsP.matcher(var7_6).find();
                                                                                        if (var6_5 == null) break block158;
                                                                                        if (v22) break block159;
                                                                                    }
                                                                                    catch (MatchException v23) {
                                                                                        throw fS.aXh(v23);
                                                                                    }
                                                                                    v22 = jd.dCIsP.matcher(ru.djG(var7_6)).find();
                                                                                    if (var6_5 == null) break block158;
                                                                                }
                                                                                catch (MatchException v24) {
                                                                                    throw fS.aXh(v24);
                                                                                }
                                                                                if (!v22) break block160;
                                                                            }
                                                                            catch (MatchException v25) {
                                                                                throw fS.aXh(v25);
                                                                            }
                                                                        }
                                                                        v22 = true;
                                                                        break block158;
                                                                    }
                                                                    v22 = false;
                                                                }
                                                                var16_16 = v22;
                                                                try {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        v26 = var14_14;
                                                                                        if (var6_5 == null) break block161;
                                                                                        if (v26 != 0) break block162;
                                                                                    }
                                                                                    catch (MatchException v27) {
                                                                                        throw fS.aXh(v27);
                                                                                    }
                                                                                    v26 = var15_15;
                                                                                    if (var6_5 == null) break block161;
                                                                                }
                                                                                catch (MatchException v28) {
                                                                                    throw fS.aXh(v28);
                                                                                }
                                                                                if (v26 != 0) break block162;
                                                                            }
                                                                            catch (MatchException v29) {
                                                                                throw fS.aXh(v29);
                                                                            }
                                                                            v26 = (int)var16_16;
                                                                            if (var6_5 == null) break block161;
                                                                        }
                                                                        catch (MatchException v30) {
                                                                            throw fS.aXh(v30);
                                                                        }
                                                                        if (v26 != 0) break block162;
                                                                    }
                                                                    catch (MatchException v31) {
                                                                        throw fS.aXh(v31);
                                                                    }
                                                                    return var1_1;
                                                                }
                                                                catch (MatchException v32) {
                                                                    throw fS.aXh(v32);
                                                                }
                                                            }
                                                            v26 = var2_2.getWidth((StringVisitable)var1_1);
                                                        }
                                                        var17_17 = v26;
                                                        var18_18 = var3_3.intValue();
                                                        var19_19 = ((mO)rD.dlmvG.inGameHud).getSidebarX();
                                                        var20_20 = ((mO)rD.dlmvG.inGameHud).getSidebarWidth();
                                                        var21_21 = (float)var19_19 + (float)(var20_20 - var17_17) / 2.0f;
                                                        try {
                                                            cfr_temp_0 = Math.abs((float)var18_18 - var21_21) - 1.5f;
                                                            v33 = cfr_temp_0 == 0.0f ? '\u0000' : (cfr_temp_0 < 0.0f ? '\uffffffff' : '\u0001');
                                                            if (var6_5 == null) break block163;
                                                            if (v33 > 0) break block164;
                                                        }
                                                        catch (MatchException v34) {
                                                            throw fS.aXh(v34);
                                                        }
                                                        v33 = (float)true;
                                                        break block163;
                                                    }
                                                    v33 = (float)false;
                                                }
                                                var22_22 = v33;
                                                var23_23 = new StringBuilder();
                                                try {
                                                    try {
                                                        v35 = var16_16;
                                                        if (var6_5 == null) break block165;
                                                        if (!v35) break block166;
                                                    }
                                                    catch (MatchException v36) {
                                                        throw fS.aXh(v36);
                                                    }
                                                    var23_23.append((String)fS.aXl("x", (int)19383, (long)(277817632028197660L ^ var4_4))).append(jd.dCIsP.pattern()).append(")");
                                                }
                                                catch (MatchException v37) {
                                                    throw fS.aXh(v37);
                                                }
                                            }
                                            v35 = var11_10.isEmpty();
                                        }
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        if (var6_5 == null) break block167;
                                                        if (v35) break block168;
                                                    }
                                                    catch (MatchException v38) {
                                                        throw fS.aXh(v38);
                                                    }
                                                    v39 = var23_23;
                                                    if (var6_5 == null) break block168;
                                                }
                                                catch (MatchException v40) {
                                                    throw fS.aXh(v40);
                                                }
                                                if (v39.isEmpty()) break block169;
                                            }
                                            catch (MatchException v41) {
                                                throw fS.aXh(v41);
                                            }
                                            var23_23.append("|");
                                        }
                                        catch (MatchException v42) {
                                            throw fS.aXh(v42);
                                        }
                                    }
                                    v39 = var23_23.append(Pattern.quote(var11_10));
                                }
                                try {
                                    v43 = var12_13;
                                    if (var6_5 == null) break block170;
                                    v35 = v43.isEmpty();
                                }
                                catch (MatchException v44) {
                                    throw fS.aXh(v44);
                                }
                            }
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                if (v35) break block171;
                                                v43 = var12_13;
                                                if (var6_5 == null) break block170;
                                            }
                                            catch (MatchException v45) {
                                                throw fS.aXh(v45);
                                            }
                                            if (v43.equals(var11_10)) break block171;
                                        }
                                        catch (MatchException v46) {
                                            throw fS.aXh(v46);
                                        }
                                        v47 = var23_23;
                                        if (var6_5 == null) break block171;
                                    }
                                    catch (MatchException v48) {
                                        throw fS.aXh(v48);
                                    }
                                    if (v47.isEmpty()) break block172;
                                }
                                catch (MatchException v49) {
                                    throw fS.aXh(v49);
                                }
                                var23_23.append("|");
                            }
                            catch (MatchException v50) {
                                throw fS.aXh(v50);
                            }
                        }
                        v47 = var23_23.append(Pattern.quote(var12_13));
                    }
                    v43 = var23_23.toString();
                }
                var24_24 = Pattern.compile(v43, 2);
                var25_25 = new ArrayList<E>();
                var26_26 = new StringBuilder();
                var27_27 = new StringBuilder();
                var28_28 = Text.empty();
                var29_29 = (BiConsumer<Style, String>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;Ljava/lang/Object;)V, aXf(java.util.List java.lang.StringBuilder java.lang.StringBuilder net.minecraft.text.Style java.lang.String ), (Lnet/minecraft/text/Style;Ljava/lang/String;)V)(var25_25, (StringBuilder)var26_26, (StringBuilder)var27_27);
                var30_30 = (IntConsumer)LambdaMetafactory.metafactory(null, null, null, (I)V, aXe(java.util.List net.minecraft.text.MutableText int ), (I)V)(var25_25, (MutableText)var28_28);
                var31_31 = (IntConsumer)LambdaMetafactory.metafactory(null, null, null, (I)V, aXd(java.util.List int ), (I)V)(var25_25);
                var32_32 = (IntFunction<Style>)LambdaMetafactory.metafactory(null, null, null, (I)Ljava/lang/Object;, aXc(java.util.List int ), (I)Lnet/minecraft/text/Style;)(var25_25);
                var1_1.visit((StringVisitable.StyledVisitor)LambdaMetafactory.metafactory(null, null, null, (Lnet/minecraft/text/Style;Ljava/lang/String;)Ljava/util/Optional;, aXb(java.util.function.BiConsumer net.minecraft.text.Style java.lang.String ), (Lnet/minecraft/text/Style;Ljava/lang/String;)Ljava/util/Optional;)(var29_29), Style.EMPTY);
                while ((var33_33 = var24_24.matcher(var27_27)).find()) {
                    block188: {
                        block186: {
                            block187: {
                                block184: {
                                    block185: {
                                        block176: {
                                            var34_35 = var33_33.start();
                                            var35_37 = var33_33.end();
                                            while (var34_35 > 0) {
                                                block173: {
                                                    block174: {
                                                        block175: {
                                                            var36_38 = var27_27.charAt(var34_35 - 1);
                                                            try {
                                                                try {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                if (var6_5 == null) break block173;
                                                                                v51 = (char)Character.isLetterOrDigit(var36_38);
                                                                                if (var6_5 != null) {
                                                                                }
                                                                                ** GOTO lbl355
                                                                            }
                                                                            catch (MatchException v52) {
                                                                                throw fS.aXh(v52);
                                                                            }
                                                                            if (v51 != '\u0000') break block174;
                                                                        }
                                                                        catch (MatchException v53) {
                                                                            throw fS.aXh(v53);
                                                                        }
                                                                        v51 = var36_38;
                                                                        v54 /* !! */  = (int)fS.aXo("w", (int)27750, (long)(639988118482505111L ^ var4_4));
                                                                        if (var6_5 == null) break block175;
                                                                    }
                                                                    catch (MatchException v55) {
                                                                        throw fS.aXh(v55);
                                                                    }
                                                                    if (v51 == v54 /* !! */ ) break block174;
                                                                }
                                                                catch (MatchException v56) {
                                                                    throw fS.aXh(v56);
                                                                }
                                                                v51 = var36_38;
                                                                v54 /* !! */  = (int)fS.aXo("w", (int)14958, (long)(4514442373672246176L ^ var4_4));
                                                            }
                                                            catch (MatchException v57) {
                                                                throw fS.aXh(v57);
                                                            }
                                                        }
                                                        try {
                                                            if (var6_5 != null) {
                                                                if (v51 != v54 /* !! */ ) break;
                                                            }
                                                            ** GOTO lbl356
                                                        }
                                                        catch (MatchException v58) {
                                                            throw fS.aXh(v58);
                                                        }
                                                    }
                                                    --var34_35;
                                                }
                                                if (var6_5 != null) continue;
                                            }
                                            do {
                                                block177: {
                                                    block183: {
                                                        block182: {
                                                            block181: {
                                                                block180: {
                                                                    block179: {
                                                                        block178: {
                                                                            v51 = var35_37;
lbl355:
                                                                            // 2 sources

                                                                            v54 /* !! */  = var27_27.length();
lbl356:
                                                                            // 2 sources

                                                                            if (v51 >= v54 /* !! */ ) break;
                                                                            var36_38 = var27_27.charAt(var35_37);
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            try {
                                                                                                if (var6_5 == null) continue;
                                                                                                v59 = var36_38;
                                                                                                v60 /* !! */  = (int)fS.aXo("w", (int)26313, (long)(601880159131649824L ^ var4_4));
                                                                                                if (var6_5 == null) break block176;
                                                                                            }
                                                                                            catch (MatchException v61) {
                                                                                                throw fS.aXh(v61);
                                                                                            }
                                                                                            if (v59 == v60 /* !! */ ) break block177;
                                                                                        }
                                                                                        catch (MatchException v62) {
                                                                                            throw fS.aXh(v62);
                                                                                        }
                                                                                        v59 = var36_38;
                                                                                        v63 = fS.aXo("w", (int)7479, (long)(3237227168982219978L ^ var4_4));
                                                                                        if (var6_5 == null) break block178;
                                                                                    }
                                                                                    catch (MatchException v64) {
                                                                                        throw fS.aXh(v64);
                                                                                    }
                                                                                    if (v59 == v63) break block177;
                                                                                }
                                                                                catch (MatchException v65) {
                                                                                    throw fS.aXh(v65);
                                                                                }
                                                                                v59 = var36_38;
                                                                                v63 = fS.aXo("w", (int)23189, (long)(2632304829994662758L ^ var4_4));
                                                                            }
                                                                            catch (MatchException v66) {
                                                                                throw fS.aXh(v66);
                                                                            }
                                                                        }
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    if (var6_5 == null) break block179;
                                                                                    if (v59 == v63) break block177;
                                                                                }
                                                                                catch (MatchException v67) {
                                                                                    throw fS.aXh(v67);
                                                                                }
                                                                                v59 = var36_38;
                                                                                if (var6_5 == null) break block180;
                                                                            }
                                                                            catch (MatchException v68) {
                                                                                throw fS.aXh(v68);
                                                                            }
                                                                            v63 = fS.aXo("w", (int)26144, (long)(440376041692022746L ^ var4_4));
                                                                        }
                                                                        catch (MatchException v69) {
                                                                            throw fS.aXh(v69);
                                                                        }
                                                                    }
                                                                    try {
                                                                        if (v59 == v63) break block177;
                                                                        v59 = (char)Character.isLetterOrDigit(var36_38);
                                                                    }
                                                                    catch (MatchException v70) {
                                                                        throw fS.aXh(v70);
                                                                    }
                                                                }
                                                                try {
                                                                    if (var6_5 == null) break block181;
                                                                    if (v59 != '\u0000') break block177;
                                                                }
                                                                catch (MatchException v71) {
                                                                    throw fS.aXh(v71);
                                                                }
                                                                v59 = var36_38;
                                                            }
                                                            try {
                                                                try {
                                                                    v60 /* !! */  = (int)fS.aXo("w", (int)2165, (long)(234041812042262951L ^ var4_4));
                                                                    if (var6_5 == null) break block182;
                                                                    if (v59 == v60 /* !! */ ) break block177;
                                                                }
                                                                catch (MatchException v72) {
                                                                    throw fS.aXh(v72);
                                                                }
                                                                v59 = var36_38;
                                                                v60 /* !! */  = (int)fS.aXo("w", (int)31363, (long)(7197588530318793569L ^ var4_4));
                                                            }
                                                            catch (MatchException v73) {
                                                                throw fS.aXh(v73);
                                                            }
                                                        }
                                                        try {
                                                            try {
                                                                if (var6_5 == null) break block183;
                                                                if (v59 == v60 /* !! */ ) break block177;
                                                            }
                                                            catch (MatchException v74) {
                                                                throw fS.aXh(v74);
                                                            }
                                                            v59 = var36_38;
                                                            v60 /* !! */  = (int)fS.aXo("w", (int)12699, (long)(7255333634817560688L ^ var4_4));
                                                        }
                                                        catch (MatchException v75) {
                                                            throw fS.aXh(v75);
                                                        }
                                                    }
                                                    try {
                                                        if (var6_5 == null) break block176;
                                                        if (v59 != v60 /* !! */ ) break;
                                                    }
                                                    catch (MatchException v76) {
                                                        throw fS.aXh(v76);
                                                    }
                                                }
                                                ++var35_37;
                                            } while (var6_5 != null);
                                            v59 = var35_37;
                                            v60 /* !! */  = var34_35;
                                        }
                                        try {
                                            try {
                                                try {
                                                    if (var6_5 == null) break block184;
                                                    if (v59 <= v60 /* !! */ ) break block185;
                                                }
                                                catch (MatchException v77) {
                                                    throw fS.aXh(v77);
                                                }
                                                v59 = var27_27.charAt(var35_37 - 1);
                                                v60 /* !! */  = (int)fS.aXo("w", (int)12699, (long)(7255333634817560688L ^ var4_4));
                                                if (var6_5 == null) break block184;
                                            }
                                            catch (MatchException v78) {
                                                throw fS.aXh(v78);
                                            }
                                            if (v59 == v60 /* !! */ ) {
                                                // empty if block
                                            }
                                        }
                                        catch (MatchException v79) {
                                            throw fS.aXh(v79);
                                        }
                                    }
                                    v59 = --var35_37;
                                    v60 /* !! */  = var34_35;
                                }
                                var36_38 = v59 - v60 /* !! */ ;
                                var30_30.accept(var34_35);
                                var37_39 = var26_26.substring(var34_35, var35_37);
                                var38_40 = var27_27.substring(var34_35, var35_37);
                                try {
                                    v80 = var37_39.equals(var38_40);
                                    if (var6_5 == null) break block186;
                                    if (v80) break block187;
                                }
                                catch (MatchException v81) {
                                    throw fS.aXh(v81);
                                }
                                v80 = true;
                                break block186;
                            }
                            v80 = false;
                        }
                        var39_41 = v80;
                        try {
                            v82 = var39_41 != false ? var10_9 : var9_8;
                        }
                        catch (MatchException v83) {
                            throw fS.aXh(v83);
                        }
                        var40_42 = v82;
                        for (var41_43 = 0; var41_43 < var40_42.length(); ++var41_43) {
                            var42_44 = (double)var41_43 / (double)var40_42.length();
                            var44_45 = Math.min((int)(var42_44 * (double)var36_38), var36_38 - '\u0001');
                            try {
                                var28_28.append((Text)Text.literal((String)String.valueOf(var40_42.charAt(var41_43))).setStyle(var32_32.apply(var44_45)));
                                if (var6_5 != null) {
                                    if (var6_5 != null) continue;
                                    break;
                                }
                                break block188;
                            }
                            catch (MatchException v84) {
                                throw fS.aXh(v84);
                            }
                        }
                        var31_31.accept(var36_38);
                        var26_26.delete(0, var35_37);
                        var27_27.delete(0, var35_37);
                    }
                    if (var6_5 != null) continue;
                }
                try {
                    try {
                        var30_30.accept(var26_26.length());
                        v85 = var22_22;
                        if (var6_5 == null) break block189;
                        if (v85 == false) break block190;
                    }
                    catch (MatchException v86) {
                        throw fS.aXh(v86);
                    }
                    v85 = var2_2.getWidth((StringVisitable)var28_28);
                }
                catch (MatchException v87) {
                    throw fS.aXh(v87);
                }
            }
            var33_34 = v85;
            var34_36 = (float)var19_19 + (float)(var20_20 - var33_34) / 2.0f;
            var3_3.setValue((int)var34_36);
        }
        return var28_28;
    }

    /*
     * Could not resolve type clashes
     * Unable to fully structure code
     */
    public String aWQ(String var1_1) {
        block46: {
            block44: {
                block45: {
                    block43: {
                        block42: {
                            var2_2 = fS.IRkCy ^ 49508803515360L;
                            var4_3 = fX.aYu();
                            try {
                                try {
                                    v0 = this.RliRe;
                                    if (var4_3 == null) break block42;
                                    if (v0) {
                                    }
                                    ** GOTO lbl37
                                }
                                catch (MatchException v1) {
                                    throw fS.aXh(v1);
                                }
                                v0 = this.serPq.TC();
                            }
                            catch (MatchException v2) {
                                throw fS.aXh(v2);
                            }
                        }
                        try {
                            try {
                                if (var4_3 == null) break block43;
                                if (v0) {
                                }
                                ** GOTO lbl37
                            }
                            catch (MatchException v3) {
                                throw fS.aXh(v3);
                            }
                            v0 = qu.cmARD.get();
                        }
                        catch (MatchException v4) {
                            throw fS.aXh(v4);
                        }
                    }
                    try {
                        try {
                            if (var4_3 == null) break block44;
                            if (!v0) break block45;
                        }
                        catch (MatchException v5) {
                            throw fS.aXh(v5);
                        }
lbl37:
                        // 3 sources

                        return var1_1;
                    }
                    catch (MatchException v6) {
                        throw fS.aXh(v6);
                    }
                }
                v0 = false;
            }
            var5_4 = v0;
            for (Object var7_6 : rD.dmc().ddE()) {
                block50: {
                    block48: {
                        block49: {
                            block47: {
                                try {
                                    try {
                                        if (var4_3 == null) break block46;
                                        v7 = var7_6;
                                        if (var4_3 == null) break block47;
                                    }
                                    catch (MatchException v8) {
                                        throw fS.aXh(v8);
                                    }
                                    if (v7 == null) continue;
                                }
                                catch (MatchException v9) {
                                    throw fS.aXh(v9);
                                }
                                v7 = var7_6;
                            }
                            try {
                                try {
                                    v10 = v7.cnD();
                                    if (var4_3 == null) break block48;
                                    if (v10 != null) break block49;
                                }
                                catch (MatchException v11) {
                                    throw fS.aXh(v11);
                                }
                                if (var4_3 != null) continue;
                            }
                            catch (MatchException v12) {
                                throw fS.aXh(v12);
                            }
                        }
                        v10 = var1_1;
                    }
                    try {
                        v13 = v10.contains(var7_6.cnD());
                        if (var4_3 == null) break block50;
                        if (v13) {
                        }
                        ** GOTO lbl87
                    }
                    catch (MatchException v14) {
                        throw fS.aXh(v14);
                    }
                    v13 = true;
                }
                var5_4 = v13;
                try {
                    if (var4_3 != null) break;
lbl87:
                    // 2 sources

                    if (var4_3 != null) continue;
                    break;
                }
                catch (MatchException v15) {
                    throw fS.aXh(v15);
                }
            }
            try {
                if (!var5_4) {
                    return var1_1;
                }
            }
            catch (MatchException v16) {
                throw fS.aXh(v16);
            }
        }
        var6_5 = this.aWY().Us();
        for (mE var8_7 : rD.dmc().ddE()) {
            block55: {
                block54: {
                    block52: {
                        block53: {
                            block51: {
                                try {
                                    v17 = var8_7;
                                    if (var4_3 == null) break block51;
                                    if (v17 == null) continue;
                                }
                                catch (MatchException v18) {
                                    throw fS.aXh(v18);
                                }
                                v17 = var8_7;
                            }
                            try {
                                try {
                                    v19 = v17.cnD();
                                    if (var4_3 == null) break block52;
                                    if (v19 != null) break block53;
                                }
                                catch (MatchException v20) {
                                    throw fS.aXh(v20);
                                }
                                if (var4_3 != null) continue;
                            }
                            catch (MatchException v21) {
                                throw fS.aXh(v21);
                            }
                        }
                        v19 = var1_1;
                    }
                    try {
                        try {
                            v22 = var8_7.cnD();
                            if (var4_3 == null) break block54;
                            if (!v19.contains(v22)) break block55;
                        }
                        catch (MatchException v23) {
                            throw fS.aXh(v23);
                        }
                        v19 = var1_1;
                        v22 = var8_7.cnD();
                    }
                    catch (MatchException v24) {
                        throw fS.aXh(v24);
                    }
                }
                var1_1 = v19.replace(v22, var6_5);
            }
            if (var4_3 != null) continue;
        }
        return var1_1;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public String aWP(String string) {
        String string2;
        String string3;
        block17: {
            block18: {
                boolean bl2;
                int[] nArray;
                block16: {
                    block15: {
                        long l2 = IRkCy ^ 0x6288F2F24A45L;
                        nArray = fX.aYu();
                        try {
                            try {
                                bl2 = this.RliRe;
                                if (nArray == null) break block15;
                                if (!bl2) return string;
                            }
                            catch (MatchException matchException) {
                                throw fS.aXh(matchException);
                            }
                            bl2 = this.JniNV.TC();
                        }
                        catch (MatchException matchException) {
                            throw fS.aXh(matchException);
                        }
                    }
                    try {
                        try {
                            if (nArray == null) break block16;
                            if (!bl2) return string;
                        }
                        catch (MatchException matchException) {
                            throw fS.aXh(matchException);
                        }
                        bl2 = qu.cmARD.get();
                    }
                    catch (MatchException matchException) {
                        throw fS.aXh(matchException);
                    }
                }
                try {
                    if (bl2) {
                        return string;
                    }
                }
                catch (MatchException matchException) {
                    throw fS.aXh(matchException);
                }
                string3 = rD.dlmvG.getSession().getUsername();
                try {
                    try {
                        string2 = string;
                        if (nArray == null) break block17;
                        if (string2.contains(string3)) break block18;
                        return string;
                    }
                    catch (MatchException matchException) {
                        throw fS.aXh(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw fS.aXh(matchException);
                }
            }
            string2 = this.aWX().Us();
        }
        String string4 = string2;
        return string.replace(string3, string4);
    }

    private static CallSite aXl(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/fS" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static /* synthetic */ Optional aXb(BiConsumer biConsumer, Style style, String string) {
        biConsumer.accept(style, string);
        return Optional.empty();
    }

    public cv aWT() {
        return this.lHFev;
    }

    public cw aWU() {
        return this.JniNV;
    }

    public cw aWV() {
        return this.serPq;
    }

    private static String aXi(byte[] byArray) {
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

    private static int aXn(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = fS.aXm(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite aXo(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/fS" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cw aWW() {
        return this.VNukw;
    }

    private static String aXj(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5488;
        if (wzHAy[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])dwVZR.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    dwVZR.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/fS", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = bgliR[n3].getBytes("ISO-8859-1");
            fS.wzHAy[n3] = fS.aXi(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return wzHAy[n3];
    }

    private static MatchException aXh(MatchException matchException) {
        return matchException;
    }

    public cy aWX() {
        return this.nVujd;
    }

    private static int aXm(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3DC5;
        if (mEaUS[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = ZTpYF[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])KvXEV.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    KvXEV.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/fS", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            fS.mEaUS[n3] = n4;
        }
        return mEaUS[n3];
    }

    private static /* synthetic */ void aXe(List list, MutableText mutableText, int n2) {
        long l2 = IRkCy ^ 0x41265F289DDBL;
        int n3 = n2;
        int[] nArray = fX.aYu();
        while (n3 > 0) {
            block10: {
                List list2;
                block9: {
                    try {
                        try {
                            list2 = list;
                            if (nArray == null) break block9;
                            if (list2.isEmpty()) break;
                        }
                        catch (MatchException matchException) {
                            throw fS.aXh(matchException);
                        }
                        list2 = list.getFirst();
                    }
                    catch (MatchException matchException) {
                        throw fS.aXh(matchException);
                    }
                }
                fS$sV fS$sV = (fS$sV)((Object)list2);
                int n4 = Math.min(n3, fS$sV.dpc());
                mutableText.append((Text)Text.literal((String)fS$sV.sQGRe.substring(0, n4)).setStyle(fS$sV.BmGPX));
                fS$sV.sQGRe.delete(0, n4);
                n3 -= n4;
                try {
                    fS$sV fS$sV2;
                    try {
                        fS$sV2 = fS$sV;
                        if (nArray == null || fS$sV2.dpc() != 0) break block10;
                    }
                    catch (MatchException matchException) {
                        throw fS.aXh(matchException);
                    }
                    fS$sV2 = list.removeFirst();
                }
                catch (MatchException matchException) {
                    throw fS.aXh(matchException);
                }
            }
            if (nArray != null) continue;
        }
    }

    public Comparator<ScoreboardEntry> aXa() {
        return this.oHxpG;
    }

    private static /* synthetic */ void aXd(List list, int n2) {
        long l2 = IRkCy ^ 0x50839169DE01L;
        int n3 = n2;
        int[] nArray = fX.aYu();
        while (n3 > 0) {
            block10: {
                List list2;
                block9: {
                    try {
                        try {
                            list2 = list;
                            if (nArray == null) break block9;
                            if (list2.isEmpty()) break;
                        }
                        catch (MatchException matchException) {
                            throw fS.aXh(matchException);
                        }
                        list2 = list.getFirst();
                    }
                    catch (MatchException matchException) {
                        throw fS.aXh(matchException);
                    }
                }
                fS$sV fS$sV = (fS$sV)((Object)list2);
                int n4 = Math.min(n3, fS$sV.dpc());
                fS$sV.sQGRe.delete(0, n4);
                n3 -= n4;
                try {
                    fS$sV fS$sV2;
                    try {
                        fS$sV2 = fS$sV;
                        if (nArray == null || fS$sV2.dpc() != 0) break block10;
                    }
                    catch (MatchException matchException) {
                        throw fS.aXh(matchException);
                    }
                    fS$sV2 = list.removeFirst();
                }
                catch (MatchException matchException) {
                    throw fS.aXh(matchException);
                }
            }
            if (nArray != null) continue;
        }
    }

    private static /* synthetic */ Style aXc(List list, int n2) {
        long l2 = IRkCy ^ 0x244910F2700AL;
        int n3 = 0;
        Iterator iterator = list.iterator();
        int[] nArray = fX.aYu();
        while (iterator.hasNext()) {
            int n4;
            int n5;
            block5: {
                fS$sV fS$sV;
                block6: {
                    fS$sV = (fS$sV)iterator.next();
                    try {
                        try {
                            n5 = n2;
                            n4 = n3 + fS$sV.dpc();
                            if (nArray == null) break block5;
                            if (n5 >= n4) break block6;
                        }
                        catch (MatchException matchException) {
                            throw fS.aXh(matchException);
                        }
                        return fS$sV.BmGPX;
                    }
                    catch (MatchException matchException) {
                        throw fS.aXh(matchException);
                    }
                }
                n5 = n3;
                n4 = fS$sV.dpc();
            }
            n3 = n5 + n4;
            if (nArray != null) continue;
        }
        return Style.EMPTY;
    }

    private static Object aXk(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = fS.aXj(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public cy aWZ() {
        return this.IKiTs;
    }

    public cy aWY() {
        return this.MSZPL;
    }

    /*
     * Unable to fully structure code
     */
    private static /* synthetic */ void aXf(List var0, StringBuilder var1_1, StringBuilder var2_2, Style var3_3, String var4_4) {
        block22: {
            block20: {
                block19: {
                    block17: {
                        block18: {
                            block16: {
                                block15: {
                                    var5_5 = fS.IRkCy ^ 116589964691883L;
                                    var7_6 = fX.aYu();
                                    try {
                                        v0 = var4_4;
                                        if (var7_6 == null) break block15;
                                        if (v0 == null) break block16;
                                    }
                                    catch (MatchException v1) {
                                        throw fS.aXh(v1);
                                    }
                                    v0 = var4_4;
                                }
                                try {
                                    v2 = v0.isEmpty();
                                    if (var7_6 == null) break block17;
                                    if (!v2) break block18;
                                }
                                catch (MatchException v3) {
                                    throw fS.aXh(v3);
                                }
                            }
                            return;
                        }
                        v2 = var0.isEmpty();
                    }
                    try {
                        try {
                            try {
                                if (var7_6 == null) break block19;
                                if (!v2) {
                                }
                                ** GOTO lbl52
                            }
                            catch (MatchException v4) {
                                throw fS.aXh(v4);
                            }
                            v5 = (fS$sV)var0.getLast();
                            if (var7_6 == null) break block20;
                        }
                        catch (MatchException v6) {
                            throw fS.aXh(v6);
                        }
                        v2 = v5.BmGPX.equals((Object)var3_3);
                    }
                    catch (MatchException v7) {
                        throw fS.aXh(v7);
                    }
                }
                try {
                    block21: {
                        try {
                            if (!v2) break block21;
                            ((fS$sV)var0.getLast()).sQGRe.append(var4_4);
                            if (var7_6 != null) break block22;
                        }
                        catch (MatchException v8) {
                            throw fS.aXh(v8);
                        }
                    }
                    v5 = new fS$sV(var3_3);
                }
                catch (MatchException v9) {
                    throw fS.aXh(v9);
                }
            }
            var8_7 = v5;
            var8_7.sQGRe.append(var4_4);
            var0.add(var8_7);
        }
        var1_1.append(var4_4);
        var2_2.append(ru.djG(var4_4));
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(fS.class, "aXk", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(fS.class, "aXn", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

