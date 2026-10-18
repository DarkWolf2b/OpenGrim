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
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.mG;
import sixtwo.mZ;

public class jk {
    private static final long zumTM;
    public static mG tSRYI;
    public static mG mPXGi;
    public static mG jEkxo;
    private static final long khXTS;
    private static final long[] HAejn;
    private static final Integer[] kyDxg;
    private static final Map kgjMD;
    private static final long[] TscJs;
    private static final Long[] pPJRe;
    private static final Map kFdBt;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    block11: {
                        jk.khXTS = gb.aYR(2329779219362319924L, 2320449836084100065L, MethodHandles.lookup().lookupClass()).a(162797656028928L);
                        var22 = jk.khXTS ^ 113185465516712L;
                        jk.kgjMD = new HashMap<K, V>(13);
                        var11_1 = Cipher.getInstance("DES/CBC/NoPadding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var22 >>> 56);
                        for (var12_2 = 1; var12_2 < 8; ++var12_2) {
                            v2 = v2;
                            v2[var12_2] = (byte)(var22 << var12_2 * 8 >>> 56);
                        }
                        var11_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var17_3 = new long[33];
                        var14_4 = 0;
                        var15_5 = "tc\u00ad\u0005\u00d7\u00bat\u00b7\r\u0081k\u0083'\u009f\u00e4\u00cc\u00a79\u008fm/\u0083\u0087\r\u00cey\u001d\u00dc1\u00e13\u00d1\u00c6\u0094\u00897\u0006\u00903V\u001e\u001b\u0006\u0098~\u00a4\\\u0097\u000f\u008d\u00be\u00ab,\u00afVdA\u00d3\u00d9\u00bbU\u0089\t\u00c9\u0006M\u0091\u00dc\u00d4A\u00a7\u00bc}\u00e4:\u00dc\u00ec\t\u000b,\u00e0\u00fa\u00f1\u00d7\u0085F\u00b0\u00afh<k\u00b7v;\u00e3\u00a4\u0082By\u00ef%\u00c4$\u0003|\u008c@\r\u00d5B\u00ee\u0096\u00f0Q\u00ec\u00e2g\u00e6v\u00cd\u00e5\u00e92\n\u00bdJ\u0087\u00d6:6\u00bd8{\u0089V\u00e3\u00b4\u000e\u00d6\u00d6)=\u00f9\u00aa+\u00dd\u00be\u00e5\u00e7W-\u00fe\u0014)?\u00eb\u0012\u00a6J\u0089\u001aM\u00acWl\u00d6\u00cb\u00a8\u009e:\u008a\u00b76\u00a0p\u00ed\u0093\u00f7\u009f\u00bc\u00ab\u0088u\"\u00c2)Z\u001d\u00847\u007f\u008232\u00b8\u00fdF\u00eb*\u0002\u00d7\u00b4\u00bc\u00a7\u00c0<\u008d\b\u00f5\u0012C\u00daS\u00de\u0007\u00af\u00a4\u0004\f\u00cf6&\u00a6\u009a\u0016\u00c1\u00e3\u00c9\u0086\u00e3D\u0003\u0090Q|&\u00b6\u008f\u00f2\u00130\u00ccNva\u0013\u0013#";
                        var16_6 = "tc\u00ad\u0005\u00d7\u00bat\u00b7\r\u0081k\u0083'\u009f\u00e4\u00cc\u00a79\u008fm/\u0083\u0087\r\u00cey\u001d\u00dc1\u00e13\u00d1\u00c6\u0094\u00897\u0006\u00903V\u001e\u001b\u0006\u0098~\u00a4\\\u0097\u000f\u008d\u00be\u00ab,\u00afVdA\u00d3\u00d9\u00bbU\u0089\t\u00c9\u0006M\u0091\u00dc\u00d4A\u00a7\u00bc}\u00e4:\u00dc\u00ec\t\u000b,\u00e0\u00fa\u00f1\u00d7\u0085F\u00b0\u00afh<k\u00b7v;\u00e3\u00a4\u0082By\u00ef%\u00c4$\u0003|\u008c@\r\u00d5B\u00ee\u0096\u00f0Q\u00ec\u00e2g\u00e6v\u00cd\u00e5\u00e92\n\u00bdJ\u0087\u00d6:6\u00bd8{\u0089V\u00e3\u00b4\u000e\u00d6\u00d6)=\u00f9\u00aa+\u00dd\u00be\u00e5\u00e7W-\u00fe\u0014)?\u00eb\u0012\u00a6J\u0089\u001aM\u00acWl\u00d6\u00cb\u00a8\u009e:\u008a\u00b76\u00a0p\u00ed\u0093\u00f7\u009f\u00bc\u00ab\u0088u\"\u00c2)Z\u001d\u00847\u007f\u008232\u00b8\u00fdF\u00eb*\u0002\u00d7\u00b4\u00bc\u00a7\u00c0<\u008d\b\u00f5\u0012C\u00daS\u00de\u0007\u00af\u00a4\u0004\f\u00cf6&\u00a6\u009a\u0016\u00c1\u00e3\u00c9\u0086\u00e3D\u0003\u0090Q|&\u00b6\u008f\u00f2\u00130\u00ccNva\u0013\u0013#".length();
                        var13_7 = 0;
                        while (true) {
                            var18_8 = var15_5.substring(var13_7, var13_7 += 8).getBytes("ISO-8859-1");
                            v3 = var17_3;
                            v4 = var14_4++;
                            v5 = ((long)var18_8[0] & 255L) << 56 | ((long)var18_8[1] & 255L) << 48 | ((long)var18_8[2] & 255L) << 40 | ((long)var18_8[3] & 255L) << 32 | ((long)var18_8[4] & 255L) << 24 | ((long)var18_8[5] & 255L) << 16 | ((long)var18_8[6] & 255L) << 8 | (long)var18_8[7] & 255L;
                            v6 = -1;
                            break block11;
                            break;
                        }
lbl26:
                        // 1 sources

                        while (true) {
                            v3[v4] = v7;
                            if (var13_7 < var16_6) ** continue;
                            var15_5 = ";\u000f\u0019^\u0096}\u00cd\u0007W\u00beR\u00b8\u0090\u00ad\n\u0098";
                            var16_6 = ";\u000f\u0019^\u0096}\u00cd\u0007W\u00beR\u00b8\u0090\u00ad\n\u0098".length();
                            var13_7 = 0;
                            while (true) {
                                var18_8 = var15_5.substring(var13_7, var13_7 += 8).getBytes("ISO-8859-1");
                                v3 = var17_3;
                                v4 = var14_4++;
                                v5 = ((long)var18_8[0] & 255L) << 56 | ((long)var18_8[1] & 255L) << 48 | ((long)var18_8[2] & 255L) << 40 | ((long)var18_8[3] & 255L) << 32 | ((long)var18_8[4] & 255L) << 24 | ((long)var18_8[5] & 255L) << 16 | ((long)var18_8[6] & 255L) << 8 | (long)var18_8[7] & 255L;
                                v6 = 0;
                                break block11;
                                break;
                            }
                            break;
                        }
lbl39:
                        // 1 sources

                        while (true) {
                            v3[v4] = v7;
                            if (var13_7 < var16_6) ** continue;
                            break block12;
                            break;
                        }
                    }
                    var19_9 = v5;
                    var21_10 = var11_1.doFinal(new byte[]{(byte)(var19_9 >>> 56), (byte)(var19_9 >>> 48), (byte)(var19_9 >>> 40), (byte)(var19_9 >>> 32), (byte)(var19_9 >>> 24), (byte)(var19_9 >>> 16), (byte)(var19_9 >>> 8), (byte)var19_9});
                    v7 = ((long)var21_10[0] & 255L) << 56 | ((long)var21_10[1] & 255L) << 48 | ((long)var21_10[2] & 255L) << 40 | ((long)var21_10[3] & 255L) << 32 | ((long)var21_10[4] & 255L) << 24 | ((long)var21_10[5] & 255L) << 16 | ((long)var21_10[6] & 255L) << 8 | (long)var21_10[7] & 255L;
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
                jk.HAejn = var17_3;
                jk.kyDxg = new Integer[33];
                jk.kFdBt = new HashMap<K, V>(13);
                var0_11 = Cipher.getInstance("DES/CBC/NoPadding");
                v8 = SecretKeyFactory.getInstance("DES");
                v9 = new byte[8];
                v10 = v9;
                v9[0] = (byte)(var22 >>> 56);
                for (var1_12 = 1; var1_12 < 8; ++var1_12) {
                    v10 = v10;
                    v10[var1_12] = (byte)(var22 << var1_12 * 8 >>> 56);
                }
                var0_11.init(2, (Key)v8.generateSecret(new DESKeySpec(v10)), new IvParameterSpec(new byte[8]));
                var6_13 = new long[2];
                var3_14 = 0;
                var4_15 = "\t2R\u00a9\u008f\u00c1\u00af\u00c9(\u00f1\u00c8\u00f81\u00b8\"\u0010";
                var5_16 = "\t2R\u00a9\u008f\u00c1\u00af\u00c9(\u00f1\u00c8\u00f81\u00b8\"\u0010".length();
                var2_17 = 0;
                while (true) {
                    break block13;
                    break;
                }
lbl74:
                // 1 sources

                while (true) {
                    var6_13[v11] = ((long)var10_20[0] & 255L) << 56 | ((long)var10_20[1] & 255L) << 48 | ((long)var10_20[2] & 255L) << 40 | ((long)var10_20[3] & 255L) << 32 | ((long)var10_20[4] & 255L) << 24 | ((long)var10_20[5] & 255L) << 16 | ((long)var10_20[6] & 255L) << 8 | (long)var10_20[7] & 255L;
                    if (var2_17 < var5_16) ** continue;
                    break block14;
                    break;
                }
            }
            var7_18 = var4_15.substring(var2_17, var2_17 += 8).getBytes("ISO-8859-1");
            v11 = var3_14++;
            var8_19 = ((long)var7_18[0] & 255L) << 56 | ((long)var7_18[1] & 255L) << 48 | ((long)var7_18[2] & 255L) << 40 | ((long)var7_18[3] & 255L) << 32 | ((long)var7_18[4] & 255L) << 24 | ((long)var7_18[5] & 255L) << 16 | ((long)var7_18[6] & 255L) << 8 | (long)var7_18[7] & 255L;
            var10_20 = var0_11.doFinal(new byte[]{(byte)(var8_19 >>> 56), (byte)(var8_19 >>> 48), (byte)(var8_19 >>> 40), (byte)(var8_19 >>> 32), (byte)(var8_19 >>> 24), (byte)(var8_19 >>> 16), (byte)(var8_19 >>> 8), (byte)var8_19});
            ** while (true)
        }
        jk.TscJs = var6_13;
        jk.pPJRe = new Long[2];
        jk.zumTM = System.currentTimeMillis();
        jk.tSRYI = mG.cnQ((int)jk.bDE("c", (int)9271, (long)(1435092371162270167L ^ var22)));
        jk.mPXGi = mG.cnQ((int)jk.bDE("c", (int)13768, (long)(9103059913970685985L ^ var22)));
        jk.jEkxo = mG.cnQ((int)jk.bDE("c", (int)10008, (long)(6923302068871629549L ^ var22)));
    }

    private static CallSite bDH(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jk" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static float[] bDt(int n2) {
        float[] fArray = new float[]{(float)jk.bDp(n2) / 255.0f, (float)jk.bDq(n2) / 255.0f, (float)jk.bDr(n2) / 255.0f, (float)jk.bDs(n2) / 255.0f};
        return fArray;
    }

    public static int bDs(int n2) {
        long l2 = khXTS ^ 0x7FDAC3BFC62CL;
        return n2 >> jk.bDE("c", (int)23397, (long)(0x25C9EAADB39A721FL ^ l2)) & jk.bDE("c", (int)25251, (long)(0x77D9A11E0CB64BCBL ^ l2));
    }

    public static int bDp(int n2) {
        long l2 = khXTS ^ 0x74BF4DB58CC4L;
        return n2 >> jk.bDE("c", (int)1963, (long)(0x57464CA3A87AE429L ^ l2)) & jk.bDE("c", (int)25251, (long)(0x77D9AA7B82BC0123L ^ l2));
    }

    public static int bDr(int n2) {
        long l2 = khXTS ^ 0x276882AAC2DDL;
        return n2 & jk.bDE("c", (int)19322, (long)(0x7F2D3A4DD23BE6CCL ^ l2));
    }

    public static int bDq(int n2) {
        long l2 = khXTS ^ 0x50E1310C92A6L;
        return n2 >> jk.bDE("c", (int)17155, (long)(0x310CADB810383EF6L ^ l2)) & jk.bDE("c", (int)25251, (long)(0x77D98E25FE051F41L ^ l2));
    }

    /*
     * Exception decompiling
     */
    public static mG bDw(char var0, float var1_1) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [0[TRYBLOCK]], but top level block is 1[SWITCH]
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
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private static int bDD(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = jk.bDC(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public static mG bDl(int n2, float f2, float f3, int n3, float f4) {
        float f5 = (float)(System.currentTimeMillis() - zumTM) / f4;
        float f6 = (float)(n2 * n3) / f4;
        float f7 = Math.abs((f5 + f6) % 2.0f - 1.0f) * (f3 - f2) + f2;
        return mG.cnS(f7, 0.7f, 1.0f);
    }

    private static long bDF(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7BD0;
        if (pPJRe[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = TscJs[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])kFdBt.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    kFdBt.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jk", exception);
            }
            long l5 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            jk.pPJRe[n3] = l5;
        }
        return pPJRe[n3];
    }

    public static mG bDn(int n2, mG mG2, int n3) {
        return jk.bDm(n2, mG2, n3);
    }

    private static long bDG(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        long l3 = jk.bDF(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l3;
    }

    public static mG bDm(int n2, mG mG2, int n3) {
        mG mG3 = mG2.coe(0.5f);
        return jk.bDo(n3, n2, mG2, mG3);
    }

    public static boolean bDz(String string) {
        boolean bl2;
        block2: {
            block3: {
                long l2 = khXTS ^ 0x4A547F249E71L;
                String[] stringArray = jf.bBe();
                try {
                    bl2 = string.indexOf((int)jk.bDE("c", (int)17394, (long)(0x2DCD92A069D032DAL ^ l2)));
                    if (stringArray == null) break block2;
                    if (bl2 < false) break block3;
                }
                catch (MatchException matchException) {
                    throw jk.bDB(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static CallSite bDE(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jk" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int bDC(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7B2A;
        if (kyDxg[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = HAejn[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])kgjMD.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    kgjMD.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jk", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jk.kyDxg[n3] = n4;
        }
        return kyDxg[n3];
    }

    public static boolean bDA(int[] nArray) {
        char n2;
        block8: {
            long l2 = khXTS ^ 0x57F03E2725C5L;
            int[] nArray2 = nArray;
            int n3 = nArray2.length;
            int n4 = 0;
            String[] stringArray = jf.bBe();
            while (n4 < n3) {
                block7: {
                    block9: {
                        char n5 = nArray2[n4];
                        try {
                            try {
                                try {
                                    if (stringArray == null) break block7;
                                    n2 = n5;
                                    if (stringArray == null) break block8;
                                }
                                catch (MatchException matchException) {
                                    throw jk.bDB(matchException);
                                }
                                if (n2 != jk.bDE("c", (int)15359, (long)(0x2ADE2210A7F47174L ^ l2))) break block9;
                            }
                            catch (MatchException matchException) {
                                throw jk.bDB(matchException);
                            }
                            return true;
                        }
                        catch (MatchException matchException) {
                            throw jk.bDB(matchException);
                        }
                    }
                    ++n4;
                }
                if (stringArray != null) continue;
            }
            n2 = '\u0000';
        }
        return n2 != '\u0000';
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    public static Character bDx(int var0) {
        var1_1 = jk.khXTS ^ 76022883398906L;
        var3_2 = jf.bBe();
        try {
            v0 /* !! */  = var0;
            if (var3_2 != null) {
            }
            ** GOTO lbl13
        }
        catch (MatchException v1) {
            throw jk.bDB(v1);
        }
        {
            ** switch (v0 /* !! */ )
        }
lbl-1000:
        // 1 sources

        {
            case '\u0000': {
                v0 /* !! */  = (char)jk.bDE("c", (int)2712, (long)(8931741584885698876L ^ var1_1));
lbl13:
                // 2 sources

                v2 = Character.valueOf(v0 /* !! */ );
                break;
            }
lbl15:
            // 1 sources

            case '\u00aa': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)23376, (long)(7126584669265592553L ^ var1_1)));
                break;
            }
lbl18:
            // 1 sources

            case '\uaa00': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)2454, (long)(6836223952805745204L ^ var1_1)));
                break;
            }
lbl21:
            // 1 sources

            case '\uaaaa': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)28196, (long)(4171240892031382940L ^ var1_1)));
                break;
            }
lbl24:
            // 1 sources

            case '\uaa0000': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)28399, (long)(3620412094595478873L ^ var1_1)));
                break;
            }
lbl27:
            // 1 sources

            case '\uaa00aa': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)23643, (long)(218901521598446L ^ var1_1)));
                break;
            }
lbl30:
            // 1 sources

            case '\uffaa00': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)1470, (long)(8740296862895988239L ^ var1_1)));
                break;
            }
lbl33:
            // 1 sources

            case '\uaaaaaa': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)8392, (long)(553822879079693176L ^ var1_1)));
                break;
            }
lbl36:
            // 1 sources

            case '\u555555': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)18106, (long)(7038008272829816095L ^ var1_1)));
                break;
            }
lbl39:
            // 1 sources

            case '\u5555ff': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)16753, (long)(5499769290555267778L ^ var1_1)));
                break;
            }
lbl42:
            // 1 sources

            case '\u55ff55': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)24054, (long)(3776547647052973648L ^ var1_1)));
                break;
            }
lbl45:
            // 1 sources

            case '\u55ffff': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)21219, (long)(7251249371611695438L ^ var1_1)));
                break;
            }
lbl48:
            // 1 sources

            case '\uff5555': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)13430, (long)(44418181251690460L ^ var1_1)));
                break;
            }
lbl51:
            // 1 sources

            case '\uff55ff': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)18973, (long)(1600679749416817058L ^ var1_1)));
                break;
            }
lbl54:
            // 1 sources

            case '\uffff55': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)25271, (long)(6350869116562684185L ^ var1_1)));
                break;
            }
lbl57:
            // 1 sources

            case '\uffffff': {
                v2 = Character.valueOf((char)jk.bDE("c", (int)1941, (long)(2291648465477459005L ^ var1_1)));
                break;
            }
lbl60:
            // 1 sources

            default: {
                v2 = null;
            }
        }
        return v2;
    }

    public static mG bDo(int n2, int n3, mG ... mGArray) {
        int n4;
        mG[] mGArray2;
        mG mG2;
        int n5;
        int n6;
        block15: {
            int n7;
            int n8;
            block13: {
                block14: {
                    int n9;
                    String[] stringArray;
                    long l2;
                    block16: {
                        block12: {
                            Object object;
                            Object object2;
                            block11: {
                                l2 = khXTS ^ 0xA5447A7A1A3L;
                                n6 = (int)((System.currentTimeMillis() / (long)n2 + (long)n3) % jk.bDH("o", (int)6194, (long)(0x67E6BD8EADC25621L ^ l2)));
                                stringArray = jf.bBe();
                                try {
                                    try {
                                        object2 = n6;
                                        object = jk.bDE("c", (int)19179, (long)(0x2451138AA50A8412L ^ l2));
                                        if (stringArray == null) break block11;
                                        if (object2 <= object) break block12;
                                    }
                                    catch (MatchException matchException) {
                                        throw jk.bDB(matchException);
                                    }
                                    object2 = jk.bDE("c", (int)4276, (long)(0x1A9471DC87E2DE57L ^ l2));
                                    object = n6;
                                }
                                catch (MatchException matchException) {
                                    throw jk.bDB(matchException);
                                }
                            }
                            n9 = object2 - object;
                            break block16;
                        }
                        n9 = n6;
                    }
                    n6 = n9 + jk.bDE("c", (int)6441, (long)(0x281561B70DB2D7D1L ^ l2));
                    n5 = (int)((float)n6 / 360.0f * (float)mGArray.length);
                    try {
                        if (n5 == mGArray.length) {
                            --n5;
                        }
                    }
                    catch (MatchException matchException) {
                        throw jk.bDB(matchException);
                    }
                    mG2 = mGArray[n5];
                    try {
                        try {
                            mGArray2 = mGArray;
                            n8 = n5;
                            n7 = mGArray.length - 1;
                            if (stringArray == null) break block13;
                            if (n8 != n7) break block14;
                        }
                        catch (MatchException matchException) {
                            throw jk.bDB(matchException);
                        }
                        n4 = 0;
                        break block15;
                    }
                    catch (MatchException matchException) {
                        throw jk.bDB(matchException);
                    }
                }
                n8 = n5;
                n7 = 1;
            }
            n4 = n8 + n7;
        }
        mG mG3 = mGArray2[n4];
        return jk.bDu(mG2, mG3, (float)n6 / 360.0f * (float)mGArray.length - (float)n5);
    }

    public static int bDv(int n2, int n3) {
        return mG.cnR(jk.bDp(n2), jk.bDq(n2), jk.bDr(n2), n3).coh();
    }

    private static MatchException bDB(MatchException matchException) {
        return matchException;
    }

    public static mG bDu(mG mG2, mG mG3, double d2) {
        float f2;
        float f3;
        int n2;
        int n3;
        int n4;
        block55: {
            mG mG4;
            block53: {
                block54: {
                    String[] stringArray;
                    block52: {
                        mG mG5;
                        block50: {
                            block51: {
                                float f4;
                                float f5;
                                block49: {
                                    mG mG6;
                                    block47: {
                                        block48: {
                                            block46: {
                                                mG mG7;
                                                block44: {
                                                    block45: {
                                                        float f6;
                                                        float f7;
                                                        block43: {
                                                            mG mG8;
                                                            block41: {
                                                                block42: {
                                                                    block40: {
                                                                        mG mG9;
                                                                        block38: {
                                                                            block39: {
                                                                                float f8;
                                                                                float f9;
                                                                                block37: {
                                                                                    mG mG10;
                                                                                    block35: {
                                                                                        block36: {
                                                                                            block34: {
                                                                                                mG mG11;
                                                                                                block32: {
                                                                                                    block33: {
                                                                                                        long l2 = khXTS ^ 0x6CB00272D8FEL;
                                                                                                        stringArray = jf.bBe();
                                                                                                        try {
                                                                                                            try {
                                                                                                                mG11 = mG3;
                                                                                                                if (stringArray == null) break block32;
                                                                                                                if (mG11 != null) break block33;
                                                                                                            }
                                                                                                            catch (MatchException matchException) {
                                                                                                                throw jk.bDB(matchException);
                                                                                                            }
                                                                                                            f9 = 0.0f;
                                                                                                            break block34;
                                                                                                        }
                                                                                                        catch (MatchException matchException) {
                                                                                                            throw jk.bDB(matchException);
                                                                                                        }
                                                                                                    }
                                                                                                    mG11 = mG3;
                                                                                                }
                                                                                                f9 = mG11.cor();
                                                                                            }
                                                                                            try {
                                                                                                try {
                                                                                                    mG10 = mG2;
                                                                                                    if (stringArray == null) break block35;
                                                                                                    if (mG10 != null) break block36;
                                                                                                }
                                                                                                catch (MatchException matchException) {
                                                                                                    throw jk.bDB(matchException);
                                                                                                }
                                                                                                f8 = 0.0f;
                                                                                                break block37;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw jk.bDB(matchException);
                                                                                            }
                                                                                        }
                                                                                        mG10 = mG2;
                                                                                    }
                                                                                    f8 = mG10.cor();
                                                                                }
                                                                                n4 = mZ.csm(f9, f8, d2);
                                                                                try {
                                                                                    try {
                                                                                        mG9 = mG3;
                                                                                        if (stringArray == null) break block38;
                                                                                        if (mG9 != null) break block39;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw jk.bDB(matchException);
                                                                                    }
                                                                                    f7 = 0.0f;
                                                                                    break block40;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw jk.bDB(matchException);
                                                                                }
                                                                            }
                                                                            mG9 = mG3;
                                                                        }
                                                                        f7 = mG9.cos();
                                                                    }
                                                                    try {
                                                                        try {
                                                                            mG8 = mG2;
                                                                            if (stringArray == null) break block41;
                                                                            if (mG8 != null) break block42;
                                                                        }
                                                                        catch (MatchException matchException) {
                                                                            throw jk.bDB(matchException);
                                                                        }
                                                                        f6 = 0.0f;
                                                                        break block43;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw jk.bDB(matchException);
                                                                    }
                                                                }
                                                                mG8 = mG2;
                                                            }
                                                            f6 = mG8.cos();
                                                        }
                                                        n3 = mZ.csm(f7, f6, d2);
                                                        try {
                                                            try {
                                                                mG7 = mG3;
                                                                if (stringArray == null) break block44;
                                                                if (mG7 != null) break block45;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw jk.bDB(matchException);
                                                            }
                                                            f5 = 0.0f;
                                                            break block46;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jk.bDB(matchException);
                                                        }
                                                    }
                                                    mG7 = mG3;
                                                }
                                                f5 = mG7.cot();
                                            }
                                            try {
                                                try {
                                                    mG6 = mG2;
                                                    if (stringArray == null) break block47;
                                                    if (mG6 != null) break block48;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jk.bDB(matchException);
                                                }
                                                f4 = 0.0f;
                                                break block49;
                                            }
                                            catch (MatchException matchException) {
                                                throw jk.bDB(matchException);
                                            }
                                        }
                                        mG6 = mG2;
                                    }
                                    f4 = mG6.cot();
                                }
                                n2 = mZ.csm(f5, f4, d2);
                                try {
                                    try {
                                        mG5 = mG3;
                                        if (stringArray == null) break block50;
                                        if (mG5 != null) break block51;
                                    }
                                    catch (MatchException matchException) {
                                        throw jk.bDB(matchException);
                                    }
                                    f3 = 0.0f;
                                    break block52;
                                }
                                catch (MatchException matchException) {
                                    throw jk.bDB(matchException);
                                }
                            }
                            mG5 = mG3;
                        }
                        f3 = mG5.cou();
                    }
                    try {
                        try {
                            mG4 = mG2;
                            if (stringArray == null) break block53;
                            if (mG4 != null) break block54;
                        }
                        catch (MatchException matchException) {
                            throw jk.bDB(matchException);
                        }
                        f2 = 0.0f;
                        break block55;
                    }
                    catch (MatchException matchException) {
                        throw jk.bDB(matchException);
                    }
                }
                mG4 = mG2;
            }
            f2 = mG4.cou();
        }
        int n5 = mZ.csm(f3, f2, d2);
        return mG.cnR(n4, n3, n2, n5);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    public static boolean bDy(char c2) {
        CallSite callSite;
        char c3;
        block16: {
            String[] stringArray;
            long l2;
            block14: {
                l2 = khXTS ^ 0x2BAC316C89CDL;
                stringArray = jf.bBe();
                try {
                    block15: {
                        try {
                            try {
                                try {
                                    c3 = c2;
                                    callSite = jk.bDE("c", (int)28278, (long)(0x532052380AF588FCL ^ l2));
                                    if (stringArray == null) break block14;
                                    if (c3 < callSite) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw jk.bDB(matchException);
                                }
                                c3 = c2;
                                if (stringArray == null) return c3 != '\u0000';
                            }
                            catch (MatchException matchException) {
                                throw jk.bDB(matchException);
                            }
                            if (c3 <= jk.bDE("c", (int)2977, (long)(0x266195C93B926D3DL ^ l2))) return '\u0001' != '\u0000';
                        }
                        catch (MatchException matchException) {
                            throw jk.bDB(matchException);
                        }
                    }
                    c3 = c2;
                    callSite = jk.bDE("c", (int)14196, (long)(0xD00556A128C51ECL ^ l2));
                }
                catch (MatchException matchException) {
                    throw jk.bDB(matchException);
                }
            }
            try {
                try {
                    try {
                        if (stringArray == null) break block16;
                        if (c3 < callSite) return '\u0000' != '\u0000';
                    }
                    catch (MatchException matchException) {
                        throw jk.bDB(matchException);
                    }
                    c3 = c2;
                    if (stringArray == null) return c3 != '\u0000';
                }
                catch (MatchException matchException) {
                    throw jk.bDB(matchException);
                }
                callSite = jk.bDE("c", (int)12745, (long)(0xADA89C0D7CED749L ^ l2));
            }
            catch (MatchException matchException) {
                throw jk.bDB(matchException);
            }
        }
        if (c3 > callSite) return '\u0000' != '\u0000';
        return '\u0001' != '\u0000';
    }

    public static mG bDk() {
        long l2 = khXTS ^ 0x5F3AF2DDC7B8L;
        double d2 = Math.ceil((double)(System.currentTimeMillis() + jk.bDH("o", (int)28833, (long)(0x307D0A1E950C58A8L ^ l2))) / 20.0);
        return mG.cnS((float)((d2 %= 360.0) / 360.0), 0.5f, 1.0f);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jk.class, "bDG", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
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
            return MethodHandles.lookup().findStatic(jk.class, "bDD", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

