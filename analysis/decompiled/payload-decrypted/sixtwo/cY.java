/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket
 *  net.minecraft.network.packet.s2c.play.PlaySoundS2CPacket
 *  net.minecraft.world.World
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
import net.minecraft.entity.Entity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.network.packet.s2c.play.EntityStatusS2CPacket;
import net.minecraft.network.packet.s2c.play.PlaySoundS2CPacket;
import net.minecraft.world.World;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.dh;
import sixtwo.gH;
import sixtwo.gL;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.hw;
import sixtwo.iS;
import sixtwo.jD;
import sixtwo.jk;
import sixtwo.mG;
import sixtwo.mr;
import sixtwo.mw;
import sixtwo.on;
import sixtwo.rD;

public class cY
extends gg {
    private final on ReCrR;
    cJ BDssA;
    cJ SnGMi;
    cG VBZRj;
    cG iZEwm;
    cG ykbJL;
    private static final long jEhYF;
    private static final String qnaeb;
    private static final long[] bBsDb;
    private static final Integer[] IzHcV;
    private static final Map nwtEu;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cY() {
        long l2 = jEhYF ^ 0x2B993789BF7DL;
        super(gf.aZL((int)159, false, gh.nOCvV));
        this.ReCrR = new on();
        int[] nArray = new int[9];
        nArray[0] = (int)79;
        nArray[1] = (int)110;
        nArray[2] = (int)108;
        nArray[3] = (int)121;
        nArray[4] = (int)32;
        nArray[5] = (int)83;
        nArray[6] = (int)101;
        nArray[7] = (int)108;
        nArray[8] = (int)102;
        this.BDssA = new cJ(this, mr.clS(nArray)).WE(false);
        int[] nArray2 = new int[16];
        nArray2[0] = (int)67;
        nArray2[1] = (int)111;
        nArray2[2] = (int)108;
        nArray2[3] = (int)111;
        nArray2[4] = (int)114;
        nArray2[5] = (int)32;
        nArray2[6] = (int)84;
        nArray2[7] = (int)114;
        nArray2[8] = (int)97;
        nArray2[9] = (int)110;
        nArray2[10] = (int)115;
        nArray2[11] = (int)105;
        nArray2[12] = (int)116;
        nArray2[13] = (int)105;
        nArray2[14] = (int)111;
        nArray2[15] = (int)110;
        this.SnGMi = new cJ(this, mr.clS(nArray2));
        int[] nArray3 = new int[13];
        nArray3[0] = (int)69;
        nArray3[1] = (int)110;
        nArray3[2] = (int)97;
        nArray3[3] = (int)98;
        nArray3[4] = (int)108;
        nArray3[5] = (int)101;
        nArray3[6] = (int)100;
        nArray3[7] = (int)32;
        nArray3[8] = (int)67;
        nArray3[9] = (int)111;
        nArray3[10] = (int)108;
        nArray3[11] = (int)111;
        nArray3[12] = (int)114;
        this.VBZRj = new cG(this, mr.clS(nArray3)).Uf(mG.rxCUH);
        int[] nArray4 = new int[11];
        nArray4[0] = (int)85;
        nArray4[1] = (int)115;
        nArray4[2] = (int)105;
        nArray4[3] = (int)110;
        nArray4[4] = (int)103;
        nArray4[5] = (int)32;
        nArray4[6] = (int)67;
        nArray4[7] = (int)111;
        nArray4[8] = (int)108;
        nArray4[9] = (int)111;
        nArray4[10] = (int)114;
        this.iZEwm = new cG(this, mr.clS(nArray4)).Uf(mG.rxCUH);
        int[] nArray5 = new int[14];
        nArray5[0] = (int)68;
        nArray5[1] = (int)105;
        nArray5[2] = (int)115;
        nArray5[3] = (int)97;
        nArray5[4] = (int)98;
        nArray5[5] = (int)108;
        nArray5[6] = (int)101;
        nArray5[7] = (int)100;
        nArray5[8] = (int)32;
        nArray5[9] = (int)67;
        nArray5[10] = (int)111;
        nArray5[11] = (int)108;
        nArray5[12] = (int)111;
        nArray5[13] = (int)114;
        this.ykbJL = new cG(this, mr.clS(nArray5)).Uf(mG.vuAhq);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    cY.jEhYF = gb.aYR(6307880368235759829L, -8201853478232182540L, MethodHandles.lookup().lookupClass()).a(257204623582375L);
                    var11 = cY.jEhYF ^ 21789502550078L;
                    var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                    v0 = SecretKeyFactory.getInstance("DES");
                    v1 = new byte[8];
                    v2 = v1;
                    v1[0] = (byte)(var11 >>> 56);
                    for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                        v2 = v2;
                        v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                    }
                    break block12;
lbl13:
                    // 1 sources

                    while (true) {
                        continue;
                        break;
                    }
                }
                var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var15_3 = var13_1.doFinal("\u00d3\u001e\u0087s\r\u008e}H\u00ca\u00d9\u00a0\"-\u00e8\u00d6=".getBytes("ISO-8859-1"));
                ** while (true)
                cY.qnaeb = cY.aaS(var15_3).intern();
                cY.nwtEu = new HashMap<K, V>(13);
                var0_4 = Cipher.getInstance("DES/CBC/NoPadding");
                v3 = SecretKeyFactory.getInstance("DES");
                v4 = new byte[8];
                v5 = v4;
                v4[0] = (byte)(var11 >>> 56);
                for (var1_5 = 1; var1_5 < 8; ++var1_5) {
                    v5 = v5;
                    v5[var1_5] = (byte)(var11 << var1_5 * 8 >>> 56);
                }
                var0_4.init(2, (Key)v3.generateSecret(new DESKeySpec(v5)), new IvParameterSpec(new byte[8]));
                var6_6 = new long[55];
                var3_7 = 0;
                var4_8 = "\u0004\u00bb\u0001X\u00ad\u00a2r1;31\u00f5\u008f\u0096\u00d0\u00a6\u0086G\u00ad\u00fd\u0088\u0084O\u00c7\u00bes\u009d\u00e9G\u001dJO\u00cc. n\"\u00c2mfQ\u00965\u00c0m\u00d2\u00e5\u00a1tl\u00fdr\u008a`e\u00f3\u0001\u00e5\u0084\u00ef\u0098\u008c\u00dd\u000e^\u0001Pg',]\u008c\u00ad\u00baL\u0091\u00f4\u00de\u0004\u00c1?\u00a4\u00bd\u0085\f\u00d8ZW\u00b38\u0097\u0014w\u0096\u008eHs\u0011\u0080\u009f\u00dd*}\\\u00fc\u0001\u0088\u00e0*/\u00be1\u00fcg\u0001\u0081\u00c3\u00b4Y\u00edh\u0018W\"\u00ff{T\u00fd\u0094 \u00ecDM\u008fNtq\u001b\u00af\u0017\u00d0\u008f \u00dc\u000b\u0019\"\u009b\u008a\u00d3@\u00b6\u0005\u000e\u00fe0@-\u00b9z\u00f0\u00ea\t\u00f2\u00d2}\u00ff\u001a~\u00af\u0081\u0095\rZ\u0007|E\u0095\u00fa\u00c4\u009d\u0003=\u00cd\u00d6_\u008dT\u00aa2`Z\u0013\u001dB{v/j\u0015gEkY\b\u00b4\u0015\u00c5x\u00d7]\u009f\u00f5\u0017a\u00a4\u001dI\u00b5\u0017\u00f4\u0014\u00e9\u00b1>\u00ee\r\u00badC\u0083\u00f4t3+\u00c2\u00a7\u00bf\u001a4G\u00bc\u0095\u0095\u00ebi1lwY\u00b1\u00e5Su\u008c\u00ef\u008d\u0005\u00dcjpvI!\u0015\u00ef\u00df\u00bf\u00a9\u0005\u0082^\u00a6\u00d7\u00d0\u00bdIX\u0095\u00df\u00f2\u001b\u00b0|\u008e\u00e7\u00b4\u00c0\u0098\u00e6\u00a9\u00ad.\u00a8\u00c1p\u00a7\u008c\u00b2)=\bt~\u00b3\u009d\u0096<[\u00e1\u00e7M#0\u00f7\u00de=\u00e7L)\u001d\u00ff@\u00d7<\u00ce\u008b\u00f5\t9\u0093\u00b7\u0002IV\u00a8\u00c3\u009c\u008c\u00e3!\u001cc\u00d0*V\"\u00f2\u00d2\u0013\u0015\u00a4NTx9\u00e6\u00dd\u00dc\u00f1W\u0088\u00fe\u0013\u0005L\u00baJi\u007f.\u00c5\u00c4\rp\u00eaf\u00a5\u001c\u0098\u00ba?\u00e9\u00f7$\u00feZ\u00aa\u00ac\u00f9\u0019\u00b1\u00b4\u0005\u009e\u00af%\u00a68d\u008b\u00acSU\u00b8\u00ca%)\u00a1]\u00fa]\u00f8#\u0084\u00aeJX\u0081\u009f\u001e\f\u008e\u00d3";
                var5_9 = "\u0004\u00bb\u0001X\u00ad\u00a2r1;31\u00f5\u008f\u0096\u00d0\u00a6\u0086G\u00ad\u00fd\u0088\u0084O\u00c7\u00bes\u009d\u00e9G\u001dJO\u00cc. n\"\u00c2mfQ\u00965\u00c0m\u00d2\u00e5\u00a1tl\u00fdr\u008a`e\u00f3\u0001\u00e5\u0084\u00ef\u0098\u008c\u00dd\u000e^\u0001Pg',]\u008c\u00ad\u00baL\u0091\u00f4\u00de\u0004\u00c1?\u00a4\u00bd\u0085\f\u00d8ZW\u00b38\u0097\u0014w\u0096\u008eHs\u0011\u0080\u009f\u00dd*}\\\u00fc\u0001\u0088\u00e0*/\u00be1\u00fcg\u0001\u0081\u00c3\u00b4Y\u00edh\u0018W\"\u00ff{T\u00fd\u0094 \u00ecDM\u008fNtq\u001b\u00af\u0017\u00d0\u008f \u00dc\u000b\u0019\"\u009b\u008a\u00d3@\u00b6\u0005\u000e\u00fe0@-\u00b9z\u00f0\u00ea\t\u00f2\u00d2}\u00ff\u001a~\u00af\u0081\u0095\rZ\u0007|E\u0095\u00fa\u00c4\u009d\u0003=\u00cd\u00d6_\u008dT\u00aa2`Z\u0013\u001dB{v/j\u0015gEkY\b\u00b4\u0015\u00c5x\u00d7]\u009f\u00f5\u0017a\u00a4\u001dI\u00b5\u0017\u00f4\u0014\u00e9\u00b1>\u00ee\r\u00badC\u0083\u00f4t3+\u00c2\u00a7\u00bf\u001a4G\u00bc\u0095\u0095\u00ebi1lwY\u00b1\u00e5Su\u008c\u00ef\u008d\u0005\u00dcjpvI!\u0015\u00ef\u00df\u00bf\u00a9\u0005\u0082^\u00a6\u00d7\u00d0\u00bdIX\u0095\u00df\u00f2\u001b\u00b0|\u008e\u00e7\u00b4\u00c0\u0098\u00e6\u00a9\u00ad.\u00a8\u00c1p\u00a7\u008c\u00b2)=\bt~\u00b3\u009d\u0096<[\u00e1\u00e7M#0\u00f7\u00de=\u00e7L)\u001d\u00ff@\u00d7<\u00ce\u008b\u00f5\t9\u0093\u00b7\u0002IV\u00a8\u00c3\u009c\u008c\u00e3!\u001cc\u00d0*V\"\u00f2\u00d2\u0013\u0015\u00a4NTx9\u00e6\u00dd\u00dc\u00f1W\u0088\u00fe\u0013\u0005L\u00baJi\u007f.\u00c5\u00c4\rp\u00eaf\u00a5\u001c\u0098\u00ba?\u00e9\u00f7$\u00feZ\u00aa\u00ac\u00f9\u0019\u00b1\u00b4\u0005\u009e\u00af%\u00a68d\u008b\u00acSU\u00b8\u00ca%)\u00a1]\u00fa]\u00f8#\u0084\u00aeJX\u0081\u009f\u001e\f\u008e\u00d3".length();
                var2_10 = 0;
                while (true) {
                    var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                    v6 = var6_6;
                    v7 = var3_7++;
                    v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                    v9 = -1;
                    break block10;
                    break;
                }
lbl44:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    var4_8 = "D:\u00c9\u00cbd\u0006}\u00d61\u00ac\u00b9?\u000ey\u001ak";
                    var5_9 = "D:\u00c9\u00cbd\u0006}\u00d61\u00ac\u00b9?\u000ey\u001ak".length();
                    var2_10 = 0;
                    while (true) {
                        var7_11 = var4_8.substring(var2_10, var2_10 += 8).getBytes("ISO-8859-1");
                        v6 = var6_6;
                        v7 = var3_7++;
                        v8 = ((long)var7_11[0] & 255L) << 56 | ((long)var7_11[1] & 255L) << 48 | ((long)var7_11[2] & 255L) << 40 | ((long)var7_11[3] & 255L) << 32 | ((long)var7_11[4] & 255L) << 24 | ((long)var7_11[5] & 255L) << 16 | ((long)var7_11[6] & 255L) << 8 | (long)var7_11[7] & 255L;
                        v9 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl57:
                // 1 sources

                while (true) {
                    v6[v7] = v10;
                    if (var2_10 < var5_9) ** continue;
                    break block11;
                    break;
                }
            }
            var8_12 = v8;
            var10_13 = var0_4.doFinal(new byte[]{(byte)(var8_12 >>> 56), (byte)(var8_12 >>> 48), (byte)(var8_12 >>> 40), (byte)(var8_12 >>> 32), (byte)(var8_12 >>> 24), (byte)(var8_12 >>> 16), (byte)(var8_12 >>> 8), (byte)var8_12});
            v10 = ((long)var10_13[0] & 255L) << 56 | ((long)var10_13[1] & 255L) << 48 | ((long)var10_13[2] & 255L) << 40 | ((long)var10_13[3] & 255L) << 32 | ((long)var10_13[4] & 255L) << 24 | ((long)var10_13[5] & 255L) << 16 | ((long)var10_13[6] & 255L) << 8 | (long)var10_13[7] & 255L;
            switch (v9) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl70:
                // 1 sources

                ** continue;
            }
        }
        cY.bBsDb = var6_6;
        cY.IzHcV = new Integer[55];
    }

    @hG
    public void aaO(gM gM2) {
        this.ReCrR.cFG();
    }

    private static CallSite aaV(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cY" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public mG aaK(PlayerEntity playerEntity) {
        float f2;
        boolean bl2;
        block25: {
            boolean bl3;
            block26: {
                mG mG2;
                block28: {
                    block27: {
                        iS[] iSArray;
                        block23: {
                            block24: {
                                boolean bl4;
                                block21: {
                                    block22: {
                                        long l2 = jEhYF ^ 0x77CC059367B7L;
                                        iSArray = dh.afl();
                                        try {
                                            block20: {
                                                try {
                                                    try {
                                                        try {
                                                            if (playerEntity == null) break block20;
                                                            bl4 = this.BDssA.WF();
                                                            if (iSArray != null) break block21;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cY.aaR(matchException);
                                                        }
                                                        if (!bl4) break block22;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw cY.aaR(matchException);
                                                    }
                                                    if (playerEntity == rD.dlmvG.player) break block22;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cY.aaR(matchException);
                                                }
                                            }
                                            return mG.UhgnI;
                                        }
                                        catch (MatchException matchException) {
                                            throw cY.aaR(matchException);
                                        }
                                    }
                                    bl4 = this.ReCrR.cFA(playerEntity);
                                }
                                bl3 = bl4;
                                boolean bl5 = this.ReCrR.cFC(playerEntity);
                                try {
                                    try {
                                        bl2 = bl5;
                                        if (iSArray != null) break block23;
                                        if (!bl2) break block24;
                                    }
                                    catch (MatchException matchException) {
                                        throw cY.aaR(matchException);
                                    }
                                    return this.iZEwm.Wf();
                                }
                                catch (MatchException matchException) {
                                    throw cY.aaR(matchException);
                                }
                            }
                            bl2 = this.SnGMi.WF();
                        }
                        try {
                            try {
                                try {
                                    if (iSArray != null) break block25;
                                    if (bl2) break block26;
                                }
                                catch (MatchException matchException) {
                                    throw cY.aaR(matchException);
                                }
                                if (!bl3) break block27;
                            }
                            catch (MatchException matchException) {
                                throw cY.aaR(matchException);
                            }
                            mG2 = this.ykbJL.Wf();
                            break block28;
                        }
                        catch (MatchException matchException) {
                            throw cY.aaR(matchException);
                        }
                    }
                    mG2 = this.VBZRj.Wf();
                }
                return mG2;
            }
            bl2 = bl3;
        }
        try {
            f2 = bl2 ? this.ReCrR.cFB(playerEntity) : 0.0f;
        }
        catch (MatchException matchException) {
            throw cY.aaR(matchException);
        }
        float f3 = f2;
        return jk.bDu(this.VBZRj.Wf(), this.ykbJL.Wf(), f3);
    }

    @hG
    public void aaL(gH.ti ti2) {
        this.ReCrR.cFv();
    }

    private static MatchException aaR(MatchException matchException) {
        return matchException;
    }

    @hG
    public void aaM(hw.tv tv2) {
        block5: {
            Entity entity;
            block4: {
                long l2 = jEhYF ^ 0x6CC227AE0832L;
                Entity entity2 = tv2.bdm();
                iS[] iSArray = dh.afl();
                try {
                    try {
                        entity = entity2;
                        if (iSArray != null) break block4;
                        if (!(entity instanceof PlayerEntity)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw cY.aaR(matchException);
                    }
                    entity = entity2;
                }
                catch (MatchException matchException) {
                    throw cY.aaR(matchException);
                }
            }
            PlayerEntity playerEntity = (PlayerEntity)entity;
            this.ReCrR.cFz(playerEntity);
        }
    }

    @hG
    public void aaN(gL.tk tk2) {
        block22: {
            Entity entity;
            block21: {
                boolean bl2;
                Entity entity2;
                block17: {
                    iS[] iSArray;
                    block18: {
                        block20: {
                            Entity entity3;
                            EntityStatusS2CPacket entityStatusS2CPacket;
                            block19: {
                                long l2 = jEhYF ^ 0x465B8E160B28L;
                                iSArray = dh.afl();
                                try {
                                    if (rD.dlmvG.world == null) {
                                        return;
                                    }
                                }
                                catch (MatchException matchException) {
                                    throw cY.aaR(matchException);
                                }
                                entity2 = tk2.bcf();
                                try {
                                    bl2 = entity2 instanceof EntityStatusS2CPacket;
                                    if (iSArray != null) break block17;
                                    if (!bl2) break block18;
                                }
                                catch (MatchException matchException) {
                                    throw cY.aaR(matchException);
                                }
                                entityStatusS2CPacket = (EntityStatusS2CPacket)entity2;
                                entity2 = entityStatusS2CPacket.getEntity((World)rD.dlmvG.world);
                                try {
                                    try {
                                        entity3 = entity2;
                                        if (iSArray != null) break block19;
                                        if (!(entity3 instanceof PlayerEntity)) break block20;
                                    }
                                    catch (MatchException matchException) {
                                        throw cY.aaR(matchException);
                                    }
                                    entity3 = entity2;
                                }
                                catch (MatchException matchException) {
                                    throw cY.aaR(matchException);
                                }
                            }
                            PlayerEntity playerEntity = (PlayerEntity)entity3;
                            this.ReCrR.cFy(playerEntity, entityStatusS2CPacket.getStatus());
                        }
                        return;
                    }
                    entity2 = tk2.bcf();
                    try {
                        entity = entity2;
                        if (iSArray != null) break block21;
                        bl2 = entity instanceof PlaySoundS2CPacket;
                    }
                    catch (MatchException matchException) {
                        throw cY.aaR(matchException);
                    }
                }
                if (!bl2) break block22;
                entity = entity2;
            }
            PlaySoundS2CPacket playSoundS2CPacket = (PlaySoundS2CPacket)entity;
            try {
                if (playSoundS2CPacket.getSound().getIdAsString().contains(qnaeb)) {
                    this.ReCrR.cFw(playSoundS2CPacket.getX(), playSoundS2CPacket.getY(), playSoundS2CPacket.getZ());
                }
            }
            catch (MatchException matchException) {
                throw cY.aaR(matchException);
            }
        }
    }

    private static int aaU(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cY.aaT(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int aaT(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5F8;
        if (IzHcV[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = bBsDb[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])nwtEu.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    nwtEu.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cY", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cY.IzHcV[n3] = n4;
        }
        return IzHcV[n3];
    }

    @hG
    public void aaP(go.sX sX2) {
        jD.bHl();
    }

    private static String aaS(byte[] byArray) {
        int n2 = 0;
        int n3 = byArray.length;
        char[] cArray = new char[n3];
        for (int i2 = 0; i2 < n3; ++i2) {
            char c2;
            int n4 = 0xFF & byArray[i2];
            if (n4 < 192) {
                cArray[n2++] = (char)n4;
                continue;
            }
            if (n4 < 224) {
                c2 = (char)((char)(n4 & 0x1F) << 6);
                n4 = byArray[++i2];
                c2 = (char)(c2 | (char)(n4 & 0x3F));
                cArray[n2++] = c2;
                continue;
            }
            if (i2 >= n3 - 2) continue;
            c2 = (char)((char)(n4 & 0xF) << 12);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F) << 6);
            n4 = byArray[++i2];
            c2 = (char)(c2 | (char)(n4 & 0x3F));
            cArray[n2++] = c2;
        }
        return new String(cArray, 0, n2);
    }

    @hG(priority=mw.LOWEST)
    public void aaQ(go.sY sY2) {
        jD.bHl();
    }

    @Override
    public void YO() {
        super.YO();
        this.ReCrR.cFG();
        jD.bHm();
        jD.bHj();
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cY.class, "aaU", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

