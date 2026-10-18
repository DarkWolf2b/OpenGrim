/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_243
 *  net.minecraft.class_4587
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
import net.minecraft.class_4587;
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

    public mn(class_243 class_2432, mp mp2, class_243 class_2433, float f) {
        long l = ZOPtL ^ 0x5BA87D736F9FL;
        super(class_2432, class_2433, mp2, f);
        this.iTDVy = mT.cpz();
        this.tyKgU = false;
        this.QETnW = new rk((int)mn.clC("l", (int)15236, (long)(0x1387F38A4FADDA87L ^ l))).dhs(rj.UPXqT);
        this.kaAKN = mU.cpO((int)mn.clC("l", (int)45, (long)(0x4BC384FDCD9DE12DL ^ l)), (int)mn.clC("l", (int)31570, (long)(0x6D24D5C9FA9E9A50L ^ l)));
    }

    /*
     * Enabled aggressive block sorting
     */
    static {
        VdPek = new HashMap(13);
        long l = ZOPtL ^ 0x1803E82CD504L;
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
        long[] lArray = new long[3];
        int n = 0;
        String string = ".1\u00d0E`\u00e4\u001c\u0082\u0081DV4\u00853j=\u00d3\u000e]\u00a8\u00d4H\u00f5\u0099";
        int n2 = ".1\u00d0E`\u00e4\u001c\u0082\u0081DV4\u00853j=\u00d3\u000e]\u00a8\u00d4H\u00f5\u0099".length();
        int n3 = 0;
        do {
            byte[] byArray3 = string.substring(n3, n3 += 8).getBytes("ISO-8859-1");
            int n4 = n++;
            long l2 = ((long)byArray3[0] & 0xFFL) << 56 | ((long)byArray3[1] & 0xFFL) << 48 | ((long)byArray3[2] & 0xFFL) << 40 | ((long)byArray3[3] & 0xFFL) << 32 | ((long)byArray3[4] & 0xFFL) << 24 | ((long)byArray3[5] & 0xFFL) << 16 | ((long)byArray3[6] & 0xFFL) << 8 | (long)byArray3[7] & 0xFFL;
            byte[] byArray4 = cipher.doFinal(new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2});
            lArray[n4] = ((long)byArray4[0] & 0xFFL) << 56 | ((long)byArray4[1] & 0xFFL) << 48 | ((long)byArray4[2] & 0xFFL) << 40 | ((long)byArray4[3] & 0xFFL) << 32 | ((long)byArray4[4] & 0xFFL) << 24 | ((long)byArray4[5] & 0xFFL) << 16 | ((long)byArray4[6] & 0xFFL) << 8 | (long)byArray4[7] & 0xFFL;
        } while (n3 < n2);
        VgdKt = lArray;
        CqWYY = new Integer[3];
    }

    @Override
    public void cls(class_4587 class_45872, float f) {
        float f2 = 0.07f;
        jI.bIs(class_45872, this.clL(f));
        class_45872.method_22905(f2, f2, f2);
        jI.bIt(class_45872, this.hMiLh / 2.0f);
        jI.bIu(class_45872);
        jI.bIt(class_45872, -this.hMiLh / 2.0f);
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

    private static int clA(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x5CA5;
        if (CqWYY[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = VgdKt[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])VdPek.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    VdPek.put(l3, objectArray);
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
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            mn.CqWYY[n2] = n3;
        }
        return CqWYY[n2];
    }

    private static int clB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = mn.clA(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    @Override
    public boolean clp() {
        double d;
        double d2;
        class_243 class_2432;
        block22: {
            mn mn2;
            block23: {
                boolean bl;
                block20: {
                    long l = ZOPtL ^ 0x48826B6DED05L;
                    int n = mm.clx();
                    try {
                        if (rD.dlmvG.field_1724 == null) {
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
                                                bl = this.tyKgU;
                                                if (n == 0) break block20;
                                                if (bl) break block21;
                                            }
                                            catch (MatchException matchException) {
                                                throw mn.clz(matchException);
                                            }
                                            mn2 = this;
                                            if (n == 0) break block22;
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
                                    if (n != 0) break block23;
                                }
                                catch (MatchException matchException) {
                                    throw mn.clz(matchException);
                                }
                            }
                            mn2 = this;
                            if (n == 0) break block22;
                        }
                        catch (MatchException matchException) {
                            throw mn.clz(matchException);
                        }
                        float f = mn2.QETnW.dhj() - 0.0f;
                        bl = f == 0.0f ? 0 : (f > 0.0f ? 1 : -1);
                    }
                    catch (MatchException matchException) {
                        throw mn.clz(matchException);
                    }
                }
                try {
                    if (!bl) {
                        return true;
                    }
                }
                catch (MatchException matchException) {
                    throw mn.clz(matchException);
                }
            }
            this.fmdTe = this.vMbcc;
            this.vMbcc = this.vMbcc.method_1019(this.AkpJr);
            mn2 = this;
        }
        try {
            class_2432 = this.AkpJr;
            double d = 1.0;
            d = this.XIaIs == mp.qIoJG ? (double)0.9f : 1.0;
        }
        catch (MatchException matchException) {
            throw mn.clz(matchException);
        }
        mn2.AkpJr = class_2432.method_18805(d2, d, 1.0);
        this.AkpJr = this.AkpJr.method_1031(0.0, (double)-0.001f, 0.0);
        return false;
    }

    @Override
    public void clr(class_4587 class_45872, float f, mG mG2) {
        mG mG3 = mG2.coa(255.0f * this.QETnW.dhj() * 0.4f);
        class_45872.method_22903();
        this.cls(class_45872, f);
        double d = 2.0;
        double d2 = (double)this.hMiLh * d;
        double d3 = ((double)this.hMiLh - d2) / 2.0;
        double d4 = ((double)this.hMiLh - d2) / 2.0;
        XSRvt.bUH(kG.bTv(class_45872, d3, d4, 0.0, d2, d2).dtF(mG3).dtG());
        class_45872.method_22909();
    }

    @Override
    public void clq(class_4587 class_45872, float f, mG mG2) {
        boolean bl;
        rk rk2;
        block2: {
            block3: {
                long l = ZOPtL ^ 0x74337E87C599L;
                int n = mm.clw();
                try {
                    rk2 = this.QETnW;
                    bl = this.tyKgU;
                    if (n != 0) break block2;
                    if (bl) break block3;
                }
                catch (MatchException matchException) {
                    throw mn.clz(matchException);
                }
                bl = true;
                break block2;
            }
            bl = false;
        }
        rk2.dhc(bl);
        mG mG3 = mG2.coa(255.0f * this.QETnW.dhj() * 0.4f);
        class_45872.method_22903();
        this.cls(class_45872, f);
        XSRvt.bUH(kG.bTv(class_45872, 0.0, 0.0, 0.0, this.hMiLh, this.hMiLh).dtF(mG3).dtG());
        class_45872.method_22909();
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
