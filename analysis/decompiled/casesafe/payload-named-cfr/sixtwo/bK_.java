/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.util.math.MathHelper
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
import net.minecraft.util.math.MathHelper;
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
        long l2 = nhctd ^ 0x1FCB82B5EB7CL;
        int[] nArray = new int[bK.MY("d", (int)21953, (long)(0xEA1711A1CE147A7L ^ l2))];
        nArray[0] = (int)bK.MY("d", (int)26202, (long)(0x458B389FD47A743FL ^ l2));
        nArray[1] = (int)bK.MY("d", (int)29187, (long)(0x52BC4A700512E064L ^ l2));
        nArray[2] = (int)bK.MY("d", (int)9270, (long)(0xF1C41B2D7D63646L ^ l2));
        nArray[3] = (int)bK.MY("d", (int)23634, (long)(0x79B7DA69B67BCE21L ^ l2));
        nArray[4] = (int)bK.MY("d", (int)30293, (long)(0x7622530A2D1B6434L ^ l2));
        nArray[5] = (int)bK.MY("d", (int)31120, (long)(0x4C7FB1BE638AEBFDL ^ l2));
        nArray[bK.MY("d", (int)14922, (long)(0x1B8D40CD6FF0A83BL ^ l2))] = (int)bK.MY("d", (int)30638, (long)(0x6DB6CE3E694C65D4L ^ l2));
        nArray[bK.MY("d", (int)21738, (long)(0x61C5AFDA0169C691L ^ l2))] = (int)bK.MY("d", (int)13141, (long)(0x639738DF2E222121L ^ l2));
        nArray[bK.MY("d", (int)22877, (long)(0x5548F4D948BD4B28L ^ l2))] = (int)bK.MY("d", (int)20012, (long)(0x14956E8639135C48L ^ l2));
        nArray[bK.MY("d", (int)20950, (long)(0x38EB92E1A520C3AFL ^ l2))] = (int)bK.MY("d", (int)31120, (long)(0x4C7FB1BE638AEBFDL ^ l2));
        nArray[bK.MY("d", (int)2164, (long)(0x6CEC953B57BB1A18L ^ l2))] = (int)bK.MY("d", (int)28941, (long)(0x21C0D56A50616375L ^ l2));
        nArray[bK.MY("d", (int)29443, (long)(0x2B8C4158AA85616AL ^ l2))] = (int)bK.MY("d", (int)19020, (long)(0x5C2851446385D831L ^ l2));
        nArray[bK.MY("d", (int)12747, (long)(0x187830F4DF5323A5L ^ l2))] = (int)bK.MY("d", (int)11877, (long)(0x1930095279753C1BL ^ l2));
        nArray[bK.MY("d", (int)14008, (long)(0x6A86A67C73B2A4DBL ^ l2))] = (int)bK.MY("d", (int)9387, (long)(0x69B3A220241036C3L ^ l2));
        nArray[bK.MY("d", (int)32021, (long)(0x3D9DF97C6127EF69L ^ l2))] = (int)bK.MY("d", (int)20012, (long)(0x14956E8639135C48L ^ l2));
        nArray[bK.MY("d", (int)7987, (long)(0x56EB1B4D8E18D59L ^ l2))] = (int)bK.MY("d", (int)11905, (long)(0xD99BACA9665BCEEL ^ l2));
        nArray[bK.MY("d", (int)9071, (long)(0x670DE33DFC55B104L ^ l2))] = (int)bK.MY("d", (int)20012, (long)(0x14956E8639135C48L ^ l2));
        nArray[bK.MY("d", (int)8135, (long)(0x6963C706DC8F0DB8L ^ l2))] = (int)bK.MY("d", (int)13685, (long)(0x72CF1B10ECE6A715L ^ l2));
        nArray[bK.MY("d", (int)7547, (long)(0x18B9EAFA10F48F19L ^ l2))] = (int)bK.MY("d", (int)19578, (long)(0x435D35F304D65E08L ^ l2));
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
        boolean bl2;
        long l2 = nhctd ^ 0x3A6C94BE590CL;
        try {
            bl2 = this.MS(cN.YyPjC) != null;
        }
        catch (MatchException matchException) {
            throw bK.MU(matchException);
        }
        return bl2;
    }

    @Override
    public void MG(lC lC2, ii ii2) {
        float f2;
        lq lq2;
        int[] nArray;
        float f3;
        float f4;
        block13: {
            float f5;
            mG mG2;
            float f6;
            float f7;
            float f8;
            float f9;
            float f10;
            float f11;
            lC lC3;
            block12: {
                boolean bl2;
                cO cO2;
                bU bU2;
                block11: {
                    long l2 = nhctd ^ 0x356CBCA463C3L;
                    bU2 = rD.dlK().RC();
                    Queue<cO> queue = cN.YyPjC;
                    cO2 = this.MS(queue);
                    bl2 = bJ.MM();
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
                            if (bl2) {
                                if (bl2) continue;
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
                f4 = bU2.RW();
                f3 = bU2.RX();
                nArray = this.MT(cO2);
                lq2 = lE.WTzbi.bYM(7.0f);
                f2 = cO2.Ye().dhj();
                this.fGWTH.NU(20.0f + lq2.cap(nArray), 15.0f);
                mG mG3 = cO2.Yd().XC().cob(f2);
                float f12 = f4 - 2.5f + 10.0f * this.dExGi.dhj();
                float f13 = f3 + 7.5f;
                float f14 = f12 - 4.0f;
                float f15 = f13 - 4.0f;
                float f16 = MathHelper.clamp((float)((float)cO2.Ya().cpF() / (float)cO2.Yb()), (float)0.0f, (float)1.0f);
                float f17 = 359.9f * (1.0f - f16);
                mG mG4 = ii2.bjd().cob(0.3f * f2);
                try {
                    try {
                        lC3 = lC2;
                        f11 = f14;
                        f10 = f15;
                        f9 = 8.0f;
                        f8 = 1.0f;
                        f7 = 0.0f;
                        f6 = 359.9f;
                        mG2 = mG4;
                        f5 = 0.5f;
                        if (!bl2) break block12;
                        lC3.cdw(f11, f10, f9, f8, f7, f6, mG2, f5);
                        if (!(f17 > 1.0f)) break block13;
                    }
                    catch (MatchException matchException) {
                        throw bK.MU(matchException);
                    }
                    lC3 = lC2;
                    f11 = f14;
                    f10 = f15;
                    f9 = 8.0f;
                    f8 = 1.0f;
                    f7 = -90.0f - f17;
                    f6 = -90.0f;
                    mG2 = mG3;
                    f5 = 0.5f;
                }
                catch (MatchException matchException) {
                    throw bK.MU(matchException);
                }
            }
            lC3.cdw(f11, f10, f9, f8, f7, f6, mG2, f5);
        }
        mG mG5 = ii2.bjb().coa(255.0f * f2);
        float f18 = f4 + 25.0f - 10.0f * this.dExGi.dhj() * f2;
        float f19 = f3 + 5.0f;
        lC2.ceA(lq2, nArray, f18, f19, mG5);
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
            long l2 = nhctd ^ 0x7CA2EF21519FL;
            cO cO3 = null;
            Iterator iterator = queue.iterator();
            boolean bl2 = bJ.MN();
            while (iterator.hasNext()) {
                cO cO4;
                cO2 = cO4 = (cO)iterator.next();
                if (!bl2) {
                    cO3 = cO2;
                    if (!bl2) continue;
                }
                break block2;
            }
            cO2 = cO3;
        }
        return cO2;
    }

    private int[] MT(cO cO2) {
        long l2 = nhctd ^ 0x6C9C1F399687L;
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

    private static int MW(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x381E;
        if (bbEiG[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = VUKvH[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])UAJdn.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    UAJdn.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bK.bbEiG[n3] = n4;
        }
        return bbEiG[n3];
    }

    private static String MV(byte[] byArray) {
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

    private static int MX(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bK.MW(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
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

