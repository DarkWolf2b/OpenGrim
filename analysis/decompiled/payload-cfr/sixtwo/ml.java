/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_243
 *  net.minecraft.class_287
 *  net.minecraft.class_3532
 *  net.minecraft.class_4184
 *  net.minecraft.class_4587
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
import net.minecraft.class_243;
import net.minecraft.class_287;
import net.minecraft.class_3532;
import net.minecraft.class_4184;
import net.minecraft.class_4587;
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
    private class_243 lkXRd;
    private class_243 dLTzU;
    private final class_243 FykKC;
    private final class_243 KCxUk;
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

    public ml(class_243 class_2432, class_243 class_2433, float f, float f2, long l, long l2, long l3, mG mG2) {
        long l4 = FTbXO ^ 0x50317765F020L;
        this.lkXRd = class_2432;
        this.dLTzU = class_2432;
        this.FykKC = class_2432;
        this.KCxUk = class_2433;
        this.IuXHJ = f;
        this.PgeQF = f2;
        this.zwlqH = l;
        this.FQoIN = l2;
        this.uBxPJ = l3;
        this.udGdm = mG2;
        this.KGTDW = System.currentTimeMillis();
        this.cnPZu = ml.clk(0.0f, (float)Math.PI * 2);
        this.ONXuz = ml.clk(0.012f, 0.03f);
        this.TXMLT = ml.clk(0.012f, 0.03f);
        this.NOetf = ml.clk(0.012f, 0.03f);
        this.cjpBa = ml.clk(0.005f, 0.015f);
        this.Ndtrs = ml.clk(0.005f, 0.015f);
        int n = mm.clx();
        try {
            this.SMirh = ml.clk(0.005f, 0.015f);
            this.oguBV = ml.clk(0.0f, (float)Math.PI * 2);
            this.zkkML = ml.clk(0.0f, (float)Math.PI * 2);
            this.FUCeB = ml.clk(0.0f, (float)Math.PI * 2);
            this.doUzS = ml.clk(0.4f, 0.7f);
            if (iS.bwL() == null) {
                mm.clv(++n);
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
        long l = FTbXO ^ 0xD2B8701A93CL;
        Cipher cipher = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n = 0;
        String string = "\u00a4=\u00e7\u00f0\u0093n\u00909\u009c\u00ecb\u00e7$_\u00b8\u00d4";
        int n2 = "\u00a4=\u00e7\u00f0\u0093n\u00909\u009c\u00ecb\u00e7$_\u00b8\u00d4".length();
        int n3 = 0;
        do {
            byte[] byArray3 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n3 < n2);
        YCHoM = lArray;
        plVos = new Long[2];
    }

    private static long cln(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        long l2 = ml.clm(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l2;
    }

    public void clh(class_287 class_2872, class_4587 class_45872, class_4184 class_41842, float f) {
        float f2;
        block4: {
            block5: {
                long l = FTbXO ^ 0x75C8976EAF78L;
                f2 = this.clj();
                int n = mm.clw();
                try {
                    try {
                        if (n != 0) break block4;
                        if (!(f2 < 0.005f)) break block5;
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
            class_45872.method_22903();
            jI.bIs(class_45872, this.cli(f));
            class_45872.method_22907((Quaternionfc)class_41842.method_23767());
        }
        Matrix4f matrix4f = class_45872.method_23760().method_23761();
        float f3 = this.PgeQF * 0.5f;
        int n = this.udGdm.coa(255.0f * f2).coh();
        class_2872.method_22918((Matrix4fc)matrix4f, -f3, -f3, 0.0f).method_22913(0.0f, 0.0f).method_39415(n);
        class_2872.method_22918((Matrix4fc)matrix4f, f3, -f3, 0.0f).method_22913(1.0f, 0.0f).method_39415(n);
        class_2872.method_22918((Matrix4fc)matrix4f, f3, f3, 0.0f).method_22913(1.0f, 1.0f).method_39415(n);
        class_2872.method_22918((Matrix4fc)matrix4f, -f3, f3, 0.0f).method_22913(0.0f, 1.0f).method_39415(n);
        class_45872.method_22909();
    }

    public boolean clg() {
        long l;
        block11: {
            block12: {
                float f;
                float f2;
                int n;
                block10: {
                    block9: {
                        long l2;
                        block8: {
                            long l3 = FTbXO ^ 0x77CF175A333FL;
                            this.dLTzU = this.lkXRd;
                            n = mm.clw();
                            this.oTvTP = System.currentTimeMillis() - this.KGTDW;
                            f2 = this.ZmQqB++;
                            try {
                                try {
                                    l2 = this.oTvTP;
                                    if (n != 0) break block8;
                                    if (l2 >= this.zwlqH) break block9;
                                }
                                catch (MatchException matchException) {
                                    throw ml.cll(matchException);
                                }
                                l2 = this.oTvTP;
                            }
                            catch (MatchException matchException) {
                                throw ml.cll(matchException);
                            }
                        }
                        float f3 = (float)l2 / (float)this.zwlqH;
                        float f4 = f3 * f3 * (3.0f - 2.0f * f3);
                        f = (float)Math.sin(Math.pow(f4, this.doUzS) * Math.PI);
                        try {
                            if (n == 0) break block10;
                            iS.bwK("VuXHr");
                        }
                        catch (MatchException matchException) {
                            throw ml.cll(matchException);
                        }
                    }
                    f = 0.0f;
                }
                double d = (double)f * 0.15;
                double d2 = Math.sin(f2 * this.ONXuz + this.oguBV) * 0.025 + Math.sin((double)(f2 * this.cjpBa) + (double)this.oguBV * 1.7) * 0.015;
                double d3 = Math.sin(f2 * this.TXMLT + this.zkkML) * 0.025 + Math.sin((double)(f2 * this.Ndtrs) + (double)this.zkkML * 1.7) * 0.015;
                double d4 = Math.sin(f2 * this.NOetf + this.FUCeB) * 0.025 + Math.sin((double)(f2 * this.SMirh) + (double)this.FUCeB * 1.7) * 0.015;
                try {
                    this.lkXRd = this.FykKC.method_1031(this.KCxUk.field_1352 * (double)f * (double)this.IuXHJ + d2, this.KCxUk.field_1351 * (double)f * (double)this.IuXHJ + d + d3, this.KCxUk.field_1350 * (double)f * (double)this.IuXHJ + d4);
                    long l4 = this.oTvTP - this.uBxPJ;
                    l = l4 == 0L ? 0 : (l4 < 0L ? -1 : 1);
                    if (n != 0) break block11;
                    if (l < 0) break block12;
                }
                catch (MatchException matchException) {
                    throw ml.cll(matchException);
                }
                l = 1;
                break block11;
            }
            l = 0;
        }
        return (boolean)l;
    }

    private static MatchException cll(MatchException matchException) {
        return matchException;
    }

    public float clj() {
        long l;
        long l2;
        block11: {
            block12: {
                int n;
                block9: {
                    block10: {
                        long l3 = FTbXO ^ 0x134649FF50D8L;
                        long l4 = Math.max((long)ml.clo("f", (int)11388, (long)(0x7D3544D28E5D353AL ^ l3)), this.zwlqH / ml.clo("f", (int)21204, (long)(0x759A164BD88ECB93L ^ l3)));
                        n = mm.clx();
                        l2 = this.uBxPJ - this.FQoIN;
                        try {
                            try {
                                long l5 = this.oTvTP - l4;
                                l = l5 == 0L ? 0 : (l5 < 0L ? -1 : 1);
                                if (n == 0) break block9;
                                if (l >= 0) break block10;
                            }
                            catch (MatchException matchException) {
                                throw ml.cll(matchException);
                            }
                            return (float)this.oTvTP / (float)l4;
                        }
                        catch (MatchException matchException) {
                            throw ml.cll(matchException);
                        }
                    }
                    long l6 = this.oTvTP - this.FQoIN;
                    l = l6 == 0L ? 0 : (l6 < 0L ? -1 : 1);
                }
                try {
                    try {
                        if (n == 0) break block11;
                        if (l >= 0) break block12;
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
            long l7 = l2 - 0L;
            l = l7 == 0L ? 0 : (l7 < 0L ? -1 : 1);
        }
        if (l > 0) {
            float f = Math.min(1.0f, (float)(this.oTvTP - this.FQoIN) / (float)l2);
            float f2 = 1.0f - f;
            return f2 * f2 * (3.0f - 2.0f * f2);
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

    private static float clk(float f, float f2) {
        float f3;
        block4: {
            block5: {
                long l = FTbXO ^ 0x5865DA2C67B5L;
                int n = mm.clw();
                try {
                    try {
                        f3 = f2;
                        if (n != 0) break block4;
                        if (!(f3 <= f)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw ml.cll(matchException);
                    }
                    return f;
                }
                catch (MatchException matchException) {
                    throw ml.cll(matchException);
                }
            }
            f3 = (float)mU.cpP(f, f2);
        }
        return f3;
    }

    public class_243 cli(float f) {
        double d = class_3532.method_16436((double)f, (double)this.dLTzU.field_1352, (double)this.lkXRd.field_1352);
        double d2 = class_3532.method_16436((double)f, (double)this.dLTzU.field_1351, (double)this.lkXRd.field_1351);
        double d3 = class_3532.method_16436((double)f, (double)this.dLTzU.field_1350, (double)this.lkXRd.field_1350);
        return new class_243(d, d2, d3);
    }

    private static long clm(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7140;
        if (plVos[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = YCHoM[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])CPIRa.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    CPIRa.put(l3, objectArray);
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
            long l4 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            ml.plVos[n2] = l4;
        }
        return plVos[n2];
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
