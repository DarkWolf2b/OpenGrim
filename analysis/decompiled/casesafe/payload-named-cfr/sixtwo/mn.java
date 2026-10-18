/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.jI;
import sixtwo.kG;
import sixtwo.lG;
import sixtwo.mG;
import sixtwo.mT;
import sixtwo.mU;
import sixtwo.mm;
import sixtwo.mp;
import sixtwo.mq;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class mn
extends mq
implements lG {
    private final long kaAKN;
    private final mT iTDVy;
    private boolean tyKgU;
    private final rk QETnW;
    private static final long ZOPtL = gb.aYR(4337217784066446677L, -1430240155685216216L, MethodHandles.lookup().lookupClass()).a(242932562373776L);
    private static final long[] VgdKt;
    private static final Integer[] CqWYY;
    private static final Map VdPek;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public mn(Vec3d vec3d, mp mp2, Vec3d vec3d2, float f2) {
        long l2 = ZOPtL ^ 0x5BA87D736F9FL;
        super(vec3d, vec3d2, mp2, f2);
        this.iTDVy = mT.cpz();
        this.tyKgU = false;
        this.QETnW = new rk((int)mn.clC("l", (int)15236, (long)(0x1387F38A4FADDA87L ^ l2))).dhs(rj.UPXqT);
        this.kaAKN = mU.cpO((int)mn.clC("l", (int)45, (long)(0x4BC384FDCD9DE12DL ^ l2)), (int)mn.clC("l", (int)31570, (long)(0x6D24D5C9FA9E9A50L ^ l2)));
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        VdPek = new HashMap(13);
        long l2 = ZOPtL ^ 0x1803E82CD504L;
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
        String string = ".1\u00d0E`\u00e4\u001c\u0082\u0081DV4\u00853j=\u00d3\u000e]\u00a8\u00d4H\u00f5\u0099";
        int n3 = ".1\u00d0E`\u00e4\u001c\u0082\u0081DV4\u00853j=\u00d3\u000e]\u00a8\u00d4H\u00f5\u0099".length();
        int n4 = 0;
        do {
            byte[] byArray3 = string.substring(n4, n4 += 8).getBytes("ISO-8859-1");
            int n5 = n2++;
            long l3 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3});
            lArray[n5] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n4 < n3);
        VgdKt = lArray;
        CqWYY = new Integer[3];
    }

    @Override
    public void cls(MatrixStack matrixStack, float f2) {
        float f3 = 0.07f;
        jI.bIs(matrixStack, this.clL(f2));
        matrixStack.scale(f3, f3, f3);
        jI.bIt(matrixStack, this.hMiLh / 2.0f);
        jI.bIu(matrixStack);
        jI.bIt(matrixStack, -this.hMiLh / 2.0f);
    }

    private static MatchException clz(MatchException matchException) {
        return matchException;
    }

    private static CallSite clC(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/mn" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int clA(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5CA5;
        if (CqWYY[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = VgdKt[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])VdPek.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    VdPek.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/mn", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mn.CqWYY[n3] = n4;
        }
        return CqWYY[n3];
    }

    private static int clB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = mn.clA(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    @Override
    public boolean clp() {
        double d2;
        double d3;
        Vec3d vec3d;
        block22: {
            mn mn2;
            block23: {
                boolean bl2;
                block20: {
                    long l2 = ZOPtL ^ 0x48826B6DED05L;
                    int n2 = mm.clx();
                    try {
                        if (rD.dlmvG.player == null) {
                            return true;
                        }
                    }
                    catch (MatchException matchException) {
                        throw mn.clz(matchException);
                    }
                    try {
                        try {
                            block21: {
                                try {
                                    try {
                                        try {
                                            try {
                                                bl2 = this.tyKgU;
                                                if (n2 == 0) break block20;
                                                if (bl2) break block21;
                                            }
                                            catch (MatchException matchException) {
                                                throw mn.clz(matchException);
                                            }
                                            mn2 = this;
                                            if (n2 == 0) break block22;
                                        }
                                        catch (MatchException matchException) {
                                            throw mn.clz(matchException);
                                        }
                                        if (!mn2.iTDVy.cpC(this.kaAKN)) break block23;
                                    }
                                    catch (MatchException matchException) {
                                        throw mn.clz(matchException);
                                    }
                                    this.tyKgU = true;
                                    if (n2 != 0) break block23;
                                }
                                catch (MatchException matchException) {
                                    throw mn.clz(matchException);
                                }
                            }
                            mn2 = this;
                            if (n2 == 0) break block22;
                        }
                        catch (MatchException matchException) {
                            throw mn.clz(matchException);
                        }
                        float f2 = mn2.QETnW.dhj() - 0.0f;
                        bl2 = f2 == 0.0f ? 0 : (f2 > 0.0f ? 1 : -1);
                    }
                    catch (MatchException matchException) {
                        throw mn.clz(matchException);
                    }
                }
                try {
                    if (!bl2) {
                        return true;
                    }
                }
                catch (MatchException matchException) {
                    throw mn.clz(matchException);
                }
            }
            this.fmdTe = this.vMbcc;
            this.vMbcc = this.vMbcc.add(this.AkpJr);
            mn2 = this;
        }
        try {
            vec3d = this.AkpJr;
            double d2 = 1.0;
            d2 = this.XIaIs == mp.qIoJG ? (double)0.9f : 1.0;
        }
        catch (MatchException matchException) {
            throw mn.clz(matchException);
        }
        mn2.AkpJr = vec3d.multiply(d3, d2, 1.0);
        this.AkpJr = this.AkpJr.add(0.0, (double)-0.001f, 0.0);
        return false;
    }

    @Override
    public void clr(MatrixStack matrixStack, float f2, mG mG2) {
        mG mG3 = mG2.coa(255.0f * this.QETnW.dhj() * 0.4f);
        matrixStack.push();
        this.cls(matrixStack, f2);
        double d2 = 2.0;
        double d3 = (double)this.hMiLh * d2;
        double d4 = ((double)this.hMiLh - d3) / 2.0;
        double d5 = ((double)this.hMiLh - d3) / 2.0;
        XSRvt.bUH(kG.bTv(matrixStack, d4, d5, 0.0, d3, d3).dtF(mG3).dtG());
        matrixStack.pop();
    }

    @Override
    public void clq(MatrixStack matrixStack, float f2, mG mG2) {
        boolean bl2;
        rk rk2;
        block2: {
            block3: {
                long l2 = ZOPtL ^ 0x74337E87C599L;
                int n2 = mm.clw();
                try {
                    rk2 = this.QETnW;
                    bl2 = this.tyKgU;
                    if (n2 != 0) break block2;
                    if (bl2) break block3;
                }
                catch (MatchException matchException) {
                    throw mn.clz(matchException);
                }
                bl2 = true;
                break block2;
            }
            bl2 = false;
        }
        rk2.dhc(bl2);
        mG mG3 = mG2.coa(255.0f * this.QETnW.dhj() * 0.4f);
        matrixStack.push();
        this.cls(matrixStack, f2);
        XSRvt.bUH(kG.bTv(matrixStack, 0.0, 0.0, 0.0, this.hMiLh, this.hMiLh).dtF(mG3).dtG());
        matrixStack.pop();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(mn.class, "clB", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

