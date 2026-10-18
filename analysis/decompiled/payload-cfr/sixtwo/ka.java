/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.textures.GpuTextureView
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_1044
 *  net.minecraft.class_12137
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_9799
 */
package sixtwo;

import com.mojang.blaze3d.systems.RenderPass;
import com.mojang.blaze3d.textures.GpuTextureView;
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
import net.minecraft.class_12137;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_9799;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jF;
import sixtwo.jL;
import sixtwo.jN;
import sixtwo.jS;
import sixtwo.jT;
import sixtwo.kR;
import sixtwo.ke;
import sixtwo.kh;
import sixtwo.lF;
import sixtwo.la;
import sixtwo.lt;

public class ka
implements kh<jS> {
    private static final long Svclk;
    private static final String[] KqBiZ;
    private static final String[] nkwQm;
    private static final Map FWlbV;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                ka.Svclk = gb.aYR(800389536625626810L, -8325731754206593775L, MethodHandles.lookup().lookupClass()).a(229622370642876L);
                ka.FWlbV = new HashMap<K, V>(13);
                var0 = ka.Svclk ^ 23220963582867L;
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
                var9_3 = new String[13];
                var7_4 = 0;
                var6_5 = "v\u0099Y7w\u0099\u00ca\u001b~B2\u00cf>k\u00be\u009d\u0096\u00e1\u00e9\u0013\u00f2Kg\u00e3\u00c0U\u00a5\u008e7\u0096v\u0003\u0018\u00d7\u00b9\u00bc\u00e5\u0005X\n\u00ae\u00b8\u00f1m)01\u0085e\u001d6zd\u00d2\u00ff\u0019\u0090 \u00bea\u00ba\u009ch\u00ffS\u00f5\u00de\u00fe\u00c7Ny~r\u00f8(\u0099\u00a8=\u001a\u00b3\u009cg\u0014\u0010T\f|A\u008b\u0086\u00185l\u00fa\u00b6\u00c0-\u00ddH\u000bx5\u0000C\u00fbD\u0082\u00ac\b\u00b2\u00a1\u00d0\u00a8\u00927 \u00ce\"\u00800&\u0016\u00b9\u0092\u00aa\u00f4\u00fe\u00acV\u00c3b[\u00cd\u00f8\u00ee\u00e2\u0098Z\u0090\u00cf\n\u0016\u008dT\u0083\u00e5\u008ci \u001a\u00cd\u00ba\u00d6\u00a3\u00f0\\\u00a7F\u00bank\u0088\u00e8\u0089\u000e\u0091\u00a5$\r\u0091\u00f2\u00c8\"Y\u00b4F\u0012K\u00e1\u00a9r \u00day\u0011\u00c5q\u0086\u0018\u000fI\u001c\"\u00b3[$\u00cd\u00b4(\u00fc\u00a3\u00ac\u0006\u00a6\u00f8\u00c0\u00ff\u0095\u00c4\u007f\u0084\u009f\u00f66\u0018\u00d2oh\u0017c{\u00ab\u00c5\u00fd]\u00d0\u00de\u009c\u009236#\u00d4j\u00ab\u008e\u00f3\u0001e `m\u009f\t\u0014$\u0012\u0084G\u00bc\\9\u0010f\u00b1\u00fd\u0094677\u0087\u00d37\u0007\u0094h\u008f\u000f\u00c2\b\u00b4\u00ae\u0018YLJ[@\u00ed\u0094\tI5\u00b3\u0013\u00dfi\u00f2\u00ad\u00f3-C_\u00e4g\u00d9\u0091 \u0013M\u00d7\u00c5+\u008f,\u0001\u00b0X\u00e1\u00c5\u00a3\u0085\u0086(\u00ef\u00eb\u00ee\u00cf\u00ca$Gt?\u00dbu\u0081J.\u0093\\";
                var8_6 = "v\u0099Y7w\u0099\u00ca\u001b~B2\u00cf>k\u00be\u009d\u0096\u00e1\u00e9\u0013\u00f2Kg\u00e3\u00c0U\u00a5\u008e7\u0096v\u0003\u0018\u00d7\u00b9\u00bc\u00e5\u0005X\n\u00ae\u00b8\u00f1m)01\u0085e\u001d6zd\u00d2\u00ff\u0019\u0090 \u00bea\u00ba\u009ch\u00ffS\u00f5\u00de\u00fe\u00c7Ny~r\u00f8(\u0099\u00a8=\u001a\u00b3\u009cg\u0014\u0010T\f|A\u008b\u0086\u00185l\u00fa\u00b6\u00c0-\u00ddH\u000bx5\u0000C\u00fbD\u0082\u00ac\b\u00b2\u00a1\u00d0\u00a8\u00927 \u00ce\"\u00800&\u0016\u00b9\u0092\u00aa\u00f4\u00fe\u00acV\u00c3b[\u00cd\u00f8\u00ee\u00e2\u0098Z\u0090\u00cf\n\u0016\u008dT\u0083\u00e5\u008ci \u001a\u00cd\u00ba\u00d6\u00a3\u00f0\\\u00a7F\u00bank\u0088\u00e8\u0089\u000e\u0091\u00a5$\r\u0091\u00f2\u00c8\"Y\u00b4F\u0012K\u00e1\u00a9r \u00day\u0011\u00c5q\u0086\u0018\u000fI\u001c\"\u00b3[$\u00cd\u00b4(\u00fc\u00a3\u00ac\u0006\u00a6\u00f8\u00c0\u00ff\u0095\u00c4\u007f\u0084\u009f\u00f66\u0018\u00d2oh\u0017c{\u00ab\u00c5\u00fd]\u00d0\u00de\u009c\u009236#\u00d4j\u00ab\u008e\u00f3\u0001e `m\u009f\t\u0014$\u0012\u0084G\u00bc\\9\u0010f\u00b1\u00fd\u0094677\u0087\u00d37\u0007\u0094h\u008f\u000f\u00c2\b\u00b4\u00ae\u0018YLJ[@\u00ed\u0094\tI5\u00b3\u0013\u00dfi\u00f2\u00ad\u00f3-C_\u00e4g\u00d9\u0091 \u0013M\u00d7\u00c5+\u008f,\u0001\u00b0X\u00e1\u00c5\u00a3\u0085\u0086(\u00ef\u00eb\u00ee\u00cf\u00ca$Gt?\u00dbu\u0081J.\u0093\\".length();
                var5_7 = 32;
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
                    var9_3[var7_4++] = ka.bNW(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00a5\u009a\u00e9a\u0080\u00c1\u009d>\u009c\u00ba@\u00fa\u00c49\u0007;\u00bd\u00fd~{\u00d7\u00f4\u008b\u00a7\u0012\u009f\bsK\u001b*\u0087\u0010}\u00ab\u00f7\u00a9i&\u001f\u00eb\u00b2\u0018\u00fc\u00d6-0*2";
                    var8_6 = "\u00a5\u009a\u00e9a\u0080\u00c1\u009d>\u009c\u00ba@\u00fa\u00c49\u0007;\u00bd\u00fd~{\u00d7\u00f4\u008b\u00a7\u0012\u009f\bsK\u001b*\u0087\u0010}\u00ab\u00f7\u00a9i&\u001f\u00eb\u00b2\u0018\u00fc\u00d6-0*2".length();
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
                    var9_3[var7_4++] = ka.bNW(var10_9).intern();
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
        ka.KqBiZ = var9_3;
        ka.nkwQm = new String[13];
    }

    /*
     * Unable to fully structure code
     */
    public void bNR(jS var1_1) {
        block36: {
            block38: {
                block37: {
                    block33: {
                        block32: {
                            block30: {
                                block31: {
                                    block39: {
                                        var2_2 = ka.Svclk ^ 22889794249675L;
                                        var5_3 = var1_1.bMB();
                                        var4_4 = jT.bMQ();
                                        var6_5 = var1_1.bMx();
                                        v0 = var5_3.cnW();
                                        if (!var4_4) break block30;
                                        if (!v0) break block31;
                                        break block39;
                                        catch (Throwable v1) {
                                            throw ka.bNV(v1);
                                        }
                                    }
                                    try {
                                        block40: {
                                            if (var6_5 != null) break block31;
                                            break block40;
                                            catch (Throwable v2) {
                                                throw ka.bNV(v2);
                                            }
                                        }
                                        return;
                                    }
                                    catch (Throwable v3) {
                                        throw ka.bNV(v3);
                                    }
                                }
                                v0 = var1_1.bMb();
                            }
                            var7_6 = v0;
                            var8_7 = this.bNS(var1_1);
                            var9_8 = this.bNT(var1_1);
                            if (!var7_6) break block32;
                            try {
                                block41: {
                                    if (var8_7 != null) break block32;
                                    break block41;
                                    catch (Throwable v4) {
                                        throw ka.bNV(v4);
                                    }
                                }
                                return;
                            }
                            catch (Throwable v5) {
                                throw ka.bNV(v5);
                            }
                        }
                        var10_9 = new class_9799(class_290.field_1575.getVertexSize() * 4);
                        try {
                            var11_10 = new class_287(var10_9, VertexFormat.class_5596.field_27382, class_290.field_1575);
                            ka.FroVm.uv_quad_region_color(var11_10, var1_1.bMo(), var1_1.bMp(), var1_1.bMq(), var1_1.bMr(), var1_1.bMs(), var1_1.bMH(), var1_1.bMI(), var1_1.bMJ(), var1_1.bMK(), var5_3);
                            var12_12 = var11_10.method_60800();
                            try {
                                try {
                                    v6 = var7_6 != false ? kR.cdFxE : kR.cHZhA;
                                }
                                catch (Throwable v7) {
                                    throw ka.bNV(v7);
                                }
                                lF.cfB(v6, var12_12, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bNU(boolean com.mojang.blaze3d.textures.GpuTextureView net.minecraft.class_12137 sixtwo.jS sixtwo.la com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((boolean)var7_6, (GpuTextureView)var8_7, (class_12137)var9_8, (jS)var1_1, (la)var6_5));
                                if (!var4_4) break block33;
                            }
                            catch (Throwable var13_14) {
                                block35: {
                                    try {
                                        v8 = var12_12;
                                        if (var4_4) {
                                            if (v8 == null) break block35;
                                        }
                                        ** GOTO lbl64
                                    }
                                    catch (Throwable v9) {
                                        throw ka.bNV(v9);
                                    }
                                    try {
                                        v8 = var12_12;
lbl64:
                                        // 2 sources

                                        v8.close();
                                    }
                                    catch (Throwable var14_15) {
                                        var13_14.addSuppressed(var14_15);
                                    }
                                }
                                throw var13_14;
                            }
                            try {
                                if (var12_12 != null) {
                                    var12_12.close();
                                }
                            }
                            catch (Throwable v10) {
                                throw ka.bNV(v10);
                            }
                        }
                        catch (Throwable var11_11) {
                            try {
                                var10_9.close();
                            }
                            catch (Throwable var12_13) {
                                var11_11.addSuppressed(var12_13);
                            }
                            throw var11_11;
                        }
                        var10_9.close();
                    }
                    try {
                        try {
                            if (iS.bwL() != null) break block36;
                            if (!var4_4) break block37;
                        }
                        catch (Throwable v11) {
                            throw ka.bNV(v11);
                        }
                        v12 = false;
                        break block38;
                    }
                    catch (Throwable v13) {
                        throw ka.bNV(v13);
                    }
                }
                v12 = true;
            }
            jT.bMP(v12);
        }
    }

    private static CallSite bNZ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ka" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Throwable bNV(Throwable throwable) {
        return throwable;
    }

    private class_12137 bNT(jS jS2) {
        class_12137 class_121372;
        block6: {
            class_12137 class_121373;
            block7: {
                boolean bl;
                block5: {
                    class_1044 class_10442;
                    block4: {
                        long l = Svclk ^ 0x6EBE1EC93500L;
                        class_1044 class_10443 = jS2.bMy();
                        bl = jT.bMQ();
                        try {
                            class_10442 = class_10443;
                            if (!bl) break block4;
                            if (class_10442 == null) break block5;
                        }
                        catch (MatchException matchException) {
                            throw ka.bNV(matchException);
                        }
                        class_10442 = class_10443;
                    }
                    return class_10442.method_75484();
                }
                class_121373 = jS2.bMA();
                try {
                    class_121372 = class_121373;
                    if (!bl) break block6;
                    if (class_121372 != null) break block7;
                }
                catch (MatchException matchException) {
                    throw ka.bNV(matchException);
                }
                class_121372 = lt.caX();
                break block6;
            }
            class_121372 = class_121373;
        }
        return class_121372;
    }

    private static /* synthetic */ void bNU(boolean bl, GpuTextureView gpuTextureView, class_12137 class_121372, jS jS2, la la2, RenderPass renderPass) {
        block25: {
            jN jN2;
            block24: {
                int n;
                CallSite callSite;
                jN jN3;
                boolean bl2;
                long l;
                block22: {
                    block23: {
                        int n2;
                        CallSite callSite2;
                        jN jN4;
                        int n3;
                        CallSite callSite3;
                        jN jN5;
                        block20: {
                            block21: {
                                int n4;
                                CallSite callSite4;
                                jN jN6;
                                block18: {
                                    block19: {
                                        block16: {
                                            block17: {
                                                l = Svclk ^ 0x21D49BC6B0D5L;
                                                bl2 = jT.bMQ();
                                                try {
                                                    try {
                                                        if (!bl2) break block16;
                                                        if (!bl) break block17;
                                                    }
                                                    catch (MatchException matchException) {
                                                        throw ka.bNV(matchException);
                                                    }
                                                    renderPass.bindTexture((String)((Object)ka.bNZ("z", (int)4993, (long)(0x1279ECC582BB07A6L ^ l))), gpuTextureView, class_121372);
                                                }
                                                catch (MatchException matchException) {
                                                    throw ka.bNV(matchException);
                                                }
                                            }
                                            jL.OHwYv.bJl();
                                            jL.OHwYv.bJr((String)((Object)ka.bNZ("z", (int)1144, (long)(0x5AF911C60C0B9053L ^ l))), jS2.bMr(), jS2.bMs());
                                            jL.OHwYv.bJq((String)((Object)ka.bNZ("z", (int)29971, (long)(0x64DCB0732F27613EL ^ l))), jS2.bMt());
                                            jL.OHwYv.bJq((String)((Object)ka.bNZ("z", (int)12115, (long)(0x3C19BB6A93863B7FL ^ l))), jS2.bMu());
                                            jL.OHwYv.bJq((String)((Object)ka.bNZ("z", (int)22567, (long)(0x3C1E529555864C07L ^ l))), jS2.bMv());
                                            jL.OHwYv.bJq((String)((Object)ka.bNZ("z", (int)23864, (long)(0x739E61961E3E4919L ^ l))), jS2.bMw());
                                            jL.OHwYv.bJq((String)((Object)ka.bNZ("z", (int)30207, (long)(0x3BE6EBEF6161DDL ^ l))), jS2.bMC());
                                        }
                                        try {
                                            jN6 = jL.OHwYv;
                                            callSite4 = ka.bNZ("z", (int)17933, (long)(0xCFF01FB50A55223L ^ l));
                                            n4 = bl;
                                            if (!bl2) break block18;
                                            if (n4 == 0) break block19;
                                        }
                                        catch (MatchException matchException) {
                                            throw ka.bNV(matchException);
                                        }
                                        n4 = 1;
                                        break block18;
                                    }
                                    n4 = 0;
                                }
                                try {
                                    jN6.bJx((String)((Object)callSite4), n4);
                                    jN5 = jL.OHwYv;
                                    callSite3 = ka.bNZ("z", (int)13737, (long)(0x25A6C2992002A18AL ^ l));
                                    n3 = jS2.bME();
                                    if (!bl2) break block20;
                                    if (n3 == 0) break block21;
                                }
                                catch (MatchException matchException) {
                                    throw ka.bNV(matchException);
                                }
                                n3 = 1;
                                break block20;
                            }
                            n3 = 0;
                        }
                        try {
                            jN5.bJx((String)((Object)callSite3), n3);
                            jN4 = jL.OHwYv;
                            callSite2 = ka.bNZ("z", (int)9366, (long)(0x2F2EBFCDBD5F30B2L ^ l));
                            n2 = la2 == null ? 0 : 1;
                        }
                        catch (MatchException matchException) {
                            throw ka.bNV(matchException);
                        }
                        try {
                            jN4.bJx((String)((Object)callSite2), n2);
                            jN3 = jL.OHwYv;
                            callSite = ka.bNZ("z", (int)4822, (long)(0x1B1974F83B7086F0L ^ l));
                            n = jS2.bMD();
                            if (!bl2) break block22;
                            if (n == 0) break block23;
                        }
                        catch (MatchException matchException) {
                            throw ka.bNV(matchException);
                        }
                        n = 1;
                        break block22;
                    }
                    n = 0;
                }
                try {
                    try {
                        jN3.bJx((String)((Object)callSite), n);
                        jL.OHwYv.bJr((String)((Object)ka.bNZ("z", (int)32567, (long)(0xD4D1CCAF03B6B18L ^ l))), jS2.bMF(), jS2.bMG());
                        jN2 = jL.OHwYv;
                        if (!bl2) break block24;
                        jN2.bJu((String)((Object)ka.bNZ("z", (int)29146, (long)(0x5AA3B778777FE5FFL ^ l))), jF.bHw());
                        if (la2 == null) break block25;
                    }
                    catch (MatchException matchException) {
                        throw ka.bNV(matchException);
                    }
                    jN2 = jL.OHwYv;
                }
                catch (MatchException matchException) {
                    throw ka.bNV(matchException);
                }
            }
            ke.bOl(jN2, la2);
        }
    }

    private GpuTextureView bNS(jS jS2) {
        GpuTextureView gpuTextureView;
        block4: {
            block3: {
                class_1044 class_10442;
                block2: {
                    long l = Svclk ^ 0x3FA6A5E10C2CL;
                    class_1044 class_10443 = jS2.bMy();
                    boolean bl = jT.bMQ();
                    try {
                        class_10442 = class_10443;
                        if (!bl) break block2;
                        if (class_10442 == null) break block3;
                    }
                    catch (MatchException matchException) {
                        throw ka.bNV(matchException);
                    }
                    class_10442 = class_10443;
                }
                gpuTextureView = class_10442.method_71659();
                break block4;
            }
            gpuTextureView = jS2.bMz();
        }
        return gpuTextureView;
    }

    private static String bNW(byte[] byArray) {
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

    private static String bNX(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x1FB5;
        if (nkwQm[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])FWlbV.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    FWlbV.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ka", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = KqBiZ[n2].getBytes("ISO-8859-1");
            ka.nkwQm[n2] = ka.bNW(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return nkwQm[n2];
    }

    private static Object bNY(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ka.bNX(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ka.class, "bNY", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
