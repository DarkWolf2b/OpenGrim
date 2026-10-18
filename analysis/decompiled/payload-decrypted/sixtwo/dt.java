/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gl.RenderPipelines
 *  net.minecraft.client.gui.hud.InGameHud
 *  net.minecraft.component.type.ItemEnchantmentsComponent
 *  net.minecraft.enchantment.Enchantment
 *  net.minecraft.enchantment.EnchantmentHelper
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.ItemEntity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.effect.StatusEffectInstance
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.ItemStack
 *  net.minecraft.registry.entry.RegistryEntry
 *  net.minecraft.util.Identifier
 *  net.minecraft.util.math.Vec2f
 *  net.minecraft.util.math.Vec3d
 *  org.joml.Vector4d
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashMap;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.gl.RenderPipelines;
import net.minecraft.client.gui.hud.InGameHud;
import net.minecraft.component.type.ItemEnchantmentsComponent;
import net.minecraft.enchantment.Enchantment;
import net.minecraft.enchantment.EnchantmentHelper;
import net.minecraft.entity.Entity;
import net.minecraft.entity.ItemEntity;
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.effect.StatusEffectInstance;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.ItemStack;
import net.minecraft.registry.entry.RegistryEntry;
import net.minecraft.util.Identifier;
import net.minecraft.util.math.Vec2f;
import net.minecraft.util.math.Vec3d;
import org.joml.Vector4d;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.cJ;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.cv;
import sixtwo.cw;
import sixtwo.dh;
import sixtwo.dt$sH;
import sixtwo.fS;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.gi;
import sixtwo.gk;
import sixtwo.hG;
import sixtwo.iS;
import sixtwo.jH;
import sixtwo.jI;
import sixtwo.jf;
import sixtwo.jg;
import sixtwo.ji;
import sixtwo.ju;
import sixtwo.jv;
import sixtwo.jw;
import sixtwo.lA;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lG;
import sixtwo.ld;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.mY;
import sixtwo.mZ;
import sixtwo.mr;
import sixtwo.oP;
import sixtwo.rD;

public class dt
extends gg
implements lA,
lG {
    private final cv bpDue;
    private final cw jtzDi;
    private final cw VPgLm;
    private final cv vjqkH;
    private final cw vExdX;
    private final cw zHaUb;
    private final cw gxggV;
    private final cw AbmMN;
    private final cw yhuFt;
    private final cw JKWzw;
    private final cw ZhrcH;
    private final cw bhXKP;
    private final cw VrMbh;
    private final cC hSuAc;
    private final cJ uuLKb;
    private final cG wRBRi;
    private final cG uxHfK;
    private final cG weKln;
    private final ct bcjCz;
    private final cu OHUtJ;
    private final cu bgoRN;
    private final cG MAUHJ;
    private final cG JdaIF;
    private final cG lFuNf;
    private final cG BmdVM;
    private final cG bocCI;
    private final cJ KjFun;
    private static final long JzNel;
    private static final String[] LQnFM;
    private static final String[] yCgSU;
    private static final Map bUAHN;
    private static final long[] BYKvc;
    private static final Integer[] WeGki;
    private static final Map JRvoE;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public dt() {
        long l2 = JzNel ^ 0x5E8D36DF3FB7L;
        super(gf.aZL((int)97, false, gh.nOCvV));
        int[] nArray = new int[10];
        nArray[0] = (int)82;
        nArray[1] = (int)101;
        nArray[2] = (int)110;
        nArray[3] = (int)100;
        nArray[4] = (int)101;
        nArray[5] = (int)114;
        nArray[6] = (int)32;
        nArray[7] = (int)70;
        nArray[8] = (int)111;
        nArray[9] = (int)114;
        this.bpDue = new cv(this, mr.clS(nArray));
        int[] nArray2 = new int[7];
        nArray2[0] = (int)80;
        nArray2[1] = (int)108;
        nArray2[2] = (int)97;
        nArray2[3] = (int)121;
        nArray2[4] = (int)101;
        nArray2[5] = (int)114;
        nArray2[6] = (int)115;
        this.jtzDi = new cw(this.bpDue, mr.clS(nArray2)).Tz();
        this.VPgLm = new cw(this.bpDue, mr.clS(new int[]{(int)73, (int)116, (int)101, (int)109, (int)115}));
        int[] nArray3 = new int[14];
        nArray3[0] = (int)73;
        nArray3[1] = (int)110;
        nArray3[2] = (int)102;
        nArray3[3] = (int)111;
        nArray3[4] = (int)32;
        nArray3[5] = (int)84;
        nArray3[6] = (int)111;
        nArray3[7] = (int)32;
        nArray3[8] = (int)82;
        nArray3[9] = (int)101;
        nArray3[10] = (int)110;
        nArray3[11] = (int)100;
        nArray3[12] = (int)101;
        nArray3[13] = (int)114;
        this.vjqkH = new cv(this, mr.clS(nArray3));
        this.vExdX = new cw(this.vjqkH, mr.clS(new int[]{(int)78, (int)97, (int)109, (int)101})).Tz();
        int[] nArray4 = new int[6];
        nArray4[0] = (int)72;
        nArray4[1] = (int)101;
        nArray4[2] = (int)97;
        nArray4[3] = (int)108;
        nArray4[4] = (int)116;
        nArray4[5] = (int)104;
        this.zHaUb = new cw(this.vjqkH, mr.clS(nArray4)).Tz();
        int[] nArray5 = new int[10];
        nArray5[0] = (int)65;
        nArray5[1] = (int)98;
        nArray5[2] = (int)115;
        nArray5[3] = (int)111;
        nArray5[4] = (int)114;
        nArray5[5] = (int)112;
        nArray5[6] = (int)116;
        nArray5[7] = (int)105;
        nArray5[8] = (int)111;
        nArray5[9] = (int)110;
        this.gxggV = new cw(this.vjqkH, mr.clS(nArray5)).Tz();
        int[] nArray6 = new int[8];
        nArray6[0] = (int)68;
        nArray6[1] = (int)105;
        nArray6[2] = (int)115;
        nArray6[3] = (int)116;
        nArray6[4] = (int)97;
        nArray6[5] = (int)110;
        nArray6[6] = (int)99;
        nArray6[7] = (int)101;
        this.AbmMN = new cw(this.vjqkH, mr.clS(nArray6)).Tz();
        this.yhuFt = new cw(this.vjqkH, mr.clS(new int[]{(int)80, (int)105, (int)110, (int)103}));
        this.JKWzw = new cw(this.vjqkH, mr.clS(new int[]{(int)65, (int)114, (int)109, (int)111, (int)114}));
        int[] nArray7 = new int[10];
        nArray7[0] = (int)72;
        nArray7[1] = (int)97;
        nArray7[2] = (int)110;
        nArray7[3] = (int)100;
        nArray7[4] = (int)32;
        nArray7[5] = (int)73;
        nArray7[6] = (int)116;
        nArray7[7] = (int)101;
        nArray7[8] = (int)109;
        nArray7[9] = (int)115;
        this.ZhrcH = new cw(this.vjqkH, mr.clS(nArray7));
        int[] nArray8 = new int[8];
        nArray8[0] = (int)69;
        nArray8[1] = (int)110;
        nArray8[2] = (int)99;
        nArray8[3] = (int)104;
        nArray8[4] = (int)97;
        nArray8[5] = (int)110;
        nArray8[6] = (int)116;
        nArray8[7] = (int)115;
        this.bhXKP = new cw(this.vjqkH, mr.clS(nArray8));
        int[] nArray9 = new int[7];
        nArray9[0] = (int)69;
        nArray9[1] = (int)102;
        nArray9[2] = (int)102;
        nArray9[3] = (int)101;
        nArray9[4] = (int)99;
        nArray9[5] = (int)116;
        nArray9[6] = (int)115;
        this.VrMbh = new cw(this.vjqkH, mr.clS(nArray9));
        this.hSuAc = new cC(this, mr.clS(new int[]{(int)83, (int)99, (int)97, (int)108, (int)101})).Vy(0.01).Vw(0.2).Vx(2.0).VA(1.0);
        int[] nArray10 = new int[9];
        nArray10[0] = (int)67;
        nArray10[1] = (int)111;
        nArray10[2] = (int)110;
        nArray10[3] = (int)110;
        nArray10[4] = (int)101;
        nArray10[5] = (int)99;
        nArray10[6] = (int)116;
        nArray10[7] = (int)101;
        nArray10[8] = (int)100;
        this.uuLKb = new cJ(this, mr.clS(nArray10)).WE(false);
        int[] nArray11 = new int[16];
        nArray11[0] = (int)66;
        nArray11[1] = (int)97;
        nArray11[2] = (int)99;
        nArray11[3] = (int)107;
        nArray11[4] = (int)103;
        nArray11[5] = (int)114;
        nArray11[6] = (int)111;
        nArray11[7] = (int)117;
        nArray11[8] = (int)110;
        nArray11[9] = (int)100;
        nArray11[10] = (int)32;
        nArray11[11] = (int)67;
        nArray11[12] = (int)111;
        nArray11[13] = (int)108;
        nArray11[14] = (int)111;
        nArray11[15] = (int)114;
        this.wRBRi = new cG(this, mr.clS(nArray11)).Uc(mG.QHTxQ.coa(140.0f).coh());
        this.uxHfK = new cG(this, mr.clS(new int[]{(int)67, (int)111, (int)108, (int)111, (int)114}));
        int[] nArray12 = new int[10];
        nArray12[0] = (int)78;
        nArray12[1] = (int)97;
        nArray12[2] = (int)109;
        nArray12[3] = (int)101;
        nArray12[4] = (int)32;
        nArray12[5] = (int)67;
        nArray12[6] = (int)111;
        nArray12[7] = (int)108;
        nArray12[8] = (int)111;
        nArray12[9] = (int)114;
        this.weKln = new cG(this, mr.clS(nArray12)).Uc(mG.cnP(191.0f, 75.0f, 74.0f).coh());
        int[] nArray13 = new int[17];
        nArray13[0] = (int)78;
        nArray13[1] = (int)97;
        nArray13[2] = (int)109;
        nArray13[3] = (int)101;
        nArray13[4] = (int)32;
        nArray13[5] = (int)68;
        nArray13[6] = (int)105;
        nArray13[7] = (int)115;
        nArray13[8] = (int)112;
        nArray13[9] = (int)108;
        nArray13[10] = (int)97;
        nArray13[11] = (int)121;
        nArray13[12] = (int)32;
        nArray13[13] = (int)77;
        nArray13[14] = (int)111;
        nArray13[15] = (int)100;
        nArray13[16] = (int)101;
        this.bcjCz = new ct(this, mr.clS(nArray13)).SO(1);
        int[] nArray14 = new int[12];
        nArray14[0] = (int)68;
        nArray14[1] = (int)105;
        nArray14[2] = (int)115;
        nArray14[3] = (int)112;
        nArray14[4] = (int)108;
        nArray14[5] = (int)97;
        nArray14[6] = (int)121;
        nArray14[7] = (int)32;
        nArray14[8] = (int)78;
        nArray14[9] = (int)97;
        nArray14[10] = (int)109;
        nArray14[11] = (int)101;
        this.OHUtJ = new cu(this.bcjCz, mr.clS(nArray14));
        int[] nArray15 = new int[13];
        nArray15[0] = (int)78;
        nArray15[1] = (int)105;
        nArray15[2] = (int)99;
        nArray15[3] = (int)107;
        nArray15[4] = (int)110;
        nArray15[5] = (int)97;
        nArray15[6] = (int)109;
        nArray15[7] = (int)101;
        nArray15[8] = (int)32;
        nArray15[9] = (int)79;
        nArray15[10] = (int)110;
        nArray15[11] = (int)108;
        nArray15[12] = (int)121;
        this.bgoRN = new cu(this.bcjCz, mr.clS(nArray15));
        int[] nArray16 = new int[17];
        nArray16[0] = (int)70;
        nArray16[1] = (int)114;
        nArray16[2] = (int)105;
        nArray16[3] = (int)101;
        nArray16[4] = (int)110;
        nArray16[5] = (int)100;
        nArray16[6] = (int)32;
        nArray16[7] = (int)78;
        nArray16[8] = (int)97;
        nArray16[9] = (int)109;
        nArray16[10] = (int)101;
        nArray16[11] = (int)32;
        nArray16[12] = (int)67;
        nArray16[13] = (int)111;
        nArray16[14] = (int)108;
        nArray16[15] = (int)111;
        nArray16[16] = (int)114;
        this.MAUHJ = new cG(this, mr.clS(nArray16)).Uc(mG.cnP(75.0f, 191.0f, 74.0f).coh());
        int[] nArray17 = new int[16];
        nArray17[0] = (int)65;
        nArray17[1] = (int)98;
        nArray17[2] = (int)115;
        nArray17[3] = (int)111;
        nArray17[4] = (int)114;
        nArray17[5] = (int)112;
        nArray17[6] = (int)116;
        nArray17[7] = (int)105;
        nArray17[8] = (int)111;
        nArray17[9] = (int)110;
        nArray17[10] = (int)32;
        nArray17[11] = (int)67;
        nArray17[12] = (int)111;
        nArray17[13] = (int)108;
        nArray17[14] = (int)111;
        nArray17[15] = (int)114;
        this.JdaIF = new cG(this, mr.clS(nArray17)).Uc(mG.cnP(255.0f, 196.0f, 76.0f).coh());
        int[] nArray18 = new int[14];
        nArray18[0] = (int)68;
        nArray18[1] = (int)105;
        nArray18[2] = (int)115;
        nArray18[3] = (int)116;
        nArray18[4] = (int)97;
        nArray18[5] = (int)110;
        nArray18[6] = (int)99;
        nArray18[7] = (int)101;
        nArray18[8] = (int)32;
        nArray18[9] = (int)67;
        nArray18[10] = (int)111;
        nArray18[11] = (int)108;
        nArray18[12] = (int)111;
        nArray18[13] = (int)114;
        this.lFuNf = new cG(this, mr.clS(nArray18)).Uc(mG.cnP(150.0f, 157.0f, 153.0f).coh());
        int[] nArray19 = new int[10];
        nArray19[0] = (int)80;
        nArray19[1] = (int)105;
        nArray19[2] = (int)110;
        nArray19[3] = (int)103;
        nArray19[4] = (int)32;
        nArray19[5] = (int)67;
        nArray19[6] = (int)111;
        nArray19[7] = (int)108;
        nArray19[8] = (int)111;
        nArray19[9] = (int)114;
        this.BmdVM = new cG(this, mr.clS(nArray19)).Uc(-1);
        int[] nArray20 = new int[12];
        nArray20[0] = (int)72;
        nArray20[1] = (int)101;
        nArray20[2] = (int)97;
        nArray20[3] = (int)108;
        nArray20[4] = (int)116;
        nArray20[5] = (int)104;
        nArray20[6] = (int)32;
        nArray20[7] = (int)67;
        nArray20[8] = (int)111;
        nArray20[9] = (int)108;
        nArray20[10] = (int)111;
        nArray20[11] = (int)114;
        this.bocCI = new cG(this, mr.clS(nArray20)).Uc(-1);
        int[] nArray21 = new int[11];
        nArray21[0] = (int)71;
        nArray21[1] = (int)114;
        nArray21[2] = (int)111;
        nArray21[3] = (int)117;
        nArray21[4] = (int)112;
        nArray21[5] = (int)32;
        nArray21[6] = (int)73;
        nArray21[7] = (int)116;
        nArray21[8] = (int)101;
        nArray21[9] = (int)109;
        nArray21[10] = (int)115;
        this.KjFun = new cJ(this, mr.clS(nArray21)).WE(true);
        this.uxHfK.Vf(this.VPgLm::TC);
        this.KjFun.Vf(this.VPgLm::TC);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        dt.JzNel = gb.aYR(9079704667440152341L, -4531979296725247371L, MethodHandles.lookup().lookupClass()).a(181127066555353L);
                        dt.bUAHN = new HashMap<K, V>(13);
                        var11 = dt.JzNel ^ 27712951068966L;
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
                        var20_3 = new String[4];
                        var18_4 = 0;
                        var17_5 = "\u00af^\\\u00ae\b\u00ca\u0080\u00f5\u0092j\u00e0\u0003] \u00fa\u00fb\u0010G\u00c0v\u0004\u0010\u0012\u00f7q\u0001\u00f1z><\u00d2\u00f43";
                        var19_6 = "\u00af^\\\u00ae\b\u00ca\u0080\u00f5\u0092j\u00e0\u0003] \u00fa\u00fb\u0010G\u00c0v\u0004\u0010\u0012\u00f7q\u0001\u00f1z><\u00d2\u00f43".length();
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
                            var20_3[var18_4++] = dt.aiw(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "Pt\u001e\u008c\u00a2\u00a3\u008e\u00c0\u0013w\u00837\u00de\u000e\u00b7$\u0010q\u00e8\u00c3#&\u00bd\u00cd3b\u0000hD\u00e6g\u0083\u008a";
                            var19_6 = "Pt\u001e\u008c\u00a2\u00a3\u008e\u00c0\u0013w\u00837\u00de\u000e\u00b7$\u0010q\u00e8\u00c3#&\u00bd\u00cd3b\u0000hD\u00e6g\u0083\u008a".length();
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
                            var20_3[var18_4++] = dt.aiw(var21_9).intern();
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
                dt.LQnFM = var20_3;
                dt.yCgSU = new String[4];
                dt.JRvoE = new HashMap<K, V>(13);
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
                var6_12 = new long[92];
                var3_13 = 0;
                var4_14 = "\u00e2\u0095\u001b6s\u00a0\u0096n\u000fjW#\u00ad\u00be#\u00de\u00c9\u00a8\u000f\r\u00c8\u00c5g\u00e8\u00ff\u008f`e\u0011W5\u0080\u0013\u00f9\"\u00dd\u00ac\u00fd\u00e5\u0085\u0093\u00fa\u009aj\u00c2\u00a78\u0085g\u00adM<\u0018VSN\u0089 \u0082\u0010r\u00f5O\u00f8\u0085\u008e\u00bc\u00adm\u009e\u00ef\b\u0006n\u00d0Rn\u008e\u00f9k\u00b0F\u0004\u0006\u009d\u00afN\u0012\u0004\u00a4\u00f9c[GN1!\u00ab\u00d2@\u00c1\u00c7\u00b5\u00c1o\u00bb\u009a\u00f0\u001eU\u0099\u00e6\u00d1\u00de\u00a0\r\u001fU\f\u0000X\u00bb \u0097\u00d0\u0089\f\u0010\u008a\u000e\u00camo\u00c9\u00d8@>\u0011\u00c9\u00a9\u0019\t`\u008a\u00dc\u00de\u00136\u0000\u00aa\u0002\u00a2\u009fhN\u009f\u00aft\u0095\u00a3\u00c3T=\u00fd\u0011\u0087\u00bd(c\u00e7\u00a3Oz\u00fd5\u00f0\u0011N\u00c2\u008f2\u009e\u00bd&\u0090\u00f1\u00c7D\u0095NHM\u00bd\u009f\u00c5\u00d7\u00e1\u00d8\u001b\u008b|7F\u008d\u00d3/\u00b5\u0001\u0014\u00de\u0005\u00ca\u00a5m\u0004\u0099\u00bb\u0098\u001d\u0099\u0083\u00a9\u00d3PZ\u00a0\u00ed\u00fe\u001a\u0095\u00f8\u0092\u008ewN\u00eb\u00b7\u00eeEk\u00b1\u0010(d+9\u00ad\u00e1\u00ca\u00d5\u00e1x\u00c4\u00f6A2\u0082\"\u00f3G7\u0017\u00f1M\u0099.\u009c92\u00f1\u00d8\u0001\u00d4R\u009f=\u00c1\u0089fSX];\u00c7\u00cc\u00d6\u00d3\u000f\u00ed\u00d4\u00e9\u008a:\u0082<Z\u001e\u0003\"\f\u00a7\u00af\u00a0\u00d9Y\u00e0\r\u007fj\u00d7\u00bcTT\u00baS\u0081\u00e7z*\u0084\u00d0\u00e7\u00f0w\u0085\u00d1\u008fZ[\u00e1i\u00c7Yq\\I'\u0093-vz\u00b4\u00f7d\u0080\u0002c\u00e9\u00ce\u00af\u00f9A#\u0090\u00f3\u00e7\u0084\u0097/\u00c4\u007f\u001em\u00bc\n\u0012\u009c\\1\u00c9\u008a=\u000f\u00fc\u000e\u009d\u00ca\u008d\u00c2\u00cd>\u00f2\u00f3\u00a8_!\u00aa\u0082\u009caP\u0099\u00c1\u00bd\u00dc\u00ab\u0019\u0003J\u00c4sZ\u0015\u00d7\u009cd\u0087\u00ce\u00c4\u00c6d\u00e1A\u001f\u0007\u00d3\u00bbf\u00c6\u0094Ug\u00f5=\u00cb\u0019\u00f8F:\u00dc\r\u0006>\u0001j\u0095a\u00cf\u00e2\u0018F\u008b\u00f1[s\u00bf]D\u00a0E\u00fb\u00eb\u0007q\u00fd\u00e0\u00ed\u00fb\u00e7\u0097\u0006\n\u0095\u0094]8\u0082\u0080G\u00da\u00e9$tWP\u00fc\u00d4\u00df\u00b0\u001f\u00fd\u00ec\u00ed?\u0088\u00ac\"\u008c\u00fe81,\u00ab\u0090\u0087O\u00b1&n\u00cb=:\u00af\u0011\u0013\u00cc6\u00a0\u008eF(\u00f3\u008b\u0005\u00c2\u00ba\u00f0\u00af\u00f2\u00cb\u00cc\u00b5\u00b6ig\u00d3\u00b5\u00bfS&\u001d\u00a3j\u0096\u00f3\u00cf\u001f\u009f\u00d8\u00c4\u008d\u00e9r\u00eel\u00b5\u00dc_\u00b9\u00af\u001e\u009eA\u00a2l'l\u00be?!U\u00fe\u00aa\u001bP7\u0087l\u00cb\u00fbN\u00b6\u0002G$t\u0092um\u00e9\u009d\u00eb\r\b\u0005\u00a0\u0094d\u009e\u0085\u00bf\u00aa\u00da\u00840\u00a6\u00b0\u0080=\u0088E\u00bc}\u0098\u0084\bcK\u009cm@\u001b\u00b2\u00dc%\u00b8]=\u00f8\u0082\u00a8\u00c48s\b\u00d5\u009e~=C.\u00af\u008c\u00f6o8\n\u00ad\u00e1\u00db\u00167F\u00e44\u00d4rO\u00c8\"\u00d7\u0019\u008b\u00be\u0019\u008e\u00a0\u0088b\u00a5\u008a\u00b8{\u00df`\u00c7!r=\u00b7\u00cf\u008as\u00f7\u00e9\u009c\u001b2X\u00eb\u0014B\u00ee\u007f|\u00d4/\u00e3(0)\u00fbu\u00c6\u00ab\u00a2\u00c1JzZ\u00cfs\u0004\u00db\u00fe-\u00bd\u0019\u00c31\u00c6\u00d5\u00e2G\nP\u00a2T\u00ba\u00a8";
                var5_15 = "\u00e2\u0095\u001b6s\u00a0\u0096n\u000fjW#\u00ad\u00be#\u00de\u00c9\u00a8\u000f\r\u00c8\u00c5g\u00e8\u00ff\u008f`e\u0011W5\u0080\u0013\u00f9\"\u00dd\u00ac\u00fd\u00e5\u0085\u0093\u00fa\u009aj\u00c2\u00a78\u0085g\u00adM<\u0018VSN\u0089 \u0082\u0010r\u00f5O\u00f8\u0085\u008e\u00bc\u00adm\u009e\u00ef\b\u0006n\u00d0Rn\u008e\u00f9k\u00b0F\u0004\u0006\u009d\u00afN\u0012\u0004\u00a4\u00f9c[GN1!\u00ab\u00d2@\u00c1\u00c7\u00b5\u00c1o\u00bb\u009a\u00f0\u001eU\u0099\u00e6\u00d1\u00de\u00a0\r\u001fU\f\u0000X\u00bb \u0097\u00d0\u0089\f\u0010\u008a\u000e\u00camo\u00c9\u00d8@>\u0011\u00c9\u00a9\u0019\t`\u008a\u00dc\u00de\u00136\u0000\u00aa\u0002\u00a2\u009fhN\u009f\u00aft\u0095\u00a3\u00c3T=\u00fd\u0011\u0087\u00bd(c\u00e7\u00a3Oz\u00fd5\u00f0\u0011N\u00c2\u008f2\u009e\u00bd&\u0090\u00f1\u00c7D\u0095NHM\u00bd\u009f\u00c5\u00d7\u00e1\u00d8\u001b\u008b|7F\u008d\u00d3/\u00b5\u0001\u0014\u00de\u0005\u00ca\u00a5m\u0004\u0099\u00bb\u0098\u001d\u0099\u0083\u00a9\u00d3PZ\u00a0\u00ed\u00fe\u001a\u0095\u00f8\u0092\u008ewN\u00eb\u00b7\u00eeEk\u00b1\u0010(d+9\u00ad\u00e1\u00ca\u00d5\u00e1x\u00c4\u00f6A2\u0082\"\u00f3G7\u0017\u00f1M\u0099.\u009c92\u00f1\u00d8\u0001\u00d4R\u009f=\u00c1\u0089fSX];\u00c7\u00cc\u00d6\u00d3\u000f\u00ed\u00d4\u00e9\u008a:\u0082<Z\u001e\u0003\"\f\u00a7\u00af\u00a0\u00d9Y\u00e0\r\u007fj\u00d7\u00bcTT\u00baS\u0081\u00e7z*\u0084\u00d0\u00e7\u00f0w\u0085\u00d1\u008fZ[\u00e1i\u00c7Yq\\I'\u0093-vz\u00b4\u00f7d\u0080\u0002c\u00e9\u00ce\u00af\u00f9A#\u0090\u00f3\u00e7\u0084\u0097/\u00c4\u007f\u001em\u00bc\n\u0012\u009c\\1\u00c9\u008a=\u000f\u00fc\u000e\u009d\u00ca\u008d\u00c2\u00cd>\u00f2\u00f3\u00a8_!\u00aa\u0082\u009caP\u0099\u00c1\u00bd\u00dc\u00ab\u0019\u0003J\u00c4sZ\u0015\u00d7\u009cd\u0087\u00ce\u00c4\u00c6d\u00e1A\u001f\u0007\u00d3\u00bbf\u00c6\u0094Ug\u00f5=\u00cb\u0019\u00f8F:\u00dc\r\u0006>\u0001j\u0095a\u00cf\u00e2\u0018F\u008b\u00f1[s\u00bf]D\u00a0E\u00fb\u00eb\u0007q\u00fd\u00e0\u00ed\u00fb\u00e7\u0097\u0006\n\u0095\u0094]8\u0082\u0080G\u00da\u00e9$tWP\u00fc\u00d4\u00df\u00b0\u001f\u00fd\u00ec\u00ed?\u0088\u00ac\"\u008c\u00fe81,\u00ab\u0090\u0087O\u00b1&n\u00cb=:\u00af\u0011\u0013\u00cc6\u00a0\u008eF(\u00f3\u008b\u0005\u00c2\u00ba\u00f0\u00af\u00f2\u00cb\u00cc\u00b5\u00b6ig\u00d3\u00b5\u00bfS&\u001d\u00a3j\u0096\u00f3\u00cf\u001f\u009f\u00d8\u00c4\u008d\u00e9r\u00eel\u00b5\u00dc_\u00b9\u00af\u001e\u009eA\u00a2l'l\u00be?!U\u00fe\u00aa\u001bP7\u0087l\u00cb\u00fbN\u00b6\u0002G$t\u0092um\u00e9\u009d\u00eb\r\b\u0005\u00a0\u0094d\u009e\u0085\u00bf\u00aa\u00da\u00840\u00a6\u00b0\u0080=\u0088E\u00bc}\u0098\u0084\bcK\u009cm@\u001b\u00b2\u00dc%\u00b8]=\u00f8\u0082\u00a8\u00c48s\b\u00d5\u009e~=C.\u00af\u008c\u00f6o8\n\u00ad\u00e1\u00db\u00167F\u00e44\u00d4rO\u00c8\"\u00d7\u0019\u008b\u00be\u0019\u008e\u00a0\u0088b\u00a5\u008a\u00b8{\u00df`\u00c7!r=\u00b7\u00cf\u008as\u00f7\u00e9\u009c\u001b2X\u00eb\u0014B\u00ee\u007f|\u00d4/\u00e3(0)\u00fbu\u00c6\u00ab\u00a2\u00c1JzZ\u00cfs\u0004\u00db\u00fe-\u00bd\u0019\u00c31\u00c6\u00d5\u00e2G\nP\u00a2T\u00ba\u00a8".length();
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
                    var4_14 = "@\u00bb\u00b7)d\u00a00\u00da\u00d1\u0087\u0095\f\u00e5<\u00acu";
                    var5_15 = "@\u00bb\u00b7)d\u00a00\u00da\u00d1\u0087\u0095\f\u00e5<\u00acu".length();
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
        dt.BYKvc = var6_12;
        dt.WeGki = new Integer[92];
    }

    private void ais(List<ItemEntity> list, lC lC2, float f2) {
        Vector4d vector4d;
        iS[] iSArray;
        block5: {
            Vector4d vector4d2;
            block6: {
                long l2 = JzNel ^ 0x1797919A61DCL;
                vector4d2 = this.ait((Entity)list.get(0), f2);
                iSArray = dh.afl();
                try {
                    try {
                        vector4d = vector4d2;
                        if (iSArray != null) break block5;
                        if (!vector4d.isEmpty()) break block6;
                    }
                    catch (MatchException matchException) {
                        throw dt.aiv(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw dt.aiv(matchException);
                }
            }
            vector4d = vector4d2.get();
        }
        Vector4d vector4d3 = vector4d;
        float f3 = (float)vector4d3.x;
        float f4 = (float)vector4d3.y;
        lq lq2 = lE.WTzbi.bYM(6.0f);
        int n2 = 3;
        int n3 = 3;
        int n4 = 2;
        List<String> list2 = list.stream().map(itemEntity -> {
            long l2 = JzNel ^ 0x6272F8C106C8L;
            return itemEntity.getName().getString() + (String)((Object)" x") + itemEntity.getStack().getCount();
        }).toList();
        float f5 = (float)list2.stream().mapToDouble(lq2::cao).max().orElse(0.0);
        float f6 = lq2.cat();
        float f7 = f5 + (float)(n2 * 2);
        float f8 = f3 - f7 / 2.0f;
        float f9 = (float)list2.size() * f6 + (float)(Math.max(0, list2.size() - 1) * n4);
        float f10 = f9 + (float)(n3 * 2);
        mG mG2 = this.wRBRi.Wf();
        lC2.cdg(f8, f4, f7, f10, ld.all(3.0f), mG2);
        float f11 = f4 + jf.bAH(f9, f10);
        for (String string : list2) {
            float f12 = f8 + jf.bAH(lq2.cao(string), f7);
            lC2.cer(lq2, string, f12, f11, this.uxHfK.Wf());
            f11 += f6 + (float)n4;
            if (iSArray == null) continue;
        }
    }

    /*
     * Could not resolve type clashes
     * Unable to fully structure code
     */
    @hG
    public void aim(gk var1_1) {
        block61: {
            var2_2 = dt.JzNel ^ 21065720448340L;
            var4_3 = dh.afl();
            try {
                if (!this.bab()) {
                    return;
                }
            }
            catch (MatchException v0) {
                throw dt.aiv(v0);
            }
            var5_4 = var1_1.baT();
            var6_5 = var5_4.cfh();
            var7_6 = rD.dlJ().aZx(fS.class);
            var8_7 = lE.WTzbi.bYM(6.0f);
            dt.zXCXX.bUa(var8_7);
            var9_8 = new ArrayList<Object>();
            var10_9 = rD.dlmvG.world.getEntities().iterator();
            while (var10_9.hasNext()) {
                block54: {
                    block58: {
                        block59: {
                            block56: {
                                block57: {
                                    block55: {
                                        block52: {
                                            block53: {
                                                block50: {
                                                    block51: {
                                                        var11_10 = (Entity)var10_9.next();
                                                        try {
                                                            try {
                                                                try {
                                                                    v1 /* !! */  = var11_10;
                                                                    if (var4_3 == null) {
                                                                        if (var4_3 != null) break block50;
                                                                    }
                                                                    ** GOTO lbl-1000
                                                                }
                                                                catch (MatchException v2) {
                                                                    throw dt.aiv(v2);
                                                                }
                                                                if (v1 /* !! */  != rD.dlmvG.player) break block51;
                                                            }
                                                            catch (MatchException v3) {
                                                                throw dt.aiv(v3);
                                                            }
                                                            if (var4_3 == null) continue;
                                                        }
                                                        catch (MatchException v4) {
                                                            throw dt.aiv(v4);
                                                        }
                                                    }
                                                    v5 = var11_10;
                                                }
                                                try {
                                                    v6 = v5 instanceof PlayerEntity;
                                                    if (var4_3 != null) break block52;
                                                    if (v6) {
                                                    }
                                                    ** GOTO lbl65
                                                }
                                                catch (MatchException v7) {
                                                    throw dt.aiv(v7);
                                                }
                                                var12_11 = (PlayerEntity)var11_10;
                                                try {
                                                    try {
                                                        v8 = this;
                                                        if (var4_3 != null) break block53;
                                                        if (!v8.jtzDi.TC()) break block54;
                                                    }
                                                    catch (MatchException v9) {
                                                        throw dt.aiv(v9);
                                                    }
                                                    v8 = this;
                                                }
                                                catch (MatchException v10) {
                                                    throw dt.aiv(v10);
                                                }
                                            }
                                            try {
                                                try {
                                                    v8.ain(var12_11, var5_4, var7_6, var6_5);
                                                    if (var4_3 == null) break block54;
lbl65:
                                                    // 2 sources

                                                    v11 = var11_10;
                                                    if (var4_3 != null) break block55;
                                                }
                                                catch (MatchException v12) {
                                                    throw dt.aiv(v12);
                                                }
                                                v6 = v11 instanceof ItemEntity;
                                            }
                                            catch (MatchException v13) {
                                                throw dt.aiv(v13);
                                            }
                                        }
                                        if (!v6) break block54;
                                        v11 = var11_10;
                                    }
                                    var13_12 = (ItemEntity)v11;
                                    try {
                                        try {
                                            v14 = this.VPgLm.TC();
                                            if (var4_3 != null) break block56;
                                            if (v14 != 0) break block57;
                                        }
                                        catch (MatchException v15) {
                                            throw dt.aiv(v15);
                                        }
                                        if (var4_3 == null) continue;
                                    }
                                    catch (MatchException v16) {
                                        throw dt.aiv(v16);
                                    }
                                }
                                v14 = 0;
                            }
                            var14_13 = v14;
                            try {
                                v17 = this.KjFun.WF();
                                if (var4_3 != null) break block58;
                                if (v17 == 0) break block59;
                            }
                            catch (MatchException v18) {
                                throw dt.aiv(v18);
                            }
                            for (List var16_15 : var9_8) {
                                block60: {
                                    var17_16 = (ItemEntity)var16_15.getFirst();
                                    try {
                                        try {
                                            try {
                                                cfr_temp_0 = var17_16.distanceTo((Entity)var13_12) - 5.0f;
                                                v17 = cfr_temp_0 == 0.0f ? '\u0000' : (cfr_temp_0 < 0.0f ? '\uffffffff' : '\u0001');
                                                if (var4_3 != null) break block58;
                                                if (var4_3 != null) break block60;
                                            }
                                            catch (MatchException v19) {
                                                throw dt.aiv(v19);
                                            }
                                            if (v17 <= 0) {
                                            }
                                            ** GOTO lbl129
                                        }
                                        catch (MatchException v20) {
                                            throw dt.aiv(v20);
                                        }
                                        var16_15.add(var13_12);
                                        v21 = true;
                                    }
                                    catch (MatchException v22) {
                                        throw dt.aiv(v22);
                                    }
                                }
                                var14_13 = v21;
                                try {
                                    if (var4_3 == null) break;
lbl129:
                                    // 2 sources

                                    if (var4_3 == null) continue;
                                    break;
                                }
                                catch (MatchException v23) {
                                    throw dt.aiv(v23);
                                }
                            }
                        }
                        v17 = var14_13;
                    }
                    if (v17 == 0) {
                        var15_14 = new ArrayList<E>();
                        var15_14.add(var13_12);
                        var9_8.add(var15_14);
                    }
                }
                if (var4_3 == null) continue;
            }
            for (Entity v1 : var9_8) lbl-1000:
            // 2 sources

            {
                block63: {
                    block62: {
                        var11_10 = (List)v1 /* !! */ ;
                        try {
                            try {
                                try {
                                    if (var4_3 != null) break block61;
                                    if (var4_3 != null) break block62;
                                }
                                catch (MatchException v24) {
                                    throw dt.aiv(v24);
                                }
                                if (var11_10.size() == 1) {
                                }
                                ** GOTO lbl166
                            }
                            catch (MatchException v25) {
                                throw dt.aiv(v25);
                            }
                            this.air((ItemEntity)var11_10.getFirst(), var5_4, var6_5);
                        }
                        catch (MatchException v26) {
                            throw dt.aiv(v26);
                        }
                    }
                    try {
                        if (var4_3 == null) break block63;
lbl166:
                        // 2 sources

                        this.ais((List<ItemEntity>)var11_10, var5_4, var6_5);
                    }
                    catch (MatchException v27) {
                        throw dt.aiv(v27);
                    }
                }
                if (var4_3 == null) continue;
            }
            dt.zXCXX.endBatch();
        }
    }

    private void air(ItemEntity itemEntity, lC lC2, float f2) {
        long l2 = JzNel ^ 0x26454F92ABEBL;
        Optional<Vector4d> optional = this.ait((Entity)itemEntity, f2);
        try {
            if (optional.isEmpty()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw dt.aiv(matchException);
        }
        mG mG2 = this.wRBRi.Wf();
        Vector4d vector4d = optional.get();
        lq lq2 = lE.WTzbi.bYM(6.0f);
        String string = itemEntity.getName().getString() + (String)((Object)dt.aiz("j", (int)678, (long)(0x502924F4BF4549FEL ^ l2))) + itemEntity.getStack().getCount();
        float f3 = lq2.cao(string);
        float f4 = lq2.cat();
        float f5 = f3 + 6.0f;
        float f6 = f4 + 4.0f;
        float f7 = (float)vector4d.x - f5 / 2.0f;
        float f8 = (float)vector4d.y;
        float f9 = f7 + jf.bAH(f3, f5);
        float f10 = f8 + jf.bAH(f4, f6);
        lC2.cdg(f7, f8, f5, f6, ld.all(3.0f), mG2);
        lC2.cer(lq2, string, f9, f10, this.uxHfK.Wf());
    }

    private static String aix(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x47D8;
        if (yCgSU[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])bUAHN.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    bUAHN.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dt", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = LQnFM[n3].getBytes("ISO-8859-1");
            dt.yCgSU[n3] = dt.aiw(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return yCgSU[n3];
    }

    private void aiq(lC lC2, PlayerEntity playerEntity, lq lq2, float f2, float f3) {
        ArrayList arrayList;
        iS[] iSArray;
        long l2;
        block9: {
            ArrayList arrayList2;
            block10: {
                l2 = JzNel ^ 0x3F9E335DF2E6L;
                arrayList2 = new ArrayList(playerEntity.getStatusEffects());
                iSArray = dh.afl();
                try {
                    try {
                        arrayList = arrayList2;
                        if (iSArray != null) break block9;
                        if (!arrayList.isEmpty()) break block10;
                    }
                    catch (MatchException matchException) {
                        throw dt.aiv(matchException);
                    }
                    return;
                }
                catch (MatchException matchException) {
                    throw dt.aiv(matchException);
                }
            }
            arrayList2.sort(Comparator.reverseOrder());
            f2 += (float)arrayList2.size() * 12.5f;
            arrayList = arrayList2;
        }
        for (StatusEffectInstance statusEffectInstance : arrayList) {
            boolean bl2;
            String string;
            block11: {
                string = ji.bCv(statusEffectInstance);
                try {
                    bl2 = string.isEmpty();
                    if (iSArray != null) break block11;
                    if (bl2) continue;
                }
                catch (MatchException matchException) {
                    throw dt.aiv(matchException);
                }
                bl2 = string.equals(dt.aiz("j", (int)9370, (long)(0xEF9A48BDADB6CEL ^ l2)));
            }
            try {
                if (bl2 && iSArray == null) continue;
            }
            catch (MatchException matchException) {
                throw dt.aiv(matchException);
            }
            float f4 = (f2 -= 25.0f) + 9.0f;
            float f5 = f4 - 5.0f;
            lC2.ceV();
            lC2.ceX(f5, f3);
            RegistryEntry registryEntry = statusEffectInstance.getEffectType();
            Identifier identifier = InGameHud.getEffectTexture((RegistryEntry)registryEntry);
            lC2.cfe().drawGuiTexture(RenderPipelines.GUI_TEXTURED, identifier, 0, 0, (int)dt.aiC("m", (int)13197, (long)(0x58366E6364436CFFL ^ l2)), (int)dt.aiC("m", (int)13197, (long)(0x58366E6364436CFFL ^ l2)));
            lC2.ceW();
            lC2.cer(lq2, string, f4 - lq2.cao(string) / 2.0f, f3 - 8.0f, mG.hoGuU);
            int[] nArray = mY.crP(statusEffectInstance.getAmplifier() + 1);
            lC2.ces(lq2, nArray, f4 - lq2.cap(nArray) / 2.0f, f3 - 16.0f, mG.hoGuU);
            if (iSArray == null) continue;
        }
    }

    private void ain(PlayerEntity playerEntity, lC lC2, fS fS2, float f2) {
        block110: {
            block111: {
                float f3;
                float f4;
                lq lq2;
                float f5;
                block112: {
                    float f6;
                    float f7;
                    iS[] iSArray;
                    block109: {
                        float f8;
                        float f9;
                        float f10;
                        float f11;
                        float f12;
                        Object object;
                        int n2;
                        float f13;
                        float f14;
                        block107: {
                            boolean bl2;
                            block108: {
                                block105: {
                                    block106: {
                                        block103: {
                                            block104: {
                                                float f15;
                                                int n3;
                                                float f16;
                                                block101: {
                                                    int n4;
                                                    float f17;
                                                    int n5;
                                                    ArrayList<Float> arrayList;
                                                    ArrayList<dt$sH> arrayList2;
                                                    mG mG2;
                                                    float f18;
                                                    block99: {
                                                        int n6;
                                                        block100: {
                                                            block114: {
                                                                block97: {
                                                                    block98: {
                                                                        block96: {
                                                                            int n7;
                                                                            block94: {
                                                                                float f19;
                                                                                block92: {
                                                                                    block93: {
                                                                                        Object object2;
                                                                                        Object object3;
                                                                                        boolean bl3;
                                                                                        mG mG3;
                                                                                        mG mG4;
                                                                                        block87: {
                                                                                            block88: {
                                                                                                boolean bl4;
                                                                                                block91: {
                                                                                                    mG mG5;
                                                                                                    block113: {
                                                                                                        mG mG6;
                                                                                                        block90: {
                                                                                                            Object object4;
                                                                                                            block89: {
                                                                                                                block85: {
                                                                                                                    block86: {
                                                                                                                        mG mG7;
                                                                                                                        long l2;
                                                                                                                        block83: {
                                                                                                                            block84: {
                                                                                                                                Vector4d vector4d;
                                                                                                                                block81: {
                                                                                                                                    Vector4d vector4d2;
                                                                                                                                    block82: {
                                                                                                                                        l2 = JzNel ^ 0x6213046B60CL;
                                                                                                                                        vector4d2 = this.ait((Entity)playerEntity, f2);
                                                                                                                                        iSArray = dh.afl();
                                                                                                                                        try {
                                                                                                                                            try {
                                                                                                                                                vector4d = vector4d2;
                                                                                                                                                if (iSArray != null) break block81;
                                                                                                                                                if (!vector4d.isEmpty()) break block82;
                                                                                                                                            }
                                                                                                                                            catch (MatchException matchException) {
                                                                                                                                                throw dt.aiv(matchException);
                                                                                                                                            }
                                                                                                                                            return;
                                                                                                                                        }
                                                                                                                                        catch (MatchException matchException) {
                                                                                                                                            throw dt.aiv(matchException);
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                    vector4d = vector4d2.get();
                                                                                                                                }
                                                                                                                                Vector4d vector4d3 = vector4d;
                                                                                                                                f5 = (float)vector4d3.x;
                                                                                                                                float f20 = (float)vector4d3.y;
                                                                                                                                lq2 = lE.WTzbi.bYM(6.0f);
                                                                                                                                float f21 = lq2.cat();
                                                                                                                                f18 = f21 + 4.0f;
                                                                                                                                f14 = f20;
                                                                                                                                mG2 = this.wRBRi.Wf();
                                                                                                                                mG5 = this.weKln.Wf();
                                                                                                                                mG6 = this.MAUHJ.Wf();
                                                                                                                                mG4 = this.JdaIF.Wf();
                                                                                                                                mG mG8 = this.lFuNf.Wf();
                                                                                                                                mG7 = this.BmdVM.Wf();
                                                                                                                                mG3 = this.bocCI.Wf();
                                                                                                                                arrayList2 = new ArrayList<dt$sH>();
                                                                                                                                try {
                                                                                                                                    bl3 = this.AbmMN.TC();
                                                                                                                                    if (iSArray != null) break block83;
                                                                                                                                    if (!bl3) break block84;
                                                                                                                                }
                                                                                                                                catch (MatchException matchException) {
                                                                                                                                    throw dt.aiv(matchException);
                                                                                                                                }
                                                                                                                                object3 = mZ.csc(rD.dlmvG.player.distanceTo((Entity)playerEntity), 1) + "m";
                                                                                                                                arrayList2.add(new dt$sH((String)object3, mG8));
                                                                                                                            }
                                                                                                                            bl3 = this.yhuFt.TC();
                                                                                                                        }
                                                                                                                        try {
                                                                                                                            if (iSArray != null) break block85;
                                                                                                                            if (!bl3) break block86;
                                                                                                                        }
                                                                                                                        catch (MatchException matchException) {
                                                                                                                            throw dt.aiv(matchException);
                                                                                                                        }
                                                                                                                        object3 = jg.bBx(playerEntity) + (String)((Object)dt.aiz("j", (int)5851, (long)(0x3E1671DA1DC4C067L ^ l2)));
                                                                                                                        arrayList2.add(new dt$sH((String)object3, mG7));
                                                                                                                    }
                                                                                                                    bl3 = this.vExdX.TC();
                                                                                                                }
                                                                                                                try {
                                                                                                                    try {
                                                                                                                        try {
                                                                                                                            if (iSArray != null) break block87;
                                                                                                                            if (!bl3) break block88;
                                                                                                                        }
                                                                                                                        catch (MatchException matchException) {
                                                                                                                            throw dt.aiv(matchException);
                                                                                                                        }
                                                                                                                        if (!this.bcjCz.SQ(0)) break block89;
                                                                                                                    }
                                                                                                                    catch (MatchException matchException) {
                                                                                                                        throw dt.aiv(matchException);
                                                                                                                    }
                                                                                                                    object4 = playerEntity.getDisplayName().getString();
                                                                                                                    break block90;
                                                                                                                }
                                                                                                                catch (MatchException matchException) {
                                                                                                                    throw dt.aiv(matchException);
                                                                                                                }
                                                                                                            }
                                                                                                            object4 = object3 = playerEntity.getGameProfile().name();
                                                                                                        }
                                                                                                        if (!rD.dmc().ddy(playerEntity)) break block113;
                                                                                                        object2 = mG6;
                                                                                                        try {
                                                                                                            try {
                                                                                                                try {
                                                                                                                    bl4 = fS2.bag();
                                                                                                                    if (iSArray != null) break block88;
                                                                                                                    if (!bl4) break block91;
                                                                                                                }
                                                                                                                catch (MatchException matchException) {
                                                                                                                    throw dt.aiv(matchException);
                                                                                                                }
                                                                                                                bl4 = fS2.aWV().TC();
                                                                                                                if (iSArray != null) break block88;
                                                                                                            }
                                                                                                            catch (MatchException matchException) {
                                                                                                                throw dt.aiv(matchException);
                                                                                                            }
                                                                                                            if (!bl4) break block91;
                                                                                                        }
                                                                                                        catch (MatchException matchException) {
                                                                                                            throw dt.aiv(matchException);
                                                                                                        }
                                                                                                        object3 = fS2.aWY().Us();
                                                                                                        if (iSArray == null) break block91;
                                                                                                    }
                                                                                                    object2 = mG5;
                                                                                                }
                                                                                                bl4 = arrayList2.add(new dt$sH((String)object3, (mG)object2));
                                                                                            }
                                                                                            bl3 = this.zHaUb.TC();
                                                                                        }
                                                                                        if (bl3) {
                                                                                            object3 = String.valueOf(mZ.csc(playerEntity.getHealth(), 1));
                                                                                            arrayList2.add(new dt$sH((String)object3, mG3));
                                                                                        }
                                                                                        float f22 = playerEntity.getAbsorptionAmount();
                                                                                        try {
                                                                                            try {
                                                                                                f19 = f22;
                                                                                                if (iSArray != null) break block92;
                                                                                                if (!(f19 > 0.0f)) break block93;
                                                                                            }
                                                                                            catch (MatchException matchException) {
                                                                                                throw dt.aiv(matchException);
                                                                                            }
                                                                                            if (!this.gxggV.TC()) break block93;
                                                                                        }
                                                                                        catch (MatchException matchException) {
                                                                                            throw dt.aiv(matchException);
                                                                                        }
                                                                                        object2 = String.valueOf(mZ.csc(f22, 1));
                                                                                        arrayList2.add(new dt$sH((String)object2, mG4));
                                                                                    }
                                                                                    f19 = 2.0f;
                                                                                }
                                                                                float f23 = f19;
                                                                                f13 = 0.0f;
                                                                                arrayList = new ArrayList<Float>(arrayList2.size());
                                                                                for (dt$sH dt$sH : arrayList2) {
                                                                                    float f24 = lq2.cao(dt$sH.gbfPR) + 6.0f;
                                                                                    arrayList.add(Float.valueOf(f24));
                                                                                    f13 += f24;
                                                                                    try {
                                                                                        if (iSArray == null) {
                                                                                            if (iSArray == null) continue;
                                                                                            break;
                                                                                        }
                                                                                        break block94;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw dt.aiv(matchException);
                                                                                    }
                                                                                }
                                                                                f13 += 2.0f * (float)(arrayList2.size() - 1);
                                                                            }
                                                                            n2 = -1;
                                                                            String string = playerEntity.getGameProfile().name();
                                                                            for (int i2 = 0; i2 < arrayList2.size(); ++i2) {
                                                                                int n8;
                                                                                block95: {
                                                                                    try {
                                                                                        n8 = ((dt$sH)arrayList2.get((int)i2)).gbfPR.equals(string);
                                                                                        if (iSArray != null) break block95;
                                                                                        if (n8 == 0) continue;
                                                                                    }
                                                                                    catch (MatchException matchException) {
                                                                                        throw dt.aiv(matchException);
                                                                                    }
                                                                                    n8 = i2;
                                                                                }
                                                                                n2 = n8;
                                                                                try {
                                                                                    if (iSArray == null) break;
                                                                                    if (iSArray == null) continue;
                                                                                    break;
                                                                                }
                                                                                catch (MatchException matchException) {
                                                                                    throw dt.aiv(matchException);
                                                                                }
                                                                            }
                                                                            f16 = 0.0f;
                                                                            try {
                                                                                n7 = n2;
                                                                                if (iSArray != null) break block96;
                                                                                if (n7 < 0) break block97;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw dt.aiv(matchException);
                                                                            }
                                                                            n7 = n5 = 0;
                                                                        }
                                                                        while (n5 < n2) {
                                                                            f16 += ((Float)arrayList.get(n5)).floatValue() + 2.0f;
                                                                            try {
                                                                                ++n5;
                                                                                if (iSArray == null) {
                                                                                    if (iSArray == null) continue;
                                                                                    break;
                                                                                }
                                                                                break block98;
                                                                            }
                                                                            catch (MatchException matchException) {
                                                                                throw dt.aiv(matchException);
                                                                            }
                                                                        }
                                                                        f16 += ((Float)arrayList.get(n2)).floatValue() / 2.0f;
                                                                    }
                                                                    f17 = f5 - f16;
                                                                    break block114;
                                                                }
                                                                f17 = f5 - f13 / 2.0f;
                                                            }
                                                            jH.bId(lC2, f5, f14, this.hSuAc.VB());
                                                            n5 = this.uuLKb.WF() ? '\u0001' : '\u0000';
                                                            try {
                                                                try {
                                                                    n6 = n5;
                                                                    if (iSArray != null) break block99;
                                                                    if (n6 == 0) break block100;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw dt.aiv(matchException);
                                                                }
                                                                lC2.cdh(f17, f14, f13, f18, ld.all(3.0f), mG2, 2.0f);
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dt.aiv(matchException);
                                                            }
                                                        }
                                                        n6 = n4 = 0;
                                                    }
                                                    while (n4 < arrayList2.size()) {
                                                        block102: {
                                                            object = (dt$sH)arrayList2.get(n4);
                                                            f12 = ((Float)arrayList.get(n4)).floatValue();
                                                            try {
                                                                try {
                                                                    n3 = n5;
                                                                    if (iSArray != null) break block101;
                                                                    if (n3 != 0) break block102;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw dt.aiv(matchException);
                                                                }
                                                                lC2.cdh(f17, f14, f12, f18, ld.all(3.0f), mG2, 2.0f);
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw dt.aiv(matchException);
                                                            }
                                                        }
                                                        f11 = lq2.cao(((dt$sH)object).gbfPR);
                                                        f10 = lq2.cat();
                                                        lC2.cer(lq2, ((dt$sH)object).gbfPR, f17 + jf.bAH(f11, f12), f14 + jf.bAH(f10, f18), ((dt$sH)object).qZmEr);
                                                        f17 += f12 + 2.0f;
                                                        ++n4;
                                                        if (iSArray == null) continue;
                                                    }
                                                    n3 = n2;
                                                }
                                                try {
                                                    f15 = n3 >= 0 ? f5 - f16 : f5 - f13 / 2.0f;
                                                }
                                                catch (MatchException matchException) {
                                                    throw dt.aiv(matchException);
                                                }
                                                f9 = f15;
                                                object = new ArrayList();
                                                try {
                                                    try {
                                                        bl2 = this.ZhrcH.TC();
                                                        if (iSArray != null) break block103;
                                                        if (!bl2) break block104;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw dt.aiv(matchException);
                                                    }
                                                    object.add(playerEntity.getMainHandStack());
                                                }
                                                catch (MatchException matchException) {
                                                    throw dt.aiv(matchException);
                                                }
                                            }
                                            bl2 = this.JKWzw.TC();
                                        }
                                        try {
                                            try {
                                                if (iSArray != null) break block105;
                                                if (!bl2) break block106;
                                            }
                                            catch (MatchException matchException) {
                                                throw dt.aiv(matchException);
                                            }
                                            object.addAll(oP.cJr((LivingEntity)playerEntity).cJE());
                                        }
                                        catch (MatchException matchException) {
                                            throw dt.aiv(matchException);
                                        }
                                    }
                                    bl2 = this.ZhrcH.TC();
                                }
                                try {
                                    try {
                                        if (iSArray != null) break block107;
                                        if (!bl2) break block108;
                                    }
                                    catch (MatchException matchException) {
                                        throw dt.aiv(matchException);
                                    }
                                    object.add(playerEntity.getOffHandStack());
                                }
                                catch (MatchException matchException) {
                                    throw dt.aiv(matchException);
                                }
                            }
                            bl2 = object.removeIf(ItemStack::isEmpty);
                        }
                        f12 = 12.0f;
                        f11 = (float)object.size() * f12 + (float)(object.size() - 1) * 2.0f;
                        try {
                            f8 = n2 >= 0 ? f5 - f11 / 2.0f : f9 + (f13 - f11) / 2.0f;
                        }
                        catch (MatchException matchException) {
                            throw dt.aiv(matchException);
                        }
                        f10 = f8;
                        float f25 = f14 - 2.0f - f12;
                        f7 = f25 - 12.0f;
                        f6 = Float.POSITIVE_INFINITY;
                        Iterator iterator = object.iterator();
                        while (iterator.hasNext()) {
                            ItemStack itemStack = (ItemStack)iterator.next();
                            float f26 = this.aio(lC2, itemStack, lq2, f10, f25);
                            f6 = Math.min(f6, f26);
                            f10 += f12 + 2.0f;
                            try {
                                if (iSArray == null) {
                                    if (iSArray == null) continue;
                                    break;
                                }
                                break block109;
                            }
                            catch (MatchException matchException) {
                                throw dt.aiv(matchException);
                            }
                        }
                        ju.bFV();
                    }
                    try {
                        try {
                            try {
                                try {
                                    if (iSArray != null) break block110;
                                    if (!this.VrMbh.TC()) break block111;
                                }
                                catch (MatchException matchException) {
                                    throw dt.aiv(matchException);
                                }
                                f4 = f6;
                                f3 = Float.POSITIVE_INFINITY;
                                if (iSArray != null) break block112;
                            }
                            catch (MatchException matchException) {
                                throw dt.aiv(matchException);
                            }
                            if (f4 == f3) break block111;
                        }
                        catch (MatchException matchException) {
                            throw dt.aiv(matchException);
                        }
                        f4 = f7 + f6;
                        f3 = 5.0f;
                    }
                    catch (MatchException matchException) {
                        throw dt.aiv(matchException);
                    }
                }
                float f27 = f4 - f3;
                this.aiq(lC2, playerEntity, lq2, f5, f27);
            }
            jH.bIf();
        }
    }

    private static String aiw(byte[] byArray) {
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

    @hG
    public void ail(gi gi2) {
        block14: {
            Entity entity;
            block13: {
                long l2 = JzNel ^ 0x1A71AF532778L;
                iS[] iSArray = dh.afl();
                try {
                    if (!this.bab()) {
                        return;
                    }
                }
                catch (MatchException matchException) {
                    throw dt.aiv(matchException);
                }
                Entity entity2 = gi2.baL();
                try {
                    try {
                        entity = entity2;
                        if (iSArray != null) break block13;
                        if (!(entity instanceof PlayerEntity)) break block14;
                    }
                    catch (MatchException matchException) {
                        throw dt.aiv(matchException);
                    }
                    entity = entity2;
                }
                catch (MatchException matchException) {
                    throw dt.aiv(matchException);
                }
            }
            try {
                if (entity == rD.dlmvG.player) {
                    return;
                }
            }
            catch (MatchException matchException) {
                throw dt.aiv(matchException);
            }
            try {
                if (this.jtzDi.TC()) {
                    gi2.bdX(true);
                }
            }
            catch (MatchException matchException) {
                throw dt.aiv(matchException);
            }
        }
    }

    private static MatchException aiv(MatchException matchException) {
        return matchException;
    }

    private Optional<Vector4d> ait(Entity entity, float f2) {
        long l2 = JzNel ^ 0x97939119EE2L;
        Vec3d vec3d = entity.getLerpedPos(f2);
        float f3 = 0.0f;
        if (entity instanceof PlayerEntity) {
            f3 = 2.6f;
        }
        Vec2f vec2f = jI.bIw(new Vec3d(vec3d.x, vec3d.y + (double)f3, vec3d.z));
        try {
            if (vec2f == null) {
                return Optional.empty();
            }
        }
        catch (MatchException matchException) {
            throw dt.aiv(matchException);
        }
        return Optional.of(new Vector4d((double)vec2f.x, (double)vec2f.y, (double)vec2f.x, 0.0));
    }

    private static CallSite aiz(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dt" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private float aip(lC lC2, ItemStack itemStack, lq lq2, float f2, float f3) {
        float f4;
        block2: {
            long l2 = JzNel ^ 0x21FC573F3344L;
            float f5 = 0.0f;
            iS[] iSArray = dh.afl();
            float f6 = 0.0f;
            ItemEnchantmentsComponent itemEnchantmentsComponent = EnchantmentHelper.getEnchantments((ItemStack)itemStack);
            for (RegistryEntry registryEntry : itemEnchantmentsComponent.getEnchantments()) {
                String string = Enchantment.getName((RegistryEntry)registryEntry, (int)itemEnchantmentsComponent.getLevel(registryEntry)).getString().substring(0, 2) + " " + itemEnchantmentsComponent.getLevel(registryEntry);
                lC2.cer(lq2, string, f2, f3 + f6, mG.hoGuU);
                f4 = Math.min(f5, f6 -= 8.0f);
                if (iSArray == null) {
                    f5 = f4;
                    if (iSArray == null) continue;
                }
                break block2;
            }
            f4 = f5;
        }
        return f4;
    }

    private static CallSite aiC(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/dt" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private float aio(lC lC2, ItemStack itemStack, lq lq2, float f2, float f3) {
        float f4;
        block5: {
            dt dt2;
            block4: {
                long l2 = JzNel ^ 0x4DA1342553A5L;
                ((jv)lC2.cea(itemStack, f2, f3, 0.75f).bGw()).bGv();
                iS[] iSArray = dh.afl();
                ((jw)lC2.ceb(itemStack, f2, f3, 0.75f).bGw()).bGv();
                iS[] iSArray2 = iSArray;
                f4 = Float.POSITIVE_INFINITY;
                try {
                    try {
                        dt2 = this;
                        if (iSArray2 != null) break block4;
                        if (!dt2.bhXKP.TC()) break block5;
                    }
                    catch (MatchException matchException) {
                        throw dt.aiv(matchException);
                    }
                    dt2 = this;
                }
                catch (MatchException matchException) {
                    throw dt.aiv(matchException);
                }
            }
            f4 = dt2.aip(lC2, itemStack, lq2, f2, f3 - 12.0f);
        }
        return f4;
    }

    private static Object aiy(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = dt.aix(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int aiB(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = dt.aiA(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int aiA(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0xAA4;
        if (WeGki[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = BYKvc[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])JRvoE.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    JRvoE.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/dt", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            dt.WeGki[n3] = n4;
        }
        return WeGki[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(dt.class, "aiy", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(dt.class, "aiB", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

