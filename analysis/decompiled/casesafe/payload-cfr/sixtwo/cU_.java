/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1657
 *  net.minecraft.class_243
 *  net.minecraft.class_4587
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1657;
import net.minecraft.class_243;
import net.minecraft.class_4587;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cU$sp;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.jJ;
import sixtwo.jk;
import sixtwo.kp;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.qQ;
import sixtwo.rD;

public class cU
extends gg {
    private final cv BauFa;
    private final cw PhtFx;
    private final cw BcQvA;
    private final cw QwJkI;
    private final cw QoAWo;
    private final cG gxark;
    private final cC GctAm;
    private final cC LHxFV;
    private final Map<class_1657, List<cU$sp>> ERVmZ;
    private static final long CcSNg;
    private static final long[] bhpzz;
    private static final Integer[] XmDUC;
    private static final Map JJzQs;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cU() {
        long l = CcSNg ^ 0x7AB88CBB44EEL;
        super(gf.aZL((int)cU.ZJ("t", (int)18625, (long)(0x439911165DCB2155L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[cU.ZJ("t", (int)9343, (long)(0xD2BF09367144DC4L ^ l))];
        nArray[0] = (int)cU.ZJ("t", (int)31156, (long)(0xFF5392E77F9006L ^ l));
        nArray[1] = (int)cU.ZJ("t", (int)32466, (long)(0x3D500B6381F21779L ^ l));
        nArray[2] = (int)cU.ZJ("t", (int)1791, (long)(0xAE83E2FBA66F43L ^ l));
        nArray[3] = (int)cU.ZJ("t", (int)8465, (long)(0x69B31634E3F048B8L ^ l));
        nArray[4] = (int)cU.ZJ("t", (int)25553, (long)(0x7090115F86C70A75L ^ l));
        nArray[5] = (int)cU.ZJ("t", (int)13201, (long)(0x64D6236E411E5A32L ^ l));
        nArray[cU.ZJ("t", (int)21549, (long)(0x293D7AF248963D98L ^ l))] = (int)cU.ZJ("t", (int)25475, (long)(0x46E12A35D1870A3CL ^ l));
        nArray[cU.ZJ("t", (int)29005, (long)(0x28581BF6824498E0L ^ l))] = (int)cU.ZJ("t", (int)16097, (long)(0x7FEA9246562D574EL ^ l));
        this.BauFa = new cv(this, mr.clS(nArray));
        int[] nArray2 = new int[cU.ZJ("t", (int)6881, (long)(0x64AEC9B6861B7360L ^ l))];
        nArray2[0] = (int)cU.ZJ("t", (int)12755, (long)(0x6E59DAABD28AD86DL ^ l));
        nArray2[1] = (int)cU.ZJ("t", (int)12715, (long)(0x2D92E4F67FE5D80DL ^ l));
        nArray2[2] = (int)cU.ZJ("t", (int)945, (long)(0x7BC62859A756EA36L ^ l));
        nArray2[3] = (int)cU.ZJ("t", (int)29487, (long)(0x60316F1EBB2A1AB5L ^ l));
        nArray2[4] = (int)cU.ZJ("t", (int)8641, (long)(0x1703763BFA6C854L ^ l));
        nArray2[5] = (int)cU.ZJ("t", (int)19406, (long)(0x71FE0E1B242A224BL ^ l));
        nArray2[cU.ZJ("t", (int)11999, (long)(0x21A6ADDB9894475CL ^ l))] = (int)cU.ZJ("t", (int)25249, (long)(0x2F7C0696D6888B27L ^ l));
        this.PhtFx = new cw(this.BauFa, mr.clS(nArray2));
        int[] nArray3 = new int[cU.ZJ("t", (int)6881, (long)(0x64AEC9B6861B7360L ^ l))];
        nArray3[0] = (int)cU.ZJ("t", (int)26631, (long)(0x4A19C34F85980183L ^ l));
        nArray3[1] = (int)cU.ZJ("t", (int)19406, (long)(0x71FE0E1B242A224BL ^ l));
        nArray3[2] = (int)cU.ZJ("t", (int)25899, (long)(0x4E5A70FA3FBE0C8EL ^ l));
        nArray3[3] = (int)cU.ZJ("t", (int)3589, (long)(0x2C5FEA6F602E794L ^ l));
        nArray3[4] = (int)cU.ZJ("t", (int)22905, (long)(0x38C6B248429230C3L ^ l));
        nArray3[5] = (int)cU.ZJ("t", (int)10310, (long)(0x5EFCA3F04AAE41E7L ^ l));
        nArray3[cU.ZJ("t", (int)11999, (long)(0x21A6ADDB9894475CL ^ l))] = (int)cU.ZJ("t", (int)7526, (long)(0x7516B4390E51F4F0L ^ l));
        this.BcQvA = new cw(this.BauFa, mr.clS(nArray3));
        int[] nArray4 = new int[cU.ZJ("t", (int)8001, (long)(0x7FFF179DF718F6D1L ^ l))];
        nArray4[0] = (int)cU.ZJ("t", (int)27453, (long)(0x6CBC3196D0388297L ^ l));
        nArray4[1] = (int)cU.ZJ("t", (int)25728, (long)(0xC12496F37E8D27L ^ l));
        nArray4[2] = (int)cU.ZJ("t", (int)1057, (long)(0x7A58AC6B3550ED8FL ^ l));
        nArray4[3] = (int)cU.ZJ("t", (int)29551, (long)(0x2F12C39748569AF3L ^ l));
        nArray4[4] = (int)cU.ZJ("t", (int)7526, (long)(0x7516B4390E51F4F0L ^ l));
        nArray4[5] = (int)cU.ZJ("t", (int)29551, (long)(0x2F12C39748569AF3L ^ l));
        nArray4[cU.ZJ("t", (int)11999, (long)(0x21A6ADDB9894475CL ^ l))] = (int)cU.ZJ("t", (int)13355, (long)(0x18A2F7FAE1F65D9AL ^ l));
        nArray4[cU.ZJ("t", (int)6881, (long)(0x64AEC9B6861B7360L ^ l))] = (int)cU.ZJ("t", (int)13868, (long)(0x38BFAE272A10DF9CL ^ l));
        nArray4[cU.ZJ("t", (int)2647, (long)(0x55B879AA919863E1L ^ l))] = (int)cU.ZJ("t", (int)3589, (long)(0x2C5FEA6F602E794L ^ l));
        nArray4[cU.ZJ("t", (int)12140, (long)(0x5847EB2170B2C6EEL ^ l))] = (int)cU.ZJ("t", (int)7526, (long)(0x7516B4390E51F4F0L ^ l));
        this.QwJkI = new cw(this.BauFa, mr.clS(nArray4));
        this.QoAWo = new cw(this.BauFa, mr.clS(new int[]{(int)cU.ZJ("t", (int)5117, (long)(0x290FC42F6159FA55L ^ l)), (int)cU.ZJ("t", (int)3589, (long)(0x2C5FEA6F602E794L ^ l)), (int)cU.ZJ("t", (int)13868, (long)(0x38BFAE272A10DF9CL ^ l)), (int)cU.ZJ("t", (int)10470, (long)(0x7CCC044F6355C146L ^ l))})).Tz();
        this.gxark = new cG(this, mr.clS(new int[]{(int)cU.ZJ("t", (int)11344, (long)(0x5AB9C84EA56B45E4L ^ l)), (int)cU.ZJ("t", (int)25475, (long)(0x46E12A35D1870A3CL ^ l)), (int)cU.ZJ("t", (int)13868, (long)(0x38BFAE272A10DF9CL ^ l)), (int)cU.ZJ("t", (int)25475, (long)(0x46E12A35D1870A3CL ^ l)), (int)cU.ZJ("t", (int)19406, (long)(0x71FE0E1B242A224BL ^ l))})).Uf(rD.dlM().bjG().bis());
        int[] nArray5 = new int[cU.ZJ("t", (int)11999, (long)(0x21A6ADDB9894475CL ^ l))];
        nArray5[0] = (int)cU.ZJ("t", (int)13241, (long)(0x6BB0960FBC435A04L ^ l));
        nArray5[1] = (int)cU.ZJ("t", (int)3589, (long)(0x2C5FEA6F602E794L ^ l));
        nArray5[2] = (int)cU.ZJ("t", (int)25728, (long)(0xC12496F37E8D27L ^ l));
        nArray5[3] = (int)cU.ZJ("t", (int)8592, (long)(0x515AAC055A6FC80DL ^ l));
        nArray5[4] = (int)cU.ZJ("t", (int)2473, (long)(0x3BC7FC8A9C4FE031L ^ l));
        nArray5[5] = (int)cU.ZJ("t", (int)31533, (long)(0xF9375F8150D92B6L ^ l));
        this.GctAm = new cC(this, mr.clS(nArray5)).Vy(0.01).Vw(2.0).Vx(4.0).VA(3.0);
        int[] nArray6 = new int[cU.ZJ("t", (int)5192, (long)(0x5AE4F241511EFDEAL ^ l))];
        nArray6[0] = (int)cU.ZJ("t", (int)8237, (long)(0x7BB3A95B0C55499AL ^ l));
        nArray6[1] = (int)cU.ZJ("t", (int)19406, (long)(0x71FE0E1B242A224BL ^ l));
        nArray6[2] = (int)cU.ZJ("t", (int)27245, (long)(0x295E87C94FBF83FFL ^ l));
        nArray6[3] = (int)cU.ZJ("t", (int)359, (long)(0x74CDD8725D72E8DEL ^ l));
        nArray6[4] = (int)cU.ZJ("t", (int)29551, (long)(0x2F12C39748569AF3L ^ l));
        nArray6[5] = (int)cU.ZJ("t", (int)3589, (long)(0x2C5FEA6F602E794L ^ l));
        nArray6[cU.ZJ("t", (int)11999, (long)(0x21A6ADDB9894475CL ^ l))] = (int)cU.ZJ("t", (int)25728, (long)(0xC12496F37E8D27L ^ l));
        nArray6[cU.ZJ("t", (int)6881, (long)(0x64AEC9B6861B7360L ^ l))] = (int)cU.ZJ("t", (int)25903, (long)(0x44EA757D0CF8CB8L ^ l));
        nArray6[cU.ZJ("t", (int)2647, (long)(0x55B879AA919863E1L ^ l))] = (int)cU.ZJ("t", (int)25103, (long)(0x7F7576E5D2418B9CL ^ l));
        nArray6[cU.ZJ("t", (int)5678, (long)(0x4005F0104D8A7F9DL ^ l))] = (int)cU.ZJ("t", (int)5117, (long)(0x290FC42F6159FA55L ^ l));
        nArray6[cU.ZJ("t", (int)2454, (long)(0x6DC59F8CBACBE008L ^ l))] = (int)cU.ZJ("t", (int)31857, (long)(0x55615D41546515DDL ^ l));
        nArray6[cU.ZJ("t", (int)17546, (long)(0x1A8F36062DD8AD13L ^ l))] = (int)cU.ZJ("t", (int)3589, (long)(0x2C5FEA6F602E794L ^ l));
        nArray6[cU.ZJ("t", (int)11815, (long)(0x7FD0ACFAE64A479FL ^ l))] = (int)cU.ZJ("t", (int)3589, (long)(0x2C5FEA6F602E794L ^ l));
        nArray6[cU.ZJ("t", (int)29957, (long)(0x74DB609376111C9AL ^ l))] = (int)cU.ZJ("t", (int)359, (long)(0x74CDD8725D72E8DEL ^ l));
        this.LHxFV = new cC(this, mr.clS(nArray6)).Vy(1.0).Vw(1.0).Vx(10.0).VA(5.0);
        this.ERVmZ = new HashMap<class_1657, List<cU$sp>>();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cU.CcSNg = gb.aYR(-7573313126502065491L, 2677294498807651305L, MethodHandles.lookup().lookupClass()).a(154380809325564L);
                cU.JJzQs = new HashMap<K, V>(13);
                var0 = cU.CcSNg ^ 136742376114165L;
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
                var8_3 = new long[56];
                var5_4 = 0;
                var6_5 = "uI.Z\u00f4\u00f9\u0083:\u00f8\u0012\u00f2\u00ea\u0001\u00dc\u0094\u00b2\u00f9\u00c8\u00da\u00d5\u009f/\u001aS\u00dd\u00a0\u008cy\u00c6&\u001c~3O.(\u009d\u00c1\u00ca\u00b2\u00e2\u0081\u0084\u00be\u00e5\u00eeq\u00d1\u00d9\u0013.^\u0087\u001f\u00f5\u00c9\u009f\u00bc\u00ad}\u00c3\u001a\u000b)o\u001c\u00a5\u000f\u00f4\u00f0\u0089\u008c<\u00bbAi\u0098j>\tCjH\u00f9V\"\u001f)\u00ecb\u00e8R0S$,\\\u00dc{R\u0007\u0019\u00ea-s\u00d7\u00b3<\u00d9\u00be\u0017\u00d4\u0014\u00a7[\u00d4\u009aZ\u00ff\"\u00d6\u009b\u00fbH\u00f9\u00ba\u00b8\u00c6&a\u001a\u00b7\u00efc\u00b3uC\u00db+k?\u00f1\u0088Wj,\u00cc\u00a6\u0010\u00f5\u00c5n\u00ed\u0080\u0089\u00e1\u0093\u00e6\u00c2-\u001b\u0010\u00b2r\u009d\u0080\u0092\u0081UW\u00c0.\u00a6r\u00f4\u00b3\t\u00bei-\u00adp\u00ce\u00d1\u001f\u000f\u0086q:kRk\u0013\u008blE\u00c9`d\u000b\u00cd\t\u0003\u00d0\u00cf\u00fc}\u00ffR\u0086'BT`\u0098\u009f\u00c4\u00a1']\u00c9\u00c7s\u00bf\u008a3\u00d0\u00b6\u0099\u0098\u0081\f\u0019\u00f1o\u0004T[FQ\u00a0_\u00f1\u0091\u00d9\u001b\u009a\u0091\u00e9k\u00a4P4\u00f7\u00dd\u009d\u00fa\u00ff[\u00f3\u0011\u00c8\u0096~O\u0083<\u00bb\u00ae\u00ac\u00fc\u00f6f\u0085\u00a1\u00e48\u00d4\u00b0\u00d8\u001d\u00cf\u00f1\u0098Ih\u00e5\u00ae\u00ecA\u0014\u00fc\u0007\u0017j\u00d1\u00038/\u0080\u0011\u0016$\u00ee\u00ce\u00b0J\u00dd\u00bc\u00e0N\u00fc\u00ae\u0094\u00deA\u00b6\u00df\u00b1\u00c9~\u0012\u00f5y\u008d1?\u0002\u0092\u00f5*\u00b9\u0019=ey\u00e2\u00f8\u0087\u00e6r\u00ee\u00ae\u00fe\u00bd\u00a0\u001f\u00e0\u0016BT\u0087*\u00bf\u00cd\"\u000f\u00bb\u0016vl\u009c\u00bc/\u0099\u00cf\u00e9\u00d7\u00f6\u0000h\u00a4\u00b9sJC-\u00d1F\u008e\u00a1\u00d2]\u00f0\b\u001f\u00adC\u008b\u00f5z\u009b \u0007t\u00cb\u000eJ\u0012%\u00ec\u00a5\u008b\u00e3h{\u0012h\u00e1\u00ce\u00bc\u0080\"\u00b3.\u0086\u00c3p\u00ab\"G\u0005*\u0006\u009e\u0092s8\f\u0019_\u00c7";
                var7_6 = "uI.Z\u00f4\u00f9\u0083:\u00f8\u0012\u00f2\u00ea\u0001\u00dc\u0094\u00b2\u00f9\u00c8\u00da\u00d5\u009f/\u001aS\u00dd\u00a0\u008cy\u00c6&\u001c~3O.(\u009d\u00c1\u00ca\u00b2\u00e2\u0081\u0084\u00be\u00e5\u00eeq\u00d1\u00d9\u0013.^\u0087\u001f\u00f5\u00c9\u009f\u00bc\u00ad}\u00c3\u001a\u000b)o\u001c\u00a5\u000f\u00f4\u00f0\u0089\u008c<\u00bbAi\u0098j>\tCjH\u00f9V\"\u001f)\u00ecb\u00e8R0S$,\\\u00dc{R\u0007\u0019\u00ea-s\u00d7\u00b3<\u00d9\u00be\u0017\u00d4\u0014\u00a7[\u00d4\u009aZ\u00ff\"\u00d6\u009b\u00fbH\u00f9\u00ba\u00b8\u00c6&a\u001a\u00b7\u00efc\u00b3uC\u00db+k?\u00f1\u0088Wj,\u00cc\u00a6\u0010\u00f5\u00c5n\u00ed\u0080\u0089\u00e1\u0093\u00e6\u00c2-\u001b\u0010\u00b2r\u009d\u0080\u0092\u0081UW\u00c0.\u00a6r\u00f4\u00b3\t\u00bei-\u00adp\u00ce\u00d1\u001f\u000f\u0086q:kRk\u0013\u008blE\u00c9`d\u000b\u00cd\t\u0003\u00d0\u00cf\u00fc}\u00ffR\u0086'BT`\u0098\u009f\u00c4\u00a1']\u00c9\u00c7s\u00bf\u008a3\u00d0\u00b6\u0099\u0098\u0081\f\u0019\u00f1o\u0004T[FQ\u00a0_\u00f1\u0091\u00d9\u001b\u009a\u0091\u00e9k\u00a4P4\u00f7\u00dd\u009d\u00fa\u00ff[\u00f3\u0011\u00c8\u0096~O\u0083<\u00bb\u00ae\u00ac\u00fc\u00f6f\u0085\u00a1\u00e48\u00d4\u00b0\u00d8\u001d\u00cf\u00f1\u0098Ih\u00e5\u00ae\u00ecA\u0014\u00fc\u0007\u0017j\u00d1\u00038/\u0080\u0011\u0016$\u00ee\u00ce\u00b0J\u00dd\u00bc\u00e0N\u00fc\u00ae\u0094\u00deA\u00b6\u00df\u00b1\u00c9~\u0012\u00f5y\u008d1?\u0002\u0092\u00f5*\u00b9\u0019=ey\u00e2\u00f8\u0087\u00e6r\u00ee\u00ae\u00fe\u00bd\u00a0\u001f\u00e0\u0016BT\u0087*\u00bf\u00cd\"\u000f\u00bb\u0016vl\u009c\u00bc/\u0099\u00cf\u00e9\u00d7\u00f6\u0000h\u00a4\u00b9sJC-\u00d1F\u008e\u00a1\u00d2]\u00f0\b\u001f\u00adC\u008b\u00f5z\u009b \u0007t\u00cb\u000eJ\u0012%\u00ec\u00a5\u008b\u00e3h{\u0012h\u00e1\u00ce\u00bc\u0080\"\u00b3.\u0086\u00c3p\u00ab\"G\u0005*\u0006\u009e\u0092s8\f\u0019_\u00c7".length();
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
lbl26:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "s_O.\u0003\u00c8%)U\u00a8\u009c\u00f1\u00a3;q\u008e";
                    var7_6 = "s_O.\u0003\u00c8%)U\u00a8\u009c\u00f1\u00a3;q\u008e".length();
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
lbl39:
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
lbl52:
                // 1 sources

                ** continue;
            }
        }
        cU.bhpzz = var8_3;
        cU.XmDUC = new Integer[56];
    }

    private static CallSite ZJ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cU" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @hG
    public void Zz(go.sX sX2) {
        block69: {
            long l = CcSNg ^ 0x4641F107D712L;
            iS[] iSArray = dh.afl();
            try {
                if (!this.bab()) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw cU.ZG(matchException);
            }
            float f = sX2.bbi();
            long l2 = System.currentTimeMillis();
            qQ qQ2 = rD.dmc();
            class_4587 class_45872 = sX2.bbh();
            class_45872.method_22903();
            jI.bIr(class_45872);
            for (class_1657 class_16573 : rD.dlmvG.field_1687.method_18456()) {
                int n;
                int n2;
                int n3;
                int n4;
                List list;
                block93: {
                    block91: {
                        block92: {
                            block89: {
                                block90: {
                                    int n5;
                                    int n6;
                                    block80: {
                                        int n7;
                                        long l3;
                                        block79: {
                                            block77: {
                                                Object object;
                                                block75: {
                                                    block76: {
                                                        boolean bl;
                                                        block73: {
                                                            block74: {
                                                                block71: {
                                                                    block72: {
                                                                        block70: {
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            if (iSArray != null) break block69;
                                                                                            if (class_16573 != rD.dlmvG.field_1724) break block70;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw cU.ZG(matchException);
                                                                                        }
                                                                                        bl = this.QoAWo.TC();
                                                                                        if (iSArray != null) break block71;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw cU.ZG(matchException);
                                                                                    }
                                                                                    if (bl) break block72;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw cU.ZG(matchException);
                                                                                }
                                                                                if (iSArray == null) continue;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw cU.ZG(matchException);
                                                                            }
                                                                        }
                                                                        try {
                                                                            try {
                                                                                bl = this.PhtFx.TC();
                                                                                if (iSArray != null) break block71;
                                                                                if (bl) break block72;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw cU.ZG(matchException);
                                                                            }
                                                                            if (iSArray == null) continue;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw cU.ZG(matchException);
                                                                        }
                                                                    }
                                                                    bl = this.BcQvA.TC();
                                                                }
                                                                try {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                if (iSArray != null) break block73;
                                                                                if (bl) break block74;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw cU.ZG(matchException);
                                                                            }
                                                                            bl = qQ2.ddy(class_16573);
                                                                            if (iSArray != null) break block73;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw cU.ZG(matchException);
                                                                        }
                                                                        if (!bl) break block74;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw cU.ZG(matchException);
                                                                    }
                                                                    if (iSArray == null) continue;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cU.ZG(matchException);
                                                                }
                                                            }
                                                            try {
                                                                object = this.QwJkI;
                                                                if (iSArray != null) break block75;
                                                                bl = ((cw)object).TC();
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cU.ZG(matchException);
                                                            }
                                                        }
                                                        try {
                                                            try {
                                                                try {
                                                                    if (bl) break block76;
                                                                    object = class_16573;
                                                                    if (iSArray != null) break block75;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cU.ZG(matchException);
                                                                }
                                                                if (!object.method_5767()) break block76;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cU.ZG(matchException);
                                                            }
                                                            if (iSArray == null) continue;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cU.ZG(matchException);
                                                        }
                                                    }
                                                    object = this.ERVmZ.computeIfAbsent(class_16573, class_16572 -> {
                                                        long l = CcSNg ^ 0x4A7EBE73440L;
                                                        return new ArrayList((int)cU.ZJ("t", (int)32766, (long)(0x22A4315741A6E6D0L ^ l)));
                                                    });
                                                }
                                                list = (List)object;
                                                l3 = (long)(125.0f * this.GctAm.VB());
                                                class_243 class_2432 = class_16573.method_30950(f);
                                                int n8 = list.size();
                                                try {
                                                    int n9;
                                                    block78: {
                                                        try {
                                                            try {
                                                                try {
                                                                    n9 = n8;
                                                                    if (iSArray != null) break block77;
                                                                    if (n9 == 0) break block78;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cU.ZG(matchException);
                                                                }
                                                                n7 = ((cU$sp)list.get((int)(n8 - 1))).WyFYf.equals((Object)class_2432);
                                                                if (iSArray != null) break block79;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cU.ZG(matchException);
                                                            }
                                                            if (n7 != 0) break block77;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cU.ZG(matchException);
                                                        }
                                                    }
                                                    n9 = list.add(new cU$sp(class_2432, l2)) ? 1 : 0;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cU.ZG(matchException);
                                                }
                                            }
                                            n7 = 0;
                                        }
                                        n6 = n7;
                                        n4 = -1;
                                        n3 = -1;
                                        n5 = list.size();
                                        for (int i = 0; i < n5; ++i) {
                                            block86: {
                                                int n10;
                                                block87: {
                                                    block88: {
                                                        block85: {
                                                            block83: {
                                                                cU$sp cU$sp;
                                                                block84: {
                                                                    block81: {
                                                                        cU$sp = (cU$sp)list.get(i);
                                                                        try {
                                                                            block82: {
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            long l4 = l2 - cU$sp.TJJOB - l3;
                                                                                            n2 = l4 == 0L ? 0 : (l4 < 0L ? -1 : 1);
                                                                                            if (iSArray != null) break block80;
                                                                                            if (iSArray != null) break block81;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw cU.ZG(matchException);
                                                                                        }
                                                                                        if (n2 <= 0) break block82;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw cU.ZG(matchException);
                                                                                    }
                                                                                    if (iSArray == null) continue;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw cU.ZG(matchException);
                                                                                }
                                                                            }
                                                                            n10 = n6;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw cU.ZG(matchException);
                                                                        }
                                                                    }
                                                                    try {
                                                                        try {
                                                                            if (iSArray != null) break block83;
                                                                            if (n10 == i) break block84;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw cU.ZG(matchException);
                                                                        }
                                                                        list.set(n6, cU$sp);
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw cU.ZG(matchException);
                                                                    }
                                                                }
                                                                n10 = jJ.bIA(cU$sp.WyFYf) ? 1 : 0;
                                                            }
                                                            try {
                                                                if (iSArray != null) break block85;
                                                                if (n10 == 0) break block86;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cU.ZG(matchException);
                                                            }
                                                            n10 = n4;
                                                        }
                                                        try {
                                                            if (iSArray != null) break block87;
                                                            if (n10 != -1) break block88;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cU.ZG(matchException);
                                                        }
                                                        n4 = n6;
                                                    }
                                                    n10 = n6;
                                                }
                                                n3 = n10;
                                            }
                                            ++n6;
                                            if (iSArray == null) continue;
                                        }
                                        n2 = n6;
                                    }
                                    try {
                                        try {
                                            n = n5;
                                            if (iSArray != null) break block89;
                                            if (n2 >= n) break block90;
                                        }
                                        catch (MatchException matchException) {
                                            throw cU.ZG(matchException);
                                        }
                                        list.subList(n6, n5).clear();
                                    }
                                    catch (MatchException matchException) {
                                        throw cU.ZG(matchException);
                                    }
                                }
                                int n = list.size();
                                n = 2;
                            }
                            try {
                                try {
                                    if (iSArray != null) break block91;
                                    if (n2 >= n) break block92;
                                }
                                catch (MatchException matchException) {
                                    throw cU.ZG(matchException);
                                }
                                if (iSArray == null) continue;
                            }
                            catch (MatchException matchException) {
                                throw cU.ZG(matchException);
                            }
                        }
                        int n = n4;
                        n = -1;
                    }
                    try {
                        if (iSArray != null) break block93;
                        if (n2 == n) continue;
                    }
                    catch (MatchException matchException) {
                        throw cU.ZG(matchException);
                    }
                    int n = n3 - n4 + 1;
                    n = 2;
                }
                try {
                    if (n2 < n && iSArray == null) continue;
                }
                catch (MatchException matchException) {
                    throw cU.ZG(matchException);
                }
                this.ZA(class_45872, class_16573, list, n4, n3);
                if (iSArray == null) continue;
            }
            class_45872.method_22909();
        }
    }

    private void ZA(class_4587 class_45872, class_1657 class_16572, List<cU$sp> list, int n, int n4) {
        int n5;
        int n6;
        block21: {
            block22: {
                int n7;
                iS[] iSArray;
                block19: {
                    block20: {
                        block17: {
                            block18: {
                                int n8;
                                block16: {
                                    block15: {
                                        long l = CcSNg ^ 0x3616F5934618L;
                                        iSArray = dh.afl();
                                        try {
                                            try {
                                                if (class_16572 != rD.dlmvG.field_1724) break block15;
                                                n8 = rD.dlmvG.field_1690.method_31044().method_31034() ? 1 : 0;
                                                if (iSArray != null) break block16;
                                            }
                                            catch (MatchException matchException) {
                                                throw cU.ZG(matchException);
                                            }
                                            if (n8 == 0) break block15;
                                        }
                                        catch (MatchException matchException) {
                                            throw cU.ZG(matchException);
                                        }
                                        return;
                                    }
                                    n8 = list.size();
                                }
                                n7 = n8;
                                try {
                                    try {
                                        n6 = n7;
                                        if (iSArray != null) break block17;
                                        if (n6 >= 2) break block18;
                                    }
                                    catch (MatchException matchException) {
                                        throw cU.ZG(matchException);
                                    }
                                    return;
                                }
                                catch (MatchException matchException) {
                                    throw cU.ZG(matchException);
                                }
                            }
                            n6 = n;
                        }
                        try {
                            if (iSArray != null) break block19;
                            if (n6 >= 0) break block20;
                        }
                        catch (MatchException matchException) {
                            throw cU.ZG(matchException);
                        }
                        n = 0;
                    }
                    n6 = n4;
                }
                try {
                    n5 = n7;
                    if (iSArray != null) break block21;
                    if (n6 < n5) break block22;
                }
                catch (MatchException matchException) {
                    throw cU.ZG(matchException);
                }
                n4 = n7 - 1;
            }
            n6 = n4 - n;
            n5 = 1;
        }
        int n9 = n6 + n5;
        try {
            if (n9 < 2) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw cU.ZG(matchException);
        }
        List<class_243> list2 = list.stream().map(cU$sp -> cU$sp.WyFYf).toList();
        float f = class_16572.method_17682();
        int n10 = this.LHxFV.VC();
        mG mG2 = this.gxark.Wf();
        kp.bQA(class_45872, list2, n9, n, n4, f, (n2, n3) -> jk.bDn(n2, mG2, n10).cob((float)n2.intValue() / (float)n3.intValue() * 0.7f));
        kp.bQB(class_45872, list2, n9, n, n4, true, f, (n2, n3) -> {
            mG mG3 = jk.bDm(n2, mG2, n10);
            float f = Math.min((float)n2.intValue() / (float)n3.intValue() * 1.5f, 1.0f);
            return mG3.cob(f);
        });
        kp.bQB(class_45872, list2, n9, n, n4, false, f, (n2, n3) -> {
            mG mG3 = jk.bDm(n2, mG2, n10);
            float f = Math.min((float)n2.intValue() / (float)n3.intValue() * 1.5f, 1.0f);
            return mG3.cob(f);
        });
    }

    private static MatchException ZG(MatchException matchException) {
        return matchException;
    }

    private static int ZH(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x6FB3;
        if (XmDUC[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = bhpzz[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])JJzQs.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    JJzQs.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cU", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cU.XmDUC[n2] = n3;
        }
        return XmDUC[n2];
    }

    private static int ZI(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cU.ZH(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cU.class, "ZI", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
