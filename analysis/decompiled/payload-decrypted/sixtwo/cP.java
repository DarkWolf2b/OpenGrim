/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.enchantment.Enchantment
 *  net.minecraft.enchantment.Enchantments
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.projectile.ArrowEntity
 *  net.minecraft.item.BowItem
 *  net.minecraft.item.CrossbowItem
 *  net.minecraft.item.EggItem
 *  net.minecraft.item.EnderPearlItem
 *  net.minecraft.item.ExperienceBottleItem
 *  net.minecraft.item.Item
 *  net.minecraft.item.LingeringPotionItem
 *  net.minecraft.item.SnowballItem
 *  net.minecraft.item.SplashPotionItem
 *  net.minecraft.item.TridentItem
 *  net.minecraft.registry.RegistryKey
 *  net.minecraft.util.Hand
 *  net.minecraft.util.math.Box
 *  net.minecraft.util.math.MathHelper
 *  net.minecraft.util.math.Vec3d
 *  net.minecraft.world.World
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.enchantment.Enchantments;
import net.minecraft.entity.Entity;
import net.minecraft.entity.projectile.ArrowEntity;
import net.minecraft.item.BowItem;
import net.minecraft.item.CrossbowItem;
import net.minecraft.item.EggItem;
import net.minecraft.item.EnderPearlItem;
import net.minecraft.item.ExperienceBottleItem;
import net.minecraft.item.Item;
import net.minecraft.item.LingeringPotionItem;
import net.minecraft.item.SnowballItem;
import net.minecraft.item.SplashPotionItem;
import net.minecraft.item.TridentItem;
import net.minecraft.registry.RegistryKey;
import net.minecraft.util.Hand;
import net.minecraft.util.math.Box;
import net.minecraft.util.math.MathHelper;
import net.minecraft.util.math.Vec3d;
import net.minecraft.world.World;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.iW;
import sixtwo.jh;
import sixtwo.me;
import sixtwo.mh;
import sixtwo.mr;
import sixtwo.rD;

public class cP
extends gg {
    private final cG TaCDX;
    private final cG rHwiT;
    private final cG QyPao;
    private final cJ ZVcly;
    private static final long rSiDa;
    private static final long[] zuzcl;
    private static final Integer[] Qajnw;
    private static final Map woehX;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cP() {
        long l2 = rSiDa ^ 0x4B95F7084BA5L;
        super(gf.aZL((int)87, false, gh.nOCvV));
        int[] nArray = new int[10];
        nArray[0] = (int)76;
        nArray[1] = (int)105;
        nArray[2] = (int)110;
        nArray[3] = (int)101;
        nArray[4] = (int)32;
        nArray[5] = (int)67;
        nArray[6] = (int)111;
        nArray[7] = (int)108;
        nArray[8] = (int)111;
        nArray[9] = (int)114;
        this.TaCDX = new cG(this, mr.clS(nArray)).Uf(rD.dlM().bjG().bis());
        int[] nArray2 = new int[17];
        nArray2[0] = (int)66;
        nArray2[1] = (int)111;
        nArray2[2] = (int)120;
        nArray2[3] = (int)32;
        nArray2[4] = (int)79;
        nArray2[5] = (int)117;
        nArray2[6] = (int)116;
        nArray2[7] = (int)108;
        nArray2[8] = (int)105;
        nArray2[9] = (int)110;
        nArray2[10] = (int)101;
        nArray2[11] = (int)32;
        nArray2[12] = (int)67;
        nArray2[13] = (int)111;
        nArray2[14] = (int)108;
        nArray2[15] = (int)111;
        nArray2[16] = (int)114;
        this.rHwiT = new cG(this, mr.clS(nArray2)).Uf(rD.dlM().bjG().bis());
        int[] nArray3 = new int[14];
        nArray3[0] = (int)66;
        nArray3[1] = (int)111;
        nArray3[2] = (int)120;
        nArray3[3] = (int)32;
        nArray3[4] = (int)70;
        nArray3[5] = (int)105;
        nArray3[6] = (int)108;
        nArray3[7] = (int)108;
        nArray3[8] = (int)32;
        nArray3[9] = (int)67;
        nArray3[10] = (int)111;
        nArray3[11] = (int)108;
        nArray3[12] = (int)111;
        nArray3[13] = (int)114;
        this.QyPao = new cG(this, mr.clS(nArray3)).Uf(rD.dlM().bjG().bis().cob(0.5f));
        int[] nArray4 = new int[10];
        nArray4[0] = (int)70;
        nArray4[1] = (int)105;
        nArray4[2] = (int)108;
        nArray4[3] = (int)108;
        nArray4[4] = (int)101;
        nArray4[5] = (int)100;
        nArray4[6] = (int)32;
        nArray4[7] = (int)66;
        nArray4[8] = (int)111;
        nArray4[9] = (int)120;
        this.ZVcly = new cJ(this, mr.clS(nArray4)).WE(true);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cP.rSiDa = gb.aYR(-2284223492630732071L, 1537918581710625755L, MethodHandles.lookup().lookupClass()).a(202044020695558L);
                cP.woehX = new HashMap<K, V>(13);
                var0 = cP.rSiDa ^ 26719622568547L;
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
                var8_3 = new long[51];
                var5_4 = 0;
                var6_5 = "\u008cS\u007f\u00ccrF;\u0005\u00e5\u00c2\u00c7g\u00bc:\u00d3\u0002,\u0094\u00e0\u00999\u00a8\u0093\u0093\u00f4<c\u00caP`3\u0097\u0094&\u0087\u00a1\u009e\u009fe\u00a9\u0014G\u00c1n\u00e3\u00fd\u00bf\u00c9\u00a7\u007f\u00f9\u00c6\u0013\u00aa\\:\u0099\u0091y\u00c1\u00e4\u00c2\u00dc\u0019-\u00b1\u00f5\u008eZ\u00d6\u00dbM\u00bc\u00e1\u00c9+\u00bc\u0081\u009c\u00be\u0003L? \u00da.\u00e7\u00de\\~\u0004\u00a5d\u00e7\u00e2\r\u00e9\u008d\u0019\u0012\u009b\u00cb$\u00ee;9\u00a5\u00a3\u00a23ca\u00d5\u00bb7_\u008e\u00fbN\u00f6\u00ab\u00f9\nd\u00f5\u00d6\u00a3g\u00b4\u00e4\u00c1\u00bbS\u0096\"q\u0099\u001a\u00d8\u0080\u00dbv\u00c7\u00be\u00e8\u00d6\u00f0\u00c9\u00b7iLO\u0000\u00ea\u00b8\u00b5\u00f0\u00db\u008b\u009c\u00f6m\u00e1\u00efa\u00d4\u0004\u00d8\u0007\u0016M\u001c\u0010\u00d0\u009e\u00bd\u00026\u0010\u00d4\u009a3\u00a1\u0092\u00e4\u00ff\u001e\u001a\u00e4^I\u00836|Y})\u00cd\u0015\u0095:\u0081\u00c6U\u00b6x\u00cd\u0007\u000b\u00e6\u007f\u00de\u00b5;[O\u0095lA\u001fD\u00e1\u00b1\u00debApaW\u00c5m~/$\u00b8\u00c5\u00c5>l\u0081\u00d73\u00d9w\u0000\u00a8\u00bb\u00ac\u00aap\u00cc%\u008d\u00b5\u00a7d-0iY\u00fe\u007f\u0084\u00e4\u00e0\u007f+\u00e1\u00ea\u00ff1!\b_\u00c4\u00ab#/\u00e3\u0085laC\u0097\u00beI\u00b4\u009dL\u00a3:\u00ac\u00c4\u0086\"\u00cd\u009ea\u00d3\u00e6\u000e\u008da\u00f7\u0014\u00c8\u00dar\u00ae&\u00baIu\u0085\u00f7\u00bapT\u00be/j\u00047\u00e2\u00ee\u0005\u00cb\u001f\u00af\u0002\u00a5%o\u0007\u0094\u0018h\u001c\u001eW?\u00f0w\u0012\u00fczF\u00d1\u0093\u00b12\u00e2\u008a=oN\u009b\u0093\u000e\u00d7\u00dc\u00f5\u00e2\u00d9\u0001]\u00f7\u0097\u001b\u000f\u0084\u00d5`\u009c\u001cxL\u00b3(C\u00e0\u0001\u00fd\u0089r_}Z\u00d2\fPc";
                var7_6 = "\u008cS\u007f\u00ccrF;\u0005\u00e5\u00c2\u00c7g\u00bc:\u00d3\u0002,\u0094\u00e0\u00999\u00a8\u0093\u0093\u00f4<c\u00caP`3\u0097\u0094&\u0087\u00a1\u009e\u009fe\u00a9\u0014G\u00c1n\u00e3\u00fd\u00bf\u00c9\u00a7\u007f\u00f9\u00c6\u0013\u00aa\\:\u0099\u0091y\u00c1\u00e4\u00c2\u00dc\u0019-\u00b1\u00f5\u008eZ\u00d6\u00dbM\u00bc\u00e1\u00c9+\u00bc\u0081\u009c\u00be\u0003L? \u00da.\u00e7\u00de\\~\u0004\u00a5d\u00e7\u00e2\r\u00e9\u008d\u0019\u0012\u009b\u00cb$\u00ee;9\u00a5\u00a3\u00a23ca\u00d5\u00bb7_\u008e\u00fbN\u00f6\u00ab\u00f9\nd\u00f5\u00d6\u00a3g\u00b4\u00e4\u00c1\u00bbS\u0096\"q\u0099\u001a\u00d8\u0080\u00dbv\u00c7\u00be\u00e8\u00d6\u00f0\u00c9\u00b7iLO\u0000\u00ea\u00b8\u00b5\u00f0\u00db\u008b\u009c\u00f6m\u00e1\u00efa\u00d4\u0004\u00d8\u0007\u0016M\u001c\u0010\u00d0\u009e\u00bd\u00026\u0010\u00d4\u009a3\u00a1\u0092\u00e4\u00ff\u001e\u001a\u00e4^I\u00836|Y})\u00cd\u0015\u0095:\u0081\u00c6U\u00b6x\u00cd\u0007\u000b\u00e6\u007f\u00de\u00b5;[O\u0095lA\u001fD\u00e1\u00b1\u00debApaW\u00c5m~/$\u00b8\u00c5\u00c5>l\u0081\u00d73\u00d9w\u0000\u00a8\u00bb\u00ac\u00aap\u00cc%\u008d\u00b5\u00a7d-0iY\u00fe\u007f\u0084\u00e4\u00e0\u007f+\u00e1\u00ea\u00ff1!\b_\u00c4\u00ab#/\u00e3\u0085laC\u0097\u00beI\u00b4\u009dL\u00a3:\u00ac\u00c4\u0086\"\u00cd\u009ea\u00d3\u00e6\u000e\u008da\u00f7\u0014\u00c8\u00dar\u00ae&\u00baIu\u0085\u00f7\u00bapT\u00be/j\u00047\u00e2\u00ee\u0005\u00cb\u001f\u00af\u0002\u00a5%o\u0007\u0094\u0018h\u001c\u001eW?\u00f0w\u0012\u00fczF\u00d1\u0093\u00b12\u00e2\u008a=oN\u009b\u0093\u000e\u00d7\u00dc\u00f5\u00e2\u00d9\u0001]\u00f7\u0097\u001b\u000f\u0084\u00d5`\u009c\u001cxL\u00b3(C\u00e0\u0001\u00fd\u0089r_}Z\u00d2\fPc".length();
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
                    var6_5 = "\u0017\u0081\u00b5\u00a2\u0098\u008e\u0011\u00e5\t\u008dQ\u00ca\u00e3C\u00e9\u0099";
                    var7_6 = "\u0017\u0081\u00b5\u00a2\u0098\u008e\u0011\u00e5\t\u008dQ\u00ca\u00e3C\u00e9\u0099".length();
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
        cP.zuzcl = var8_3;
        cP.Qajnw = new Integer[51];
    }

    private int Yw(Item item) {
        int n2;
        block12: {
            block13: {
                Object object;
                block10: {
                    long l2;
                    block11: {
                        l2 = rSiDa ^ 0xAAEB596F840L;
                        iS[] iSArray = dh.afl();
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            object = item instanceof SplashPotionItem;
                                            if (iSArray != null) break block10;
                                            if (object != 0) break block11;
                                        }
                                        catch (MatchException matchException) {
                                            throw cP.YB(matchException);
                                        }
                                        object = item instanceof LingeringPotionItem;
                                        if (iSArray != null) break block10;
                                    }
                                    catch (MatchException matchException) {
                                        throw cP.YB(matchException);
                                    }
                                    if (object != 0) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw cP.YB(matchException);
                                }
                                n2 = item instanceof ExperienceBottleItem;
                                if (iSArray != null) break block12;
                            }
                            catch (MatchException matchException) {
                                throw cP.YB(matchException);
                            }
                            if (n2 == 0) break block13;
                        }
                        catch (MatchException matchException) {
                            throw cP.YB(matchException);
                        }
                    }
                    object = cP.YE("c", (int)21567, (long)(0x2E4D09227A0E59C4L ^ l2));
                }
                return object;
            }
            n2 = 0;
        }
        return n2;
    }

    public cG Yy() {
        return this.rHwiT;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private float Yv(Item item) {
        boolean bl2;
        block17: {
            block18: {
                iS[] iSArray;
                block15: {
                    block16: {
                        block14: {
                            long l2 = rSiDa ^ 0x57BE18303DB7L;
                            iSArray = dh.afl();
                            try {
                                try {
                                    bl2 = item instanceof SplashPotionItem;
                                    if (iSArray != null) break block14;
                                    if (bl2) return 0.4f;
                                }
                                catch (MatchException matchException) {
                                    throw cP.YB(matchException);
                                }
                                bl2 = item instanceof LingeringPotionItem;
                            }
                            catch (MatchException matchException) {
                                throw cP.YB(matchException);
                            }
                        }
                        try {
                            try {
                                if (iSArray != null) break block15;
                                if (!bl2) break block16;
                                return 0.4f;
                            }
                            catch (MatchException matchException) {
                                throw cP.YB(matchException);
                            }
                        }
                        catch (MatchException matchException) {
                            throw cP.YB(matchException);
                        }
                    }
                    bl2 = item instanceof ExperienceBottleItem;
                }
                try {
                    try {
                        if (iSArray != null) break block17;
                        if (!bl2) break block18;
                        return 0.59f;
                    }
                    catch (MatchException matchException) {
                        throw cP.YB(matchException);
                    }
                }
                catch (MatchException matchException) {
                    throw cP.YB(matchException);
                }
            }
            bl2 = item instanceof TridentItem;
        }
        try {
            if (!bl2) return 1.5f;
            return 2.0f;
        }
        catch (MatchException matchException) {
            throw cP.YB(matchException);
        }
    }

    private static CallSite YE(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cP" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public cJ YA() {
        return this.ZVcly;
    }

    private float Yu(Item item) {
        float f2;
        long l2 = rSiDa ^ 0xE77BE758062L;
        try {
            f2 = item instanceof BowItem ? 1.0f : 0.4f;
        }
        catch (MatchException matchException) {
            throw cP.YB(matchException);
        }
        return f2;
    }

    private boolean Yt(Item item) {
        boolean bl2;
        block26: {
            block28: {
                block27: {
                    long l2 = rSiDa ^ 0x57E3140E7102L;
                    iS[] iSArray = dh.afl();
                    try {
                        try {
                            try {
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    try {
                                                                        bl2 = item instanceof EnderPearlItem;
                                                                        if (iSArray != null) break block26;
                                                                        if (bl2) break block27;
                                                                    }
                                                                    catch (MatchException matchException) {
                                                                        throw cP.YB(matchException);
                                                                    }
                                                                    bl2 = item instanceof TridentItem;
                                                                    if (iSArray != null) break block26;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw cP.YB(matchException);
                                                                }
                                                                if (bl2) break block27;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw cP.YB(matchException);
                                                            }
                                                            bl2 = item instanceof ExperienceBottleItem;
                                                            if (iSArray != null) break block26;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw cP.YB(matchException);
                                                        }
                                                        if (bl2) break block27;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw cP.YB(matchException);
                                                    }
                                                    bl2 = item instanceof SnowballItem;
                                                    if (iSArray != null) break block26;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cP.YB(matchException);
                                                }
                                                if (bl2) break block27;
                                            }
                                            catch (MatchException matchException) {
                                                throw cP.YB(matchException);
                                            }
                                            bl2 = item instanceof EggItem;
                                            if (iSArray != null) break block26;
                                        }
                                        catch (MatchException matchException) {
                                            throw cP.YB(matchException);
                                        }
                                        if (bl2) break block27;
                                    }
                                    catch (MatchException matchException) {
                                        throw cP.YB(matchException);
                                    }
                                    bl2 = item instanceof SplashPotionItem;
                                    if (iSArray != null) break block26;
                                }
                                catch (MatchException matchException) {
                                    throw cP.YB(matchException);
                                }
                                if (bl2) break block27;
                            }
                            catch (MatchException matchException) {
                                throw cP.YB(matchException);
                            }
                            bl2 = item instanceof LingeringPotionItem;
                            if (iSArray != null) break block26;
                        }
                        catch (MatchException matchException) {
                            throw cP.YB(matchException);
                        }
                        if (!bl2) break block28;
                    }
                    catch (MatchException matchException) {
                        throw cP.YB(matchException);
                    }
                }
                bl2 = true;
                break block26;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static int YD(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cP.YC(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int YC(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x14A5;
        if (Qajnw[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = zuzcl[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])woehX.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    woehX.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cP", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cP.Qajnw[n3] = n4;
        }
        return Qajnw[n3];
    }

    private static MatchException YB(MatchException matchException) {
        return matchException;
    }

    public cG Yx() {
        return this.TaCDX;
    }

    public cG Yz() {
        return this.QyPao;
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void Yr(go.sX var1_1) {
        block70: {
            block72: {
                block71: {
                    block69: {
                        block68: {
                            block67: {
                                block65: {
                                    block61: {
                                        block63: {
                                            block64: {
                                                block62: {
                                                    block60: {
                                                        block58: {
                                                            block59: {
                                                                block57: {
                                                                    block55: {
                                                                        block56: {
                                                                            var2_2 = cP.rSiDa ^ 103206144198664L;
                                                                            var4_3 = dh.afl();
                                                                            try {
                                                                                v0 = this.bab();
                                                                                if (var4_3 != null) break block55;
                                                                                if (v0) break block56;
                                                                            }
                                                                            catch (MatchException v1) {
                                                                                throw cP.YB(v1);
                                                                            }
                                                                            return;
                                                                        }
                                                                        v0 = rD.dlmvG.options.getPerspective().isFirstPerson();
                                                                    }
                                                                    if (!v0) {
                                                                        return;
                                                                    }
                                                                    var5_4 = var1_1.bbh();
                                                                    var6_5 = var1_1.bbi();
                                                                    var8_6 = rD.dlmvG.player.getMainHandStack();
                                                                    var9_7 = rD.dlmvG.player.getOffHandStack();
                                                                    try {
                                                                        try {
                                                                            v2 = var8_6.getItem() instanceof BowItem;
                                                                            if (var4_3 != null) break block57;
                                                                            if (v2) break block58;
                                                                        }
                                                                        catch (MatchException v3) {
                                                                            throw cP.YB(v3);
                                                                        }
                                                                        v2 = var8_6.getItem() instanceof CrossbowItem;
                                                                    }
                                                                    catch (MatchException v4) {
                                                                        throw cP.YB(v4);
                                                                    }
                                                                }
                                                                try {
                                                                    try {
                                                                        if (var4_3 != null) break block59;
                                                                        if (v2) break block58;
                                                                    }
                                                                    catch (MatchException v5) {
                                                                        throw cP.YB(v5);
                                                                    }
                                                                    v2 = this.Yt(var8_6.getItem());
                                                                }
                                                                catch (MatchException v6) {
                                                                    throw cP.YB(v6);
                                                                }
                                                            }
                                                            try {
                                                                if (var4_3 != null) break block60;
                                                                if (v2) {
                                                                }
                                                                ** GOTO lbl56
                                                            }
                                                            catch (MatchException v7) {
                                                                throw cP.YB(v7);
                                                            }
                                                        }
                                                        var7_8 = Hand.MAIN_HAND;
                                                        try {
                                                            if (var4_3 == null) break block61;
lbl56:
                                                            // 2 sources

                                                            v2 = var9_7.getItem() instanceof BowItem;
                                                        }
                                                        catch (MatchException v8) {
                                                            throw cP.YB(v8);
                                                        }
                                                    }
                                                    try {
                                                        try {
                                                            if (var4_3 != null) break block62;
                                                            if (v2) break block63;
                                                        }
                                                        catch (MatchException v9) {
                                                            throw cP.YB(v9);
                                                        }
                                                        v2 = var9_7.getItem() instanceof CrossbowItem;
                                                    }
                                                    catch (MatchException v10) {
                                                        throw cP.YB(v10);
                                                    }
                                                }
                                                try {
                                                    try {
                                                        if (var4_3 != null) break block64;
                                                        if (v2) break block63;
                                                    }
                                                    catch (MatchException v11) {
                                                        throw cP.YB(v11);
                                                    }
                                                    v2 = this.Yt(var9_7.getItem());
                                                }
                                                catch (MatchException v12) {
                                                    throw cP.YB(v12);
                                                }
                                            }
                                            if (!v2) ** GOTO lbl90
                                        }
                                        var7_8 = Hand.OFF_HAND;
                                        try {
                                            if (var4_3 == null) break block61;
lbl90:
                                            // 2 sources

                                            return;
                                        }
                                        catch (MatchException v13) {
                                            throw cP.YB(v13);
                                        }
                                    }
                                    var10_9 = (Boolean)rD.dlmvG.options.getBobView().getValue();
                                    try {
                                        block66: {
                                            try {
                                                try {
                                                    try {
                                                        rD.dlmvG.options.getBobView().setValue((Object)false);
                                                        v14 = var9_7.getItem() instanceof CrossbowItem;
                                                        if (var4_3 != null) break block65;
                                                        if (v14 == 0) break block66;
                                                    }
                                                    catch (MatchException v15) {
                                                        throw cP.YB(v15);
                                                    }
                                                    v14 = jh.bCh(var9_7, (RegistryKey<Enchantment>)Enchantments.MULTISHOT);
                                                    if (var4_3 != null) break block65;
                                                }
                                                catch (MatchException v16) {
                                                    throw cP.YB(v16);
                                                }
                                                if (v14 == 0) {
                                                }
                                                ** GOTO lbl138
                                            }
                                            catch (MatchException v17) {
                                                throw cP.YB(v17);
                                            }
                                        }
                                        v14 = var8_6.getItem() instanceof CrossbowItem;
                                    }
                                    catch (MatchException v18) {
                                        throw cP.YB(v18);
                                    }
                                }
                                try {
                                    try {
                                        if (var4_3 != null) break block67;
                                        if (v14 != 0) {
                                        }
                                        ** GOTO lbl170
                                    }
                                    catch (MatchException v19) {
                                        throw cP.YB(v19);
                                    }
                                    v14 = jh.bCh(var8_6, (RegistryKey<Enchantment>)Enchantments.MULTISHOT);
                                }
                                catch (MatchException v20) {
                                    throw cP.YB(v20);
                                }
                            }
                            try {
                                try {
                                    if (v14 == 0) ** GOTO lbl170
lbl138:
                                    // 2 sources

                                    v21 = this;
                                    v22 = var5_4;
                                    if (var7_8 != Hand.OFF_HAND) break block68;
                                }
                                catch (MatchException v23) {
                                    throw cP.YB(v23);
                                }
                                v24 = var9_7.getItem();
                                break block69;
                            }
                            catch (MatchException v25) {
                                throw cP.YB(v25);
                            }
                        }
                        v24 = var8_6.getItem();
                    }
                    try {
                        v21.Ys(v22, v24, rD.dlmvG.player.getYaw() - 10.0f, var6_5);
                        v26 = this;
                        v27 = var5_4;
                        v28 = var7_8 == Hand.OFF_HAND ? var9_7.getItem() : var8_6.getItem();
                    }
                    catch (MatchException v29) {
                        throw cP.YB(v29);
                    }
                    try {
                        v26.Ys(v27, v28, rD.dlmvG.player.getYaw(), var6_5);
                        v30 = this;
                        v31 = var5_4;
                        v32 = var7_8 == Hand.OFF_HAND ? var9_7.getItem() : var8_6.getItem();
                    }
                    catch (MatchException v33) {
                        throw cP.YB(v33);
                    }
                    try {
                        try {
                            v30.Ys(v31, v32, rD.dlmvG.player.getYaw() + 10.0f, var6_5);
                            if (var4_3 == null) break block70;
lbl170:
                            // 3 sources

                            v34 = this;
                            v35 = var5_4;
                            if (var7_8 != Hand.OFF_HAND) break block71;
                        }
                        catch (MatchException v36) {
                            throw cP.YB(v36);
                        }
                        v37 = var9_7.getItem();
                        break block72;
                    }
                    catch (MatchException v38) {
                        throw cP.YB(v38);
                    }
                }
                v37 = var8_6.getItem();
            }
            v34.Ys(v35, v37, rD.dlmvG.player.getYaw(), var6_5);
        }
        rD.dlmvG.options.getBobView().setValue((Object)var10_9);
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    private void Ys(MatrixStack var1_1, Item var2_2, float var3_3, float var4_4) {
        block57: {
            block56: {
                block55: {
                    block54: {
                        block52: {
                            block53: {
                                block51: {
                                    block49: {
                                        block50: {
                                            block47: {
                                                block48: {
                                                    block45: {
                                                        block46: {
                                                            block62: {
                                                                block43: {
                                                                    block44: {
                                                                        var5_5 = cP.rSiDa ^ 78163735853616L;
                                                                        var8_6 = MathHelper.lerp((double)var4_4, (double)rD.dlmvG.player.lastX, (double)rD.dlmvG.player.getX());
                                                                        var10_7 = MathHelper.lerp((double)var4_4, (double)rD.dlmvG.player.lastY, (double)rD.dlmvG.player.getY());
                                                                        var12_8 = MathHelper.lerp((double)var4_4, (double)rD.dlmvG.player.lastZ, (double)rD.dlmvG.player.getZ());
                                                                        var7_9 = dh.afl();
                                                                        var10_7 = var10_7 + (double)rD.dlmvG.player.getEyeHeight(rD.dlmvG.player.getPose()) - 0.1000000014901161;
                                                                        try {
                                                                            if (var7_9 != null) break block43;
                                                                            if (var2_2 != rD.dlmvG.player.getMainHandStack().getItem()) break block44;
                                                                        }
                                                                        catch (MatchException v0) {
                                                                            throw cP.YB(v0);
                                                                        }
                                                                        var8_6 -= (double)(MathHelper.cos((double)(var3_3 / 180.0f * 3.1415927f)) * 0.16f);
                                                                        var12_8 -= (double)(MathHelper.sin((double)(var3_3 / 180.0f * 3.1415927f)) * 0.16f);
                                                                        if (var7_9 == null) break block62;
                                                                    }
                                                                    var8_6 += (double)(MathHelper.cos((double)(var3_3 / 180.0f * 3.1415927f)) * 0.16f);
                                                                }
                                                                var12_8 += (double)(MathHelper.sin((double)(var3_3 / 180.0f * 3.1415927f)) * 0.16f);
                                                            }
                                                            var14_10 = this.Yu(var2_2);
                                                            var15_11 = new Vec3d((double)(-MathHelper.sin((double)(var3_3 / 180.0f * 3.1415927f)) * MathHelper.cos((double)(rD.dlmvG.player.getPitch() / 180.0f * 3.1415927f)) * var14_10), (double)(-MathHelper.sin((double)((rD.dlmvG.player.getPitch() - (float)this.Yw(var2_2)) / 180.0f * 3.1415927f)) * var14_10), (double)(MathHelper.cos((double)(var3_3 / 180.0f * 3.1415927f)) * MathHelper.cos((double)(rD.dlmvG.player.getPitch() / 180.0f * 3.1415927f)) * var14_10));
                                                            var16_12 = (float)rD.dlmvG.player.getItemUseTime() / 20.0f;
                                                            var16_12 = (var16_12 * var16_12 + var16_12 * 2.0f) / 3.0f;
                                                            try {
                                                                try {
                                                                    try {
                                                                        v1 = var16_12;
                                                                        if (var7_9 != null) break block45;
                                                                        if (v1 > 1.0f) break block46;
                                                                    }
                                                                    catch (MatchException v2) {
                                                                        throw cP.YB(v2);
                                                                    }
                                                                    cfr_temp_0 = var16_12 - 0.0f;
                                                                    v3 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                                                    if (var7_9 != null) break block47;
                                                                }
                                                                catch (MatchException v4) {
                                                                    throw cP.YB(v4);
                                                                }
                                                                if (v3) break block48;
                                                            }
                                                            catch (MatchException v5) {
                                                                throw cP.YB(v5);
                                                            }
                                                        }
                                                        v1 = 1.0f;
                                                    }
                                                    var16_12 = v1;
                                                }
                                                var15_11 = var15_11.normalize();
                                                v3 = var2_2 instanceof BowItem;
                                            }
                                            try {
                                                try {
                                                    if (var7_9 != null) break block49;
                                                    if (!v3) break block50;
                                                }
                                                catch (MatchException v6) {
                                                    throw cP.YB(v6);
                                                }
                                                v7 = var16_12 * 2.0f;
                                                break block51;
                                            }
                                            catch (MatchException v8) {
                                                throw cP.YB(v8);
                                            }
                                        }
                                        v3 = var2_2 instanceof CrossbowItem;
                                    }
                                    try {
                                        v7 = v3 != false ? 2.2f : 1.0f;
                                    }
                                    catch (MatchException v9) {
                                        throw cP.YB(v9);
                                    }
                                }
                                var17_13 = v7 * this.Yv(var2_2);
                                var15_11 = var15_11.multiply((double)var17_13);
                                var18_14 = new Vec3d(var8_6, var10_7, var12_8);
                                try {
                                    v10 = rD.dlmvG.player.isOnGround();
                                    if (var7_9 != null) break block52;
                                    if (v10) break block53;
                                }
                                catch (MatchException v11) {
                                    throw cP.YB(v11);
                                }
                                var15_11 = var15_11.add(0.0, rD.dlmvG.player.getVelocity().getY(), 0.0);
                            }
                            v10 = var2_2 instanceof BowItem;
                        }
                        try {
                            try {
                                if (var7_9 != null) break block54;
                                if (!v10) {
                                }
                                ** GOTO lbl100
                            }
                            catch (MatchException v12) {
                                throw cP.YB(v12);
                            }
                            v10 = rD.dlmvG.player.getMainHandStack().getItem() instanceof CrossbowItem;
                        }
                        catch (MatchException v13) {
                            throw cP.YB(v13);
                        }
                    }
                    try {
                        if (!v10) break block55;
lbl100:
                        // 2 sources

                        v14 = 0.05000000074505806;
                        break block56;
                    }
                    catch (MatchException v15) {
                        throw cP.YB(v15);
                    }
                }
                v14 = 0.029999999329447746;
            }
            var19_15 = v14;
            var21_16 = me.cjZ(mh.ckf((World)rD.dlmvG.world, (Entity)rD.dlmvG.player, var18_14, var15_11).cky((int)cP.YE("c", (int)14295, (long)(8515373120908720235L ^ var5_5))).ckz(-128.0).ckA(0.99).ckB(0.8).ckC(var19_15));
            var22_17 = new ArrayList<Vec3d>(var21_16.positions());
            var23_18 = 0.3f;
            var24_19 = 1;
            block34: while (true) {
                v16 = var24_19;
                block35: while (v16 < var22_17.size()) {
                    var25_21 = (Vec3d)var22_17.get(var24_19);
                    if (var7_9 != null) break block57;
                    for (Entity var27_24 : rD.dlmvG.world.getEntities()) {
                        block61: {
                            block59: {
                                block60: {
                                    block58: {
                                        v16 = var27_24 instanceof ArrowEntity;
                                        if (var7_9 != null) continue block35;
                                        try {
                                            if (var7_9 != null) break block58;
                                            if (v16 != 0) continue;
                                        }
                                        catch (MatchException v17) {
                                            throw cP.YB(v17);
                                        }
                                        v18 = var27_24.equals((Object)rD.dlmvG.player);
                                    }
                                    try {
                                        try {
                                            if (var7_9 != null) break block59;
                                            if (v18 == false) break block60;
                                        }
                                        catch (MatchException v19) {
                                            throw cP.YB(v19);
                                        }
                                        if (var7_9 == null) continue;
                                    }
                                    catch (MatchException v20) {
                                        throw cP.YB(v20);
                                    }
                                }
                                v18 = (int)var27_24.getBoundingBox().intersects(new Box(var25_21.x - (double)var23_18, var25_21.y - (double)var23_18, var25_21.z - (double)var23_18, var25_21.x + (double)var23_18, var25_21.y + (double)var23_18, var25_21.z + (double)var23_18));
                            }
                            try {
                                try {
                                    if (var7_9 != null) break block61;
                                    if (v18 != 0) {
                                    }
                                    ** GOTO lbl159
                                }
                                catch (MatchException v21) {
                                    throw cP.YB(v21);
                                }
                                iW.bxs(var1_1, var27_24.getBoundingBox(), this.rHwiT.Wf(), this.QyPao.Wf(), this.ZVcly.WF());
                                v18 = var22_17.size();
                            }
                            catch (MatchException v22) {
                                throw cP.YB(v22);
                            }
                        }
                        var24_19 = v18;
                        try {
                            if (var7_9 == null) break;
lbl159:
                            // 2 sources

                            if (var7_9 == null) continue;
                            break;
                        }
                        catch (MatchException v23) {
                            throw cP.YB(v23);
                        }
                    }
                    ++var24_19;
                    if (var7_9 == null) continue block34;
                }
                break;
            }
            iW.bxt(var1_1, var22_17, this.TaCDX.Wf());
        }
        var24_20 = var21_16.finalPosition();
        var25_22 = 0.3;
        var27_24 = new Box(var24_20.x - var25_22, var24_20.y - var25_22, var24_20.z - var25_22, var24_20.x + var25_22, var24_20.y + var25_22, var24_20.z + var25_22);
        iW.bxs(var1_1, (Box)var27_24, this.rHwiT.Wf(), this.QyPao.Wf(), this.ZVcly.WF());
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cP.class, "YD", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

