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
import sixtwo.jL;
import sixtwo.jO;
import sixtwo.kR;
import sixtwo.ke;
import sixtwo.kh;
import sixtwo.lF;

public class jT
implements kh<jO> {
    private static boolean GRyFV;
    private static final long OqQyw;
    private static final String[] wCgeD;
    private static final String[] fxewg;
    private static final Map BMyRp;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Enabled aggressive block sorting
     */
    static {
        OqQyw = gb.aYR(-183791357870024740L, -5914521567213679317L, MethodHandles.lookup().lookupClass()).a(147815586986413L);
        BMyRp = new HashMap(13);
        long l2 = OqQyw ^ 0x512DC9CA9FDCL;
        jT.bMP(true);
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l2 >>> 56);
        for (int i2 = 1; i2 < 8; ++i2) {
            byArray2 = byArray2;
            byArray2[i2] = (byte)(l2 << i2 * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[2];
        int n2 = 0;
        String string = "\u00e7F\u00b3\u00ab\u00ca\u0012\u009e\u00b7r\u00b2m\u00b7\u00b3\u00cf\u0084\u00d4\u00d6\u00a3~\u00ab\u00cb\u00bcR0\u00c3\u009a\u008d\u0002\u00c6GN^ \u0091\u00a1;\u0018\u009a>\u00d4\u00de\u00f1\u00cb\u0000s\u00c5\u00ce\u00ba9\u00c6\n$\u0086I\u0015g\u00eaE\u0085l\u0088z\u001e\u00ba&";
        int n3 = "\u00e7F\u00b3\u00ab\u00ca\u0012\u009e\u00b7r\u00b2m\u00b7\u00b3\u00cf\u0084\u00d4\u00d6\u00a3~\u00ab\u00cb\u00bcR0\u00c3\u009a\u008d\u0002\u00c6GN^ \u0091\u00a1;\u0018\u009a>\u00d4\u00de\u00f1\u00cb\u0000s\u00c5\u00ce\u00ba9\u00c6\n$\u0086I\u0015g\u00eaE\u0085l\u0088z\u001e\u00ba&".length();
        int n4 = 32;
        int n5 = -1;
        while (true) {
            int n6 = ++n5;
            byte[] byArray3 = cipher.doFinal(string.substring(n6, n6 + n4).getBytes("ISO-8859-1"));
            stringArray[n2++] = jT.bMT(byArray3).intern();
            if ((n5 += n4) >= n3) {
                wCgeD = stringArray;
                fxewg = new String[2];
                return;
            }
            n4 = string.charAt(n5);
        }
    }

    public static void bMP(boolean bl2) {
        GRyFV = bl2;
    }

    private static String bMU(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x46ED;
        if (fxewg[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])BMyRp.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    BMyRp.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jT", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = wCgeD[n3].getBytes("ISO-8859-1");
            jT.fxewg[n3] = jT.bMT(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return fxewg[n3];
    }

    public static boolean bMQ() {
        return GRyFV;
    }

    private static /* synthetic */ void bMO(int n2, jO jO2, RenderPass renderPass) {
        block4: {
            long l2;
            block5: {
                l2 = OqQyw ^ 0x157195718C7L;
                boolean bl2 = jT.bMQ();
                try {
                    try {
                        if (!bl2) break block4;
                        if (n2 != 2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jT.bMS(matchException);
                    }
                    renderPass.bindTexture((String)((Object)jT.bMW("o", (int)16606, (long)(0x50EFECA06467BED2L ^ l2))), jO2.bKk().getGlTextureView(), jO2.bKk().getSampler());
                }
                catch (MatchException matchException) {
                    throw jT.bMS(matchException);
                }
            }
            ke.bOi(jL.VBAOv, jO2, n2);
            jL.VBAOv.bJr((String)((Object)jT.bMW("o", (int)20233, (long)(0x729AC21F1BECB104L ^ l2))), 0.0f, 0.0f);
        }
    }

    private static String bMT(byte[] byArray) {
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

    private static Object bMV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = jT.bMU(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static CallSite bMW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jT" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Unable to fully structure code
     */
    public void bMM(jO var1_1) {
        block32: {
            block31: {
                block30: {
                    block28: {
                        block29: {
                            block34: {
                                var2_2 = jT.OqQyw ^ 38261553496514L;
                                var5_3 = this.bMN(var1_1);
                                var4_4 = jT.bMR();
                                if (var5_3 != 2) break block29;
                                v0 = var1_1;
                                if (var4_4) break block28;
                                break block34;
                                catch (Throwable v1) {
                                    throw jT.bMS(v1);
                                }
                            }
                            try {
                                block35: {
                                    if (v0.bKk() != null) break block29;
                                    break block35;
                                    catch (Throwable v2) {
                                        throw jT.bMS(v2);
                                    }
                                }
                                return;
                            }
                            catch (Throwable v3) {
                                throw jT.bMS(v3);
                            }
                        }
                        v0 = var1_1;
                    }
                    var6_5 = v0.bKi();
                    v4 = var5_3;
                    if (var4_4) break block30;
                    try {
                        block36: {
                            if (v4 == 1) break block31;
                            break block36;
                            catch (Throwable v5) {
                                throw jT.bMS(v5);
                            }
                        }
                        v4 = (int)var6_5.cnW();
                    }
                    catch (Throwable v6) {
                        throw jT.bMS(v6);
                    }
                }
                if (v4 != 0) {
                    return;
                }
            }
            var7_6 = var1_1.bKm();
            var8_7 = this.expandBySmoothness(var1_1.bKb(), var1_1.bKc(), var1_1.bKd(), var1_1.bKe(), var7_6);
            var9_8 = new BufferAllocator(VertexFormats.POSITION_TEXTURE_COLOR.getVertexSize() * 4);
            try {
                var10_9 = new BufferBuilder(var9_8, VertexFormat.DrawMode.QUADS, VertexFormats.POSITION_TEXTURE_COLOR);
                jT.FroVm.uv_quad_region_color(var10_9, var1_1.bKa(), var8_7.bXF(), var8_7.bXG(), var8_7.bXH(), var8_7.bXI(), var1_1.bKt(), var1_1.bKu(), var1_1.bKv(), var1_1.bKw(), var6_5);
                var11_11 = var10_9.end();
                try {
                    try {
                        v7 = var5_3 == 2 ? kR.alRAH : kR.cbSJp;
                    }
                    catch (Throwable v8) {
                        throw jT.bMS(v8);
                    }
                    lF.cfB(v7, var11_11, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bMO(int sixtwo.jO com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((int)var5_3, (jO)var1_1));
                    if (var4_4) break block32;
                }
                catch (Throwable var12_13) {
                    block33: {
                        try {
                            v9 = var11_11;
                            if (!var4_4) {
                                if (v9 == null) break block33;
                            }
                            ** GOTO lbl68
                        }
                        catch (Throwable v10) {
                            throw jT.bMS(v10);
                        }
                        try {
                            v9 = var11_11;
lbl68:
                            // 2 sources

                            v9.close();
                        }
                        catch (Throwable var13_14) {
                            var12_13.addSuppressed(var13_14);
                        }
                    }
                    throw var12_13;
                }
                try {
                    if (var11_11 != null) {
                        var11_11.close();
                    }
                }
                catch (Throwable v11) {
                    throw jT.bMS(v11);
                }
            }
            finally {
                var9_8.close();
            }
        }
    }

    public static boolean bMR() {
        boolean bl2 = jT.bMQ();
        try {
            if (!bl2) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw jT.bMS(matchException);
        }
        return false;
    }

    private int bMN(jO jO2) {
        int n2;
        block10: {
            block11: {
                boolean bl2;
                block8: {
                    block9: {
                        long l2 = OqQyw ^ 0x624F567E77EFL;
                        bl2 = jT.bMQ();
                        try {
                            try {
                                n2 = jO2.bJH();
                                if (!bl2) break block8;
                                if (n2 == 0) break block9;
                            }
                            catch (MatchException matchException) {
                                throw jT.bMS(matchException);
                            }
                            return 2;
                        }
                        catch (MatchException matchException) {
                            throw jT.bMS(matchException);
                        }
                    }
                    n2 = jO2.bJG();
                }
                try {
                    try {
                        if (!bl2) break block10;
                        if (n2 == 0) break block11;
                    }
                    catch (MatchException matchException) {
                        throw jT.bMS(matchException);
                    }
                    return 1;
                }
                catch (MatchException matchException) {
                    throw jT.bMS(matchException);
                }
            }
            n2 = 0;
        }
        return n2;
    }

    private static Throwable bMS(Throwable throwable) {
        return throwable;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jT.class, "bMV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

