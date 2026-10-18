/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.client.network.AbstractClientPlayerEntity
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.util.BufferAllocator
 *  net.minecraft.entity.Entity
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.vertex.VertexFormat;
import java.lang.invoke.CallSite;
import java.lang.invoke.LambdaMetafactory;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import java.util.function.Consumer;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import net.minecraft.client.network.AbstractClientPlayerEntity;
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.util.BufferAllocator;
import net.minecraft.entity.Entity;
import sixtwo.cC;
import sixtwo.cG;
import sixtwo.dh;
import sixtwo.gb;
import sixtwo.gf;
import sixtwo.gg;
import sixtwo.gh;
import sixtwo.go;
import sixtwo.hG;
import sixtwo.jF;
import sixtwo.jJ;
import sixtwo.jL;
import sixtwo.kR;
import sixtwo.kS;
import sixtwo.kq;
import sixtwo.lF;
import sixtwo.lh;
import sixtwo.mr;
import sixtwo.rD;

public class cV
extends gg {
    private final cG RJTEl;
    private final cC GYMnk;
    private final kS qIziY;
    private static final long pmcJe;
    private static final String[] PisBp;
    private static final String[] LibVv;
    private static final Map YwHDb;
    private static final long[] rPgzr;
    private static final Integer[] AuGko;
    private static final Map cIwBU;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public cV() {
        long l2 = pmcJe ^ 0x4F878F51D371L;
        super(gf.aZL((int)cV.ZT("h", (int)30839, (long)(0x3F795AC339646E50L ^ l2)), false, gh.nOCvV));
        this.RJTEl = new cG(this, mr.clS(new int[]{(int)cV.ZT("h", (int)10438, (long)(0x67D311BA40B8BEE0L ^ l2)), (int)cV.ZT("h", (int)31493, (long)(0x79E9D8400604ED2BL ^ l2)), (int)cV.ZT("h", (int)22086, (long)(0x75D25C7600E8C06CL ^ l2)), (int)cV.ZT("h", (int)5100, (long)(0x1FB1E06DBB1485DDL ^ l2)), (int)cV.ZT("h", (int)13522, (long)(0x631DE65BDF7FA2F3L ^ l2))})).Uf(rD.dlM().bjG().bis());
        int[] nArray = new int[cV.ZT("h", (int)29590, (long)(0x538F7C13190E65B2L ^ l2))];
        nArray[0] = (int)cV.ZT("h", (int)14466, (long)(0x56B9B49567F62EB4L ^ l2));
        nArray[1] = (int)cV.ZT("h", (int)26598, (long)(0x3E305DBFF1E671D6L ^ l2));
        nArray[2] = (int)cV.ZT("h", (int)28643, (long)(0x4216F49BCB4879D4L ^ l2));
        nArray[3] = (int)cV.ZT("h", (int)14271, (long)(0x3180B4000C3AA196L ^ l2));
        nArray[4] = (int)cV.ZT("h", (int)1977, (long)(0x7D7B51D611C4919AL ^ l2));
        nArray[5] = (int)cV.ZT("h", (int)14058, (long)(0x5437BA44425AA0C7L ^ l2));
        nArray[cV.ZT("h", (int)8274, (long)(0x1DF2C15AAB1BB672L ^ l2))] = (int)cV.ZT("h", (int)8981, (long)(0x64CBB666A3B2353DL ^ l2));
        nArray[cV.ZT("h", (int)7, (long)(0x60690B9E016E9634L ^ l2))] = (int)cV.ZT("h", (int)20770, (long)(0xF2E64B78765C70DL ^ l2));
        nArray[cV.ZT("h", (int)6352, (long)(0x87F7B59B5C58EF2L ^ l2))] = (int)cV.ZT("h", (int)12661, (long)(0x7FA0261476632750L ^ l2));
        nArray[cV.ZT("h", (int)3486, (long)(0x7E97FACD66191BACL ^ l2))] = (int)cV.ZT("h", (int)31040, (long)(0x49D0C4EC12C4EF6BL ^ l2));
        this.GYMnk = new cC(this, mr.clS(nArray)).Vy(0.1).Vw(1.0).Vx(3.0).VA(1.0);
        this.qIziY = kS.bVE().duk(lh.GpGUc).dul(false).dun(true).duo(false).dup();
    }

    /*
     * Unable to fully structure code
     */
    static {
        block14: {
            block13: {
                block12: {
                    cV.pmcJe = gb.aYR(-2470474728584993321L, 1736357213481642949L, MethodHandles.lookup().lookupClass()).a(83191937741183L);
                    cV.YwHDb = new HashMap<K, V>(13);
                    var11 = cV.pmcJe ^ 9441958642408L;
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
                    var20_3 = new String[2];
                    var18_4 = 0;
                    var17_5 = "k0\u00e8\\3\u0000\u00d0\u0004\u0085\u0082=\u009b\u00c1\u00b0\u00e6\u00010l3/Q^\u00a8I\u0004\f\u00deT\u00cfN\u007f\u00ac ;'\u00f5\u0081\u008d\u00bd\u00bf\u0010\u0091+U\u0088h\u0088\u00b5\n\u00a2\u001c88\u0090\u00b6\u00fb\nv\u00e8\u00c6\u0011v\bI\u0083";
                    var19_6 = "k0\u00e8\\3\u0000\u00d0\u0004\u0085\u0082=\u009b\u00c1\u00b0\u00e6\u00010l3/Q^\u00a8I\u0004\f\u00deT\u00cfN\u007f\u00ac ;'\u00f5\u0081\u008d\u00bd\u00bf\u0010\u0091+U\u0088h\u0088\u00b5\n\u00a2\u001c88\u0090\u00b6\u00fb\nv\u00e8\u00c6\u0011v\bI\u0083".length();
                    var16_7 = 32;
                    var15_8 = -1;
lbl20:
                    // 2 sources

                    while (true) {
                        continue;
                        break;
                    }
lbl22:
                    // 1 sources

                    while (true) {
                        var20_3[var18_4++] = cV.ZN(var21_9).intern();
                        if ((var15_8 += var16_7) < var19_6) {
                            var16_7 = var17_5.charAt(var15_8);
                            ** continue;
                        }
                        break block12;
                        break;
                    }
                    v3 = ++var15_8;
                    var21_9 = var13_1.doFinal(var17_5.substring(v3, v3 + var16_7).getBytes("ISO-8859-1"));
                    ** while (true)
                }
                cV.PisBp = var20_3;
                cV.LibVv = new String[2];
                cV.cIwBU = new HashMap<K, V>(13);
                var0_10 = Cipher.getInstance("DES/CBC/NoPadding");
                v4 = SecretKeyFactory.getInstance("DES");
                v5 = new byte[8];
                v6 = v5;
                v5[0] = (byte)(var11 >>> 56);
                for (var1_11 = 1; var1_11 < 8; ++var1_11) {
                    v6 = v6;
                    v6[var1_11] = (byte)(var11 << var1_11 * 8 >>> 56);
                }
                var0_10.init(2, (Key)v4.generateSecret(new DESKeySpec(v6)), new IvParameterSpec(new byte[8]));
                var6_12 = new long[22];
                var3_13 = 0;
                var4_14 = "\u00c4\u0080\u00b4f\u00d6\b\u0092\u00b2\r\u0098`\u00bd\u0084\u00a4\u007f\\F\u0018\u00e4K\u00f4\u008f\u00b9\u0002Z\u0016\u00ab\u0084\u00fdZ;R\u00f0\u00bas29\u00923\u00a6_@D\u00eb\u00e2s(f\u00e0T1L[\u0003\u00c7j\u00ed]&\u00b69T\u0012 uEzf\u00aaF\u001e\u00816o<h\u00e2\u00dd_n3vS\u00e0:\u00ff\u00cbZT\u0084\u00ea\u0081G\u001dC\u00fb\u00d8\u009bD\u00e9\u00c5\u00f1\u00baP\u00d1\u008e7\u00abfu\u00e4\u0001#W&\u00d9p\u00e5c\u00fd\u00b9iv\u00f5\u00e1\u0016\u0010\u00a6\u00d0\u0005Y5\u00e1\u00f8\u00f1\u001f\u0006s?\u00e7\u00bc\u009c\u00ea s|W\u00b6t\u0097\u00ba\u00e8\u0090\u00eb\u00ed\u0001Y\u00d7XA";
                var5_15 = "\u00c4\u0080\u00b4f\u00d6\b\u0092\u00b2\r\u0098`\u00bd\u0084\u00a4\u007f\\F\u0018\u00e4K\u00f4\u008f\u00b9\u0002Z\u0016\u00ab\u0084\u00fdZ;R\u00f0\u00bas29\u00923\u00a6_@D\u00eb\u00e2s(f\u00e0T1L[\u0003\u00c7j\u00ed]&\u00b69T\u0012 uEzf\u00aaF\u001e\u00816o<h\u00e2\u00dd_n3vS\u00e0:\u00ff\u00cbZT\u0084\u00ea\u0081G\u001dC\u00fb\u00d8\u009bD\u00e9\u00c5\u00f1\u00baP\u00d1\u008e7\u00abfu\u00e4\u0001#W&\u00d9p\u00e5c\u00fd\u00b9iv\u00f5\u00e1\u0016\u0010\u00a6\u00d0\u0005Y5\u00e1\u00f8\u00f1\u001f\u0006s?\u00e7\u00bc\u009c\u00ea s|W\u00b6t\u0097\u00ba\u00e8\u0090\u00eb\u00ed\u0001Y\u00d7XA".length();
                var2_16 = 0;
                while (true) {
                    var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                    v7 = var6_12;
                    v8 = var3_13++;
                    v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                    v10 = -1;
                    break block13;
                    break;
                }
lbl58:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    var4_14 = "\u00ae\u00f9=\\\u009d\u00ac\u00db\u00een\u0083\u00c9>\u00a8-UV";
                    var5_15 = "\u00ae\u00f9=\\\u009d\u00ac\u00db\u00een\u0083\u00c9>\u00a8-UV".length();
                    var2_16 = 0;
                    while (true) {
                        var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
                        v7 = var6_12;
                        v8 = var3_13++;
                        v9 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
                        v10 = 0;
                        break block13;
                        break;
                    }
                    break;
                }
lbl71:
                // 1 sources

                while (true) {
                    v7[v8] = v11;
                    if (var2_16 < var5_15) ** continue;
                    break block14;
                    break;
                }
            }
            var8_18 = v9;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            v11 = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
            switch (v10) {
                default: {
                    ** continue;
                }
                ** case 0:
lbl84:
                // 1 sources

                ** continue;
            }
        }
        cV.rPgzr = var6_12;
        cV.AuGko = new Integer[22];
    }

    /*
     * Unable to fully structure code
     */
    @hG
    public void ZK(go.sX var1_1) {
        block30: {
            var2_2 = cV.pmcJe ^ 16725379719620L;
            var4_3 = dh.afl();
            try {
                if (!this.bab()) {
                    return;
                }
            }
            catch (Throwable v0) {
                throw cV.ZM(v0);
            }
            var5_4 = var1_1.bbh();
            var6_5 = var1_1.bbi();
            var7_6 = this.RJTEl.Wh();
            var8_7 = this.GYMnk.VB();
            var9_8 = new BufferAllocator(VertexFormats.POSITION_COLOR_NORMAL_LINE_WIDTH.getVertexSize() * cV.ZT("h", (int)707, (long)(2025765352078927450L ^ var2_2)));
            try {
                block29: {
                    block27: {
                        var10_9 = new BufferBuilder(var9_8, VertexFormat.DrawMode.LINES, VertexFormats.POSITION_COLOR_NORMAL_LINE_WIDTH);
                        for (AbstractClientPlayerEntity var12_13 : rD.dlmvG.world.getPlayers()) {
                            block26: {
                                try {
                                    v1 = var12_13;
                                    if (var4_3 != null) break block26;
                                    if (v1 == rD.dlmvG.player) continue;
                                }
                                catch (Throwable v2) {
                                    throw cV.ZM(v2);
                                }
                                v1 = var12_13;
                            }
                            try {
                                if (!jJ.bIB((Entity)v1) && var4_3 == null) continue;
                            }
                            catch (Throwable v3) {
                                throw cV.ZM(v3);
                            }
                            kq.bQG(var5_4, var10_9, var6_5, var12_13, var7_6, var8_7);
                            if (var4_3 == null) continue;
                        }
                        var11_11 = var10_9.endNullable();
                        try {
                            block28: {
                                v4 = var11_11;
                                if (var4_3 != null) break block27;
                                try {
                                    block32: {
                                        if (v4 == null) break block28;
                                        break block32;
                                        catch (Throwable v5) {
                                            throw cV.ZM(v5);
                                        }
                                    }
                                    lF.cfQ(kR.hvBSz.bUZ(this.qIziY), var11_11, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, ZL(com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)());
                                }
                                catch (Throwable v6) {
                                    throw cV.ZM(v6);
                                }
                            }
                            v4 = var11_11;
                        }
                        catch (Throwable var12_14) {
                            block31: {
                                try {
                                    v7 = var11_11;
                                    if (var4_3 == null) {
                                        if (v7 == null) break block31;
                                    }
                                    ** GOTO lbl61
                                }
                                catch (Throwable v8) {
                                    throw cV.ZM(v8);
                                }
                                try {
                                    v7 = var11_11;
lbl61:
                                    // 2 sources

                                    v7.close();
                                }
                                catch (Throwable var13_15) {
                                    var12_14.addSuppressed(var13_15);
                                }
                            }
                            throw var12_14;
                        }
                    }
                    try {
                        if (var4_3 != null) break block29;
                        if (v4 == null) break block30;
                    }
                    catch (Throwable v9) {
                        throw cV.ZM(v9);
                    }
                    v4 = var11_11;
                }
                v4.close();
            }
            finally {
                var9_8.close();
            }
        }
    }

    private static Throwable ZM(Throwable throwable) {
        return throwable;
    }

    private static /* synthetic */ void ZL(RenderPass renderPass) {
        long l2 = pmcJe ^ 0x6F0187266F1BL;
        jL.ARZDF.bJl();
        jL.ARZDF.bJr((String)((Object)cV.ZQ("z", (int)23321, (long)(0x63F98BC180B88E2FL ^ l2))), rD.dlmvG.getFramebuffer().textureWidth, rD.dlmvG.getFramebuffer().textureHeight);
        jL.ARZDF.bJu((String)((Object)cV.ZQ("z", (int)32237, (long)(0x2A4C2F17B2C528DAL ^ l2))), jF.bHw());
    }

    private static CallSite ZQ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cV" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static CallSite ZT(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/cV" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String ZN(byte[] byArray) {
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

    private static String ZO(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0xBC6;
        if (LibVv[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])YwHDb.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    YwHDb.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cV", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = PisBp[n3].getBytes("ISO-8859-1");
            cV.LibVv[n3] = cV.ZN(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return LibVv[n3];
    }

    private static int ZR(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x74B8;
        if (AuGko[n3] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            long l3 = rPgzr[n3];
            byte[] byArray3 = new byte[]{(byte)(l3 >>> 56), (byte)(l3 >>> 48), (byte)(l3 >>> 40), (byte)(l3 >>> 32), (byte)(l3 >>> 24), (byte)(l3 >>> 16), (byte)(l3 >>> 8), (byte)l3};
            Long l4 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])cIwBU.get(l4);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    cIwBU.put(l4, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/cV", exception);
            }
            int n4 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            cV.AuGko[n3] = n4;
        }
        return AuGko[n3];
    }

    private static int ZS(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        int n3 = cV.ZR(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n3);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n3;
    }

    private static Object ZP(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = cV.ZO(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(cV.class, "ZP", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(cV.class, "ZS", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

