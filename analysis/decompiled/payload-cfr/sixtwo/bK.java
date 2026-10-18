/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_3532
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import java.util.Queue;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_3532;
import sixtwo.bJ;
import sixtwo.bS;
import sixtwo.bU;
import sixtwo.cN;
import sixtwo.cO;
import sixtwo.cv;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mZ;
import sixtwo.mr;
import sixtwo.rD;

public class bK
extends bS {
    private static final float FRaUS = 8.0f;
    private static final float kTtrC = 1.0f;
    private static final float UroMw = 0.5f;
    private static final float mIPnc = -90.0f;
    private static final float NWvmX = 359.9f;
    private static final long nhctd;
    private static final String QDzxA;
    private static final long[] VUKvH;
    private static final Integer[] bbEiG;
    private static final Map UAJdn;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bK(cv cv2) {
        long l = nhctd ^ 0x1FCB82B5EB7CL;
        int[] nArray = new int[bK.MY("d", (int)21953, (long)(0xEA1711A1CE147A7L ^ l))];
        nArray[0] = (int)bK.MY("d", (int)26202, (long)(0x458B389FD47A743FL ^ l));
        nArray[1] = (int)bK.MY("d", (int)29187, (long)(0x52BC4A700512E064L ^ l));
        nArray[2] = (int)bK.MY("d", (int)9270, (long)(0xF1C41B2D7D63646L ^ l));
        nArray[3] = (int)bK.MY("d", (int)23634, (long)(0x79B7DA69B67BCE21L ^ l));
        nArray[4] = (int)bK.MY("d", (int)30293, (long)(0x7622530A2D1B6434L ^ l));
        nArray[5] = (int)bK.MY("d", (int)31120, (long)(0x4C7FB1BE638AEBFDL ^ l));
        nArray[bK.MY("d", (int)14922, (long)(0x1B8D40CD6FF0A83BL ^ l))] = (int)bK.MY("d", (int)30638, (long)(0x6DB6CE3E694C65D4L ^ l));
        nArray[bK.MY("d", (int)21738, (long)(0x61C5AFDA0169C691L ^ l))] = (int)bK.MY("d", (int)13141, (long)(0x639738DF2E222121L ^ l));
        nArray[bK.MY("d", (int)22877, (long)(0x5548F4D948BD4B28L ^ l))] = (int)bK.MY("d", (int)20012, (long)(0x14956E8639135C48L ^ l));
        nArray[bK.MY("d", (int)20950, (long)(0x38EB92E1A520C3AFL ^ l))] = (int)bK.MY("d", (int)31120, (long)(0x4C7FB1BE638AEBFDL ^ l));
        nArray[bK.MY("d", (int)2164, (long)(0x6CEC953B57BB1A18L ^ l))] = (int)bK.MY("d", (int)28941, (long)(0x21C0D56A50616375L ^ l));
        nArray[bK.MY("d", (int)29443, (long)(0x2B8C4158AA85616AL ^ l))] = (int)bK.MY("d", (int)19020, (long)(0x5C2851446385D831L ^ l));
        nArray[bK.MY("d", (int)12747, (long)(0x187830F4DF5323A5L ^ l))] = (int)bK.MY("d", (int)11877, (long)(0x1930095279753C1BL ^ l));
        nArray[bK.MY("d", (int)14008, (long)(0x6A86A67C73B2A4DBL ^ l))] = (int)bK.MY("d", (int)9387, (long)(0x69B3A220241036C3L ^ l));
        nArray[bK.MY("d", (int)32021, (long)(0x3D9DF97C6127EF69L ^ l))] = (int)bK.MY("d", (int)20012, (long)(0x14956E8639135C48L ^ l));
        nArray[bK.MY("d", (int)7987, (long)(0x56EB1B4D8E18D59L ^ l))] = (int)bK.MY("d", (int)11905, (long)(0xD99BACA9665BCEEL ^ l));
        nArray[bK.MY("d", (int)9071, (long)(0x670DE33DFC55B104L ^ l))] = (int)bK.MY("d", (int)20012, (long)(0x14956E8639135C48L ^ l));
        nArray[bK.MY("d", (int)8135, (long)(0x6963C706DC8F0DB8L ^ l))] = (int)bK.MY("d", (int)13685, (long)(0x72CF1B10ECE6A715L ^ l));
        nArray[bK.MY("d", (int)7547, (long)(0x18B9EAFA10F48F19L ^ l))] = (int)bK.MY("d", (int)19578, (long)(0x435D35F304D65E08L ^ l));
        super(cv2, mr.clS(nArray));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    bK.nhctd = gb.aYR(3629796645314585096L, 6822008410071727314L, MethodHandles.lookup().lookupClass()).a(78699892015733L);
                    var11 = bK.nhctd ^ 12031310180318L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("\u001fn9\u00ab\u008eF[\u0096\u0089aS\u00e3\u00b5\u0001\u008e\u008c".getBytes("ISO-8859-1"));
                ** while (true)
                bK.QDzxA = bK.MV(var15_3).intern();
                bK.UAJdn = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[30];
                var3_7 = 0;
                var4_8 = "\t\u0007\u008b:\u00a7JL\u00f5\u009d\u00eb\u0090.\u00a1\u00d91K\u008b\u00fa\u0017O\u00e5\u00bb&\u00c8?)\u00ca\u008e\u00baB\u00f9\u00c7r\u00c8\u00e8\u00da\u00bf\u0016\u000b+~3Gv\u00f6oT_H \u00d8K\"$\u00f0a\u00fb\u0087\u00a1 d:\u008dB\u00f3\n\u000fi\u0013\u00e0\u0013\u0007;\u000e\u0011Y\u00cf\u00c1\u00e5e\u00cd\u00b3.1\u00e6\u00a4J\u001f\u001d\u00fc\u00d5\u0093\u00c1\u00ed\u0096\u0013\u0095@yt^\u0097\u0099\u008f\u00e4\u008b\u00df\u00b4\u00bd\u00a3d\u00b6\u00d2\u0093g\u00a5\u0093e}\u008d])K1\u00e75\u0095\u00d5\u001f\u00f8\u00e4\u00db\u0091a\u00a2\u00b2|\u00a7\u00ad\u00a9\u00bc\b\u00af\u0013\u00c0\u0019/\u00cf\u00cbs\u00de\u0082\u0083\u00f0\u0012\u00ad\u00e9\u00e0\u00c7\u00ae\u008a\u00cc\u0018Y\u00b8j\u0011\u000b\u009e\u00cc\u0086\u00c04\u0013\u00f4\u0016\u00fa\u00a54\u00e2\u00b7\u0090\u00a1(\u00a0\u0097\u00f1\u00ed\b\u001bP='bK<}\u00faQ\u00fd\u00a5#\\x\u00bc\f\u008e\u00cf\u00c8r\u0091\u0091\u00c7$\u00da\u00d8*j'%F_\u00db\u00fc";
                var5_9 = "\t\u0007\u008b:\u00a7JL\u00f5\u009d\u00eb\u0090.\u00a1\u00d91K\u008b\u00fa\u0017O\u00e5\u00bb&\u00c8?)\u00ca\u008e\u00baB\u00f9\u00c7r\u00c8\u00e8\u00da\u00bf\u0016\u000b+~3Gv\u00f6oT_H \u00d8K\"$\u00f0a\u00fb\u0087\u00a1 d:\u008dB\u00f3\n\u000fi\u0013\u00e0\u0013\u0007;\u000e\u0011Y\u00cf\u00c1\u00e5e\u00cd\u00b3.1\u00e6\u00a4J\u001f\u001d\u00fc\u00d5\u0093\u00c1\u00ed\u0096\u0013\u0095@yt^\u0097\u0099\u008f\u00e4\u008b\u00df\u00b4\u00bd\u00a3d\u00b6\u00d2\u0093g\u00a5\u0093e}\u008d])K1\u00e75\u0095\u00d5\u001f\u00f8\u00e4\u00db\u0091a\u00a2\u00b2|\u00a7\u00ad\u00a9\u00bc\b\u00af\u0013\u00c0\u0019/\u00cf\u00cbs\u00de\u0082\u0083\u00f0\u0012\u00ad\u00e9\u00e0\u00c7\u00ae\u008a\u00cc\u0018Y\u00b8j\u0011\u000b\u009e\u00cc\u0086\u00c04\u0013\u00f4\u0016\u00fa\u00a54\u00e2\u00b7\u0090\u00a1(\u00a0\u0097\u00f1\u00ed\b\u001bP='bK<}\u00faQ\u00fd\u00a5#\\x\u00bc\f\u008e\u00cf\u00c8r\u0091\u0091\u00c7$\u00da\u00d8*j'%F_\u00db\u00fc".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "\u0015@\u00a7\u009a>\u00fc$Q1\u00cer\u00e5\u00f9tUA";
                    var5_9 = "\u0015@\u00a7\u009a>\u00fc$Q1\u00cer\u00e5\u00f9tUA".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl57:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl70:
                // 1 sources

                ** continue;
            }
        }
        bK.VUKvH = var6_6;
        bK.bbEiG = new Integer[30];
    }

    @Override
    public boolean MH() {
        boolean bl;
        long l = nhctd ^ 0x3A6C94BE590CL;
        try {
            bl = this.MS(cN.YyPjC) != null;
        }
        catch (MatchException matchException) {
            throw bK.MU(matchException);
        }
        return bl;
    }

    @Override
    public void MG(lC lC2, ii ii2) {
        float f;
        lq lq2;
        int[] nArray;
        float f2;
        float f3;
        block13: {
            float f4;
            mG mG2;
            float f5;
            float f6;
            float f7;
            float f8;
            float f9;
            float f10;
            lC lC3;
            block12: {
                boolean bl;
                cO cO2;
                bU bU2;
                block11: {
                    long l = nhctd ^ 0x356CBCA463C3L;
                    bU2 = rD.dlK().RC();
                    Queue<cO> queue = cN.YyPjC;
                    cO2 = this.MS(queue);
                    bl = bJ.MM();
                    try {
                        if (cO2 == null) {
                            return;
                        }
                    }
                    catch (MatchException matchException) {
                        throw bK.MU(matchException);
                    }
                    for (cO cO3 : queue) {
                        try {
                            cO3.XW();
                            if (bl) {
                                if (bl) continue;
                                break;
                            }
                            break block11;
                        }
                        catch (MatchException matchException) {
                            throw bK.MU(matchException);
                        }
                    }
                    queue.removeIf(cO::XX);
                }
                f3 = bU2.RW();
                f2 = bU2.RX();
                nArray = this.MT(cO2);
                lq2 = lE.WTzbi.bYM(7.0f);
                f = cO2.Ye().dhj();
                this.fGWTH.NU(20.0f + lq2.cap(nArray), 15.0f);
                mG mG3 = cO2.Yd().XC().cob(f);
                float f11 = f3 - 2.5f + 10.0f * this.dExGi.dhj();
                float f12 = f2 + 7.5f;
                float f13 = f11 - 4.0f;
                float f14 = f12 - 4.0f;
                float f15 = class_3532.method_15363((float)((float)cO2.Ya().cpF() / (float)cO2.Yb()), (float)0.0f, (float)1.0f);
                float f16 = 359.9f * (1.0f - f15);
                mG mG4 = ii2.bjd().cob(0.3f * f);
                try {
                    try {
                        lC3 = lC2;
                        f10 = f13;
                        f9 = f14;
                        f8 = 8.0f;
                        f7 = 1.0f;
                        f6 = 0.0f;
                        f5 = 359.9f;
                        mG2 = mG4;
                        f4 = 0.5f;
                        if (!bl) break block12;
                        lC3.cdw(f10, f9, f8, f7, f6, f5, mG2, f4);
                        if (!(f16 > 1.0f)) break block13;
                    }
                    catch (MatchException matchException) {
                        throw bK.MU(matchException);
                    }
                    lC3 = lC2;
                    f10 = f13;
                    f9 = f14;
                    f8 = 8.0f;
                    f7 = 1.0f;
                    f6 = -90.0f - f16;
                    f5 = -90.0f;
                    mG2 = mG3;
                    f4 = 0.5f;
                }
                catch (MatchException matchException) {
                    throw bK.MU(matchException);
                }
            }
            lC3.cdw(f10, f9, f8, f7, f6, f5, mG2, f4);
        }
        mG mG5 = ii2.bjb().coa(255.0f * f);
        float f17 = f3 + 25.0f - 10.0f * this.dExGi.dhj() * f;
        float f18 = f2 + 5.0f;
        lC2.ceA(lq2, nArray, f17, f18, mG5);
    }

    private static CallSite MY(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bK" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private cO MS(Queue<cO> queue) {
        cO cO2;
        block2: {
            long l = nhctd ^ 0x7CA2EF21519FL;
            cO cO3 = null;
            Iterator iterator = queue.iterator();
            boolean bl = bJ.MN();
            while (iterator.hasNext()) {
                cO cO4;
                cO2 = cO4 = (cO)iterator.next();
                if (!bl) {
                    cO3 = cO2;
                    if (!bl) continue;
                }
                break block2;
            }
            cO2 = cO3;
        }
        return cO2;
    }

    private int[] MT(cO cO2) {
        long l = nhctd ^ 0x6C9C1F399687L;
        try {
            if (QDzxA.equals(mZ.cse(cO2.XY()))) {
                return cO2.XZ();
            }
        }
        catch (MatchException matchException) {
            throw bK.MU(matchException);
        }
        return cO2.XY();
    }

    private static MatchException MU(MatchException matchException) {
        return matchException;
    }

    private static int MW(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x381E;
        if (bbEiG[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = VUKvH[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])UAJdn.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    UAJdn.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bK", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bK.bbEiG[n2] = n3;
        }
        return bbEiG[n2];
    }

    private static String MV(byte[] byArray) {
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

    private static int MX(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = bK.MW(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bK.class, "MX", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
