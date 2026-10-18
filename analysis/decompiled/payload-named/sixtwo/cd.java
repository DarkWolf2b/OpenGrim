/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.client.gui.screen.ChatScreen
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.entity.player.PlayerEntity
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
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.gui.screen.ChatScreen;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.entity.player.PlayerEntity;
import sixtwo.ca;
import sixtwo.cr;
import sixtwo.fS;
import sixtwo.fg;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.ld;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.rD;

public class cd
extends cr {
    private PlayerEntity odadG;
    private static final long VZGld;
    private static final long[] AItKg;
    private static final Integer[] NVeYL;
    private static final Map wxQxQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cd() {
        long l2 = VZGld ^ 0x17FCC2CF6255L;
        int[] nArray = new int[cd.PN("d", (int)15471, (long)(0x133EC0D6054207DDL ^ l2))];
        nArray[0] = (int)cd.PN("d", (int)20266, (long)(0x556D1951DBE47489L ^ l2));
        nArray[1] = (int)cd.PN("d", (int)13600, (long)(0x2033C012E1B48E95L ^ l2));
        nArray[2] = (int)cd.PN("d", (int)20972, (long)(0x43336B81B475EA4DL ^ l2));
        nArray[3] = (int)cd.PN("d", (int)25275, (long)(0x652E3BC859935907L ^ l2));
        nArray[4] = (int)cd.PN("d", (int)6855, (long)(0x4DBF4FEA4F8B2177L ^ l2));
        nArray[5] = (int)cd.PN("d", (int)18391, (long)(0x3252AAFBEC87FC75L ^ l2));
        nArray[cd.PN("d", (int)8019, (long)(0x6CD0653519BFA4E8L ^ l2))] = (int)cd.PN("d", (int)27098, (long)(0x1D67E42E3D03D26CL ^ l2));
        nArray[cd.PN("d", (int)12521, (long)(0x3F92DEB7C4A28B5EL ^ l2))] = (int)cd.PN("d", (int)30443, (long)(0x4905AEAB90CA4D51L ^ l2));
        nArray[cd.PN("d", (int)30611, (long)(0x684AFAA27193CC2EL ^ l2))] = (int)cd.PN("d", (int)27089, (long)(0x75F94CDE6DA35269L ^ l2));
        nArray[cd.PN("d", (int)48, (long)(0x5E03697A14D8BB8FL ^ l2))] = (int)cd.PN("d", (int)3696, (long)(0xDD05180A48C35CEL ^ l2));
        nArray[cd.PN("d", (int)31796, (long)(0x5A40098252984785L ^ l2))] = (int)cd.PN("d", (int)18287, (long)(0x5671E39D4AAF7CDBL ^ l2));
        nArray[cd.PN("d", (int)20355, (long)(0x286D76BA988AF426L ^ l2))] = (int)cd.PN("d", (int)5280, (long)(0x5B8DCAA89EE62F19L ^ l2));
        nArray[cd.PN("d", (int)23914, (long)(0x7C4FA4904852E6D9L ^ l2))] = (int)cd.PN("d", (int)4254, (long)(0x7D2373AC70152B3EL ^ l2));
        super(nArray, lf.RUgvb);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cd.VZGld = gb.aYR(-2967259400486583939L, -5313034043029862719L, MethodHandles.lookup().lookupClass()).a(106816448148740L);
                cd.wxQxQ = new HashMap<K, V>(13);
                var0 = cd.VZGld ^ 11701433383107L;
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
                var8_3 = new long[21];
                var5_4 = 0;
                var6_5 = "\u0000\u009a\u0017\u00b1\u00f5a>\u00b5\u00fc\u00a8\u0003\u00ac6\u009e>X\u00e43\u0017\b\u00e1\u00de,\b\u0082\u00fe\u00a3@\u007f\r6A\u00e7|\u00f7m\u00c1\u00f2:\u0019\u009a\u0017|\u00e3\u00b8\u0007\u00f6.#\u00a5#\u00b6\"\u00f1MS\u00e4/z|\u00c6,\u00bb\u00b5\u00b4F\u00f1\u0098O\u0016\u00fez\u00ed\u00c8\u001ch\u00d9\u0088\u0015&\ty\u0088\u00df\u00b4\u00c3L8%\u0003\u00c6Q\u0081\u008e\u00bad\u0015k\u00da\u00c1\u008b\u009c\u00c70\u0090\u00d3q\u001du\u00e7\u0012o\u0088\u00ceJ9\u00b2\u00ff:\u007fy\u00a2\u00d6\u00ffs\u009b\u00f1\u0090\u00f2\u00da@7\u00d7Z!\u009emI%Ed\u00da_Ys>e\u00e2\u007fB\u009e\u00b3";
                var7_6 = "\u0000\u009a\u0017\u00b1\u00f5a>\u00b5\u00fc\u00a8\u0003\u00ac6\u009e>X\u00e43\u0017\b\u00e1\u00de,\b\u0082\u00fe\u00a3@\u007f\r6A\u00e7|\u00f7m\u00c1\u00f2:\u0019\u009a\u0017|\u00e3\u00b8\u0007\u00f6.#\u00a5#\u00b6\"\u00f1MS\u00e4/z|\u00c6,\u00bb\u00b5\u00b4F\u00f1\u0098O\u0016\u00fez\u00ed\u00c8\u001ch\u00d9\u0088\u0015&\ty\u0088\u00df\u00b4\u00c3L8%\u0003\u00c6Q\u0081\u008e\u00bad\u0015k\u00da\u00c1\u008b\u009c\u00c70\u0090\u00d3q\u001du\u00e7\u0012o\u0088\u00ceJ9\u00b2\u00ff:\u007fy\u00a2\u00d6\u00ffs\u009b\u00f1\u0090\u00f2\u00da@7\u00d7Z!\u009emI%Ed\u00da_Ys>e\u00e2\u007fB\u009e\u00b3".length();
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
                    var6_5 = "Rb\u0082\u0085\u00bc\u0003+w\u0098\u00aby\u00f1\u009fpg\u00cb";
                    var7_6 = "Rb\u0082\u0085\u00bc\u0003+w\u0098\u00aby\u00f1\u009fpg\u00cb".length();
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
        cd.AItKg = var8_3;
        cd.NVeYL = new Integer[21];
    }

    private String PI() {
        long l2 = VZGld ^ 0x419C576FA003L;
        String string = this.odadG.getGameProfile().name();
        if (this.odadG == rD.dlmvG.player) {
            string = rD.dlJ().aZx(fS.class).aWP(string);
        }
        return string;
    }

    private static int PM(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cd.PL(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int PL(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x12CF;
        if (NVeYL[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = AItKg[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])wxQxQ.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    wxQxQ.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cd", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cd.NVeYL[n3] = n4;
        }
        return NVeYL[n3];
    }

    private PlayerEntity PJ() {
        block16: {
            MinecraftClient minecraftClient;
            block15: {
                boolean bl2;
                block12: {
                    boolean bl3;
                    block13: {
                        PlayerEntity playerEntity;
                        block14: {
                            long l2 = VZGld ^ 0x24B5C0D2D6F1L;
                            fg fg2 = rD.dlJ().aZx(fg.class);
                            bl3 = ca.OY();
                            try {
                                try {
                                    try {
                                        try {
                                            bl2 = fg2.bag();
                                            if (!bl3) break block12;
                                            if (!bl2) break block13;
                                        }
                                        catch (MatchException matchException) {
                                            throw cd.PK(matchException);
                                        }
                                        playerEntity = fg2.aIU();
                                        if (!bl3) break block14;
                                    }
                                    catch (MatchException matchException) {
                                        throw cd.PK(matchException);
                                    }
                                    if (playerEntity == null) break block13;
                                }
                                catch (MatchException matchException) {
                                    throw cd.PK(matchException);
                                }
                                playerEntity = fg2.aIU();
                            }
                            catch (MatchException matchException) {
                                throw cd.PK(matchException);
                            }
                        }
                        return playerEntity;
                    }
                    try {
                        minecraftClient = rD.dlmvG;
                        if (!bl3) break block15;
                        bl2 = minecraftClient.currentScreen instanceof ChatScreen;
                    }
                    catch (MatchException matchException) {
                        throw cd.PK(matchException);
                    }
                }
                if (!bl2) break block16;
                minecraftClient = rD.dlmvG;
            }
            return minecraftClient.player;
        }
        return null;
    }

    private static MatchException PK(MatchException matchException) {
        return matchException;
    }

    @Override
    protected void NV(lC lC2) {
        float f2;
        float f3;
        String string;
        lq lq2;
        mG mG2;
        block12: {
            PlayerEntity playerEntity;
            mG mG3;
            block11: {
                PlayerEntity playerEntity2;
                boolean bl2;
                block9: {
                    block10: {
                        long l2 = VZGld ^ 0x6947CC01A2FFL;
                        PlayerEntity playerEntity3 = this.PJ();
                        bl2 = ca.OY();
                        try {
                            try {
                                playerEntity2 = playerEntity3;
                                if (!bl2) break block9;
                                if (playerEntity2 == null) break block10;
                            }
                            catch (MatchException matchException) {
                                throw cd.PK(matchException);
                            }
                            this.odadG = playerEntity3;
                        }
                        catch (MatchException matchException) {
                            throw cd.PK(matchException);
                        }
                    }
                    playerEntity2 = this.odadG;
                }
                if (playerEntity2 == null) {
                    return;
                }
                ii ii2 = rD.dlM();
                mG2 = ii2.bjb().coa(255.0f * this.ormBS.dhj());
                mG3 = mG.hoGuU.coa(255.0f * this.ormBS.dhj());
                mG mG4 = mG.QHTxQ.coa(63.75f * this.gILqY.dhj());
                lC2.ccY(this.toIeR - 5.0f, this.QWaAn - 5.0f, this.jTsqG + 10.0f, this.Xtjvx + 10.0f, 15.0f, ld.all(6.0f), mG4);
                lC2.ccU(this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx, this.ormBS.dhj(), this.gILqY.dhj());
                lq2 = lE.SVnNc.bYM(7.0f);
                string = this.PI();
                f3 = this.toIeR + 6.0f;
                f2 = 12.0f;
                PlayerEntity playerEntity4 = this.odadG;
                try {
                    try {
                        playerEntity = playerEntity4;
                        if (!bl2) break block11;
                        if (!(playerEntity instanceof AbstractClientPlayerEntity)) break block12;
                    }
                    catch (MatchException matchException) {
                        throw cd.PK(matchException);
                    }
                    playerEntity = playerEntity4;
                }
                catch (MatchException matchException) {
                    throw cd.PK(matchException);
                }
            }
            AbstractClientPlayerEntity abstractClientPlayerEntity = (AbstractClientPlayerEntity)playerEntity;
            lC2.ccZ(abstractClientPlayerEntity, f3, this.QWaAn + jf.bAH(f2, this.Xtjvx), f2, ld.all(5.0f), mG3);
        }
        float f4 = f3 + f2 + 5.0f;
        float f5 = this.QWaAn + jf.bAH(lq2.cat(), this.Xtjvx);
        lC2.cez(lq2, string, f4, f5, mG2);
    }

    @Override
    public void LX(lC lC2) {
        PlayerEntity playerEntity;
        block5: {
            block6: {
                long l2 = VZGld ^ 0x7DFC26044D3FL;
                boolean bl2 = ca.OX();
                super.LX(lC2);
                boolean bl3 = bl2;
                PlayerEntity playerEntity2 = this.PJ();
                try {
                    try {
                        playerEntity = playerEntity2;
                        if (bl3) break block5;
                        if (playerEntity == null) break block6;
                    }
                    catch (MatchException matchException) {
                        throw cd.PK(matchException);
                    }
                    this.odadG = playerEntity2;
                }
                catch (MatchException matchException) {
                    throw cd.PK(matchException);
                }
            }
            playerEntity = this.odadG;
        }
        if (playerEntity == null) {
            return;
        }
        lq lq2 = lE.SVnNc.bYM(7.0f);
        String string = this.PI();
        this.jTsqG = 23.0f + lq2.cao(string) + 6.0f;
        this.Xtjvx = 20.0f;
    }

    @Override
    public boolean Om() {
        boolean bl2;
        long l2 = VZGld ^ 0x6ACA5A81E7D5L;
        try {
            bl2 = this.PJ() != null;
        }
        catch (MatchException matchException) {
            throw cd.PK(matchException);
        }
        return bl2;
    }

    private static CallSite PN(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cd" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cd.class, "PM", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

