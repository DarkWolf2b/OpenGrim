/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.Camera
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
 *  org.joml.Quaternionfc
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
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.Camera;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import org.joml.Quaternionfc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jI;
import sixtwo.mG;
import sixtwo.mU;
import sixtwo.mm;

public class ml {
    private Vec3d lkXRd;
    private Vec3d dLTzU;
    private final Vec3d FykKC;
    private final Vec3d KCxUk;
    private final float IuXHJ;
    private final float cnPZu;
    private final float PgeQF;
    private final mG udGdm;
    private final long zwlqH;
    private final long FQoIN;
    private final long uBxPJ;
    private final long KGTDW;
    private final float ONXuz;
    private final float TXMLT;
    private final float NOetf;
    private final float cjpBa;
    private final float Ndtrs;
    private final float SMirh;
    private final float oguBV;
    private final float zkkML;
    private final float FUCeB;
    private final float doUzS;
    private long oTvTP;
    private int ZmQqB;
    private static final long FTbXO = gb.aYR(-1319155063296182793L, 4469899127024224993L, MethodHandles.lookup().lookupClass()).a(243541798435071L);
    private static final long[] YCHoM;
    private static final Long[] plVos;
    private static final Map CPIRa;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public ml(Vec3d vec3d, Vec3d vec3d2, float f2, float f3, long l2, long l3, long l4, mG mG2) {
        long l5 = FTbXO ^ 0x50317765F020L;
        this.lkXRd = vec3d;
        this.dLTzU = vec3d;
        this.FykKC = vec3d;
        this.KCxUk = vec3d2;
        this.IuXHJ = f2;
        this.PgeQF = f3;
        this.zwlqH = l2;
        this.FQoIN = l3;
        this.uBxPJ = l4;
        this.udGdm = mG2;
        this.KGTDW = System.currentTimeMillis();
        this.cnPZu = ml.clk(0.0f, (float)Math.PI * 2);
        this.ONXuz = ml.clk(0.012f, 0.03f);
        this.TXMLT = ml.clk(0.012f, 0.03f);
        this.NOetf = ml.clk(0.012f, 0.03f);
        this.cjpBa = ml.clk(0.005f, 0.015f);
        this.Ndtrs = ml.clk(0.005f, 0.015f);
        int n2 = mm.clx();
        try {
            this.SMirh = ml.clk(0.005f, 0.015f);
            this.oguBV = ml.clk(0.0f, (float)Math.PI * 2);
            this.zkkML = ml.clk(0.0f, (float)Math.PI * 2);
            this.FUCeB = ml.clk(0.0f, (float)Math.PI * 2);
            this.doUzS = ml.clk(0.4f, 0.7f);
            if (iS.bwL() == null) {
                mm.clv(++n2);
            }
        }
        catch (MatchException matchException) {
            throw ml.cll(matchException);
        }
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        CPIRa = new HashMap(13);
        long l2 = FTbXO ^ 0xD2B8701A93CL;
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
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "\u00a4=\u00e7\u00f0\u0093n\u00909\u009c\u00ecb\u00e7$_\u00b8\u00d4";
        int n3 = "\u00a4=\u00e7\u00f0\u0093n\u00909\u009c\u00ecb\u00e7$_\u00b8\u00d4".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        YCHoM = lArray;
        plVos = new Long[2];
    }

    private static long cln(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        long l3 = ml.clm(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l3;
    }

    public void clh(BufferBuilder bufferBuilder, MatrixStack matrixStack, Camera camera, float f2) {
        float f3;
        block4: {
            block5: {
                long l2 = FTbXO ^ 0x75C8976EAF78L;
                f3 = this.clj();
                int n2 = mm.clw();
                try {
                    try {
                        if (n2 != 0) break block4;
                        if (!(f3 < 0.005f)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ml.cll(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw ml.cll(matchException);
                }
            }
            matrixStack.push();
            jI.bIs(matrixStack, this.cli(f2));
            matrixStack.multiply((Quaternionfc)camera.getRotation());
        }
        Matrix4f matrix4f = matrixStack.peek().getPositionMatrix();
        float f4 = this.PgeQF * 0.5f;
        int n3 = this.udGdm.coa(255.0f * f3).coh();
        bufferBuilder.vertex((Matrix4fc)matrix4f, -f4, -f4, 0.0f).texture(0.0f, 0.0f).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f4, -f4, 0.0f).texture(1.0f, 0.0f).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, f4, f4, 0.0f).texture(1.0f, 1.0f).color(n3);
        bufferBuilder.vertex((Matrix4fc)matrix4f, -f4, f4, 0.0f).texture(0.0f, 1.0f).color(n3);
        matrixStack.pop();
    }

    public boolean clg() {
        long l2;
        block11: {
            block12: {
                float f2;
                float f3;
                int n2;
                block10: {
                    block9: {
                        long l3;
                        block8: {
                            long l4 = FTbXO ^ 0x77CF175A333FL;
                            this.dLTzU = this.lkXRd;
                            n2 = mm.clw();
                            this.oTvTP = System.currentTimeMillis() - this.KGTDW;
                            f3 = this.ZmQqB++;
                            try {
                                try {
                                    l3 = this.oTvTP;
                                    if (n2 != 0) break block8;
                                    if (l3 >= this.zwlqH) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw ml.cll(matchException);
                                }
                                l3 = this.oTvTP;
                            }
                            catch (MatchException matchException) {
                                throw ml.cll(matchException);
                            }
                        }
                        float f4 = (float)l3 / (float)this.zwlqH;
                        float f5 = f4 * f4 * (3.0f - 2.0f * f4);
                        f2 = (float)Math.sin(Math.pow(f5, this.doUzS) * Math.PI);
                        try {
                            if (n2 == 0) break block10;
                            iS.bwK("VuXHr");
                        }
                        catch (MatchException matchException) {
                            throw ml.cll(matchException);
                        }
                    }
                    f2 = 0.0f;
                }
                double d2 = (double)f2 * 0.15;
                double d3 = Math.sin(f3 * this.ONXuz + this.oguBV) * 0.025 + Math.sin((double)(f3 * this.cjpBa) + (double)this.oguBV * 1.7) * 0.015;
                double d4 = Math.sin(f3 * this.TXMLT + this.zkkML) * 0.025 + Math.sin((double)(f3 * this.Ndtrs) + (double)this.zkkML * 1.7) * 0.015;
                double d5 = Math.sin(f3 * this.NOetf + this.FUCeB) * 0.025 + Math.sin((double)(f3 * this.SMirh) + (double)this.FUCeB * 1.7) * 0.015;
                try {
                    this.lkXRd = this.FykKC.add(this.KCxUk.x * (double)f2 * (double)this.IuXHJ + d3, this.KCxUk.y * (double)f2 * (double)this.IuXHJ + d2 + d4, this.KCxUk.z * (double)f2 * (double)this.IuXHJ + d5);
                    long l5 = this.oTvTP - this.uBxPJ;
                    l2 = l5 == 0L ? 0 : (l5 < 0L ? -1 : 1);
                    if (n2 != 0) break block11;
                    if (l2 < 0) break block12;
                }
                catch (MatchException matchException) {
                    throw ml.cll(matchException);
                }
                l2 = 1;
                break block11;
            }
            l2 = 0;
        }
        return (boolean)l2;
    }

    private static MatchException cll(MatchException matchException) {
        return matchException;
    }

    public float clj() {
        long l2;
        long l3;
        block11: {
            block12: {
                int n2;
                block9: {
                    block10: {
                        long l4 = FTbXO ^ 0x134649FF50D8L;
                        long l5 = Math.max((long)ml.clo("f", (int)11388, (long)(0x7D3544D28E5D353AL ^ l4)), this.zwlqH / ml.clo("f", (int)21204, (long)(0x759A164BD88ECB93L ^ l4)));
                        n2 = mm.clx();
                        l3 = this.uBxPJ - this.FQoIN;
                        try {
                            try {
                                long l6 = this.oTvTP - l5;
                                l2 = l6 == 0L ? 0 : (l6 < 0L ? -1 : 1);
                                if (n2 == 0) break block9;
                                if (l2 >= 0) break block10;
                            }
                            catch (MatchException matchException) {
                                throw ml.cll(matchException);
                            }
                            return (float)this.oTvTP / (float)l5;
                        }
                        catch (MatchException matchException) {
                            throw ml.cll(matchException);
                        }
                    }
                    long l7 = this.oTvTP - this.FQoIN;
                    l2 = l7 == 0L ? 0 : (l7 < 0L ? -1 : 1);
                }
                try {
                    try {
                        if (n2 == 0) break block11;
                        if (l2 >= 0) break block12;
                    }
                    catch (MatchException matchException) {
                        throw ml.cll(matchException);
                    }
                    return 1.0f;
                }
                catch (MatchException matchException) {
                    throw ml.cll(matchException);
                }
            }
            long l8 = l3 - 0L;
            l2 = l8 == 0L ? 0 : (l8 < 0L ? -1 : 1);
        }
        if (l2 > 0) {
            float f2 = Math.min(1.0f, (float)(this.oTvTP - this.FQoIN) / (float)l3);
            float f3 = 1.0f - f2;
            return f3 * f3 * (3.0f - 2.0f * f3);
        }
        return 0.0f;
    }

    private static CallSite clo(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ml" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static float clk(float f2, float f3) {
        float f4;
        block4: {
            block5: {
                long l2 = FTbXO ^ 0x5865DA2C67B5L;
                int n2 = mm.clw();
                try {
                    try {
                        f4 = f3;
                        if (n2 != 0) break block4;
                        if (!(f4 <= f2)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ml.cll(matchException);
                    }
                    return f2;
                }
                catch (MatchException matchException) {
                    throw ml.cll(matchException);
                }
            }
            f4 = (float)mU.cpP(f2, f3);
        }
        return f4;
    }

    public Vec3d cli(float f2) {
        double d2 = MathHelper.lerp((double)f2, (double)this.dLTzU.x, (double)this.lkXRd.x);
        double d3 = MathHelper.lerp((double)f2, (double)this.dLTzU.y, (double)this.lkXRd.y);
        double d4 = MathHelper.lerp((double)f2, (double)this.dLTzU.z, (double)this.lkXRd.z);
        return new Vec3d(d2, d3, d4);
    }

    private static long clm(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x7140;
        if (plVos[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = YCHoM[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])CPIRa.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    CPIRa.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ml", exception);
            }
            long l5 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            ml.plVos[n3] = l5;
        }
        return plVos[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ml.class, "cln", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

