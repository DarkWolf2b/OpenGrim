/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$DrawMode
 *  net.minecraft.client.render.BufferBuilder
 *  net.minecraft.client.render.VertexFormats
 *  net.minecraft.client.util.BufferAllocator
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
import net.minecraft.client.render.BufferBuilder;
import net.minecraft.client.render.VertexFormats;
import net.minecraft.client.util.BufferAllocator;
import sixtwo.gb;
import sixtwo.jF;
import sixtwo.jL;
import sixtwo.jO;
import sixtwo.jT;
import sixtwo.kR;
import sixtwo.ke;
import sixtwo.kh;
import sixtwo.lF;
import sixtwo.la;
import sixtwo.ld;
import sixtwo.mG;

public class jW
implements kh<jO> {
    private static final long LJoTc;
    private static final String[] xudpm;
    private static final String[] zqpdo;
    private static final Map GcFSr;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jW.LJoTc = gb.aYR(-4751435363820668798L, 5791048156308862445L, MethodHandles.lookup().lookupClass()).a(184724111238064L);
                jW.GcFSr = new HashMap<K, V>(13);
                var0 = jW.LJoTc ^ 100620001438449L;
                var2_1 = Cipher.getInstance("DES/CBC/PKCS5Padding");
                v0 = SecretKeyFactory.getInstance("DES");
                v1 = new byte[8];
                v2 = v1;
                v1[0] = (byte)(var0 >>> 56);
                for (var3_2 = 1; var3_2 < 8; ++var3_2) {
                    v2 = v2;
                    v2[var3_2] = (byte)(var0 << var3_2 * 8 >>> 56);
                }
                var2_1.init(2, (Key)v0.generateSecret(new DESKeySpec(v2)), new IvParameterSpec(new byte[8]));
                var9_3 = new String[6];
                var7_4 = 0;
                var6_5 = "j\u0086'\u0080+V\u0018z\u00a0\u0018\u00b4P\u009d\u0092\u00cf\u00a9 w\u001e\r\u0089}EQ6kt\u0005\u00fdb\u00cf\u0014\u00f8\u0000J\u00a5\t-SB\u0015\u00ca\u00d5\u00bb}\u00f2\u00a2k\u0091\u0010\u00d1\u00e17\u00cc3wN\u00a7 \u0002[fc!pt \u001d\u0081MF\u0092H\u00e4\u008b\u009e\u0097\u007f\u008b\f\u00a7s\u00b4m\u00f7\u00b5\u00e0\u00ed,d_>Z\u00ff\u00d4\u0091\u00c1w\u00e9";
                var8_6 = "j\u0086'\u0080+V\u0018z\u00a0\u0018\u00b4P\u009d\u0092\u00cf\u00a9 w\u001e\r\u0089}EQ6kt\u0005\u00fdb\u00cf\u0014\u00f8\u0000J\u00a5\t-SB\u0015\u00ca\u00d5\u00bb}\u00f2\u00a2k\u0091\u0010\u00d1\u00e17\u00cc3wN\u00a7 \u0002[fc!pt \u001d\u0081MF\u0092H\u00e4\u008b\u009e\u0097\u007f\u008b\f\u00a7s\u00b4m\u00f7\u00b5\u00e0\u00ed,d_>Z\u00ff\u00d4\u0091\u00c1w\u00e9".length();
                var5_7 = 16;
                var4_8 = -1;
lbl20:
                // 2 sources

                while (true) {
                    v3 = ++var4_8;
                    v4 = var6_5.substring(v3, v3 + var5_7);
                    v5 = -1;
                    break block10;
                    break;
                }
lbl25:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = jW.bNv(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "B\u008es\u00de\u001b\u00fc\u0003\u00a4\u00f7.5\u00aa\u0017\u009a\u00a8\t\u0084I9\u001b\u000b\u0097\u00ef\u008e\u00ab\u00ce\u00c6\u00fe\\\u001d\u00e3U C*\bw\u008b\u0012\u00cf\u00a9\u00801\u00b2\u00c1Pc5I\u00cb\u009a\u0085N\u00a4\u0098\u0093\u00fej\u00b2\u0090\u00b7\u00cf$\f\u00c6";
                    var8_6 = "B\u008es\u00de\u001b\u00fc\u0003\u00a4\u00f7.5\u00aa\u0017\u009a\u00a8\t\u0084I9\u001b\u000b\u0097\u00ef\u008e\u00ab\u00ce\u00c6\u00fe\\\u001d\u00e3U C*\bw\u008b\u0012\u00cf\u00a9\u00801\u00b2\u00c1Pc5I\u00cb\u009a\u0085N\u00a4\u0098\u0093\u00fej\u00b2\u0090\u00b7\u00cf$\f\u00c6".length();
                    var5_7 = 32;
                    var4_8 = -1;
lbl34:
                    // 2 sources

                    while (true) {
                        v6 = ++var4_8;
                        v4 = var6_5.substring(v6, v6 + var5_7);
                        v5 = 0;
                        break block10;
                        break;
                    }
                    break;
                }
lbl39:
                // 1 sources

                while (true) {
                    var9_3[var7_4++] = jW.bNv(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    break block11;
                    break;
                }
            }
            var10_9 = var2_1.doFinal(v4.getBytes("ISO-8859-1"));
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
        jW.xudpm = var9_3;
        jW.zqpdo = new String[6];
    }

    public void bNn(jO jO2) {
        jO jO3;
        jW jW2;
        block4: {
            block5: {
                long l2 = LJoTc ^ 0x6FCC7400F5CAL;
                boolean bl2 = jT.bMQ();
                try {
                    try {
                        jW2 = this;
                        jO3 = jO2;
                        if (!bl2) break block4;
                        if (!jW2.bNr(jO3)) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jW.bNu(matchException);
                    }
                    this.bNo(jO2);
                }
                catch (MatchException matchException) {
                    throw jW.bNu(matchException);
                }
            }
            jW2 = this;
            jO3 = jO2;
        }
        jW2.bNp(jO3);
    }

    /*
     * Unable to fully structure code
     */
    private void bNp(jO var1_1) {
        block15: {
            var2_2 = jW.LJoTc ^ 118026128184716L;
            var5_3 = new BufferAllocator(VertexFormats.POSITION_TEXTURE_COLOR.getVertexSize() * 4);
            var4_4 = jT.bMQ();
            try {
                var6_5 = new BufferBuilder(var5_3, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION_TEXTURE_COLOR);
                this.bNq(var6_5, var1_1, var1_1.bKi());
                var7_7 = var6_5.end();
                try {
                    lF.cfB(kR.cbSJp, var7_7, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bNs(sixtwo.jO com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((jO)var1_1));
                    if (!var4_4) break block15;
                }
                catch (Throwable var8_9) {
                    block16: {
                        try {
                            v0 = var7_7;
                            if (var4_4) {
                                if (v0 == null) break block16;
                            }
                            ** GOTO lbl22
                        }
                        catch (Throwable v1) {
                            throw jW.bNu(v1);
                        }
                        try {
                            v0 = var7_7;
lbl22:
                            // 2 sources

                            v0.close();
                        }
                        catch (Throwable var9_10) {
                            var8_9.addSuppressed(var9_10);
                        }
                    }
                    throw var8_9;
                }
                try {
                    if (var7_7 != null) {
                        var7_7.close();
                    }
                }
                catch (Throwable v2) {
                    throw jW.bNu(v2);
                }
            }
            finally {
                var5_3.close();
            }
        }
    }

    private static Object bNx(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = jW.bNw(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Unable to fully structure code
     */
    private void bNo(jO var1_1) {
        block15: {
            var2_2 = jW.LJoTc ^ 97484327513161L;
            var5_3 = new BufferAllocator(VertexFormats.POSITION_TEXTURE_COLOR.getVertexSize() * 4);
            var4_4 = jT.bMQ();
            try {
                var6_5 = new BufferBuilder(var5_3, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION_TEXTURE_COLOR);
                this.bNq(var6_5, var1_1, mG.hoGuU);
                var7_7 = var6_5.end();
                try {
                    lF.cfB(kR.ippae, var7_7, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bNt(sixtwo.jO com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((jO)var1_1));
                    if (!var4_4) break block15;
                }
                catch (Throwable var8_9) {
                    block16: {
                        try {
                            v0 = var7_7;
                            if (var4_4) {
                                if (v0 == null) break block16;
                            }
                            ** GOTO lbl22
                        }
                        catch (Throwable v1) {
                            throw jW.bNu(v1);
                        }
                        try {
                            v0 = var7_7;
lbl22:
                            // 2 sources

                            v0.close();
                        }
                        catch (Throwable var9_10) {
                            var8_9.addSuppressed(var9_10);
                        }
                    }
                    throw var8_9;
                }
                try {
                    if (var7_7 != null) {
                        var7_7.close();
                    }
                }
                catch (Throwable v2) {
                    throw jW.bNu(v2);
                }
            }
            finally {
                var5_3.close();
            }
        }
    }

    private static String bNw(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3D81;
        if (zqpdo[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])GcFSr.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    GcFSr.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jW", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = xudpm[n3].getBytes("ISO-8859-1");
            jW.zqpdo[n3] = jW.bNv(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return zqpdo[n3];
    }

    private static Throwable bNu(Throwable throwable) {
        return throwable;
    }

    private boolean bNr(jO jO2) {
        boolean bl2;
        block34: {
            int n2;
            la la2;
            boolean bl3;
            block29: {
                int n3;
                block30: {
                    boolean bl4;
                    block31: {
                        block33: {
                            block32: {
                                jO jO3;
                                block27: {
                                    block28: {
                                        long l2 = LJoTc ^ 0x207DF696277EL;
                                        bl3 = jT.bMQ();
                                        try {
                                            try {
                                                jO3 = jO2;
                                                if (!bl3) break block27;
                                                if (jO3.bJG()) break block28;
                                            }
                                            catch (MatchException matchException) {
                                                throw jW.bNu(matchException);
                                            }
                                            return jO2.bKi().cnW();
                                        }
                                        catch (MatchException matchException) {
                                            throw jW.bNu(matchException);
                                        }
                                    }
                                    jO3 = jO2;
                                }
                                la2 = jO3.bKj();
                                try {
                                    try {
                                        try {
                                            try {
                                                try {
                                                    try {
                                                        try {
                                                            try {
                                                                try {
                                                                    n3 = la2.bWQ();
                                                                    if (!bl3) break block29;
                                                                    if (n3 != 0) break block30;
                                                                }
                                                                catch (MatchException matchException) {
                                                                    throw jW.bNu(matchException);
                                                                }
                                                                bl4 = la2.bXe().cnW();
                                                                if (!bl3) break block31;
                                                            }
                                                            catch (MatchException matchException) {
                                                                throw jW.bNu(matchException);
                                                            }
                                                            if (bl4) break block32;
                                                        }
                                                        catch (MatchException matchException) {
                                                            throw jW.bNu(matchException);
                                                        }
                                                        bl4 = la2.bXf().cnW();
                                                        if (!bl3) break block31;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw jW.bNu(matchException);
                                                    }
                                                    if (bl4) break block32;
                                                }
                                                catch (MatchException matchException) {
                                                    throw jW.bNu(matchException);
                                                }
                                                bl4 = la2.bXg().cnW();
                                                if (!bl3) break block31;
                                            }
                                            catch (MatchException matchException) {
                                                throw jW.bNu(matchException);
                                            }
                                            if (bl4) break block32;
                                        }
                                        catch (MatchException matchException) {
                                            throw jW.bNu(matchException);
                                        }
                                        bl4 = la2.bXh().cnW();
                                        if (!bl3) break block31;
                                    }
                                    catch (MatchException matchException) {
                                        throw jW.bNu(matchException);
                                    }
                                    if (!bl4) break block33;
                                }
                                catch (MatchException matchException) {
                                    throw jW.bNu(matchException);
                                }
                            }
                            bl4 = true;
                            break block31;
                        }
                        bl4 = false;
                    }
                    return bl4;
                }
                n3 = n2 = 0;
            }
            while (n2 < la2.bWR()) {
                block36: {
                    boolean bl5;
                    block35: {
                        try {
                            try {
                                bl2 = la2.bWS(n2).cnW();
                                if (!bl3) break block34;
                                if (!bl3) break block35;
                            }
                            catch (MatchException matchException) {
                                throw jW.bNu(matchException);
                            }
                            if (!bl2) break block36;
                        }
                        catch (MatchException matchException) {
                            throw jW.bNu(matchException);
                        }
                        bl5 = true;
                    }
                    return bl5;
                }
                ++n2;
                if (bl3) continue;
            }
            bl2 = false;
        }
        return bl2;
    }

    private void bNq(BufferBuilder bufferBuilder, jO jO2, mG mG2) {
        float f2 = jO2.bKb();
        float f3 = jO2.bKc();
        float f4 = jO2.bKd();
        float f5 = jO2.bKe();
        float f6 = Math.max(1.0f, jO2.bKm());
        float f7 = jO2.bKt() - f6 / f4;
        float f8 = jO2.bKu() - f6 / f5;
        float f9 = jO2.bKv() + f6 / f4;
        float f10 = jO2.bKw() + f6 / f5;
        FroVm.uv_quad_region_color(bufferBuilder, jO2.bKa(), f2 - f6, f3 - f6, f4 + f6 * 2.0f, f5 + f6 * 2.0f, f7, f8, f9, f10, mG2);
    }

    private static String bNv(byte[] byArray) {
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

    private static /* synthetic */ void bNt(jO jO2, RenderPass renderPass) {
        long l2 = LJoTc ^ 0x7769C016A13BL;
        ld ld2 = jO2.bKh();
        jL.cazyD.bJl();
        jL.cazyD.bJr((String)((Object)jW.bNy("k", (int)15476, (long)(0x7887241C762E17D9L ^ l2))), jO2.bKd(), jO2.bKe());
        jL.cazyD.bJt((String)((Object)jW.bNy("k", (int)18233, (long)(0x78F5D7903DA3EC96L ^ l2))), ld2.topLeft(), ld2.bottomLeft(), ld2.topRight(), ld2.bottomRight());
        jL.cazyD.bJq((String)((Object)jW.bNy("k", (int)14152, (long)(0x60DB7C88B5BC1CE6L ^ l2))), jO2.bKm());
        jL.cazyD.bJq((String)((Object)jW.bNy("k", (int)17731, (long)(0x76432C990F66EEE9L ^ l2))), jO2.bKe() / 3.0f);
        jL.cazyD.bJu((String)((Object)jW.bNy("k", (int)30929, (long)(0x5785B3E9FDDBD37AL ^ l2))), jF.bHw());
    }

    private static /* synthetic */ void bNs(jO jO2, RenderPass renderPass) {
        int n2;
        long l2;
        block2: {
            block3: {
                l2 = LJoTc ^ 0x32B31EC2016FL;
                boolean bl2 = jT.bMQ();
                try {
                    n2 = jO2.bJG();
                    if (!bl2) break block2;
                    if (n2 == 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jW.bNu(matchException);
                }
                n2 = 1;
                break block2;
            }
            n2 = 0;
        }
        int n3 = n2;
        ke.bOi(jL.VBAOv, jO2, n3);
        jL.VBAOv.bJr((String)((Object)jW.bNy("k", (int)31390, (long)(0x32F567A5637CF166L ^ l2))), 0.0f, 0.0f);
    }

    private static CallSite bNy(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jW" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jW.class, "bNx", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

