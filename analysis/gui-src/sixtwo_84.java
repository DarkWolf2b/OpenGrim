/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.ChatScreen
 *  net.minecraft.item.ItemStack
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
import net.minecraft.client.gui.screen.ChatScreen;
import net.minecraft.item.ItemStack;
import sixtwo.Z;
import sixtwo.ca;
import sixtwo.co;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.jF;
import sixtwo.jc;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.oP;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class cj
extends co {
    private final rk[] uXrKR;
    private final Z[] nfdDW;
    private final rk JSzyq;
    private static final long KQivZ;
    private static final long[] oTiFn;
    private static final Integer[] cyVUI;
    private static final Map FZjbT;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cj() {
        long l2 = KQivZ ^ 0x3BF06B49CCB9L;
        super(new int[]{(int)cj.QE("v", (int)21426, (long)(0x4C243EAC19ECB3E9L ^ l2)), (int)cj.QE("v", (int)8633, (long)(0x1F847BF1AA07C1E3L ^ l2)), (int)cj.QE("v", (int)8607, (long)(0x6E2026EFB2AC41C1L ^ l2)), (int)cj.QE("v", (int)9213, (long)(0x411257467C50C3A4L ^ l2)), (int)cj.QE("v", (int)3976, (long)(0x255AB2D51DEAEFD7L ^ l2))}, lf.tCZuD);
        this.uXrKR = new rk[4];
        this.nfdDW = new Z[4];
        this.JSzyq = new rk((int)cj.QE("v", (int)4464, (long)(0x1C45256284F3F12DL ^ l2))).dhs(rj.NJlxm);
        boolean bl2 = ca.OX();
        for (int i2 = 0; i2 < this.uXrKR.length; ++i2) {
            this.uXrKR[i2] = new rk((int)cj.QE("v", (int)24644, (long)(0x673A52CE8D66001CL ^ l2))).dhs(rj.XzDkv);
            lq lq2 = lE.joxgd.bYM(7.0f);
            this.nfdDW[i2] = new Z().kJ(lq2).kK(3.0f).kL((int)cj.QE("v", (int)24644, (long)(0x673A52CE8D66001CL ^ l2))).kM(rj.UPXqT).kP("%");
            if (!bl2) continue;
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cj.KQivZ = gb.aYR(-5358398472619022768L, 7241789623132261359L, MethodHandles.lookup().lookupClass()).a(274983036465735L);
                cj.FZjbT = new HashMap<K, V>(13);
                var0 = cj.KQivZ ^ 134886543400919L;
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
                var8_3 = new long[7];
                var5_4 = 0;
                var6_5 = "\u008dEA\u00fc\u00d4\u00ad\u00a9jU\u00e4\u00f9z\u0000g\u009b\u00d6\u00b4\u009d\u00eb\u00e3\u0088\u0002^\u00ba\u00b3\u00edn\u0007\u00bc\u00859\u0096\u00f1\u001f\u00d4gT\u00f0J\u00e5";
                var7_6 = "\u008dEA\u00fc\u00d4\u00ad\u00a9jU\u00e4\u00f9z\u0000g\u009b\u00d6\u00b4\u009d\u00eb\u00e3\u0088\u0002^\u00ba\u00b3\u00edn\u0007\u00bc\u00859\u0096\u00f1\u001f\u00d4gT\u00f0J\u00e5".length();
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
                    var6_5 = "N\u00fa\u008cy[\u00eb\u0099lz\u008e\u00af{\u0080\f\u00f4X";
                    var7_6 = "N\u00fa\u008cy[\u00eb\u0099lz\u008e\u00af{\u0080\f\u00f4X".length();
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
        cj.oTiFn = var8_3;
        cj.cyVUI = new Integer[7];
    }

    private static int QC(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x2C09;
        if (cyVUI[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = oTiFn[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])FZjbT.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    FZjbT.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cj", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cj.cyVUI[n3] = n4;
        }
        return cyVUI[n3];
    }

    @Override
    protected void NV(lC lC2) {
        float f2;
        rk rk2;
        List<ItemStack> list;
        float f3;
        float f4;
        boolean bl2;
        mG mG2;
        float f5;
        float f6;
        ii ii2;
        lq lq2;
        block5: {
            block6: {
                long l2 = KQivZ ^ 0x70AF61DB693FL;
                lq lq3 = lE.WTzbi.bYM(7.0f);
                lq2 = lE.joxgd.bYM(7.0f);
                ii2 = rD.dlM();
                boolean bl3 = ca.OX();
                f6 = this.ormBS.dhj();
                f5 = this.gILqY.dhj();
                mG mG3 = ii2.bjb().coa(255.0f * f6);
                mG mG4 = ii2.bjc().coa(255.0f * f6);
                mG2 = ii2.bjc().cob(0.5f);
                float f7 = 20.0f;
                lC2.ccU(this.toIeR, this.QWaAn, this.jTsqG, f7, f6, f5);
                float f8 = this.toIeR + 7.0f;
                float f9 = this.QWaAn + jf.bAH(lq3.cat(), f7);
                lC2.ceA(lq3, this.eqWHC, f8, f9, mG3);
                float f10 = 8.0f;
                float f11 = this.toIeR + this.jTsqG - f10 - 7.0f;
                float f12 = this.QWaAn + jf.bAH(f10, f7);
                bl2 = bl3;
                lC2.cem(this.jAncU, f11, f12, f10, mG4);
                f4 = 16.0f;
                f3 = 22.0f;
                list = oP.cJq().cJE();
                try {
                    rk2 = this.JSzyq;
                    float f13 = this.ormBS.dhj() * this.KgDVz.dhj() - 1.0f;
                    f2 = f13 == 0.0f ? 0 : (f13 > 0.0f ? 1 : -1);
                    if (bl2) break block5;
                    if (f2 < 0) break block6;
                }
                catch (MatchException matchException) {
                    throw cj.QB(matchException);
                }
                f2 = 1.0f;
                break block5;
            }
            f2 = 0.0f;
        }
        rk2.dhc((boolean)f2);
        for (int i2 = list.size() - 1; i2 >= 0; --i2) {
            boolean bl4;
            rk rk3;
            Z z;
            rk rk4;
            ItemStack itemStack;
            block7: {
                block8: {
                    itemStack = list.get(i2);
                    rk4 = this.uXrKR[i2];
                    z = this.nfdDW[i2];
                    try {
                        rk3 = rk4;
                        bl4 = itemStack.isEmpty();
                        if (bl2) break block7;
                        if (bl4) break block8;
                    }
                    catch (MatchException matchException) {
                        throw cj.QB(matchException);
                    }
                    bl4 = true;
                    break block7;
                }
                bl4 = false;
            }
            rk3.dhc(bl4);
            float f14 = this.JSzyq.dhj() * rk4.dhj();
            mG mG5 = ii2.bjb().coa(255.0f * f14);
            lC2.ccU(this.toIeR, this.QWaAn + f3, this.jTsqG, f4, f6, f5);
            float f15 = jF.bHw()[3];
            jF.bHz(1.0f, 1.0f, 1.0f, f15 * f14);
            lC2.cea(itemStack, this.toIeR + 7.0f, this.QWaAn + f3 + jf.bAH(8.0f, f4), 0.5f).bGv();
            jF.bHz(1.0f, 1.0f, 1.0f, f15);
            float f16 = this.toIeR + this.jTsqG - 7.0f;
            int n2 = jc.bze(itemStack);
            String string = n2 + "%";
            float f17 = lq2.cao(string);
            float f18 = this.toIeR + 15.0f;
            float f19 = f16 - f17;
            float f20 = (f19 - f18) / 2.0f - 1.0f;
            float f21 = f18 + f20;
            float f22 = this.QWaAn + f3 + f4 / 2.0f - 1.0f;
            lC2.cdc(f21, f22, mG2);
            float f23 = this.QWaAn + f3 + jf.bAH(lq2.cat(), f4);
            z.kS(false, mG5);
            z.kO(n2);
            z.sW(f19, f23);
            z.su(lC2);
            f3 += 18.0f * f14;
            if (!bl2) continue;
        }
    }

    @Override
    public void LX(lC lC2) {
        block7: {
            long l2 = KQivZ ^ 0x64148BDE86FFL;
            this.jTsqG = 55.0f;
            boolean bl2 = ca.OY();
            this.Xtjvx = 20.0f;
            for (ItemStack itemStack : oP.cJq().cJE()) {
                block8: {
                    block9: {
                        try {
                            try {
                                try {
                                    if (!bl2) break block7;
                                    if (!bl2) break block8;
                                }
                                catch (MatchException matchException) {
                                    throw cj.QB(matchException);
                                }
                                if (!itemStack.isEmpty()) break block9;
                            }
                            catch (MatchException matchException) {
                                throw cj.QB(matchException);
                            }
                            if (bl2) continue;
                        }
                        catch (MatchException matchException) {
                            throw cj.QB(matchException);
                        }
                    }
                    this.Xtjvx += 18.0f;
                }
                if (bl2) continue;
            }
            super.LX(lC2);
        }
    }

    @Override
    public boolean Om() {
        boolean bl2;
        block10: {
            block12: {
                block11: {
                    boolean bl3;
                    boolean bl4;
                    block8: {
                        block9: {
                            long l2 = KQivZ ^ 0x7322F75B2C15L;
                            bl4 = ca.OX();
                            try {
                                bl3 = oP.cJq().cJE().stream().allMatch(ItemStack::isEmpty);
                                if (bl4) break block8;
                                if (bl3) break block9;
                            }
                            catch (MatchException matchException) {
                                throw cj.QB(matchException);
                            }
                            bl3 = true;
                            break block8;
                        }
                        bl3 = false;
                    }
                    boolean bl5 = bl3;
                    boolean bl6 = rD.dlmvG.currentScreen instanceof ChatScreen;
                    try {
                        try {
                            try {
                                bl2 = bl5;
                                if (bl4) break block10;
                                if (bl2) break block11;
                            }
                            catch (MatchException matchException) {
                                throw cj.QB(matchException);
                            }
                            bl2 = bl6;
                            if (bl4) break block10;
                        }
                        catch (MatchException matchException) {
                            throw cj.QB(matchException);
                        }
                        if (!bl2) break block12;
                    }
                    catch (MatchException matchException) {
                        throw cj.QB(matchException);
                    }
                }
                bl2 = true;
                break block10;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static CallSite QE(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cj" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException QB(MatchException matchException) {
        return matchException;
    }

    private static int QD(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cj.QC(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cj.class, "QD", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

