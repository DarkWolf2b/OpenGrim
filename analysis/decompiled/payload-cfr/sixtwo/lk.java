/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_287
 *  net.minecraft.class_290
 *  net.minecraft.class_4588
 *  net.minecraft.class_9799
 *  org.joml.Matrix4f
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
import net.minecraft.class_4588;
import net.minecraft.class_9799;
import org.joml.Matrix4f;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jF;
import sixtwo.jL;
import sixtwo.kR;
import sixtwo.lF;
import sixtwo.lj;

public class lk {
    private static final long DJuVT;
    private static final String[] ofRvq;
    private static final String[] FvEPT;
    private static final Map BGzjS;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                lk.DJuVT = gb.aYR(-8081307210028646611L, 1016840739963391374L, MethodHandles.lookup().lookupClass()).a(173437716146327L);
                lk.BGzjS = new HashMap<K, V>(13);
                var0 = lk.DJuVT ^ 135777116084386L;
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
                var6_5 = "\u00db\u00d9\u00f7\u008cpp8\u00b1\u009c\u00f7\u0005\u0019\u0086J\u001f\u0019\u0006N\u00e7\u0099H-\u00d7\u0010U\u00ef\u008aX5n\u001a\u00e6 \u0095\u0088Z\u00e9E\u0090Gy\u00deV\u00b2\u0013E\u00e0\u008f\u000e[\u00b9\u0012\u00958\u0093[\u00a5\u0082\u00a7\u00e45\u00c5K\u00a4i \u0017\u00a2\u00f9\u00c6\u0000\u0010c\u00c6\u0087\"\u0086\u00b8\u00ef\u00cd\fU\u001d\u00a2t\u0093\u00975'\u00a3\u00c3\u008c\u0092\u00145\u0005\u00dc\u00c5\u0010\u00f2S\u00f9\u00a4\u00a3\u009f\u0092*\u001b\u00ae3\"\u0095\u00d4\u0006\u00ba\u0018}\u0002\u00bbO\u0016Nt\u00d1\u00baK\u00feG &\u00d8\u00abx\u00b6I\u001cI\u008e2\u0019(\u00c3\u00d1\u008dS\u00b5\f\u00a2\u00ce\u00af\u0007\u00f7\u0099\u00c2\u00a5\b\u00e0\u008b\u000b\u00cee\u00a0\u0087d\u0087\u00e4\u009e\u00d8\u00d6&\u00a9\u0083\u00d2{I\u00b6\u00c0\n\u008cc\u00eb\u0010\u00d3\u00f7\u00edz\u00f1^3\u00a2\u00d4\u00a5\u009a\u00fc\u00a9\u00b9\u00d0K\u0010\u0005gC\u00d7h\u00c9r&\u00a7\u00c4v\u00b0\u00df\u00ee\u0010\n mp6\u0083\u00ef\u00e8\u0081\u00db\u00d0W+\u0081a\u0006\u00f6D\u00e7.\u00f9\u00c9\u009d>,\u00cc\u00fe\u009e\u00c7\u00a8\u00e3\u00e5q\u0096 +\u00af\"\u000bp\u00a5\u00e8\u0088\u009e\u00c2\u009c\u0010\u00d0(\u00e5dK\u00d6\u0092\u0083\u00cd\u00d1\u0018o\u00d4\u00f2U\u00ea\u00c5\u000epT\u0018\u00a6\u00da3\u0018n\u0006c\u00af\u00b7\u00c9R\u000f-*\u0002\u0013\u0000\u008f\u009a\u00fe\u00883\u00db\u00f0";
                var8_6 = "\u00db\u00d9\u00f7\u008cpp8\u00b1\u009c\u00f7\u0005\u0019\u0086J\u001f\u0019\u0006N\u00e7\u0099H-\u00d7\u0010U\u00ef\u008aX5n\u001a\u00e6 \u0095\u0088Z\u00e9E\u0090Gy\u00deV\u00b2\u0013E\u00e0\u008f\u000e[\u00b9\u0012\u00958\u0093[\u00a5\u0082\u00a7\u00e45\u00c5K\u00a4i \u0017\u00a2\u00f9\u00c6\u0000\u0010c\u00c6\u0087\"\u0086\u00b8\u00ef\u00cd\fU\u001d\u00a2t\u0093\u00975'\u00a3\u00c3\u008c\u0092\u00145\u0005\u00dc\u00c5\u0010\u00f2S\u00f9\u00a4\u00a3\u009f\u0092*\u001b\u00ae3\"\u0095\u00d4\u0006\u00ba\u0018}\u0002\u00bbO\u0016Nt\u00d1\u00baK\u00feG &\u00d8\u00abx\u00b6I\u001cI\u008e2\u0019(\u00c3\u00d1\u008dS\u00b5\f\u00a2\u00ce\u00af\u0007\u00f7\u0099\u00c2\u00a5\b\u00e0\u008b\u000b\u00cee\u00a0\u0087d\u0087\u00e4\u009e\u00d8\u00d6&\u00a9\u0083\u00d2{I\u00b6\u00c0\n\u008cc\u00eb\u0010\u00d3\u00f7\u00edz\u00f1^3\u00a2\u00d4\u00a5\u009a\u00fc\u00a9\u00b9\u00d0K\u0010\u0005gC\u00d7h\u00c9r&\u00a7\u00c4v\u00b0\u00df\u00ee\u0010\n mp6\u0083\u00ef\u00e8\u0081\u00db\u00d0W+\u0081a\u0006\u00f6D\u00e7.\u00f9\u00c9\u009d>,\u00cc\u00fe\u009e\u00c7\u00a8\u00e3\u00e5q\u0096 +\u00af\"\u000bp\u00a5\u00e8\u0088\u009e\u00c2\u009c\u0010\u00d0(\u00e5dK\u00d6\u0092\u0083\u00cd\u00d1\u0018o\u00d4\u00f2U\u00ea\u00c5\u000epT\u0018\u00a6\u00da3\u0018n\u0006c\u00af\u00b7\u00c9R\u000f-*\u0002\u0013\u0000\u008f\u009a\u00fe\u00883\u00db\u00f0".length();
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
                    var9_3[var7_4++] = lk.bZg(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "y\u001b\u00b0\u00c0\u00aa\u008bJ\u00c0\u00b4\u0007!\"\u00be\u00a5\u00b1\"g\u0002\u0002\u00c9\u0016W~j \u001f\u0011\u0087\u009f?'\u00c0\u00e8y[\u00a2\u0085\u00a4\u00bfH$*D\u00c7\u001a4\u00f1\u00f2\u00d7\u0090\u00dd\u00e4\u00f1\u0093\u00a4\u00eb&";
                    var8_6 = "y\u001b\u00b0\u00c0\u00aa\u008bJ\u00c0\u00b4\u0007!\"\u00be\u00a5\u00b1\"g\u0002\u0002\u00c9\u0016W~j \u001f\u0011\u0087\u009f?'\u00c0\u00e8y[\u00a2\u0085\u00a4\u00bfH$*D\u00c7\u001a4\u00f1\u00f2\u00d7\u0090\u00dd\u00e4\u00f1\u0093\u00a4\u00eb&".length();
                    var5_7 = 24;
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
                    var9_3[var7_4++] = lk.bZg(var10_9).intern();
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
        lk.ofRvq = var9_3;
        lk.FvEPT = new String[13];
    }

    private static String bZg(byte[] byArray) {
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

    private static CallSite bZj(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/lk" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Object bZi(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = lk.bZh(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static Throwable bZf(Throwable throwable) {
        return throwable;
    }

    private static /* synthetic */ void bZe(lj lj2, float f, float f2, float f3, RenderPass renderPass) {
        long l = DJuVT ^ 0x40A91FB5452CL;
        renderPass.bindTexture((String)((Object)lk.bZj("q", (int)22142, (long)(0x7BEF17ED00CC46FAL ^ l))), lj2.bYN().method_71659(), lj2.bYN().method_75484());
        jL.xOjEv.bJl();
        jL.xOjEv.bJq((String)((Object)lk.bZj("q", (int)9264, (long)(0x2275069C032634B3L ^ l))), lj2.bYO().dvj());
        jL.xOjEv.bJq((String)((Object)lk.bZj("q", (int)4865, (long)(0x627178D2ED220384L ^ l))), f);
        jL.xOjEv.bJq((String)((Object)lk.bZj("q", (int)29559, (long)(0x6B32BC20A87AE3F1L ^ l))), f2);
        jL.xOjEv.bJx((String)((Object)lk.bZj("q", (int)4357, (long)(0xBEEB31233138182L ^ l))), 0);
        jL.xOjEv.bJq((String)((Object)lk.bZj("q", (int)31630, (long)(0x67E2C48650D0EB0FL ^ l))), 0.0f);
        jL.xOjEv.bJt((String)((Object)lk.bZj("q", (int)16651, (long)(0x3F19EA6C7406D184L ^ l))), 0.0f, 0.0f, 0.0f, 0.0f);
        jL.xOjEv.bJu((String)((Object)lk.bZj("q", (int)27453, (long)(0xB732F529AAB7BB5L ^ l))), jF.bHw());
        jL.xOjEv.bJx((String)((Object)lk.bZj("q", (int)17703, (long)(0x44BC5084005D5A5L ^ l))), 0);
        jL.xOjEv.bJq((String)((Object)lk.bZj("q", (int)5048, (long)(0x60411C39D4958336L ^ l))), 0.0f);
        jL.xOjEv.bJq((String)((Object)lk.bZj("q", (int)23270, (long)(0x70A825FC0F2F4A6AL ^ l))), 0.0f);
        jL.xOjEv.bJq((String)((Object)lk.bZj("q", (int)18650, (long)(0x63AF13666F21585AL ^ l))), 0.0f);
        jL.xOjEv.bJq((String)((Object)lk.bZj("q", (int)19652, (long)(0x55730AF20F4EDC49L ^ l))), f3);
    }

    private static String bZh(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4572;
        if (FvEPT[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])BGzjS.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    BGzjS.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/lk", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = ofRvq[n2].getBytes("ISO-8859-1");
            lk.FvEPT[n2] = lk.bZg(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return FvEPT[n2];
    }

    /*
     * Unable to fully structure code
     */
    public static void bZd(lj var0, char var1_1, float var2_2, int var3_3, Matrix4f var4_4, float var5_5, float var6_6, float var7_7) {
        block24: {
            var8_8 = lk.DJuVT ^ 95944700019166L;
            var11_9 = 0.05f;
            var12_10 = 0.5f;
            var13_11 = var0.bYQ().get(var1_1);
            var14_12 = var6_6 + var13_11.bZs() * var2_2;
            var10_13 = lj.bYV();
            var15_14 = new class_9799(class_290.field_1575.getVertexSize() * 4);
            try {
                block23: {
                    block21: {
                        var16_15 = new class_287(var15_14, VertexFormat.class_5596.field_27382, class_290.field_1575);
                        var13_11.bZk(var4_4, (class_4588)var16_15, var2_2, var5_5, var14_12, var7_7, var3_3);
                        var17_17 = var16_15.method_60794();
                        try {
                            block22: {
                                v0 = var17_17;
                                if (var10_13 == null) break block21;
                                try {
                                    block26: {
                                        if (v0 == null) break block22;
                                        break block26;
                                        catch (Throwable v1) {
                                            throw lk.bZf(v1);
                                        }
                                    }
                                    lF.cfB(kR.mQUZT, var17_17, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bZe(sixtwo.lj float float float com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((lj)var0, (float)var11_9, (float)var12_10, (float)var5_5));
                                }
                                catch (Throwable v2) {
                                    throw lk.bZf(v2);
                                }
                            }
                            v0 = var17_17;
                        }
                        catch (Throwable var18_19) {
                            block25: {
                                try {
                                    v3 = var17_17;
                                    if (var10_13 != null) {
                                        if (v3 == null) break block25;
                                    }
                                    ** GOTO lbl40
                                }
                                catch (Throwable v4) {
                                    throw lk.bZf(v4);
                                }
                                try {
                                    v3 = var17_17;
lbl40:
                                    // 2 sources

                                    v3.close();
                                }
                                catch (Throwable var19_20) {
                                    var18_19.addSuppressed(var19_20);
                                }
                            }
                            throw var18_19;
                        }
                    }
                    try {
                        if (var10_13 == null) break block23;
                        if (v0 == null) break block24;
                    }
                    catch (Throwable v5) {
                        throw lk.bZf(v5);
                    }
                    v0 = var17_17;
                }
                v0.close();
            }
            finally {
                var15_14.close();
            }
        }
        try {
            if (iS.bwL() == null) {
                lj.bYU("sjiyt");
            }
        }
        catch (Throwable v6) {
            throw lk.bZf(v6);
        }
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(lk.class, "bZi", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
