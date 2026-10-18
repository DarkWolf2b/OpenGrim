/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gui.screen.ChatScreen
 *  net.minecraft.util.math.Vec2f
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.time.LocalTime;
import java.time.format.DateTimeFormatter;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.gui.screen.ChatScreen;
import net.minecraft.util.math.Vec2f;
import sixtwo.ap;
import sixtwo.cB;
import sixtwo.cJ;
import sixtwo.cM;
import sixtwo.cN;
import sixtwo.cO;
import sixtwo.ca;
import sixtwo.cr;
import sixtwo.ct;
import sixtwo.cu;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jH;
import sixtwo.jk;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mA;
import sixtwo.mT;
import sixtwo.mr;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;
import sixtwo.rm;

public class cb
extends cr {
    private final ct fuYts;
    private final cu HhBiN;
    private final cu XyRrY;
    private final cu SqYxj;
    private final ct QBiNJ;
    private final cu ueekw;
    private final cu ubjWn;
    private final cJ DlqAM;
    private final mT JIyxO;
    private final rk DQmMN;
    private final rk llsxp;
    private final cO ubdhS;
    private static final long wnjCO;
    private static final String[] LcMNI;
    private static final String[] hBOJC;
    private static final Map dZkQt;
    private static final long[] bYzvb;
    private static final Integer[] qFnKt;
    private static final Map vUFwR;
    private static final long cIHkd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cb() {
        block4: {
            boolean bl2;
            block6: {
                block5: {
                    long l2 = wnjCO ^ 0x66C7837072E6L;
                    int[] nArray = new int[cb.Pv("z", (int)6595, (long)(0x5796F0E1A15F6303L ^ l2))];
                    nArray[0] = (int)cb.Pv("z", (int)13941, (long)(0x7CAE32FFD1554CAFL ^ l2));
                    nArray[1] = (int)cb.Pv("z", (int)7374, (long)(0x41E6DF2BF2CB6603L ^ l2));
                    nArray[2] = (int)cb.Pv("z", (int)14499, (long)(0x13E654613337C269L ^ l2));
                    nArray[3] = (int)cb.Pv("z", (int)30883, (long)(0x564C0A978C730276L ^ l2));
                    nArray[4] = (int)cb.Pv("z", (int)23867, (long)(0x52A28A58E7A27C2L ^ l2));
                    nArray[5] = (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2));
                    nArray[cb.Pv("z", (int)26163, (long)(0x5164A18C48B51CEBL ^ l2))] = (int)cb.Pv("z", (int)3116, (long)(0xF5071D48F8E76E4L ^ l2));
                    nArray[cb.Pv("z", (int)6193, (long)(0x404B85248B6D62A2L ^ l2))] = (int)cb.Pv("z", (int)7445, (long)(0xBA99D275A07E7D7L ^ l2));
                    nArray[cb.Pv("z", (int)27212, (long)(0x19BBA71BD7D510B8L ^ l2))] = (int)cb.Pv("z", (int)13630, (long)(0x39C27C08517E4FDFL ^ l2));
                    nArray[cb.Pv("z", (int)32114, (long)(0x4BD2E1AAFE27079BL ^ l2))] = (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2));
                    nArray[cb.Pv("z", (int)6433, (long)(0x38E80D6DCB72E3D2L ^ l2))] = (int)cb.Pv("z", (int)15593, (long)(0x10B30271A531C613L ^ l2));
                    nArray[cb.Pv("z", (int)1034, (long)(0x201652F21B637E9AL ^ l2))] = (int)cb.Pv("z", (int)2361, (long)(0x54C1C049F57A73AEL ^ l2));
                    nArray[cb.Pv("z", (int)29462, (long)(0x5098AE7D8A2D89C9L ^ l2))] = (int)cb.Pv("z", (int)11737, (long)(0x75F55470DCE35715L ^ l2));
                    super(nArray, lf.YIqMP);
                    int[] nArray2 = new int[cb.Pv("z", (int)19203, (long)(0x76FC3FE5EE1731C4L ^ l2))];
                    nArray2[0] = (int)cb.Pv("z", (int)16205, (long)(0x1BE09CE5EDE4C590L ^ l2));
                    nArray2[1] = (int)cb.Pv("z", (int)15593, (long)(0x10B30271A531C613L ^ l2));
                    nArray2[2] = (int)cb.Pv("z", (int)22715, (long)(0x46386E7A4C812268L ^ l2));
                    nArray2[3] = (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2));
                    nArray2[4] = (int)cb.Pv("z", (int)13630, (long)(0x39C27C08517E4FDFL ^ l2));
                    nArray2[5] = (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2));
                    nArray2[cb.Pv("z", (int)12217, (long)(0x362D66E1A6A25569L ^ l2))] = (int)cb.Pv("z", (int)15593, (long)(0x10B30271A531C613L ^ l2));
                    nArray2[cb.Pv("z", (int)1946, (long)(0x6061063F3D167D68L ^ l2))] = (int)cb.Pv("z", (int)13585, (long)(0x216953477E88CFCDL ^ l2));
                    this.fuYts = new ct(this, mr.clS(nArray2)).SO(1);
                    this.HhBiN = new cu(this.fuYts, mr.clS(new int[]{(int)cb.Pv("z", (int)28037, (long)(0x3B6425BCB249977DL ^ l2)), (int)cb.Pv("z", (int)1400, (long)(0x67C4FE0A231FFF9FL ^ l2)), (int)cb.Pv("z", (int)5935, (long)(0xDE3B9E1D7F06DCFL ^ l2)), (int)cb.Pv("z", (int)13630, (long)(0x39C27C08517E4FDFL ^ l2))}));
                    int[] nArray3 = new int[cb.Pv("z", (int)12217, (long)(0x362D66E1A6A25569L ^ l2))];
                    nArray3[0] = (int)cb.Pv("z", (int)26296, (long)(0x76AF3BDAE8211C50L ^ l2));
                    nArray3[1] = (int)cb.Pv("z", (int)26186, (long)(0x39944E3BC7311CBBL ^ l2));
                    nArray3[2] = (int)cb.Pv("z", (int)13585, (long)(0x216953477E88CFCDL ^ l2));
                    nArray3[3] = (int)cb.Pv("z", (int)13630, (long)(0x39C27C08517E4FDFL ^ l2));
                    nArray3[4] = (int)cb.Pv("z", (int)26186, (long)(0x39944E3BC7311CBBL ^ l2));
                    nArray3[5] = (int)cb.Pv("z", (int)6835, (long)(0x6ADC431FE9F3E075L ^ l2));
                    this.XyRrY = new cu(this.fuYts, mr.clS(nArray3));
                    this.SqYxj = new cu(this.fuYts, mr.clS(new int[]{(int)cb.Pv("z", (int)15169, (long)(0x757AAC0AEBCC4182L ^ l2)), (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2)), (int)cb.Pv("z", (int)20730, (long)(0x2DD19435A75AA06L ^ l2)), (int)cb.Pv("z", (int)29647, (long)(0x64E37A6605160914L ^ l2)), (int)cb.Pv("z", (int)13630, (long)(0x39C27C08517E4FDFL ^ l2))}));
                    int[] nArray4 = new int[cb.Pv("z", (int)4124, (long)(0x7B1996F89E8AEADDL ^ l2))];
                    nArray4[0] = (int)cb.Pv("z", (int)9882, (long)(0x421E0BEA2C0DDC67L ^ l2));
                    nArray4[1] = (int)cb.Pv("z", (int)17032, (long)(0x66CDFA0B13243841L ^ l2));
                    nArray4[2] = (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2));
                    nArray4[3] = (int)cb.Pv("z", (int)9757, (long)(0x2D7950C3DD405CCAL ^ l2));
                    nArray4[4] = (int)cb.Pv("z", (int)13585, (long)(0x216953477E88CFCDL ^ l2));
                    nArray4[5] = (int)cb.Pv("z", (int)31185, (long)(0x68CBC7EC7AB1032FL ^ l2));
                    nArray4[cb.Pv("z", (int)12217, (long)(0x362D66E1A6A25569L ^ l2))] = (int)cb.Pv("z", (int)26186, (long)(0x39944E3BC7311CBBL ^ l2));
                    nArray4[cb.Pv("z", (int)1946, (long)(0x6061063F3D167D68L ^ l2))] = (int)cb.Pv("z", (int)13585, (long)(0x216953477E88CFCDL ^ l2));
                    nArray4[cb.Pv("z", (int)19203, (long)(0x76FC3FE5EE1731C4L ^ l2))] = (int)cb.Pv("z", (int)13630, (long)(0x39C27C08517E4FDFL ^ l2));
                    this.QBiNJ = new ct(this, mr.clS(nArray4)).SO(0);
                    this.ueekw = new cu(this.QBiNJ, mr.clS(new int[]{(int)cb.Pv("z", (int)32601, (long)(0x69ABDC62B94385A6L ^ l2)), (int)cb.Pv("z", (int)15593, (long)(0x10B30271A531C613L ^ l2)), (int)cb.Pv("z", (int)27008, (long)(0x1412B8F4660A137BL ^ l2))}));
                    boolean bl3 = ca.OY();
                    try {
                        try {
                            int[] nArray5 = new int[cb.Pv("z", (int)12217, (long)(0x362D66E1A6A25569L ^ l2))];
                            nArray5[0] = (int)cb.Pv("z", (int)1303, (long)(0x7762ABCB4A4BFFFCL ^ l2));
                            nArray5[1] = (int)cb.Pv("z", (int)15593, (long)(0x10B30271A531C613L ^ l2));
                            nArray5[2] = (int)cb.Pv("z", (int)13630, (long)(0x39C27C08517E4FDFL ^ l2));
                            nArray5[3] = (int)cb.Pv("z", (int)13630, (long)(0x39C27C08517E4FDFL ^ l2));
                            nArray5[4] = (int)cb.Pv("z", (int)15593, (long)(0x10B30271A531C613L ^ l2));
                            nArray5[5] = (int)cb.Pv("z", (int)11313, (long)(0x210FE1E7A049D6E5L ^ l2));
                            this.ubjWn = new cu(this.QBiNJ, mr.clS(nArray5));
                            int[] nArray6 = new int[cb.Pv("z", (int)1946, (long)(0x6061063F3D167D68L ^ l2))];
                            nArray6[0] = (int)cb.Pv("z", (int)23220, (long)(0x48507062E9C2207AL ^ l2));
                            nArray6[1] = (int)cb.Pv("z", (int)15593, (long)(0x10B30271A531C613L ^ l2));
                            nArray6[2] = (int)cb.Pv("z", (int)30737, (long)(0x57D4C582AC182E6L ^ l2));
                            nArray6[3] = (int)cb.Pv("z", (int)15593, (long)(0x10B30271A531C613L ^ l2));
                            nArray6[4] = (int)cb.Pv("z", (int)19, (long)(0x724BF881ECF47A85L ^ l2));
                            nArray6[5] = (int)cb.Pv("z", (int)26186, (long)(0x39944E3BC7311CBBL ^ l2));
                            nArray6[cb.Pv("z", (int)12217, (long)(0x362D66E1A6A25569L ^ l2))] = (int)cb.Pv("z", (int)745, (long)(0x7B566FFB08B7F803L ^ l2));
                            this.DlqAM = new cJ(this, mr.clS(nArray6)).WE(false);
                            this.JIyxO = mT.cpz();
                            this.DQmMN = new rk((int)cb.Pv("z", (int)14373, (long)(0x4DB58036F0E342B7L ^ l2))).dhs(rj.UPXqT);
                            this.llsxp = new rk((int)cb.Pv("z", (int)12729, (long)(0x4872C3F61FB34B60L ^ l2))).dhs(rj.UPXqT);
                            int[] nArray7 = new int[cb.Pv("z", (int)6316, (long)(0x5AA758CEB45B625AL ^ l2))];
                            nArray7[0] = (int)cb.Pv("z", (int)4320, (long)(0x6F57FA28DABD6A24L ^ l2));
                            nArray7[1] = (int)cb.Pv("z", (int)18233, (long)(0x2DCF68C426833DC9L ^ l2));
                            nArray7[2] = (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2));
                            nArray7[3] = (int)cb.Pv("z", (int)22715, (long)(0x46386E7A4C812268L ^ l2));
                            nArray7[4] = (int)cb.Pv("z", (int)31301, (long)(0xCB823F120AE0097L ^ l2));
                            nArray7[5] = (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2));
                            nArray7[cb.Pv("z", (int)12217, (long)(0x362D66E1A6A25569L ^ l2))] = (int)cb.Pv("z", (int)22715, (long)(0x46386E7A4C812268L ^ l2));
                            nArray7[cb.Pv("z", (int)1946, (long)(0x6061063F3D167D68L ^ l2))] = (int)cb.Pv("z", (int)21413, (long)(0x59BCD94FAD9EA94AL ^ l2));
                            nArray7[cb.Pv("z", (int)19203, (long)(0x76FC3FE5EE1731C4L ^ l2))] = (int)cb.Pv("z", (int)4140, (long)(0x3E4A792F4D92EAC2L ^ l2));
                            nArray7[cb.Pv("z", (int)4124, (long)(0x7B1996F89E8AEADDL ^ l2))] = (int)cb.Pv("z", (int)15593, (long)(0x10B30271A531C613L ^ l2));
                            nArray7[cb.Pv("z", (int)21592, (long)(0x1C20433B37B92EBDL ^ l2))] = (int)cb.Pv("z", (int)13630, (long)(0x39C27C08517E4FDFL ^ l2));
                            nArray7[cb.Pv("z", (int)31936, (long)(0x2991346D23CC0623L ^ l2))] = (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2));
                            nArray7[cb.Pv("z", (int)21099, (long)(0x7EF55015628BA8FAL ^ l2))] = (int)cb.Pv("z", (int)5935, (long)(0xDE3B9E1D7F06DCFL ^ l2));
                            nArray7[cb.Pv("z", (int)12582, (long)(0x3CB707DDB7CACBF8L ^ l2))] = (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2));
                            nArray7[cb.Pv("z", (int)26130, (long)(0x6BF02750EA6E1C87L ^ l2))] = (int)cb.Pv("z", (int)16770, (long)(0x69AF492F92DD3B6FL ^ l2));
                            nArray7[cb.Pv("z", (int)27476, (long)(0x256FE649ED979182L ^ l2))] = (int)cb.Pv("z", (int)17922, (long)(0x28B1B10A03023CEEL ^ l2));
                            nArray7[cb.Pv("z", (int)19646, (long)(0x4D0135201B06364BL ^ l2))] = (int)cb.Pv("z", (int)13630, (long)(0x39C27C08517E4FDFL ^ l2));
                            nArray7[cb.Pv("z", (int)13049, (long)(0x63F6D37B3730C81DL ^ l2))] = (int)cb.Pv("z", (int)29212, (long)(0x64F0D7F75F1788D9L ^ l2));
                            nArray7[cb.Pv("z", (int)10912, (long)(0x19DC1D69EFD3D046L ^ l2))] = (int)cb.Pv("z", (int)15593, (long)(0x10B30271A531C613L ^ l2));
                            nArray7[cb.Pv("z", (int)11353, (long)(0x731589195500D688L ^ l2))] = (int)cb.Pv("z", (int)13585, (long)(0x216953477E88CFCDL ^ l2));
                            nArray7[cb.Pv("z", (int)12125, (long)(0x5EDADA79E875D592L ^ l2))] = (int)cb.Pv("z", (int)10433, (long)(0x7E53C904CF715223L ^ l2));
                            this.ubdhS = new cO(nArray7, cM.MENWL);
                            this.LkpAS = true;
                            if (iS.bwL() != null) break block4;
                            if (!bl3) break block5;
                        }
                        catch (MatchException matchException) {
                            throw cb.Po(matchException);
                        }
                        bl2 = false;
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw cb.Po(matchException);
                    }
                }
                bl2 = true;
            }
            ca.OW(bl2);
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block24: {
            block23: {
                block22: {
                    block21: {
                        block20: {
                            cb.wnjCO = gb.aYR(-2867794482669780847L, -4922495639708815465L, MethodHandles.lookup().lookupClass()).a(124734560512399L);
                            cb.dZkQt = new HashMap<K, V>(13);
                            var16 = cb.wnjCO ^ 127682467402525L;
                            var18_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                            v0 = SecretKeyFactory.getInstance("DES");
                            v1 = new byte[8];
                            v2 = v1;
                            v1[0] = (byte)(var16 >>> 56);
                            for (var19_2 = 1; var19_2 < 8; ++var19_2) {
                                v2 = v2;
                                v2[var19_2] = (byte)(var16 << var19_2 * 8 >>> 56);
                            }
                            var18_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                            var25_3 = new String[4];
                            var23_4 = 0;
                            var22_5 = "\u000b\u009a\u00fd\u0002\u00df\u008d\u0000\u00dfF\u00015\u00d6$\u00f9\u00c97\u0010\u009f\u0081\u00142+\u00925Y\u00a3C\u0097Q\u00b7I \u00ee";
                            var24_6 = "\u000b\u009a\u00fd\u0002\u00df\u008d\u0000\u00dfF\u00015\u00d6$\u00f9\u00c97\u0010\u009f\u0081\u00142+\u00925Y\u00a3C\u0097Q\u00b7I \u00ee".length();
                            var21_7 = 16;
                            var20_8 = -1;
lbl20:
                            // 2 sources

                            while (true) {
                                v3 = ++var20_8;
                                v4 = var22_5.substring(v3, v3 + var21_7);
                                v5 = -1;
                                break block20;
                                break;
                            }
lbl25:
                            // 1 sources

                            while (true) {
                                var25_3[var23_4++] = cb.Pp(var26_9).intern();
                                if ((var20_8 += var21_7) < var24_6) {
                                    var21_7 = var22_5.charAt(var20_8);
                                    ** continue;
                                }
                                var22_5 = "\u00d5\u0095\u00d0\u009b\u00c1f\t$ZD\u008bV\u009d\u00df\u0085\u00ecF\u00cf!V\u0095\u00e5\u0089\u0091\"\u00a70\u00ba\u009ffS\u0092\u0010+f)\u00a1\u008bAu\u00ff\u00e7:TJ\u0004O\u0016F";
                                var24_6 = "\u00d5\u0095\u00d0\u009b\u00c1f\t$ZD\u008bV\u009d\u00df\u0085\u00ecF\u00cf!V\u0095\u00e5\u0089\u0091\"\u00a70\u00ba\u009ffS\u0092\u0010+f)\u00a1\u008bAu\u00ff\u00e7:TJ\u0004O\u0016F".length();
                                var21_7 = 32;
                                var20_8 = -1;
lbl34:
                                // 2 sources

                                while (true) {
                                    v6 = ++var20_8;
                                    v4 = var22_5.substring(v6, v6 + var21_7);
                                    v5 = 0;
                                    break block20;
                                    break;
                                }
                                break;
                            }
lbl39:
                            // 1 sources

                            while (true) {
                                var25_3[var23_4++] = cb.Pp(var26_9).intern();
                                if ((var20_8 += var21_7) < var24_6) {
                                    var21_7 = var22_5.charAt(var20_8);
                                    ** continue;
                                }
                                break block21;
                                break;
                            }
                        }
                        var26_9 = var18_1.doFinal(v4.getBytes("ISO-8859-1"));
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
                    cb.LcMNI = var25_3;
                    cb.hBOJC = new String[4];
                    cb.vUFwR = new HashMap<K, V>(13);
                    var5_10 = Cipher.getInstance("DES/CBC/NoPadding");
                    v7 = SecretKeyFactory.getInstance("DES");
                    v8 = new byte[8];
                    v9 = v8;
                    v8[0] = (byte)(var16 >>> 56);
                    for (var6_11 = 1; var6_11 < 8; ++var6_11) {
                        v9 = v9;
                        v9[var6_11] = (byte)(var16 << var6_11 * 8 >>> 56);
                    }
                    var5_10.init(2, (Key)v7.generateSecret(new DESKeySpec(v9)), new IvParameterSpec(new byte[8]));
                    var11_12 = new long[71];
                    var8_13 = 0;
                    var9_14 = "\u00bawaL%O\u00f2\u009aw\u00fe\u00ebnzTNAdL\u00b0\u00ac\u001a\u00a8\u00de\u00bf\u00f0o\u00b2\u008a\u00d7\u00b7d\u0094i\u00b9B\u00b6QiUd\u00afT\u0000\u001axD\n/\nq\u00bd\u00d0\u00e0?\u00c5<\u0081yU}9\u00c5b\u00dad\u0015\b\b\u00f0x\u0007`\u00ea\u009f\u00a1\"\u009a\r'\u008dye\u00f9\u0002-\u00c2\u00cfM1\u0010\u008a\u0018\u00f4H<\u008e\u00fe\n8\u00ae\u00f5\u00a0\u00c8\u00f1\u00f0\u00a5\u00ccDc\u0004x\u0016`\u0012\u00f6\u00cd\u00f0\u00f859N'\u00b5y\u0000\u00d8]\b\u00d3\u001b\u00cdw:\u0080DwU\u00d2\u00d0\u00a1\u00d9\u00fa\u00c0\u00ebwL*\u00f7\u00fb\u00b3\u00ec\u00ff\u0017k\u0005\f\u00f0\u00b2L&pg\u00b1\u00c0\u00c7}\u00f6w\u009c\u00cd\u001e\u0010\u000f\u00c0\u0093L!\u00c5\u00c5\u0010-\u00afe\bq\u0017\u00cc\u000f\u00d1\u00f2\u00c8\u00d0\u00a7.u\u0010\u00df\u0005\u00f4\u00e0\u00a9\u0088\u00ce\u00a5\u00c7\u00fd/\u00a5'XS\u00bb>\bq\u00e4]c\u0015\u00b9s0\u0086\u00c9C\u00a7{\u0087\u00fd\u00ba\u009f\u00d0\u00eb\u00c6\\\u00f8lz\u000f\u00ad\u00aa\u00e2\u00ae(\u0006\u00dc\u00fcJ!\u00ec\u0084r\u0087Z\u00b9&\u00c8\u0096S\u00d7\"X$\u0007*fB\u00c4\u00a6*\u00e2\u00e7\u0002\u0015\u00b3\u00d6\u00bc)p!B\u00a9\u0080<\u009a\t\u00b8l\u000f\u0018fd%\u00a4\\\u00a83\u00bd\u00c9\u00dfL\"S\u0091\u0080\u000eq:\u00a5\u0001\u00a9\u00d1N\u00fbx\u00eb\u00cc(}]\u00a5\u0096\u00f4\u009a\u00cb0\u00045K\u0016\u0003R\u0099LCv/iwk\u00c2\u0007\u00983Z\u00b4\u00d3\u00b6.@\u001ccK\u00b6/x/\u00b3\u001d\n\u00c57\u008e\u00fe\u00b4,kHnV3!\u00f0\u00c3\u00cb[\u00e1n\u00b8\u00df\u00fat]\u00c6y\u001d\u008f1\u00a3\u00a3\u00ad\u00be\u00fdV\u00e8`\u00f2$\u00de\u009b\u00b7*k\u00fc\u00e9C\u00a9\u00a9W!\u00d6@\u00bds\u00cfP\u00df`\u0082F\u00ef\u008d\u0095\u00d6\u001ac\u0098O\u0002\u009a\u00ddU\u00f9z\u00f6\u00a9\u00b8\u0017\u0097\u00f8\u0002\u0000s\u00d1\u00fedJ\u001dWs\u000b\u00d3\u00cdnm\u00d3\u0094\u0086\u008b\u0005c]\u00e0\u009c\u0016\u00fd\u00bb\u00c3\u00cf&\u00df\u00dbF;n\u00b2N4r$\u0082(1b23\u00dd\u00ef\u00c8;\u00ccWu\u00cf\u00b3cZ8\u00eb\u009fE\u0090n^N\u00e3\u00c5\u0092\u00f0\u001d\u00d9\u00e3\u00b8\u0091o\u008c\u00ca\u00d9\u00e1)\u00c0\u0080F\u00bfXMI\u00c2<\u00da|\u00f0qr\u008e\u009c\u00fb\r\u00e8G\u00ec\u00f1\u0096\u0011f\u00e8\u00ff\u00b4\u00e3\u00a5X\u00e8";
                    var10_15 = "\u00bawaL%O\u00f2\u009aw\u00fe\u00ebnzTNAdL\u00b0\u00ac\u001a\u00a8\u00de\u00bf\u00f0o\u00b2\u008a\u00d7\u00b7d\u0094i\u00b9B\u00b6QiUd\u00afT\u0000\u001axD\n/\nq\u00bd\u00d0\u00e0?\u00c5<\u0081yU}9\u00c5b\u00dad\u0015\b\b\u00f0x\u0007`\u00ea\u009f\u00a1\"\u009a\r'\u008dye\u00f9\u0002-\u00c2\u00cfM1\u0010\u008a\u0018\u00f4H<\u008e\u00fe\n8\u00ae\u00f5\u00a0\u00c8\u00f1\u00f0\u00a5\u00ccDc\u0004x\u0016`\u0012\u00f6\u00cd\u00f0\u00f859N'\u00b5y\u0000\u00d8]\b\u00d3\u001b\u00cdw:\u0080DwU\u00d2\u00d0\u00a1\u00d9\u00fa\u00c0\u00ebwL*\u00f7\u00fb\u00b3\u00ec\u00ff\u0017k\u0005\f\u00f0\u00b2L&pg\u00b1\u00c0\u00c7}\u00f6w\u009c\u00cd\u001e\u0010\u000f\u00c0\u0093L!\u00c5\u00c5\u0010-\u00afe\bq\u0017\u00cc\u000f\u00d1\u00f2\u00c8\u00d0\u00a7.u\u0010\u00df\u0005\u00f4\u00e0\u00a9\u0088\u00ce\u00a5\u00c7\u00fd/\u00a5'XS\u00bb>\bq\u00e4]c\u0015\u00b9s0\u0086\u00c9C\u00a7{\u0087\u00fd\u00ba\u009f\u00d0\u00eb\u00c6\\\u00f8lz\u000f\u00ad\u00aa\u00e2\u00ae(\u0006\u00dc\u00fcJ!\u00ec\u0084r\u0087Z\u00b9&\u00c8\u0096S\u00d7\"X$\u0007*fB\u00c4\u00a6*\u00e2\u00e7\u0002\u0015\u00b3\u00d6\u00bc)p!B\u00a9\u0080<\u009a\t\u00b8l\u000f\u0018fd%\u00a4\\\u00a83\u00bd\u00c9\u00dfL\"S\u0091\u0080\u000eq:\u00a5\u0001\u00a9\u00d1N\u00fbx\u00eb\u00cc(}]\u00a5\u0096\u00f4\u009a\u00cb0\u00045K\u0016\u0003R\u0099LCv/iwk\u00c2\u0007\u00983Z\u00b4\u00d3\u00b6.@\u001ccK\u00b6/x/\u00b3\u001d\n\u00c57\u008e\u00fe\u00b4,kHnV3!\u00f0\u00c3\u00cb[\u00e1n\u00b8\u00df\u00fat]\u00c6y\u001d\u008f1\u00a3\u00a3\u00ad\u00be\u00fdV\u00e8`\u00f2$\u00de\u009b\u00b7*k\u00fc\u00e9C\u00a9\u00a9W!\u00d6@\u00bds\u00cfP\u00df`\u0082F\u00ef\u008d\u0095\u00d6\u001ac\u0098O\u0002\u009a\u00ddU\u00f9z\u00f6\u00a9\u00b8\u0017\u0097\u00f8\u0002\u0000s\u00d1\u00fedJ\u001dWs\u000b\u00d3\u00cdnm\u00d3\u0094\u0086\u008b\u0005c]\u00e0\u009c\u0016\u00fd\u00bb\u00c3\u00cf&\u00df\u00dbF;n\u00b2N4r$\u0082(1b23\u00dd\u00ef\u00c8;\u00ccWu\u00cf\u00b3cZ8\u00eb\u009fE\u0090n^N\u00e3\u00c5\u0092\u00f0\u001d\u00d9\u00e3\u00b8\u0091o\u008c\u00ca\u00d9\u00e1)\u00c0\u0080F\u00bfXMI\u00c2<\u00da|\u00f0qr\u008e\u009c\u00fb\r\u00e8G\u00ec\u00f1\u0096\u0011f\u00e8\u00ff\u00b4\u00e3\u00a5X\u00e8".length();
                    var7_16 = 0;
                    while (true) {
                        var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                        v10 = var11_12;
                        v11 = var8_13++;
                        v12 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                        v13 = -1;
                        break block22;
                        break;
                    }
lbl78:
                    // 1 sources

                    while (true) {
                        v10[v11] = v14;
                        if (var7_16 < var10_15) ** continue;
                        var9_14 = " <\u00ac$\u00e5\u00d9r\u0096\u00c7\u008eO3w\u00b0\u00de\u00d8";
                        var10_15 = " <\u00ac$\u00e5\u00d9r\u0096\u00c7\u008eO3w\u00b0\u00de\u00d8".length();
                        var7_16 = 0;
                        while (true) {
                            var12_17 = var9_14.substring(var7_16, var7_16 += 8).getBytes("ISO-8859-1");
                            v10 = var11_12;
                            v11 = var8_13++;
                            v12 = ((long)var12_17[0] & 255L) << 56 | ((long)var12_17[1] & 255L) << 48 | ((long)var12_17[2] & 255L) << 40 | ((long)var12_17[3] & 255L) << 32 | ((long)var12_17[4] & 255L) << 24 | ((long)var12_17[5] & 255L) << 16 | ((long)var12_17[6] & 255L) << 8 | (long)var12_17[7] & 255L;
                            v13 = 0;
                            break block22;
                            break;
                        }
                        break;
                    }
lbl91:
                    // 1 sources

                    while (true) {
                        v10[v11] = v14;
                        if (var7_16 < var10_15) ** continue;
                        break block23;
                        break;
                    }
                }
                var13_18 = v12;
                var15_19 = var5_10.doFinal(new byte[]{(byte)(var13_18 >>> 56), (byte)(var13_18 >>> 48), (byte)(var13_18 >>> 40), (byte)(var13_18 >>> 32), (byte)(var13_18 >>> 24), (byte)(var13_18 >>> 16), (byte)(var13_18 >>> 8), (byte)var13_18});
                v14 = ((long)var15_19[0] & 255L) << 56 | ((long)var15_19[1] & 255L) << 48 | ((long)var15_19[2] & 255L) << 40 | ((long)var15_19[3] & 255L) << 32 | ((long)var15_19[4] & 255L) << 24 | ((long)var15_19[5] & 255L) << 16 | ((long)var15_19[6] & 255L) << 8 | (long)var15_19[7] & 255L;
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
            cb.bYzvb = var11_12;
            cb.qFnKt = new Integer[71];
            var0_20 = Cipher.getInstance("DES/CBC/NoPadding");
            v15 = SecretKeyFactory.getInstance("DES");
            v16 = new byte[8];
            v17 = v16;
            v16[0] = (byte)(var16 >>> 56);
            for (var1_21 = 1; var1_21 < 8; ++var1_21) {
                v17 = v17;
                v17[var1_21] = (byte)(var16 << var1_21 * 8 >>> 56);
            }
            break block24;
lbl118:
            // 1 sources

            while (true) {
                continue;
                break;
            }
        }
        var0_20.init(2, (Key)v15.generateSecret(new DESKeySpec(v17)), new IvParameterSpec(new byte[8]));
        var2_22 = -4335569783642720098L;
        var4_23 = var0_20.doFinal(new byte[]{(byte)(var2_22 >>> 56), (byte)(var2_22 >>> 48), (byte)(var2_22 >>> 40), (byte)(var2_22 >>> 32), (byte)(var2_22 >>> 24), (byte)(var2_22 >>> 16), (byte)(var2_22 >>> 8), (byte)var2_22});
        ** while (true)
        cb.cIHkd = ((long)var4_23[0] & 255L) << 56 | ((long)var4_23[1] & 255L) << 48 | ((long)var4_23[2] & 255L) << 40 | ((long)var4_23[3] & 255L) << 32 | ((long)var4_23[4] & 255L) << 24 | ((long)var4_23[5] & 255L) << 16 | ((long)var4_23[6] & 255L) << 8 | (long)var4_23[7] & 255L;
    }

    private static CallSite Ps(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cb" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException Po(MatchException matchException) {
        return matchException;
    }

    public float Pi() {
        rk rk2;
        block6: {
            Object object;
            block4: {
                block5: {
                    long l2 = wnjCO ^ 0x3216D3D5928FL;
                    boolean bl2 = ca.OY();
                    try {
                        try {
                            object = cN.YyPjC;
                            if (!bl2) break block4;
                            if (!object.isEmpty()) break block5;
                        }
                        catch (MatchException matchException) {
                            throw cb.Po(matchException);
                        }
                        rk2 = this.ubdhS.Ye();
                        break block6;
                    }
                    catch (MatchException matchException) {
                        throw cb.Po(matchException);
                    }
                }
                object = cN.YyPjC.peek();
            }
            rk2 = ((cO)object).Ye();
        }
        rk rk3 = rk2;
        return 0.5f + 0.5f * rk3.dhj();
    }

    @Override
    public void Ph(lC lC2) {
        float f2;
        block11: {
            float f3;
            block12: {
                float f4;
                boolean bl2;
                block9: {
                    block10: {
                        long l2 = wnjCO ^ 0x35343DF61EABL;
                        this.LX(lC2);
                        float f5 = this.ormBS.dhj() * this.KgDVz.dhj();
                        bl2 = ca.OY();
                        try {
                            try {
                                f4 = f5;
                                if (!bl2) break block9;
                                if (f4 != 0.0f) break block10;
                            }
                            catch (MatchException matchException) {
                                throw cb.Po(matchException);
                            }
                            return;
                        }
                        catch (MatchException matchException) {
                            throw cb.Po(matchException);
                        }
                    }
                    f4 = this.RT();
                }
                f3 = f4;
                try {
                    try {
                        float f6 = f3 - 1.0f;
                        f2 = f6 == 0.0f ? 0 : (f6 > 0.0f ? 1 : -1);
                        if (!bl2) break block11;
                        if (f2 == false) break block12;
                    }
                    catch (MatchException matchException) {
                        throw cb.Po(matchException);
                    }
                    jH.bId(lC2, this.toIeR, this.QWaAn, f3);
                }
                catch (MatchException matchException) {
                    throw cb.Po(matchException);
                }
            }
            this.NV(lC2);
            float f7 = f3 - 1.0f;
            f2 = f7 == 0.0f ? 0 : (f7 > 0.0f ? 1 : -1);
        }
        if (f2 != false) {
            jH.bIf();
        }
    }

    @Override
    protected void NV(lC lC2) {
        block32: {
            boolean bl2;
            block39: {
                Object object;
                boolean bl3;
                long l2;
                block38: {
                    cb cb2;
                    block30: {
                        float f2;
                        block28: {
                            block29: {
                                float f3;
                                Object object2;
                                rj rj2;
                                Object object3;
                                l2 = wnjCO ^ 0x1D3A2A30E2C7L;
                                bl3 = ca.OX();
                                if (!cN.YyPjC.isEmpty()) break block38;
                                object = this.ubdhS.Ye();
                                try {
                                    ((rk)object).dhq((int)cb.Pv("z", (int)9244, (long)(0x16E34C817F2A4EF6L ^ l2)));
                                    object3 = object;
                                    rj2 = rD.dlmvG.currentScreen instanceof ChatScreen ? rj.XzDkv : rj.AYqck;
                                }
                                catch (MatchException matchException) {
                                    throw cb.Po(matchException);
                                }
                                try {
                                    ((rk)object3).dhs(rj2);
                                    object2 = object;
                                    f3 = rD.dlmvG.currentScreen instanceof ChatScreen ? 1.0f : 0.0f;
                                }
                                catch (MatchException matchException) {
                                    throw cb.Po(matchException);
                                }
                                try {
                                    ((rk)object2).dhd(f3);
                                    float f4 = ((rk)object).dhj() - 0.0f;
                                    f2 = f4 == 0.0f ? 0 : (f4 > 0.0f ? 1 : -1);
                                    if (bl3) break block28;
                                    if (f2 != false) break block29;
                                }
                                catch (MatchException matchException) {
                                    throw cb.Po(matchException);
                                }
                                return;
                            }
                            try {
                                cb2 = this;
                                if (bl3) break block30;
                                f2 = (float)cb2.JIyxO.cpC(cIHkd);
                            }
                            catch (MatchException matchException) {
                                throw cb.Po(matchException);
                            }
                        }
                        try {
                            if (f2 != false) {
                                this.ubdhS.Yi(this.ubdhS.Yd().XA());
                                this.JIyxO.cpB();
                            }
                        }
                        catch (MatchException matchException) {
                            throw cb.Po(matchException);
                        }
                        this.ubdhS.Yh(LocalTime.now());
                        cb2 = this;
                    }
                    cb2.ubdhS.XV(lC2, this.toIeR, this.QWaAn, this.jTsqG, this.Xtjvx, this.ormBS.dhj(), this.DlqAM.WF());
                    if (!bl3) break block39;
                }
                object = DateTimeFormatter.ofPattern((String)((Object)cb.Ps("l", (int)16951, (long)(0x20D2522006C071B7L ^ l2))));
                float f5 = 0.0f;
                for (cO cO2 : cN.YyPjC) {
                    float f6;
                    float f7;
                    block36: {
                        block37: {
                            float f8;
                            block34: {
                                float f9;
                                float f10;
                                float f11;
                                block35: {
                                    block40: {
                                        rk rk2;
                                        block33: {
                                            block31: {
                                                rk2 = cO2.Yg();
                                                rk2.dhs(rj.NJlxm);
                                                rk2.dhq((int)cb.Pv("z", (int)12729, (long)(0x4872B80BB6F3DB41L ^ l2)));
                                                f11 = this.QWaAn;
                                                try {
                                                    try {
                                                        if (bl3) break block31;
                                                        bl2 = this.ueekw.SZ();
                                                        if (bl3) break block32;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw cb.Po(matchException);
                                                    }
                                                    if (!bl2) break block33;
                                                }
                                                catch (MatchException matchException) {
                                                    throw cb.Po(matchException);
                                                }
                                                f11 += rk2.dhd(f5);
                                            }
                                            if (!bl3) break block40;
                                        }
                                        f11 -= rk2.dhd(f5);
                                    }
                                    cO2.XW();
                                    f10 = this.toIeR;
                                    f9 = this.jTsqG;
                                    lq lq2 = lE.joxgd.bYM(6.0f);
                                    lq lq3 = lE.WTzbi.bYM(6.0f);
                                    String string = cO2.Yc().format((DateTimeFormatter)object);
                                    float f12 = lq2.cao(string);
                                    float f13 = 27.0f + lq3.cap(cO2.XZ()) + 7.0f + f12;
                                    try {
                                        float f14 = this.jTsqG - f13;
                                        f8 = f14 == 0.0f ? 0 : (f14 < 0.0f ? -1 : 1);
                                        if (bl3) break block34;
                                        if (f8 >= 0) break block35;
                                    }
                                    catch (MatchException matchException) {
                                        throw cb.Po(matchException);
                                    }
                                    f9 = f13;
                                    f10 = this.Pk(f9);
                                }
                                try {
                                    cO2.XV(lC2, f10, f11, f9, this.Xtjvx, this.ormBS.dhj(), this.DlqAM.WF());
                                    f7 = cO2.Ye().dhj();
                                    f6 = 0.5f;
                                    if (bl3) break block36;
                                    float f15 = f7 - f6;
                                    f8 = f15 == 0.0f ? 0 : (f15 > 0.0f ? 1 : -1);
                                }
                                catch (MatchException matchException) {
                                    throw cb.Po(matchException);
                                }
                            }
                            try {
                                try {
                                    if (f8 >= 0 || !cO2.Ya().cpC(cO2.Yb())) break block37;
                                }
                                catch (MatchException matchException) {
                                    throw cb.Po(matchException);
                                }
                                if (!bl3) continue;
                            }
                            catch (MatchException matchException) {
                                throw cb.Po(matchException);
                            }
                        }
                        f7 = f5;
                        f6 = 30.0f;
                    }
                    f5 = f7 + f6;
                    if (!bl3) continue;
                }
            }
            bl2 = cN.YyPjC.removeIf(cO::XX);
        }
    }

    @Override
    public void LX(lC lC2) {
        super.LX(lC2);
        this.jTsqG = 175.0f;
        this.Xtjvx = 26.0f;
        this.toIeR = this.DQmMN.dhd(this.Pj());
        this.QWaAn = this.llsxp.dhd(this.Pl());
    }

    @Override
    public boolean onMouseClicked(double d2, double d3, mA mA2) {
        boolean bl2;
        block14: {
            block15: {
                block16: {
                    CallSite callSite;
                    ap ap2;
                    long l2 = wnjCO ^ 0x1649DAE650EFL;
                    boolean bl3 = this.RP(d2, d3);
                    boolean bl4 = ca.OX();
                    try {
                        try {
                            try {
                                try {
                                    bl2 = bl3;
                                    if (bl4) break block14;
                                    if (!bl2) break block15;
                                }
                                catch (MatchException matchException) {
                                    throw cb.Po(matchException);
                                }
                                bl2 = this.LkpAS;
                                if (bl4) break block14;
                            }
                            catch (MatchException matchException) {
                                throw cb.Po(matchException);
                            }
                            if (!bl2) break block15;
                        }
                        catch (MatchException matchException) {
                            throw cb.Po(matchException);
                        }
                        if (mA2 != mA.frWTZ) break block15;
                    }
                    catch (MatchException matchException) {
                        throw cb.Po(matchException);
                    }
                    this.pAjuu = false;
                    this.vCMYc = true;
                    this.AyAnj.dhg();
                    float f2 = this.toIeR + (float)(d2 - (double)this.toIeR) * this.RT();
                    float f3 = this.QWaAn + (float)(d3 - (double)this.QWaAn) * this.RT();
                    try {
                        ap2 = new ap(f2, f3, 110.0f, 6.0f);
                        callSite = this.oZllQ.isEmpty() ? cb.Ps("l", (int)2912, (long)(0x7926939714A10ACAL ^ l2)) : cb.Ps("l", (int)8079, (long)(0x10AFC6982DD91E24L ^ l2));
                    }
                    catch (MatchException matchException) {
                        throw cb.Po(matchException);
                    }
                    ap ap3 = ap2.pW((String)((Object)callSite)).qq();
                    for (cB cB2 : this.oZllQ) {
                        try {
                            ap3.pU(cB2);
                            if (!bl4) {
                                if (!bl4) continue;
                                break;
                            }
                            break block16;
                        }
                        catch (MatchException matchException) {
                            throw cb.Po(matchException);
                        }
                    }
                    ap3.qn((String)((Object)cb.Ps("l", (int)14788, (long)(0x13FC9E2910E2386DL ^ l2))), lf.JHGge, jk.mPXGi, jk.mPXGi, aj2 -> {
                        this.LkpAS = false;
                        aj2.oj(false);
                    }).qo(() -> {
                        this.vCMYc = false;
                    });
                    rD.dlK().Rs(ap3);
                }
                return true;
            }
            bl2 = false;
        }
        return bl2;
    }

    private static CallSite Pv(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cb" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private float Pj() {
        boolean bl2;
        float f2;
        block5: {
            block6: {
                long l2 = wnjCO ^ 0x3434BA46AC50L;
                f2 = this.RT();
                boolean bl3 = ca.OY();
                try {
                    try {
                        bl2 = this.HhBiN.SZ();
                        if (!bl3) break block5;
                        if (!bl2) break block6;
                    }
                    catch (MatchException matchException) {
                        throw cb.Po(matchException);
                    }
                    return 10.0f;
                }
                catch (MatchException matchException) {
                    throw cb.Po(matchException);
                }
            }
            bl2 = this.SqYxj.SZ();
        }
        if (bl2) {
            Vec2f vec2f = rm.diq();
            return vec2f.x - this.jTsqG * f2 - 10.0f;
        }
        Vec2f vec2f = rm.diq();
        return vec2f.x / 2.0f - this.jTsqG * f2 / 2.0f;
    }

    private float Pl() {
        long l2 = wnjCO ^ 0x43E07E1DFA4DL;
        try {
            if (this.ueekw.SZ()) {
                return 10.0f;
            }
        }
        catch (MatchException matchException) {
            throw cb.Po(matchException);
        }
        Vec2f vec2f = rm.diq();
        return vec2f.y - 90.0f * this.RT();
    }

    private static int Pt(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x326;
        if (qFnKt[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = bYzvb[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])vUFwR.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    vUFwR.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cb", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cb.qFnKt[n3] = n4;
        }
        return qFnKt[n3];
    }

    private static int Pu(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cb.Pt(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static String Pq(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5A55;
        if (hBOJC[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])dZkQt.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    dZkQt.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cb", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = LcMNI[n3].getBytes("ISO-8859-1");
            cb.hBOJC[n3] = cb.Pp(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return hBOJC[n3];
    }

    /*
     * Unable to fully structure code
     */
    private float Pk(float var1_1) {
        block15: {
            block16: {
                block14: {
                    block17: {
                        block13: {
                            var2_2 = cb.wnjCO ^ 35323470480183L;
                            var5_3 = this.RT();
                            var4_4 = ca.OY();
                            try {
                                v0 = this.HhBiN.SZ();
                                if (!var4_4) break block13;
                                if (v0) {
                                }
                                ** GOTO lbl15
                            }
                            catch (MatchException v1) {
                                throw cb.Po(v1);
                            }
                            var6_5 = 10.0f;
                            try {
                                if (var4_4) break block14;
lbl15:
                                // 2 sources

                                v0 = this.SqYxj.SZ();
                            }
                            catch (MatchException v2) {
                                throw cb.Po(v2);
                            }
                        }
                        if (!v0) break block17;
                        var7_6 = rm.diq();
                        var6_5 = var7_6.x - var1_1 * var5_3 - 10.0f;
                        if (var4_4) break block14;
                    }
                    var7_6 = rm.diq();
                    var6_5 = var7_6.x / 2.0f - var1_1 * var5_3 / 2.0f;
                }
                try {
                    try {
                        v3 = var5_3;
                        v4 = 1.0f;
                        if (!var4_4) break block15;
                        if (v3 != v4) break block16;
                    }
                    catch (MatchException v5) {
                        throw cb.Po(v5);
                    }
                    return var6_5;
                }
                catch (MatchException v6) {
                    throw cb.Po(v6);
                }
            }
            v3 = this.toIeR;
            v4 = (var6_5 - this.toIeR) / var5_3;
        }
        return v3 + v4;
    }

    private static String Pp(byte[] byArray) {
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

    private static Object Pr(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cb.Pq(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cb.class, "Pr", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(cb.class, "Pu", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

