/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.render.RenderTickCounter
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.Arm
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
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.render.RenderTickCounter;
import net.minecraft.item.ItemStack;
import net.minecraft.util.Arm;
import net.minecraft.util.math.Vec2f;
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
            boolean bl2;
            block6: {
                block5: {
                    long l2 = FwqDO ^ 0x36E9668D601DL;
                    boolean bl3 = bX.Ov();
                    int[] nArray = new int[bY.OF("u", (int)3968, (long)(0x5AACAD8582A11E60L ^ l2))];
                    nArray[0] = (int)bY.OF("u", (int)3390, (long)(0x6C6F4609E2FD1CDDL ^ l2));
                    nArray[1] = (int)bY.OF("u", (int)24795, (long)(0x5FB8A0D59C4DF139L ^ l2));
                    nArray[2] = (int)bY.OF("u", (int)8307, (long)(0x67670488C17B3194L ^ l2));
                    nArray[3] = (int)bY.OF("u", (int)5724, (long)(0x77F0EC4DFEE787B9L ^ l2));
                    nArray[4] = (int)bY.OF("u", (int)12419, (long)(0x5189000700E4A167L ^ l2));
                    nArray[5] = (int)bY.OF("u", (int)30012, (long)(0x39AACDC6356264DAL ^ l2));
                    super(nArray, lf.OxOQo);
                    boolean bl4 = bl3;
                    try {
                        try {
                            if (iS.bwL() != null) break block4;
                            if (!bl4) break block5;
                        }
                        catch (MatchException matchException) {
                            throw bY.OC(matchException);
                        }
                        bl2 = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw bY.OC(matchException);
                    }
                }
                bl2 = true;
            }
            bX.Ot(bl2);
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
                float f2;
                ItemStack itemStack;
                float f3;
                float f4;
                RenderTickCounter renderTickCounter;
                float f5;
                float f6;
                float f7;
                block38: {
                    block37: {
                        long l2 = FwqDO ^ 0x7A9B0A8C708EL;
                        boolean bl2 = bX.Ov();
                        try {
                            if (rD.dlmvG.world == null) {
                                return;
                            }
                        }
                        catch (MatchException matchException) {
                            throw bY.OC(matchException);
                        }
                        ii ii2 = rD.dlM();
                        boolean bl3 = fX.aYe();
                        f7 = this.ormBS.dhj();
                        f6 = this.gILqY.dhj();
                        float f8 = 7.0f;
                        mG mG2 = ii2.bjd().coc(mG.hoGuU, 0.25f).cob(f7);
                        mG mG3 = ii2.bjf().cob(0.25f);
                        lC2.ccU(this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx, f7, f6);
                        f5 = this.QWaAn + jf.bAH(12.8f, this.Xtjvx);
                        renderTickCounter = rD.dlmvG.getRenderTickCounter();
                        int n2 = 0;
                        while (n2 < bY.OF("u", (int)18475, (long)(0xE81828A14EEC954L ^ l2))) {
                            block33: {
                                block34: {
                                    int n3;
                                    block28: {
                                        block29: {
                                            int n4;
                                            block30: {
                                                f4 = this.toIeR + (float)n2 * 20.0f;
                                                f3 = f4 + jf.bAH(12.8f, 21.0f);
                                                try {
                                                    block31: {
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        n3 = n2;
                                                                        if (bl2) break block28;
                                                                        if (n3 != rD.dlZ().dbr()) break block29;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw bY.OC(matchException);
                                                                    }
                                                                    n4 = n2;
                                                                    if (bl2) break block30;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw bY.OC(matchException);
                                                                }
                                                                if (n4 != 0) break block31;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw bY.OC(matchException);
                                                            }
                                                            lC2.cdm(f4, this.QWaAn, 21.0f, 22.0f, 7.0f, ld.left(f8, f8), mG3);
                                                            if (!bl2) break block29;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw bY.OC(matchException);
                                                        }
                                                    }
                                                    n4 = n2;
                                                }
                                                catch (MatchException matchException) {
                                                    throw bY.OC(matchException);
                                                }
                                            }
                                            try {
                                                block32: {
                                                    try {
                                                        if (n4 != bY.OF("u", (int)10835, (long)(0x7BF2ACECA26DAB21L ^ l2))) break block32;
                                                        lC2.cdm(f4, this.QWaAn, 22.0f, 22.0f, 7.0f, ld.right(f8, f8), mG3);
                                                        if (!bl2) break block29;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw bY.OC(matchException);
                                                    }
                                                }
                                                lC2.cdi(f4, this.QWaAn, 21.0f, 22.0f, mG3);
                                            }
                                            catch (MatchException matchException) {
                                                throw bY.OC(matchException);
                                            }
                                        }
                                        try {
                                            this.OB(lC2, f3, f5, renderTickCounter, rD.dlmvG.player.getInventory().getStack(n2));
                                            if (bl2) break block33;
                                            n3 = n2;
                                        }
                                        catch (MatchException matchException) {
                                            throw bY.OC(matchException);
                                        }
                                    }
                                    try {
                                        if (n3 == 0 || bl3) break block34;
                                    }
                                    catch (MatchException matchException) {
                                        throw bY.OC(matchException);
                                    }
                                    float f9 = this.toIeR + (float)n2 * 20.0f;
                                    lC2.cdh(f9, this.QWaAn + 2.0f, 1.0f, this.Xtjvx - 4.0f, ld.all(0.25f), mG2, 0.5f);
                                }
                                ++n2;
                            }
                            if (!bl2) continue;
                        }
                        itemStack = rD.dlmvG.player.getOffHandStack();
                        try {
                            if (bl2) break block35;
                            if (itemStack.isEmpty()) break block36;
                        }
                        catch (MatchException matchException) {
                            throw bY.OC(matchException);
                        }
                        Arm arm = rD.dlmvG.player.getMainArm().getOpposite();
                        f2 = 22.0f;
                        if (arm != Arm.LEFT) break block37;
                        f4 = this.toIeR - f2 - 8.0f;
                        if (!bl2) break block38;
                    }
                    f4 = this.toIeR + this.jTsqG + 8.0f;
                }
                f3 = f4 + jf.bAH(12.8f, f2);
                lC2.ccU(f4, this.QWaAn, f2, this.Xtjvx, f7, f6);
                this.OB(lC2, f3, f5, renderTickCounter, itemStack);
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

    private static int OD(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x68A3;
        if (VtGWK[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = MujRV[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])kIeWJ.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    kIeWJ.put(l4, objectArray);
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
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bY.VtGWK[n3] = n4;
        }
        return VtGWK[n3];
    }

    private void OB(lC lC2, float f2, float f3, RenderTickCounter renderTickCounter, ItemStack itemStack) {
        block12: {
            jy jy2;
            float f4;
            block13: {
                float f5;
                boolean bl2;
                block14: {
                    int n2;
                    block11: {
                        long l2 = FwqDO ^ 0x32E97AA3A40CL;
                        bl2 = bX.Ou();
                        try {
                            try {
                                n2 = itemStack.isEmpty();
                                if (!bl2) break block11;
                                if (n2 != 0) break block12;
                            }
                            catch (MatchException matchException) {
                                throw bY.OC(matchException);
                            }
                            n2 = itemStack.getBobbingAnimationTime();
                        }
                        catch (MatchException matchException) {
                            throw bY.OC(matchException);
                        }
                    }
                    f5 = (float)n2 - renderTickCounter.getTickProgress(false);
                    try {
                        float f6 = f5 - 0.0f;
                        f4 = f6 == 0.0f ? 0 : (f6 > 0.0f ? 1 : -1);
                        if (!bl2) break block13;
                        if (f4 <= 0) break block14;
                    }
                    catch (MatchException matchException) {
                        throw bY.OC(matchException);
                    }
                    float f7 = 1.0f + f5 / 5.0f;
                    float f8 = f2 + 6.4f;
                    float f9 = f3 + 6.4f;
                    lC2.ceV();
                    lC2.ceX(f8, f9);
                    lC2.ceY(1.0f / f7, (f7 + 1.0f) / 2.0f);
                    lC2.ceX(-f8, -f9);
                }
                try {
                    jy2 = ((jv)lC2.cea(itemStack, f2, f3, 0.8f).bGw()).bGv();
                    if (!bl2) break block12;
                    float f10 = f5 - 0.0f;
                    f4 = f10 == 0.0f ? 0 : (f10 > 0.0f ? 1 : -1);
                }
                catch (MatchException matchException) {
                    throw bY.OC(matchException);
                }
            }
            try {
                if (f4 > 0) {
                    lC2.ceW();
                }
            }
            catch (MatchException matchException) {
                throw bY.OC(matchException);
            }
            jy2 = ((jw)lC2.ceb(itemStack, f2, f3, 0.8f).bGw()).bGv();
        }
    }

    private static int OE(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bY.OD(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    @Override
    protected void Ol() {
        long l2 = FwqDO ^ 0x5453682DD3ADL;
        if (this.mZZzJ.WF()) {
            Vec2f vec2f = rm.dip();
            this.toIeR = jf.bAH(this.RU(), vec2f.x);
            this.QWaAn = vec2f.y - this.RV();
        }
    }

    private static MatchException OC(MatchException matchException) {
        return matchException;
    }

    @Override
    public boolean Om() {
        boolean bl2;
        long l2 = FwqDO ^ 0x79169C0C35A4L;
        try {
            bl2 = rD.dlmvG.world != null;
        }
        catch (MatchException matchException) {
            throw bY.OC(matchException);
        }
        return bl2;
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

