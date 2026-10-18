/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.MultiPlayerGameModeAccessor
 *  net.minecraft.block.Block
 *  net.minecraft.block.BlockState
 *  net.minecraft.client.network.ClientPlayerInteractionManager
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.math.MathHelper
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
import mixin.accessors.MultiPlayerGameModeAccessor;
import net.minecraft.block.Block;
import net.minecraft.block.BlockState;
import net.minecraft.client.network.ClientPlayerInteractionManager;
import net.minecraft.item.ItemStack;
import net.minecraft.util.math.MathHelper;
import sixtwo.bS;
import sixtwo.bU;
import sixtwo.cv;
import sixtwo.dI;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.mB;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.rD;

public class bJ
extends bS {
    private static boolean iJFTz;
    private static final long WXZJW;
    private static final long[] qGJPS;
    private static final Integer[] NuZfs;
    private static final Map tHMUD;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public bJ(cv cv2) {
        long l2 = WXZJW ^ 0x4A6764947C84L;
        int[] nArray = new int[bJ.MR("z", (int)30279, (long)(0x33F9FC76F42DBEE7L ^ l2))];
        nArray[0] = (int)bJ.MR("z", (int)5532, (long)(0x2394BDB5F26F5D3FL ^ l2));
        nArray[1] = (int)bJ.MR("z", (int)14897, (long)(0x5752FC8581B97295L ^ l2));
        nArray[2] = (int)bJ.MR("z", (int)18524, (long)(0x4F30CE426ACF80F5L ^ l2));
        nArray[3] = (int)bJ.MR("z", (int)16354, (long)(0x1BD6971FFFFF774CL ^ l2));
        nArray[4] = (int)bJ.MR("z", (int)17196, (long)(0x48EBA42046248B8DL ^ l2));
        nArray[5] = (int)bJ.MR("z", (int)17577, (long)(0x6D9767DB07A70C0EL ^ l2));
        nArray[bJ.MR("z", (int)11775, (long)(0x6265242C0AAEE554L ^ l2))] = (int)bJ.MR("z", (int)22658, (long)(0x235C5EA7A7991020L ^ l2));
        nArray[bJ.MR("z", (int)7521, (long)(0x691242D41CA955C4L ^ l2))] = (int)bJ.MR("z", (int)18517, (long)(0x69799E431C1880E7L ^ l2));
        nArray[bJ.MR("z", (int)20934, (long)(0x3B1C30407BC1975L ^ l2))] = (int)bJ.MR("z", (int)11477, (long)(0x13C36626D103647AL ^ l2));
        nArray[bJ.MR("z", (int)792, (long)(0x41186088A3E4BA9L ^ l2))] = (int)bJ.MR("z", (int)6559, (long)(0x4AEF3D2EB374D135L ^ l2));
        nArray[bJ.MR("z", (int)8234, (long)(0x44694868E239E88CL ^ l2))] = (int)bJ.MR("z", (int)7001, (long)(0x60DED689C4853F4L ^ l2));
        nArray[bJ.MR("z", (int)13444, (long)(0x6FB723ECB3D6FC28L ^ l2))] = (int)bJ.MR("z", (int)615, (long)(0x1B2727C364CCACFL ^ l2));
        super(cv2, mr.clS(nArray));
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                bJ.WXZJW = gb.aYR(6643231901512878892L, 9161461381816758708L, MethodHandles.lookup().lookupClass()).a(273006904077945L);
                bJ.tHMUD = new HashMap<K, V>(13);
                var0 = bJ.WXZJW ^ 40200051608194L;
                bJ.ML(true);
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
                var8_3 = new long[19];
                var5_4 = 0;
                var6_5 = "\u00be\u00fa\u00d4\u00f2\u00fb\u00d3\u00bc\u008d\u0087\u00893-\u00f3q1\u00c6\u00ea\u00f0d\u0095\u00d2-\u00f8\u00b7\u0004\u0019\u0015\u00f4\u008b\u008f&\u00e8\u0085o\u00eaZ0\u00b79\u00a4\u0096\u0007\u00d1\u00f80\u00f5\u0090O#\u00ee:\u00c1b\u00c6\u00bfN\u00ad\u00c7\u00dbV\u008e\u00bd$B\u00a9\u00a2:\u00c8\u00ecjk\u00b4\u00b6?\u00f2R\u00997\u00c9\u0084\u0007\u00d9\u0099wc|\u009b\"\u0013\u00c5#\t\u00d3\u009f%Gg\u00b4\u00f6\u00c7\u00d7\u00e2\u0086%\u00cd(7x\u0081\u00ed\u008b<\u00c2\u00c5\u00ee#\u0007\u00f0\u00ff\u0084~\u0097\u00d6S\u0091\u00d5\u007f\u00fa\u0091\u00bb\u00b9\u00bf\u00c4\u00c5\u000f\u00da";
                var7_6 = "\u00be\u00fa\u00d4\u00f2\u00fb\u00d3\u00bc\u008d\u0087\u00893-\u00f3q1\u00c6\u00ea\u00f0d\u0095\u00d2-\u00f8\u00b7\u0004\u0019\u0015\u00f4\u008b\u008f&\u00e8\u0085o\u00eaZ0\u00b79\u00a4\u0096\u0007\u00d1\u00f80\u00f5\u0090O#\u00ee:\u00c1b\u00c6\u00bfN\u00ad\u00c7\u00dbV\u008e\u00bd$B\u00a9\u00a2:\u00c8\u00ecjk\u00b4\u00b6?\u00f2R\u00997\u00c9\u0084\u0007\u00d9\u0099wc|\u009b\"\u0013\u00c5#\t\u00d3\u009f%Gg\u00b4\u00f6\u00c7\u00d7\u00e2\u0086%\u00cd(7x\u0081\u00ed\u008b<\u00c2\u00c5\u00ee#\u0007\u00f0\u00ff\u0084~\u0097\u00d6S\u0091\u00d5\u007f\u00fa\u0091\u00bb\u00b9\u00bf\u00c4\u00c5\u000f\u00da".length();
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
lbl27:
                // 1 sources

                while (true) {
                    v3[v4] = v7;
                    if (var4_7 < var7_6) ** continue;
                    var6_5 = "\u001f*\u00f1\u0014+S+,2r\u0099]RIM\u008a";
                    var7_6 = "\u001f*\u00f1\u0014+S+,2r\u0099]RIM\u008a".length();
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
lbl40:
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
lbl53:
                // 1 sources

                ** continue;
            }
        }
        bJ.qGJPS = var8_3;
        bJ.NuZfs = new Integer[19];
    }

    @Override
    public boolean MH() {
        boolean bl2;
        block17: {
            block15: {
                dI dI2;
                dI dI3;
                block16: {
                    boolean bl3;
                    block14: {
                        long l2 = WXZJW ^ 0x2D7AD8D27266L;
                        boolean bl4 = bJ.MN();
                        try {
                            if (rD.dlmvG.world == null) {
                                return false;
                            }
                        }
                        catch (MatchException matchException) {
                            throw bJ.MO(matchException);
                        }
                        dI3 = rD.dlJ().aZx(dI.class);
                        try {
                            try {
                                try {
                                    bl3 = dI3.bag();
                                    if (bl4) break block14;
                                    if (!bl3) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw bJ.MO(matchException);
                                }
                                dI2 = dI3;
                                if (bl4) break block16;
                            }
                            catch (MatchException matchException) {
                                throw bJ.MO(matchException);
                            }
                            bl3 = dI2.alW().SQ(2);
                        }
                        catch (MatchException matchException) {
                            throw bJ.MO(matchException);
                        }
                    }
                    if (bl3) break block15;
                    dI2 = dI3;
                }
                try {
                    try {
                        if (dI2.amm() == null || this.MK(dI3) == null) break block15;
                    }
                    catch (MatchException matchException) {
                        throw bJ.MO(matchException);
                    }
                    bl2 = true;
                    break block17;
                }
                catch (MatchException matchException) {
                    throw bJ.MO(matchException);
                }
            }
            bl2 = false;
        }
        return bl2;
    }

    private static MatchException MO(MatchException matchException) {
        return matchException;
    }

    @Override
    public void MG(lC lC2, ii ii2) {
        float f2;
        float f3;
        long l2 = WXZJW ^ 0x227AF0C848A9L;
        dI dI2 = rD.dlJ().aZx(dI.class);
        Block block = this.MK(dI2);
        try {
            if (block == null) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw bJ.MO(matchException);
        }
        bU bU2 = rD.dlK().RC();
        float f4 = bU2.RW();
        float f5 = bU2.RX();
        lq lq2 = lE.WTzbi.bYM(7.0f);
        lq lq3 = lE.SVnNc.bYM(6.0f);
        mG mG2 = ii2.bjf();
        String string = block.getName().getString();
        String string2 = this.MJ() + "%";
        float f6 = 255.0f * this.dExGi.dhj();
        float f7 = 20.0f * this.dExGi.dhj();
        float f8 = 4.0f;
        float f9 = 4.0f;
        float f10 = 10.0f;
        float f11 = f4 - 16.0f + f7;
        float f12 = f5 + 2.5f;
        float f13 = f11 + f10 + f9;
        float f14 = lq2.cao(string);
        float f15 = lq3.cao(string2);
        this.fGWTH.NU(f10 + f14 + f15 + f9 * 2.0f + f8 * 2.0f, 15.0f);
        lC2.cdg(f11, f12, f10, f10, ld.all(3.5f), mG2.coa(90.0f * this.dExGi.dhj()));
        ItemStack itemStack = block.asItem().getDefaultStack();
        if (!itemStack.isEmpty()) {
            f3 = 0.45f;
            f2 = 16.0f * f3;
            float f16 = f11 + (f10 - f2) * 0.5f;
            float f17 = f12 + (f10 - f2) * 0.5f;
            lC2.cea(itemStack, f16, f17, f3).bGv();
        }
        f3 = f5 + 5.0f;
        lC2.cez(lq2, string, f13, f3, ii2.bjb().coa(f6));
        f2 = f5 + jf.bAH(lq3.cat(), 15.0f);
        lC2.cez(lq3, string2, f13 + f14 + f9, f2, mG2.coa(f6));
    }

    @Override
    public mG MI() {
        return rD.dlM().bjf();
    }

    public static void ML(boolean bl2) {
        iJFTz = bl2;
    }

    public static boolean MN() {
        boolean bl2 = bJ.MM();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw bJ.MO(matchException);
        }
        return false;
    }

    public static boolean MM() {
        return iJFTz;
    }

    private static CallSite MR(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/bJ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private Block MK(dI dI2) {
        block11: {
            BlockState blockState;
            block10: {
                long l2 = WXZJW ^ 0x5D2623577D54L;
                boolean bl2 = bJ.MN();
                try {
                    if (rD.dlmvG.world == null) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw bJ.MO(matchException);
                }
                mB mB2 = dI2.amm();
                try {
                    if (mB2 == null) {
                        return null;
                    }
                }
                catch (MatchException matchException) {
                    throw bJ.MO(matchException);
                }
                BlockState blockState2 = rD.dlmvG.world.getBlockState(mB2.cnb());
                try {
                    try {
                        blockState = blockState2;
                        if (bl2) break block10;
                        if (blockState.isAir()) break block11;
                    }
                    catch (MatchException matchException) {
                        throw bJ.MO(matchException);
                    }
                    blockState = blockState2;
                }
                catch (MatchException matchException) {
                    throw bJ.MO(matchException);
                }
            }
            return blockState.getBlock();
        }
        return dI2.aml();
    }

    private static int MQ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = bJ.MP(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int MP(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5E46;
        if (NuZfs[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = qGJPS[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])tHMUD.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    tHMUD.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/bJ", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            bJ.NuZfs[n3] = n4;
        }
        return NuZfs[n3];
    }

    private int MJ() {
        float f2;
        block5: {
            ClientPlayerInteractionManager clientPlayerInteractionManager;
            block4: {
                long l2 = WXZJW ^ 0xE150A128AB4L;
                f2 = 0.0f;
                boolean bl2 = bJ.MN();
                try {
                    try {
                        clientPlayerInteractionManager = rD.dlmvG.interactionManager;
                        if (bl2) break block4;
                        if (clientPlayerInteractionManager == null) break block5;
                    }
                    catch (MatchException matchException) {
                        throw bJ.MO(matchException);
                    }
                    clientPlayerInteractionManager = rD.dlmvG.interactionManager;
                }
                catch (MatchException matchException) {
                    throw bJ.MO(matchException);
                }
            }
            f2 = ((MultiPlayerGameModeAccessor)clientPlayerInteractionManager).getDestroyProgress();
        }
        return Math.round(MathHelper.clamp((float)f2, (float)0.0f, (float)1.0f) * 100.0f);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(bJ.class, "MQ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

