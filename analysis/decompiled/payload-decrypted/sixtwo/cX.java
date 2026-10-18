/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.authlib.GameProfile
 *  mixin.accessors.LivingEntityAccessor
 *  net.minecraft.client.MinecraftClient
 *  net.minecraft.client.network.OtherClientPlayerEntity
 *  net.minecraft.client.world.ClientWorld
 *  net.minecraft.component.DataComponentTypes
 *  net.minecraft.component.type.WeaponComponent
 *  net.minecraft.enchantment.Enchantment
 *  net.minecraft.enchantment.Enchantments
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.Entity$RemovalReason
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.effect.StatusEffectInstance
 *  net.minecraft.entity.effect.StatusEffects
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.item.Items
 *  net.minecraft.registry.RegistryKey
 *  net.minecraft.util.Hand
 */
package sixtwo;

import com.mojang.authlib.GameProfile;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.UUID;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.LivingEntityAccessor;
import net.minecraft.client.MinecraftClient;
import net.minecraft.client.network.OtherClientPlayerEntity;
import net.minecraft.client.world.ClientWorld;
import net.minecraft.component.DataComponentTypes;
import net.minecraft.component.type.WeaponComponent;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.enchantment.Enchantments;
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.effect.StatusEffectInstance;
import net.minecraft.entity.effect.StatusEffects;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.item.Items;
import net.minecraft.registry.RegistryKey;
import net.minecraft.util.Hand;
import sixtwo.cJ;
import sixtwo.cX$ss;
import sixtwo.cX$st;
import sixtwo.cy;
import sixtwo.dh;
import sixtwo.gH;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hw;
import sixtwo.iS;
import sixtwo.jc;
import sixtwo.jg;
import sixtwo.jh;
import sixtwo.mr;
import sixtwo.rD;

public class cX
extends gg {
    static final double[] AekfX;
    static final double bTQok = 1.5;
    static final double uNWYG = 0.35;
    private final cy NRFCF;
    private final cJ TadoM;
    static OtherClientPlayerEntity oZvjF;
    private cX$ss SBCbE;
    private Hand RGVXb;
    private ItemStack aHWam;
    private static final long KKUeM;
    private static final String[] MQXRm;
    private static final String[] uCanr;
    private static final Map vRiTu;
    private static final long[] UzutJ;
    private static final Integer[] xjABA;
    private static final Map LLyow;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cX() {
        long l2 = KKUeM ^ 0x229555220AE7L;
        super(gf.aZL((int)72, false, gh.qBzlZ).aZS(false));
        this.NRFCF = new cy(this, mr.clS(new int[]{(int)78, (int)97, (int)109, (int)101})).Un((int)32).Up("");
        int[] nArray = new int[14];
        nArray[0] = (int)67;
        nArray[1] = (int)111;
        nArray[2] = (int)112;
        nArray[3] = (int)121;
        nArray[4] = (int)32;
        nArray[5] = (int)73;
        nArray[6] = (int)110;
        nArray[7] = (int)118;
        nArray[8] = (int)101;
        nArray[9] = (int)110;
        nArray[10] = (int)116;
        nArray[11] = (int)111;
        nArray[12] = (int)114;
        nArray[13] = (int)121;
        this.TadoM = new cJ(this, mr.clS(nArray)).WE(false);
        this.SBCbE = cX$ss.uksqJ;
        this.RGVXb = Hand.MAIN_HAND;
        this.aHWam = ItemStack.EMPTY;
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        cX.KKUeM = gb.aYR(-4989819808141205525L, -3482722268156601436L, MethodHandles.lookup().lookupClass()).a(161717892977365L);
                        cX.vRiTu = new HashMap<K, V>(13);
                        var11 = cX.KKUeM ^ 21703190965026L;
                        var13_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                        v0 = SecretKeyFactory.getInstance("DES");
                        v1 = new byte[8];
                        v2 = v1;
                        v1[0] = (byte)(var11 >>> 56);
                        for (var14_2 = 1; var14_2 < 8; ++var14_2) {
                            v2 = v2;
                            v2[var14_2] = (byte)(var11 << var14_2 * 8 >>> 56);
                        }
                        var13_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                        var20_3 = new String[17];
                        var18_4 = 0;
                        var17_5 = "\u00c1\u00e1\u0098c\u0014\u008b\u00cc\u00bf\u007f4N\\B\u00c4\u008b\u0012 \u00b1\u00c2\u0080@\u001f7\u00fe\u0082P\u00e1]\u009c}\u00fc\u0018\u0013\u00a7\u00b6P,QM\u00eev\u00c0?\u001f\u00e1\u00e9\u008b\u00d2\u0098\u0010\u0010\u00a2l\u00d1\u00b2\u00eb\u00ff\u00f0\u00d0\u00d9\u0004\u00c6\u00f5E\u00d8\u0000\u0010\u00e8\u0087\u00d4\u00f6\u00ca;\u00a0\u00a4\u00021U\u00cdw\u00ab\u009c# \u00a6\u00f9\u00c7\u0099b\u00b9\u00c92\u00be!\u00dfqi\u00d6E~\u0096\u00a1\u00ba\u0098\u00a9\u00e5\u00cd\u00a7s\u00f5$\u00b9\u00f9\u00c7\u00fe\u0012\u0010\u0017\u001a\u00c3\u0017Z\u00d0\u009ce\b\u00ed\u008dPB\u00bbm\u00a5\u0010B\u0011\u0086\u0087\u00e0\u00d6\f\u00afg3\u00ff@\u00d9 W\u0013\u0010\u00d0+\u00bc\u00b8\ts\u00a1Z\u00f5\u00dd\u0000\u008d\u00f3\u00b4\u00f6\u0017 Q\u00cep\f\u00f3A\u00bb\u00a9\u00d84E\u00ff\u0006\u0092\r\u0007A\u00bb\u0005M\u00e6v\u00c0T\u00b8\n\u00df\u00ad\u008dK\u00e8l\u0010&W\u00985\u00c1c\u00a9\u00f3C{\u00e5iU\u00c8 H\u00109\u0003\u00bfm\u00f6g\u00ae\u00a6u\u00dd\u0015\u008d\u00c2-?h\u0010G\u00ef\u00b8Ks\u00af*\u00b4aU\u00ccBN\u00e0\u0091~\u0010C\u0095\u00b7E\u00db3l\u0082\u00b8}\u008e\u00d9~K\u00cc\u008a\u0010T\u00fb\u0002\u000f5\u00fcfd\u00f6k\u00a1\u0010\u00f2 \u00ec\u0080\u0010\u00dc7P\u00b3RAP\u00d2\u0017\u00e9\u00e7F\u00859h)";
                        var19_6 = "\u00c1\u00e1\u0098c\u0014\u008b\u00cc\u00bf\u007f4N\\B\u00c4\u008b\u0012 \u00b1\u00c2\u0080@\u001f7\u00fe\u0082P\u00e1]\u009c}\u00fc\u0018\u0013\u00a7\u00b6P,QM\u00eev\u00c0?\u001f\u00e1\u00e9\u008b\u00d2\u0098\u0010\u0010\u00a2l\u00d1\u00b2\u00eb\u00ff\u00f0\u00d0\u00d9\u0004\u00c6\u00f5E\u00d8\u0000\u0010\u00e8\u0087\u00d4\u00f6\u00ca;\u00a0\u00a4\u00021U\u00cdw\u00ab\u009c# \u00a6\u00f9\u00c7\u0099b\u00b9\u00c92\u00be!\u00dfqi\u00d6E~\u0096\u00a1\u00ba\u0098\u00a9\u00e5\u00cd\u00a7s\u00f5$\u00b9\u00f9\u00c7\u00fe\u0012\u0010\u0017\u001a\u00c3\u0017Z\u00d0\u009ce\b\u00ed\u008dPB\u00bbm\u00a5\u0010B\u0011\u0086\u0087\u00e0\u00d6\f\u00afg3\u00ff@\u00d9 W\u0013\u0010\u00d0+\u00bc\u00b8\ts\u00a1Z\u00f5\u00dd\u0000\u008d\u00f3\u00b4\u00f6\u0017 Q\u00cep\f\u00f3A\u00bb\u00a9\u00d84E\u00ff\u0006\u0092\r\u0007A\u00bb\u0005M\u00e6v\u00c0T\u00b8\n\u00df\u00ad\u008dK\u00e8l\u0010&W\u00985\u00c1c\u00a9\u00f3C{\u00e5iU\u00c8 H\u00109\u0003\u00bfm\u00f6g\u00ae\u00a6u\u00dd\u0015\u008d\u00c2-?h\u0010G\u00ef\u00b8Ks\u00af*\u00b4aU\u00ccBN\u00e0\u0091~\u0010C\u0095\u00b7E\u00db3l\u0082\u00b8}\u008e\u00d9~K\u00cc\u008a\u0010T\u00fb\u0002\u000f5\u00fcfd\u00f6k\u00a1\u0010\u00f2 \u00ec\u0080\u0010\u00dc7P\u00b3RAP\u00d2\u0017\u00e9\u00e7F\u00859h)".length();
                        var16_7 = 16;
                        var15_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block18;
                            break;
                        }
lbl25:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = cX.aaD(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "\u00f6\u0007=\u00f0G*\u0013\u00f8j\u009c}3\u00a51g-\u0010\u0092\u00920\u0098?\u00f1E\u0089\u009dm~\u00b3\f\u00a4\u0097\u00b5";
                            var19_6 = "\u00f6\u0007=\u00f0G*\u0013\u00f8j\u009c}3\u00a51g-\u0010\u0092\u00920\u0098?\u00f1E\u0089\u009dm~\u00b3\f\u00a4\u0097\u00b5".length();
                            var16_7 = 16;
                            var15_8 = -1;
lbl34:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block18;
                                break;
                            }
                            break;
                        }
lbl39:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = cX.aaD(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block19;
                            break;
                        }
                    }
                    var21_9 = var13_1.doFinal(v4.getBytes("ISO-8859-1"));
                    switch (v5) {
                        default: {
                            ** continue;
                        }
                        ** case 0:
lbl51:
                        // 1 sources

                        ** continue;
                    }
                }
                cX.MQXRm = var20_3;
                cX.uCanr = new String[17];
                cX.LLyow = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v7 = SecretKeyFactory.getInstance("DES");
                v8 = new byte[8];
                v9 = v8;
                v8[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v9 = v9;
                    v9[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[40];
                var3_13 = 0;
                var4_14 = "P\u00f4\u00cc\u00cf\u00daq\u00fd\u00a7\u00b5\u00c0\u0088\u00cb\u00e0\u0001\u00ee\u00bf\u00c0SY\u00e3\u00f1\u00ae\u00d5qnz\u0001\u00e5\u00b4\u00e3\u00c8\u001b}\u0092\u0081\u009c\u009b\u00fd\u00b6^\u00d9\u00cd\u00bf\f\u00e4]\u0082\u00fa\u0093\u00d76s\u0085\u0081\u00aaiz\u00ff\u00a4~\u00a8qD$\u0004\u0006\u00ba\u00bcX\u00c8gW\u000e\u0018\u00e9g$^\u0007\u008d\u00f2\u000e\u0002\u0097\"\u00ef\u00fd\u008c\u00c39\u008f\u008f\u00b2Z\u00d3m\u00c7\u00c3\u0085\u001f?\u00d8\u008d\u00bb;\u00855\u008e\u00deG\u00f4\u00d1\u009ci\u00f0h\u00adA\u00c5\u00f2n\u00ee\u00c6\u009d\u0086\u00d2\u00817\u00b5k]\u00a5\u00fb\u009dW\u00e9L\u00d5Z`@\u00ed\u00e4\u00cd\u0011n\u00d7F\u0080\u0086\u00f0{y\u00d4\u0006\u00c7<\u00c0\u00b5V\u00b6\u00fe\u00ac\u0000F\u008ci7\u00b1g\u0001\u00d4\u00a3\u008b\u008d\u0092\u00e0\u00c15\u00fc\u00f3\u00bf\u00a8\u0014n\u00ed\u00a1)\u00912\u0097\u008e\u0004,xh\u00f7\u009c?A\u0018\u0010k\u0016\u0007\u001f%\u00a2\u00f2&\b\u00bf\u00e6\u0081\u00d4!H\u00f5Q1\u00d1\u00f0\u009e\u0086\u00c4\u00ae-\u00ef8;\u00d9\u008e\u001d\u00e3\u0084\\\u00c7\u00c3\u001e\u00ed\u000f\u00a88\u000e\u00c8pRb\u00c8F\u00a3\u0015X\u001d\u008fja\re\u00b8D\t\u00c9\u00b0\u00b54\t\u0091<,\u00e5\u0014S-\b$V\u0092\u001a\u00d0\u000e^k\u007f\u00c5!\u0091\u00b6+R\r\u009e\u007f\u00c6\u00d2w\u00a7\u0014:\u00cf\u008e\u00f8p\"";
                var5_15 = "P\u00f4\u00cc\u00cf\u00daq\u00fd\u00a7\u00b5\u00c0\u0088\u00cb\u00e0\u0001\u00ee\u00bf\u00c0SY\u00e3\u00f1\u00ae\u00d5qnz\u0001\u00e5\u00b4\u00e3\u00c8\u001b}\u0092\u0081\u009c\u009b\u00fd\u00b6^\u00d9\u00cd\u00bf\f\u00e4]\u0082\u00fa\u0093\u00d76s\u0085\u0081\u00aaiz\u00ff\u00a4~\u00a8qD$\u0004\u0006\u00ba\u00bcX\u00c8gW\u000e\u0018\u00e9g$^\u0007\u008d\u00f2\u000e\u0002\u0097\"\u00ef\u00fd\u008c\u00c39\u008f\u008f\u00b2Z\u00d3m\u00c7\u00c3\u0085\u001f?\u00d8\u008d\u00bb;\u00855\u008e\u00deG\u00f4\u00d1\u009ci\u00f0h\u00adA\u00c5\u00f2n\u00ee\u00c6\u009d\u0086\u00d2\u00817\u00b5k]\u00a5\u00fb\u009dW\u00e9L\u00d5Z`@\u00ed\u00e4\u00cd\u0011n\u00d7F\u0080\u0086\u00f0{y\u00d4\u0006\u00c7<\u00c0\u00b5V\u00b6\u00fe\u00ac\u0000F\u008ci7\u00b1g\u0001\u00d4\u00a3\u008b\u008d\u0092\u00e0\u00c15\u00fc\u00f3\u00bf\u00a8\u0014n\u00ed\u00a1)\u00912\u0097\u008e\u0004,xh\u00f7\u009c?A\u0018\u0010k\u0016\u0007\u001f%\u00a2\u00f2&\b\u00bf\u00e6\u0081\u00d4!H\u00f5Q1\u00d1\u00f0\u009e\u0086\u00c4\u00ae-\u00ef8;\u00d9\u008e\u001d\u00e3\u0084\\\u00c7\u00c3\u001e\u00ed\u000f\u00a88\u000e\u00c8pRb\u00c8F\u00a3\u0015X\u001d\u008fja\re\u00b8D\t\u00c9\u00b0\u00b54\t\u0091<,\u00e5\u0014S-\b$V\u0092\u001a\u00d0\u000e^k\u007f\u00c5!\u0091\u00b6+R\r\u009e\u007f\u00c6\u00d2w\u00a7\u0014:\u00cf\u008e\u00f8p\"".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v10 = var6_12;
                    v11 = var3_13++;
                    v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v13 = -1;
                    break block20;
                    break;
                }
lbl78:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u00d5\u00f2\u0085\u00c6\u00fb\u00ed&:f\u00edcvw\u00a0J'";
                    var5_15 = "\u00d5\u00f2\u0085\u00c6\u00fb\u00ed&:f\u00edcvw\u00a0J'".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v10 = var6_12;
                        v11 = var3_13++;
                        v12 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v13 = 0;
                        break block20;
                        break;
                    }
                    break;
                }
lbl91:
                // 1 sources

                while (true) {
                    v10[v11] = v14;
                    if (var2_16 < var5_15) ** continue;
                    break block21;
                    break;
                }
            }
            var8_18 = v12;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v14 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v13) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl104:
                // 1 sources

                ** continue;
            }
        }
        cX.UzutJ = var6_12;
        cX.xjABA = new Integer[40];
        cX.AekfX = new double[]{1.2, 1.75, 2.2};
    }

    public boolean aam() {
        boolean bl2;
        long l2 = KKUeM ^ 0x5707AEA09D59L;
        try {
            bl2 = oZvjF != null;
        }
        catch (NumberFormatException numberFormatException) {
            throw cX.aaC(numberFormatException);
        }
        return bl2;
    }

    public void aas(cX$ss cX$ss, Hand hand) {
        block22: {
            OtherClientPlayerEntity otherClientPlayerEntity;
            block23: {
                iS[] iSArray;
                block21: {
                    block20: {
                        Hand hand2;
                        block18: {
                            block19: {
                                cX$ss cX$ss2;
                                block16: {
                                    block17: {
                                        long l2 = KKUeM ^ 0x796C2704A8E4L;
                                        iSArray = dh.afl();
                                        try {
                                            cX cX2 = this;
                                            cX$ss2 = cX$ss;
                                            if (iSArray != null) break block16;
                                            if (cX$ss2 != null) break block17;
                                        }
                                        catch (NumberFormatException numberFormatException) {
                                            throw cX.aaC(numberFormatException);
                                        }
                                        cX$ss2 = cX$ss.uksqJ;
                                        break block16;
                                    }
                                    cX$ss2 = cX$ss;
                                }
                                try {
                                    cX2.SBCbE = cX$ss2;
                                    cX cX3 = this;
                                    hand2 = hand;
                                    if (iSArray != null) break block18;
                                    if (hand2 != null) break block19;
                                }
                                catch (NumberFormatException numberFormatException) {
                                    throw cX.aaC(numberFormatException);
                                }
                                hand2 = Hand.MAIN_HAND;
                                break block18;
                            }
                            hand2 = hand;
                        }
                        try {
                            cX cX4;
                            try {
                                cX3.RGVXb = hand2;
                                cX4 = this;
                                if (iSArray != null) break block20;
                                if (cX4.SBCbE == cX$ss.vNDXP) break block21;
                            }
                            catch (NumberFormatException numberFormatException) {
                                throw cX.aaC(numberFormatException);
                            }
                            cX4 = this;
                        }
                        catch (NumberFormatException numberFormatException) {
                            throw cX.aaC(numberFormatException);
                        }
                    }
                    cX4.aHWam = ItemStack.EMPTY;
                }
                try {
                    try {
                        try {
                            try {
                                if (oZvjF == null || this.SBCbE != cX$ss.uksqJ) break block22;
                            }
                            catch (NumberFormatException numberFormatException) {
                                throw cX.aaC(numberFormatException);
                            }
                            otherClientPlayerEntity = oZvjF;
                            if (iSArray != null) break block23;
                        }
                        catch (NumberFormatException numberFormatException) {
                            throw cX.aaC(numberFormatException);
                        }
                        if (!otherClientPlayerEntity.isUsingItem()) break block22;
                    }
                    catch (NumberFormatException numberFormatException) {
                        throw cX.aaC(numberFormatException);
                    }
                    otherClientPlayerEntity = oZvjF;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
            }
            otherClientPlayerEntity.clearActiveItem();
            this.aay(false, this.RGVXb);
        }
    }

    @Override
    public void aaj() {
        cX cX2;
        block4: {
            block5: {
                long l2 = KKUeM ^ 0x4D7624BD55FFL;
                iS[] iSArray = dh.afl();
                try {
                    try {
                        cX2 = this;
                        if (iSArray != null) break block4;
                        if (cX2.bab()) break block5;
                    }
                    catch (NumberFormatException numberFormatException) {
                        throw cX.aaC(numberFormatException);
                    }
                    return;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
            }
            super.aaj();
            cX2 = this;
        }
        cX2.aak();
    }

    private static NumberFormatException aaC(NumberFormatException numberFormatException) {
        return numberFormatException;
    }

    private void aaA() {
        block2: {
            OtherClientPlayerEntity otherClientPlayerEntity;
            block3: {
                long l2 = KKUeM ^ 0x47432979E32EL;
                iS[] iSArray = dh.afl();
                try {
                    otherClientPlayerEntity = oZvjF;
                    if (iSArray != null) break block2;
                    if (otherClientPlayerEntity != null) break block3;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
                return;
            }
            oZvjF.setYaw(rD.dlmvG.player.getYaw());
            oZvjF.setPitch(rD.dlmvG.player.getPitch());
            cX.oZvjF.lastYaw = oZvjF.getYaw();
            cX.oZvjF.lastPitch = oZvjF.getPitch();
            cX.oZvjF.lastBodyYaw = cX.oZvjF.bodyYaw = oZvjF.getYaw();
            cX.oZvjF.headYaw = oZvjF.getYaw();
            otherClientPlayerEntity = oZvjF;
        }
        otherClientPlayerEntity.lastHeadYaw = cX.oZvjF.headYaw;
    }

    public void aal() {
        this.aaB();
    }

    private static CallSite aaJ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cX" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public OtherClientPlayerEntity aan() {
        return oZvjF;
    }

    public Hand aap() {
        return this.RGVXb;
    }

    public void aak() {
        block10: {
            boolean bl2;
            long l2;
            block11: {
                block12: {
                    iS[] iSArray;
                    block8: {
                        block9: {
                            l2 = KKUeM ^ 0x5A387A81EB9EL;
                            iSArray = dh.afl();
                            try {
                                bl2 = this.bab();
                                if (iSArray != null) break block8;
                                if (bl2) break block9;
                            }
                            catch (NumberFormatException numberFormatException) {
                                throw cX.aaC(numberFormatException);
                            }
                            return;
                        }
                        this.aaB();
                        oZvjF = new OtherClientPlayerEntity(rD.dlmvG.world, new GameProfile(UUID.randomUUID(), this.NRFCF.Us()));
                        oZvjF.copyPositionAndRotation((Entity)rD.dlmvG.player);
                        this.aaA();
                        bl2 = this.TadoM.WF();
                    }
                    try {
                        if (iSArray != null) break block10;
                        if (!bl2) break block11;
                    }
                    catch (NumberFormatException numberFormatException) {
                        throw cX.aaC(numberFormatException);
                    }
                    CallSite callSite = cX.aaJ("g", (int)32446, (long)(0x639B0033BD8F941DL ^ l2));
                    for (int i2 = 0; i2 < 4; ++i2) {
                        try {
                            oZvjF.getInventory().setStack((int)(callSite + i2), rD.dlmvG.player.getInventory().getStack((int)(callSite + i2)).copy());
                            if (iSArray == null) {
                                if (iSArray == null) continue;
                                break;
                            }
                            break block12;
                        }
                        catch (NumberFormatException numberFormatException) {
                            throw cX.aaC(numberFormatException);
                        }
                    }
                    oZvjF.setStackInHand(Hand.MAIN_HAND, rD.dlmvG.player.getMainHandStack().copy());
                }
                oZvjF.setStackInHand(Hand.OFF_HAND, rD.dlmvG.player.getOffHandStack().copy());
            }
            rD.dlmvG.world.addEntity((Entity)oZvjF);
            oZvjF.addStatusEffect(new StatusEffectInstance(StatusEffects.REGENERATION, (int)cX.aaJ("g", (int)22049, (long)(0x1B1E33FF45F83C85L ^ l2)), 2));
            oZvjF.addStatusEffect(new StatusEffectInstance(StatusEffects.ABSORPTION, (int)cX.aaJ("g", (int)20063, (long)(0x6EA50FBE200324EDL ^ l2)), 4));
            bl2 = oZvjF.addStatusEffect(new StatusEffectInstance(StatusEffects.RESISTANCE, (int)cX.aaJ("g", (int)20063, (long)(0x6EA50FBE200324EDL ^ l2)), 1));
        }
    }

    private void aaB() {
        block8: {
            ClientWorld clientWorld;
            block7: {
                long l2 = KKUeM ^ 0x76A4C924F314L;
                iS[] iSArray = dh.afl();
                try {
                    if (oZvjF == null) {
                        return;
                    }
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
                try {
                    try {
                        clientWorld = rD.dlmvG.world;
                        if (iSArray != null) break block7;
                        if (clientWorld == null) break block8;
                    }
                    catch (NumberFormatException numberFormatException) {
                        throw cX.aaC(numberFormatException);
                    }
                    clientWorld = rD.dlmvG.world;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
            }
            clientWorld.removeEntity(oZvjF.getId(), Entity.RemovalReason.DISCARDED);
        }
        oZvjF.setRemoved(Entity.RemovalReason.DISCARDED);
        oZvjF = null;
    }

    public cX$ss aao() {
        return this.SBCbE;
    }

    public void aaq(String string) {
        this.NRFCF.Up(string);
    }

    /*
     * Exception decompiling
     */
    public boolean aar(String var1_1, ItemStack var2_2) {
        /*
         * This method has failed to decompile.  When submitting a bug report, please provide this stack trace, and (if you hold appropriate legal rights) the relevant class file.
         * 
         * org.benf.cfr.reader.util.ConfusedCFRException: Tried to end blocks [4[TRYBLOCK]], but top level block is 32[SWITCH]
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.processEndingBlocks(Op04StructuredStatement.java:435)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op04StructuredStatement.buildNestedBlocks(Op04StructuredStatement.java:484)
         *     at org.benf.cfr.reader.bytecode.analysis.opgraph.Op03SimpleStatement.createInitialStructuredBlock(Op03SimpleStatement.java:736)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisInner(CodeAnalyser.java:850)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysisOrWrapFail(CodeAnalyser.java:278)
         *     at org.benf.cfr.reader.bytecode.CodeAnalyser.getAnalysis(CodeAnalyser.java:201)
         *     at org.benf.cfr.reader.entities.attributes.AttributeCode.analyse(AttributeCode.java:94)
         *     at org.benf.cfr.reader.entities.Method.analyse(Method.java:531)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseMid(ClassFile.java:1055)
         *     at org.benf.cfr.reader.entities.ClassFile.analyseTop(ClassFile.java:942)
         *     at org.benf.cfr.reader.Driver.doJarVersionTypes(Driver.java:257)
         *     at org.benf.cfr.reader.Driver.doJar(Driver.java:139)
         *     at org.benf.cfr.reader.CfrDriverImpl.analyse(CfrDriverImpl.java:76)
         *     at org.benf.cfr.reader.Main.main(Main.java:54)
         */
        throw new IllegalStateException("Decompilation failed");
    }

    private static CallSite aaG(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cX" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private void aay(boolean bl2, Hand hand) {
        boolean bl3;
        int n2;
        LivingEntityAccessor livingEntityAccessor;
        block9: {
            block8: {
                OtherClientPlayerEntity otherClientPlayerEntity;
                block6: {
                    block7: {
                        long l2 = KKUeM ^ 0x4B94DA5B4D03L;
                        iS[] iSArray = dh.afl();
                        try {
                            otherClientPlayerEntity = oZvjF;
                            if (iSArray != null) break block6;
                            if (otherClientPlayerEntity != null) break block7;
                        }
                        catch (NumberFormatException numberFormatException) {
                            throw cX.aaC(numberFormatException);
                        }
                        return;
                    }
                    otherClientPlayerEntity = oZvjF;
                }
                LivingEntityAccessor livingEntityAccessor2 = (LivingEntityAccessor)otherClientPlayerEntity;
                try {
                    try {
                        livingEntityAccessor2.callSetLivingEntityFlag(1, bl2);
                        livingEntityAccessor = livingEntityAccessor2;
                        n2 = 2;
                        if (!bl2 || hand != Hand.OFF_HAND) break block8;
                    }
                    catch (NumberFormatException numberFormatException) {
                        throw cX.aaC(numberFormatException);
                    }
                    bl3 = true;
                    break block9;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
            }
            bl3 = false;
        }
        livingEntityAccessor.callSetLivingEntityFlag(n2, bl3);
    }

    @hG
    public void aat(gH.th th2) {
        block88: {
            OtherClientPlayerEntity otherClientPlayerEntity;
            block86: {
                boolean bl2;
                iS[] iSArray;
                block84: {
                    block85: {
                        cX cX2;
                        ItemStack itemStack;
                        block83: {
                            cX$ss cX$ss;
                            cX$ss cX$ss2;
                            block80: {
                                block82: {
                                    block81: {
                                        block76: {
                                            block77: {
                                                block89: {
                                                    OtherClientPlayerEntity otherClientPlayerEntity2;
                                                    block79: {
                                                        boolean bl3;
                                                        block78: {
                                                            cX cX3;
                                                            block72: {
                                                                block73: {
                                                                    block75: {
                                                                        OtherClientPlayerEntity otherClientPlayerEntity3;
                                                                        block74: {
                                                                            boolean bl4;
                                                                            block69: {
                                                                                block71: {
                                                                                    block70: {
                                                                                        block66: {
                                                                                            block68: {
                                                                                                OtherClientPlayerEntity otherClientPlayerEntity4;
                                                                                                block67: {
                                                                                                    long l2 = KKUeM ^ 0x6818AF5CFB75L;
                                                                                                    iSArray = dh.afl();
                                                                                                    try {
                                                                                                        if (oZvjF == null) {
                                                                                                            return;
                                                                                                        }
                                                                                                    }
                                                                                                    catch (NumberFormatException numberFormatException) {
                                                                                                        throw cX.aaC(numberFormatException);
                                                                                                    }
                                                                                                    try {
                                                                                                        try {
                                                                                                            try {
                                                                                                                if (this.SBCbE != cX$ss.uksqJ) break block66;
                                                                                                                otherClientPlayerEntity4 = oZvjF;
                                                                                                                if (iSArray != null) break block67;
                                                                                                            }
                                                                                                            catch (NumberFormatException numberFormatException) {
                                                                                                                throw cX.aaC(numberFormatException);
                                                                                                            }
                                                                                                            if (!otherClientPlayerEntity4.isUsingItem()) break block68;
                                                                                                        }
                                                                                                        catch (NumberFormatException numberFormatException) {
                                                                                                            throw cX.aaC(numberFormatException);
                                                                                                        }
                                                                                                        otherClientPlayerEntity4 = oZvjF;
                                                                                                    }
                                                                                                    catch (NumberFormatException numberFormatException) {
                                                                                                        throw cX.aaC(numberFormatException);
                                                                                                    }
                                                                                                }
                                                                                                otherClientPlayerEntity4.clearActiveItem();
                                                                                                this.aay(false, this.RGVXb);
                                                                                            }
                                                                                            return;
                                                                                        }
                                                                                        itemStack = oZvjF.getStackInHand(this.RGVXb);
                                                                                        try {
                                                                                            try {
                                                                                                try {
                                                                                                    try {
                                                                                                        try {
                                                                                                            bl4 = itemStack.isEmpty();
                                                                                                            if (iSArray != null) break block69;
                                                                                                            if (!bl4) break block70;
                                                                                                        }
                                                                                                        catch (NumberFormatException numberFormatException) {
                                                                                                            throw cX.aaC(numberFormatException);
                                                                                                        }
                                                                                                        cX3 = this;
                                                                                                        if (iSArray != null) break block71;
                                                                                                    }
                                                                                                    catch (NumberFormatException numberFormatException) {
                                                                                                        throw cX.aaC(numberFormatException);
                                                                                                    }
                                                                                                    if (cX3.SBCbE != cX$ss.vNDXP) break block70;
                                                                                                }
                                                                                                catch (NumberFormatException numberFormatException) {
                                                                                                    throw cX.aaC(numberFormatException);
                                                                                                }
                                                                                                bl4 = this.aHWam.isEmpty();
                                                                                                if (iSArray != null) break block69;
                                                                                            }
                                                                                            catch (NumberFormatException numberFormatException) {
                                                                                                throw cX.aaC(numberFormatException);
                                                                                            }
                                                                                            if (bl4) break block70;
                                                                                        }
                                                                                        catch (NumberFormatException numberFormatException) {
                                                                                            throw cX.aaC(numberFormatException);
                                                                                        }
                                                                                        oZvjF.setStackInHand(this.RGVXb, this.aHWam.copy());
                                                                                        itemStack = oZvjF.getStackInHand(this.RGVXb);
                                                                                    }
                                                                                    cX3 = this;
                                                                                }
                                                                                try {
                                                                                    if (iSArray != null) break block72;
                                                                                    bl4 = cX3.aax(itemStack, this.SBCbE);
                                                                                }
                                                                                catch (NumberFormatException numberFormatException) {
                                                                                    throw cX.aaC(numberFormatException);
                                                                                }
                                                                            }
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        if (bl4) break block73;
                                                                                        otherClientPlayerEntity3 = oZvjF;
                                                                                        if (iSArray != null) break block74;
                                                                                    }
                                                                                    catch (NumberFormatException numberFormatException) {
                                                                                        throw cX.aaC(numberFormatException);
                                                                                    }
                                                                                    if (!otherClientPlayerEntity3.isUsingItem()) break block75;
                                                                                }
                                                                                catch (NumberFormatException numberFormatException) {
                                                                                    throw cX.aaC(numberFormatException);
                                                                                }
                                                                                otherClientPlayerEntity3 = oZvjF;
                                                                            }
                                                                            catch (NumberFormatException numberFormatException) {
                                                                                throw cX.aaC(numberFormatException);
                                                                            }
                                                                        }
                                                                        otherClientPlayerEntity3.clearActiveItem();
                                                                        this.aay(false, this.RGVXb);
                                                                    }
                                                                    return;
                                                                }
                                                                cX3 = this;
                                                            }
                                                            try {
                                                                try {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                cX$ss2 = cX3.SBCbE;
                                                                                cX$ss = cX$ss.RymlV;
                                                                                if (iSArray != null) break block76;
                                                                                if (cX$ss2 != cX$ss) break block77;
                                                                            }
                                                                            catch (NumberFormatException numberFormatException) {
                                                                                throw cX.aaC(numberFormatException);
                                                                            }
                                                                            bl3 = oZvjF.getItemCooldownManager().isCoolingDown(Items.SHIELD.getDefaultStack());
                                                                            if (iSArray != null) break block78;
                                                                        }
                                                                        catch (NumberFormatException numberFormatException) {
                                                                            throw cX.aaC(numberFormatException);
                                                                        }
                                                                        if (!bl3) break block77;
                                                                    }
                                                                    catch (NumberFormatException numberFormatException) {
                                                                        throw cX.aaC(numberFormatException);
                                                                    }
                                                                    otherClientPlayerEntity2 = oZvjF;
                                                                    if (iSArray != null) break block79;
                                                                }
                                                                catch (NumberFormatException numberFormatException) {
                                                                    throw cX.aaC(numberFormatException);
                                                                }
                                                                bl3 = otherClientPlayerEntity2.isUsingItem();
                                                            }
                                                            catch (NumberFormatException numberFormatException) {
                                                                throw cX.aaC(numberFormatException);
                                                            }
                                                        }
                                                        if (!bl3) break block89;
                                                        otherClientPlayerEntity2 = oZvjF;
                                                    }
                                                    otherClientPlayerEntity2.clearActiveItem();
                                                    this.aay(false, this.RGVXb);
                                                }
                                                return;
                                            }
                                            cX$ss2 = this.SBCbE;
                                            cX$ss = cX$ss.vNDXP;
                                        }
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        if (iSArray != null) break block80;
                                                        if (cX$ss2 != cX$ss) break block81;
                                                    }
                                                    catch (NumberFormatException numberFormatException) {
                                                        throw cX.aaC(numberFormatException);
                                                    }
                                                    cX2 = this;
                                                    if (iSArray != null) break block82;
                                                }
                                                catch (NumberFormatException numberFormatException) {
                                                    throw cX.aaC(numberFormatException);
                                                }
                                                if (!cX2.aHWam.isEmpty()) break block81;
                                            }
                                            catch (NumberFormatException numberFormatException) {
                                                throw cX.aaC(numberFormatException);
                                            }
                                            this.aHWam = itemStack.copy();
                                        }
                                        catch (NumberFormatException numberFormatException) {
                                            throw cX.aaC(numberFormatException);
                                        }
                                    }
                                    cX2 = this;
                                }
                                try {
                                    if (iSArray != null) break block83;
                                    cX$ss2 = cX2.SBCbE;
                                    cX$ss = cX$ss.vNDXP;
                                }
                                catch (NumberFormatException numberFormatException) {
                                    throw cX.aaC(numberFormatException);
                                }
                            }
                            if (cX$ss2 != cX$ss) break block85;
                            cX2 = this;
                        }
                        try {
                            try {
                                try {
                                    bl2 = cX2.aHWam.isEmpty();
                                    if (iSArray != null) break block84;
                                    if (bl2) break block85;
                                }
                                catch (NumberFormatException numberFormatException) {
                                    throw cX.aaC(numberFormatException);
                                }
                                bl2 = itemStack.isOf(this.aHWam.getItem());
                                if (iSArray != null) break block84;
                            }
                            catch (NumberFormatException numberFormatException) {
                                throw cX.aaC(numberFormatException);
                            }
                            if (bl2) break block85;
                        }
                        catch (NumberFormatException numberFormatException) {
                            throw cX.aaC(numberFormatException);
                        }
                        oZvjF.setStackInHand(this.RGVXb, this.aHWam.copy());
                        itemStack = oZvjF.getStackInHand(this.RGVXb);
                    }
                    try {
                        otherClientPlayerEntity = oZvjF;
                        if (iSArray != null) break block86;
                        bl2 = otherClientPlayerEntity.isUsingItem();
                    }
                    catch (NumberFormatException numberFormatException) {
                        throw cX.aaC(numberFormatException);
                    }
                }
                try {
                    block87: {
                        try {
                            try {
                                if (!bl2) break block87;
                                otherClientPlayerEntity = oZvjF;
                                if (iSArray != null) break block86;
                            }
                            catch (NumberFormatException numberFormatException) {
                                throw cX.aaC(numberFormatException);
                            }
                            if (otherClientPlayerEntity.getActiveHand() == this.RGVXb) break block88;
                        }
                        catch (NumberFormatException numberFormatException) {
                            throw cX.aaC(numberFormatException);
                        }
                    }
                    otherClientPlayerEntity = oZvjF;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
            }
            otherClientPlayerEntity.setCurrentHand(this.RGVXb);
            this.aay(true, this.RGVXb);
        }
    }

    /*
     * Enabled aggressive block sorting
     * Enabled unnecessary exception pruning
     * Enabled aggressive exception aggregation
     */
    private boolean aax(ItemStack itemStack, cX$ss cX$ss) {
        boolean bl2;
        cX$ss cX$ss2;
        cX$ss cX$ss3;
        iS[] iSArray;
        block15: {
            block14: {
                long l2 = KKUeM ^ 0x7C478233670BL;
                iSArray = dh.afl();
                try {
                    boolean bl3 = itemStack.isEmpty();
                    if (iSArray != null) return bl3;
                    if (!bl3) break block14;
                    return false;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
            }
            try {
                try {
                    cX$ss3 = cX$ss;
                    cX$ss2 = cX$ss.RymlV;
                    if (iSArray != null) break block15;
                    if (cX$ss3 == cX$ss2) {
                        return itemStack.isOf(Items.SHIELD);
                    }
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
            }
            catch (NumberFormatException numberFormatException) {
                throw cX.aaC(numberFormatException);
            }
            cX$ss3 = cX$ss;
            cX$ss2 = cX$ss.vNDXP;
        }
        try {
            try {
                if (cX$ss3 != cX$ss2) return false;
                bl2 = cX$st.uFllB[itemStack.getUseAction().ordinal()];
                if (iSArray != null) return bl2;
            }
            catch (NumberFormatException numberFormatException) {
                throw cX.aaC(numberFormatException);
            }
        }
        catch (NumberFormatException numberFormatException) {
            throw cX.aaC(numberFormatException);
        }
        switch (bl2) {
            case 1: 
            case 2: {
                return true;
            }
        }
        return false;
    }

    /*
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private boolean aav(String string, ItemStack itemStack) {
        Integer n2;
        block29: {
            Integer n3;
            iS[] iSArray;
            long l2;
            block28: {
                boolean bl2;
                String string2;
                block24: {
                    block25: {
                        Integer n4;
                        block27: {
                            Integer n5;
                            block26: {
                                l2 = KKUeM ^ 0x7F986EF0C8CBL;
                                string2 = string;
                                iSArray = dh.afl();
                                try {
                                    bl2 = string2.startsWith((String)((Object)"hotbar"));
                                    if (iSArray != null) break block24;
                                    if (!bl2) break block25;
                                }
                                catch (NumberFormatException numberFormatException) {
                                    throw cX.aaC(numberFormatException);
                                }
                                String string3 = string2.substring(((String)((Object)cX.aaG("w", (int)2473, (long)(0x2C69E28E9E02CE82L ^ l2)))).length());
                                n4 = this.aaw(string3);
                                try {
                                    n5 = n4;
                                    if (iSArray != null) break block26;
                                    if (n5 == null) return 0 != 0;
                                }
                                catch (NumberFormatException numberFormatException) {
                                    throw cX.aaC(numberFormatException);
                                }
                                n5 = n4;
                            }
                            try {
                                try {
                                    boolean bl3;
                                    try {
                                        try {
                                            int n6 = n5;
                                            if (iSArray != null) return n6 != 0;
                                            if (n6 < 1) return 0 != 0;
                                        }
                                        catch (NumberFormatException numberFormatException) {
                                            throw cX.aaC(numberFormatException);
                                        }
                                        bl3 = n4.intValue();
                                        if (iSArray != null) return bl3;
                                    }
                                    catch (NumberFormatException numberFormatException) {
                                        throw cX.aaC(numberFormatException);
                                    }
                                    if (bl3 <= cX.aaJ("g", (int)14062, (long)(0x42F03AA3B54FF0EL ^ l2))) break block27;
                                    return 0 != 0;
                                }
                                catch (NumberFormatException numberFormatException) {
                                    throw cX.aaC(numberFormatException);
                                }
                            }
                            catch (NumberFormatException numberFormatException) {
                                throw cX.aaC(numberFormatException);
                            }
                        }
                        oZvjF.getInventory().setStack(n4 - 1, itemStack);
                        return true;
                    }
                    bl2 = string2.startsWith((String)((Object)cX.aaG("w", (int)17884, (long)(0x168756BF0C9802F2L ^ l2))));
                }
                try {
                    if (iSArray != null) return bl2;
                    if (!bl2) return false;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
                String string4 = string2.substring(((String)((Object)cX.aaG("w", (int)11637, (long)(0x2DE8D30409EFEA59L ^ l2)))).length());
                n2 = this.aaw(string4);
                try {
                    n3 = n2;
                    if (iSArray != null) break block28;
                    if (n3 == null) return 0 != 0;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
                n3 = n2;
            }
            try {
                try {
                    boolean bl4;
                    try {
                        try {
                            int n7 = n3;
                            if (iSArray != null) return n7 != 0;
                            if (n7 < 0) return 0 != 0;
                        }
                        catch (NumberFormatException numberFormatException) {
                            throw cX.aaC(numberFormatException);
                        }
                        bl4 = n2.intValue();
                        if (iSArray != null) return bl4;
                    }
                    catch (NumberFormatException numberFormatException) {
                        throw cX.aaC(numberFormatException);
                    }
                    if (bl4 <= cX.aaJ("g", (int)2472, (long)(0x6714AEC8AD7C4050L ^ l2))) break block29;
                    return 0 != 0;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
            }
            catch (NumberFormatException numberFormatException) {
                throw cX.aaC(numberFormatException);
            }
        }
        oZvjF.getInventory().setStack(n2.intValue(), itemStack);
        return true;
    }

    private void aaz() {
        double d2;
        block21: {
            int n2;
            block20: {
                int n3;
                iS[] iSArray;
                block18: {
                    block19: {
                        int n4;
                        block16: {
                            ItemStack itemStack;
                            block17: {
                                block14: {
                                    block15: {
                                        MinecraftClient minecraftClient;
                                        block12: {
                                            block13: {
                                                long l2 = KKUeM ^ 0x1ED1E6635F4EL;
                                                iSArray = dh.afl();
                                                try {
                                                    try {
                                                        minecraftClient = rD.dlmvG;
                                                        if (iSArray != null) break block12;
                                                        if (minecraftClient.isConnectedToLocalServer()) break block13;
                                                    }
                                                    catch (NumberFormatException numberFormatException) {
                                                        throw cX.aaC(numberFormatException);
                                                    }
                                                    return;
                                                }
                                                catch (NumberFormatException numberFormatException) {
                                                    throw cX.aaC(numberFormatException);
                                                }
                                            }
                                            minecraftClient = rD.dlmvG;
                                        }
                                        itemStack = minecraftClient.player.getMainHandStack();
                                        try {
                                            n4 = jc.bzq(itemStack);
                                            if (iSArray != null) break block14;
                                            if (n4 != 0) break block15;
                                        }
                                        catch (NumberFormatException numberFormatException) {
                                            throw cX.aaC(numberFormatException);
                                        }
                                        return;
                                    }
                                    n4 = jc.bzw((LivingEntity)rD.dlmvG.player);
                                }
                                try {
                                    if (iSArray != null) break block16;
                                    if (n4 != 0) break block17;
                                }
                                catch (NumberFormatException numberFormatException) {
                                    throw cX.aaC(numberFormatException);
                                }
                                return;
                            }
                            n4 = jh.bCh(itemStack, (RegistryKey<Enchantment>)Enchantments.WIND_BURST);
                        }
                        n2 = n4;
                        try {
                            n3 = n2;
                            if (iSArray != null) break block18;
                            if (n3 > 0) break block19;
                        }
                        catch (NumberFormatException numberFormatException) {
                            throw cX.aaC(numberFormatException);
                        }
                        n2 = 1;
                    }
                    n3 = n2;
                }
                if (n3 > AekfX.length) break block20;
                d2 = AekfX[n2 - 1];
                if (iSArray == null) break block21;
            }
            d2 = 1.5 + (double)(n2 - 1) * 0.35;
        }
        rD.dlmvG.player.setVelocity(0.0, d2, 0.0);
        rD.dlmvG.player.fallDistance = 0.0;
    }

    /*
     * Loose catch block
     * Enabled force condition propagation
     * Lifted jumps to return sites
     */
    private Integer aaw(String string) {
        int n2;
        block9: {
            String string2;
            iS[] iSArray;
            block8: {
                long l2 = KKUeM ^ 0x5116EB84F691L;
                iSArray = dh.afl();
                try {
                    string2 = string;
                    if (iSArray != null) break block8;
                    if (string2 == null) return null;
                }
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
                string2 = string;
            }
            n2 = string2.isBlank();
            if (iSArray != null) return n2;
            try {
                if (n2 == 0) break block9;
                return null;
                catch (NumberFormatException numberFormatException) {
                    throw cX.aaC(numberFormatException);
                }
            }
            catch (NumberFormatException numberFormatException) {
                throw cX.aaC(numberFormatException);
            }
        }
        try {
            n2 = Integer.parseInt(string);
            return n2;
        }
        catch (NumberFormatException numberFormatException) {
            return null;
        }
    }

    private static int aaI(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cX.aaH(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static String aaE(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1584;
        if (uCanr[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])vRiTu.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    vRiTu.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cX", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = MQXRm[n3].getBytes("ISO-8859-1");
            cX.uCanr[n3] = cX.aaD(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return uCanr[n3];
    }

    @hG
    public void aau(hw.tv tv2) {
        block26: {
            block31: {
                block34: {
                    Object object;
                    block33: {
                        boolean bl2;
                        block32: {
                            iS[] iSArray;
                            block30: {
                                boolean bl3;
                                block29: {
                                    block27: {
                                        OtherClientPlayerEntity otherClientPlayerEntity;
                                        block28: {
                                            long l2 = KKUeM ^ 0x36F2BC240CA0L;
                                            iSArray = dh.afl();
                                            try {
                                                if (!this.bab()) {
                                                    return;
                                                }
                                            }
                                            catch (NumberFormatException numberFormatException) {
                                                throw cX.aaC(numberFormatException);
                                            }
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            if (tv2.bdm() != oZvjF) break block26;
                                                            this.aaz();
                                                            if (this.SBCbE != cX$ss.RymlV) break block27;
                                                        }
                                                        catch (NumberFormatException numberFormatException) {
                                                            throw cX.aaC(numberFormatException);
                                                        }
                                                        otherClientPlayerEntity = oZvjF;
                                                        if (iSArray != null) break block28;
                                                    }
                                                    catch (NumberFormatException numberFormatException) {
                                                        throw cX.aaC(numberFormatException);
                                                    }
                                                    if (!otherClientPlayerEntity.isUsingItem()) break block27;
                                                }
                                                catch (NumberFormatException numberFormatException) {
                                                    throw cX.aaC(numberFormatException);
                                                }
                                                otherClientPlayerEntity = oZvjF;
                                            }
                                            catch (NumberFormatException numberFormatException) {
                                                throw cX.aaC(numberFormatException);
                                            }
                                        }
                                        try {
                                            if (otherClientPlayerEntity.getActiveHand() != this.RGVXb) break block27;
                                            bl3 = true;
                                            break block29;
                                        }
                                        catch (NumberFormatException numberFormatException) {
                                            throw cX.aaC(numberFormatException);
                                        }
                                    }
                                    bl3 = false;
                                }
                                boolean bl4 = bl3;
                                boolean bl5 = jg.bBL((Entity)oZvjF, (Entity)rD.dlmvG.player);
                                try {
                                    bl2 = bl4;
                                    if (iSArray != null) break block30;
                                    if (!bl2) break block31;
                                }
                                catch (NumberFormatException numberFormatException) {
                                    throw cX.aaC(numberFormatException);
                                }
                                bl2 = bl5;
                            }
                            try {
                                try {
                                    try {
                                        if (iSArray != null) break block32;
                                        if (!bl2) break block31;
                                    }
                                    catch (NumberFormatException numberFormatException) {
                                        throw cX.aaC(numberFormatException);
                                    }
                                    object = rD.dlmvG.player.getMainHandStack();
                                    if (iSArray != null) break block33;
                                }
                                catch (NumberFormatException numberFormatException) {
                                    throw cX.aaC(numberFormatException);
                                }
                                bl2 = jc.bzo(object);
                            }
                            catch (NumberFormatException numberFormatException) {
                                throw cX.aaC(numberFormatException);
                            }
                        }
                        try {
                            if (!bl2) break block34;
                            oZvjF.clearActiveItem();
                            this.aay(false, this.RGVXb);
                            object = rD.dlmvG.player.getMainHandStack().get(DataComponentTypes.WEAPON);
                        }
                        catch (NumberFormatException numberFormatException) {
                            throw cX.aaC(numberFormatException);
                        }
                    }
                    WeaponComponent weaponComponent = (WeaponComponent)object;
                    try {
                        if (weaponComponent != null) {
                            oZvjF.getItemCooldownManager().set(Items.SHIELD.getDefaultStack(), (int)(weaponComponent.disableBlockingForSeconds() * 20.0f));
                        }
                    }
                    catch (NumberFormatException numberFormatException) {
                        throw cX.aaC(numberFormatException);
                    }
                }
                return;
            }
            oZvjF.onDamaged(rD.dlmvG.world.getDamageSources().playerAttack((PlayerEntity)rD.dlmvG.player));
        }
    }

    private static int aaH(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1B4F;
        if (xjABA[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = UzutJ[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])LLyow.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    LLyow.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cX", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cX.xjABA[n3] = n4;
        }
        return xjABA[n3];
    }

    private static Object aaF(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cX.aaE(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String aaD(byte[] byArray) {
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

    @Override
    public void YO() {
        super.YO();
        this.aaB();
        this.SBCbE = cX$ss.uksqJ;
        this.aHWam = ItemStack.EMPTY;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cX.class, "aaI", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_1() {
        try {
            return MethodHandles.lookup().findStatic(cX.class, "aaF", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

