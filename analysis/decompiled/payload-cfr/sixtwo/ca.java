/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_124
 *  net.minecraft.class_1934
 *  net.minecraft.class_2561
 *  net.minecraft.class_2583
 *  net.minecraft.class_268
 *  net.minecraft.class_310
 *  net.minecraft.class_408
 *  net.minecraft.class_5251
 *  net.minecraft.class_634
 *  net.minecraft.class_640
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
import java.util.HashMap;
import java.util.HashSet;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import java.util.Set;
import java.util.TreeMap;
import java.util.function.Function;
import java.util.function.Predicate;
import java.util.stream.Collectors;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_124;
import net.minecraft.class_1934;
import net.minecraft.class_2561;
import net.minecraft.class_2583;
import net.minecraft.class_268;
import net.minecraft.class_310;
import net.minecraft.class_408;
import net.minecraft.class_5251;
import net.minecraft.class_634;
import net.minecraft.class_640;
import sixtwo.ca$sl;
import sixtwo.co;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.ru;

public class ca
extends co {
    private final mT kkoKC;
    private Map<String, ca$sl> BmYio;
    private final Set<ca$sl> SZBrr;
    private static boolean tONvf;
    private static final long PHZMk;
    private static final String[] pbFOM;
    private static final String[] qtBBV;
    private static final Map mckkR;
    private static final long[] zZGgU;
    private static final Integer[] vMfEW;
    private static final Map WQoAo;
    private static final long pgXwp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static /* synthetic */ String OU(class_640 class_6402) {
        return class_6402.method_2966().name();
    }

    public ca() {
        long l = PHZMk ^ 0x62737EAAC90EL;
        int[] nArray = new int[ca.Pg("e", (int)16402, (long)(0x50A4FF85924A8DC1L ^ l))];
        nArray[0] = (int)ca.Pg("e", (int)14970, (long)(0x4BF11D3DEFB277A8L ^ l));
        nArray[1] = (int)ca.Pg("e", (int)30956, (long)(0x5DEEA6D217923533L ^ l));
        nArray[2] = (int)ca.Pg("e", (int)32614, (long)(0xB977EC69C3B2B6L ^ l));
        nArray[3] = (int)ca.Pg("e", (int)2733, (long)(0x7D4D354F33254777L ^ l));
        nArray[4] = (int)ca.Pg("e", (int)746, (long)(0x618E6619D2494F31L ^ l));
        nArray[5] = (int)ca.Pg("e", (int)32183, (long)(0x56C74F81F3403066L ^ l));
        nArray[ca.Pg("e", (int)24895, (long)(0x4E34B2E029E1ACE2L ^ l))] = (int)ca.Pg("e", (int)29561, (long)(0x67596095D794BEAFL ^ l));
        nArray[ca.Pg("e", (int)4831, (long)(0x1B6C1532B22F5F07L ^ l))] = (int)ca.Pg("e", (int)19010, (long)(0x3750F88FBC0C8784L ^ l));
        nArray[ca.Pg("e", (int)7587, (long)(0x17423B18EDAFD07FL ^ l))] = (int)ca.Pg("e", (int)31858, (long)(0xD1E57874A5C31ACL ^ l));
        nArray[ca.Pg("e", (int)14659, (long)(0x67CC6824BA3A7496L ^ l))] = (int)ca.Pg("e", (int)1528, (long)(0x6AD59CBBECE7482CL ^ l));
        super(nArray, lf.MiBKQ);
        this.kkoKC = mT.cpA();
        this.BmYio = new TreeMap<String, ca$sl>();
        this.SZBrr = new HashSet<ca$sl>();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block24: {
            block23: {
                block22: {
                    block21: {
                        block20: {
                            ca.PHZMk = gb.aYR(-3997543779765898199L, 6302167764031353379L, MethodHandles.lookup().lookupClass()).a(35836888017871L);
                            ca.mckkR = new HashMap<K, V>(13);
                            ca.OW(false);
                            var16 = ca.PHZMk ^ 33888719175133L;
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
                            var25_3 = new String[23];
                            var23_4 = 0;
                            var22_5 = "\u001d\u0084'G\u0011\u00e5\u00e46\u00b6n\u00e3\u0086@\u0007\u0017\u0095x\r?\u00de\u00cf\u007f__ \u007f\u00b6\u00ab>\u00dcA\u00e4 \u00ae\u00e5YE\b\u0084\u00b6a\u00a3\u00e5\u0004X\u00c7h\u001bI\u00d4\u00d7\f{s\b~'\u0010S\u00a1\u00a6\u00ff\u00fe\u000e\u00af\u00cb\u00eb\u0004\u0002\u009fa\u00db\u0094\u0006\u0010\u0016\u00ac\u00a4\u008b1\u00dfQ\u00das\u008d\u008c\u009f\u00da\u0092\u00a9N\u0010\u00b5e\u0017\u00e4l\u001a\u001e\u0084\u0000\u00c0\u000f6\u00ff\u00b0\u00ce] \u00e4\u0088\u00e5c@\u00c3\u00a8\u00f6\u0014ea1\u00a8_g\u0016\u00ca\u0098..\u001c\u00c3\u0015\u000f\n.z\u009f\u00b4\u00d3\u00b1N\u0010\u001a\u00ffz\u0005?\u0092\u00ad\u00d6\u0090\u00ad\u0094q\u0091\u00c3\u000f\u009f\u0010<\u0003\u000bk\u00f7\u0091\u0004\u0088M`\u00c6\u00b6\u00c4\u0005\u00a1\u00af\u0018\u0001\u00e24@\u00a6\u00c4Y\u009f\u009fa\u0013\u00fem+Z?+\u00d8\u00dd\u00ad\u00ae\u0092q\u00bb\u0010\u00d2\u00f2(\u00ca\u00fd|P\u0013p\u00feQ\u00eb\u00d2\u00ee\"?\u0010\u00bf~w\u000f\r\u00f3 \u0019\u0090\u00f7W\u00b3\u00b5\u00ba\u00c1f\u0010P\u00b5\u00db\u0096'\u00d7\u00e7T3\u00ac\u0092(\bC\u0080\u00b7\u0010\u00f3\u0000V\u00dc\u00e3BE#ci\tG\u00ce>~m\u0010\u00ee\u00b4\u0019\u00fd5\u00c8\u00d9B\u00bf\u00abM\u0005\u00bf\u009bF\u00ad(\u00da\u0083w\u0096{G\u0098Q\u00e0Y\u00a9\u00c3\u00ac\u00eb\u0090\u00ffvma\u0093\u00f3\u0007\u001b\u00da\u0090\u00b3\u00c9\u0016j\u00b0\u00f9\u00de.\u00da\u00fd\u001f\u00eb-r\t\u0010\u0083\u00fe\u00b9\u00f5#\u00fc\u00adP\n\u008bx\u00f7\u00d4\t(s\u00104q\u00a2\u00cf\u0095\u008e\u00893\u00ffy\r\u0081&F\u00fc\u0018 \u0012\u00eb\u00e8\u00bf\u00d6\u00a4\u0015\u00cc\u00d5U\u00c8S\u00c4\u00ddDG~\u00a7\u00ca\u00db\u00a5&E\u0096\u00b6\u00f6/\u0084\u0082\u00f7\u0002s\u0018_\u00a2\u0083U\u00c6${\u00afE\u00ec\f\u00ed`\u00c7\u00e8\u00a2\u00ee~\u009a\u0010\"q\u00ec\u00df\u0010\u0000Kt\u00d3}\u00f6\u008e9\u0006e\u00e8<\u0084=\u00d2\u008f\u0010\u0002\u00ec\b\u00c2\u00f2\u00134\u001e\u0010\u00a0\u00ed\b\"\u0098\u00d3\u0082";
                            var24_6 = "\u001d\u0084'G\u0011\u00e5\u00e46\u00b6n\u00e3\u0086@\u0007\u0017\u0095x\r?\u00de\u00cf\u007f__ \u007f\u00b6\u00ab>\u00dcA\u00e4 \u00ae\u00e5YE\b\u0084\u00b6a\u00a3\u00e5\u0004X\u00c7h\u001bI\u00d4\u00d7\f{s\b~'\u0010S\u00a1\u00a6\u00ff\u00fe\u000e\u00af\u00cb\u00eb\u0004\u0002\u009fa\u00db\u0094\u0006\u0010\u0016\u00ac\u00a4\u008b1\u00dfQ\u00das\u008d\u008c\u009f\u00da\u0092\u00a9N\u0010\u00b5e\u0017\u00e4l\u001a\u001e\u0084\u0000\u00c0\u000f6\u00ff\u00b0\u00ce] \u00e4\u0088\u00e5c@\u00c3\u00a8\u00f6\u0014ea1\u00a8_g\u0016\u00ca\u0098..\u001c\u00c3\u0015\u000f\n.z\u009f\u00b4\u00d3\u00b1N\u0010\u001a\u00ffz\u0005?\u0092\u00ad\u00d6\u0090\u00ad\u0094q\u0091\u00c3\u000f\u009f\u0010<\u0003\u000bk\u00f7\u0091\u0004\u0088M`\u00c6\u00b6\u00c4\u0005\u00a1\u00af\u0018\u0001\u00e24@\u00a6\u00c4Y\u009f\u009fa\u0013\u00fem+Z?+\u00d8\u00dd\u00ad\u00ae\u0092q\u00bb\u0010\u00d2\u00f2(\u00ca\u00fd|P\u0013p\u00feQ\u00eb\u00d2\u00ee\"?\u0010\u00bf~w\u000f\r\u00f3 \u0019\u0090\u00f7W\u00b3\u00b5\u00ba\u00c1f\u0010P\u00b5\u00db\u0096'\u00d7\u00e7T3\u00ac\u0092(\bC\u0080\u00b7\u0010\u00f3\u0000V\u00dc\u00e3BE#ci\tG\u00ce>~m\u0010\u00ee\u00b4\u0019\u00fd5\u00c8\u00d9B\u00bf\u00abM\u0005\u00bf\u009bF\u00ad(\u00da\u0083w\u0096{G\u0098Q\u00e0Y\u00a9\u00c3\u00ac\u00eb\u0090\u00ffvma\u0093\u00f3\u0007\u001b\u00da\u0090\u00b3\u00c9\u0016j\u00b0\u00f9\u00de.\u00da\u00fd\u001f\u00eb-r\t\u0010\u0083\u00fe\u00b9\u00f5#\u00fc\u00adP\n\u008bx\u00f7\u00d4\t(s\u00104q\u00a2\u00cf\u0095\u008e\u00893\u00ffy\r\u0081&F\u00fc\u0018 \u0012\u00eb\u00e8\u00bf\u00d6\u00a4\u0015\u00cc\u00d5U\u00c8S\u00c4\u00ddDG~\u00a7\u00ca\u00db\u00a5&E\u0096\u00b6\u00f6/\u0084\u0082\u00f7\u0002s\u0018_\u00a2\u0083U\u00c6${\u00afE\u00ec\f\u00ed`\u00c7\u00e8\u00a2\u00ee~\u009a\u0010\"q\u00ec\u00df\u0010\u0000Kt\u00d3}\u00f6\u008e9\u0006e\u00e8<\u0084=\u00d2\u008f\u0010\u0002\u00ec\b\u00c2\u00f2\u00134\u001e\u0010\u00a0\u00ed\b\"\u0098\u00d3\u0082".length();
                            var21_7 = 24;
                            var20_8 = -1;
lbl21:
                            // 2 sources

                            while (true) {
                                v3 = ++var20_8;
                                v4 = var22_5.substring(v3, v3 + var21_7);
                                v5 = -1;
                                break block20;
                                break;
                            }
lbl26:
                            // 1 sources

                            while (true) {
                                var25_3[var23_4++] = ca.Pa(var26_9).intern();
                                if ((var20_8 += var21_7) < var24_6) {
                                    var21_7 = var22_5.charAt(var20_8);
                                    ** continue;
                                }
                                var22_5 = "\u0089\u00f5z\u008d\u00f0\u00e3\u00f9\u00dfa\u00965\u0080U}kS0\u00cfCZ\u0087J\u0089\u0092\u00ae\u0093\u00b1\u00f3\u00ed\u0090\u00c5G\u00a2UM\u0005\u00bd\u00f6\u0089\u0010\u0080=\u00f4\u00e7\u0087\u00d1\u00da\u001e\u00feg\n\u00c2S\u00f9G\u000e\u00ec\u008f\u00df\u00ecQ\u00cc\u00cc\u00c0o";
                                var24_6 = "\u0089\u00f5z\u008d\u00f0\u00e3\u00f9\u00dfa\u00965\u0080U}kS0\u00cfCZ\u0087J\u0089\u0092\u00ae\u0093\u00b1\u00f3\u00ed\u0090\u00c5G\u00a2UM\u0005\u00bd\u00f6\u0089\u0010\u0080=\u00f4\u00e7\u0087\u00d1\u00da\u001e\u00feg\n\u00c2S\u00f9G\u000e\u00ec\u008f\u00df\u00ecQ\u00cc\u00cc\u00c0o".length();
                                var21_7 = 16;
                                var20_8 = -1;
lbl35:
                                // 2 sources

                                while (true) {
                                    v6 = ++var20_8;
                                    v4 = var22_5.substring(v6, v6 + var21_7);
                                    v5 = 0;
                                    break block20;
                                    break;
                                }
                                break;
                            }
lbl40:
                            // 1 sources

                            while (true) {
                                var25_3[var23_4++] = ca.Pa(var26_9).intern();
                                if ((var20_8 += var21_7) < var24_6) {
                                    var21_7 = var22_5.charAt(var20_8);
                                    ** continue;
                                }
                                break block21;
                                break;
                            }
                        }
                        var26_9 = var18_1.doFinal(v4.getBytes("ISO-8859-1"));
                        switch (v5) {
                            default: {
                                ** continue;
                            }
                            ** case 0:
lbl52:
                            // 1 sources

                            ** continue;
                        }
                    }
                    ca.pbFOM = var25_3;
                    ca.qtBBV = new String[23];
                    ca.WQoAo = new HashMap<K, V>(13);
                    var5_10 = Cipher.getInstance("DES/CBC/NoPadding");
                    v7 = SecretKeyFactory.getInstance("DES");
                    v8 = new byte[8];
                    v9 = v8;
                    v8[0] = (byte)(var16 >>> 56);
                    for (var6_11 = 1; var6_11 < 8; ++var6_11) {
                        v9 = v9;
                        v9[var6_11] = (byte)(var16 << var6_11 * 8 >>> 56);
                    }
                    var5_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                    var11_12 = new long[17];
                    var8_13 = 0;
                    var9_14 = "\u008c\u00d2\u00ed\u00ad\u00e6A\u00c6\u008e\u00b3\u0006 \u00fc{*\u00e2\u0015\u00cd\u00a1\u00cf\u00e6mQ\u00c7\u00d0\u00af9hW\u00ee\u008d\u00a88\u009f\u00d9\u00ed[\u00eb\u00a9\u00d8\u0099\u0003s\u00f2m\u0003\u00bcDu\u009d6l\u0092S\u00b7\u0010^wA: \u00f2J\u0017\u0088b\u0018\u00ad<\u00f3\u00fc\"\u0006@\u00f3)\u00e2@\u00e5kM>#8\u00ef-\u0085\u00f6\u0082\u00eb\u00f7\u0080\u00a2\u00d2\u0012^\u00d83@\u0007y`UA\u0095\u0085\u00da\u00ff\u00b8\u0084\u00d0\u0010\u00c6\u00a7 U\u00fa\u00d3h\u00a4\u00d9";
                    var10_15 = "\u008c\u00d2\u00ed\u00ad\u00e6A\u00c6\u008e\u00b3\u0006 \u00fc{*\u00e2\u0015\u00cd\u00a1\u00cf\u00e6mQ\u00c7\u00d0\u00af9hW\u00ee\u008d\u00a88\u009f\u00d9\u00ed[\u00eb\u00a9\u00d8\u0099\u0003s\u00f2m\u0003\u00bcDu\u009d6l\u0092S\u00b7\u0010^wA: \u00f2J\u0017\u0088b\u0018\u00ad<\u00f3\u00fc\"\u0006@\u00f3)\u00e2@\u00e5kM>#8\u00ef-\u0085\u00f6\u0082\u00eb\u00f7\u0080\u00a2\u00d2\u0012^\u00d83@\u0007y`UA\u0095\u0085\u00da\u00ff\u00b8\u0084\u00d0\u0010\u00c6\u00a7 U\u00fa\u00d3h\u00a4\u00d9".length();
                    var7_16 = 0;
                    while (true) {
                        var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                        v10 = var11_12;
                        v11 = var8_13++;
                        v12 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                        v13 = -1;
                        break block22;
                        break;
                    }
lbl79:
                    // 1 sources

                    while (true) {
                        v10[v11] = v14;
                        if (var7_16 < var10_15) ** continue;
                        var9_14 = "\u0094b\u001a\u00f0\u00b9+W\u0001\u001fu\u00cc\u0004\u0007\u00b4U\u0086";
                        var10_15 = "\u0094b\u001a\u00f0\u00b9+W\u0001\u001fu\u00cc\u0004\u0007\u00b4U\u0086".length();
                        var7_16 = 0;
                        while (true) {
                            var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                            v10 = var11_12;
                            v11 = var8_13++;
                            v12 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                            v13 = 0;
                            break block22;
                            break;
                        }
                        break;
                    }
lbl92:
                    // 1 sources

                    while (true) {
                        v10[v11] = v14;
                        if (var7_16 < var10_15) ** continue;
                        break block23;
                        break;
                    }
                }
                var13_18 = v12;
                var15_19 = var5_10.doFinal(new byte[]{(byte)(var13_18 >>> 56), (byte)(var13_18 >>> 48), (byte)(var13_18 >>> 40), (byte)(var13_18 >>> 32), (byte)(var13_18 >>> 24), (byte)(var13_18 >>> 16), (byte)(var13_18 >>> 8), (byte)var13_18});
                v14 = ((long)var15_19[0] & 255L) << 56 | ((long)var15_19[1] & 255L) << 48 | ((long)var15_19[2] & 255L) << 40 | ((long)var15_19[3] & 255L) << 32 | ((long)var15_19[4] & 255L) << 24 | ((long)var15_19[5] & 255L) << 16 | ((long)var15_19[6] & 255L) << 8 | (long)var15_19[7] & 255L;
                switch (v13) {
                    default: {
                        ** continue;
                    }
                    ** case 0:
lbl105:
                    // 1 sources

                    ** continue;
                }
            }
            ca.zZGgU = var11_12;
            ca.vMfEW = new Integer[17];
            var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
            v15 = SecretKeyFactory.getInstance("DES");
            v16 = new byte[8];
            v17 = v16;
            v16[0] = (byte)(var16 >>> 56);
            for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                v17 = v17;
                v17[var1_21] = (byte)(var16 << var1_21 * 8 >>> 56);
            }
            break block24;
lbl119:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_20.init(2, (Key)v15.generateSecret(new DESKeySpec(v17)), new IvParameterSpec(new byte[8]));
        var2_22 = -3313581412779160603L;
        var4_23 = var0_20.doFinal(new byte[]{(byte)(var2_22 >>> 56), (byte)(var2_22 >>> 48), (byte)(var2_22 >>> 40), (byte)(var2_22 >>> 32), (byte)(var2_22 >>> 24), (byte)(var2_22 >>> 16), (byte)(var2_22 >>> 8), (byte)var2_22});
        ** while (true)
        ca.pgXwp = ((long)var4_23[0] & 255L) << 56 | ((long)var4_23[1] & 255L) << 48 | ((long)var4_23[2] & 255L) << 40 | ((long)var4_23[3] & 255L) << 32 | ((long)var4_23[4] & 255L) << 24 | ((long)var4_23[5] & 255L) << 16 | ((long)var4_23[6] & 255L) << 8 | (long)var4_23[7] & 255L;
    }

    private static CallSite Pd(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ca" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int Pe(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x68C6;
        if (vMfEW[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = zZGgU[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])WQoAo.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    WQoAo.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ca", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ca.vMfEW[n2] = n3;
        }
        return vMfEW[n2];
    }

    private static Object Pc(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ca.Pb(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int Pf(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = ca.Pe(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private List<ca$sl> OP() {
        class_634 class_6342;
        boolean bl;
        ArrayList<ca$sl> arrayList;
        long l;
        block29: {
            block30: {
                class_310 class_3102;
                block28: {
                    block27: {
                        l = PHZMk ^ 0x2416CD540C26L;
                        arrayList = new ArrayList<ca$sl>();
                        bl = ca.OY();
                        try {
                            try {
                                class_3102 = rD.dlmvG;
                                if (!bl) break block27;
                                if (class_3102.field_1687 == null) return arrayList;
                            }
                            catch (MatchException matchException) {
                                throw ca.OZ(matchException);
                            }
                            class_3102 = rD.dlmvG;
                        }
                        catch (MatchException matchException) {
                            throw ca.OZ(matchException);
                        }
                    }
                    try {
                        try {
                            if (!bl) break block28;
                            if (class_3102.method_47392()) return arrayList;
                        }
                        catch (MatchException matchException) {
                            throw ca.OZ(matchException);
                        }
                        class_3102 = rD.dlmvG;
                    }
                    catch (MatchException matchException) {
                        throw ca.OZ(matchException);
                    }
                }
                try {
                    try {
                        class_6342 = class_3102.method_1562();
                        if (!bl) break block29;
                        if (class_6342 != null) break block30;
                        return arrayList;
                    }
                    catch (MatchException matchException) {
                        throw ca.OZ(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw ca.OZ(matchException);
                }
            }
            class_6342 = rD.dlmvG.method_1562();
        }
        for (class_640 class_6402 : class_6342.method_2880()) {
            CallSite callSite;
            String string;
            String string2;
            class_2561 class_25612;
            class_268 class_2682;
            block35: {
                block36: {
                    block33: {
                        String string3;
                        block34: {
                            class_268 class_2683;
                            block31: {
                                block32: {
                                    try {
                                        try {
                                            class_2683 = class_6402.method_2955();
                                            if (!bl) break block31;
                                            if (class_2683 != null) break block32;
                                        }
                                        catch (MatchException matchException) {
                                            throw ca.OZ(matchException);
                                        }
                                        if (bl) continue;
                                    }
                                    catch (MatchException matchException) {
                                        throw ca.OZ(matchException);
                                    }
                                }
                                class_2683 = class_6402.method_2955();
                            }
                            class_2682 = class_2683;
                            class_25612 = class_2682.method_1144();
                            string2 = ru.djG(class_25612.getString());
                            string3 = class_124.method_539((String)string2);
                            try {
                                try {
                                    string = string3;
                                    if (!bl) break block33;
                                    if (string != null) break block34;
                                }
                                catch (MatchException matchException) {
                                    throw ca.OZ(matchException);
                                }
                                if (bl) continue;
                            }
                            catch (MatchException matchException) {
                                throw ca.OZ(matchException);
                            }
                        }
                        string = string3 = ru.djG(string3).toLowerCase();
                    }
                    try {
                        try {
                            if (!bl) break block35;
                            if (ca.OR(string)) break block36;
                        }
                        catch (MatchException matchException) {
                            throw ca.OZ(matchException);
                        }
                        if (bl) continue;
                    }
                    catch (MatchException matchException) {
                        throw ca.OZ(matchException);
                    }
                }
                string = String.join((CharSequence)((Object)ca.Pd("m", (int)16931, (long)(0x44FDF920F3C0B519L ^ l))), class_2682.method_1204());
            }
            String string4 = string;
            mG mG2 = this.OS(class_25612, class_2682);
            try {
                callSite = class_6402.method_2958() == class_1934.field_9219 ? ca.Pd("m", (int)27778, (long)(0x62ED9DB6E54F9BAFL ^ l)) : ca.Pd("m", (int)25768, (long)(0x2AD88D747C6A139BL ^ l));
            }
            catch (MatchException matchException) {
                throw ca.OZ(matchException);
            }
            CallSite callSite2 = callSite;
            arrayList.add(new ca$sl(string4, string2, mG2, (String)((Object)callSite2)));
            if (bl) continue;
        }
        return arrayList;
    }

    @Override
    protected void NV(lC lC2) {
        block11: {
            Object object;
            long l = PHZMk ^ 0x2056BB9F05CAL;
            boolean bl = ca.OY();
            super.NV(lC2);
            boolean bl2 = bl;
            ii ii2 = rD.dlM();
            lq lq2 = lE.joxgd.bYM(7.0f);
            float f = 22.0f;
            zXCXX.bUa(lq2);
            Object object2 = null;
            for (ca$sl ca$sl : this.BmYio.values()) {
                lf lf2;
                float f2;
                rk rk2;
                block12: {
                    block13: {
                        rk2 = ca$sl.VoBja;
                        try {
                            try {
                                object = rk2;
                                if (!bl2) break block11;
                                float f3 = ((rk)object).dhj() - 0.0f;
                                f2 = f3 == 0.0f ? 0 : (f3 > 0.0f ? 1 : -1);
                                if (!bl2) break block12;
                            }
                            catch (MatchException matchException) {
                                throw ca.OZ(matchException);
                            }
                            if (f2 != false) break block13;
                        }
                        catch (MatchException matchException) {
                            throw ca.OZ(matchException);
                        }
                        object2 = ca$sl;
                        if (bl2) continue;
                    }
                    f2 = (float)ca$sl.BwIFl.equals(ca.Pd("m", (int)28568, (long)(0x3053A18CA72F1141L ^ l)));
                }
                try {
                    lf2 = f2 != false ? lf.XzjRK : lf.DzxCD;
                }
                catch (MatchException matchException) {
                    throw ca.OZ(matchException);
                }
                lf lf3 = lf2;
                float f4 = -4.5f + 4.5f * rk2.dhj();
                mG mG2 = ii2.bjb().coa(255.0f * rk2.dhj());
                mG mG3 = ii2.bjc().coa(255.0f * rk2.dhj());
                float f5 = this.toIeR + 7.0f * rk2.dhj();
                float f6 = this.QWaAn + f + f4 + jf.bAH(8.0f, 18.0f);
                lC2.cem(lf3, f5, f6, 8.0f, mG3);
                float f7 = this.toIeR + 13.0f + 7.0f * rk2.dhj();
                float f8 = this.QWaAn + f + f4 + jf.bAH(lq2.cat(), 18.0f);
                lC2.cer(lq2, ca$sl.sliuY, f7, f8, ca$sl.iIDDI);
                float f9 = this.toIeR + this.jTsqG - 7.0f * rk2.dhj();
                lC2.cev(lq2, ca$sl.EVJUd, f9, f8, mG2);
                f += 18.0f;
                if (bl2) continue;
            }
            try {
                try {
                    zXCXX.endBatch();
                    object = object2;
                    if (!bl2 || object == null) break block11;
                }
                catch (MatchException matchException) {
                    throw ca.OZ(matchException);
                }
                object = this.BmYio.remove(((ca$sl)object2).EVJUd);
            }
            catch (MatchException matchException) {
                throw ca.OZ(matchException);
            }
        }
    }

    /*
     * Could not resolve type clashes
     * Unable to fully structure code
     */
    @Override
    public void LX(lC var1_1) {
        block36: {
            block37: {
                block35: {
                    block31: {
                        block28: {
                            block29: {
                                var2_2 = ca.PHZMk ^ 58193881000458L;
                                this.jTsqG = 92.0f;
                                this.Xtjvx = 20.0f;
                                var4_3 = ca.OX();
                                try {
                                    try {
                                        v0 = this;
                                        if (var4_3) break block28;
                                        if (!v0.kkoKC.cpC(ca.pgXwp)) break block29;
                                    }
                                    catch (MatchException v1) {
                                        throw ca.OZ(v1);
                                    }
                                    this.SZBrr.clear();
                                    this.SZBrr.addAll(this.OP());
                                    this.SZBrr.addAll(this.OQ());
                                    this.kkoKC.cpB();
                                }
                                catch (MatchException v2) {
                                    throw ca.OZ(v2);
                                }
                            }
                            v0 = this;
                        }
                        for (Object var6_5 : v0.SZBrr) {
                            block34: {
                                block30: {
                                    block33: {
                                        block32: {
                                            try {
                                                try {
                                                    v3 = this.BmYio;
                                                    v4 = var6_5.EVJUd;
                                                    if (var4_3) break block30;
                                                    v5 = v3.containsKey(v4);
                                                    if (var4_3) break block31;
                                                }
                                                catch (MatchException v6) {
                                                    throw ca.OZ(v6);
                                                }
                                                if (v5) {
                                                }
                                                ** GOTO lbl61
                                            }
                                            catch (MatchException v7) {
                                                throw ca.OZ(v7);
                                            }
                                            this.BmYio.replace(var6_5.EVJUd, (ca$sl)var6_5);
                                            var7_6 = var6_5.VoBja;
                                            try {
                                                try {
                                                    v8 = var7_6;
                                                    if (var4_3) break block32;
                                                    if (v8.dhj() != 0.0f) break block33;
                                                }
                                                catch (MatchException v9) {
                                                    throw ca.OZ(v9);
                                                }
                                                v8 = var7_6;
                                            }
                                            catch (MatchException v10) {
                                                throw ca.OZ(v10);
                                            }
                                        }
                                        v8.dhe(1.0f);
                                    }
                                    try {
                                        if (!var4_3) break block34;
lbl61:
                                        // 2 sources

                                        v3 = this.BmYio;
                                        v4 = var6_5.EVJUd;
                                    }
                                    catch (MatchException v11) {
                                        throw ca.OZ(v11);
                                    }
                                }
                                v3.put(v4, (ca$sl)var6_5);
                                var6_5.VoBja.dhe(1.0f);
                            }
                            if (!var4_3) continue;
                        }
                        try {
                            v12 = this;
                            if (var4_3) break block35;
                            v5 = v12.BmYio.isEmpty();
                        }
                        catch (MatchException v13) {
                            throw ca.OZ(v13);
                        }
                    }
                    if (v5) break block37;
                    v12 = this;
                }
                v12.Xtjvx += 5.0f;
            }
            var5_4 = lE.joxgd.bYM(7.0f);
            for (Object var7_6 : this.BmYio.values()) {
                var8_7 = var7_6.VoBja;
                var9_8 = var7_6.EVJUd;
                var10_9 = var7_6.sliuY;
                try {
                    var8_7.dhc(this.SZBrr.stream().anyMatch((Predicate<ca$sl>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Z, OV(java.lang.String sixtwo.ca$sl ), (Lsixtwo/ca$sl;)Z)((String)var9_8)));
                    var8_7.dhs(rj.XzDkv);
                    this.jTsqG = Math.max(var5_4.cao(var9_8) + var5_4.cao(var10_9) + 30.0f, this.jTsqG);
                    this.Xtjvx += 18.0f * var8_7.dhj();
                    if (!var4_3) {
                        if (!var4_3) continue;
                        break;
                    }
                    break block36;
                }
                catch (MatchException v14) {
                    throw ca.OZ(v14);
                }
            }
            super.LX(var1_1);
        }
    }

    public static boolean OR(String string) {
        boolean bl;
        block66: {
            block68: {
                block67: {
                    long l = PHZMk ^ 0x51546B3DBE9EL;
                    boolean bl2 = ca.OX();
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
                                                                                                                            try {
                                                                                                                                try {
                                                                                                                                    try {
                                                                                                                                        try {
                                                                                                                                            try {
                                                                                                                                                try {
                                                                                                                                                    try {
                                                                                                                                                        bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)14372, (long)(0x731B7200F2E3FDB5L ^ l))));
                                                                                                                                                        if (bl2) break block66;
                                                                                                                                                        if (bl) break block67;
                                                                                                                                                    }
                                                                                                                                                    catch (MatchException matchException) {
                                                                                                                                                        throw ca.OZ(matchException);
                                                                                                                                                    }
                                                                                                                                                    bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)1576, (long)(0x1AF34CB2970C3AFL ^ l))));
                                                                                                                                                    if (bl2) break block66;
                                                                                                                                                }
                                                                                                                                                catch (MatchException matchException) {
                                                                                                                                                    throw ca.OZ(matchException);
                                                                                                                                                }
                                                                                                                                                if (bl) break block67;
                                                                                                                                            }
                                                                                                                                            catch (MatchException matchException) {
                                                                                                                                                throw ca.OZ(matchException);
                                                                                                                                            }
                                                                                                                                            bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)28453, (long)(0x59B578F2A76C2AACL ^ l))));
                                                                                                                                            if (bl2) break block66;
                                                                                                                                        }
                                                                                                                                        catch (MatchException matchException) {
                                                                                                                                            throw ca.OZ(matchException);
                                                                                                                                        }
                                                                                                                                        if (bl) break block67;
                                                                                                                                    }
                                                                                                                                    catch (MatchException matchException) {
                                                                                                                                        throw ca.OZ(matchException);
                                                                                                                                    }
                                                                                                                                    bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)3997, (long)(0x33EC871097294A1EL ^ l))));
                                                                                                                                    if (bl2) break block66;
                                                                                                                                }
                                                                                                                                catch (MatchException matchException) {
                                                                                                                                    throw ca.OZ(matchException);
                                                                                                                                }
                                                                                                                                if (bl) break block67;
                                                                                                                            }
                                                                                                                            catch (MatchException matchException) {
                                                                                                                                throw ca.OZ(matchException);
                                                                                                                            }
                                                                                                                            bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)13311, (long)(0x52134305008DF66FL ^ l))));
                                                                                                                            if (bl2) break block66;
                                                                                                                        }
                                                                                                                        catch (MatchException matchException) {
                                                                                                                            throw ca.OZ(matchException);
                                                                                                                        }
                                                                                                                        if (bl) break block67;
                                                                                                                    }
                                                                                                                    catch (MatchException matchException) {
                                                                                                                        throw ca.OZ(matchException);
                                                                                                                    }
                                                                                                                    bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)26701, (long)(0x36EE9ECD6F832DC3L ^ l))));
                                                                                                                    if (bl2) break block66;
                                                                                                                }
                                                                                                                catch (MatchException matchException) {
                                                                                                                    throw ca.OZ(matchException);
                                                                                                                }
                                                                                                                if (bl) break block67;
                                                                                                            }
                                                                                                            catch (MatchException matchException) {
                                                                                                                throw ca.OZ(matchException);
                                                                                                            }
                                                                                                            bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)18675, (long)(0x3B2D44707AF0D7CL ^ l))));
                                                                                                            if (bl2) break block66;
                                                                                                        }
                                                                                                        catch (MatchException matchException) {
                                                                                                            throw ca.OZ(matchException);
                                                                                                        }
                                                                                                        if (bl) break block67;
                                                                                                    }
                                                                                                    catch (MatchException matchException) {
                                                                                                        throw ca.OZ(matchException);
                                                                                                    }
                                                                                                    bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)24200, (long)(0x55EF931E80339B0EL ^ l))));
                                                                                                    if (bl2) break block66;
                                                                                                }
                                                                                                catch (MatchException matchException) {
                                                                                                    throw ca.OZ(matchException);
                                                                                                }
                                                                                                if (bl) break block67;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw ca.OZ(matchException);
                                                                                            }
                                                                                            bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)17848, (long)(0x70ACA42BD1538030L ^ l))));
                                                                                            if (bl2) break block66;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw ca.OZ(matchException);
                                                                                        }
                                                                                        if (bl) break block67;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw ca.OZ(matchException);
                                                                                    }
                                                                                    bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)26272, (long)(0x472F0CDC2DEFA324L ^ l))));
                                                                                    if (bl2) break block66;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw ca.OZ(matchException);
                                                                                }
                                                                                if (bl) break block67;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw ca.OZ(matchException);
                                                                            }
                                                                            bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)8505, (long)(0x1E986A8A782964B8L ^ l))));
                                                                            if (bl2) break block66;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw ca.OZ(matchException);
                                                                        }
                                                                        if (bl) break block67;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw ca.OZ(matchException);
                                                                    }
                                                                    bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)18944, (long)(0xC859AC24DDF8F96L ^ l))));
                                                                    if (bl2) break block66;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw ca.OZ(matchException);
                                                                }
                                                                if (bl) break block67;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw ca.OZ(matchException);
                                                            }
                                                            bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)9306, (long)(0x66544089A91B61D6L ^ l))));
                                                            if (bl2) break block66;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw ca.OZ(matchException);
                                                        }
                                                        if (bl) break block67;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw ca.OZ(matchException);
                                                    }
                                                    bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)16267, (long)(0x5AA55CE92556FA01L ^ l))));
                                                    if (bl2) break block66;
                                                }
                                                catch (MatchException matchException) {
                                                    throw ca.OZ(matchException);
                                                }
                                                if (bl) break block67;
                                            }
                                            catch (MatchException matchException) {
                                                throw ca.OZ(matchException);
                                            }
                                            bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)551, (long)(0x573B428D785AC7B5L ^ l))));
                                            if (bl2) break block66;
                                        }
                                        catch (MatchException matchException) {
                                            throw ca.OZ(matchException);
                                        }
                                        if (bl) break block67;
                                    }
                                    catch (MatchException matchException) {
                                        throw ca.OZ(matchException);
                                    }
                                    bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)16447, (long)(0x71161D5E180B05BFL ^ l))));
                                    if (bl2) break block66;
                                }
                                catch (MatchException matchException) {
                                    throw ca.OZ(matchException);
                                }
                                if (bl) break block67;
                            }
                            catch (MatchException matchException) {
                                throw ca.OZ(matchException);
                            }
                            bl = string.contains((CharSequence)((Object)ca.Pd("m", (int)2457, (long)(0x593807783C2F4C1CL ^ l))));
                            if (bl2) break block66;
                        }
                        catch (MatchException matchException) {
                            throw ca.OZ(matchException);
                        }
                        if (!bl) break block68;
                    }
                    catch (MatchException matchException) {
                        throw ca.OZ(matchException);
                    }
                }
                bl = true;
                break block66;
            }
            bl = false;
        }
        return bl;
    }

    @Override
    public boolean Om() {
        boolean bl;
        block10: {
            block12: {
                block11: {
                    boolean bl2;
                    boolean bl3;
                    block8: {
                        block9: {
                            long l = PHZMk ^ 0x23DB2D1F40E0L;
                            bl3 = ca.OY();
                            try {
                                bl2 = this.BmYio.isEmpty();
                                if (!bl3) break block8;
                                if (bl2) break block9;
                            }
                            catch (MatchException matchException) {
                                throw ca.OZ(matchException);
                            }
                            bl2 = true;
                            break block8;
                        }
                        bl2 = false;
                    }
                    boolean bl4 = bl2;
                    boolean bl5 = rD.dlmvG.field_1755 instanceof class_408;
                    try {
                        try {
                            try {
                                bl = bl4;
                                if (!bl3) break block10;
                                if (bl) break block11;
                            }
                            catch (MatchException matchException) {
                                throw ca.OZ(matchException);
                            }
                            bl = bl5;
                            if (!bl3) break block10;
                        }
                        catch (MatchException matchException) {
                            throw ca.OZ(matchException);
                        }
                        if (!bl) break block12;
                    }
                    catch (MatchException matchException) {
                        throw ca.OZ(matchException);
                    }
                }
                bl = true;
                break block10;
            }
            bl = false;
        }
        return bl;
    }

    public static void OW(boolean bl) {
        tONvf = bl;
    }

    public static boolean OX() {
        return tONvf;
    }

    private static CallSite Pg(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ca" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException OZ(MatchException matchException) {
        return matchException;
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private List<ca$sl> OQ() {
        block39: {
            block40: {
                block38: {
                    block37: {
                        var1_1 = ca.PHZMk ^ 37164835536518L;
                        var4_2 = new ArrayList<ca$sl>();
                        var3_3 = ca.OX();
                        try {
                            try {
                                v0 = rD.dlmvG;
                                if (var3_3) break block37;
                                if (v0.field_1687 != null) {
                                }
                                ** GOTO lbl39
                            }
                            catch (MatchException v1) {
                                throw ca.OZ(v1);
                            }
                            v0 = rD.dlmvG;
                        }
                        catch (MatchException v2) {
                            throw ca.OZ(v2);
                        }
                    }
                    try {
                        try {
                            if (var3_3) break block38;
                            if (!v0.method_47392()) {
                            }
                            ** GOTO lbl39
                        }
                        catch (MatchException v3) {
                            throw ca.OZ(v3);
                        }
                        v0 = rD.dlmvG;
                    }
                    catch (MatchException v4) {
                        throw ca.OZ(v4);
                    }
                }
                try {
                    try {
                        v5 /* !! */  = v0.method_1562();
                        if (var3_3) break block39;
                        if (v5 /* !! */  != null) break block40;
                    }
                    catch (MatchException v6) {
                        throw ca.OZ(v6);
                    }
lbl39:
                    // 3 sources

                    return var4_2;
                }
                catch (MatchException v7) {
                    throw ca.OZ(v7);
                }
            }
            v5 /* !! */  = rD.dlmvG.method_1562().method_2880().stream().map((Function<class_640, String>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)Ljava/lang/Object;, OU(net.minecraft.class_640 ), (Lnet/minecraft/class_640;)Ljava/lang/String;)()).collect(Collectors.toSet());
        }
        var5_4 = (Set)v5 /* !! */ ;
        for (class_268 var7_6 : rD.dlmvG.field_1687.method_8428().method_1159()) {
            block47: {
                block48: {
                    block45: {
                        block46: {
                            block43: {
                                block41: {
                                    block42: {
                                        var8_7 = var7_6.method_1204();
                                        try {
                                            try {
                                                v8 = var8_7.isEmpty();
                                                if (var3_3) break block41;
                                                if (!v8) break block42;
                                            }
                                            catch (MatchException v9) {
                                                throw ca.OZ(v9);
                                            }
                                            if (!var3_3) continue;
                                        }
                                        catch (MatchException v10) {
                                            throw ca.OZ(v10);
                                        }
                                    }
                                    v8 = false;
                                }
                                var9_8 = v8;
                                for (String var11_10 : var8_7) {
                                    block44: {
                                        try {
                                            try {
                                                v11 = var5_4.contains(var11_10);
                                                if (var3_3) break block43;
                                                if (var3_3) break block44;
                                            }
                                            catch (MatchException v12) {
                                                throw ca.OZ(v12);
                                            }
                                            if (v11) {
                                            }
                                            ** GOTO lbl83
                                        }
                                        catch (MatchException v13) {
                                            throw ca.OZ(v13);
                                        }
                                        v14 = true;
                                    }
                                    var9_8 = v14;
                                    try {
                                        if (!var3_3) break;
lbl83:
                                        // 2 sources

                                        if (!var3_3) continue;
                                        break;
                                    }
                                    catch (MatchException v15) {
                                        throw ca.OZ(v15);
                                    }
                                }
                                v11 = var9_8;
                            }
                            try {
                                if (v11 && !var3_3) continue;
                            }
                            catch (MatchException v16) {
                                throw ca.OZ(v16);
                            }
                            var10_9 = var7_6.method_1144();
                            var11_10 = var10_9.getString();
                            try {
                                try {
                                    v17 = var11_10;
                                    if (var3_3) break block45;
                                    if (!v17.isEmpty()) break block46;
                                }
                                catch (MatchException v18) {
                                    throw ca.OZ(v18);
                                }
                                if (!var3_3) continue;
                            }
                            catch (MatchException v19) {
                                throw ca.OZ(v19);
                            }
                        }
                        v17 = ru.djG(class_124.method_539((String)var11_10)).toLowerCase();
                    }
                    var12_11 = v17;
                    try {
                        try {
                            v20 = var12_11;
                            if (var3_3) break block47;
                            if (ca.OR(v20)) break block48;
                        }
                        catch (MatchException v21) {
                            throw ca.OZ(v21);
                        }
                        if (!var3_3) continue;
                    }
                    catch (MatchException v22) {
                        throw ca.OZ(v22);
                    }
                }
                v20 = String.join((CharSequence)ca.Pd("m", (int)14959, (long)(6105009628520202208L ^ var1_1)), var8_7);
            }
            var13_12 = v20;
            var4_2.add(new ca$sl(var13_12, var11_10, this.OS(var10_9, var7_6), (String)ca.Pd("m", (int)18353, (long)(5593718357101789757L ^ var1_1))));
            if (!var3_3) continue;
        }
        return var4_2;
    }

    private static /* synthetic */ boolean OV(String string, ca$sl ca$sl) {
        return ca$sl.EVJUd.equals(string);
    }

    private mG OS(class_2561 class_25612, class_268 class_2682) {
        block15: {
            Integer n;
            block17: {
                class_124 class_1242;
                boolean bl;
                block16: {
                    class_268 class_2683;
                    block14: {
                        long l = PHZMk ^ 0x1165E401B19L;
                        class_5251 class_52512 = class_25612.method_10866().method_10973();
                        bl = ca.OX();
                        try {
                            if (class_52512 != null) {
                                return mG.cnQ(ca.Pg("e", (int)9687, (long)(0x658305D02B80BA19L ^ l)) | class_52512.method_27716());
                            }
                        }
                        catch (MatchException matchException) {
                            throw ca.OZ(matchException);
                        }
                        class_5251[] class_5251Array = new class_5251[1];
                        try {
                            class_25612.method_27658((class_25832, string) -> {
                                long l = PHZMk ^ 0x21323B7DC382L;
                                try {
                                    if (class_25832.method_10973() != null) {
                                        class_5251Array[0] = class_25832.method_10973();
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw ca.OZ(matchException);
                                }
                                return Optional.empty();
                            }, class_2583.field_24360);
                            if (class_5251Array[0] != null) {
                                return mG.cnQ(ca.Pg("e", (int)9834, (long)(0x531D1B49149BB9AAL ^ l)) | class_5251Array[0].method_27716());
                            }
                        }
                        catch (MatchException matchException) {
                            throw ca.OZ(matchException);
                        }
                        try {
                            class_2683 = class_2682;
                            if (bl) break block14;
                            if (class_2683 == null) break block15;
                        }
                        catch (MatchException matchException) {
                            throw ca.OZ(matchException);
                        }
                        class_2683 = class_2682;
                    }
                    try {
                        try {
                            class_1242 = class_2683.method_1202();
                            if (bl) break block16;
                            if (!class_1242.method_542()) break block15;
                        }
                        catch (MatchException matchException) {
                            throw ca.OZ(matchException);
                        }
                        class_1242 = class_2682.method_1202();
                    }
                    catch (MatchException matchException) {
                        throw ca.OZ(matchException);
                    }
                }
                Integer n2 = class_1242.method_532();
                try {
                    n = n2;
                    if (bl) break block17;
                    if (n == null) break block15;
                }
                catch (MatchException matchException) {
                    throw ca.OZ(matchException);
                }
                n = n2;
            }
            return mG.cnQ(n);
        }
        return mG.hoGuU;
    }

    private static String Pb(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1704;
        if (qtBBV[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])mckkR.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    mckkR.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ca", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = pbFOM[n2].getBytes("ISO-8859-1");
            ca.qtBBV[n2] = ca.Pa(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return qtBBV[n2];
    }

    private static String Pa(byte[] byArray) {
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

    public static boolean OY() {
        boolean bl = ca.OX();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw ca.OZ(matchException);
        }
        return false;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ca.class, "Pc", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(ca.class, "Pf", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
