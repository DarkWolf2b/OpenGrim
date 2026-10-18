/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1268
 *  net.minecraft.class_1297
 *  net.minecraft.class_1667
 *  net.minecraft.class_1753
 *  net.minecraft.class_1764
 *  net.minecraft.class_1771
 *  net.minecraft.class_1776
 *  net.minecraft.class_1779
 *  net.minecraft.class_1792
 *  net.minecraft.class_1803
 *  net.minecraft.class_1823
 *  net.minecraft.class_1828
 *  net.minecraft.class_1835
 *  net.minecraft.class_1887
 *  net.minecraft.class_1893
 *  net.minecraft.class_1937
 *  net.minecraft.class_238
 *  net.minecraft.class_243
 *  net.minecraft.class_3532
 *  net.minecraft.class_4587
 *  net.minecraft.class_5321
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
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1268;
import net.minecraft.class_1297;
import net.minecraft.class_1667;
import net.minecraft.class_1753;
import net.minecraft.class_1764;
import net.minecraft.class_1771;
import net.minecraft.class_1776;
import net.minecraft.class_1779;
import net.minecraft.class_1792;
import net.minecraft.class_1803;
import net.minecraft.class_1823;
import net.minecraft.class_1828;
import net.minecraft.class_1835;
import net.minecraft.class_1887;
import net.minecraft.class_1893;
import net.minecraft.class_1937;
import net.minecraft.class_238;
import net.minecraft.class_243;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_5321;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.iW;
import sixtwo.jh;
import sixtwo.me;
import sixtwo.mh;
import sixtwo.mr;
import sixtwo.rD;

public class cP
extends gg {
    private final cG TaCDX;
    private final cG rHwiT;
    private final cG QyPao;
    private final cJ ZVcly;
    private static final long rSiDa;
    private static final long[] zuzcl;
    private static final Integer[] Qajnw;
    private static final Map woehX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cP() {
        long l = rSiDa ^ 0x4B95F7084BA5L;
        super(gf.aZL((int)cP.YE("c", (int)17563, (long)(0x47D02634523D7A8DL ^ l)), false, gh.nOCvV));
        int[] nArray = new int[cP.YE("c", (int)27583, (long)(0xDD6AF683F3CD588L ^ l))];
        nArray[0] = (int)cP.YE("c", (int)25837, (long)(0x2A6A3CE4F5F95AD0L ^ l));
        nArray[1] = (int)cP.YE("c", (int)31313, (long)(0x6C0B54FDEB57C465L ^ l));
        nArray[2] = (int)cP.YE("c", (int)21148, (long)(0x764A03F7A0E4EC9EL ^ l));
        nArray[3] = (int)cP.YE("c", (int)7708, (long)(0x61319A4D049B2024L ^ l));
        nArray[4] = (int)cP.YE("c", (int)3090, (long)(0x31150B3A2F37B22EL ^ l));
        nArray[5] = (int)cP.YE("c", (int)9048, (long)(0x26DC244E3CEA1D4BL ^ l));
        nArray[cP.YE("c", (int)29079, (long)(0x7087C4F55A894FA5L ^ l))] = (int)cP.YE("c", (int)1440, (long)(0x7336819B58D0BB96L ^ l));
        nArray[cP.YE("c", (int)8146, (long)(0x71D08DB5B66E21EBL ^ l))] = (int)cP.YE("c", (int)20557, (long)(0x715D6FD46C29EE6AL ^ l));
        nArray[cP.YE("c", (int)6715, (long)(0x138A85D03792410L ^ l))] = (int)cP.YE("c", (int)2197, (long)(0x7CD3B0982FF336B0L ^ l));
        nArray[cP.YE("c", (int)3369, (long)(0x22241A45226D3304L ^ l))] = (int)cP.YE("c", (int)13834, (long)(0x58E65C84722D082CL ^ l));
        this.TaCDX = new cG(this, mr.clS(nArray)).Uf(rD.dlM().bjG().bis());
        int[] nArray2 = new int[cP.YE("c", (int)18970, (long)(0x1E92BA902EAF42FL ^ l))];
        nArray2[0] = (int)cP.YE("c", (int)21075, (long)(0x1814B91B39ECEC4CL ^ l));
        nArray2[1] = (int)cP.YE("c", (int)2197, (long)(0x7CD3B0982FF336B0L ^ l));
        nArray2[2] = (int)cP.YE("c", (int)18332, (long)(0x992BD8DDF81798BL ^ l));
        nArray2[3] = (int)cP.YE("c", (int)22861, (long)(0x5C72487E63C8E759L ^ l));
        nArray2[4] = (int)cP.YE("c", (int)21666, (long)(0x52E9F1002479EAB3L ^ l));
        nArray2[5] = (int)cP.YE("c", (int)15465, (long)(0x2B59475346F10256L ^ l));
        nArray2[cP.YE("c", (int)25068, (long)(0x5D774108D634DFC4L ^ l))] = (int)cP.YE("c", (int)24199, (long)(0x17F8ABB4C206609DL ^ l));
        nArray2[cP.YE("c", (int)4078, (long)(0x616D33183DDE31F5L ^ l))] = (int)cP.YE("c", (int)7343, (long)(0x2D1544460274A2B7L ^ l));
        nArray2[cP.YE("c", (int)30215, (long)(0x3321EC61C040C81AL ^ l))] = (int)cP.YE("c", (int)25500, (long)(0x1B73AD65D0B05DADL ^ l));
        nArray2[cP.YE("c", (int)5727, (long)(0xD94C1850478A86FL ^ l))] = (int)cP.YE("c", (int)26911, (long)(0x315C3BABD7455730L ^ l));
        nArray2[cP.YE("c", (int)13162, (long)(0x7B91DC309F470D49L ^ l))] = (int)cP.YE("c", (int)879, (long)(0x37EFA387DD983D54L ^ l));
        nArray2[cP.YE("c", (int)16686, (long)(0x20DEA86B7CFF7F3CL ^ l))] = (int)cP.YE("c", (int)22861, (long)(0x5C72487E63C8E759L ^ l));
        nArray2[cP.YE("c", (int)819, (long)(0x5A4681DB6FBA3D1FL ^ l))] = (int)cP.YE("c", (int)12844, (long)(0x61BA7CBF80DD8C39L ^ l));
        nArray2[cP.YE("c", (int)12630, (long)(0x7CB9D2032CBD0F78L ^ l))] = (int)cP.YE("c", (int)2197, (long)(0x7CD3B0982FF336B0L ^ l));
        nArray2[cP.YE("c", (int)26537, (long)(0x3F683FC35E3A59A8L ^ l))] = (int)cP.YE("c", (int)7343, (long)(0x2D1544460274A2B7L ^ l));
        nArray2[cP.YE("c", (int)14368, (long)(0x5CFF6EB30A6E861EL ^ l))] = (int)cP.YE("c", (int)2197, (long)(0x7CD3B0982FF336B0L ^ l));
        nArray2[cP.YE("c", (int)7916, (long)(0x1E37C0389A25A0FCL ^ l))] = (int)cP.YE("c", (int)17266, (long)(0x38B218FFE8107D58L ^ l));
        this.rHwiT = new cG(this, mr.clS(nArray2)).Uf(rD.dlM().bjG().bis());
        int[] nArray3 = new int[cP.YE("c", (int)32394, (long)(0x4FD894A34EFF40A8L ^ l))];
        nArray3[0] = (int)cP.YE("c", (int)18391, (long)(0x7FA14BD7930479D4L ^ l));
        nArray3[1] = (int)cP.YE("c", (int)2197, (long)(0x7CD3B0982FF336B0L ^ l));
        nArray3[2] = (int)cP.YE("c", (int)18600, (long)(0x26102667B1457692L ^ l));
        nArray3[3] = (int)cP.YE("c", (int)22861, (long)(0x5C72487E63C8E759L ^ l));
        nArray3[4] = (int)cP.YE("c", (int)23705, (long)(0x740BAF821A1062BDL ^ l));
        nArray3[5] = (int)cP.YE("c", (int)25500, (long)(0x1B73AD65D0B05DADL ^ l));
        nArray3[cP.YE("c", (int)25068, (long)(0x5D774108D634DFC4L ^ l))] = (int)cP.YE("c", (int)7343, (long)(0x2D1544460274A2B7L ^ l));
        nArray3[cP.YE("c", (int)4078, (long)(0x616D33183DDE31F5L ^ l))] = (int)cP.YE("c", (int)7343, (long)(0x2D1544460274A2B7L ^ l));
        nArray3[cP.YE("c", (int)30215, (long)(0x3321EC61C040C81AL ^ l))] = (int)cP.YE("c", (int)22861, (long)(0x5C72487E63C8E759L ^ l));
        nArray3[cP.YE("c", (int)5727, (long)(0xD94C1850478A86FL ^ l))] = (int)cP.YE("c", (int)12844, (long)(0x61BA7CBF80DD8C39L ^ l));
        nArray3[cP.YE("c", (int)13162, (long)(0x7B91DC309F470D49L ^ l))] = (int)cP.YE("c", (int)2197, (long)(0x7CD3B0982FF336B0L ^ l));
        nArray3[cP.YE("c", (int)10010, (long)(0x5C63E6DEAC21193AL ^ l))] = (int)cP.YE("c", (int)7343, (long)(0x2D1544460274A2B7L ^ l));
        nArray3[cP.YE("c", (int)31190, (long)(0x68B9158592BF47E5L ^ l))] = (int)cP.YE("c", (int)2197, (long)(0x7CD3B0982FF336B0L ^ l));
        nArray3[cP.YE("c", (int)11575, (long)(0x2FCC06D39AF2932BL ^ l))] = (int)cP.YE("c", (int)17266, (long)(0x38B218FFE8107D58L ^ l));
        this.QyPao = new cG(this, mr.clS(nArray3)).Uf(rD.dlM().bjG().bis().cob(0.5f));
        int[] nArray4 = new int[cP.YE("c", (int)13162, (long)(0x7B91DC309F470D49L ^ l))];
        nArray4[0] = (int)cP.YE("c", (int)27437, (long)(0x5DC4F4CC6FD2D534L ^ l));
        nArray4[1] = (int)cP.YE("c", (int)25500, (long)(0x1B73AD65D0B05DADL ^ l));
        nArray4[2] = (int)cP.YE("c", (int)7343, (long)(0x2D1544460274A2B7L ^ l));
        nArray4[3] = (int)cP.YE("c", (int)7343, (long)(0x2D1544460274A2B7L ^ l));
        nArray4[4] = (int)cP.YE("c", (int)879, (long)(0x37EFA387DD983D54L ^ l));
        nArray4[5] = (int)cP.YE("c", (int)27870, (long)(0x9700B2BD66CD2FFL ^ l));
        nArray4[cP.YE("c", (int)25068, (long)(0x5D774108D634DFC4L ^ l))] = (int)cP.YE("c", (int)22861, (long)(0x5C72487E63C8E759L ^ l));
        nArray4[cP.YE("c", (int)4078, (long)(0x616D33183DDE31F5L ^ l))] = (int)cP.YE("c", (int)18391, (long)(0x7FA14BD7930479D4L ^ l));
        nArray4[cP.YE("c", (int)30215, (long)(0x3321EC61C040C81AL ^ l))] = (int)cP.YE("c", (int)2197, (long)(0x7CD3B0982FF336B0L ^ l));
        nArray4[cP.YE("c", (int)5727, (long)(0xD94C1850478A86FL ^ l))] = (int)cP.YE("c", (int)18600, (long)(0x26102667B1457692L ^ l));
        this.ZVcly = new cJ(this, mr.clS(nArray4)).WE(true);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cP.rSiDa = gb.aYR(-2284223492630732071L, 1537918581710625755L, MethodHandles.lookup().lookupClass()).a(202044020695558L);
                cP.woehX = new HashMap<K, V>(13);
                var0 = cP.rSiDa ^ 26719622568547L;
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
                var6_5 = "\u008cS\u007f\u00ccrF;\u0005\u00e5\u00c2\u00c7g\u00bc:\u00d3\u0002,\u0094\u00e0\u00999\u00a8\u0093\u0093\u00f4<c\u00caP`3\u0097\u0094&\u0087\u00a1\u009e\u009fe\u00a9\u0014G\u00c1n\u00e3\u00fd\u00bf\u00c9\u00a7\u007f\u00f9\u00c6\u0013\u00aa\\:\u0099\u0091y\u00c1\u00e4\u00c2\u00dc\u0019-\u00b1\u00f5\u008eZ\u00d6\u00dbM\u00bc\u00e1\u00c9+\u00bc\u0081\u009c\u00be\u0003L? \u00da.\u00e7\u00de\\~\u0004\u00a5d\u00e7\u00e2\r\u00e9\u008d\u0019\u0012\u009b\u00cb$\u00ee;9\u00a5\u00a3\u00a23ca\u00d5\u00bb7_\u008e\u00fbN\u00f6\u00ab\u00f9\nd\u00f5\u00d6\u00a3g\u00b4\u00e4\u00c1\u00bbS\u0096\"q\u0099\u001a\u00d8\u0080\u00dbv\u00c7\u00be\u00e8\u00d6\u00f0\u00c9\u00b7iLO\u0000\u00ea\u00b8\u00b5\u00f0\u00db\u008b\u009c\u00f6m\u00e1\u00efa\u00d4\u0004\u00d8\u0007\u0016M\u001c\u0010\u00d0\u009e\u00bd\u00026\u0010\u00d4\u009a3\u00a1\u0092\u00e4\u00ff\u001e\u001a\u00e4^I\u00836|Y})\u00cd\u0015\u0095:\u0081\u00c6U\u00b6x\u00cd\u0007\u000b\u00e6\u007f\u00de\u00b5;[O\u0095lA\u001fD\u00e1\u00b1\u00debApaW\u00c5m~/$\u00b8\u00c5\u00c5>l\u0081\u00d73\u00d9w\u0000\u00a8\u00bb\u00ac\u00aap\u00cc%\u008d\u00b5\u00a7d-0iY\u00fe\u007f\u0084\u00e4\u00e0\u007f+\u00e1\u00ea\u00ff1!\b_\u00c4\u00ab#/\u00e3\u0085laC\u0097\u00beI\u00b4\u009dL\u00a3:\u00ac\u00c4\u0086\"\u00cd\u009ea\u00d3\u00e6\u000e\u008da\u00f7\u0014\u00c8\u00dar\u00ae&\u00baIu\u0085\u00f7\u00bapT\u00be/j\u00047\u00e2\u00ee\u0005\u00cb\u001f\u00af\u0002\u00a5%o\u0007\u0094\u0018h\u001c\u001eW?\u00f0w\u0012\u00fczF\u00d1\u0093\u00b12\u00e2\u008a=oN\u009b\u0093\u000e\u00d7\u00dc\u00f5\u00e2\u00d9\u0001]\u00f7\u0097\u001b\u000f\u0084\u00d5`\u009c\u001cxL\u00b3(C\u00e0\u0001\u00fd\u0089r_}Z\u00d2\fPc";
                var7_6 = "\u008cS\u007f\u00ccrF;\u0005\u00e5\u00c2\u00c7g\u00bc:\u00d3\u0002,\u0094\u00e0\u00999\u00a8\u0093\u0093\u00f4<c\u00caP`3\u0097\u0094&\u0087\u00a1\u009e\u009fe\u00a9\u0014G\u00c1n\u00e3\u00fd\u00bf\u00c9\u00a7\u007f\u00f9\u00c6\u0013\u00aa\\:\u0099\u0091y\u00c1\u00e4\u00c2\u00dc\u0019-\u00b1\u00f5\u008eZ\u00d6\u00dbM\u00bc\u00e1\u00c9+\u00bc\u0081\u009c\u00be\u0003L? \u00da.\u00e7\u00de\\~\u0004\u00a5d\u00e7\u00e2\r\u00e9\u008d\u0019\u0012\u009b\u00cb$\u00ee;9\u00a5\u00a3\u00a23ca\u00d5\u00bb7_\u008e\u00fbN\u00f6\u00ab\u00f9\nd\u00f5\u00d6\u00a3g\u00b4\u00e4\u00c1\u00bbS\u0096\"q\u0099\u001a\u00d8\u0080\u00dbv\u00c7\u00be\u00e8\u00d6\u00f0\u00c9\u00b7iLO\u0000\u00ea\u00b8\u00b5\u00f0\u00db\u008b\u009c\u00f6m\u00e1\u00efa\u00d4\u0004\u00d8\u0007\u0016M\u001c\u0010\u00d0\u009e\u00bd\u00026\u0010\u00d4\u009a3\u00a1\u0092\u00e4\u00ff\u001e\u001a\u00e4^I\u00836|Y})\u00cd\u0015\u0095:\u0081\u00c6U\u00b6x\u00cd\u0007\u000b\u00e6\u007f\u00de\u00b5;[O\u0095lA\u001fD\u00e1\u00b1\u00debApaW\u00c5m~/$\u00b8\u00c5\u00c5>l\u0081\u00d73\u00d9w\u0000\u00a8\u00bb\u00ac\u00aap\u00cc%\u008d\u00b5\u00a7d-0iY\u00fe\u007f\u0084\u00e4\u00e0\u007f+\u00e1\u00ea\u00ff1!\b_\u00c4\u00ab#/\u00e3\u0085laC\u0097\u00beI\u00b4\u009dL\u00a3:\u00ac\u00c4\u0086\"\u00cd\u009ea\u00d3\u00e6\u000e\u008da\u00f7\u0014\u00c8\u00dar\u00ae&\u00baIu\u0085\u00f7\u00bapT\u00be/j\u00047\u00e2\u00ee\u0005\u00cb\u001f\u00af\u0002\u00a5%o\u0007\u0094\u0018h\u001c\u001eW?\u00f0w\u0012\u00fczF\u00d1\u0093\u00b12\u00e2\u008a=oN\u009b\u0093\u000e\u00d7\u00dc\u00f5\u00e2\u00d9\u0001]\u00f7\u0097\u001b\u000f\u0084\u00d5`\u009c\u001cxL\u00b3(C\u00e0\u0001\u00fd\u0089r_}Z\u00d2\fPc".length();
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
                    var6_5 = "\u0017\u0081\u00b5\u00a2\u0098\u008e\u0011\u00e5\t\u008dQ\u00ca\u00e3C\u00e9\u0099";
                    var7_6 = "\u0017\u0081\u00b5\u00a2\u0098\u008e\u0011\u00e5\t\u008dQ\u00ca\u00e3C\u00e9\u0099".length();
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
        cP.zuzcl = var8_3;
        cP.Qajnw = new Integer[51];
    }

    private int Yw(class_1792 class_17922) {
        int n;
        block12: {
            block13: {
                Object object;
                block10: {
                    long l;
                    block11: {
                        l = rSiDa ^ 0xAAEB596F840L;
                        iS[] iSArray = dh.afl();
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            object = class_17922 instanceof class_1828;
                                            if (iSArray != null) break block10;
                                            if (object != 0) break block11;
                                        }
                                        catch (MatchException matchException) {
                                            throw cP.YB(matchException);
                                        }
                                        object = class_17922 instanceof class_1803;
                                        if (iSArray != null) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw cP.YB(matchException);
                                    }
                                    if (object != 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw cP.YB(matchException);
                                }
                                n = class_17922 instanceof class_1779;
                                if (iSArray != null) break block12;
                            }
                            catch (MatchException matchException) {
                                throw cP.YB(matchException);
                            }
                            if (n == 0) break block13;
                        }
                        catch (MatchException matchException) {
                            throw cP.YB(matchException);
                        }
                    }
                    object = cP.YE("c", (int)21567, (long)(0x2E4D09227A0E59C4L ^ l));
                }
                return object;
            }
            n = 0;
        }
        return n;
    }

    public cG Yy() {
        return this.rHwiT;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private float Yv(class_1792 class_17922) {
        boolean bl;
        block17: {
            block18: {
                iS[] iSArray;
                block15: {
                    block16: {
                        block14: {
                            long l = rSiDa ^ 0x57BE18303DB7L;
                            iSArray = dh.afl();
                            try {
                                try {
                                    bl = class_17922 instanceof class_1828;
                                    if (iSArray != null) break block14;
                                    if (bl) return 0.4f;
                                }
                                catch (MatchException matchException) {
                                    throw cP.YB(matchException);
                                }
                                bl = class_17922 instanceof class_1803;
                            }
                            catch (MatchException matchException) {
                                throw cP.YB(matchException);
                            }
                        }
                        try {
                            try {
                                if (iSArray != null) break block15;
                                if (!bl) break block16;
                                return 0.4f;
                            }
                            catch (MatchException matchException) {
                                throw cP.YB(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw cP.YB(matchException);
                        }
                    }
                    bl = class_17922 instanceof class_1779;
                }
                try {
                    try {
                        if (iSArray != null) break block17;
                        if (!bl) break block18;
                        return 0.59f;
                    }
                    catch (MatchException matchException) {
                        throw cP.YB(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw cP.YB(matchException);
                }
            }
            bl = class_17922 instanceof class_1835;
        }
        try {
            if (!bl) return 1.5f;
            return 2.0f;
        }
        catch (MatchException matchException) {
            throw cP.YB(matchException);
        }
    }

    private static CallSite YE(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cP" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cJ YA() {
        return this.ZVcly;
    }

    private float Yu(class_1792 class_17922) {
        float f;
        long l = rSiDa ^ 0xE77BE758062L;
        try {
            f = class_17922 instanceof class_1753 ? 1.0f : 0.4f;
        }
        catch (MatchException matchException) {
            throw cP.YB(matchException);
        }
        return f;
    }

    private boolean Yt(class_1792 class_17922) {
        boolean bl;
        block26: {
            block28: {
                block27: {
                    long l = rSiDa ^ 0x57E3140E7102L;
                    iS[] iSArray = dh.afl();
                    try {
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        bl = class_17922 instanceof class_1776;
                                                                        if (iSArray != null) break block26;
                                                                        if (bl) break block27;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw cP.YB(matchException);
                                                                    }
                                                                    bl = class_17922 instanceof class_1835;
                                                                    if (iSArray != null) break block26;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cP.YB(matchException);
                                                                }
                                                                if (bl) break block27;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cP.YB(matchException);
                                                            }
                                                            bl = class_17922 instanceof class_1779;
                                                            if (iSArray != null) break block26;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cP.YB(matchException);
                                                        }
                                                        if (bl) break block27;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw cP.YB(matchException);
                                                    }
                                                    bl = class_17922 instanceof class_1823;
                                                    if (iSArray != null) break block26;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cP.YB(matchException);
                                                }
                                                if (bl) break block27;
                                            }
                                            catch (MatchException matchException) {
                                                throw cP.YB(matchException);
                                            }
                                            bl = class_17922 instanceof class_1771;
                                            if (iSArray != null) break block26;
                                        }
                                        catch (MatchException matchException) {
                                            throw cP.YB(matchException);
                                        }
                                        if (bl) break block27;
                                    }
                                    catch (MatchException matchException) {
                                        throw cP.YB(matchException);
                                    }
                                    bl = class_17922 instanceof class_1828;
                                    if (iSArray != null) break block26;
                                }
                                catch (MatchException matchException) {
                                    throw cP.YB(matchException);
                                }
                                if (bl) break block27;
                            }
                            catch (MatchException matchException) {
                                throw cP.YB(matchException);
                            }
                            bl = class_17922 instanceof class_1803;
                            if (iSArray != null) break block26;
                        }
                        catch (MatchException matchException) {
                            throw cP.YB(matchException);
                        }
                        if (!bl) break block28;
                    }
                    catch (MatchException matchException) {
                        throw cP.YB(matchException);
                    }
                }
                bl = true;
                break block26;
            }
            bl = false;
        }
        return bl;
    }

    private static int YD(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = cP.YC(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int YC(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x14A5;
        if (Qajnw[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = zuzcl[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])woehX.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    woehX.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cP", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cP.Qajnw[n2] = n3;
        }
        return Qajnw[n2];
    }

    private static MatchException YB(MatchException matchException) {
        return matchException;
    }

    public cG Yx() {
        return this.TaCDX;
    }

    public cG Yz() {
        return this.QyPao;
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void Yr(go.sX var1_1) {
        block70: {
            block72: {
                block71: {
                    block69: {
                        block68: {
                            block67: {
                                block65: {
                                    block61: {
                                        block63: {
                                            block64: {
                                                block62: {
                                                    block60: {
                                                        block58: {
                                                            block59: {
                                                                block57: {
                                                                    block55: {
                                                                        block56: {
                                                                            var2_2 = cP.rSiDa ^ 103206144198664L;
                                                                            var4_3 = dh.afl();
                                                                            try {
                                                                                v0 = this.bab();
                                                                                if (var4_3 != null) break block55;
                                                                                if (v0) break block56;
                                                                            }
                                                                            catch (MatchException v1) {
                                                                                throw cP.YB(v1);
                                                                            }
                                                                            return;
                                                                        }
                                                                        v0 = rD.dlmvG.field_1690.method_31044().method_31034();
                                                                    }
                                                                    if (!v0) {
                                                                        return;
                                                                    }
                                                                    var5_4 = var1_1.bbh();
                                                                    var6_5 = var1_1.bbi();
                                                                    var8_6 = rD.dlmvG.field_1724.method_6047();
                                                                    var9_7 = rD.dlmvG.field_1724.method_6079();
                                                                    try {
                                                                        try {
                                                                            v2 = var8_6.method_7909() instanceof class_1753;
                                                                            if (var4_3 != null) break block57;
                                                                            if (v2) break block58;
                                                                        }
                                                                        catch (MatchException v3) {
                                                                            throw cP.YB(v3);
                                                                        }
                                                                        v2 = var8_6.method_7909() instanceof class_1764;
                                                                    }
                                                                    catch (MatchException v4) {
                                                                        throw cP.YB(v4);
                                                                    }
                                                                }
                                                                try {
                                                                    try {
                                                                        if (var4_3 != null) break block59;
                                                                        if (v2) break block58;
                                                                    }
                                                                    catch (MatchException v5) {
                                                                        throw cP.YB(v5);
                                                                    }
                                                                    v2 = this.Yt(var8_6.method_7909());
                                                                }
                                                                catch (MatchException v6) {
                                                                    throw cP.YB(v6);
                                                                }
                                                            }
                                                            try {
                                                                if (var4_3 != null) break block60;
                                                                if (v2) {
                                                                }
                                                                ** GOTO lbl56
                                                            }
                                                            catch (MatchException v7) {
                                                                throw cP.YB(v7);
                                                            }
                                                        }
                                                        var7_8 = class_1268.field_5808;
                                                        try {
                                                            if (var4_3 == null) break block61;
lbl56:
                                                            // 2 sources

                                                            v2 = var9_7.method_7909() instanceof class_1753;
                                                        }
                                                        catch (MatchException v8) {
                                                            throw cP.YB(v8);
                                                        }
                                                    }
                                                    try {
                                                        try {
                                                            if (var4_3 != null) break block62;
                                                            if (v2) break block63;
                                                        }
                                                        catch (MatchException v9) {
                                                            throw cP.YB(v9);
                                                        }
                                                        v2 = var9_7.method_7909() instanceof class_1764;
                                                    }
                                                    catch (MatchException v10) {
                                                        throw cP.YB(v10);
                                                    }
                                                }
                                                try {
                                                    try {
                                                        if (var4_3 != null) break block64;
                                                        if (v2) break block63;
                                                    }
                                                    catch (MatchException v11) {
                                                        throw cP.YB(v11);
                                                    }
                                                    v2 = this.Yt(var9_7.method_7909());
                                                }
                                                catch (MatchException v12) {
                                                    throw cP.YB(v12);
                                                }
                                            }
                                            if (!v2) ** GOTO lbl90
                                        }
                                        var7_8 = class_1268.field_5810;
                                        try {
                                            if (var4_3 == null) break block61;
lbl90:
                                            // 2 sources

                                            return;
                                        }
                                        catch (MatchException v13) {
                                            throw cP.YB(v13);
                                        }
                                    }
                                    var10_9 = (Boolean)rD.dlmvG.field_1690.method_42448().method_41753();
                                    try {
                                        block66: {
                                            try {
                                                try {
                                                    try {
                                                        rD.dlmvG.field_1690.method_42448().method_41748((Object)false);
                                                        v14 = var9_7.method_7909() instanceof class_1764;
                                                        if (var4_3 != null) break block65;
                                                        if (v14 == 0) break block66;
                                                    }
                                                    catch (MatchException v15) {
                                                        throw cP.YB(v15);
                                                    }
                                                    v14 = jh.bCh(var9_7, (class_5321<class_1887>)class_1893.field_9108);
                                                    if (var4_3 != null) break block65;
                                                }
                                                catch (MatchException v16) {
                                                    throw cP.YB(v16);
                                                }
                                                if (v14 == 0) {
                                                }
                                                ** GOTO lbl138
                                            }
                                            catch (MatchException v17) {
                                                throw cP.YB(v17);
                                            }
                                        }
                                        v14 = var8_6.method_7909() instanceof class_1764;
                                    }
                                    catch (MatchException v18) {
                                        throw cP.YB(v18);
                                    }
                                }
                                try {
                                    try {
                                        if (var4_3 != null) break block67;
                                        if (v14 != 0) {
                                        }
                                        ** GOTO lbl170
                                    }
                                    catch (MatchException v19) {
                                        throw cP.YB(v19);
                                    }
                                    v14 = jh.bCh(var8_6, (class_5321<class_1887>)class_1893.field_9108);
                                }
                                catch (MatchException v20) {
                                    throw cP.YB(v20);
                                }
                            }
                            try {
                                try {
                                    if (v14 == 0) ** GOTO lbl170
lbl138:
                                    // 2 sources

                                    v21 = this;
                                    v22 = var5_4;
                                    if (var7_8 != class_1268.field_5810) break block68;
                                }
                                catch (MatchException v23) {
                                    throw cP.YB(v23);
                                }
                                v24 = var9_7.method_7909();
                                break block69;
                            }
                            catch (MatchException v25) {
                                throw cP.YB(v25);
                            }
                        }
                        v24 = var8_6.method_7909();
                    }
                    try {
                        v21.Ys(v22, v24, rD.dlmvG.field_1724.method_36454() - 10.0f, var6_5);
                        v26 = this;
                        v27 = var5_4;
                        v28 = var7_8 == class_1268.field_5810 ? var9_7.method_7909() : var8_6.method_7909();
                    }
                    catch (MatchException v29) {
                        throw cP.YB(v29);
                    }
                    try {
                        v26.Ys(v27, v28, rD.dlmvG.field_1724.method_36454(), var6_5);
                        v30 = this;
                        v31 = var5_4;
                        v32 = var7_8 == class_1268.field_5810 ? var9_7.method_7909() : var8_6.method_7909();
                    }
                    catch (MatchException v33) {
                        throw cP.YB(v33);
                    }
                    try {
                        try {
                            v30.Ys(v31, v32, rD.dlmvG.field_1724.method_36454() + 10.0f, var6_5);
                            if (var4_3 == null) break block70;
lbl170:
                            // 3 sources

                            v34 = this;
                            v35 = var5_4;
                            if (var7_8 != class_1268.field_5810) break block71;
                        }
                        catch (MatchException v36) {
                            throw cP.YB(v36);
                        }
                        v37 = var9_7.method_7909();
                        break block72;
                    }
                    catch (MatchException v38) {
                        throw cP.YB(v38);
                    }
                }
                v37 = var8_6.method_7909();
            }
            v34.Ys(v35, v37, rD.dlmvG.field_1724.method_36454(), var6_5);
        }
        rD.dlmvG.field_1690.method_42448().method_41748((Object)var10_9);
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private void Ys(class_4587 var1_1, class_1792 var2_2, float var3_3, float var4_4) {
        block57: {
            block56: {
                block55: {
                    block54: {
                        block52: {
                            block53: {
                                block51: {
                                    block49: {
                                        block50: {
                                            block47: {
                                                block48: {
                                                    block45: {
                                                        block46: {
                                                            block62: {
                                                                block43: {
                                                                    block44: {
                                                                        var5_5 = cP.rSiDa ^ 78163735853616L;
                                                                        var8_6 = class_3532.method_16436((double)var4_4, (double)rD.dlmvG.field_1724.field_6014, (double)rD.dlmvG.field_1724.method_23317());
                                                                        var10_7 = class_3532.method_16436((double)var4_4, (double)rD.dlmvG.field_1724.field_6036, (double)rD.dlmvG.field_1724.method_23318());
                                                                        var12_8 = class_3532.method_16436((double)var4_4, (double)rD.dlmvG.field_1724.field_5969, (double)rD.dlmvG.field_1724.method_23321());
                                                                        var7_9 = dh.afl();
                                                                        var10_7 = var10_7 + (double)rD.dlmvG.field_1724.method_18381(rD.dlmvG.field_1724.method_18376()) - 0.1000000014901161;
                                                                        try {
                                                                            if (var7_9 != null) break block43;
                                                                            if (var2_2 != rD.dlmvG.field_1724.method_6047().method_7909()) break block44;
                                                                        }
                                                                        catch (MatchException v0) {
                                                                            throw cP.YB(v0);
                                                                        }
                                                                        var8_6 -= (double)(class_3532.method_15362((double)(var3_3 / 180.0f * 3.1415927f)) * 0.16f);
                                                                        var12_8 -= (double)(class_3532.method_15374((double)(var3_3 / 180.0f * 3.1415927f)) * 0.16f);
                                                                        if (var7_9 == null) break block62;
                                                                    }
                                                                    var8_6 += (double)(class_3532.method_15362((double)(var3_3 / 180.0f * 3.1415927f)) * 0.16f);
                                                                }
                                                                var12_8 += (double)(class_3532.method_15374((double)(var3_3 / 180.0f * 3.1415927f)) * 0.16f);
                                                            }
                                                            var14_10 = this.Yu(var2_2);
                                                            var15_11 = new class_243((double)(-class_3532.method_15374((double)(var3_3 / 180.0f * 3.1415927f)) * class_3532.method_15362((double)(rD.dlmvG.field_1724.method_36455() / 180.0f * 3.1415927f)) * var14_10), (double)(-class_3532.method_15374((double)((rD.dlmvG.field_1724.method_36455() - (float)this.Yw(var2_2)) / 180.0f * 3.1415927f)) * var14_10), (double)(class_3532.method_15362((double)(var3_3 / 180.0f * 3.1415927f)) * class_3532.method_15362((double)(rD.dlmvG.field_1724.method_36455() / 180.0f * 3.1415927f)) * var14_10));
                                                            var16_12 = (float)rD.dlmvG.field_1724.method_6048() / 20.0f;
                                                            var16_12 = (var16_12 * var16_12 + var16_12 * 2.0f) / 3.0f;
                                                            try {
                                                                try {
                                                                    try {
                                                                        v1 = var16_12;
                                                                        if (var7_9 != null) break block45;
                                                                        if (v1 > 1.0f) break block46;
                                                                    }
                                                                    catch (MatchException v2) {
                                                                        throw cP.YB(v2);
                                                                    }
                                                                    cfr_temp_0 = var16_12 - 0.0f;
                                                                    v3 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                                    if (var7_9 != null) break block47;
                                                                }
                                                                catch (MatchException v4) {
                                                                    throw cP.YB(v4);
                                                                }
                                                                if (v3) break block48;
                                                            }
                                                            catch (MatchException v5) {
                                                                throw cP.YB(v5);
                                                            }
                                                        }
                                                        v1 = 1.0f;
                                                    }
                                                    var16_12 = v1;
                                                }
                                                var15_11 = var15_11.method_1029();
                                                v3 = var2_2 instanceof class_1753;
                                            }
                                            try {
                                                try {
                                                    if (var7_9 != null) break block49;
                                                    if (!v3) break block50;
                                                }
                                                catch (MatchException v6) {
                                                    throw cP.YB(v6);
                                                }
                                                v7 = var16_12 * 2.0f;
                                                break block51;
                                            }
                                            catch (MatchException v8) {
                                                throw cP.YB(v8);
                                            }
                                        }
                                        v3 = var2_2 instanceof class_1764;
                                    }
                                    try {
                                        v7 = v3 != false ? 2.2f : 1.0f;
                                    }
                                    catch (MatchException v9) {
                                        throw cP.YB(v9);
                                    }
                                }
                                var17_13 = v7 * this.Yv(var2_2);
                                var15_11 = var15_11.method_1021((double)var17_13);
                                var18_14 = new class_243(var8_6, var10_7, var12_8);
                                try {
                                    v10 = rD.dlmvG.field_1724.method_24828();
                                    if (var7_9 != null) break block52;
                                    if (v10) break block53;
                                }
                                catch (MatchException v11) {
                                    throw cP.YB(v11);
                                }
                                var15_11 = var15_11.method_1031(0.0, rD.dlmvG.field_1724.method_18798().method_10214(), 0.0);
                            }
                            v10 = var2_2 instanceof class_1753;
                        }
                        try {
                            try {
                                if (var7_9 != null) break block54;
                                if (!v10) {
                                }
                                ** GOTO lbl100
                            }
                            catch (MatchException v12) {
                                throw cP.YB(v12);
                            }
                            v10 = rD.dlmvG.field_1724.method_6047().method_7909() instanceof class_1764;
                        }
                        catch (MatchException v13) {
                            throw cP.YB(v13);
                        }
                    }
                    try {
                        if (!v10) break block55;
lbl100:
                        // 2 sources

                        v14 = 0.05000000074505806;
                        break block56;
                    }
                    catch (MatchException v15) {
                        throw cP.YB(v15);
                    }
                }
                v14 = 0.029999999329447746;
            }
            var19_15 = v14;
            var21_16 = me.cjZ(mh.ckf((class_1937)rD.dlmvG.field_1687, (class_1297)rD.dlmvG.field_1724, var18_14, var15_11).cky((int)cP.YE("c", (int)14295, (long)(8515373120908720235L ^ var5_5))).ckz(-128.0).ckA(0.99).ckB(0.8).ckC(var19_15));
            var22_17 = new ArrayList<class_243>(var21_16.positions());
            var23_18 = 0.3f;
            var24_19 = 1;
            block34: while (true) {
                v16 = var24_19;
                block35: while (v16 < var22_17.size()) {
                    var25_21 = (class_243)var22_17.get(var24_19);
                    if (var7_9 != null) break block57;
                    for (class_1297 var27_24 : rD.dlmvG.field_1687.method_18112()) {
                        block61: {
                            block59: {
                                block60: {
                                    block58: {
                                        v16 = var27_24 instanceof class_1667;
                                        if (var7_9 != null) continue block35;
                                        try {
                                            if (var7_9 != null) break block58;
                                            if (v16 != 0) continue;
                                        }
                                        catch (MatchException v17) {
                                            throw cP.YB(v17);
                                        }
                                        v18 = var27_24.equals((Object)rD.dlmvG.field_1724);
                                    }
                                    try {
                                        try {
                                            if (var7_9 != null) break block59;
                                            if (v18 == false) break block60;
                                        }
                                        catch (MatchException v19) {
                                            throw cP.YB(v19);
                                        }
                                        if (var7_9 == null) continue;
                                    }
                                    catch (MatchException v20) {
                                        throw cP.YB(v20);
                                    }
                                }
                                v18 = (int)var27_24.method_5829().method_994(new class_238(var25_21.field_1352 - (double)var23_18, var25_21.field_1351 - (double)var23_18, var25_21.field_1350 - (double)var23_18, var25_21.field_1352 + (double)var23_18, var25_21.field_1351 + (double)var23_18, var25_21.field_1350 + (double)var23_18));
                            }
                            try {
                                try {
                                    if (var7_9 != null) break block61;
                                    if (v18 != 0) {
                                    }
                                    ** GOTO lbl159
                                }
                                catch (MatchException v21) {
                                    throw cP.YB(v21);
                                }
                                iW.bxs(var1_1, var27_24.method_5829(), this.rHwiT.Wf(), this.QyPao.Wf(), this.ZVcly.WF());
                                v18 = var22_17.size();
                            }
                            catch (MatchException v22) {
                                throw cP.YB(v22);
                            }
                        }
                        var24_19 = v18;
                        try {
                            if (var7_9 == null) break;
lbl159:
                            // 2 sources

                            if (var7_9 == null) continue;
                            break;
                        }
                        catch (MatchException v23) {
                            throw cP.YB(v23);
                        }
                    }
                    ++var24_19;
                    if (var7_9 == null) continue block34;
                }
                break;
            }
            iW.bxt(var1_1, var22_17, this.TaCDX.Wf());
        }
        var24_20 = var21_16.finalPosition();
        var25_22 = 0.3;
        var27_24 = new class_238(var24_20.field_1352 - var25_22, var24_20.field_1351 - var25_22, var24_20.field_1350 - var25_22, var24_20.field_1352 + var25_22, var24_20.field_1351 + var25_22, var24_20.field_1350 + var25_22);
        iW.bxs(var1_1, (class_238)var27_24, this.rHwiT.Wf(), this.QyPao.Wf(), this.ZVcly.WF());
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cP.class, "YD", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
