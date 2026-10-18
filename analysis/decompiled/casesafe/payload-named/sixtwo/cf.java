/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.item.ItemStack
 *  net.minecraft.util.collection.DefaultedList
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
import net.minecraft.item.ItemStack;
import net.minecraft.util.collection.DefaultedList;
import sixtwo.ca;
import sixtwo.co;
import sixtwo.gb;
import sixtwo.ii;
import sixtwo.jF;
import sixtwo.jf;
import sixtwo.ju;
import sixtwo.jv;
import sixtwo.jw;
import sixtwo.lC;
import sixtwo.lE;
import sixtwo.lf;
import sixtwo.lq;
import sixtwo.mG;
import sixtwo.rD;
import sixtwo.rj;
import sixtwo.rk;

public class cf
extends co {
    private final rk[] UlmqM;
    private final rk FPFaU;
    private static final long NGoqZ;
    private static final long[] QbRBk;
    private static final Integer[] gXJqM;
    private static final Map TolKa;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cf() {
        long l2 = NGoqZ ^ 0x1AE0CA72D6CDL;
        int[] nArray = new int[cf.Qa("c", (int)21440, (long)(0x1484670D81BE69CCL ^ l2))];
        nArray[0] = (int)cf.Qa("c", (int)31172, (long)(0x7ED001EFC25F43CFL ^ l2));
        nArray[1] = (int)cf.Qa("c", (int)20836, (long)(0x72102D19BD416B65L ^ l2));
        nArray[2] = (int)cf.Qa("c", (int)17365, (long)(0x593C0442DC7179D3L ^ l2));
        nArray[3] = (int)cf.Qa("c", (int)31692, (long)(0x4987EBCB63E741DBL ^ l2));
        nArray[4] = (int)cf.Qa("c", (int)6568, (long)(0x7652F0C20B3F23A6L ^ l2));
        nArray[5] = (int)cf.Qa("c", (int)30177, (long)(0x143851551CA44FE3L ^ l2));
        nArray[cf.Qa("c", (int)6381, (long)(0x3E546C8C83AA2E9L ^ l2))] = (int)cf.Qa("c", (int)7856, (long)(0x280C7C72FF5B24B5L ^ l2));
        nArray[cf.Qa("c", (int)21277, (long)(0x18DA06B0ED8DE910L ^ l2))] = (int)cf.Qa("c", (int)9337, (long)(0x2716FD098BDB9E71L ^ l2));
        nArray[cf.Qa("c", (int)3214, (long)(0x293FE5DFF4033689L ^ l2))] = (int)cf.Qa("c", (int)29027, (long)(0x5C8B959F6A774B60L ^ l2));
        super(nArray, lf.fEKkJ);
        this.UlmqM = new rk[cf.Qa("c", (int)16681, (long)(0x18DA985EF78EFB20L ^ l2))];
        this.FPFaU = new rk((int)cf.Qa("c", (int)30941, (long)(0x2C06430B935B42D7L ^ l2))).dhs(rj.NJlxm);
        boolean bl2 = ca.OY();
        for (int i2 = 0; i2 < this.UlmqM.length; ++i2) {
            this.UlmqM[i2] = new rk((int)cf.Qa("c", (int)1103, (long)(0x3552160B12C03E40L ^ l2))).dhs(rj.XzDkv);
            if (bl2) continue;
        }
    }

    /*
     * Unable to fully structure code
     */
    static {
        block9: {
            block8: {
                cf.NGoqZ = gb.aYR(-5723543788386125114L, 6796361726211910234L, MethodHandles.lookup().lookupClass()).a(204007560076448L);
                cf.TolKa = new HashMap<K, V>(13);
                var0 = cf.NGoqZ ^ 97440077249969L;
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
                var8_3 = new long[17];
                var5_4 = 0;
                var6_5 = "\u00ed\u00d0\\\u009a\u00e0H\u0015+\u0015\u00a3\u00f6\u0014~\u00fe3\u00d0\u00ba\u0093/\u00d938N pl\u00ce\u0012\u0001\u00aeZ\u00c1>\u00d8\nm\u00d9,\u0085\u00c8\u00cazE\u00ec\u0093k|{\u00b5\u00ea\u00c2\u001aa>\u00d6}\u00a3\u008e$\u0082\u00be\u0018\u00cdx\u00e2\u00fd;8\u0004\u00aa\u00d7yU\u00c2L\u00f1\u00bajT\u00d2r\u0092|\u00d1\u00ebR\u0016\u00fd\u0096p\u00b5\tO\u00e6\u001d\u00b2lKv\u00b0\u009f\u009d\u00ca\u00e5\u00ee\u00ca\u0003\u00fb\u00e1!\u00845\u00f9\u0094)\u0084\u00d2wT,";
                var7_6 = "\u00ed\u00d0\\\u009a\u00e0H\u0015+\u0015\u00a3\u00f6\u0014~\u00fe3\u00d0\u00ba\u0093/\u00d938N pl\u00ce\u0012\u0001\u00aeZ\u00c1>\u00d8\nm\u00d9,\u0085\u00c8\u00cazE\u00ec\u0093k|{\u00b5\u00ea\u00c2\u001aa>\u00d6}\u00a3\u008e$\u0082\u00be\u0018\u00cdx\u00e2\u00fd;8\u0004\u00aa\u00d7yU\u00c2L\u00f1\u00bajT\u00d2r\u0092|\u00d1\u00ebR\u0016\u00fd\u0096p\u00b5\tO\u00e6\u001d\u00b2lKv\u00b0\u009f\u009d\u00ca\u00e5\u00ee\u00ca\u0003\u00fb\u00e1!\u00845\u00f9\u0094)\u0084\u00d2wT,".length();
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
                    var6_5 = "a\u00cc\u00cb\u00a6Y\u00fa\u0007\u00df\u00ebx+\u0082\u001d\u00dcI\u0012";
                    var7_6 = "a\u00cc\u00cb\u00a6Y\u00fa\u0007\u00df\u00ebx+\u0082\u001d\u00dcI\u0012".length();
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
        cf.QbRBk = var8_3;
        cf.gXJqM = new Integer[17];
    }

    private static CallSite Qa(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cf" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static MatchException PX(MatchException matchException) {
        return matchException;
    }

    @Override
    protected void NV(lC lC2) {
        block13: {
            float f2;
            rk rk2;
            boolean bl2;
            float f3;
            float f4;
            long l2;
            block11: {
                block12: {
                    l2 = NGoqZ ^ 0x4235D6E6EA39L;
                    lq lq2 = lE.WTzbi.bYM(7.0f);
                    ii ii2 = rD.dlM();
                    f4 = this.ormBS.dhj();
                    f3 = this.gILqY.dhj();
                    mG mG2 = ii2.bjb().coa(255.0f * f4);
                    mG mG3 = ii2.bjc().coa(255.0f * f4);
                    bl2 = ca.OX();
                    float f5 = 20.0f;
                    lC2.ccU(this.toIeR, this.QWaAn, this.jTsqG, f5, f4, f3);
                    float f6 = this.toIeR + 7.0f;
                    float f7 = this.QWaAn + jf.bAH(lq2.cat(), f5);
                    lC2.ceA(lq2, this.eqWHC, f6, f7, mG2);
                    float f8 = 8.0f;
                    float f9 = this.toIeR + this.jTsqG - f8 - 7.0f;
                    float f10 = this.QWaAn + jf.bAH(f8, f5);
                    try {
                        lC2.cem(this.jAncU, f9, f10, f8, mG3);
                        rk2 = this.FPFaU;
                        float f11 = this.ormBS.dhj() * this.KgDVz.dhj() - 1.0f;
                        f2 = f11 == 0.0f ? 0 : (f11 > 0.0f ? 1 : -1);
                        if (bl2) break block11;
                        if (f2 < 0) break block12;
                    }
                    catch (MatchException matchException) {
                        throw cf.PX(matchException);
                    }
                    f2 = 1.0f;
                    break block11;
                }
                f2 = 0.0f;
            }
            rk2.dhc((boolean)f2);
            float f12 = 16.0f;
            DefaultedList defaultedList = rD.dlmvG.player.getInventory().getMainStacks();
            float f13 = 22.0f;
            int n2 = 0;
            block8: while (true) {
                int n3 = n2;
                block9: while (n3 < 3) {
                    lC2.ccU(this.toIeR, this.QWaAn + f13, this.jTsqG, f12, f4, f3);
                    float f14 = 7.0f;
                    float f15 = f13 + jf.bAH(8.0f, f12);
                    reference var23_22 = cf.Qa("c", (int)24262, (long)(0xA641A4C49585832L ^ l2)) + n2 * cf.Qa("c", (int)21440, (long)(0x14843FD89D2A5538L ^ l2));
                    int n4 = Math.min((int)(var23_22 + cf.Qa("c", (int)21440, (long)(0x14843FD89D2A5538L ^ l2))), defaultedList.size());
                    List list = defaultedList.subList((int)var23_22, n4);
                    if (bl2) break block13;
                    int n5 = 0;
                    while (n5 < list.size()) {
                        block14: {
                            block15: {
                                boolean bl3;
                                rk rk3;
                                ItemStack itemStack;
                                int n6;
                                block16: {
                                    block17: {
                                        n6 = n2 * cf.Qa("c", (int)21440, (long)(0x14843FD89D2A5538L ^ l2)) + n5;
                                        itemStack = (ItemStack)list.get(n5);
                                        try {
                                            if (bl2) break block14;
                                            n3 = itemStack.isEmpty() ? 1 : 0;
                                            if (bl2) continue block9;
                                        }
                                        catch (MatchException matchException) {
                                            throw cf.PX(matchException);
                                        }
                                        try {
                                            try {
                                                if (n3 != 0) break block15;
                                                rk3 = this.UlmqM[n6];
                                                bl3 = itemStack.isEmpty();
                                                if (bl2) break block16;
                                            }
                                            catch (MatchException matchException) {
                                                throw cf.PX(matchException);
                                            }
                                            if (bl3) break block17;
                                        }
                                        catch (MatchException matchException) {
                                            throw cf.PX(matchException);
                                        }
                                        bl3 = true;
                                        break block16;
                                    }
                                    bl3 = false;
                                }
                                rk3.dhc(bl3);
                                float f16 = this.FPFaU.dhj() * this.UlmqM[n6].dhj();
                                float f17 = jF.bHw()[3];
                                jF.bHz(1.0f, 1.0f, 1.0f, f17 * f16);
                                ((jv)lC2.cea(itemStack, this.toIeR + f14, this.QWaAn + f15, 0.5f).bGw()).bGv();
                                ((jw)lC2.ceb(itemStack, this.toIeR + f14, this.QWaAn + f15, 0.5f).bGw()).bGv();
                                jF.bHz(1.0f, 1.0f, 1.0f, f17);
                                f14 += 15.0f;
                            }
                            ++n5;
                        }
                        if (!bl2) continue;
                    }
                    f13 += f12 + 2.0f;
                    ++n2;
                    if (!bl2) continue block8;
                }
                break;
            }
            ju.bFV();
        }
    }

    @Override
    public void LX(lC lC2) {
        this.jTsqG = 142.0f;
        this.Xtjvx = 74.0f;
        super.LX(lC2);
    }

    private static int PZ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cf.PY(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static int PY(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x6F27;
        if (gXJqM[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = QbRBk[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])TolKa.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    TolKa.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cf", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cf.gXJqM[n3] = n4;
        }
        return gXJqM[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cf.class, "PZ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

