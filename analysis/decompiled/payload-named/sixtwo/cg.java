/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.hud.InGameHud
 *  net.minecraft.client.gui.screen.ChatScreen
 *  net.minecraft.entity.effect.StatusEffect
 *  net.minecraft.entity.effect.StatusEffectCategory
 *  net.minecraft.entity.effect.StatusEffectInstance
 *  net.minecraft.registry.entry.RegistryEntry
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
import java.util.TreeMap;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.gui.hud.InGameHud;
import net.minecraft.client.gui.screen.ChatScreen;
import net.minecraft.entity.effect.StatusEffect;
import net.minecraft.entity.effect.StatusEffectCategory;
import net.minecraft.entity.effect.StatusEffectInstance;
import net.minecraft.registry.entry.RegistryEntry;
import sixtwo.cJ;
import sixtwo.cN;
import sixtwo.ca;
import sixtwo.co;
import sixtwo.gM;
import sixtwo.gb;
import sixtwo.hF;
import sixtwo.hG;
import sixtwo.iW;
import sixtwo.jf;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lf;
import sixtwo.mG;
import sixtwo.mM;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rj;

public class cg
extends co {
    private final cJ KsSMf;
    private final Map<String, StatusEffectInstance> lkRFs;
    private final Map<StatusEffect, Boolean> XXdvi;
    private static final long kjqzv;
    private static final String[] GQfMq;
    private static final String[] XMEkj;
    private static final Map ysebq;
    private static final long[] QgNXY;
    private static final Integer[] yyYQj;
    private static final Map phUmR;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cg() {
        long l2 = kjqzv ^ 0x488275A41265L;
        int[] nArray = new int[cg.Qj("f", (int)26790, (long)(0x57DB8164524B70F1L ^ l2))];
        nArray[0] = (int)cg.Qj("f", (int)401, (long)(0x12B091BA8ECB99C3L ^ l2));
        nArray[1] = (int)cg.Qj("f", (int)24151, (long)(0x29CF34070B58460DL ^ l2));
        nArray[2] = (int)cg.Qj("f", (int)8527, (long)(0x2CF346EBEB1CB903L ^ l2));
        nArray[3] = (int)cg.Qj("f", (int)17782, (long)(0x12E03AAC98B5DD39L ^ l2));
        nArray[4] = (int)cg.Qj("f", (int)835, (long)(0x7F412C99EBB79B16L ^ l2));
        nArray[5] = (int)cg.Qj("f", (int)6567, (long)(0x46B6BF1D629181FEL ^ l2));
        nArray[cg.Qj("f", (int)11237, (long)(0x14A94FBB364533B9L ^ l2))] = (int)cg.Qj("f", (int)12840, (long)(0x408AD3A04D68AA76L ^ l2));
        super(nArray, lf.DyMwJ);
        this.KsSMf = new cJ(this, mr.clS(new int[]{(int)cg.Qj("f", (int)22745, (long)(0x5DA3FB48660B4086L ^ l2)), (int)cg.Qj("f", (int)12734, (long)(0x3DBC2A8F30D9A9F0L ^ l2)), (int)cg.Qj("f", (int)15718, (long)(0x40A5D407D5F1A53EL ^ l2)), (int)cg.Qj("f", (int)9778, (long)(0x397E3DE3C354BE61L ^ l2)), (int)cg.Qj("f", (int)6986, (long)(0x4D94730DFAE0831BL ^ l2))})).WE(false);
        this.lkRFs = new TreeMap<String, StatusEffectInstance>();
        this.XXdvi = new HashMap<StatusEffect, Boolean>();
        hF.bdI(this);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block21: {
            block20: {
                block19: {
                    block18: {
                        cg.kjqzv = gb.aYR(24728271087640463L, 2606469178279783025L, MethodHandles.lookup().lookupClass()).a(62859203139507L);
                        cg.ysebq = new HashMap<K, V>(13);
                        var11 = cg.kjqzv ^ 127414406724590L;
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
                        var20_3 = new String[8];
                        var18_4 = 0;
                        var17_5 = "2\u00da#\u00a9\u0083d\u00fd\u00cfd\u00dcc\u0084\u00c7\u0087 \u00a4\u0010\u0093v\u00df\r\u00fb\u00c5\u009a\u0080m\u00ce`S\u00ecKO\u0099\u0010\u0006<\u00ce<\u00a6\u00a81\u00cc=\u00b3|M3r\u00ab\u0096(\u0084\u00c5.\u00e0\u00c3\u00a9\u00d5\u0095^!\u000f\u001f\u00f2\u00b1:\u00a1\u009e\u00ca\u00ddX\u00e2\u00cf\u00d98\u00f8\u0098\u0088\u0088\u00f3&\u00ae[\u00db\u001e\u008cu\u00f1\u0092\u00df\u0084 9\u00b1\u00a5\u0016\u000fd\u00a7?\u0084\u00a2C\u0019\u00bd\u00af\u0003\u00e0\u00f6\f\u0004\u001a;\u0003\u0004K\u001a\u00ed\u00a6\u00c6\u001dO}\u0089 \u0002\u00a5\u00d8'\u00a10\u00f65\u0098V\u0010\u00f4\u0087\u0086\u00e3\u00dbh\u00cb\u009a\u00ad#\u0086C \u00fe\u00173\u00cb_3\u00a5\u008c";
                        var19_6 = "2\u00da#\u00a9\u0083d\u00fd\u00cfd\u00dcc\u0084\u00c7\u0087 \u00a4\u0010\u0093v\u00df\r\u00fb\u00c5\u009a\u0080m\u00ce`S\u00ecKO\u0099\u0010\u0006<\u00ce<\u00a6\u00a81\u00cc=\u00b3|M3r\u00ab\u0096(\u0084\u00c5.\u00e0\u00c3\u00a9\u00d5\u0095^!\u000f\u001f\u00f2\u00b1:\u00a1\u009e\u00ca\u00ddX\u00e2\u00cf\u00d98\u00f8\u0098\u0088\u0088\u00f3&\u00ae[\u00db\u001e\u008cu\u00f1\u0092\u00df\u0084 9\u00b1\u00a5\u0016\u000fd\u00a7?\u0084\u00a2C\u0019\u00bd\u00af\u0003\u00e0\u00f6\f\u0004\u001a;\u0003\u0004K\u001a\u00ed\u00a6\u00c6\u001dO}\u0089 \u0002\u00a5\u00d8'\u00a10\u00f65\u0098V\u0010\u00f4\u0087\u0086\u00e3\u00dbh\u00cb\u009a\u00ad#\u0086C \u00fe\u00173\u00cb_3\u00a5\u008c".length();
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
                            var20_3[var18_4++] = cg.Qd(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "\u00b31\u0086V\u00ee\u0014\u0004\u0088\u0083\u0001\u001dq\u001b\u0095\u0004pG\u00c6\u00b3Ws\u0015\u00cfI\u0010v\u00e6\u00a9\u00af2\u00de\u00f2@\u009d\u00c9\u008c\u00bb4\u00ca\u0084\u000f";
                            var19_6 = "\u00b31\u0086V\u00ee\u0014\u0004\u0088\u0083\u0001\u001dq\u001b\u0095\u0004pG\u00c6\u00b3Ws\u0015\u00cfI\u0010v\u00e6\u00a9\u00af2\u00de\u00f2@\u009d\u00c9\u008c\u00bb4\u00ca\u0084\u000f".length();
                            var16_7 = 24;
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
                            var20_3[var18_4++] = cg.Qd(var21_9).intern();
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
                cg.GQfMq = var20_3;
                cg.XMEkj = new String[8];
                cg.phUmR = new HashMap<K, V>(13);
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
                var6_12 = new long[20];
                var3_13 = 0;
                var4_14 = "B}\u00f4\u00d8\u00fd\u00c7%5^\u00afz\u00a5N>\u0015i}X8\f\u008dC\u00a6\u0084\u00b0\u0096\u00f5g\u00e6Y\u0081@[\u00eb\u0004\u00d0\u0098\u00a7\u00b4\u0094g\u0016_\u00ad\u0090bt:I\u00dd\u0010\u00df)\u009b6\u00e5\u009djv\u00f5\u00e1\u00ba\u0015C\u00e7\u000e\u00a9\u00a4\u007fhZ\u00e4\u00b6IR\u0002\u00fc\u00a50\u008a \u00db\u00edB\u00e2\u00b3\u0006\u00ddo4)\u0090\u009e\u00fe\u009a\u000b\u00bdV_\u00c2\u0017\u00e5j\u0004!\u00efbx\u00e0N\u00909\u00d0\u00e1-J\u00aa\u00dd\u008d\u001e\u0096\u00de\u00fap\u0097\u00d3\u00e4n`\u00ccn\u00000\u0012\u00e5\u000b\u00f4\u009a\u0010\u00de\u0089\u0082\u0093\u0001";
                var5_15 = "B}\u00f4\u00d8\u00fd\u00c7%5^\u00afz\u00a5N>\u0015i}X8\f\u008dC\u00a6\u0084\u00b0\u0096\u00f5g\u00e6Y\u0081@[\u00eb\u0004\u00d0\u0098\u00a7\u00b4\u0094g\u0016_\u00ad\u0090bt:I\u00dd\u0010\u00df)\u009b6\u00e5\u009djv\u00f5\u00e1\u00ba\u0015C\u00e7\u000e\u00a9\u00a4\u007fhZ\u00e4\u00b6IR\u0002\u00fc\u00a50\u008a \u00db\u00edB\u00e2\u00b3\u0006\u00ddo4)\u0090\u009e\u00fe\u009a\u000b\u00bdV_\u00c2\u0017\u00e5j\u0004!\u00efbx\u00e0N\u00909\u00d0\u00e1-J\u00aa\u00dd\u008d\u001e\u0096\u00de\u00fap\u0097\u00d3\u00e4n`\u00ccn\u00000\u0012\u00e5\u000b\u00f4\u009a\u0010\u00de\u0089\u0082\u0093\u0001".length();
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
                    var4_14 = "|oqcy\u0010ee\u0084\u00f5\u009f\u00c1<\u0006\u00ef\u00b9";
                    var5_15 = "|oqcy\u0010ee\u0084\u00f5\u009f\u00c1<\u0006\u00ef\u00b9".length();
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
        cg.QgNXY = var6_12;
        cg.yyYQj = new Integer[20];
    }

    /*
     * Unable to fully structure code
     * Could not resolve type clashes
     */
    @Override
    protected void NV(lC var1_1) {
        block38: {
            block30: {
                var2_2 = cg.kjqzv ^ 17096044552792L;
                super.NV(var1_1);
                var5_3 = lE.joxgd.bYM(7.0f);
                var6_4 = rD.dlM();
                var7_5 = 22.0f;
                var4_6 = ca.OY();
                var8_7 = null;
                var9_8 = this.lkRFs.values().iterator();
                while (var9_8.hasNext()) {
                    block28: {
                        block29: {
                            var10_9 = var9_8.next();
                            var11_10 = ((mM)var10_9).getFadeAnimation();
                            try {
                                try {
                                    v0 = var11_10.dhj();
                                    v1 = 0.0f;
                                    if (!var4_6) break block28;
                                    cfr_temp_0 = v0 - v1;
                                    v2 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                                    if (var4_6) {
                                    }
                                    ** GOTO lbl44
                                }
                                catch (MatchException v3) {
                                    throw cg.Qc(v3);
                                }
                                if (v2) break block29;
                            }
                            catch (MatchException v4) {
                                throw cg.Qc(v4);
                            }
                            var8_7 = var10_9;
                            if (var4_6) continue;
                        }
                        v0 = 4.5f;
                        v1 = var11_10.dhj() - 1.0f;
                    }
                    var12_11 = v0 * v1;
                    var13_13 = rD.dlmvG.getAtlasManager().getAtlasTexture(iW.HaVqD).getSprite(InGameHud.getEffectTexture((RegistryEntry)var10_9.getEffectType()));
                    var1_1.cdY(var13_13.getAtlasId(), this.toIeR + 7.0f * var11_10.dhj(), this.QWaAn + var7_5 + var12_11 + jf.bAH(8.0f, 18.0f), 8.0f, 8.0f, var13_13.getMinU(), var13_13.getMinV(), var13_13.getMaxU(), var13_13.getMaxV(), mG.hoGuU.coa(255.0f * var11_10.dhj()));
                    var7_5 += 18.0f * var11_10.dhj();
                    if (var4_6) continue;
                }
                var7_5 = 22.0f;
                cg.zXCXX.bUa(var5_3);
                var9_8 = this.lkRFs.values().iterator();
                do lbl-1000:
                // 3 sources

                {
                    block37: {
                        block36: {
                            block35: {
                                block34: {
                                    block39: {
                                        block33: {
                                            block32: {
                                                block31: {
                                                    v2 = var9_8.hasNext();
lbl44:
                                                    // 2 sources

                                                    if (!v2) break;
                                                    var10_9 = var9_8.next();
                                                    var11_10 = (StatusEffect)var10_9.getEffectType().value();
                                                    var12_12 = ((mM)var10_9).getFadeAnimation();
                                                    var13_13 = ((mM)var10_9).getTimerAnimation();
                                                    try {
                                                        try {
                                                            v5 = var12_12;
                                                            if (!var4_6) break block30;
                                                            if (v5.dhj() != 0.0f) break block31;
                                                        }
                                                        catch (MatchException v6) {
                                                            throw cg.Qc(v6);
                                                        }
                                                        if (var4_6) ** GOTO lbl-1000
                                                    }
                                                    catch (MatchException v7) {
                                                        throw cg.Qc(v7);
                                                    }
                                                }
                                                var14_14 = var6_4.bjb().coa(255.0f * var12_12.dhj());
                                                try {
                                                    try {
                                                        v8 = var11_10.getName().getString();
                                                        v9 = var10_9.getAmplifier();
                                                        if (!var4_6) break block32;
                                                        if (v9 <= 0) break block33;
                                                    }
                                                    catch (MatchException v10) {
                                                        throw cg.Qc(v10);
                                                    }
                                                    v9 = var10_9.getAmplifier() + 1;
                                                }
                                                catch (MatchException v11) {
                                                    throw cg.Qc(v11);
                                                }
                                            }
                                            v12 = String.valueOf(v9);
                                            break block39;
                                        }
                                        v12 = "";
                                    }
                                    var15_15 = v8 + " " + v12;
                                    var16_16 = -4.5f + 4.5f * var12_12.dhj();
                                    var17_17 = this.toIeR + 13.0f + 7.0f * var12_12.dhj();
                                    var18_18 = this.QWaAn + var7_5 + var16_16 + jf.bAH(var5_3.cat(), 18.0f);
                                    var1_1.cer(var5_3, var15_15, var17_17, var18_18, var14_14);
                                    var19_19 = this.toIeR + this.jTsqG - 7.0f * var12_12.dhj();
                                    try {
                                        try {
                                            v13 = var10_9.isInfinite();
                                            if (!var4_6) break block34;
                                            if (v13 != 0) break block35;
                                        }
                                        catch (MatchException v14) {
                                            throw cg.Qc(v14);
                                        }
                                        v13 = var10_9.getDuration();
                                    }
                                    catch (MatchException v15) {
                                        throw cg.Qc(v15);
                                    }
                                }
                                try {
                                    v16 = cg.Qj("f", (int)22088, (long)(7195861460517715493L ^ var2_2));
                                    if (!var4_6) break block36;
                                    if (v13 >= v16) {
                                    }
                                    ** GOTO lbl114
                                }
                                catch (MatchException v17) {
                                    throw cg.Qc(v17);
                                }
                            }
                            var20_20 = cg.Qg("g", (int)31904, (long)(4802436344857664317L ^ var2_2));
                            try {
                                var1_1.cev(var5_3, (String)cg.Qg("g", (int)31904, (long)(4802436344857664317L ^ var2_2)), var19_19, var18_18, var14_14);
                                if (var4_6) break block37;
lbl114:
                                // 2 sources

                                v13 = var10_9.getDuration();
                                v16 = cg.Qj("f", (int)30520, (long)(1375935685821259603L ^ var2_2));
                            }
                            catch (MatchException v18) {
                                throw cg.Qc(v18);
                            }
                        }
                        var20_21 = v13 / v16;
                        var21_22 = var20_21 / cg.Qj("f", (int)2430, (long)(8900718079139553566L ^ var2_2));
                        var22_23 = var20_21 % cg.Qj("f", (int)2430, (long)(8900718079139553566L ^ var2_2));
                        var23_24 = String.format((String)cg.Qg("g", (int)13655, (long)(6103395322653364940L ^ var2_2)), new Object[]{var21_22});
                        var24_25 = String.format((String)cg.Qg("g", (int)7099, (long)(6140833719285709859L ^ var2_2)), new Object[]{var21_22, var22_23});
                        var25_26 = var5_3.cao(var23_24);
                        var26_27 = var5_3.cao(var24_25);
                        var1_1.cer(var5_3, var23_24, var19_19 - var26_27, var18_18, var14_14);
                        var27_28 = var19_19 - var26_27 + var25_26;
                        var13_13.kS(true, var14_14);
                        var13_13.kO(var22_23);
                        var13_13.sW(var27_28, var18_18);
                        var13_13.su(var1_1);
                    }
                    var7_5 += 18.0f * var12_12.dhj();
                } while (var4_6);
                try {
                    try {
                        cg.zXCXX.endBatch();
                        v5 = var8_7;
                        if (!var4_6) break block30;
                        if (v5 == null) break block38;
                    }
                    catch (MatchException v19) {
                        throw cg.Qc(v19);
                    }
                    v5 = var8_7.getEffectType().value();
                }
                catch (MatchException v20) {
                    throw cg.Qc(v20);
                }
            }
            var9_8 = (StatusEffect)v5;
            this.lkRFs.remove(var9_8.getName().getString(), var8_7);
        }
    }

    /*
     * Could not resolve type clashes
     * Unable to fully structure code
     */
    @Override
    public void LX(lC var1_1) {
        block69: {
            block81: {
                block67: {
                    block60: {
                        var2_2 = cg.kjqzv ^ 29925481139608L;
                        this.jTsqG = 92.0f;
                        this.Xtjvx = 20.0f;
                        var5_3 = rD.dlmvG.player.getStatusEffects();
                        var4_4 = ca.OX();
                        for (Object var7_6 : var5_3) {
                            block66: {
                                block63: {
                                    block65: {
                                        block64: {
                                            block61: {
                                                block62: {
                                                    var8_7 = (StatusEffect)var7_6.getEffectType().value();
                                                    var9_8 = var8_7.getName().getString();
                                                    try {
                                                        try {
                                                            try {
                                                                v0 = var9_8.isBlank();
                                                                if (var4_4) break block60;
                                                                if (var4_4) break block61;
                                                            }
                                                            catch (MatchException v1) {
                                                                throw cg.Qc(v1);
                                                            }
                                                            if (!v0) break block62;
                                                        }
                                                        catch (MatchException v2) {
                                                            throw cg.Qc(v2);
                                                        }
                                                        if (!var4_4) continue;
                                                    }
                                                    catch (MatchException v3) {
                                                        throw cg.Qc(v3);
                                                    }
                                                }
                                                try {
                                                    v4 = this.lkRFs;
                                                    v5 = var9_8;
                                                    if (var4_4) break block63;
                                                    v6 = v4.containsKey(v5);
                                                }
                                                catch (MatchException v7) {
                                                    throw cg.Qc(v7);
                                                }
                                            }
                                            if (!v6) ** GOTO lbl57
                                            this.lkRFs.replace((String)var9_8, (StatusEffectInstance)var7_6);
                                            var10_9 = ((mM)var7_6).getFadeAnimation();
                                            try {
                                                try {
                                                    v8 = var10_9;
                                                    if (var4_4) break block64;
                                                    if (v8.dhj() != 0.0f) break block65;
                                                }
                                                catch (MatchException v9) {
                                                    throw cg.Qc(v9);
                                                }
                                                v8 = var10_9;
                                            }
                                            catch (MatchException v10) {
                                                throw cg.Qc(v10);
                                            }
                                        }
                                        v8.dhe(1.0f);
                                    }
                                    try {
                                        if (!var4_4) break block66;
lbl57:
                                        // 2 sources

                                        v4 = this.lkRFs;
                                        v5 = var9_8;
                                    }
                                    catch (MatchException v11) {
                                        throw cg.Qc(v11);
                                    }
                                }
                                v4.put(v5, (StatusEffectInstance)var7_6);
                            }
                            if (!var4_4) continue;
                        }
                        try {
                            v12 = this;
                            if (var4_4) break block67;
                            v0 = v12.lkRFs.isEmpty();
                        }
                        catch (MatchException v13) {
                            throw cg.Qc(v13);
                        }
                    }
                    if (v0) break block81;
                    v12 = this;
                }
                v12.Xtjvx += 5.0f;
            }
            var6_5 = lE.joxgd.bYM(7.0f);
            for (StatusEffect var8_7 : this.lkRFs.values()) {
                block80: {
                    block79: {
                        block78: {
                            block77: {
                                block83: {
                                    block76: {
                                        block75: {
                                            block74: {
                                                block68: {
                                                    block70: {
                                                        block73: {
                                                            block82: {
                                                                block72: {
                                                                    block71: {
                                                                        var9_8 = ((mM)var8_7).getFadeAnimation();
                                                                        var10_9 = (StatusEffect)var8_7.getEffectType().value();
                                                                        try {
                                                                            try {
                                                                                try {
                                                                                    try {
                                                                                        try {
                                                                                            if (var4_4) break block68;
                                                                                            v14 = this;
                                                                                            if (var4_4) break block69;
                                                                                        }
                                                                                        catch (MatchException v15) {
                                                                                            throw cg.Qc(v15);
                                                                                        }
                                                                                        if (!v14.KsSMf.WF()) break block70;
                                                                                    }
                                                                                    catch (MatchException v16) {
                                                                                        throw cg.Qc(v16);
                                                                                    }
                                                                                    v17 = var10_9.getName().getString();
                                                                                    v18 = var8_7.getAmplifier();
                                                                                    if (var4_4) break block71;
                                                                                }
                                                                                catch (MatchException v19) {
                                                                                    throw cg.Qc(v19);
                                                                                }
                                                                                if (v18 <= 0) break block72;
                                                                            }
                                                                            catch (MatchException v20) {
                                                                                throw cg.Qc(v20);
                                                                            }
                                                                            v18 = var8_7.getAmplifier() + 1;
                                                                        }
                                                                        catch (MatchException v21) {
                                                                            throw cg.Qc(v21);
                                                                        }
                                                                    }
                                                                    v22 = v18;
                                                                    break block82;
                                                                }
                                                                v22 = "";
                                                            }
                                                            var11_10 = v17 + " " + String.valueOf(v22);
                                                            try {
                                                                try {
                                                                    try {
                                                                        try {
                                                                            try {
                                                                                v23 /* !! */  = rD.dlmvG.player;
                                                                                if (var4_4) break block70;
                                                                                if (!v23 /* !! */ .hasStatusEffect(var8_7.getEffectType())) {
                                                                                }
                                                                                ** GOTO lbl161
                                                                            }
                                                                            catch (MatchException v24) {
                                                                                throw cg.Qc(v24);
                                                                            }
                                                                            v25 = this.XXdvi.getOrDefault(var10_9, false);
                                                                            if (var4_4) break block73;
                                                                        }
                                                                        catch (MatchException v26) {
                                                                            throw cg.Qc(v26);
                                                                        }
                                                                        if (v25) break block70;
                                                                    }
                                                                    catch (MatchException v27) {
                                                                        throw cg.Qc(v27);
                                                                    }
                                                                    v28 = var10_9;
                                                                    if (var4_4) break block74;
                                                                }
                                                                catch (MatchException v29) {
                                                                    throw cg.Qc(v29);
                                                                }
                                                                v25 = v28.getCategory().equals((Object)StatusEffectCategory.HARMFUL);
                                                            }
                                                            catch (MatchException v30) {
                                                                throw cg.Qc(v30);
                                                            }
                                                        }
                                                        try {
                                                            try {
                                                                if (v25) break block70;
                                                                cN.XQ((String)cg.Qg("g", (int)31255, (long)(8860898950464860745L ^ var2_2)) + (String)var11_10 + (String)cg.Qg("g", (int)10882, (long)(3499432574078264027L ^ var2_2)), (String)cg.Qg("g", (int)7359, (long)(8031778270325839072L ^ var2_2)));
                                                                this.XXdvi.put((StatusEffect)var10_9, true);
                                                                if (!var4_4) break block70;
                                                            }
                                                            catch (MatchException v31) {
                                                                throw cg.Qc(v31);
                                                            }
lbl161:
                                                            // 2 sources

                                                            v23 /* !! */  = this.XXdvi.put((StatusEffect)var10_9, false);
                                                        }
                                                        catch (MatchException v32) {
                                                            throw cg.Qc(v32);
                                                        }
                                                    }
                                                    var9_8.dhc(var5_3.contains(var8_7));
                                                    var9_8.dhs(rj.XzDkv);
                                                }
                                                v28 = var10_9;
                                            }
                                            try {
                                                try {
                                                    v33 = v28.getName().getString();
                                                    v34 = var8_7.getAmplifier();
                                                    if (var4_4) break block75;
                                                    if (v34 <= 0) break block76;
                                                }
                                                catch (MatchException v35) {
                                                    throw cg.Qc(v35);
                                                }
                                                v34 = var8_7.getAmplifier() + 1;
                                            }
                                            catch (MatchException v36) {
                                                throw cg.Qc(v36);
                                            }
                                        }
                                        v37 = v34;
                                        break block83;
                                    }
                                    v37 = "";
                                }
                                var11_10 = v33 + " " + String.valueOf(v37);
                                var12_11 = var6_5.cao(var11_10);
                                try {
                                    try {
                                        v38 = var8_7.isInfinite();
                                        if (var4_4) break block77;
                                        if (v38 != 0) break block78;
                                    }
                                    catch (MatchException v39) {
                                        throw cg.Qc(v39);
                                    }
                                    v38 = var8_7.getDuration();
                                }
                                catch (MatchException v40) {
                                    throw cg.Qc(v40);
                                }
                            }
                            try {
                                v41 = cg.Qj("f", (int)22872, (long)(7285557963839413992L ^ var2_2));
                                if (var4_4) break block79;
                                if (v38 >= v41) {
                                }
                                ** GOTO lbl218
                            }
                            catch (MatchException v42) {
                                throw cg.Qc(v42);
                            }
                        }
                        var13_12 = cg.Qg("g", (int)25873, (long)(6279610284547665229L ^ var2_2));
                        try {
                            if (!var4_4) break block80;
lbl218:
                            // 2 sources

                            v38 = var8_7.getDuration();
                            v41 = cg.Qj("f", (int)27560, (long)(44593545406196737L ^ var2_2));
                        }
                        catch (MatchException v43) {
                            throw cg.Qc(v43);
                        }
                    }
                    var14_14 = v38 / v41;
                    var15_16 = var14_14 / cg.Qj("f", (int)22640, (long)(5650285629085065174L ^ var2_2));
                    var16_18 = var14_14 % cg.Qj("f", (int)2430, (long)(8900704220790345438L ^ var2_2));
                    var13_12 = String.format((String)cg.Qg("g", (int)25358, (long)(841274481665010516L ^ var2_2)), new Object[]{var15_16, var16_18});
                }
                var14_13 = var6_5.cao((String)var13_12);
                var15_15 = 7.0f;
                var16_17 = 8.0f;
                var17_19 = var15_15 + var16_17 + var12_11 + 14.0f + var14_13 + var15_15;
                this.jTsqG = Math.max(var17_19, this.jTsqG);
                this.Xtjvx += 18.0f * var9_8.dhj();
                if (!var4_4) continue;
            }
            v14 = this;
        }
        super.LX(var1_1);
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
                            long l2 = kjqzv ^ 0xC01ED29E772L;
                            bl4 = ca.OX();
                            try {
                                bl3 = this.lkRFs.isEmpty();
                                if (bl4) break block8;
                                if (bl3) break block9;
                            }
                            catch (MatchException matchException) {
                                throw cg.Qc(matchException);
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
                                throw cg.Qc(matchException);
                            }
                            bl2 = bl6;
                            if (bl4) break block10;
                        }
                        catch (MatchException matchException) {
                            throw cg.Qc(matchException);
                        }
                        if (!bl2) break block12;
                    }
                    catch (MatchException matchException) {
                        throw cg.Qc(matchException);
                    }
                }
                bl2 = true;
                break block10;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static String Qe(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0xE48;
        if (XMEkj[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])ysebq.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ysebq.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cg", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = GQfMq[n3].getBytes("ISO-8859-1");
            cg.XMEkj[n3] = cg.Qd(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return XMEkj[n3];
    }

    @hG
    public void Qb(gM gM2) {
        this.lkRFs.clear();
        this.XXdvi.clear();
    }

    private static MatchException Qc(MatchException matchException) {
        return matchException;
    }

    private static CallSite Qj(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cg" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite Qg(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cg" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String Qd(byte[] byArray) {
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

    private static Object Qf(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cg.Qe(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static int Qh(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x41B4;
        if (yyYQj[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = QgNXY[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])phUmR.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    phUmR.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cg", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cg.yyYQj[n3] = n4;
        }
        return yyYQj[n3];
    }

    private static int Qi(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cg.Qh(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cg.class, "Qi", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
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
            return MethodHandles.lookup().findStatic(cg.class, "Qf", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

