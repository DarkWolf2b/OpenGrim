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
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.mr;
import sixtwo.rD;

public class cS
extends gg {
    private final cv PDKAy;
    private final cw mjpkN;
    private final cw OHlmP;
    private final cG Ccjvo;
    private final cC BdlMa;
    private static final long NdBwP;
    private static final long[] ksYsi;
    private static final Integer[] ztFIW;
    private static final Map MaoMC;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cS() {
        long l2 = NdBwP ^ 0x729623C9CA09L;
        super(gf.aZL((int)cS.Zh("g", (int)6729, (long)(0x2AFA7CAED3E06E97L ^ l2)), false, gh.nOCvV));
        int[] nArray = new int[cS.Zh("g", (int)23537, (long)(0x4D1F0DB69580AF3BL ^ l2))];
        nArray[0] = (int)cS.Zh("g", (int)8352, (long)(0x240E2DF02C08D44CL ^ l2));
        nArray[1] = (int)cS.Zh("g", (int)13938, (long)(0x3929A4BBC57742B4L ^ l2));
        nArray[2] = (int)cS.Zh("g", (int)5997, (long)(0x6A498E81A103E3BCL ^ l2));
        nArray[3] = (int)cS.Zh("g", (int)24198, (long)(0x4801B1B894042A6CL ^ l2));
        nArray[4] = (int)cS.Zh("g", (int)2773, (long)(0x44592D150027E10L ^ l2));
        nArray[5] = (int)cS.Zh("g", (int)26498, (long)(0x64DD189C3163936BL ^ l2));
        nArray[cS.Zh("g", (int)29691, (long)(0xDE5BDC3E230727L ^ l2))] = (int)cS.Zh("g", (int)23718, (long)(0x75CFCD01C2B3287EL ^ l2));
        nArray[cS.Zh("g", (int)6750, (long)(0x6D54A716D809EE90L ^ l2))] = (int)cS.Zh("g", (int)19238, (long)(0x34321F61099FBFFBL ^ l2));
        this.PDKAy = new cv(this, mr.clS(nArray));
        this.mjpkN = new cw(this.PDKAy, mr.clS(new int[]{(int)cS.Zh("g", (int)19131, (long)(0x560AFD1D7FFF3E5DL ^ l2)), (int)cS.Zh("g", (int)26494, (long)(0x1B5A94D5A9939396L ^ l2)), (int)cS.Zh("g", (int)4558, (long)(0x2436FB7E31BA650AL ^ l2)), (int)cS.Zh("g", (int)24734, (long)(0x3790FD8E6A2F1451L ^ l2))})).Tz();
        int[] nArray2 = new int[cS.Zh("g", (int)30316, (long)(0x14E8DE6A5C8082AFL ^ l2))];
        nArray2[0] = (int)cS.Zh("g", (int)32410, (long)(0x5304A47836820A7DL ^ l2));
        nArray2[1] = (int)cS.Zh("g", (int)23545, (long)(0x604259C27ED02F16L ^ l2));
        nArray2[2] = (int)cS.Zh("g", (int)3808, (long)(0x60C1678476E3FA37L ^ l2));
        nArray2[3] = (int)cS.Zh("g", (int)19370, (long)(0x6C03CF09B152BF44L ^ l2));
        nArray2[4] = (int)cS.Zh("g", (int)25847, (long)(0x4B612A200EE5101CL ^ l2));
        nArray2[5] = (int)cS.Zh("g", (int)2670, (long)(0x9220D9E5FD7EACL ^ l2));
        nArray2[cS.Zh("g", (int)15213, (long)(0x6E08E478B04A4FACL ^ l2))] = (int)cS.Zh("g", (int)1499, (long)(0x36179AE335B27136L ^ l2));
        this.OHlmP = new cw(this.PDKAy, mr.clS(nArray2));
        this.Ccjvo = new cG(this, mr.clS(new int[]{(int)cS.Zh("g", (int)4976, (long)(0x580145274A9867A0L ^ l2)), (int)cS.Zh("g", (int)23718, (long)(0x75CFCD01C2B3287EL ^ l2)), (int)cS.Zh("g", (int)18965, (long)(0x3CA73E6486BA3EC7L ^ l2)), (int)cS.Zh("g", (int)23718, (long)(0x75CFCD01C2B3287EL ^ l2)), (int)cS.Zh("g", (int)23545, (long)(0x604259C27ED02F16L ^ l2))})).Uf(rD.dlM().bjG().bis());
        int[] nArray3 = new int[cS.Zh("g", (int)31721, (long)(0x1C89972AFE678F3DL ^ l2))];
        nArray3[0] = (int)cS.Zh("g", (int)27187, (long)(0x1D72EA9087141EECL ^ l2));
        nArray3[1] = (int)cS.Zh("g", (int)23545, (long)(0x604259C27ED02F16L ^ l2));
        nArray3[2] = (int)cS.Zh("g", (int)8620, (long)(0x2C4346B97D3AD576L ^ l2));
        nArray3[3] = (int)cS.Zh("g", (int)27739, (long)(0x7055849C068F1882L ^ l2));
        nArray3[4] = (int)cS.Zh("g", (int)10206, (long)(0x732E2397FE4D531EL ^ l2));
        nArray3[5] = (int)cS.Zh("g", (int)19370, (long)(0x6C03CF09B152BF44L ^ l2));
        nArray3[cS.Zh("g", (int)15213, (long)(0x6E08E478B04A4FACL ^ l2))] = (int)cS.Zh("g", (int)1962, (long)(0x5A68BA5850797367L ^ l2));
        nArray3[cS.Zh("g", (int)30316, (long)(0x14E8DE6A5C8082AFL ^ l2))] = (int)cS.Zh("g", (int)7427, (long)(0x54773A88D67569C4L ^ l2));
        nArray3[cS.Zh("g", (int)13558, (long)(0x6448459EB9EC023L ^ l2))] = (int)cS.Zh("g", (int)29249, (long)(0x3F183891E45D0688L ^ l2));
        nArray3[cS.Zh("g", (int)20177, (long)(0x4C978767CD103A0AL ^ l2))] = (int)cS.Zh("g", (int)19131, (long)(0x560AFD1D7FFF3E5DL ^ l2));
        nArray3[cS.Zh("g", (int)21660, (long)(0x7F0D627EAC65A04AL ^ l2))] = (int)cS.Zh("g", (int)14995, (long)(0x3343F10540E94E5BL ^ l2));
        nArray3[cS.Zh("g", (int)12130, (long)(0xC5E4D2856A8DBB1L ^ l2))] = (int)cS.Zh("g", (int)19370, (long)(0x6C03CF09B152BF44L ^ l2));
        nArray3[cS.Zh("g", (int)12672, (long)(0x784754F8CE55454CL ^ l2))] = (int)cS.Zh("g", (int)19370, (long)(0x6C03CF09B152BF44L ^ l2));
        nArray3[cS.Zh("g", (int)19842, (long)(0x7CD00E01F4083949L ^ l2))] = (int)cS.Zh("g", (int)27739, (long)(0x7055849C068F1882L ^ l2));
        this.BdlMa = new cC(this, mr.clS(nArray3)).Vy(1.0).Vw(1.0).Vx(10.0).VA(5.0);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cS.NdBwP = gb.aYR(-3814145772088858924L, 6326010710559167094L, MethodHandles.lookup().lookupClass()).a(251371214361616L);
                cS.MaoMC = new HashMap<K, V>(13);
                var0 = cS.NdBwP ^ 35834966713517L;
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
                var8_3 = new long[42];
                var5_4 = 0;
                var6_5 = "\u00e5V\u00d5\u0085\u0004\u00be\u009c[\u00ee\u00903\u00e1!\u00f4\u00ce\u00d6R6\u00d3\u00e0\u0084#\u00b5\u0016\u0010\u0080\u00bd\u0001\u0099\u00ed)o&\u00d8\u00a0\u0007\u0007\u00c3\u0090{\u00d4\u00de\u00eaY\u008f\u0013?\u00e9\u00e0|\u009d\u00a3\u009efMU\u00efvQ\u00a3\u0099\u008dRJ\u00c19%\u00f3\r'\u00d1{2\u008d\u00c3\u00ff\u00ed\u00a4\u00dd!^\u0088\u001f\u000f(\u00d1up{\u0002\u0091jz\u00c0Cy?:D\u00e1\u00b6Mv\u0098\u0089\u00a8\u008d\u000fJ\u00fd\u0082'\u000eT\u00ef\u009fym\u00c6b\u008c\u0016\u0015\u00d7\u0018\u00d3\u0000\u0014\u000f\u00da\u0015\u00ac?8R<@\u00a5>\u00cd1\u0017NG~\u009f\u001bz#9a45C\u0016\u0096\u0002\u0004\u00e5\u00e1\u001e\u00e1\u00d6\u0090\u00be{B\u009c&\u0086\u00c9\u00e9S\u00e3\u00ddC\u00a8!\u00a8\u0099\b\u0093b\u001d?\u00fd.\u009bc\u00ef%\u000b\u0014E\u0087\u00c9\td;\u00a40\b`\u0082*\u0003.t?\u00ba\u00deF\u00cf\u00c5\u00d0[\u001c\u00c6i\u009fn:o\u0015\u00cd\u00c7\u00dc\u009a&-\u00e4\u0083\u00f8\u00c4\u000b\u00e0\u007f\u009c*\u000f2\u00fb\u0011V\u00cb\u00cfT=\u0005\u00cf\u00a8\u0015\u00f4\u0094N\u00c7\u00c0\u00d0\u00d72Tm\u0000\u00b7\u00af\u00f7\u001a\u00ee\u00dc\u00e2\u00cbs\u00ad{\u00b6|\u00d9\u0082r\u0003\u00d5c\u00950\u008c\u00c1\u0092\u00f9<\u0015.T_\u001b\u00a1\u00fb\u008c\u0017s2\u0019?\u00cd\u00e8\u00d3o\u007f1\u0080\u0013\u00ad\n\u00f8\u00e0{\u00df\u00a9\u001e]\u00bf";
                var7_6 = "\u00e5V\u00d5\u0085\u0004\u00be\u009c[\u00ee\u00903\u00e1!\u00f4\u00ce\u00d6R6\u00d3\u00e0\u0084#\u00b5\u0016\u0010\u0080\u00bd\u0001\u0099\u00ed)o&\u00d8\u00a0\u0007\u0007\u00c3\u0090{\u00d4\u00de\u00eaY\u008f\u0013?\u00e9\u00e0|\u009d\u00a3\u009efMU\u00efvQ\u00a3\u0099\u008dRJ\u00c19%\u00f3\r'\u00d1{2\u008d\u00c3\u00ff\u00ed\u00a4\u00dd!^\u0088\u001f\u000f(\u00d1up{\u0002\u0091jz\u00c0Cy?:D\u00e1\u00b6Mv\u0098\u0089\u00a8\u008d\u000fJ\u00fd\u0082'\u000eT\u00ef\u009fym\u00c6b\u008c\u0016\u0015\u00d7\u0018\u00d3\u0000\u0014\u000f\u00da\u0015\u00ac?8R<@\u00a5>\u00cd1\u0017NG~\u009f\u001bz#9a45C\u0016\u0096\u0002\u0004\u00e5\u00e1\u001e\u00e1\u00d6\u0090\u00be{B\u009c&\u0086\u00c9\u00e9S\u00e3\u00ddC\u00a8!\u00a8\u0099\b\u0093b\u001d?\u00fd.\u009bc\u00ef%\u000b\u0014E\u0087\u00c9\td;\u00a40\b`\u0082*\u0003.t?\u00ba\u00deF\u00cf\u00c5\u00d0[\u001c\u00c6i\u009fn:o\u0015\u00cd\u00c7\u00dc\u009a&-\u00e4\u0083\u00f8\u00c4\u000b\u00e0\u007f\u009c*\u000f2\u00fb\u0011V\u00cb\u00cfT=\u0005\u00cf\u00a8\u0015\u00f4\u0094N\u00c7\u00c0\u00d0\u00d72Tm\u0000\u00b7\u00af\u00f7\u001a\u00ee\u00dc\u00e2\u00cbs\u00ad{\u00b6|\u00d9\u0082r\u0003\u00d5c\u00950\u008c\u00c1\u0092\u00f9<\u0015.T_\u001b\u00a1\u00fb\u008c\u0017s2\u0019?\u00cd\u00e8\u00d3o\u007f1\u0080\u0013\u00ad\n\u00f8\u00e0{\u00df\u00a9\u001e]\u00bf".length();
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
                    var6_5 = ")\u00f3\u0017\u00a9\u00da\u009e8GZg\u0085=n\u00ce\u00dc=";
                    var7_6 = ")\u00f3\u0017\u00a9\u00da\u009e8GZg\u0085=n\u00ce\u00dc=".length();
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
        cS.ksYsi = var8_3;
        cS.ztFIW = new Integer[42];
    }

    public cC Ze() {
        return this.BdlMa;
    }

    public cw Zc() {
        return this.OHlmP;
    }

    public cw Zb() {
        return this.mjpkN;
    }

    public cG Zd() {
        return this.Ccjvo;
    }

    public cv Za() {
        return this.PDKAy;
    }

    private static int Zf(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x66BC;
        if (ztFIW[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = ksYsi[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])MaoMC.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    MaoMC.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cS", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cS.ztFIW[n3] = n4;
        }
        return ztFIW[n3];
    }

    private static CallSite Zh(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cS" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int Zg(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cS.Zf(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cS.class, "Zg", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

