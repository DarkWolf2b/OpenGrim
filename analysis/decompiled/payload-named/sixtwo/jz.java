/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.font.TextRenderer
 *  net.minecraft.client.font.TextRenderer$TextLayerType
 *  net.minecraft.client.render.VertexConsumerProvider
 *  net.minecraft.client.util.BufferAllocator
 *  net.minecraft.text.OrderedText
 *  net.minecraft.text.Text
 *  net.minecraft.util.math.ColorHelper
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4f
 *  org.jspecify.annotations.Nullable
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
import net.minecraft.client.font.TextRenderer;
import net.minecraft.client.render.VertexConsumerProvider;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.text.OrderedText;
import net.minecraft.text.Text;
import net.minecraft.util.math.ColorHelper;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.jspecify.annotations.Nullable;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jA;
import sixtwo.jI;
import sixtwo.jz$tU;

public final class jz {
    private static final float WVGee = -11000.0f;
    private static final TextRenderer.TextLayerType zrLJA;
    private static @Nullable jA zbhCz;
    private static final long kzcEw;
    private static final long[] onZzt;
    private static final Integer[] ERLZp;
    private static final Map RckkA;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        kzcEw = gb.aYR(-1672401726751479232L, 4739872558628929044L, MethodHandles.lookup().lookupClass()).a(242368169425296L);
        RckkA = new HashMap(13);
        long l2 = kzcEw ^ 0x177E182572ECL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[3];
        int n2 = 0;
        String string = "\u00acjP\u00fej\u00bf\u00bc\t\u00e1\u0000\u0094\u00f9\u008a\u009c\u00b6\u00d1\u00d6\u00cf\u00cc\u00c5a\u001b\u00a1\u00b9";
        int n3 = "\u00acjP\u00fej\u00bf\u00bc\t\u00e1\u0000\u0094\u00f9\u008a\u009c\u00b6\u00d1\u00d6\u00cf\u00cc\u00c5a\u001b\u00a1\u00b9".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        onZzt = lArray;
        ERLZp = new Integer[3];
        zrLJA = TextRenderer.TextLayerType.SEE_THROUGH;
    }

    public static void bGI(@Nullable Matrix3x2fc matrix3x2fc, TextRenderer textRenderer, @Nullable Text text, float f2, float f3, int n2, boolean bl2, jz$tU jz$tU) {
        long l2;
        block7: {
            l2 = kzcEw ^ 0x50FC0DD3E176L;
            try {
                try {
                    if (text != null && ColorHelper.getAlpha((int)n2) != 0) break block7;
                }
                catch (MatchException matchException) {
                    throw jz.bGM(matchException);
                }
                return;
            }
            catch (MatchException matchException) {
                throw jz.bGM(matchException);
            }
        }
        try {
            textRenderer.draw(text, f2, f3, n2, bl2, jz.bGL(matrix3x2fc), (VertexConsumerProvider)jz.bGK().bufferSource(), zrLJA, 0, (int)jz.bGP("p", (int)17418, (long)(0x1F3A6EFE295A220BL ^ l2)));
            if (jz$tU == jz$tU.GgXAb) {
                jz.bGJ();
            }
        }
        catch (MatchException matchException) {
            throw jz.bGM(matchException);
        }
    }

    public static void bGJ() {
        block3: {
            jA jA2;
            block2: {
                long l2 = kzcEw ^ 0x69953B50D625L;
                jA jA3 = zbhCz;
                String[] stringArray = jz$tU.dqa();
                try {
                    jA2 = jA3;
                    if (stringArray != null) break block2;
                    if (jA2 == null) break block3;
                }
                catch (MatchException matchException) {
                    throw jz.bGM(matchException);
                }
                jA2 = jA3;
            }
            jA2.bufferSource().draw();
        }
    }

    public static void bGH(@Nullable Matrix3x2fc matrix3x2fc, TextRenderer textRenderer, @Nullable Text text, float f2, float f3, int n2, boolean bl2) {
        long l2 = kzcEw ^ 0x7BB427F18C99L;
        String[] stringArray = jz$tU.dqa();
        jz.bGI(matrix3x2fc, textRenderer, text, f2, f3, n2, bl2, jz$tU.GgXAb);
        String[] stringArray2 = stringArray;
        try {
            if (stringArray2 != null) {
                iS.bwK("frmyLb");
            }
        }
        catch (MatchException matchException) {
            throw jz.bGM(matchException);
        }
    }

    private static CallSite bGP(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jz" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static void bGD(@Nullable Matrix3x2fc matrix3x2fc, TextRenderer textRenderer, @Nullable String string, float f2, float f3, int n2, boolean bl2) {
        jz.bGE(matrix3x2fc, textRenderer, string, f2, f3, n2, bl2, jz$tU.GgXAb);
    }

    private static int bGN(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5F61;
        if (ERLZp[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = onZzt[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])RckkA.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    RckkA.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jz", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            jz.ERLZp[n3] = n4;
        }
        return ERLZp[n3];
    }

    private static int bGO(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = jz.bGN(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static MatchException bGM(MatchException matchException) {
        return matchException;
    }

    public static void bGG(@Nullable Matrix3x2fc matrix3x2fc, TextRenderer textRenderer, @Nullable OrderedText orderedText, float f2, float f3, int n2, boolean bl2, jz$tU jz$tU) {
        long l2;
        block7: {
            l2 = kzcEw ^ 0x37E1FB2782B4L;
            try {
                try {
                    if (orderedText != null && ColorHelper.getAlpha((int)n2) != 0) break block7;
                }
                catch (MatchException matchException) {
                    throw jz.bGM(matchException);
                }
                return;
            }
            catch (MatchException matchException) {
                throw jz.bGM(matchException);
            }
        }
        try {
            textRenderer.draw(orderedText, f2, f3, n2, bl2, jz.bGL(matrix3x2fc), (VertexConsumerProvider)jz.bGK().bufferSource(), zrLJA, 0, (int)jz.bGP("p", (int)14824, (long)(0x52A13E7C48A13C2AL ^ l2)));
            if (jz$tU == jz$tU.GgXAb) {
                jz.bGJ();
            }
        }
        catch (MatchException matchException) {
            throw jz.bGM(matchException);
        }
    }

    private static Matrix4f bGL(@Nullable Matrix3x2fc matrix3x2fc) {
        Matrix4f matrix4f;
        block4: {
            block3: {
                Matrix3x2fc matrix3x2fc2;
                block2: {
                    long l2 = kzcEw ^ 0x42C052EBD65CL;
                    String[] stringArray = jz$tU.dqa();
                    try {
                        matrix3x2fc2 = matrix3x2fc;
                        if (stringArray != null) break block2;
                        if (matrix3x2fc2 == null) break block3;
                    }
                    catch (MatchException matchException) {
                        throw jz.bGM(matchException);
                    }
                    matrix3x2fc2 = matrix3x2fc;
                }
                matrix4f = jI.bIl(matrix3x2fc2);
                break block4;
            }
            matrix4f = new Matrix4f();
        }
        Matrix4f matrix4f2 = matrix4f;
        return matrix4f2.translate(0.0f, 0.0f, -11000.0f);
    }

    public static void bGF(@Nullable Matrix3x2fc matrix3x2fc, TextRenderer textRenderer, @Nullable OrderedText orderedText, float f2, float f3, int n2, boolean bl2) {
        long l2 = kzcEw ^ 0x572286CDB98CL;
        String[] stringArray = jz$tU.dqa();
        jz.bGG(matrix3x2fc, textRenderer, orderedText, f2, f3, n2, bl2, jz$tU.GgXAb);
        String[] stringArray2 = stringArray;
        try {
            if (iS.bwL() == null) {
                jz$tU.dpZ(new String[2]);
            }
        }
        catch (MatchException matchException) {
            throw jz.bGM(matchException);
        }
    }

    public static void bGE(@Nullable Matrix3x2fc matrix3x2fc, TextRenderer textRenderer, @Nullable String string, float f2, float f3, int n2, boolean bl2, jz$tU jz$tU) {
        long l2;
        block16: {
            block14: {
                int n3;
                block15: {
                    String string2;
                    String[] stringArray;
                    block13: {
                        l2 = kzcEw ^ 0x1ACDDFE0B4CFL;
                        stringArray = jz$tU.dqa();
                        try {
                            string2 = string;
                            if (stringArray != null) break block13;
                            if (string2 == null) break block14;
                        }
                        catch (MatchException matchException) {
                            throw jz.bGM(matchException);
                        }
                        string2 = string;
                    }
                    try {
                        try {
                            n3 = string2.isEmpty();
                            if (stringArray != null) break block15;
                            if (n3 != 0) break block14;
                        }
                        catch (MatchException matchException) {
                            throw jz.bGM(matchException);
                        }
                        n3 = ColorHelper.getAlpha((int)n2);
                    }
                    catch (MatchException matchException) {
                        throw jz.bGM(matchException);
                    }
                }
                if (n3 != 0) break block16;
            }
            return;
        }
        try {
            textRenderer.draw(string, f2, f3, n2, bl2, jz.bGL(matrix3x2fc), (VertexConsumerProvider)jz.bGK().bufferSource(), zrLJA, 0, (int)jz.bGP("p", (int)14824, (long)(0x52A113506C660A51L ^ l2)));
            if (jz$tU == jz$tU.GgXAb) {
                jz.bGJ();
            }
        }
        catch (MatchException matchException) {
            throw jz.bGM(matchException);
        }
    }

    private static jA bGK() {
        jA jA2;
        block4: {
            block5: {
                long l2 = kzcEw ^ 0x1CB29CCE9891L;
                String[] stringArray = jz$tU.dqa();
                try {
                    try {
                        jA2 = zbhCz;
                        if (stringArray != null) break block4;
                        if (jA2 != null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jz.bGM(matchException);
                    }
                    zbhCz = new jA(VertexConsumerProvider.immediate((BufferAllocator)new BufferAllocator((int)jz.bGP("p", (int)3368, (long)(0x74FA28ECF97892CCL ^ l2)))));
                }
                catch (MatchException matchException) {
                    throw jz.bGM(matchException);
                }
            }
            jA2 = zbhCz;
        }
        return jA2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jz.class, "bGO", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

