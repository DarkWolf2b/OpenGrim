/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.entity.Entity;
import net.minecraft.util.math.Vec2f;
import sixtwo.cG;
import sixtwo.gb;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lc;
import sixtwo.lq;
import sixtwo.mr;
import sixtwo.pA;
import sixtwo.pB$vz;
import sixtwo.pD;
import sixtwo.py;
import sixtwo.pz;

public abstract class pB
extends py
implements pz {
    private final cG UlKHa;
    private final pD USBbv;
    private static final long KKoHr;
    private static final long[] rhTQb;
    private static final Integer[] TxeLx;
    private static final Map TEgjp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    protected pB(String string, String string2) {
        long l2 = KKoHr ^ 0x3FD9EC37A13BL;
        super(string, string2, 2.0);
        this.UlKHa = new cG(this, mr.clS(new int[]{(int)pB.cSc("o", (int)25668, (long)(0xA0D91033EA34E4EL ^ l2)), (int)pB.cSc("o", (int)18734, (long)(0x67EAFD559BE5E321L ^ l2)), (int)pB.cSc("o", (int)30474, (long)(0x5DFA01B29808DD03L ^ l2)), (int)pB.cSc("o", (int)7140, (long)(0xC28C2C02394B1EFL ^ l2)), (int)pB.cSc("o", (int)11343, (long)(0x39B0E77C60498647L ^ l2))}));
        this.USBbv = new pD(this).cSd(true);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                pB.KKoHr = gb.aYR(3672092966761546000L, 2118606121917727811L, MethodHandles.lookup().lookupClass()).a(42857705217117L);
                pB.TEgjp = new HashMap<K, V>(13);
                var0 = pB.KKoHr ^ 20398960436382L;
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
                var8_3 = new long[5];
                var5_4 = 0;
                var6_5 = "lE\u00ca\"\u0019e\u00f0\u007flmvS\u00f0\u00f7\u00b3'<9\"g\u008f\u00ed\u00a8\u0015";
                var7_6 = "lE\u00ca\"\u0019e\u00f0\u007flmvS\u00f0\u00f7\u00b3'<9\"g\u008f\u00ed\u00a8\u0015".length();
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
                    var6_5 = "Vrv\u00d4\u00db\u0017\u0086\u0092r\u00dc\u00c5\u00c4\u00f0\u001b\u00e6)";
                    var7_6 = "Vrv\u00d4\u00db\u0017\u0086\u0092r\u00dc\u00c5\u00c4\u00f0\u001b\u00e6)".length();
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
        pB.rhTQb = var8_3;
        pB.TxeLx = new Integer[5];
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    public final Vec2f measure(lC lC2, lc lc2, Entity entity, boolean bl2) {
        float f2;
        float f3;
        block8: {
            List<pB$vz> list;
            boolean bl3;
            List<pB$vz> list2;
            block7: {
                long l2 = KKoHr ^ 0x1F952A21C242L;
                list2 = this.cNI(entity, bl2);
                bl3 = pA.cRO();
                try {
                    list = list2;
                    if (!bl3) break block7;
                    if (list == null) return this.cQL();
                }
                catch (MatchException matchException) {
                    throw pB.cRZ(matchException);
                }
                list = list2;
            }
            try {
                if (list.isEmpty()) {
                    return this.cQL();
                }
            }
            catch (MatchException matchException) {
                throw pB.cRZ(matchException);
            }
            float f4 = this.cQJ(lc2, bl2);
            lq lq2 = this.cRU(f4);
            f3 = 0.0f;
            float f5 = this.cRX(lq2, f4);
            for (pB$vz pB$vz : list2) {
                f2 = Math.max(f3, this.cRW(lq2, pB$vz.label(), f4));
                if (bl3) {
                    f3 = f2;
                    if (bl3) continue;
                }
                break block8;
            }
            f2 = (float)list2.size() * f5 + (float)Math.max(0, list2.size() - 1) * this.cRV(f4);
        }
        float f6 = f2;
        return new Vec2f(f3, f6);
    }

    protected lq cRU(float f2) {
        return lE.SVnNc.bYM(this.cQI(5.0f, f2));
    }

    protected float cRX(lq lq2, float f2) {
        return Math.max(16.0f * this.cQI(0.65f, f2), lq2.cat()) + this.cQI(3.0f, f2);
    }

    protected float cRW(lq lq2, String string, float f2) {
        return this.cQI(4.0f, f2) + 16.0f * this.cQI(0.65f, f2) + this.cQI(2.0f, f2) + lq2.cao(string);
    }

    protected abstract List<pB$vz> cNI(Entity var1, boolean var2);

    private static MatchException cRZ(MatchException matchException) {
        return matchException;
    }

    protected float cRV(float f2) {
        return this.cQI(1.0f, f2);
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    @Override
    public final void drawBox(lC lC2, lc lc2, lc lc3, Entity entity, boolean bl2) {
        float f2;
        float f3;
        boolean bl3;
        List<pB$vz> list;
        block11: {
            block12: {
                List<pB$vz> list2;
                block10: {
                    long l2 = KKoHr ^ 0x1E110A5B880FL;
                    list = this.cNI(entity, bl2);
                    bl3 = pA.cRO();
                    try {
                        list2 = list;
                        if (!bl3) break block10;
                        if (list2 == null) return;
                    }
                    catch (MatchException matchException) {
                        throw pB.cRZ(matchException);
                    }
                    list2 = list;
                }
                try {
                    if (list2.isEmpty()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw pB.cRZ(matchException);
                }
                f3 = this.cQM(bl2);
                try {
                    try {
                        f2 = f3;
                        if (!bl3) break block11;
                        if (f2 != 0.0f) break block12;
                        return;
                    }
                    catch (MatchException matchException) {
                        throw pB.cRZ(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw pB.cRZ(matchException);
                }
            }
            f2 = this.cQJ(lc3, bl2);
        }
        float f4 = f2;
        lq lq2 = this.cRU(f4);
        float f5 = this.cRX(lq2, f4);
        float f6 = this.cRV(f4);
        float f7 = lc2.bXG();
        for (pB$vz pB$vz : list) {
            this.cRY(lC2, pB$vz, lc2.bXF(), f7, this.cRW(lq2, pB$vz.label(), f4), f5, lq2, f4, f3);
            f7 += f5 + f6;
            if (bl3) continue;
        }
    }

    protected void cRY(lC lC2, pB$vz pB$vz, float f2, float f3, float f4, float f5, lq lq2, float f6, float f7) {
        this.USBbv.cSe(lC2, new lc(f2, f3, f4, f5), f6, f7);
        float f8 = this.cQI(0.65f, f6);
        float f9 = 16.0f * f8;
        float f10 = this.cQI(2.0f, f6);
        float f11 = this.cQI(2.0f, f6);
        float f12 = f2 + f10;
        float f13 = f3 + jf.bAH(f9, f5);
        float f14 = f12 + f9 + f11;
        float f15 = f3 + jf.bAH(lq2.cat(), f5);
        this.cQK(lC2, pB$vz.stack(), f12, f13, f8, f7);
        lC2.cez(lq2, pB$vz.label(), f14, f15, this.UlKHa.Wf().cob(f7));
    }

    private static CallSite cSc(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pB" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int cSb(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = pB.cSa(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int cSa(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x94E;
        if (TxeLx[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = rhTQb[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])TEgjp.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    TEgjp.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pB", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            pB.TxeLx[n3] = n4;
        }
        return TxeLx[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pB.class, "cSb", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

