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
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.iS;
import sixtwo.mr;

public class df
extends gg {
    private final ct jtYSu;
    private final cu JRiAq;
    private final cu ZzGuW;
    private final cu hfdrQ;
    private final cu XSYSg;
    private final cC uvSVP;
    static double AnzBQ;
    static double fUTAw;
    static double XmhqK;
    private static final long zRIgN;
    private static final long[] yjgWN;
    private static final Integer[] iGHTG;
    private static final Map JhLmD;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public df() {
        long l2 = zRIgN ^ 0x76EFA979B81L;
        super(gf.aZL((int)92, false, gh.nOCvV));
        int[] nArray = new int[6];
        nArray[0] = (int)80;
        nArray[1] = (int)114;
        nArray[2] = (int)101;
        nArray[3] = (int)115;
        nArray[4] = (int)101;
        nArray[5] = (int)116;
        this.jtYSu = new ct(this, mr.clS(nArray));
        int[] nArray2 = new int[6];
        nArray2[0] = (int)67;
        nArray2[1] = (int)117;
        nArray2[2] = (int)115;
        nArray2[3] = (int)116;
        nArray2[4] = (int)111;
        nArray2[5] = (int)109;
        this.JRiAq = new cu(this.jtYSu, mr.clS(nArray2));
        this.ZzGuW = new cu(this.jtYSu, mr.clS(new int[]{(int)49, (int)54, (int)58, (int)57}));
        this.hfdrQ = new cu(this.jtYSu, mr.clS(new int[]{(int)49, (int)54, (int)58, (int)49, (int)48}));
        this.XSYSg = new cu(this.jtYSu, mr.clS(new int[]{(int)52, (int)58, (int)51}));
        this.uvSVP = new cC(this, mr.clS(new int[]{(int)82, (int)97, (int)116, (int)105, (int)111})).Vy(0.001).Vw(0.1f).Vx(5.0).VA(AnzBQ);
        this.uvSVP.Vf(this.JRiAq::SZ);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                df.zRIgN = gb.aYR(-8849052166120782493L, 2128902902352512798L, MethodHandles.lookup().lookupClass()).a(269574731207117L);
                df.JhLmD = new HashMap<K, V>(13);
                var0 = df.zRIgN ^ 3682577616864L;
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
                var8_3 = new long[29];
                var5_4 = 0;
                var6_5 = "[\u00de\u0096\u00ff\u0094\u00f8\u0004\u00dc\u00f9\u001c\u00c6Z\u0080\u0017\n\u0013\u00f4\u009a\u0015a\u00b7e)j\u00e7\u00df \u00dd\u00a3\u00a5_P\u00d8\u00f3\t\u008cJE\u00f4%\u00d8c\u001ct2[\u00d6\u00ec?\u00b7\u00ec\u009bJ\u00c0\u00de\u009c\u001a-\u00cc\u00f0\u00b5\u00ab\u0017\u00f3#{\u00e6Q\u007f\u00dd\u0018\u00ab\u009b@\u00db0\u00c5\u0099e\u00aa\u000e|g\u0091|\u00e9\u0015\u0004\u00b6C\u00b9\u00001\u00d5'w\t_\u00ab\u00e3=Lb>\u00de!V\u00a2\u001a\u00cd\u0081h\u001b|\u0017a\u0014R=:\u0091\u00d0\u00e7\u0090\u00a2z\u00ad;6\u0004\u00c5\u001c{\u0083\u00ba\u0097\u0003\u0093K\u00a7E\"\u0006\u00de\u00db\u00ae\u00e4\u00f97\u0010\u00f2\u00b7\u008a\u0002\u008a\u009f\u00e8\u00e9\u00a0\u00e9\u0004\u00bf\u00c3f\u000e\u001dG\u00ba\t\u0097\u00c6%\u00f1\u000b2\u0085\u009e\u009b\u009b\u00a8s\u00da}\u0000'\u0002\u00d8\u00b9e\u00c5\u00ec\u00ef\u009d\u00fe\u0010\u00e3=6A\u0094*+lG\u00ee\u001e\u0081@y9\u008e\u0099J;\ng";
                var7_6 = "[\u00de\u0096\u00ff\u0094\u00f8\u0004\u00dc\u00f9\u001c\u00c6Z\u0080\u0017\n\u0013\u00f4\u009a\u0015a\u00b7e)j\u00e7\u00df \u00dd\u00a3\u00a5_P\u00d8\u00f3\t\u008cJE\u00f4%\u00d8c\u001ct2[\u00d6\u00ec?\u00b7\u00ec\u009bJ\u00c0\u00de\u009c\u001a-\u00cc\u00f0\u00b5\u00ab\u0017\u00f3#{\u00e6Q\u007f\u00dd\u0018\u00ab\u009b@\u00db0\u00c5\u0099e\u00aa\u000e|g\u0091|\u00e9\u0015\u0004\u00b6C\u00b9\u00001\u00d5'w\t_\u00ab\u00e3=Lb>\u00de!V\u00a2\u001a\u00cd\u0081h\u001b|\u0017a\u0014R=:\u0091\u00d0\u00e7\u0090\u00a2z\u00ad;6\u0004\u00c5\u001c{\u0083\u00ba\u0097\u0003\u0093K\u00a7E\"\u0006\u00de\u00db\u00ae\u00e4\u00f97\u0010\u00f2\u00b7\u008a\u0002\u008a\u009f\u00e8\u00e9\u00a0\u00e9\u0004\u00bf\u00c3f\u000e\u001dG\u00ba\t\u0097\u00c6%\u00f1\u000b2\u0085\u009e\u009b\u009b\u00a8s\u00da}\u0000'\u0002\u00d8\u00b9e\u00c5\u00ec\u00ef\u009d\u00fe\u0010\u00e3=6A\u0094*+lG\u00ee\u001e\u0081@y9\u008e\u0099J;\ng".length();
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
                    var6_5 = "\u00a3'w\u0082O\u00e1\u0006^\u00eao\u00eb\u001eP\u00b5\u0004F";
                    var7_6 = "\u00a3'w\u0082O\u00e1\u0006^\u00eao\u00eb\u001eP\u00b5\u0004F".length();
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
        df.yjgWN = var8_3;
        df.iGHTG = new Integer[29];
        df.AnzBQ = 1.7777777777777777;
        df.fUTAw = 1.6;
        df.XmhqK = 1.3333333333333333;
    }

    public cC aeb() {
        return this.uvSVP;
    }

    public cu aea() {
        return this.XSYSg;
    }

    public float adV() {
        df df2;
        block17: {
            boolean bl2;
            block15: {
                iS[] iSArray;
                block16: {
                    block13: {
                        block14: {
                            long l2 = zRIgN ^ 0xB82FA26FC4DL;
                            iSArray = dh.afl();
                            try {
                                try {
                                    bl2 = this.ZzGuW.SZ();
                                    if (iSArray != null) break block13;
                                    if (!bl2) break block14;
                                }
                                catch (MatchException matchException) {
                                    throw df.aec(matchException);
                                }
                                return (float)AnzBQ;
                            }
                            catch (MatchException matchException) {
                                throw df.aec(matchException);
                            }
                        }
                        bl2 = this.hfdrQ.SZ();
                    }
                    try {
                        try {
                            if (iSArray != null) break block15;
                            if (!bl2) break block16;
                        }
                        catch (MatchException matchException) {
                            throw df.aec(matchException);
                        }
                        return (float)fUTAw;
                    }
                    catch (MatchException matchException) {
                        throw df.aec(matchException);
                    }
                }
                try {
                    df2 = this;
                    if (iSArray != null) break block17;
                    bl2 = df2.XSYSg.SZ();
                }
                catch (MatchException matchException) {
                    throw df.aec(matchException);
                }
            }
            try {
                if (bl2) {
                    return (float)XmhqK;
                }
            }
            catch (MatchException matchException) {
                throw df.aec(matchException);
            }
            df2 = this;
        }
        return df2.uvSVP.VB();
    }

    public cu adX() {
        return this.JRiAq;
    }

    private static int aee(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = df.aed(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static CallSite aef(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/df" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int aed(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x15F3;
        if (iGHTG[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = yjgWN[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])JhLmD.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    JhLmD.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/df", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            df.iGHTG[n3] = n4;
        }
        return iGHTG[n3];
    }

    private static MatchException aec(MatchException matchException) {
        return matchException;
    }

    public ct adW() {
        return this.jtYSu;
    }

    public cu adZ() {
        return this.hfdrQ;
    }

    public cu adY() {
        return this.ZzGuW;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(df.class, "aee", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

