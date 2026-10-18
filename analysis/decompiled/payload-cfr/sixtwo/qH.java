/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_2761
 *  net.minecraft.class_3532
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.class_2761;
import net.minecraft.class_3532;
import sixtwo.gL;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.qL;

public class qH {
    private final float[] EFaXY;
    private int hmLXh;
    private long rKpiB;
    private static final long vQBUz = gb.aYR(8407708198654730706L, -1162873222052260305L, MethodHandles.lookup().lookupClass()).a(265778250782702L);
    private static final long ZDZYG;
    private static final long[] ugjsz;
    private static final Long[] RyufA;
    private static final Map jyQcM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public qH() {
        long l = vQBUz ^ 0x7750B875EFBFL;
        this.EFaXY = new float[(int)ZDZYG];
        this.hmLXh = 0;
        this.rKpiB = (long)qH.daQ("h", (int)15985, (long)(0x5AB264B4361FA6C4L ^ l));
        Arrays.fill(this.EFaXY, 0.0f);
        hF.bdI(this);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l = vQBUz ^ 0x507C4F6C709EL;
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
        long l2 = -5289938854357887191L;
        byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
        ZDZYG = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
        jyQcM = new HashMap(13);
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray5 = byArray5;
            byArray5[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n = 0;
        String string = "9\u00b3!3\u00bb\u00f2`\u00d8\u00fc\u0006b\u000b\u00c1\u00d2\u00cd!";
        int n2 = "9\u00b3!3\u00bb\u00f2`\u00d8\u00fc\u0006b\u000b\u00c1\u00d2\u00cd!".length();
        int n3 = 0;
        do {
            byte[] byArray6 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l3 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n4] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n3 < n2);
        ugjsz = lArray;
        RyufA = new Long[2];
    }

    @hG
    public void daL(gL.tk tk2) {
        block7: {
            qH qH2;
            boolean bl;
            block5: {
                boolean bl2;
                long l;
                block6: {
                    l = vQBUz ^ 0x5296A2A56506L;
                    bl2 = qL.dcb();
                    try {
                        bl = tk2.bcf() instanceof class_2761;
                        if (!bl2) break block5;
                        if (bl) break block6;
                    }
                    catch (MatchException matchException) {
                        throw qH.daN(matchException);
                    }
                    return;
                }
                try {
                    qH2 = this;
                    if (!bl2) break block7;
                    long l2 = qH2.rKpiB - qH.daQ("h", (int)27469, (long)(0x1671866E626CF940L ^ l));
                    bl = l2 == 0L ? 0 : (l2 < 0L ? -1 : 1);
                }
                catch (MatchException matchException) {
                    throw qH.daN(matchException);
                }
            }
            if (bl) {
                float f;
                float f2 = (float)(System.nanoTime() - this.rKpiB) / 1.0E9f;
                this.EFaXY[this.hmLXh % this.EFaXY.length] = f = class_3532.method_15363((float)(20.0f / f2), (float)0.0f, (float)20.0f);
                ++this.hmLXh;
            }
            qH2 = this;
        }
        qH2.rKpiB = System.nanoTime();
    }

    private static long daP(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        long l2 = qH.daO(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l2;
    }

    private static long daO(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x36A0;
        if (RyufA[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = ugjsz[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])jyQcM.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    jyQcM.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/qH", exception);
            }
            long l4 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            qH.RyufA[n2] = l4;
        }
        return RyufA[n2];
    }

    private static MatchException daN(MatchException matchException) {
        return matchException;
    }

    private static CallSite daQ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/qH" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public float daM() {
        float f;
        float f2;
        block7: {
            long l = vQBUz ^ 0x27C7982C5E79L;
            float f3 = 0.0f;
            float f4 = 0.0f;
            float[] fArray = this.EFaXY;
            boolean bl = qL.dcb();
            for (float f5 : fArray) {
                float f6;
                float f7;
                block8: {
                    block9: {
                        try {
                            try {
                                try {
                                    f2 = f5;
                                    f = 0.0f;
                                    if (!bl) break block7;
                                    if (!bl) break block8;
                                }
                                catch (MatchException matchException) {
                                    throw qH.daN(matchException);
                                }
                                if (!(f2 <= f)) break block9;
                            }
                            catch (MatchException matchException) {
                                throw qH.daN(matchException);
                            }
                            if (bl) continue;
                        }
                        catch (MatchException matchException) {
                            throw qH.daN(matchException);
                        }
                    }
                    f3 += f5;
                    f7 = f4;
                    f6 = 1.0f;
                }
                f4 = f7 + f6;
                if (bl) continue;
            }
            f2 = f3 / f4;
            f = 0.0f;
        }
        return class_3532.method_15363((float)f2, (float)f, (float)20.0f);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(qH.class, "daP", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)J", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
