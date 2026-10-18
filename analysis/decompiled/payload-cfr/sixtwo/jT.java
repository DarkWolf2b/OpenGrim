/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_9799
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
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_9799;
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
        long l = OqQyw ^ 0x512DC9CA9FDCL;
        jT.bMP(true);
        Cipher cipher = Cipher.getInstance("DES/CBC/PKCS5Padding");
        SecretKeyFactory secretKeyFactory = SecretKeyFactory.getInstance("DES");
        byte[] byArray = new byte[8];
        byte[] byArray2 = byArray;
        byArray[0] = (byte)(l >>> 56);
        for (int i = 1; i < 8; ++i) {
            byArray2 = byArray2;
            byArray2[i] = (byte)(l << i * 8 >>> 56);
        }
        cipher.init(2, (Key)secretKeyFactory.generateSecret(new DESKeySpec(byArray2)), new IvParameterSpec(new byte[8]));
        String[] stringArray = new String[2];
        int n = 0;
        String string = "\u00e7F\u00b3\u00ab\u00ca\u0012\u009e\u00b7r\u00b2m\u00b7\u00b3\u00cf\u0084\u00d4\u00d6\u00a3~\u00ab\u00cb\u00bcR0\u00c3\u009a\u008d\u0002\u00c6GN^ \u0091\u00a1;\u0018\u009a>\u00d4\u00de\u00f1\u00cb\u0000s\u00c5\u00ce\u00ba9\u00c6\n$\u0086I\u0015g\u00eaE\u0085l\u0088z\u001e\u00ba&";
        int n2 = "\u00e7F\u00b3\u00ab\u00ca\u0012\u009e\u00b7r\u00b2m\u00b7\u00b3\u00cf\u0084\u00d4\u00d6\u00a3~\u00ab\u00cb\u00bcR0\u00c3\u009a\u008d\u0002\u00c6GN^ \u0091\u00a1;\u0018\u009a>\u00d4\u00de\u00f1\u00cb\u0000s\u00c5\u00ce\u00ba9\u00c6\n$\u0086I\u0015g\u00eaE\u0085l\u0088z\u001e\u00ba&".length();
        int n3 = 32;
        int n4 = -1;
        while (true) {
            int n5 = ++n4;
            byte[] byArray3 = cipher.doFinal(string.substring(n5, n5 + n3).getBytes("ISO-8859-1"));
            stringArray[n++] = jT.bMT(byArray3).intern();
            if ((n4 += n3) >= n2) {
                wCgeD = stringArray;
                fxewg = new String[2];
                return;
            }
            n3 = string.charAt(n4);
        }
    }

    public static void bMP(boolean bl) {
        GRyFV = bl;
    }

    private static String bMU(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x46ED;
        if (fxewg[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])BMyRp.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    BMyRp.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jT", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = wCgeD[n2].getBytes("ISO-8859-1");
            jT.fxewg[n2] = jT.bMT(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return fxewg[n2];
    }

    public static boolean bMQ() {
        return GRyFV;
    }

    private static /* synthetic */ void bMO(int n, jO jO2, RenderPass renderPass) {
        block4: {
            long l;
            block5: {
                l = OqQyw ^ 0x157195718C7L;
                boolean bl = jT.bMQ();
                try {
                    try {
                        if (!bl) break block4;
                        if (n != 2) break block5;
                    }
                    catch (MatchException matchException) {
                        throw jT.bMS(matchException);
                    }
                    renderPass.bindTexture((String)((Object)jT.bMW("o", (int)16606, (long)(0x50EFECA06467BED2L ^ l))), jO2.bKk().method_71659(), jO2.bKk().method_75484());
                }
                catch (MatchException matchException) {
                    throw jT.bMS(matchException);
                }
            }
            ke.bOi(jL.VBAOv, jO2, n);
            jL.VBAOv.bJr((String)((Object)jT.bMW("o", (int)20233, (long)(0x729AC21F1BECB104L ^ l))), 0.0f, 0.0f);
        }
    }

    private static String bMT(byte[] byArray) {
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

    private static Object bMV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = jT.bMU(n, l);
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
            var9_8 = new class_9799(class_290.field_1575.getVertexSize() * 4);
            try {
                var10_9 = new class_287(var9_8, VertexFormat.class_5596.field_27382, class_290.field_1575);
                jT.FroVm.uv_quad_region_color(var10_9, var1_1.bKa(), var8_7.bXF(), var8_7.bXG(), var8_7.bXH(), var8_7.bXI(), var1_1.bKt(), var1_1.bKu(), var1_1.bKv(), var1_1.bKw(), var6_5);
                var11_11 = var10_9.method_60800();
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
        boolean bl = jT.bMQ();
        try {
            if (!bl) {
                return true;
            }
        }
        catch (MatchException matchException) {
            throw jT.bMS(matchException);
        }
        return false;
    }

    private int bMN(jO jO2) {
        int n;
        block10: {
            block11: {
                boolean bl;
                block8: {
                    block9: {
                        long l = OqQyw ^ 0x624F567E77EFL;
                        bl = jT.bMQ();
                        try {
                            try {
                                n = jO2.bJH();
                                if (!bl) break block8;
                                if (n == 0) break block9;
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
                    n = jO2.bJG();
                }
                try {
                    try {
                        if (!bl) break block10;
                        if (n == 0) break block11;
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
            n = 0;
        }
        return n;
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
