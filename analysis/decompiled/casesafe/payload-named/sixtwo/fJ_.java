/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
 *  net.minecraft.entity.player.PlayerEntity
 *  net.minecraft.item.Items
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
import net.minecraft.entity.LivingEntity;
import net.minecraft.entity.player.PlayerEntity;
import net.minecraft.item.Items;
import sixtwo.cA;
import sixtwo.cJ;
import sixtwo.cz;
import sixtwo.fg;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.hG;
import sixtwo.hr;
import sixtwo.hw;
import sixtwo.jg;
import sixtwo.mr;
import sixtwo.rD;

public class fJ
extends gg {
    private final cA KbVJm;
    private final cJ CCWrA;
    private final cJ NStEn;
    private final cJ Fkuth;
    private final cz EqPct;
    private final cJ XIgqS;
    private float QAlRd;
    private static final long qeHDl;
    private static final String lMLXr;
    private static final long[] pJqSz;
    private static final Integer[] QfLOA;
    private static final Map YYISG;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    private static CallSite aUU(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/fJ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    @hG
    public void aUN(hw.tv tv2) {
        this.QAlRd = this.KbVJm.UN().floatValue();
    }

    @hG
    public void aUO(hr hr2) {
        long l2 = qeHDl ^ 0x306E17E61DADL;
        try {
            if (!this.bab()) {
                return;
            }
        }
        catch (MatchException matchException) {
            throw fJ.aUQ(matchException);
        }
        Entity entity = hr2.bdb();
        hr2.bdc().setReturnValue((Object)Float.valueOf(this.aUP(entity)));
    }

    private static int aUS(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1BCC;
        if (QfLOA[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = pJqSz[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])YYISG.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    YYISG.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/fJ", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            fJ.QfLOA[n3] = n4;
        }
        return QfLOA[n3];
    }

    private static String aUR(byte[] byArray) {
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

    private static MatchException aUQ(MatchException matchException) {
        return matchException;
    }

    private static int aUT(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = fJ.aUS(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    public float aUP(Entity entity) {
        fJ fJ2;
        block45: {
            block46: {
                Entity entity2;
                PlayerEntity playerEntity;
                int[] nArray;
                block44: {
                    boolean bl2;
                    block42: {
                        block43: {
                            block40: {
                                block41: {
                                    block38: {
                                        block39: {
                                            long l2 = qeHDl ^ 0x689ACB67F7B3L;
                                            nArray = fg.aIW();
                                            try {
                                                if (entity == rD.dlmvG.player) {
                                                    return 0.0f;
                                                }
                                            }
                                            catch (MatchException matchException) {
                                                throw fJ.aUQ(matchException);
                                            }
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            bl2 = this.NStEn.WF();
                                                            if (nArray != null) break block38;
                                                            if (!bl2) break block39;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw fJ.aUQ(matchException);
                                                        }
                                                        bl2 = rD.dlmvG.player.isHolding(Items.COBWEB);
                                                        if (nArray != null) break block38;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw fJ.aUQ(matchException);
                                                    }
                                                    if (!bl2) break block39;
                                                }
                                                catch (MatchException matchException) {
                                                    throw fJ.aUQ(matchException);
                                                }
                                                return 0.0f;
                                            }
                                            catch (MatchException matchException) {
                                                throw fJ.aUQ(matchException);
                                            }
                                        }
                                        bl2 = this.Fkuth.WF();
                                    }
                                    try {
                                        try {
                                            try {
                                                try {
                                                    if (nArray != null) break block40;
                                                    if (!bl2) break block41;
                                                }
                                                catch (MatchException matchException) {
                                                    throw fJ.aUQ(matchException);
                                                }
                                                bl2 = this.EqPct.Uy();
                                                if (nArray != null) break block40;
                                            }
                                            catch (MatchException matchException) {
                                                throw fJ.aUQ(matchException);
                                            }
                                            if (bl2) break block41;
                                        }
                                        catch (MatchException matchException) {
                                            throw fJ.aUQ(matchException);
                                        }
                                        return 0.0f;
                                    }
                                    catch (MatchException matchException) {
                                        throw fJ.aUQ(matchException);
                                    }
                                }
                                bl2 = entity instanceof LivingEntity;
                            }
                            try {
                                if (nArray != null) break block42;
                                if (!bl2) break block43;
                            }
                            catch (MatchException matchException) {
                                throw fJ.aUQ(matchException);
                            }
                            playerEntity = (LivingEntity)entity;
                            try {
                                try {
                                    try {
                                        try {
                                            bl2 = this.XIgqS.WF();
                                            if (nArray != null) break block42;
                                            if (!bl2) break block43;
                                        }
                                        catch (MatchException matchException) {
                                            throw fJ.aUQ(matchException);
                                        }
                                        bl2 = jg.bBs((LivingEntity)playerEntity);
                                        if (nArray != null) break block42;
                                    }
                                    catch (MatchException matchException) {
                                        throw fJ.aUQ(matchException);
                                    }
                                    if (!bl2) break block43;
                                }
                                catch (MatchException matchException) {
                                    throw fJ.aUQ(matchException);
                                }
                                return 0.0f;
                            }
                            catch (MatchException matchException) {
                                throw fJ.aUQ(matchException);
                            }
                        }
                        try {
                            entity2 = entity;
                            if (nArray != null) break block44;
                            bl2 = entity2 instanceof PlayerEntity;
                        }
                        catch (MatchException matchException) {
                            throw fJ.aUQ(matchException);
                        }
                    }
                    if (!bl2) break block46;
                    entity2 = entity;
                }
                playerEntity = (PlayerEntity)entity2;
                try {
                    try {
                        try {
                            fJ2 = this;
                            if (nArray != null) break block45;
                            if (!fJ2.CCWrA.WF()) break block46;
                        }
                        catch (MatchException matchException) {
                            throw fJ.aUQ(matchException);
                        }
                        if (!rD.dmc().ddy(playerEntity)) break block46;
                    }
                    catch (MatchException matchException) {
                        throw fJ.aUQ(matchException);
                    }
                    return 0.0f;
                }
                catch (MatchException matchException) {
                    throw fJ.aUQ(matchException);
                }
            }
            fJ2 = this;
        }
        return fJ2.QAlRd;
    }

    public fJ() {
        long l2 = qeHDl ^ 0x459066F3966DL;
        super(gf.aZL((int)fJ.aUU("v", (int)22094, (long)(0x6E750433C1EED7AAL ^ l2)), false, gh.xwjCw));
        this.KbVJm = new cA(this, mr.clS(new int[]{(int)fJ.aUU("v", (int)3559, (long)(0x723D25ED5C518C15L ^ l2)), (int)fJ.aUU("v", (int)16254, (long)(0xCDD35F343CE3E82L ^ l2)), (int)fJ.aUU("v", (int)27910, (long)(0x7C96D57B7631ECD9L ^ l2)), (int)fJ.aUU("v", (int)27986, (long)(0x5A28409A346AECFDL ^ l2))})).UG(0.01).UE(0.0).UF(2.0).UI(0.0, 0.0).UH(lMLXr);
        int[] nArray = new int[fJ.aUU("v", (int)12894, (long)(0x348302EFDC16B3BCL ^ l2))];
        nArray[0] = (int)fJ.aUU("v", (int)11435, (long)(0x5DF31B1B1E2DAD5FL ^ l2));
        nArray[1] = (int)fJ.aUU("v", (int)27636, (long)(0x562D5020B19CEA0AL ^ l2));
        nArray[2] = (int)fJ.aUU("v", (int)21452, (long)(0x19CB4229EE69D267L ^ l2));
        nArray[3] = (int)fJ.aUU("v", (int)31025, (long)(0x5E7B0ED03F56F8E7L ^ l2));
        nArray[4] = (int)fJ.aUU("v", (int)10719, (long)(0x518F23983A12816L ^ l2));
        nArray[5] = (int)fJ.aUU("v", (int)6123, (long)(0x5BF37E86F8BB1636L ^ l2));
        nArray[fJ.aUU("v", (int)20113, (long)(0x337D43DEC06E4F7FL ^ l2))] = (int)fJ.aUU("v", (int)16826, (long)(0x2821311BC4C0407BL ^ l2));
        nArray[fJ.aUU("v", (int)19894, (long)(0x74935C5459A4C7CL ^ l2))] = (int)fJ.aUU("v", (int)4555, (long)(0x427D58D8A64A9004L ^ l2));
        nArray[fJ.aUU("v", (int)28141, (long)(0x566788B60441EC0BL ^ l2))] = (int)fJ.aUU("v", (int)18645, (long)(0xCF9392B9FBFC92FL ^ l2));
        nArray[fJ.aUU("v", (int)11176, (long)(0x1ADAD1D78EF22A06L ^ l2))] = (int)fJ.aUU("v", (int)32201, (long)(0x575EBC29022DFC65L ^ l2));
        nArray[fJ.aUU("v", (int)25458, (long)(0x43B15A97CC7FE293L ^ l2))] = (int)fJ.aUU("v", (int)6123, (long)(0x5BF37E86F8BB1636L ^ l2));
        nArray[fJ.aUU("v", (int)24514, (long)(0x7B3FA3429DBDE15L ^ l2))] = (int)fJ.aUU("v", (int)9844, (long)(0xA299F7AD653A7BAL ^ l2));
        nArray[fJ.aUU("v", (int)14760, (long)(0x7D4265D38DE9B878L ^ l2))] = (int)fJ.aUU("v", (int)11127, (long)(0x563FA2F824872AA4L ^ l2));
        nArray[fJ.aUU("v", (int)12462, (long)(0xAD49F906C48B106L ^ l2))] = (int)fJ.aUU("v", (int)26701, (long)(0x34A755492DBEE9BEL ^ l2));
        this.CCWrA = new cJ(this, mr.clS(nArray)).WE(false);
        int[] nArray2 = new int[fJ.aUU("v", (int)9711, (long)(0x6EB9946DCACE2446L ^ l2))];
        nArray2[0] = (int)fJ.aUU("v", (int)23906, (long)(0x474B1780E15ADC88L ^ l2));
        nArray2[1] = (int)fJ.aUU("v", (int)32201, (long)(0x575EBC29022DFC65L ^ l2));
        nArray2[2] = (int)fJ.aUU("v", (int)3601, (long)(0x510CABB044B98FCAL ^ l2));
        nArray2[3] = (int)fJ.aUU("v", (int)31311, (long)(0x2130D94BC653FB97L ^ l2));
        nArray2[4] = (int)fJ.aUU("v", (int)9322, (long)(0x75D2565BAB17A5BFL ^ l2));
        nArray2[5] = (int)fJ.aUU("v", (int)29920, (long)(0xCDC3EBA43F3F525L ^ l2));
        nArray2[fJ.aUU("v", (int)20113, (long)(0x337D43DEC06E4F7FL ^ l2))] = (int)fJ.aUU("v", (int)6123, (long)(0x5BF37E86F8BB1636L ^ l2));
        nArray2[fJ.aUU("v", (int)12167, (long)(0x2F4742D359FB2E72L ^ l2))] = (int)fJ.aUU("v", (int)12303, (long)(0x787361F4CEDB31A5L ^ l2));
        nArray2[fJ.aUU("v", (int)30776, (long)(0x5C20ED29F88A7999L ^ l2))] = (int)fJ.aUU("v", (int)28923, (long)(0x4BF323263DF77129L ^ l2));
        nArray2[fJ.aUU("v", (int)4251, (long)(0x1523109E447C9153L ^ l2))] = (int)fJ.aUU("v", (int)23085, (long)(0x4957032D7D0EDBD5L ^ l2));
        nArray2[fJ.aUU("v", (int)12631, (long)(0x2C6B3EEC993730F1L ^ l2))] = (int)fJ.aUU("v", (int)12303, (long)(0x787361F4CEDB31A5L ^ l2));
        nArray2[fJ.aUU("v", (int)24236, (long)(0x21686BCA15295F4BL ^ l2))] = (int)fJ.aUU("v", (int)19367, (long)(0xDF1DDFE59194A5EL ^ l2));
        nArray2[fJ.aUU("v", (int)26668, (long)(0x3CA1A3AB43EF69D1L ^ l2))] = (int)fJ.aUU("v", (int)26802, (long)(0x7492989356CAE976L ^ l2));
        nArray2[fJ.aUU("v", (int)781, (long)(0x431963C5769582E4L ^ l2))] = (int)fJ.aUU("v", (int)5452, (long)(0x6F088B3BEF4A94E9L ^ l2));
        nArray2[fJ.aUU("v", (int)23846, (long)(0x3DB3C4AD8F72DCE6L ^ l2))] = (int)fJ.aUU("v", (int)661, (long)(0x24B98A22A09E036AL ^ l2));
        nArray2[fJ.aUU("v", (int)12880, (long)(0x1C141C176E06B3ABL ^ l2))] = (int)fJ.aUU("v", (int)32201, (long)(0x575EBC29022DFC65L ^ l2));
        nArray2[fJ.aUU("v", (int)6717, (long)(0x43A707E0E3AF9BF0L ^ l2))] = (int)fJ.aUU("v", (int)9844, (long)(0xA299F7AD653A7BAL ^ l2));
        nArray2[fJ.aUU("v", (int)27590, (long)(0x178EF4F5FFD56A2AL ^ l2))] = (int)fJ.aUU("v", (int)6566, (long)(0x4685E7595209861L ^ l2));
        nArray2[fJ.aUU("v", (int)22426, (long)(0x57A851119FA45677L ^ l2))] = (int)fJ.aUU("v", (int)12303, (long)(0x787361F4CEDB31A5L ^ l2));
        nArray2[fJ.aUU("v", (int)10953, (long)(0x71144F1F57F82B10L ^ l2))] = (int)fJ.aUU("v", (int)28445, (long)(0x50BF0D11FBDD6EB9L ^ l2));
        nArray2[fJ.aUU("v", (int)13526, (long)(0xB2924E0ADB93539L ^ l2))] = (int)fJ.aUU("v", (int)26802, (long)(0x7492989356CAE976L ^ l2));
        nArray2[fJ.aUU("v", (int)23234, (long)(0x3F66B4521DD4DB1CL ^ l2))] = (int)fJ.aUU("v", (int)29317, (long)(0x7E82180B48C8736EL ^ l2));
        nArray2[fJ.aUU("v", (int)9822, (long)(0x28EDABC79E42A7B6L ^ l2))] = (int)fJ.aUU("v", (int)15810, (long)(0x4A34836FF0A3C01L ^ l2));
        nArray2[fJ.aUU("v", (int)17990, (long)(0x6A6CB9CDCF7F479CL ^ l2))] = (int)fJ.aUU("v", (int)6123, (long)(0x5BF37E86F8BB1636L ^ l2));
        nArray2[fJ.aUU("v", (int)30555, (long)(0x956074F6EEFF6BEL ^ l2))] = (int)fJ.aUU("v", (int)29317, (long)(0x7E82180B48C8736EL ^ l2));
        this.NStEn = new cJ(this, mr.clS(nArray2)).WE(false);
        int[] nArray3 = new int[fJ.aUU("v", (int)23846, (long)(0x3DB3C4AD8F72DCE6L ^ l2))];
        nArray3[0] = (int)fJ.aUU("v", (int)16212, (long)(0x539F301EF8FD3EF7L ^ l2));
        nArray3[1] = (int)fJ.aUU("v", (int)9844, (long)(0xA299F7AD653A7BAL ^ l2));
        nArray3[2] = (int)fJ.aUU("v", (int)5452, (long)(0x6F088B3BEF4A94E9L ^ l2));
        nArray3[3] = (int)fJ.aUU("v", (int)9375, (long)(0x2C1A790DD78AA56EL ^ l2));
        nArray3[4] = (int)fJ.aUU("v", (int)12303, (long)(0x787361F4CEDB31A5L ^ l2));
        nArray3[5] = (int)fJ.aUU("v", (int)8805, (long)(0x491725608B2023B9L ^ l2));
        nArray3[fJ.aUU("v", (int)20113, (long)(0x337D43DEC06E4F7FL ^ l2))] = (int)fJ.aUU("v", (int)26802, (long)(0x7492989356CAE976L ^ l2));
        nArray3[fJ.aUU("v", (int)12167, (long)(0x2F4742D359FB2E72L ^ l2))] = (int)fJ.aUU("v", (int)18645, (long)(0xCF9392B9FBFC92FL ^ l2));
        nArray3[fJ.aUU("v", (int)30776, (long)(0x5C20ED29F88A7999L ^ l2))] = (int)fJ.aUU("v", (int)12303, (long)(0x787361F4CEDB31A5L ^ l2));
        nArray3[fJ.aUU("v", (int)4251, (long)(0x1523109E447C9153L ^ l2))] = (int)fJ.aUU("v", (int)109, (long)(0x176546F5D1601AFL ^ l2));
        nArray3[fJ.aUU("v", (int)12631, (long)(0x2C6B3EEC993730F1L ^ l2))] = (int)fJ.aUU("v", (int)5452, (long)(0x6F088B3BEF4A94E9L ^ l2));
        nArray3[fJ.aUU("v", (int)24236, (long)(0x21686BCA15295F4BL ^ l2))] = (int)fJ.aUU("v", (int)26802, (long)(0x7492989356CAE976L ^ l2));
        nArray3[fJ.aUU("v", (int)26668, (long)(0x3CA1A3AB43EF69D1L ^ l2))] = (int)fJ.aUU("v", (int)24860, (long)(0x39BA66EEB901E0BCL ^ l2));
        nArray3[fJ.aUU("v", (int)781, (long)(0x431963C5769582E4L ^ l2))] = (int)fJ.aUU("v", (int)3601, (long)(0x510CABB044B98FCAL ^ l2));
        this.Fkuth = new cJ(this, mr.clS(nArray3)).WE(false);
        this.EqPct = new cz(this, mr.clS(new int[]{(int)fJ.aUU("v", (int)109, (long)(0x176546F5D1601AFL ^ l2)), (int)fJ.aUU("v", (int)5452, (long)(0x6F088B3BEF4A94E9L ^ l2)), (int)fJ.aUU("v", (int)26802, (long)(0x7492989356CAE976L ^ l2)), (int)fJ.aUU("v", (int)16634, (long)(0x3AAA1D4AC114C136L ^ l2)), (int)fJ.aUU("v", (int)3601, (long)(0x510CABB044B98FCAL ^ l2))}));
        int[] nArray4 = new int[fJ.aUU("v", (int)15787, (long)(0x5447D66FC65CBC0CL ^ l2))];
        nArray4[0] = (int)fJ.aUU("v", (int)12267, (long)(0x3B899DAEEA712E20L ^ l2));
        nArray4[1] = (int)fJ.aUU("v", (int)32201, (long)(0x575EBC29022DFC65L ^ l2));
        nArray4[2] = (int)fJ.aUU("v", (int)3601, (long)(0x510CABB044B98FCAL ^ l2));
        nArray4[3] = (int)fJ.aUU("v", (int)16762, (long)(0x7F84B524D0CAC0AEL ^ l2));
        nArray4[4] = (int)fJ.aUU("v", (int)29317, (long)(0x7E82180B48C8736EL ^ l2));
        nArray4[5] = (int)fJ.aUU("v", (int)5452, (long)(0x6F088B3BEF4A94E9L ^ l2));
        nArray4[fJ.aUU("v", (int)20113, (long)(0x337D43DEC06E4F7FL ^ l2))] = (int)fJ.aUU("v", (int)6123, (long)(0x5BF37E86F8BB1636L ^ l2));
        nArray4[fJ.aUU("v", (int)12167, (long)(0x2F4742D359FB2E72L ^ l2))] = (int)fJ.aUU("v", (int)12303, (long)(0x787361F4CEDB31A5L ^ l2));
        nArray4[fJ.aUU("v", (int)30776, (long)(0x5C20ED29F88A7999L ^ l2))] = (int)fJ.aUU("v", (int)28923, (long)(0x4BF323263DF77129L ^ l2));
        nArray4[fJ.aUU("v", (int)4251, (long)(0x1523109E447C9153L ^ l2))] = (int)fJ.aUU("v", (int)22978, (long)(0x45395D613DABD822L ^ l2));
        nArray4[fJ.aUU("v", (int)12631, (long)(0x2C6B3EEC993730F1L ^ l2))] = (int)fJ.aUU("v", (int)12303, (long)(0x787361F4CEDB31A5L ^ l2));
        nArray4[fJ.aUU("v", (int)24236, (long)(0x21686BCA15295F4BL ^ l2))] = (int)fJ.aUU("v", (int)28923, (long)(0x4BF323263DF77129L ^ l2));
        nArray4[fJ.aUU("v", (int)26668, (long)(0x3CA1A3AB43EF69D1L ^ l2))] = (int)fJ.aUU("v", (int)9844, (long)(0xA299F7AD653A7BAL ^ l2));
        nArray4[fJ.aUU("v", (int)781, (long)(0x431963C5769582E4L ^ l2))] = (int)fJ.aUU("v", (int)12303, (long)(0x787361F4CEDB31A5L ^ l2));
        nArray4[fJ.aUU("v", (int)23846, (long)(0x3DB3C4AD8F72DCE6L ^ l2))] = (int)fJ.aUU("v", (int)20152, (long)(0x6823C96F1F6CF15L ^ l2));
        nArray4[fJ.aUU("v", (int)11030, (long)(0xF76F80E834D2AE6L ^ l2))] = (int)fJ.aUU("v", (int)26802, (long)(0x7492989356CAE976L ^ l2));
        nArray4[fJ.aUU("v", (int)27426, (long)(0x7B2BD54A4E32EAE4L ^ l2))] = (int)fJ.aUU("v", (int)29317, (long)(0x7E82180B48C8736EL ^ l2));
        nArray4[fJ.aUU("v", (int)29699, (long)(0x6757838289FB75F4L ^ l2))] = (int)fJ.aUU("v", (int)1517, (long)(0x6EAE0A3B395E041BL ^ l2));
        nArray4[fJ.aUU("v", (int)11637, (long)(0x225C48FD30AACA4L ^ l2))] = (int)fJ.aUU("v", (int)6123, (long)(0x5BF37E86F8BB1636L ^ l2));
        nArray4[fJ.aUU("v", (int)11399, (long)(0x119760C7AF29AD64L ^ l2))] = (int)fJ.aUU("v", (int)29317, (long)(0x7E82180B48C8736EL ^ l2));
        this.XIgqS = new cJ(this, mr.clS(nArray4)).WE(false);
        this.QAlRd = 0.0f;
        this.EqPct.Vf(this.Fkuth::WF);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                block12: {
                    fJ.qeHDl = gb.aYR(4976854293152449724L, -8816708037096018054L, MethodHandles.lookup().lookupClass()).a(65789968378512L);
                    var11 = fJ.qeHDl ^ 27484011507191L;
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
                var15_3 = var13_1.doFinal("\u00acheJ\u00f67<p".getBytes("ISO-8859-1"));
                ** while (true)
                fJ.lMLXr = fJ.aUR(var15_3).intern();
                fJ.YYISG = new HashMap<K, V>(13);
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
                var6_6 = new long[79];
                var3_7 = 0;
                var4_8 = "\u00bbr\u00f1{89\u0095\u00a5\u00adD\u00ac\u00f5%\u00e0\u0014(\u000f;\u00fejh\u0010Mg\u00f8n\u009eS\u00dd\u00a8\u00e2\u0092L\u00cb~\u0019\u0014u34Ep0l{\u00b9;\u00fb\u00f8\u0094j\u0002\u0084\u00c1H\u0099Y\u0001\u00a6\u00ae\u0089\u00a0\u00dbx$\u0004\u00f7\u0094\u0097\u00da\u00b8\u00d4\u0017 \u00b5\u00a7|.\u00e7\u009e\u00a0\u00f9\u00ec\u00b6>\u0083^\u009a\u001f\u001a\u00f2|\u00b7Jd\u00be=\u00bd\"n\u001d\u00d9\u009c#?\u00acu@T\u00a1\u009d7\t\b\u00e0Q\u00f8\u0007]\u0094\u00bf\u00bfJ\u00b9\u001e\u00a3/\u009bs\u0083\u0082\u0086]Sy?5\u00b9\u00ce\u00bf$e)\u00e2;9~\u00a9x\u00fcZ\"2z\u00067\u00bad\u00aeJ\u00f0\u0087\u00c1t\u00a3\bD\u00c8\u00ed%\u00e5Z\r\u00da~\u0093\u00b59\u00ae\u001e\u00ef\u001d\u00fd\u00ca\u0090&\u00fd\u00eb0Q\u008c\u0094,\u00e6\u0014\u008dM\u009c\u00ff'\u0097\u00ba\u00c5\u00b7\u0098\u00bf\u00ceR\u0011\u0096\\B\u00ed\u001c\u00e6W\u00d4\u0087\u00ee\u00faQj\u009f\u00d0\u00a1\u009b/\u0095\u0081\u00b4\u00d9\u00ba\u00d8ff\u0094G?\u00ce\u009d\u00f1\u00eb\u00c8)\u00a1\u00ad\u008ba2\u0010\u00eb9\u00dcm\u00ca\u00da\u00cb#3U\u0093\u001b\u0007M\u000e\n2\u00efghu\u0003\u00afx \u00eb\u0091\u00c8\u009d\u00c2\u0006\u00a9\u00a2\u00edh\u0088\u00c3I\u00ba?8\u0095\u001d\u0092\u008di\u00f8\u0096s;x\u00cbh\u0098W\u00d4\r\u00c5\u00e3\u00fd\u00de\r-\u00cb\u000f\u00860\ru\u0096.r\u00f7\u008f\u00b0\u00bcG\u00e8\u00df\u001b-\u00f3\u00c6[%\u00fc^\u00ac\u00c7\u00f5\u00f3\u00c9^\u000f\u00da\u00b6\u00f8e\u0016(\u00e7\u0011\u00d1h\u00dcvAl\u008cq\u00c6\u00d0a7\u0015A\u00e5\u00cck\u00bbg\u000f\u0082q\u00ad\u00d6\u00bfd,\u00d8F\u00cd\u00ce^\u00d5\u0007\u00cc\u00e0\u0000\u00ef\u00c0\u00d7\tL\u0005\u00a7\u00ea\u00b6\u001a\u00fa\u0085\u0093$\u001a-@\u00e9\u00d7\u001a\u008a{Zq\b\u00d2\u00a2\u00f1o2\u0097\u00c1#\u00ed\u00b8\u0003j\u0014\u00f9I\u00b8\u0089\u00fe\u00a9t\u000b\fe\u00a44\u00f8\bx\u00e2\u00d0\u00b0o\u0017.\u0019Yc\u0019\u0088by\u00c8\u00fa\u00d0\u0006\u009b\u009b!m\u00a9\u0007>U2=\u0003?\u00d1\u00dc\"]\u0081\u00a0\u0084\u00c4\u0083:ld\u00bchI\u00fd\u001b\u00f4\u00ed\u00ce\u0082\t\u00e2W\u00a0t\u0000\u00ab<G\u00ae\f\u001e\u00da(\u00e0n\u00fd1\u00ce\u0006\u00eb\u00f53'HVa\u00ad)y\u0014}\u00aa\u00c1\u00dc\u00d9\u0012\u00f1x\u00b6\u00f4\u00e4\u0014\u00b4\u00d8\u00ba\u00c6;\u0019N0\u00eb*2\u00b9\u00e5}\u00fcy\u0013\u001c\u00c9Y\u0098\u00c2~\u00c3Q\u00c5Y2Q\u0004\u00cc\u009aaFk\u0086\u00ac\u00f5B]4&\u00cc3U\u0081\u00c4\u008eLj\u00d8\u00deTx\r\u0002\u00b3+\u00d3\u000e\u00a8)\u007fU\u00da\u00a3\u00d0\u00b9:\u00e8\u00d6fp\u00bc\u00fa2\u00ee\u0002!\u00e21";
                var5_9 = "\u00bbr\u00f1{89\u0095\u00a5\u00adD\u00ac\u00f5%\u00e0\u0014(\u000f;\u00fejh\u0010Mg\u00f8n\u009eS\u00dd\u00a8\u00e2\u0092L\u00cb~\u0019\u0014u34Ep0l{\u00b9;\u00fb\u00f8\u0094j\u0002\u0084\u00c1H\u0099Y\u0001\u00a6\u00ae\u0089\u00a0\u00dbx$\u0004\u00f7\u0094\u0097\u00da\u00b8\u00d4\u0017 \u00b5\u00a7|.\u00e7\u009e\u00a0\u00f9\u00ec\u00b6>\u0083^\u009a\u001f\u001a\u00f2|\u00b7Jd\u00be=\u00bd\"n\u001d\u00d9\u009c#?\u00acu@T\u00a1\u009d7\t\b\u00e0Q\u00f8\u0007]\u0094\u00bf\u00bfJ\u00b9\u001e\u00a3/\u009bs\u0083\u0082\u0086]Sy?5\u00b9\u00ce\u00bf$e)\u00e2;9~\u00a9x\u00fcZ\"2z\u00067\u00bad\u00aeJ\u00f0\u0087\u00c1t\u00a3\bD\u00c8\u00ed%\u00e5Z\r\u00da~\u0093\u00b59\u00ae\u001e\u00ef\u001d\u00fd\u00ca\u0090&\u00fd\u00eb0Q\u008c\u0094,\u00e6\u0014\u008dM\u009c\u00ff'\u0097\u00ba\u00c5\u00b7\u0098\u00bf\u00ceR\u0011\u0096\\B\u00ed\u001c\u00e6W\u00d4\u0087\u00ee\u00faQj\u009f\u00d0\u00a1\u009b/\u0095\u0081\u00b4\u00d9\u00ba\u00d8ff\u0094G?\u00ce\u009d\u00f1\u00eb\u00c8)\u00a1\u00ad\u008ba2\u0010\u00eb9\u00dcm\u00ca\u00da\u00cb#3U\u0093\u001b\u0007M\u000e\n2\u00efghu\u0003\u00afx \u00eb\u0091\u00c8\u009d\u00c2\u0006\u00a9\u00a2\u00edh\u0088\u00c3I\u00ba?8\u0095\u001d\u0092\u008di\u00f8\u0096s;x\u00cbh\u0098W\u00d4\r\u00c5\u00e3\u00fd\u00de\r-\u00cb\u000f\u00860\ru\u0096.r\u00f7\u008f\u00b0\u00bcG\u00e8\u00df\u001b-\u00f3\u00c6[%\u00fc^\u00ac\u00c7\u00f5\u00f3\u00c9^\u000f\u00da\u00b6\u00f8e\u0016(\u00e7\u0011\u00d1h\u00dcvAl\u008cq\u00c6\u00d0a7\u0015A\u00e5\u00cck\u00bbg\u000f\u0082q\u00ad\u00d6\u00bfd,\u00d8F\u00cd\u00ce^\u00d5\u0007\u00cc\u00e0\u0000\u00ef\u00c0\u00d7\tL\u0005\u00a7\u00ea\u00b6\u001a\u00fa\u0085\u0093$\u001a-@\u00e9\u00d7\u001a\u008a{Zq\b\u00d2\u00a2\u00f1o2\u0097\u00c1#\u00ed\u00b8\u0003j\u0014\u00f9I\u00b8\u0089\u00fe\u00a9t\u000b\fe\u00a44\u00f8\bx\u00e2\u00d0\u00b0o\u0017.\u0019Yc\u0019\u0088by\u00c8\u00fa\u00d0\u0006\u009b\u009b!m\u00a9\u0007>U2=\u0003?\u00d1\u00dc\"]\u0081\u00a0\u0084\u00c4\u0083:ld\u00bchI\u00fd\u001b\u00f4\u00ed\u00ce\u0082\t\u00e2W\u00a0t\u0000\u00ab<G\u00ae\f\u001e\u00da(\u00e0n\u00fd1\u00ce\u0006\u00eb\u00f53'HVa\u00ad)y\u0014}\u00aa\u00c1\u00dc\u00d9\u0012\u00f1x\u00b6\u00f4\u00e4\u0014\u00b4\u00d8\u00ba\u00c6;\u0019N0\u00eb*2\u00b9\u00e5}\u00fcy\u0013\u001c\u00c9Y\u0098\u00c2~\u00c3Q\u00c5Y2Q\u0004\u00cc\u009aaFk\u0086\u00ac\u00f5B]4&\u00cc3U\u0081\u00c4\u008eLj\u00d8\u00deTx\r\u0002\u00b3+\u00d3\u000e\u00a8)\u007fU\u00da\u00a3\u00d0\u00b9:\u00e8\u00d6fp\u00bc\u00fa2\u00ee\u0002!\u00e21".length();
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
                    var4_8 = "RfA\u00d7g\u000ew\u0098\u00dexB\u00efb\u00db\u00b1\u001c";
                    var5_9 = "RfA\u00d7g\u000ew\u0098\u00dexB\u00efb\u00db\u00b1\u001c".length();
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
        fJ.pJqSz = var6_6;
        fJ.QfLOA = new Integer[79];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(fJ.class, "aUT", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

