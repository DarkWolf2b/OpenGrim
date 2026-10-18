/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1113
 *  net.minecraft.class_243
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
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_1113;
import net.minecraft.class_243;
import sixtwo.cC;
import sixtwo.da$sv;
import sixtwo.dh;
import sixtwo.gI;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gk;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.lA;
import sixtwo.lC;
import sixtwo.mr;
import sixtwo.rD;

public class da
extends gg
implements lA {
    private final cC BBPZZ;
    private final cC GOeqg;
    private final cC shvfT;
    private final List<da$sv> nRjhq;
    private static final long awOVO;
    private static final String[] xfLQW;
    private static final String[] UGxHV;
    private static final Map VRJeL;
    private static final long[] rgyMI;
    private static final Integer[] GldDA;
    private static final Map eBuXP;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public da() {
        long l = awOVO ^ 0x2D30CA93C03L;
        super(gf.aZL((int)da.abB("u", (int)7306, (long)(0x6AFD13815D9878C7L ^ l)), false, gh.nOCvV));
        int[] nArray = new int[da.abB("u", (int)4630, (long)(0x4907C67A4AB4F650L ^ l))];
        nArray[0] = (int)da.abB("u", (int)27702, (long)(0x5EE05A8F6DE98878L ^ l));
        nArray[1] = (int)da.abB("u", (int)27405, (long)(0x2DB284461AB48F4DL ^ l));
        nArray[2] = (int)da.abB("u", (int)9007, (long)(0x5629DF990A6476DL ^ l));
        nArray[3] = (int)da.abB("u", (int)25006, (long)(0x4F61B6DA11B805EDL ^ l));
        nArray[4] = (int)da.abB("u", (int)26538, (long)(0x4BA6AA0BC7C83C0L ^ l));
        nArray[5] = (int)da.abB("u", (int)16340, (long)(0x7715111BC6A3DBA5L ^ l));
        nArray[da.abB("u", (int)2517, (long)(0xE6F2F580A1DEDAAL ^ l))] = (int)da.abB("u", (int)4755, (long)(0x72CD18DF4D0976EBL ^ l));
        nArray[da.abB("u", (int)25985, (long)(0x6A32BAD7A08A81E9L ^ l))] = (int)da.abB("u", (int)29638, (long)(0x16A1FBC8E2F317A2L ^ l));
        nArray[da.abB("u", (int)7565, (long)(0x4AD3EF4E86D9F9ECL ^ l))] = (int)da.abB("u", (int)7200, (long)(0x64E2D3FADE51F859L ^ l));
        nArray[da.abB("u", (int)23829, (long)(0x3FBA78E858F1397AL ^ l))] = (int)da.abB("u", (int)6974, (long)(0x6669A68BF46FFF59L ^ l));
        nArray[da.abB("u", (int)29537, (long)(0x78A849A26B3E172AL ^ l))] = (int)da.abB("u", (int)4755, (long)(0x72CD18DF4D0976EBL ^ l));
        nArray[da.abB("u", (int)18549, (long)(0x4643BBF461D82C19L ^ l))] = (int)da.abB("u", (int)6993, (long)(0x74F7ECA7E9387F22L ^ l));
        nArray[da.abB("u", (int)14137, (long)(0x1E61243B86CD365L ^ l))] = (int)da.abB("u", (int)13819, (long)(0x7DB9B98AC24D51A2L ^ l));
        nArray[da.abB("u", (int)21435, (long)(0x6A6775A2DC2837F2L ^ l))] = (int)da.abB("u", (int)16324, (long)(0x64D1358399F75B9EL ^ l));
        nArray[da.abB("u", (int)17403, (long)(0x2340BC8BF96EA789L ^ l))] = (int)da.abB("u", (int)24841, (long)(0x69EC11A259D08577L ^ l));
        nArray[da.abB("u", (int)28559, (long)(0x6DF56DB5BF0E8BD1L ^ l))] = (int)da.abB("u", (int)15928, (long)(0x39FACD19D95A5A5EL ^ l));
        nArray[da.abB("u", (int)26978, (long)(0x759EBEFA61E98D1FL ^ l))] = (int)da.abB("u", (int)20487, (long)(0x5AE94AE81111B44DL ^ l));
        nArray[da.abB("u", (int)14808, (long)(0x4A2E14AD2F4EDD8AL ^ l))] = (int)da.abB("u", (int)13891, (long)(0x7CFB6D802A21521CL ^ l));
        nArray[da.abB("u", (int)11628, (long)(0x2A807FC03A3D493AL ^ l))] = (int)da.abB("u", (int)4755, (long)(0x72CD18DF4D0976EBL ^ l));
        nArray[da.abB("u", (int)5311, (long)(0x7E847214DBF70F0L ^ l))] = (int)da.abB("u", (int)6523, (long)(0x5CF830D03DE7D3CL ^ l));
        nArray[da.abB("u", (int)13087, (long)(0x5093B499D51D5772L ^ l))] = (int)da.abB("u", (int)21108, (long)(0x4787360872B9363CL ^ l));
        this.BBPZZ = new cC(this, mr.clS(nArray)).Vy(1.0).Vw(1.0).Vx(15.0).VA(8.0).Vz((String)((Object)da.aby("r", (int)23787, (long)(0x7A913E3ACF39B877L ^ l))));
        int[] nArray2 = new int[da.abB("u", (int)20679, (long)(0x653372EB816634ACL ^ l))];
        nArray2[0] = (int)da.abB("u", (int)13832, (long)(0x41C53C4A86F4D25FL ^ l));
        nArray2[1] = (int)da.abB("u", (int)29755, (long)(0x4CC0E97B5E94906AL ^ l));
        nArray2[2] = (int)da.abB("u", (int)6523, (long)(0x5CF830D03DE7D3CL ^ l));
        nArray2[3] = (int)da.abB("u", (int)5007, (long)(0x720A8F4A995977CBL ^ l));
        nArray2[4] = (int)da.abB("u", (int)8067, (long)(0x575124E16A557BDEL ^ l));
        nArray2[5] = (int)da.abB("u", (int)16324, (long)(0x64D1358399F75B9EL ^ l));
        nArray2[da.abB("u", (int)19662, (long)(0x4AEB5EEE3A1EA8ACL ^ l))] = (int)da.abB("u", (int)3929, (long)(0x774CD43BF5A6EB39L ^ l));
        nArray2[da.abB("u", (int)31363, (long)(0x29789A9CC439EEAL ^ l))] = (int)da.abB("u", (int)25069, (long)(0x2240F99E225205B9L ^ l));
        nArray2[da.abB("u", (int)920, (long)(0x7A83ECADA4A4E7E2L ^ l))] = (int)da.abB("u", (int)6993, (long)(0x74F7ECA7E9387F22L ^ l));
        nArray2[da.abB("u", (int)16445, (long)(0x51FD5B88D032A466L ^ l))] = (int)da.abB("u", (int)25272, (long)(0x1E3EAA0E416C86C4L ^ l));
        nArray2[da.abB("u", (int)1781, (long)(0x47BE60679A73629BL ^ l))] = (int)da.abB("u", (int)16324, (long)(0x64D1358399F75B9EL ^ l));
        nArray2[da.abB("u", (int)10736, (long)(0x4856D084879E4DA5L ^ l))] = (int)da.abB("u", (int)27050, (long)(0x50C33B76DDD0DEFL ^ l));
        nArray2[da.abB("u", (int)27351, (long)(0x44CB1151DC3A0E84L ^ l))] = (int)da.abB("u", (int)16324, (long)(0x64D1358399F75B9EL ^ l));
        nArray2[da.abB("u", (int)27995, (long)(0x5A4AF59B6B480917L ^ l))] = (int)da.abB("u", (int)3929, (long)(0x774CD43BF5A6EB39L ^ l));
        this.GOeqg = new cC(this, mr.clS(nArray2)).Vy(1.0).Vw(1.0).Vx(100.0).VA(10.0);
        int[] nArray3 = new int[da.abB("u", (int)27351, (long)(0x44CB1151DC3A0E84L ^ l))];
        nArray3[0] = (int)da.abB("u", (int)1232, (long)(0x1F73BA6E92B6E0B3L ^ l));
        nArray3[1] = (int)da.abB("u", (int)6523, (long)(0x5CF830D03DE7D3CL ^ l));
        nArray3[2] = (int)da.abB("u", (int)5998, (long)(0x3EDBFAA051CDF315L ^ l));
        nArray3[3] = (int)da.abB("u", (int)6993, (long)(0x74F7ECA7E9387F22L ^ l));
        nArray3[4] = (int)da.abB("u", (int)4827, (long)(0x46A6BBE4EF73769AL ^ l));
        nArray3[5] = (int)da.abB("u", (int)16324, (long)(0x64D1358399F75B9EL ^ l));
        nArray3[da.abB("u", (int)19662, (long)(0x4AEB5EEE3A1EA8ACL ^ l))] = (int)da.abB("u", (int)14008, (long)(0x56DD1CE71011D2E8L ^ l));
        nArray3[da.abB("u", (int)31363, (long)(0x29789A9CC439EEAL ^ l))] = (int)da.abB("u", (int)3929, (long)(0x774CD43BF5A6EB39L ^ l));
        nArray3[da.abB("u", (int)920, (long)(0x7A83ECADA4A4E7E2L ^ l))] = (int)da.abB("u", (int)6523, (long)(0x5CF830D03DE7D3CL ^ l));
        nArray3[da.abB("u", (int)16445, (long)(0x51FD5B88D032A466L ^ l))] = (int)da.abB("u", (int)8005, (long)(0x3C92875E25027B20L ^ l));
        nArray3[da.abB("u", (int)1781, (long)(0x47BE60679A73629BL ^ l))] = (int)da.abB("u", (int)17696, (long)(0x328CA2C82BA12178L ^ l));
        nArray3[da.abB("u", (int)10736, (long)(0x4856D084879E4DA5L ^ l))] = (int)da.abB("u", (int)4755, (long)(0x72CD18DF4D0976EBL ^ l));
        this.shvfT = new cC(this, mr.clS(nArray3)).Vy(1.0).Vw(1.0).Vx(128.0).VA(32.0).Vz((String)((Object)da.aby("r", (int)9716, (long)(0x1F6A496433B0C169L ^ l))));
        this.nRjhq = new ArrayList<da$sv>();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    da.awOVO = gb.aYR(5880329299012704929L, 5876319557294907811L, MethodHandles.lookup().lookupClass()).a(246502944508976L);
                    da.VRJeL = new HashMap<K, V>(13);
                    var11 = da.awOVO ^ 40588433248011L;
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
                    var20_3 = new String[2];
                    var18_4 = 0;
                    var17_5 = "\u001e\u00dak\u0011\u00d9\u0088T\u00e0\u0088\u007fB\u00b0\u00c8,\u008a\u00e6\u0010\u00dfG\u00d8\u00e3\u00d0\u0095\u00b6y\u00e6<\u00f8\u00a2_}P\u00f5";
                    var19_6 = "\u001e\u00dak\u0011\u00d9\u0088T\u00e0\u0088\u007fB\u00b0\u00c8,\u008a\u00e6\u0010\u00dfG\u00d8\u00e3\u00d0\u0095\u00b6y\u00e6<\u00f8\u00a2_}P\u00f5".length();
                    var16_7 = 16;
                    var15_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl22:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = da.abv(var21_9).intern();
                        if ((var15_8 += var16_7) < var19_6) {
                            var16_7 = var17_5.charAt(var15_8);
                            ** continue;
                        }
                        break block12;
                        break;
                    }
                    v3 = ++var15_8;
                    var21_9 = var13_1.doFinal(var17_5.substring(v3, v3 + var16_7).getBytes("ISO-8859-1"));
                    ** while (true)
                }
                da.xfLQW = var20_3;
                da.UGxHV = new String[2];
                da.eBuXP = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v4 = SecretKeyFactory.getInstance("DES");
                v5 = new byte[8];
                v6 = v5;
                v5[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v6 = v6;
                    v6[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[59];
                var3_13 = 0;
                var4_14 = "\u00b8\u0006\u0099\u00e4L\u0083t\u0098%5\u00a0\u00b6c\u009f\u001aS\u00a0\u00fb\u00bf\u0006#,\u00f3\u00c5_\u00a8\u001d\u00fc\u00f91Ysa\u008f\u00c5{\u00ce\u00d5\u00f8\u001f\u00854\u00b6#\u0085\u00b2\u0083\u00ca\u000eO\u009c\u009e\u0092\u009f\u0014;\u00aaH\u00c7\u00f8\u00f6\u00d3m[T\u001b\u00ab\u00a0\u001a\u00e1\u00fc`\u00897/\u001d6\u00ab\u008e9t/\u0002\u00ba3\u0086Au\u0094\u00d8\u009a\u0080\u0005\u00de\u00f1\u00b5\u00c9\u0014\u0098\u00ef\u0084u\u0010\u00e8\u0006\u00d1\u0086I\u00b2\u00a2\u0011Q\u00a5\u009cv\u0012\u008dg\u00e0\u00d6JP1r\u0017\u00f6b~\u0019\u0015J\u0002[\u00d1.\u00da(\u009a-\u00d1\u0015\u00e5s\u00a0\u0089\r\u00d4P!\u0083\"\u0098\u00d9\u00df[\u00a0\u0094B0Dp2.\u0012\u00ab\u00b5\u00fd\u0087\u00f1E]\u0017\u00d7\u00a7\u001f\u00c4\u00ca\u0002(\u00ba8\u00fc\u0091\u00c7XUb\u0090E\u00ae%\u00ab\u000f\"p\u001d\u00e3\u00b6\u00aa\u00d0\u008d\u00c72{\u00c1\u00cdt8gZ\u0019\u000e\u00e5F\u0000\u00cc%\u00bb\u00b4\u008ed\u0081\u0085}LT\u00fe\u00e5\u0002\u0000}\u0013\u00e6\u00c2OI\u007f`\u00e1E\u00e7\u00ca\u008e\u0082\u001e[e\u0084\u0002`*(\u00ad\u0093ii:\u0016A\u0086(}\u0091\u00a1\u000f\u0010m\u00a4\u00ecOP\u00b4T\u00fc\u00c2\u00eb\u0004\u000f\u00ac\u00eb}(\u00bf\u00dbF\u008euR\u009fE-\"\u0096G\u00d9\u00c3\u0006\u009d\u00f4\u00c6\u00d92\u00ff\u0080S\u0013\u00d8\u00b5\u00bfub\u00f7\u00ec\u00fd\u0003\u009e\\\u00da&/|9\u00cf\u00b0\u00d9\u0089\u00dbo\u00ad\u00d2\u0014\u00b5\u0096G\u00ff&\u00c8\u008a\u0011I\u00af\u0081\u00c6\u00fa\u00b2HT\u00cb\u0086N\u00bd\u0000,\u00f0\u00d7\u00ee\u00d5E\u00c2\u001eX\u008c\u00d1\u00cd8\u00fb\u00a9\u0081(\u0082\u00f1g\u0096\u00f9X\u00d5<\u0082\u00dd\u00cc\u008a\u00cb\u00f2*\u00cdcG\u00ab\u00af\u00c1\u00af\u0086};vt~\u0001\u008e\u0099\u0083?\u00aeW\u00e1\u00fc$\u00cb\u00ad\u00f36a\u008b\u0010\u00e5\u00a5\u00b1$\u0099\u00e7f\u00e6>\u001d\u0007\u00d2\u00bd\u00f1\u0006rDm\u00edj\u00e9\u00ad\u00cd\u00de\u00b2\u0015\u00faY\\\u00c8\u00ea\u0002\u00ad\u00fb\u0093D\u0093n\u00c7?z\t";
                var5_15 = "\u00b8\u0006\u0099\u00e4L\u0083t\u0098%5\u00a0\u00b6c\u009f\u001aS\u00a0\u00fb\u00bf\u0006#,\u00f3\u00c5_\u00a8\u001d\u00fc\u00f91Ysa\u008f\u00c5{\u00ce\u00d5\u00f8\u001f\u00854\u00b6#\u0085\u00b2\u0083\u00ca\u000eO\u009c\u009e\u0092\u009f\u0014;\u00aaH\u00c7\u00f8\u00f6\u00d3m[T\u001b\u00ab\u00a0\u001a\u00e1\u00fc`\u00897/\u001d6\u00ab\u008e9t/\u0002\u00ba3\u0086Au\u0094\u00d8\u009a\u0080\u0005\u00de\u00f1\u00b5\u00c9\u0014\u0098\u00ef\u0084u\u0010\u00e8\u0006\u00d1\u0086I\u00b2\u00a2\u0011Q\u00a5\u009cv\u0012\u008dg\u00e0\u00d6JP1r\u0017\u00f6b~\u0019\u0015J\u0002[\u00d1.\u00da(\u009a-\u00d1\u0015\u00e5s\u00a0\u0089\r\u00d4P!\u0083\"\u0098\u00d9\u00df[\u00a0\u0094B0Dp2.\u0012\u00ab\u00b5\u00fd\u0087\u00f1E]\u0017\u00d7\u00a7\u001f\u00c4\u00ca\u0002(\u00ba8\u00fc\u0091\u00c7XUb\u0090E\u00ae%\u00ab\u000f\"p\u001d\u00e3\u00b6\u00aa\u00d0\u008d\u00c72{\u00c1\u00cdt8gZ\u0019\u000e\u00e5F\u0000\u00cc%\u00bb\u00b4\u008ed\u0081\u0085}LT\u00fe\u00e5\u0002\u0000}\u0013\u00e6\u00c2OI\u007f`\u00e1E\u00e7\u00ca\u008e\u0082\u001e[e\u0084\u0002`*(\u00ad\u0093ii:\u0016A\u0086(}\u0091\u00a1\u000f\u0010m\u00a4\u00ecOP\u00b4T\u00fc\u00c2\u00eb\u0004\u000f\u00ac\u00eb}(\u00bf\u00dbF\u008euR\u009fE-\"\u0096G\u00d9\u00c3\u0006\u009d\u00f4\u00c6\u00d92\u00ff\u0080S\u0013\u00d8\u00b5\u00bfub\u00f7\u00ec\u00fd\u0003\u009e\\\u00da&/|9\u00cf\u00b0\u00d9\u0089\u00dbo\u00ad\u00d2\u0014\u00b5\u0096G\u00ff&\u00c8\u008a\u0011I\u00af\u0081\u00c6\u00fa\u00b2HT\u00cb\u0086N\u00bd\u0000,\u00f0\u00d7\u00ee\u00d5E\u00c2\u001eX\u008c\u00d1\u00cd8\u00fb\u00a9\u0081(\u0082\u00f1g\u0096\u00f9X\u00d5<\u0082\u00dd\u00cc\u008a\u00cb\u00f2*\u00cdcG\u00ab\u00af\u00c1\u00af\u0086};vt~\u0001\u008e\u0099\u0083?\u00aeW\u00e1\u00fc$\u00cb\u00ad\u00f36a\u008b\u0010\u00e5\u00a5\u00b1$\u0099\u00e7f\u00e6>\u001d\u0007\u00d2\u00bd\u00f1\u0006rDm\u00edj\u00e9\u00ad\u00cd\u00de\u00b2\u0015\u00faY\\\u00c8\u00ea\u0002\u00ad\u00fb\u0093D\u0093n\u00c7?z\t".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v7 = var6_12;
                    v8 = var3_13++;
                    v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v10 = -1;
                    break block13;
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u0094\u00ac\b N\u0099\u0006\u00ff*]\u001f\u008deIid";
                    var5_15 = "\u0094\u00ac\b N\u0099\u0006\u00ff*]\u001f\u008deIid".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v7 = var6_12;
                        v8 = var3_13++;
                        v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v10 = 0;
                        break block13;
                        break;
                    }
                    break;
                }
lbl71:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    break block14;
                    break;
                }
            }
            var8_18 = v9;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v11 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
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
        da.rgyMI = var6_12;
        da.GldDA = new Integer[59];
    }

    @hG
    public void abs(gI gI2) {
        block11: {
            double d;
            double d2;
            iS[] iSArray;
            block10: {
                double d3;
                double d4;
                block8: {
                    class_243 class_2432;
                    class_1113 class_11132;
                    block9: {
                        long l = awOVO ^ 0x3B3BE4724765L;
                        iSArray = dh.afl();
                        try {
                            if (!this.bab()) {
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw da.abu(matchException);
                        }
                        class_11132 = gI2.bcc();
                        class_2432 = new class_243(class_11132.method_4784(), class_11132.method_4779(), class_11132.method_4778());
                        double d5 = rD.dlmvG.field_1724.method_73189().method_1022(class_2432);
                        try {
                            double d6 = d5 - (double)this.shvfT.VB();
                            d4 = d6 == 0.0 ? 0 : (d6 > 0.0 ? 1 : -1);
                            if (iSArray != null) break block8;
                            if (d4 <= 0) break block9;
                        }
                        catch (MatchException matchException) {
                            throw da.abu(matchException);
                        }
                        return;
                    }
                    this.nRjhq.add(new da$sv(class_11132, class_2432));
                    d4 = this.nRjhq.size() - this.GOeqg.VC();
                }
                d2 = d4;
                try {
                    d3 = d2;
                    if (iSArray != null) break block10;
                    if (d3 <= 0) break block11;
                }
                catch (MatchException matchException) {
                    throw da.abu(matchException);
                }
                d3 = d = 0.0;
            }
            while (d < d2) {
                da$sv da$sv = this.nRjhq.get((int)d);
                da$sv.Taibw.dhd(0.0f);
                da$sv.zUbCd = true;
                ++d;
                if (iSArray == null) continue;
            }
        }
    }

    private static CallSite abB(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/da" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int abA(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = da.abz(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static String abw(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x238E;
        if (UGxHV[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])VRJeL.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    VRJeL.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/da", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = xfLQW[n2].getBytes("ISO-8859-1");
            da.UGxHV[n2] = da.abv(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return UGxHV[n2];
    }

    private static MatchException abu(MatchException matchException) {
        return matchException;
    }

    private static CallSite aby(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/da" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Object abx(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = da.abw(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    @hG
    public void abt(gk gk2) {
        long l = awOVO ^ 0x7352C23DF04L;
        iS[] iSArray = dh.afl();
        try {
            if (!this.bab()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw da.abu(matchException);
        }
        lC lC2 = gk2.baT();
        int n = this.BBPZZ.VC();
        Iterator<da$sv> iterator = this.nRjhq.iterator();
        while (iterator.hasNext()) {
            da$sv da$sv = iterator.next();
            try {
                da$sv.doj(lC2, n);
                if (da$sv.dok()) {
                    iterator.remove();
                }
            }
            catch (MatchException matchException) {
                throw da.abu(matchException);
            }
            if (iSArray == null) continue;
        }
    }

    private static String abv(byte[] byArray) {
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

    private static int abz(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x2358;
        if (GldDA[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = rgyMI[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])eBuXP.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    eBuXP.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/da", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            da.GldDA[n2] = n3;
        }
        return GldDA[n2];
    }

    @Override
    public void YO() {
        super.YO();
        this.nRjhq.clear();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(da.class, "abA", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(da.class, "abx", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
