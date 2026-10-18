/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.network.packet.s2c.play.WorldTimeUpdateS2CPacket
 *  net.minecraft.util.math.MathHelper
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
import net.minecraft.network.packet.s2c.play.WorldTimeUpdateS2CPacket;
import net.minecraft.util.math.MathHelper;
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
        long l2 = vQBUz ^ 0x7750B875EFBFL;
        this.EFaXY = new float[(int)ZDZYG];
        this.hmLXh = 0;
        this.rKpiB = (long)qH.daQ("h", (int)15985, (long)(0x5AB264B4361FA6C4L ^ l2));
        Arrays.fill(this.EFaXY, 0.0f);
        hF.bdI(this);
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        long l2 = vQBUz ^ 0x507C4F6C709EL;
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
        long l3 = -5289938854357887191L;
        byte[] byArray3 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
        ZDZYG = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
        jyQcM = new HashMap(13);
        Cipher cipher2 = Cipher.getInstance("DES/CBC/NoPadding");
        SecretKeyFactory secretKeyFactory2 = SecretKeyFactory.getInstance("DES");
        byte[] byArray4 = new byte[8];
        byte[] byArray5 = byArray4;
        byArray4[0] = (byte)(l2 >>> 56);
        for (int i3 = 1; i3 < 8; ++i3) {
            byArray5 = byArray5;
            byArray5[i3] = (byte)(l2 << i3 * 8 >>> 56);
        }
        cipher2.init(2, (Key)secretKeyFactory2.generateSecret(new DESKeySpec(byArray5)), new IvParameterSpec(new byte[8]));
        long[] lArray = new long[2];
        int n2 = 0;
        String string = "9\u00b3!3\u00bb\u00f2`\u00d8\u00fc\u0006b\u000b\u00c1\u00d2\u00cd!";
        int n3 = "9\u00b3!3\u00bb\u00f2`\u00d8\u00fc\u0006b\u000b\u00c1\u00d2\u00cd!".length();
        int n4 = 0;
        do {
            byte[] byArray6 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l4 = ((long)byArray6[0] & 0xFFL) << 56 | ((long)byArray6[1] & 0xFFL) << 48 | ((long)byArray6[2] & 0xFFL) << 40 | ((long)byArray6[3] & 0xFFL) << 32 | ((long)byArray6[4] & 0xFFL) << 24 | ((long)byArray6[5] & 0xFFL) << 16 | ((long)byArray6[6] & 0xFFL) << 8 | (long)byArray6[7] & 0xFFL;
            byte[] byArray7 = cipher2.doFinal(new byte[]{(byte)(l4 >>> 56), (byte)(l4 >>> 48), (byte)(l4 >>> 40), (byte)(l4 >>> 32), (byte)(l4 >>> 24), (byte)(l4 >>> 16), (byte)(l4 >>> 8), (byte)l4});
            lArray[n5] = ((long)byArray7[0] & 0xFFL) << 56 | ((long)byArray7[1] & 0xFFL) << 48 | ((long)byArray7[2] & 0xFFL) << 40 | ((long)byArray7[3] & 0xFFL) << 32 | ((long)byArray7[4] & 0xFFL) << 24 | ((long)byArray7[5] & 0xFFL) << 16 | ((long)byArray7[6] & 0xFFL) << 8 | (long)byArray7[7] & 0xFFL;
        } while (n4 < n3);
        ugjsz = lArray;
        RyufA = new Long[2];
    }

    @hG
    public void daL(gL.tk tk2) {
        block7: {
            qH qH2;
            boolean bl2;
            block5: {
                boolean bl3;
                long l2;
                block6: {
                    l2 = vQBUz ^ 0x5296A2A56506L;
                    bl3 = qL.dcb();
                    try {
                        bl2 = tk2.bcf() instanceof WorldTimeUpdateS2CPacket;
                        if (!bl3) break block5;
                        if (bl2) break block6;
                    }
                    catch (MatchException matchException) {
                        throw qH.daN(matchException);
                    }
                    return;
                }
                try {
                    qH2 = this;
                    if (!bl3) break block7;
                    long l3 = qH2.rKpiB - qH.daQ("h", (int)27469, (long)(0x1671866E626CF940L ^ l2));
                    bl2 = l3 == 0L ? 0 : (l3 < 0L ? -1 : 1);
                }
                catch (MatchException matchException) {
                    throw qH.daN(matchException);
                }
            }
            if (bl2) {
                float f2;
                float f3 = (float)(System.nanoTime() - this.rKpiB) / 1.0E9f;
                this.EFaXY[this.hmLXh % this.EFaXY.length] = f2 = MathHelper.clamp((float)(20.0f / f3), (float)0.0f, (float)20.0f);
                ++this.hmLXh;
            }
            qH2 = this;
        }
        qH2.rKpiB = System.nanoTime();
    }

    private static long daP(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        long l3 = qH.daO(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Long.TYPE, l3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return l3;
    }

    private static long daO(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x36A0;
        if (RyufA[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = ugjsz[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])jyQcM.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    jyQcM.put(l4, objectArray);
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
            long l5 = ((long)byArray[0] & 0xFFL) << 56 | ((long)byArray[1] & 0xFFL) << 48 | ((long)byArray[2] & 0xFFL) << 40 | ((long)byArray[3] & 0xFFL) << 32 | ((long)byArray[4] & 0xFFL) << 24 | ((long)byArray[5] & 0xFFL) << 16 | ((long)byArray[6] & 0xFFL) << 8 | (long)byArray[7] & 0xFFL;
            qH.RyufA[n3] = l5;
        }
        return RyufA[n3];
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
        float f2;
        float f3;
        block7: {
            long l2 = vQBUz ^ 0x27C7982C5E79L;
            float f4 = 0.0f;
            float f5 = 0.0f;
            float[] fArray = this.EFaXY;
            boolean bl2 = qL.dcb();
            for (float f6 : fArray) {
                float f7;
                float f8;
                block8: {
                    block9: {
                        try {
                            try {
                                try {
                                    f3 = f6;
                                    f2 = 0.0f;
                                    if (!bl2) break block7;
                                    if (!bl2) break block8;
                                }
                                catch (MatchException matchException) {
                                    throw qH.daN(matchException);
                                }
                                if (!(f3 <= f2)) break block9;
                            }
                            catch (MatchException matchException) {
                                throw qH.daN(matchException);
                            }
                            if (bl2) continue;
                        }
                        catch (MatchException matchException) {
                            throw qH.daN(matchException);
                        }
                    }
                    f4 += f6;
                    f8 = f5;
                    f7 = 1.0f;
                }
                f5 = f8 + f7;
                if (bl2) continue;
            }
            f3 = f4 / f5;
            f2 = 0.0f;
        }
        return MathHelper.clamp((float)f3, (float)f2, (float)20.0f);
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

