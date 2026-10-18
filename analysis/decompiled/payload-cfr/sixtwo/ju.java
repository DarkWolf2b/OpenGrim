/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap
 *  net.minecraft.class_10444
 *  net.minecraft.class_11540
 *  net.minecraft.class_11566
 *  net.minecraft.class_11659
 *  net.minecraft.class_11661
 *  net.minecraft.class_11684
 *  net.minecraft.class_12249
 *  net.minecraft.class_1309
 *  net.minecraft.class_1799
 *  net.minecraft.class_1921
 *  net.minecraft.class_1937
 *  net.minecraft.class_308$class_11274
 *  net.minecraft.class_310
 *  net.minecraft.class_3532
 *  net.minecraft.class_4587
 *  net.minecraft.class_4597
 *  net.minecraft.class_4597$class_4598
 *  net.minecraft.class_4608
 *  net.minecraft.class_4618
 *  net.minecraft.class_4722
 *  net.minecraft.class_746
 *  net.minecraft.class_811
 *  net.minecraft.class_9799
 *  org.joml.Matrix3x2fStack
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4fc
 *  org.jspecify.annotations.Nullable
 */
package sixtwo;

import it.unimi.dsi.fastutil.objects.Object2ObjectLinkedOpenHashMap;
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
import net.minecraft.class_10444;
import net.minecraft.class_11540;
import net.minecraft.class_11566;
import net.minecraft.class_11659;
import net.minecraft.class_11661;
import net.minecraft.class_11684;
import net.minecraft.class_12249;
import net.minecraft.class_1309;
import net.minecraft.class_1799;
import net.minecraft.class_1921;
import net.minecraft.class_1937;
import net.minecraft.class_308;
import net.minecraft.class_310;
import net.minecraft.class_3532;
import net.minecraft.class_4587;
import net.minecraft.class_4597;
import net.minecraft.class_4608;
import net.minecraft.class_4618;
import net.minecraft.class_4722;
import net.minecraft.class_746;
import net.minecraft.class_811;
import net.minecraft.class_9799;
import org.joml.Matrix3x2fStack;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4fc;
import org.jspecify.annotations.Nullable;
import sixtwo.gb;
import sixtwo.jE;
import sixtwo.jI;
import sixtwo.jO;
import sixtwo.ju$tT;
import sixtwo.jx;
import sixtwo.kD;
import sixtwo.kJ;
import sixtwo.kd;
import sixtwo.lA;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ln;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mZ;
import sixtwo.rD;

public final class ju
implements lA {
    private static final float vMVWK = -10850.0f;
    private static final float wSuGG = 16.0f;
    private static @Nullable jx EZsoO;
    private static String XBcvw;
    private static final long SIlUv;
    private static final long[] WageH;
    private static final Integer[] jOCMz;
    private static final Map VSGjo;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                ju.SIlUv = gb.aYR(-1711104809145699340L, 5991162868861888221L, MethodHandles.lookup().lookupClass()).a(17282826408841L);
                ju.VSGjo = new HashMap<K, V>(13);
                ju.bGm("Ie0B1b");
                var0 = ju.SIlUv ^ 44549190952295L;
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
                var8_3 = new long[6];
                var5_4 = 0;
                var6_5 = "\u00c1n{\u00f7\u008bO\u00f4)\u00cd\u0001\u00d8\u00e7o\u001f\u00ecD\u00d1\u0088\u00cb\u0089^\u00d0\u00ba(*D\u00e9\u00ed\u001e\u000b\u0080\u00e9";
                var7_6 = "\u00c1n{\u00f7\u008bO\u00f4)\u00cd\u0001\u00d8\u00e7o\u001f\u00ecD\u00d1\u0088\u00cb\u0089^\u00d0\u00ba(*D\u00e9\u00ed\u001e\u000b\u0080\u00e9".length();
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
lbl27:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "H\u00ea\u00c6\u00de7u\u00e8\u00f5\u00bb\u00de\u00b7P\u00b5\u0005\u008b\u00eb";
                    var7_6 = "H\u00ea\u00c6\u00de7u\u00e8\u00f5\u00bb\u00de\u00b7P\u00b5\u0005\u008b\u00eb".length();
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
lbl40:
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
lbl53:
                // 1 sources

                ** continue;
            }
        }
        ju.WageH = var8_3;
        ju.jOCMz = new Integer[6];
    }

    public static void bFO(@Nullable Matrix3x2fc matrix3x2fc, @Nullable class_1309 class_13092, @Nullable class_1937 class_19372, class_1799 class_17992, float f, float f2, float f3, ju$tT tT2) {
        long l = SIlUv ^ 0x6F730F3C8F8L;
        try {
            if (class_17992.method_7960()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        class_11540 class_115402 = ju.bFW(class_13092, class_19372, class_17992);
        ju.bFX(class_115402, matrix3x2fc, f, f2, f3, tT2);
    }

    public static String bGn() {
        return XBcvw;
    }

    public static void bFT(@Nullable Matrix3x2fc matrix3x2fc, class_1799 class_17992, float f, float f2, @Nullable String string, ju$tT tT2) {
        long l = SIlUv ^ 0x37AE1C990D04L;
        try {
            if (class_17992.method_7960()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        Matrix3x2fStack matrix3x2fStack = jI.bIn(matrix3x2fc);
        matrix3x2fStack.translate(f, f2);
        ju.bGf(matrix3x2fStack, class_17992);
        ju.bGg(matrix3x2fStack, class_17992);
        ju.bGh(matrix3x2fStack, class_17992, string, tT2);
    }

    public static void bFU(@Nullable Matrix3x2fc matrix3x2fc, class_1799 class_17992, int n, int n2, int n3, @Nullable String string, ju$tT tT2) {
        long l = SIlUv ^ 0x1BEC0091E786L;
        try {
            if (class_17992.method_7960()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        Matrix3x2fStack matrix3x2fStack = jI.bIn(matrix3x2fc);
        matrix3x2fStack.translate((float)n, (float)n2);
        matrix3x2fStack.scale((float)n3 / 16.0f, (float)n3 / 16.0f);
        ju.bGf(matrix3x2fStack, class_17992);
        ju.bGg(matrix3x2fStack, class_17992);
        ju.bGh(matrix3x2fStack, class_17992, string, tT2);
    }

    /*
     * Unable to fully structure code
     */
    private static boolean bFZ(class_11540 var0) {
        block13: {
            block12: {
                block10: {
                    block11: {
                        var1_1 = ju.SIlUv ^ 6556693632666L;
                        var3_2 = ju.bGn();
                        try {
                            v0 = var0.method_65608();
                            if (var3_2 == null) break block10;
                            if (v0) break block11;
                        }
                        catch (MatchException v1) {
                            throw ju.bGo(v1);
                        }
                        v0 = true;
                        break block10;
                    }
                    v0 = false;
                }
                var4_3 = v0;
                try {
                    try {
                        if (var3_2 == null) break block12;
                        if (var4_3) {
                        }
                        ** GOTO lbl31
                    }
                    catch (MatchException v2) {
                        throw ju.bGo(v2);
                    }
                    rD.dlmvG.field_1773.method_71114().method_71034(class_308.class_11274.field_60026);
                }
                catch (MatchException v3) {
                    throw ju.bGo(v3);
                }
            }
            try {
                if (var3_2 != null) break block13;
lbl31:
                // 2 sources

                rD.dlmvG.field_1773.method_71114().method_71034(class_308.class_11274.field_60027);
            }
            catch (MatchException v4) {
                throw ju.bGo(v4);
            }
        }
        return var4_3;
    }

    private static void bGl(Object2ObjectLinkedOpenHashMap<class_1921, class_9799> object2ObjectLinkedOpenHashMap, class_1921 class_19212) {
        object2ObjectLinkedOpenHashMap.put((Object)class_19212, (Object)new class_9799(class_19212.method_22722()));
    }

    private static int bGq(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = ju.bGp(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    public static void bGm(String string) {
        XBcvw = string;
    }

    public static void bFP(lC lC2, class_1799 class_17992, float f, float f2, @Nullable String string, ju$tT tT2) {
        ju.bFT((Matrix3x2fc)lC2.cfc(), class_17992, f, f2, string, tT2);
    }

    private static void bFX(class_11540 class_115402, @Nullable Matrix3x2fc matrix3x2fc, float f, float f2, float f3, ju$tT tT2) {
        ju.bFY(class_115402, matrix3x2fc, f, f2, f3, tT2);
    }

    private static void bFY(class_11540 class_115402, @Nullable Matrix3x2fc matrix3x2fc, float f, float f2, float f3, ju$tT ju$tT) {
        long l = SIlUv ^ 0x658210FC7110L;
        class_4587 class_45872 = ju.bGc(matrix3x2fc);
        jx jx2 = ju.bGj();
        class_45872.method_22903();
        ju.bGb(class_45872, f, f2, f3);
        boolean bl = ju.bFZ(class_115402);
        try {
            ju.bGd(class_115402, class_45872, jx2.submitNodeStorage());
            if (ju$tT == ju$tT.yDoOO) {
                ju.bFV();
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        try {
            if (bl) {
                ju.bGa();
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        class_45872.method_22909();
    }

    private static void bGe(jx jx2) {
        jx2.featureRenderDispatcher().method_73002();
        jx2.bufferSource().method_22993();
        jx2.crumblingBufferSource().method_22993();
        jx2.outlineBufferSource().method_23285();
    }

    public static void bFR(@Nullable Matrix3x2fc matrix3x2fc, lC lC2, class_1799 class_17992, int n, int n2, int n3, @Nullable String string) {
        ju.bFS(matrix3x2fc, lC2, class_17992, n, n2, n3, string, ju$tT.yDoOO);
    }

    private static void bGg(Matrix3x2fStack matrix3x2fStack, class_1799 class_17992) {
        float f;
        float f2;
        long l;
        block9: {
            block10: {
                float f3;
                String string;
                block8: {
                    class_746 class_7462;
                    block6: {
                        block7: {
                            l = SIlUv ^ 0x46855FC6812BL;
                            string = ju.bGn();
                            try {
                                try {
                                    class_7462 = rD.dlmvG.field_1724;
                                    if (string == null) break block6;
                                    if (class_7462 != null) break block7;
                                }
                                catch (MatchException matchException) {
                                    throw ju.bGo(matchException);
                                }
                                f3 = 0.0f;
                                break block8;
                            }
                            catch (MatchException matchException) {
                                throw ju.bGo(matchException);
                            }
                        }
                        class_7462 = rD.dlmvG.field_1724;
                    }
                    f3 = class_7462.method_7357().method_7905(class_17992, rD.dlmvG.method_61966().method_60637(true));
                }
                f2 = f3;
                try {
                    float f4 = f2 - 0.0f;
                    f = f4 == 0.0f ? 0 : (f4 < 0.0f ? -1 : 1);
                    if (string == null) break block9;
                    if (f > 0) break block10;
                }
                catch (MatchException matchException) {
                    throw ju.bGo(matchException);
                }
                return;
            }
            f = class_3532.method_15375((float)(16.0f * (1.0f - f2)));
        }
        float f5 = f;
        float f6 = f5 + class_3532.method_15386((float)(16.0f * f2));
        ju.bGi(matrix3x2fStack, 0.0f, f5, 16.0f, f6 - f5, mG.cnQ((int)ju.bGr("v", (int)27453, (long)(0x4C2C01B3E7EA1EDFL ^ l))));
    }

    private static void bGi(Matrix3x2fStack matrix3x2fStack, float f, float f2, float f3, float f4, mG mG2) {
        ntCFX.bMM(jO.bJI(matrix3x2fStack, f, f2, f3, f4).dqh(kd.AhlXN).dqk(mG2).dqz());
    }

    private static int bGp(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x236A;
        if (jOCMz[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = WageH[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])VSGjo.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    VSGjo.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ju", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            ju.jOCMz[n2] = n3;
        }
        return jOCMz[n2];
    }

    private static void bGb(class_4587 class_45872, float f, float f2, float f3) {
        class_45872.method_46416(f + f3 / 2.0f, f2 + f3 / 2.0f, -10850.0f);
        class_45872.method_22905(f3, -f3, f3);
    }

    private static Object2ObjectLinkedOpenHashMap<class_1921, class_9799> bGk() {
        Object2ObjectLinkedOpenHashMap object2ObjectLinkedOpenHashMap = new Object2ObjectLinkedOpenHashMap();
        ju.bGl((Object2ObjectLinkedOpenHashMap<class_1921, class_9799>)object2ObjectLinkedOpenHashMap, class_4722.method_24074());
        ju.bGl((Object2ObjectLinkedOpenHashMap<class_1921, class_9799>)object2ObjectLinkedOpenHashMap, class_4722.method_76545());
        ju.bGl((Object2ObjectLinkedOpenHashMap<class_1921, class_9799>)object2ObjectLinkedOpenHashMap, class_4722.method_29382());
        jE.bHu((Object2ObjectLinkedOpenHashMap<class_1921, class_9799>)object2ObjectLinkedOpenHashMap);
        ju.bGl((Object2ObjectLinkedOpenHashMap<class_1921, class_9799>)object2ObjectLinkedOpenHashMap, class_12249.method_75985());
        return object2ObjectLinkedOpenHashMap;
    }

    private static void bGf(Matrix3x2fStack matrix3x2fStack, class_1799 class_17992) {
        block4: {
            long l;
            block5: {
                l = SIlUv ^ 0x495B539C9875L;
                String string = ju.bGn();
                try {
                    try {
                        if (string == null) break block4;
                        if (class_17992.method_31578()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ju.bGo(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw ju.bGo(matchException);
                }
            }
            ju.bGi(matrix3x2fStack, 2.0f, 13.0f, 13.0f, 2.0f, mG.cnQ((int)ju.bGr("v", (int)9573, (long)(0x261411F8E35A49DEL ^ l))));
            ju.bGi(matrix3x2fStack, 2.0f, 13.0f, class_17992.method_31579(), 1.0f, mG.cnQ(ju.bGr("v", (int)695, (long)(0x3BC46F3DECE2EE0FL ^ l)) | class_17992.method_31580()));
        }
    }

    public static void bFQ(@Nullable Matrix3x2fc matrix3x2fc, lC lC2, class_1799 class_17992, int n, int n2, int n3) {
        ju.bFR(matrix3x2fc, lC2, class_17992, n, n2, n3, null);
    }

    private static void bGa() {
        class_310.method_1551().field_1773.method_71114().method_71034(class_308.class_11274.field_60027);
    }

    private static void bGd(class_11540 class_115402, class_4587 class_45872, class_11661 class_116612) {
        long l = SIlUv ^ 0x39A9B8DD83C1L;
        class_115402.method_65604(class_45872, (class_11659)class_116612, (int)ju.bGr("v", (int)17821, (long)(0x7F4E7EC0F1CDB290L ^ l)), class_4608.field_21444, 0);
    }

    private static void bGh(Matrix3x2fStack matrix3x2fStack, class_1799 class_17992, @Nullable String string, ju$tT ju$tT) {
        block12: {
            float f;
            float f2;
            lq lq2;
            String string2;
            block13: {
                String string3;
                String string4;
                block10: {
                    block11: {
                        block9: {
                            block8: {
                                long l = SIlUv ^ 0x6077AB984464L;
                                string4 = ju.bGn();
                                try {
                                    try {
                                        if (class_17992.method_7947() != 1) break block8;
                                        string3 = string;
                                        if (string4 == null) break block9;
                                    }
                                    catch (MatchException matchException) {
                                        throw ju.bGo(matchException);
                                    }
                                    if (string3 != null) break block8;
                                }
                                catch (MatchException matchException) {
                                    throw ju.bGo(matchException);
                                }
                                return;
                            }
                            string3 = string;
                        }
                        try {
                            if (string4 == null) break block10;
                            if (string3 == null) break block11;
                        }
                        catch (MatchException matchException) {
                            throw ju.bGo(matchException);
                        }
                        string3 = string;
                        break block10;
                    }
                    string3 = String.valueOf(class_17992.method_7947());
                }
                string2 = string3;
                lq2 = lE.WTzbi.bYM(8.0f);
                f2 = 17.0f - lq2.cao(string2);
                f = 17.0f - lq2.cat();
                try {
                    if (string4 == null) break block12;
                    if (ju$tT != ju$tT.IHKNQ) break block13;
                }
                catch (MatchException matchException) {
                    throw ju.bGo(matchException);
                }
                kJ kJ2 = ju.bGj().textBatch();
                kJ2.bUc(lq2);
                kJ2.bUd(kD.bST(matrix3x2fStack, f2, f, 0.0, lq2.caw(), mZ.csh(string2)).dsX(mG.hoGuU).dsY());
                return;
            }
            ln.bZG(lq2.cav(), string2, lq2.caw(), mG.hoGuU, jI.bIl((Matrix3x2fc)matrix3x2fStack), f2, f, 0.0f);
        }
    }

    private static class_4587 bGc(@Nullable Matrix3x2fc matrix3x2fc) {
        long l = SIlUv ^ 0x4E36A64A0E54L;
        class_4587 class_45872 = new class_4587();
        try {
            if (matrix3x2fc != null) {
                class_45872.method_34425((Matrix4fc)jI.bIl(matrix3x2fc));
            }
        }
        catch (MatchException matchException) {
            throw ju.bGo(matchException);
        }
        return class_45872;
    }

    private static MatchException bGo(MatchException matchException) {
        return matchException;
    }

    private static CallSite bGr(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ju" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static void bFN(@Nullable Matrix3x2fc matrix3x2fc, @Nullable class_1309 class_13092, @Nullable class_1937 class_19372, class_1799 class_17992, float f, float f2, float f3) {
        ju.bFO(matrix3x2fc, class_13092, class_19372, class_17992, f, f2, f3, ju$tT.yDoOO);
    }

    public static void bFS(@Nullable Matrix3x2fc matrix3x2fc, lC lC2, class_1799 class_17992, int n, int n2, int n3, @Nullable String string, ju$tT ju$tT) {
        ju.bFU(matrix3x2fc, class_17992, n, n2, n3, string, ju$tT);
    }

    private static class_11540 bFW(@Nullable class_1309 class_13092, @Nullable class_1937 class_19372, class_1799 class_17992) {
        class_11540 class_115402 = new class_11540();
        rD.dlmvG.method_65386().method_65598((class_10444)class_115402, class_17992, class_811.field_4317, class_19372, (class_11566)class_13092, 0);
        return class_115402;
    }

    private static jx bGj() {
        jx jx2;
        block2: {
            block3: {
                long l = SIlUv ^ 0x2F2CEBD1D234L;
                String string = ju.bGn();
                try {
                    jx2 = EZsoO;
                    if (string == null) break block2;
                    if (jx2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw ju.bGo(matchException);
                }
                class_11661 class_116612 = new class_11661();
                class_4597.class_4598 class_45982 = class_4597.method_22992(ju.bGk(), (class_9799)new class_9799((int)ju.bGr("v", (int)2265, (long)(0x3C967E1C3CD9AE22L ^ l))));
                class_4618 class_46182 = new class_4618();
                class_4597.class_4598 class_45983 = class_4597.method_22991((class_9799)new class_9799((int)ju.bGr("v", (int)3415, (long)(0x286CFCD0C200ABABL ^ l))));
                EZsoO = new jx(class_116612, class_45982, class_46182, class_45983, new class_11684(class_116612, rD.dlmvG.method_1541(), class_45982, rD.dlmvG.method_72703(), class_46182, class_45983, rD.dlmvG.field_1772), new kJ());
            }
            jx2 = EZsoO;
        }
        return jx2;
    }

    public static void bFV() {
        jx jx2;
        block2: {
            jx jx3;
            block3: {
                long l = SIlUv ^ 0xE5CD039BAE1L;
                jx3 = EZsoO;
                String string = ju.bGn();
                try {
                    jx2 = jx3;
                    if (string == null) break block2;
                    if (jx2 != null) break block3;
                }
                catch (MatchException matchException) {
                    throw ju.bGo(matchException);
                }
                return;
            }
            ju.bGe(jx3);
            jx2 = jx3;
        }
        jx2.textBatch().endBatch();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ju.class, "bGq", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
