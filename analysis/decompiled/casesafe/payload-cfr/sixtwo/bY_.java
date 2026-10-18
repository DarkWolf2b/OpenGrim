/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.class_1306
 *  net.minecraft.class_1799
 *  net.minecraft.class_241
 *  net.minecraft.class_9779
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
import net.minecraft.class_1306;
import net.minecraft.class_1799;
import net.minecraft.class_241;
import net.minecraft.class_9779;
import sixtwo.bX;
import sixtwo.cp;
import sixtwo.fX;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.ii;
import sixtwo.jf;
import sixtwo.ju;
import sixtwo.jv;
import sixtwo.jw;
import sixtwo.jy;
import sixtwo.lC;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.mG;
import sixtwo.rD;
import sixtwo.rm;

public class bY
extends cp {
    private static final float WCYGX = 0.8f;
    private static final float AzaIL = 12.8f;
    private static final long FwqDO;
    private static final long[] MujRV;
    private static final Integer[] VtGWK;
    private static final Map kIeWJ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bY() {
        block4: {
            boolean bl;
            block6: {
                block5: {
                    long l = FwqDO ^ 0x36E9668D601DL;
                    boolean bl2 = bX.Ov();
                    int[] nArray = new int[bY.OF("u", (int)3968, (long)(0x5AACAD8582A11E60L ^ l))];
                    nArray[0] = (int)bY.OF("u", (int)3390, (long)(0x6C6F4609E2FD1CDDL ^ l));
                    nArray[1] = (int)bY.OF("u", (int)24795, (long)(0x5FB8A0D59C4DF139L ^ l));
                    nArray[2] = (int)bY.OF("u", (int)8307, (long)(0x67670488C17B3194L ^ l));
                    nArray[3] = (int)bY.OF("u", (int)5724, (long)(0x77F0EC4DFEE787B9L ^ l));
                    nArray[4] = (int)bY.OF("u", (int)12419, (long)(0x5189000700E4A167L ^ l));
                    nArray[5] = (int)bY.OF("u", (int)30012, (long)(0x39AACDC6356264DAL ^ l));
                    super(nArray, lf.OxOQo);
                    boolean bl3 = bl2;
                    try {
                        try {
                            if (iS.bwL() != null) break block4;
                            if (!bl3) break block5;
                        }
                        catch (MatchException matchException) {
                            throw bY.OC(matchException);
                        }
                        bl = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw bY.OC(matchException);
                    }
                }
                bl = true;
            }
            bX.Ot(bl);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                bY.FwqDO = gb.aYR(2925985723345337069L, -3629615129369220686L, MethodHandles.lookup().lookupClass()).a(269555676370922L);
                bY.kIeWJ = new HashMap<K, V>(13);
                var0 = bY.FwqDO ^ 110017288961692L;
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
                var8_3 = new long[9];
                var5_4 = 0;
                var6_5 = "M\u0092\u0010+\n\u0005\u00fa\u00f5ZLb \u00ec\u00dbJ\u00d7\u0081\u00e8\u00b1%\u00ac\u009f\u00c5\u00d6 \u00c6\u00a2\u00a51l\u00b1\u0096\u0010\u0080\u00d8\u00cex\u00aa\u00a4\u0007\u00aed\u00c8{\u00c8\u00f1\u00c1:\u0081T\u0096\u008e\n#7\u000b";
                var7_6 = "M\u0092\u0010+\n\u0005\u00fa\u00f5ZLb \u00ec\u00dbJ\u00d7\u0081\u00e8\u00b1%\u00ac\u009f\u00c5\u00d6 \u00c6\u00a2\u00a51l\u00b1\u0096\u0010\u0080\u00d8\u00cex\u00aa\u00a4\u0007\u00aed\u00c8{\u00c8\u00f1\u00c1:\u0081T\u0096\u008e\n#7\u000b".length();
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
                    var6_5 = "\u00e4\u00a3\u00e2\u00ad\u008e\u0081T\u0019F]\u0099\u0088\u00ab\u0019\u00a3\u0019";
                    var7_6 = "\u00e4\u00a3\u00e2\u00ad\u008e\u0081T\u0019F]\u0099\u0088\u00ab\u0019\u00a3\u0019".length();
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
        bY.MujRV = var8_3;
        bY.VtGWK = new Integer[9];
    }

    @Override
    protected void NV(lC lC2) {
        block35: {
            block36: {
                float f;
                class_1799 class_17992;
                float f2;
                float f3;
                class_9779 class_97792;
                float f4;
                float f5;
                float f6;
                block38: {
                    block37: {
                        long l = FwqDO ^ 0x7A9B0A8C708EL;
                        boolean bl = bX.Ov();
                        try {
                            if (rD.dlmvG.field_1687 == null) {
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw bY.OC(matchException);
                        }
                        ii ii2 = rD.dlM();
                        boolean bl2 = fX.aYe();
                        f6 = this.ormBS.dhj();
                        f5 = this.gILqY.dhj();
                        float f7 = 7.0f;
                        mG mG2 = ii2.bjd().coc(mG.hoGuU, 0.25f).cob(f6);
                        mG mG3 = ii2.bjf().cob(0.25f);
                        lC2.ccU(this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx, f6, f5);
                        f4 = this.QWaAn + jf.bAH(12.8f, this.Xtjvx);
                        class_97792 = rD.dlmvG.method_61966();
                        int n = 0;
                        while (n < bY.OF("u", (int)18475, (long)(0xE81828A14EEC954L ^ l))) {
                            block33: {
                                block34: {
                                    int n2;
                                    block28: {
                                        block29: {
                                            int n3;
                                            block30: {
                                                f3 = this.toIeR + (float)n * 20.0f;
                                                f2 = f3 + jf.bAH(12.8f, 21.0f);
                                                try {
                                                    block31: {
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        n2 = n;
                                                                        if (bl) break block28;
                                                                        if (n2 != rD.dlZ().dbr()) break block29;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw bY.OC(matchException);
                                                                    }
                                                                    n3 = n;
                                                                    if (bl) break block30;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw bY.OC(matchException);
                                                                }
                                                                if (n3 != 0) break block31;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw bY.OC(matchException);
                                                            }
                                                            lC2.cdm(f3, this.QWaAn, 21.0f, 22.0f, 7.0f, ld.left(f7, f7), mG3);
                                                            if (!bl) break block29;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw bY.OC(matchException);
                                                        }
                                                    }
                                                    n3 = n;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bY.OC(matchException);
                                                }
                                            }
                                            try {
                                                block32: {
                                                    try {
                                                        if (n3 != bY.OF("u", (int)10835, (long)(0x7BF2ACECA26DAB21L ^ l))) break block32;
                                                        lC2.cdm(f3, this.QWaAn, 22.0f, 22.0f, 7.0f, ld.right(f7, f7), mG3);
                                                        if (!bl) break block29;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bY.OC(matchException);
                                                    }
                                                }
                                                lC2.cdi(f3, this.QWaAn, 21.0f, 22.0f, mG3);
                                            }
                                            catch (MatchException matchException) {
                                                throw bY.OC(matchException);
                                            }
                                        }
                                        try {
                                            this.OB(lC2, f2, f4, class_97792, rD.dlmvG.field_1724.method_31548().method_5438(n));
                                            if (bl) break block33;
                                            n2 = n;
                                        }
                                        catch (MatchException matchException) {
                                            throw bY.OC(matchException);
                                        }
                                    }
                                    try {
                                        if (n2 == 0 || bl2) break block34;
                                    }
                                    catch (MatchException matchException) {
                                        throw bY.OC(matchException);
                                    }
                                    float f8 = this.toIeR + (float)n * 20.0f;
                                    lC2.cdh(f8, this.QWaAn + 2.0f, 1.0f, this.Xtjvx - 4.0f, ld.all(0.25f), mG2, 0.5f);
                                }
                                ++n;
                            }
                            if (!bl) continue;
                        }
                        class_17992 = rD.dlmvG.field_1724.method_6079();
                        try {
                            if (bl) break block35;
                            if (class_17992.method_7960()) break block36;
                        }
                        catch (MatchException matchException) {
                            throw bY.OC(matchException);
                        }
                        class_1306 class_13062 = rD.dlmvG.field_1724.method_6068().method_5928();
                        f = 22.0f;
                        if (class_13062 != class_1306.field_6182) break block37;
                        f3 = this.toIeR - f - 8.0f;
                        if (!bl) break block38;
                    }
                    f3 = this.toIeR + this.jTsqG + 8.0f;
                }
                f2 = f3 + jf.bAH(12.8f, f);
                lC2.ccU(f3, this.QWaAn, f, this.Xtjvx, f6, f5);
                this.OB(lC2, f2, f4, class_97792, class_17992);
            }
            ju.bFV();
        }
    }

    @Override
    public void LX(lC lC2) {
        this.jTsqG = 182.0f;
        this.Xtjvx = 22.0f;
        super.LX(lC2);
    }

    private static CallSite OF(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bY" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int OD(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x68A3;
        if (VtGWK[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = MujRV[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])kIeWJ.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    kIeWJ.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bY", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bY.VtGWK[n2] = n3;
        }
        return VtGWK[n2];
    }

    private void OB(lC lC2, float f, float f2, class_9779 class_97792, class_1799 class_17992) {
        block12: {
            jy jy2;
            float f3;
            block13: {
                float f4;
                boolean bl;
                block14: {
                    int n;
                    block11: {
                        long l = FwqDO ^ 0x32E97AA3A40CL;
                        bl = bX.Ou();
                        try {
                            try {
                                n = class_17992.method_7960();
                                if (!bl) break block11;
                                if (n != 0) break block12;
                            }
                            catch (MatchException matchException) {
                                throw bY.OC(matchException);
                            }
                            n = class_17992.method_7965();
                        }
                        catch (MatchException matchException) {
                            throw bY.OC(matchException);
                        }
                    }
                    f4 = (float)n - class_97792.method_60637(false);
                    try {
                        float f5 = f4 - 0.0f;
                        f3 = f5 == 0.0f ? 0 : (f5 > 0.0f ? 1 : -1);
                        if (!bl) break block13;
                        if (f3 <= 0) break block14;
                    }
                    catch (MatchException matchException) {
                        throw bY.OC(matchException);
                    }
                    float f6 = 1.0f + f4 / 5.0f;
                    float f7 = f + 6.4f;
                    float f8 = f2 + 6.4f;
                    lC2.ceV();
                    lC2.ceX(f7, f8);
                    lC2.ceY(1.0f / f6, (f6 + 1.0f) / 2.0f);
                    lC2.ceX(-f7, -f8);
                }
                try {
                    jy2 = ((jv)lC2.cea(class_17992, f, f2, 0.8f).bGw()).bGv();
                    if (!bl) break block12;
                    float f9 = f4 - 0.0f;
                    f3 = f9 == 0.0f ? 0 : (f9 > 0.0f ? 1 : -1);
                }
                catch (MatchException matchException) {
                    throw bY.OC(matchException);
                }
            }
            try {
                if (f3 > 0) {
                    lC2.ceW();
                }
            }
            catch (MatchException matchException) {
                throw bY.OC(matchException);
            }
            jy2 = ((jw)lC2.ceb(class_17992, f, f2, 0.8f).bGw()).bGv();
        }
    }

    private static int OE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = bY.OD(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    @Override
    protected void Ol() {
        long l = FwqDO ^ 0x5453682DD3ADL;
        if (this.mZZzJ.WF()) {
            class_241 class_2412 = rm.dip();
            this.toIeR = jf.bAH(this.RU(), class_2412.field_1343);
            this.QWaAn = class_2412.field_1342 - this.RV();
        }
    }

    private static MatchException OC(MatchException matchException) {
        return matchException;
    }

    @Override
    public boolean Om() {
        boolean bl;
        long l = FwqDO ^ 0x79169C0C35A4L;
        try {
            bl = rD.dlmvG.field_1687 != null;
        }
        catch (MatchException matchException) {
            throw bY.OC(matchException);
        }
        return bl;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bY.class, "OE", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
