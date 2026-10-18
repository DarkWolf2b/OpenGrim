/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1299
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
import net.minecraft.class_1299;
import sixtwo.cC;
import sixtwo.cF;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.jg$tJ;
import sixtwo.jk;
import sixtwo.lG;
import sixtwo.mr;
import sixtwo.rD;

public class du
extends gg
implements lG {
    private final cF SqUZV;
    private final cC cKwty;
    private final cG dGHqh;
    private final cG wOZVj;
    private final ct iuknf;
    private final cu wUMpA;
    private final cu MmkQv;
    private final cu rlVJG;
    private final cu jJCGV;
    private final cJ PNacL;
    private static final long xvoyR;
    private static final long[] UwvDF;
    private static final Integer[] tbAeR;
    private static final Map avvBW;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public du() {
        long l = xvoyR ^ 0x65414EA013F0L;
        super(gf.aZL((int)du.aiH("f", (int)9957, (long)(0x67858E592E8846E8L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[du.aiH("f", (int)24233, (long)(0x93FFA38004F3EA3L ^ l))];
        nArray[0] = (int)du.aiH("f", (int)28763, (long)(0xEE790913817107DL ^ l));
        nArray[1] = (int)du.aiH("f", (int)27326, (long)(0x711940775B728ABCL ^ l));
        nArray[2] = (int)du.aiH("f", (int)3718, (long)(0x10BEC6CFD6056EA8L ^ l));
        nArray[3] = (int)du.aiH("f", (int)26499, (long)(0x1C877A82A3E98787L ^ l));
        nArray[4] = (int)du.aiH("f", (int)2596, (long)(0x3F227453BB3B6A0DL ^ l));
        nArray[5] = (int)du.aiH("f", (int)1613, (long)(0x78E061449E826653L ^ l));
        nArray[du.aiH("f", (int)6858, (long)(0x201B10D1F207FAEAL ^ l))] = (int)du.aiH("f", (int)25216, (long)(0x74093A70F09F029FL ^ l));
        nArray[du.aiH("f", (int)26576, (long)(0x43A867EB5F6487D0L ^ l))] = (int)du.aiH("f", (int)29067, (long)(0x1F6B203A79901184L ^ l));
        this.SqUZV = new cF(this, mr.clS(nArray)).VS(jg$tJ.OCdZM).VT(class_1299.field_6052, class_1299.field_6126, class_1299.field_6053);
        int[] nArray2 = new int[du.aiH("f", (int)30493, (long)(0x7ED35D63F5AE173EL ^ l))];
        nArray2[0] = (int)du.aiH("f", (int)3862, (long)(0x4D209A5364BAEF3AL ^ l));
        nArray2[1] = (int)du.aiH("f", (int)1613, (long)(0x78E061449E826653L ^ l));
        nArray2[2] = (int)du.aiH("f", (int)8613, (long)(0x21F0A4BEAC2AC1B3L ^ l));
        nArray2[3] = (int)du.aiH("f", (int)15106, (long)(0x44522A5727A45B12L ^ l));
        nArray2[4] = (int)du.aiH("f", (int)455, (long)(0x4131B81F09A0E1C2L ^ l));
        nArray2[5] = (int)du.aiH("f", (int)4095, (long)(0x55EDFBB77ABCEFE4L ^ l));
        nArray2[du.aiH("f", (int)17509, (long)(0x5E26A64131EA2477L ^ l))] = (int)du.aiH("f", (int)1613, (long)(0x78E061449E826653L ^ l));
        nArray2[du.aiH("f", (int)27315, (long)(0x778D507333C28AAFL ^ l))] = (int)du.aiH("f", (int)15361, (long)(0x64B679F02BB4DC0FL ^ l));
        nArray2[du.aiH("f", (int)25727, (long)(0x4B92A8BBDCB18479L ^ l))] = (int)du.aiH("f", (int)2596, (long)(0x3F227453BB3B6A0DL ^ l));
        nArray2[du.aiH("f", (int)32696, (long)(0x123A81936F619F93L ^ l))] = (int)du.aiH("f", (int)3655, (long)(0x76C5A2E5593E6E4FL ^ l));
        this.cKwty = new cC(this, mr.clS(nArray2)).Vy(0.1).Vw(1.0).Vx(3.0).VA(1.0);
        this.dGHqh = new cG(this, mr.clS(new int[]{(int)du.aiH("f", (int)10518, (long)(0x378530D4EBA8C911L ^ l)), (int)du.aiH("f", (int)14876, (long)(0x45B9414FF42BDA24L ^ l)), (int)du.aiH("f", (int)7952, (long)(0x75824B937A37FF3DL ^ l)), (int)du.aiH("f", (int)15115, (long)(0xB185AE65A9D5B23L ^ l)), (int)du.aiH("f", (int)30763, (long)(0x629500E9F7F39804L ^ l))})).Uf(rD.dlM().bjG().bis());
        int[] nArray3 = new int[du.aiH("f", (int)19546, (long)(0x14FDAF27F34CAC7BL ^ l))];
        nArray3[0] = (int)du.aiH("f", (int)27209, (long)(0x2CDB814D80FD0A6CL ^ l));
        nArray3[1] = (int)du.aiH("f", (int)219, (long)(0x33FE02402A8760DAL ^ l));
        nArray3[2] = (int)du.aiH("f", (int)1613, (long)(0x78E061449E826653L ^ l));
        nArray3[3] = (int)du.aiH("f", (int)15106, (long)(0x44522A5727A45B12L ^ l));
        nArray3[4] = (int)du.aiH("f", (int)8613, (long)(0x21F0A4BEAC2AC1B3L ^ l));
        nArray3[5] = (int)du.aiH("f", (int)4983, (long)(0xF84B7BD890DF37EL ^ l));
        nArray3[du.aiH("f", (int)17509, (long)(0x5E26A64131EA2477L ^ l))] = (int)du.aiH("f", (int)31560, (long)(0xBB4E7B5886C1B5CL ^ l));
        nArray3[du.aiH("f", (int)27315, (long)(0x778D507333C28AAFL ^ l))] = (int)du.aiH("f", (int)29617, (long)(0x2AB318075A2893A8L ^ l));
        nArray3[du.aiH("f", (int)25727, (long)(0x4B92A8BBDCB18479L ^ l))] = (int)du.aiH("f", (int)15115, (long)(0xB185AE65A9D5B23L ^ l));
        nArray3[du.aiH("f", (int)24267, (long)(0x3C8196E814B33EDCL ^ l))] = (int)du.aiH("f", (int)16692, (long)(0x7F69F74BC7B9A125L ^ l));
        nArray3[du.aiH("f", (int)19773, (long)(0x1FE4A0EBB3D12D19L ^ l))] = (int)du.aiH("f", (int)15115, (long)(0xB185AE65A9D5B23L ^ l));
        nArray3[du.aiH("f", (int)653, (long)(0x8CE53971BB2E2AFL ^ l))] = (int)du.aiH("f", (int)219, (long)(0x33FE02402A8760DAL ^ l));
        this.wOZVj = new cG(this, mr.clS(nArray3)).Uf(jk.jEkxo);
        this.iuknf = new ct(this, mr.clS(new int[]{(int)du.aiH("f", (int)22249, (long)(0x12C95B3E374936D5L ^ l)), (int)du.aiH("f", (int)15115, (long)(0xB185AE65A9D5B23L ^ l)), (int)du.aiH("f", (int)4983, (long)(0xF84B7BD890DF37EL ^ l)), (int)du.aiH("f", (int)15106, (long)(0x44522A5727A45B12L ^ l))}));
        this.wUMpA = new cu(this.iuknf, mr.clS(new int[]{(int)du.aiH("f", (int)11133, (long)(0x598BA0C0F8C0CB65L ^ l)), (int)du.aiH("f", (int)15106, (long)(0x44522A5727A45B12L ^ l)), (int)du.aiH("f", (int)4492, (long)(0x4E7FF2AFF114F1B1L ^ l)), (int)du.aiH("f", (int)4983, (long)(0xF84B7BD890DF37EL ^ l))}));
        this.MmkQv = new cu(this.iuknf, mr.clS(new int[]{(int)du.aiH("f", (int)29617, (long)(0x2AB318075A2893A8L ^ l)), (int)du.aiH("f", (int)21487, (long)(0x15EABD6644E5B3FCL ^ l)), (int)du.aiH("f", (int)15106, (long)(0x44522A5727A45B12L ^ l)), (int)du.aiH("f", (int)3709, (long)(0x2DB6A377EEB76E57L ^ l)), (int)du.aiH("f", (int)2596, (long)(0x3F227453BB3B6A0DL ^ l))}));
        this.rlVJG = new cu(this.iuknf, mr.clS(new int[]{(int)du.aiH("f", (int)7602, (long)(0x18B4E6AA46DE7D8CL ^ l)), (int)du.aiH("f", (int)15106, (long)(0x44522A5727A45B12L ^ l)), (int)du.aiH("f", (int)19980, (long)(0x158C061DF0B6AE0FL ^ l)), (int)du.aiH("f", (int)3709, (long)(0x2DB6A377EEB76E57L ^ l))}));
        this.jJCGV = new cu(this.iuknf, mr.clS(new int[]{(int)du.aiH("f", (int)1575, (long)(0xC244D70BDC1663DL ^ l)), (int)du.aiH("f", (int)15106, (long)(0x44522A5727A45B12L ^ l)), (int)du.aiH("f", (int)15106, (long)(0x44522A5727A45B12L ^ l)), (int)du.aiH("f", (int)2596, (long)(0x3F227453BB3B6A0DL ^ l))}));
        int[] nArray4 = new int[du.aiH("f", (int)17809, (long)(0x693DC399830A2584L ^ l))];
        nArray4[0] = (int)du.aiH("f", (int)9529, (long)(0x6075B03451824524L ^ l));
        nArray4[1] = (int)du.aiH("f", (int)5376, (long)(0x1EDE4E01C41DF53FL ^ l));
        nArray4[2] = (int)du.aiH("f", (int)8613, (long)(0x21F0A4BEAC2AC1B3L ^ l));
        nArray4[3] = (int)du.aiH("f", (int)15115, (long)(0xB185AE65A9D5B23L ^ l));
        nArray4[4] = (int)du.aiH("f", (int)219, (long)(0x33FE02402A8760DAL ^ l));
        nArray4[5] = (int)du.aiH("f", (int)15106, (long)(0x44522A5727A45B12L ^ l));
        nArray4[du.aiH("f", (int)17509, (long)(0x5E26A64131EA2477L ^ l))] = (int)du.aiH("f", (int)31560, (long)(0xBB4E7B5886C1B5CL ^ l));
        nArray4[du.aiH("f", (int)27315, (long)(0x778D507333C28AAFL ^ l))] = (int)du.aiH("f", (int)1575, (long)(0xC244D70BDC1663DL ^ l));
        nArray4[du.aiH("f", (int)25727, (long)(0x4B92A8BBDCB18479L ^ l))] = (int)du.aiH("f", (int)219, (long)(0x33FE02402A8760DAL ^ l));
        nArray4[du.aiH("f", (int)24267, (long)(0x3C8196E814B33EDCL ^ l))] = (int)du.aiH("f", (int)1613, (long)(0x78E061449E826653L ^ l));
        nArray4[du.aiH("f", (int)19773, (long)(0x1FE4A0EBB3D12D19L ^ l))] = (int)du.aiH("f", (int)15106, (long)(0x44522A5727A45B12L ^ l));
        nArray4[du.aiH("f", (int)10130, (long)(0x737A230E4E4D4799L ^ l))] = (int)du.aiH("f", (int)8613, (long)(0x21F0A4BEAC2AC1B3L ^ l));
        nArray4[du.aiH("f", (int)1610, (long)(0x4078E0B75561666DL ^ l))] = (int)du.aiH("f", (int)4983, (long)(0xF84B7BD890DF37EL ^ l));
        nArray4[du.aiH("f", (int)10029, (long)(0x477A7FA7FA764721L ^ l))] = (int)du.aiH("f", (int)3709, (long)(0x2DB6A377EEB76E57L ^ l));
        this.PNacL = new cJ(this, mr.clS(nArray4)).WE(true);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                du.xvoyR = gb.aYR(-7089000681231288140L, 5103037887475186815L, MethodHandles.lookup().lookupClass()).a(178314533697462L);
                du.avvBW = new HashMap<K, V>(13);
                var0 = du.xvoyR ^ 35044295229386L;
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
                var8_3 = new long[53];
                var5_4 = 0;
                var6_5 = "\u00ed\u00d4[\u00a0\u00ad\u0091C\u0096}%>VV^\u00e2\n\u0000\u009e\u001fkz\u009d\u00fe9\u00ff\u00f3.\u000e\u00e9\u00ca\u0003\u00d8\u00dc&t$\u00113\u00d4\u0081|\u009f\u0080\u0096b\u000eBt\u00a6\u0098\u00f8s\u00c7\u0098\u0099\u0082YF\u00ab\u0087\u00f1 \u00a4\\\u001a<0\u0019\u0085K\u00d3\u00cfQ\u00ea\u00e8\u0090d\u00d8\u0011N\u0090\u008f\u00ef\u00c9T\u00be\u008e\u00ab\u00d5M\u009f\u0000Ao\u007f\u00d4\u0084\u00c8\u008f\u00fb\u00f5pEf|RR\u0082\u00e6\u009bz5N!\u00ee\u00e3p\f\u00f6\u0018LJ\u00a6\u00e5\u001fw\u00b5\u00a2\u00b25H\u00f9\u00c1G\u00c2Fw\u00eb\u00cf\u00b4O\u0083\u0004\u0080\u0082\u00a9\u00ae\u0015t\u00b6\u0006)\u00f5\u00d7\u00e0!\u00be\u00f2O~\u00e9k<+\u00ae\u00a3\u009f\u00dd\u00d2q\u0097;M\u00b4\u00190\u009bY\u00cb.\u00e2\u0014i\u00c9\u001c\u00c1\u0098\u0083\u009b\u00e8Y\u00af\u00fcQ\u009aBS\u00cc\u0012\u00b9\u00b9\u0089\u00ef`!\u00caMhq\u0084;wD#T\u00f4\u0080\u00a60wO\u00a2Qd\u00d1E\u0001\u00dd@\u00ba\u0004\u00f6s6\u0095\u00e3\u00e3\u0093\u0003^\u00c69\u0088\u00cd\u001e4\u0083(\u00f3A(\u0081\u0002\u00c4\u00aa\u00fc\u00ae\u00eb\u00fe\u00ee\u00f6\u00b5x\u0093\u0006\u00c7y\u009c,\u00bd\u0018qS\u0013\u00c5\u00f7\u00f7\u0015\u009c\u0018)\u00d5\u00de\u0011J\u00c3 \u00ed0\u008e\u00ac\u00aa\u00e0\u009d\u00ae\t\n\u001b)\u00b2u\u00cc\u009a\u0002\u00dfLE\u0091i\u00aeL\u00f2\u009a\u008eu/\u00ab\u00b5\u00d4\u00edge\u0005\u007f\u00ba\u00ca\u0015\u009eM\u0012\u00b1\u0005\u00b7/\u0092j\u00bbJ\u00e7z\u0094\u00ab\u0083\u00d6\u008c\u00a5\u001eH\u00dc\u00d0:\u008d\u00f5q\u00eb-9\u00b1Z\u00d3C0P\u00bc\u00abv\u0084}\u00ca*Y\u00d2!B\u00d7x\u0086*\u0007\u000b\u0088\u00d3\u0007\u0090#5k\u00ba\u00bb\u00f0Ts\u00ac\u00c5\r\u00e2J\u0087\rX\u00ed\u00f7J\n\u00e2\u008er\u00c6";
                var7_6 = "\u00ed\u00d4[\u00a0\u00ad\u0091C\u0096}%>VV^\u00e2\n\u0000\u009e\u001fkz\u009d\u00fe9\u00ff\u00f3.\u000e\u00e9\u00ca\u0003\u00d8\u00dc&t$\u00113\u00d4\u0081|\u009f\u0080\u0096b\u000eBt\u00a6\u0098\u00f8s\u00c7\u0098\u0099\u0082YF\u00ab\u0087\u00f1 \u00a4\\\u001a<0\u0019\u0085K\u00d3\u00cfQ\u00ea\u00e8\u0090d\u00d8\u0011N\u0090\u008f\u00ef\u00c9T\u00be\u008e\u00ab\u00d5M\u009f\u0000Ao\u007f\u00d4\u0084\u00c8\u008f\u00fb\u00f5pEf|RR\u0082\u00e6\u009bz5N!\u00ee\u00e3p\f\u00f6\u0018LJ\u00a6\u00e5\u001fw\u00b5\u00a2\u00b25H\u00f9\u00c1G\u00c2Fw\u00eb\u00cf\u00b4O\u0083\u0004\u0080\u0082\u00a9\u00ae\u0015t\u00b6\u0006)\u00f5\u00d7\u00e0!\u00be\u00f2O~\u00e9k<+\u00ae\u00a3\u009f\u00dd\u00d2q\u0097;M\u00b4\u00190\u009bY\u00cb.\u00e2\u0014i\u00c9\u001c\u00c1\u0098\u0083\u009b\u00e8Y\u00af\u00fcQ\u009aBS\u00cc\u0012\u00b9\u00b9\u0089\u00ef`!\u00caMhq\u0084;wD#T\u00f4\u0080\u00a60wO\u00a2Qd\u00d1E\u0001\u00dd@\u00ba\u0004\u00f6s6\u0095\u00e3\u00e3\u0093\u0003^\u00c69\u0088\u00cd\u001e4\u0083(\u00f3A(\u0081\u0002\u00c4\u00aa\u00fc\u00ae\u00eb\u00fe\u00ee\u00f6\u00b5x\u0093\u0006\u00c7y\u009c,\u00bd\u0018qS\u0013\u00c5\u00f7\u00f7\u0015\u009c\u0018)\u00d5\u00de\u0011J\u00c3 \u00ed0\u008e\u00ac\u00aa\u00e0\u009d\u00ae\t\n\u001b)\u00b2u\u00cc\u009a\u0002\u00dfLE\u0091i\u00aeL\u00f2\u009a\u008eu/\u00ab\u00b5\u00d4\u00edge\u0005\u007f\u00ba\u00ca\u0015\u009eM\u0012\u00b1\u0005\u00b7/\u0092j\u00bbJ\u00e7z\u0094\u00ab\u0083\u00d6\u008c\u00a5\u001eH\u00dc\u00d0:\u008d\u00f5q\u00eb-9\u00b1Z\u00d3C0P\u00bc\u00abv\u0084}\u00ca*Y\u00d2!B\u00d7x\u0086*\u0007\u000b\u0088\u00d3\u0007\u0090#5k\u00ba\u00bb\u00f0Ts\u00ac\u00c5\r\u00e2J\u0087\rX\u00ed\u00f7J\n\u00e2\u008er\u00c6".length();
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
                    var6_5 = "~\u00ad/zi\u00e9\u00dd\u000f>\u000e\\\u00d0\u00c3\u00ef\u00ae\u0087";
                    var7_6 = "~\u00ad/zi\u00e9\u00dd\u000f>\u000e\\\u00d0\u00c3\u00ef\u00ae\u0087".length();
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
        du.UwvDF = var8_3;
        du.tbAeR = new Integer[53];
    }

    private static int aiF(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2138;
        if (tbAeR[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = UwvDF[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])avvBW.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    avvBW.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/du", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            du.tbAeR[n2] = n3;
        }
        return tbAeR[n2];
    }

    private static MatchException aiE(MatchException matchException) {
        return matchException;
    }

    private static CallSite aiH(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/du" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Exception decompiling
     */
    @hG
    public void aiD(go.sX var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [12[TRYBLOCK]], but top level block is 23[SWITCH]
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
         *     at org.benf.cfr.reader.Driver.doClass(Driver.java:84)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:78)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private static int aiG(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = du.aiF(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(du.class, "aiG", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
