/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_1044
 *  net.minecraft.class_290
 *  org.joml.Matrix3x2fc
 *  org.joml.Matrix4f
 *  org.joml.Matrix4fc
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
import net.minecraft.class_1044;
import net.minecraft.class_290;
import org.joml.Matrix3x2fc;
import org.joml.Matrix4f;
import org.joml.Matrix4fc;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jF;
import sixtwo.jL;
import sixtwo.kG;
import sixtwo.kJ;
import sixtwo.kQ;
import sixtwo.kR;
import sixtwo.kS;
import sixtwo.lB;
import sixtwo.lF;
import sixtwo.lh;

public class kM
extends kQ<kG> {
    private static final kS QtUiq;
    private kS CVExj;
    private class_1044 YBRYO;
    private lB igkON = lB.xCeuB;
    private static final long ucBJB;
    private static final String[] gGbVS;
    private static final String[] SchCH;
    private static final Map JoxgO;
    private static final long[] wyhzh;
    private static final Integer[] ZsPCG;
    private static final Map Hsssh;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block16: {
            block15: {
                block14: {
                    block13: {
                        kM.ucBJB = gb.aYR(-5198685296692602802L, -8926943184206132909L, MethodHandles.lookup().lookupClass()).a(75236766599661L);
                        kM.JoxgO = new HashMap<K, V>(13);
                        var11 = kM.ucBJB ^ 103050957133292L;
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
                        var17_5 = "\u00c5{\u00a4AY\u001e*m\u00f3\u0093\u00e4\u00f4K^\u00d2\u00fe<G\u00cb1\u0081\u00f8\u0085\u00b4 K\u00e2\u009d`\u0012!\u0000\u00c2p\u00df/\u00caD}\u00ad\u00f4\u00b2xNx\u00a8\u00be\u008ac\u00cf\u00e3M\u0094~\u00b8\u009f\u00c2";
                        var19_6 = "\u00c5{\u00a4AY\u001e*m\u00f3\u0093\u00e4\u00f4K^\u00d2\u00fe<G\u00cb1\u0081\u00f8\u0085\u00b4 K\u00e2\u009d`\u0012!\u0000\u00c2p\u00df/\u00caD}\u00ad\u00f4\u00b2xNx\u00a8\u00be\u008ac\u00cf\u00e3M\u0094~\u00b8\u009f\u00c2".length();
                        var16_7 = 24;
                        var15_8 = -1;
lbl20:
                        // 2 sources

                        while (true) {
                            v3 = ++var15_8;
                            v4 = var17_5.substring(v3, v3 + var16_7);
                            v5 = -1;
                            break block13;
                            break;
                        }
lbl25:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = kM.bUL(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            var17_5 = "\u00b3\u00cb\u00b5\u00b74\u00fa\u00f1\u00c5d\u00f4\u00fd\u00c2\u00d8[\u00d9\u00be\u0011M4D\u00b8\u00f1\u00de-\u00a2\u00c8\u00f1Lp\u009b\u00b4r\u0018\u0094i\u00b1^\u00f0,\u00180\u0085*y\u009d\u00ab\u00da\u001f\u001f\u001a,:~\u0017@\u00abC";
                            var19_6 = "\u00b3\u00cb\u00b5\u00b74\u00fa\u00f1\u00c5d\u00f4\u00fd\u00c2\u00d8[\u00d9\u00be\u0011M4D\u00b8\u00f1\u00de-\u00a2\u00c8\u00f1Lp\u009b\u00b4r\u0018\u0094i\u00b1^\u00f0,\u00180\u0085*y\u009d\u00ab\u00da\u001f\u001f\u001a,:~\u0017@\u00abC".length();
                            var16_7 = 32;
                            var15_8 = -1;
lbl34:
                            // 2 sources

                            while (true) {
                                v6 = ++var15_8;
                                v4 = var17_5.substring(v6, v6 + var16_7);
                                v5 = 0;
                                break block13;
                                break;
                            }
                            break;
                        }
lbl39:
                        // 1 sources

                        while (true) {
                            var20_3[var18_4++] = kM.bUL(var21_9).intern();
                            if ((var15_8 += var16_7) < var19_6) {
                                var16_7 = var17_5.charAt(var15_8);
                                ** continue;
                            }
                            break block14;
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
                kM.gGbVS = var20_3;
                kM.SchCH = new String[4];
                kM.Hsssh = new HashMap<K, V>(13);
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
                var6_12 = new long[2];
                var3_13 = 0;
                var4_14 = "\u0001^\u0094$[\u00eaC\u000b\u00a8=\u0084\u0011\u0006p!\u0097";
                var5_15 = "\u0001^\u0094$[\u00eaC\u000b\u00a8=\u0084\u0011\u0006p!\u0097".length();
                var2_16 = 0;
                while (true) {
                    break block15;
                    break;
                }
lbl73:
                // 1 sources

                while (true) {
                    var6_12[v10] = ((long)var10_19[0] & 255L) << 56 | ((long)var10_19[1] & 255L) << 48 | ((long)var10_19[2] & 255L) << 40 | ((long)var10_19[3] & 255L) << 32 | ((long)var10_19[4] & 255L) << 24 | ((long)var10_19[5] & 255L) << 16 | ((long)var10_19[6] & 255L) << 8 | (long)var10_19[7] & 255L;
                    if (var2_16 < var5_15) ** continue;
                    break block16;
                    break;
                }
            }
            var7_17 = var4_14.substring(var2_16, var2_16 += 8).getBytes("ISO-8859-1");
            v10 = var3_13++;
            var8_18 = ((long)var7_17[0] & 255L) << 56 | ((long)var7_17[1] & 255L) << 48 | ((long)var7_17[2] & 255L) << 40 | ((long)var7_17[3] & 255L) << 32 | ((long)var7_17[4] & 255L) << 24 | ((long)var7_17[5] & 255L) << 16 | ((long)var7_17[6] & 255L) << 8 | (long)var7_17[7] & 255L;
            var10_19 = var0_10.doFinal(new byte[]{(byte)(var8_18 >>> 56), (byte)(var8_18 >>> 48), (byte)(var8_18 >>> 40), (byte)(var8_18 >>> 32), (byte)(var8_18 >>> 24), (byte)(var8_18 >>> 16), (byte)(var8_18 >>> 8), (byte)var8_18});
            ** while (true)
        }
        kM.wyhzh = var6_12;
        kM.ZsPCG = new Integer[2];
        kM.QtUiq = kS.bVE().duk(lh.aApMr).duo(false).dul(true).dun(false).dup();
    }

    @Override
    public void flush() {
        this.bVj();
        this.bUG();
        this.bVi(VertexFormat.class_5596.field_27382, class_290.field_20888);
    }

    @Override
    public kS defaultState() {
        return QtUiq;
    }

    @Override
    public void startBatch(class_1044 class_10442, kS kS2) {
        this.CVExj = kS2;
        this.YBRYO = class_10442;
        this.igkON = lB.xCeuB;
        this.bVi(VertexFormat.class_5596.field_27382, class_290.field_20888);
    }

    @Override
    public void endBatch() {
        this.bVj();
        this.bUG();
        this.bVl();
    }

    public void bUH(kG kG2) {
        block14: {
            Matrix4f matrix4f;
            kG kG3;
            int n;
            float f;
            float f2;
            float f3;
            float f4;
            float f5;
            long l;
            block12: {
                block13: {
                    boolean bl;
                    block11: {
                        lB lB2;
                        block10: {
                            lB lB3;
                            l = ucBJB ^ 0x7BE9E4D009E7L;
                            boolean bl2 = kJ.bUj();
                            this.bVj();
                            bl = bl2;
                            try {
                                lB3 = kG2.bTz() != null ? lB.xCeuB : lB.rMraa;
                            }
                            catch (MatchException matchException) {
                                throw kM.bUK(matchException);
                            }
                            lB2 = lB3;
                            try {
                                try {
                                    if (!bl) break block10;
                                    if (lB2 == this.igkON) break block11;
                                }
                                catch (MatchException matchException) {
                                    throw kM.bUK(matchException);
                                }
                                this.flush();
                            }
                            catch (MatchException matchException) {
                                throw kM.bUK(matchException);
                            }
                        }
                        this.igkON = lB2;
                    }
                    f5 = kG2.bTA();
                    f4 = kG2.bTB();
                    f3 = kG2.bTC();
                    f2 = kG2.bTD();
                    f = kG2.bTE();
                    n = kG2.bTF().coh();
                    try {
                        kG3 = kG2;
                        if (!bl) break block12;
                        if (kG3.bTz() == null) break block13;
                    }
                    catch (MatchException matchException) {
                        throw kM.bUK(matchException);
                    }
                    matrix4f = kG2.bTz();
                    try {
                        this.WfBOj.method_70815((Matrix3x2fc)matrix4f, f5, f4).method_39415(n).method_22913(0.0f, 0.0f).method_22921(0, (int)kM.bUR("i", (int)22300, (long)(0x60F464FB10015784L ^ l)));
                        this.WfBOj.method_70815((Matrix3x2fc)matrix4f, f5, f4 + f).method_39415(n).method_22913(0.0f, 1.0f).method_22921(0, (int)kM.bUR("i", (int)13009, (long)(0x185496824D6B248L ^ l)));
                        this.WfBOj.method_70815((Matrix3x2fc)matrix4f, f5 + f2, f4 + f).method_39415(n).method_22913(1.0f, 1.0f).method_22921(0, (int)kM.bUR("i", (int)13009, (long)(0x185496824D6B248L ^ l)));
                        this.WfBOj.method_70815((Matrix3x2fc)matrix4f, f5 + f2, f4).method_39415(n).method_22913(1.0f, 0.0f).method_22921(0, (int)kM.bUR("i", (int)13009, (long)(0x185496824D6B248L ^ l)));
                        if (bl) break block14;
                        iS.bwK("jEHAVb");
                    }
                    catch (MatchException matchException) {
                        throw kM.bUK(matchException);
                    }
                }
                kG3 = kG2;
            }
            matrix4f = kG3.bTy().method_23760().method_23761();
            this.WfBOj.method_22918((Matrix4fc)matrix4f, f5, f4, f3).method_39415(n).method_22913(0.0f, 1.0f).method_22921(0, (int)kM.bUR("i", (int)13009, (long)(0x185496824D6B248L ^ l)));
            this.WfBOj.method_22918((Matrix4fc)matrix4f, f5, f4 + f, f3).method_39415(n).method_22913(0.0f, 0.0f).method_22921(0, (int)kM.bUR("i", (int)13009, (long)(0x185496824D6B248L ^ l)));
            this.WfBOj.method_22918((Matrix4fc)matrix4f, f5 + f2, f4 + f, f3).method_39415(n).method_22913(1.0f, 0.0f).method_22921(0, (int)kM.bUR("i", (int)13009, (long)(0x185496824D6B248L ^ l)));
            this.WfBOj.method_22918((Matrix4fc)matrix4f, f5 + f2, f4, f3).method_39415(n).method_22913(1.0f, 1.0f).method_22921(0, (int)kM.bUR("i", (int)13009, (long)(0x185496824D6B248L ^ l)));
        }
    }

    @Override
    public void swapTexture(class_1044 class_10442) {
        this.bVj();
        this.flush();
        this.YBRYO = class_10442;
    }

    private static Throwable bUK(Throwable throwable) {
        return throwable;
    }

    /*
     * Unable to fully structure code
     */
    private void bUG() {
        block35: {
            block34: {
                block25: {
                    block26: {
                        block31: {
                            block33: {
                                block32: {
                                    block30: {
                                        block27: {
                                            block29: {
                                                block28: {
                                                    var1_1 = kM.ucBJB ^ 139242617356656L;
                                                    var4_2 = this.WfBOj.method_60794();
                                                    var3_3 = kJ.bUi();
                                                    try {
                                                        block37: {
                                                            v0 = var4_2;
                                                            if (var3_3) break block25;
                                                            if (v0 == null) break block26;
                                                            break block37;
                                                            catch (Throwable v1) {
                                                                throw kM.bUK(v1);
                                                            }
                                                        }
                                                        try {
                                                            block38: {
                                                                v2 = kR.Dmmsd;
                                                                if (var3_3) ** GOTO lbl57
                                                                break block38;
                                                                catch (Throwable v3) {
                                                                    throw kM.bUK(v3);
                                                                }
                                                            }
                                                            if (v2 != null) break block27;
                                                        }
                                                        catch (Throwable v4) {
                                                            throw kM.bUK(v4);
                                                        }
                                                    }
                                                    catch (Throwable var5_5) {
                                                        block36: {
                                                            try {
                                                                v5 = var4_2;
                                                                if (!var3_3) {
                                                                    if (v5 == null) break block36;
                                                                }
                                                                ** GOTO lbl36
                                                            }
                                                            catch (Throwable v6) {
                                                                throw kM.bUK(v6);
                                                            }
                                                            try {
                                                                v5 = var4_2;
lbl36:
                                                                // 2 sources

                                                                v5.close();
                                                            }
                                                            catch (Throwable var6_6) {
                                                                var5_5.addSuppressed(var6_6);
                                                            }
                                                        }
                                                        throw var5_5;
                                                    }
                                                    try {
                                                        v7 = var4_2;
                                                        if (var3_3) break block28;
                                                        if (v7 == null) break block29;
                                                    }
                                                    catch (Throwable v8) {
                                                        throw kM.bUK(v8);
                                                    }
                                                    v7 = var4_2;
                                                }
                                                v7.close();
                                            }
                                            return;
                                        }
                                        v2 = kR.Dmmsd;
lbl57:
                                        // 2 sources

                                        var5_4 = v2.bUZ(this.CVExj);
                                        if (var3_3) break block30;
                                        try {
                                            block39: {
                                                if (this.igkON != lB.rMraa) break block31;
                                                break block39;
                                                catch (Throwable v9) {
                                                    throw kM.bUK(v9);
                                                }
                                            }
                                            lF.cfQ(var5_4, var4_2, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bUJ(com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((kM)this));
                                        }
                                        catch (Throwable v10) {
                                            throw kM.bUK(v10);
                                        }
                                    }
                                    try {
                                        v11 = var4_2;
                                        if (var3_3) break block32;
                                        if (v11 == null) break block33;
                                    }
                                    catch (Throwable v12) {
                                        throw kM.bUK(v12);
                                    }
                                    v11 = var4_2;
                                }
                                v11.close();
                            }
                            return;
                        }
                        lF.cfP(var5_4, var4_2, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bUI(com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((kM)this));
                    }
                    v0 = var4_2;
                }
                try {
                    if (var3_3) break block34;
                    if (v0 == null) break block35;
                }
                catch (Throwable v13) {
                    throw kM.bUK(v13);
                }
                v0 = var4_2;
            }
            v0.close();
        }
    }

    private /* synthetic */ void bUJ(RenderPass renderPass) {
        long l = ucBJB ^ 0x59F0BBACDB93L;
        try {
            jL.SUknV.bJl();
            jL.SUknV.bJu((String)((Object)kM.bUO("h", (int)1532, (long)(0x35899EB92618142EL ^ l))), jF.bHw());
            if (this.YBRYO != null) {
                renderPass.bindTexture((String)((Object)kM.bUO("h", (int)19185, (long)(0x1257377A31355B21L ^ l))), this.YBRYO.method_71659(), this.YBRYO.method_75484());
            }
        }
        catch (MatchException matchException) {
            throw kM.bUK(matchException);
        }
    }

    private /* synthetic */ void bUI(RenderPass renderPass) {
        long l = ucBJB ^ 0x6A5F3EC02CA0L;
        try {
            jL.SUknV.bJl();
            jL.SUknV.bJu((String)((Object)kM.bUO("h", (int)15255, (long)(0x2A8F2B5F7605DD77L ^ l))), jF.bHw());
            if (this.YBRYO != null) {
                renderPass.bindTexture((String)((Object)kM.bUO("h", (int)30397, (long)(0x4E90805FC458105FL ^ l))), this.YBRYO.method_71659(), this.YBRYO.method_75484());
            }
        }
        catch (MatchException matchException) {
            throw kM.bUK(matchException);
        }
    }

    private static CallSite bUO(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kM" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static int bUQ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        int n2 = kM.bUP(n, l);
        MethodHandle methodHandle = MethodHandles.constant(Integer.TYPE, n2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return n2;
    }

    private static int bUP(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x739E;
        if (ZsPCG[n2] == null) {
            byte[] byArray;
            byte[] byArray2 = new byte[]{(byte)(l >>> 56), (byte)(l >>> 48), (byte)(l >>> 40), (byte)(l >>> 32), (byte)(l >>> 24), (byte)(l >>> 16), (byte)(l >>> 8), (byte)l};
            long l2 = wyhzh[n2];
            byte[] byArray3 = new byte[]{(byte)(l2 >>> 56), (byte)(l2 >>> 48), (byte)(l2 >>> 40), (byte)(l2 >>> 32), (byte)(l2 >>> 24), (byte)(l2 >>> 16), (byte)(l2 >>> 8), (byte)l2};
            Long l3 = Thread.currentThread().threadId();
            Object[] objectArray = (Object[])Hsssh.get(l3);
            try {
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/NoPadding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Hsssh.put(l3, objectArray);
                }
                DESKeySpec dESKeySpec = new DESKeySpec(byArray2);
                SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
                Cipher cipher = (Cipher)objectArray[0];
                cipher.init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
                byArray = cipher.doFinal(byArray3);
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kM", exception);
            }
            int n3 = (byArray[4] & 0xFF) << 24 | (byArray[5] & 0xFF) << 16 | (byArray[6] & 0xFF) << 8 | byArray[7] & 0xFF;
            kM.ZsPCG[n2] = n3;
        }
        return ZsPCG[n2];
    }

    private static CallSite bUR(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_1().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kM" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String bUM(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x30A1;
        if (SchCH[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])JoxgO.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    JoxgO.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kM", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = gGbVS[n2].getBytes("ISO-8859-1");
            kM.SchCH[n2] = kM.bUL(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return SchCH[n2];
    }

    private static Object bUN(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = kM.bUM(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String bUL(byte[] byArray) {
        int n = 0;
        int n2 = byArray.length;
        char[] cArray = new char[n2];
        for (int i = 0; i < n2; ++i) {
            char c;
            int n3 = 0xFF & byArray[i];
            if (n3 < 192) {
                cArray[n++] = (char)n3;
                continue;
            }
            if (n3 < 224) {
                c = (char)((char)(n3 & 0x1F) << 6);
                n3 = byArray[++i];
                c = (char)(c | (char)(n3 & 0x3F));
                cArray[n++] = c;
                continue;
            }
            if (i >= n2 - 2) continue;
            c = (char)((char)(n3 & 0xF) << 12);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F) << 6);
            n3 = byArray[++i];
            c = (char)(c | (char)(n3 & 0x3F));
            cArray[n++] = c;
        }
        return new String(cArray, 0, n);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kM.class, "bUN", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
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
            return MethodHandles.lookup().findStatic(kM.class, "bUQ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)I", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
