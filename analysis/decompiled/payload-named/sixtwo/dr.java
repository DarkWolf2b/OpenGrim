/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.PlayerLikeEntity
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
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.entity.Entity;
import net.minecraft.entity.PlayerLikeEntity;
import sixtwo.cC;
import sixtwo.cJ;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gi;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.kn;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rs;

public class dr
extends gg {
    private final cC CWkfv;
    private final cJ BkqiN;
    private final cJ gKqqU;
    private static final long vTteC;
    private static final long[] OylXe;
    private static final Integer[] upfQT;
    private static final Map UMELB;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dr() {
        long l2 = vTteC ^ 0x7F3FC80B1B8DL;
        super(gf.aZL((int)dr.aif("v", (int)10541, (long)(0x6404F43B3323AB8CL ^ l2)), false, gh.nOCvV));
        int[] nArray = new int[dr.aif("v", (int)11951, (long)(0x7FB674E13984AC1CL ^ l2))];
        nArray[0] = (int)dr.aif("v", (int)24523, (long)(0x18DF2D0CF981DD40L ^ l2));
        nArray[1] = (int)dr.aif("v", (int)30564, (long)(0x64DAEAC107E675F1L ^ l2));
        nArray[2] = (int)dr.aif("v", (int)25477, (long)(0x2CFFB590BD91612AL ^ l2));
        nArray[3] = (int)dr.aif("v", (int)4351, (long)(0x77F9A357982C926FL ^ l2));
        nArray[4] = (int)dr.aif("v", (int)5890, (long)(0x44F9C263034315B7L ^ l2));
        nArray[5] = (int)dr.aif("v", (int)13109, (long)(0x35D3D90814243196L ^ l2));
        nArray[dr.aif("v", (int)2, (long)(0x531A2476C8AF82A5L ^ l2))] = (int)dr.aif("v", (int)13730, (long)(0x6C0F267862413722L ^ l2));
        nArray[dr.aif("v", (int)10360, (long)(0x34EC27DB31CEAAEAL ^ l2))] = (int)dr.aif("v", (int)22461, (long)(0xA1C2D062686D50BL ^ l2));
        nArray[dr.aif("v", (int)14313, (long)(0x44E04F34FB53B57AL ^ l2))] = (int)dr.aif("v", (int)16088, (long)(0x79A677943FA6BC64L ^ l2));
        nArray[dr.aif("v", (int)14074, (long)(0x852D2C73D1E347DL ^ l2))] = (int)dr.aif("v", (int)14083, (long)(0x31A7B454DBAC35A8L ^ l2));
        nArray[dr.aif("v", (int)4443, (long)(0x3BD1706C66DF13E5L ^ l2))] = (int)dr.aif("v", (int)3418, (long)(0x3B1FDD1D151F0FCEL ^ l2));
        nArray[dr.aif("v", (int)25969, (long)(0x1CACB3D40A3967C9L ^ l2))] = (int)dr.aif("v", (int)11962, (long)(0x25CFA740BBFDAC00L ^ l2));
        nArray[dr.aif("v", (int)29139, (long)(0x788A082DA3617363L ^ l2))] = (int)dr.aif("v", (int)15593, (long)(0x3F21D7CAC7FEBE6DL ^ l2));
        nArray[dr.aif("v", (int)32448, (long)(0x31E5208021BFC7FL ^ l2))] = (int)dr.aif("v", (int)606, (long)(0x32947FD20A4000F6L ^ l2));
        this.CWkfv = new cC(this, mr.clS(nArray)).Vy(1.0).Vw(1.0).Vx(30.0).VA(10.0);
        int[] nArray2 = new int[dr.aif("v", (int)24343, (long)(0x73D0133CEAE65D9DL ^ l2))];
        nArray2[0] = (int)dr.aif("v", (int)16356, (long)(0x66E4C2AF10BB3D4AL ^ l2));
        nArray2[1] = (int)dr.aif("v", (int)3452, (long)(0x42D5698C2C918FE1L ^ l2));
        nArray2[2] = (int)dr.aif("v", (int)32544, (long)(0x124E3A5123EFFDB9L ^ l2));
        nArray2[3] = (int)dr.aif("v", (int)27192, (long)(0x5B77CA4F6E60689DL ^ l2));
        nArray2[4] = (int)dr.aif("v", (int)31519, (long)(0x2B32A00A9D5F9BBL ^ l2));
        nArray2[5] = (int)dr.aif("v", (int)21690, (long)(0x703EDF1CE943D608L ^ l2));
        nArray2[dr.aif("v", (int)7462, (long)(0x77A7D9B1C2039FA7L ^ l2))] = (int)dr.aif("v", (int)12552, (long)(0x1A323F53EF38B3AAL ^ l2));
        nArray2[dr.aif("v", (int)31697, (long)(0x7570378E236FF960L ^ l2))] = (int)dr.aif("v", (int)14587, (long)(0x5536310132E03A60L ^ l2));
        nArray2[dr.aif("v", (int)26926, (long)(0x7C81DE44BD196BBFL ^ l2))] = (int)dr.aif("v", (int)16088, (long)(0x79A677943FA6BC64L ^ l2));
        this.BkqiN = new cJ(this, mr.clS(nArray2)).WE(false);
        int[] nArray3 = new int[dr.aif("v", (int)6386, (long)(0x3673C18910161A5FL ^ l2))];
        nArray3[0] = (int)dr.aif("v", (int)11968, (long)(0x68A083819067AC5CL ^ l2));
        nArray3[1] = (int)dr.aif("v", (int)21690, (long)(0x703EDF1CE943D608L ^ l2));
        nArray3[2] = (int)dr.aif("v", (int)31519, (long)(0x2B32A00A9D5F9BBL ^ l2));
        nArray3[3] = (int)dr.aif("v", (int)21690, (long)(0x703EDF1CE943D608L ^ l2));
        nArray3[4] = (int)dr.aif("v", (int)19384, (long)(0x3C0CBA59A22C4930L ^ l2));
        nArray3[5] = (int)dr.aif("v", (int)18569, (long)(0xB5AFF44B792CA34L ^ l2));
        nArray3[dr.aif("v", (int)7462, (long)(0x77A7D9B1C2039FA7L ^ l2))] = (int)dr.aif("v", (int)16088, (long)(0x79A677943FA6BC64L ^ l2));
        nArray3[dr.aif("v", (int)31697, (long)(0x7570378E236FF960L ^ l2))] = (int)dr.aif("v", (int)3418, (long)(0x3B1FDD1D151F0FCEL ^ l2));
        nArray3[dr.aif("v", (int)26926, (long)(0x7C81DE44BD196BBFL ^ l2))] = (int)dr.aif("v", (int)962, (long)(0x78D2B7DCEE2D0179L ^ l2));
        nArray3[dr.aif("v", (int)24343, (long)(0x73D0133CEAE65D9DL ^ l2))] = (int)dr.aif("v", (int)5247, (long)(0x7884AC5B8B1E16C8L ^ l2));
        nArray3[dr.aif("v", (int)6266, (long)(0x4A3C3474CD331ADAL ^ l2))] = (int)dr.aif("v", (int)14083, (long)(0x31A7B454DBAC35A8L ^ l2));
        nArray3[dr.aif("v", (int)7081, (long)(0x1AAF9CA0F8B4993FL ^ l2))] = (int)dr.aif("v", (int)11686, (long)(0x70ACC8C81A88AF3CL ^ l2));
        nArray3[dr.aif("v", (int)17448, (long)(0x49C24E8FB8EE46ABL ^ l2))] = (int)dr.aif("v", (int)11652, (long)(0x41CC38FD91BE2F3DL ^ l2));
        nArray3[dr.aif("v", (int)13538, (long)(0x5B8B72F3F6BAB648L ^ l2))] = (int)dr.aif("v", (int)26285, (long)(0x824D5C6DE96640BL ^ l2));
        nArray3[dr.aif("v", (int)23204, (long)(0x2FF2588868CA583AL ^ l2))] = (int)dr.aif("v", (int)18053, (long)(0x38848DE02CA6C407L ^ l2));
        nArray3[dr.aif("v", (int)19419, (long)(0x6325D9D440A0C944L ^ l2))] = (int)dr.aif("v", (int)3418, (long)(0x3B1FDD1D151F0FCEL ^ l2));
        nArray3[dr.aif("v", (int)12465, (long)(0x374BB795E775B205L ^ l2))] = (int)dr.aif("v", (int)21677, (long)(0x55C663D9BB36D63AL ^ l2));
        nArray3[dr.aif("v", (int)19945, (long)(0x2F9EB8B97C67CF6CL ^ l2))] = (int)dr.aif("v", (int)5781, (long)(0x17B3F8A128989413L ^ l2));
        nArray3[dr.aif("v", (int)28379, (long)(0x69B90AAA1D47EC72L ^ l2))] = (int)dr.aif("v", (int)18569, (long)(0xB5AFF44B792CA34L ^ l2));
        nArray3[dr.aif("v", (int)28261, (long)(0x59FCB51923FCECC9L ^ l2))] = (int)dr.aif("v", (int)18569, (long)(0xB5AFF44B792CA34L ^ l2));
        nArray3[dr.aif("v", (int)9848, (long)(0x356E52D7D4C0A4E0L ^ l2))] = (int)dr.aif("v", (int)31519, (long)(0x2B32A00A9D5F9BBL ^ l2));
        this.gKqqU = new cJ(this, mr.clS(nArray3)).WE(false);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                dr.vTteC = gb.aYR(3145743272352896967L, 8872174630551885469L, MethodHandles.lookup().lookupClass()).a(90327463092827L);
                dr.UMELB = new HashMap<K, V>(13);
                var0 = dr.vTteC ^ 36504529395124L;
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
                var8_3 = new long[59];
                var5_4 = 0;
                var6_5 = "\u00e5e\u00cb#\u009a\u008f\u00f2\u00d9jX\u00153\u00a7T\u008bm\u0007Hl \u00989\u00e0\u00b7\u00aa=\u00f6@n\u00ee\u00b3\u00bbo\u0006\u001e\u00d4\u00f2r\u00f2\u00aa?l\u0012\u00c8B\u00ad\u00f9\u00ef\u0089\u00c8\u00acM\u00e5L\u00abl\u00ea\u00e3>\u0084\u00b4\u00af\u00e2c\u00de\u00f4\u008c\n\u00d6\r\u001d\u00e2\u00ca\u001aF\u00c67\u00d4\u00e3-o[\u00adR\u00c1|\u001b\u00a9\u00e3\u001dDZ\u0099b!\u00c0E\u00f2\u0080\u0098\u00e3/c4\u0018\u00ae\u00f2\u00b4C4\u0014.\u001b\u0005\u008b\u00e5\u00d0\u00e3\u00aa}\u00e9`\u00cbR\r\u00efJ\u00be=\u00ff\u00b6\u00e4\u008c\u00e8\u00e1\u00b1\u0098\n\u00ab\u00d0\u009e\u00f6\u0093\u00f6\u0095\u00bc\u00c0\nR\u00a0\u0092\u00c5\u00973\u0010\u00f6\u0094j\u008c{\u00ca{\u00d1\u00e1Cb>(\u00a7:U\u009dAz3\u008e\u00c5\u0081\u009b\u00a8\u00cf\u00ca!\u00d5\u00f4uE\u00e7\u00c28\u001c\u00c41\u00aboy\u00ec\u00b5\u00dd\u0099&q\u00ee-\\YH1\u00ae\u00ae/\u00adVx\u00d5\u00f2\u00ff\u00b2\u00b6\u007fKf\u00cd;`\u0088G\u00c2/\u0085\u00b9\u00d5|+\u00e2\u009d\u00a4\u00c2\u00ae\u0011\u00ba\u0081\u00b6\u0083\u0084\u00a9\u00a1\u0087\u00ee6PJ>\u00e7h\u00b5\u00df\u00f11\u008e\u00ee?w\u00c2\u00cf\t#\u009b\u00d9\u008b\u00b6P\u00c9r\u000e\u00abf\u00b7WUj\u00ebp\u00a2\u009b\u00d4\u001d\u00e2\u0090\u00fe3gO5\u00ab]s\u00fe\u00dc\u00d7\u00a0')7\u0083o\u008c\f`\u00d0\u00fd\u0085\u00a9\u00d1u\u008b\u00c5\u00f5lmq\u00e7\u00ba9\u00df#\n\u00c0\u00f6\u001d'\u00f5\u000eg\u001eqN\u0086\u000b7\u0019L\u009e6G\u00e5\u00df\u0090\u00b2\u00c8\u00f2)-!\u0086\u00ba\u00b9&\u00fc\u00cf\u0006\u00aa\u008bQY\"\u00e9\u00a6\u0098E\u00d0G\u00e6\u008e\u00ce\u0099I0\u00b7X\u009d/\u00c5\u0091\n\u00a7\u00e2\u008b\u00deS/\u00e5\n\u00bb\u00acy\u00a0\u00b6~\u00bbQ\u00d46L7\u0081U\u00c9z$a\u008f\u00d9\u00f9\u000e\u00a6\u00b4C\u000b\u00eap \t\u00ce\u00da\u000e\tx\u001f1\b\u00f2\u00de\u009ap9\u00f5\u00d4\u00c3\u00d4\u0003cx%\u00de\u00c1\u0088\u00e7\u00fc\u00f9\u000b\u00ea\u0092>\u00a9\u00d6";
                var7_6 = "\u00e5e\u00cb#\u009a\u008f\u00f2\u00d9jX\u00153\u00a7T\u008bm\u0007Hl \u00989\u00e0\u00b7\u00aa=\u00f6@n\u00ee\u00b3\u00bbo\u0006\u001e\u00d4\u00f2r\u00f2\u00aa?l\u0012\u00c8B\u00ad\u00f9\u00ef\u0089\u00c8\u00acM\u00e5L\u00abl\u00ea\u00e3>\u0084\u00b4\u00af\u00e2c\u00de\u00f4\u008c\n\u00d6\r\u001d\u00e2\u00ca\u001aF\u00c67\u00d4\u00e3-o[\u00adR\u00c1|\u001b\u00a9\u00e3\u001dDZ\u0099b!\u00c0E\u00f2\u0080\u0098\u00e3/c4\u0018\u00ae\u00f2\u00b4C4\u0014.\u001b\u0005\u008b\u00e5\u00d0\u00e3\u00aa}\u00e9`\u00cbR\r\u00efJ\u00be=\u00ff\u00b6\u00e4\u008c\u00e8\u00e1\u00b1\u0098\n\u00ab\u00d0\u009e\u00f6\u0093\u00f6\u0095\u00bc\u00c0\nR\u00a0\u0092\u00c5\u00973\u0010\u00f6\u0094j\u008c{\u00ca{\u00d1\u00e1Cb>(\u00a7:U\u009dAz3\u008e\u00c5\u0081\u009b\u00a8\u00cf\u00ca!\u00d5\u00f4uE\u00e7\u00c28\u001c\u00c41\u00aboy\u00ec\u00b5\u00dd\u0099&q\u00ee-\\YH1\u00ae\u00ae/\u00adVx\u00d5\u00f2\u00ff\u00b2\u00b6\u007fKf\u00cd;`\u0088G\u00c2/\u0085\u00b9\u00d5|+\u00e2\u009d\u00a4\u00c2\u00ae\u0011\u00ba\u0081\u00b6\u0083\u0084\u00a9\u00a1\u0087\u00ee6PJ>\u00e7h\u00b5\u00df\u00f11\u008e\u00ee?w\u00c2\u00cf\t#\u009b\u00d9\u008b\u00b6P\u00c9r\u000e\u00abf\u00b7WUj\u00ebp\u00a2\u009b\u00d4\u001d\u00e2\u0090\u00fe3gO5\u00ab]s\u00fe\u00dc\u00d7\u00a0')7\u0083o\u008c\f`\u00d0\u00fd\u0085\u00a9\u00d1u\u008b\u00c5\u00f5lmq\u00e7\u00ba9\u00df#\n\u00c0\u00f6\u001d'\u00f5\u000eg\u001eqN\u0086\u000b7\u0019L\u009e6G\u00e5\u00df\u0090\u00b2\u00c8\u00f2)-!\u0086\u00ba\u00b9&\u00fc\u00cf\u0006\u00aa\u008bQY\"\u00e9\u00a6\u0098E\u00d0G\u00e6\u008e\u00ce\u0099I0\u00b7X\u009d/\u00c5\u0091\n\u00a7\u00e2\u008b\u00deS/\u00e5\n\u00bb\u00acy\u00a0\u00b6~\u00bbQ\u00d46L7\u0081U\u00c9z$a\u008f\u00d9\u00f9\u000e\u00a6\u00b4C\u000b\u00eap \t\u00ce\u00da\u000e\tx\u001f1\b\u00f2\u00de\u009ap9\u00f5\u00d4\u00c3\u00d4\u0003cx%\u00de\u00c1\u0088\u00e7\u00fc\u00f9\u000b\u00ea\u0092>\u00a9\u00d6".length();
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
                    var6_5 = "\u00f6\u00a4\u00d4\u00f7\u0097\u0087\u00d1j\t\u00bd\u00cb'\u00c0n1w";
                    var7_6 = "\u00f6\u00a4\u00d4\u00f7\u0097\u0087\u00d1j\t\u00bd\u00cb'\u00c0n1w".length();
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
        dr.OylXe = var8_3;
        dr.upfQT = new Integer[59];
    }

    private static int aid(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3869;
        if (upfQT[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = OylXe[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])UMELB.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    UMELB.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dr", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dr.upfQT[n3] = n4;
        }
        return upfQT[n3];
    }

    private static int aie(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dr.aid(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static MatchException aic(MatchException matchException) {
        return matchException;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @hG
    public void aib(gi gi2) {
        AbstractClientPlayerEntity abstractClientPlayerEntity;
        block20: {
            boolean bl2;
            block19: {
                Entity entity;
                iS[] iSArray;
                block18: {
                    long l2 = vTteC ^ 0x2FBFF9B3AC93L;
                    iSArray = dh.afl();
                    try {
                        if (kn.YNOIY) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw dr.aic(matchException);
                    }
                    Entity entity2 = gi2.baL();
                    try {
                        try {
                            entity = entity2;
                            if (iSArray != null) break block18;
                            if (!(entity instanceof AbstractClientPlayerEntity)) return;
                        }
                        catch (MatchException matchException) {
                            throw dr.aic(matchException);
                        }
                        entity = entity2;
                    }
                    catch (MatchException matchException) {
                        throw dr.aic(matchException);
                    }
                }
                abstractClientPlayerEntity = (AbstractClientPlayerEntity)entity;
                try {
                    if (iSArray != null) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw dr.aic(matchException);
                }
                try {
                    if (abstractClientPlayerEntity == rD.dlmvG.player) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw dr.aic(matchException);
                }
                try {
                    try {
                        bl2 = this.BkqiN.WF();
                        if (iSArray != null) break block19;
                        if (bl2) break block20;
                    }
                    catch (MatchException matchException) {
                        throw dr.aic(matchException);
                    }
                    bl2 = abstractClientPlayerEntity.isInvisible();
                }
                catch (MatchException matchException) {
                    throw dr.aic(matchException);
                }
            }
            if (bl2) {
                return;
            }
        }
        rs.djl(gi2.baN(), (PlayerLikeEntity)abstractClientPlayerEntity, rD.dlmvG.getEntityRenderDispatcher(), gi2.baO(), this.CWkfv.VC(), this.gKqqU.WF());
    }

    private static CallSite aif(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dr" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dr.class, "aie", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

