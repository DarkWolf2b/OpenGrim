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
import sixtwo.iS;
import sixtwo.jF;
import sixtwo.jL;
import sixtwo.jN;
import sixtwo.jP;
import sixtwo.jT;
import sixtwo.kR;
import sixtwo.kh;
import sixtwo.kk;
import sixtwo.lF;
import sixtwo.ld;
import sixtwo.lt;
import sixtwo.rD;
import sixtwo.rm;

public class jV
implements kh<jP> {
    private static final long xWvQW;
    private static final String[] DMUUA;
    private static final String[] BSCig;
    private static final Map zObhL;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jV.xWvQW = gb.aYR(-84495922352186167L, -1105693986786572907L, MethodHandles.lookup().lookupClass()).a(269959935127425L);
                jV.zObhL = new HashMap<K, V>(13);
                var0 = jV.xWvQW ^ 73985132116772L;
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
                var9_3 = new String[25];
                var7_4 = 0;
                var6_5 = "\u009e\u009b`\u0089~\u00c0]\"\u009a\u00d8\u0001-\u00b7\u009eA\u00e5 \u0018\u008e\u0083/\u00ac\u00a9>\u001c\u00b0\u00e1\u0006Y\u001f\u00e2\u0087\u00e7\u000f\u009f1\u00fc\u00d4\u00fb\u009a\u0019N\u0000\u00f3\u0086V7do\u0018l\u007f\u0081\u00b4H\u00cc\u00b7Q\u00a1\u00cb\u008f\u00bc&<\u00f1\u008b\u00ff\u00a8h\u00d6y\u008a\t\\ ;\u009c~\u008b\u00bfm\u00a3\u0085\u0085$\u00df\u0089\u008c\u00cd\u008d\u0087\u001f;\u00a4 \u009a\u0015\u00b3\u00a8BO\u0001%\u00ab\u00a2\u00dd\u0015\u0010\u00e8Y\u008fpT\u00f5~\u00a0U\u001ahj]\u009c\u008er \u00f5\u00c3\u0011O\u0019I\u0015\u00ca5\u00a5\u00c1\u00a0\u00abq\u00e5\u008e\u00edk)\u0000p\u00b1*\u00f9\u009f\u00a5\f6w\u00fa\u00ceQ\u0018\u00b5\u00a3Iu\u00ef;\u00b3$F\u00db\u00c1\u00f1\u00fa\u00ca\u00da\u001b\u008a\u00a9/\u0085\u00b7\u0010\u00fc\u0081\u0018\u00f1\u009f\u00c0 [\u00c7GL\u00e1\u00e9\u0018\u001b\u00eb\u0098\u00d3\u0004f\u001dBY\u00e8<\t\u00a5(\u009b\u0093<\u00ea#\u00a9\u00ca\"#\u00ab\u0090\u00cc\u001c\u008e\u0014%K\u009c\u008exh\u0006\u00df`'\u00dd\u00f0i9!\u009f*w\u00f1J\u00ccw)F@\u0018\u00a0T\u0089\u009e\u00d9\u0018>\u000b\u0097i\u00a6za\u00d9}S\u00c4\u00ea\u00c2L\u00a3\u00a9M\u0003 he\u0018\u00efyFa\u0091A\u00a5\u0091\u00fc\u00e0\u00f35_-\u00c3\u00c4s\u00c5\u0010bv\u009f\u00e5\u00ab\u0012\u00b0\u00b0KE Pqm \tM\u0014\u008d\u00b3]\u008fb\u00f2\u0013\u00b8\r\u00b1\u0017\u00c7\u00a1\u00bf\u0093\u00d2vQ\u00b4\u0015\u00a3*tv\n \u0099\u0005\u00e6\t\u0003 $o\u0087\u00a4\\V;\u001eML@\u00bf\u00ae\u0006\u00a7\u000eVo\u00a0\u00bc^\u00c6\u009c\u00b1&\u00a5 z\u00da33\u0017\u0018.\u0099u\u00c9\u0018D\u0099U\u008d\u001f\u008b\u00e4$\u00da\u0007\u00d9\u00cb\u00f3\u00ae_PS4\u00fcz\u00d3\u0010\u00fc\u00d6\u00ea2\u009d\u00ca\u00f7\u00d5[\u008d\u00cd\u0084m\u00edc\u00f7\u0018\u0004\u00bd\u0005\u00ccP\u0013\u00a3.\u008d\u00d7{Vr\u00c5\u00c1Qg_\u00c5T\u00d1:\u00daX\u0018\u009d\u00c3\u001dv\u00ebe\u00f2r!\u008fI\u00f0\u00cc\u00a8\u00ccj<\u0097\u0017f\u0092\u0081)k\u0018\u0088\u00ffW\u00feN\u00b2&\u00f6D\u0084\u008e\u00ca]i\u009bN\u000e\u0017B\u00cd/Q\u00bf\u001a\u0018\fp\u0014<\u00f2\u00d4\u00fb2w'\u00f6\u009a\u00e0@\u0010e\u009b\u007f\u00c6&\u0010h*\u00d6 \u008b!\u00cf\u00cc\u000fX\u00a63\u00d0x\u001b^\u00e6@a&\u0083\u0093(\u0099o\u00df\u00da0\u00fa\u00b2T\u00c9\u0080\\\u00ed\u00e7 Y\u0085\u0010\"\u001ax(\u0080I\u00f2\u00e0v\u00f2\u00a2TzwM;d(\u00b3\u00fa\u00c42\u00e8\u00fc/[|\u00f4h(+& \u00aa\u00ba\u008d\u00b4\u00f7\\U\u00e9\u008d\u00a3\u00a0|76qo\u00ec\u00c0\u0006\u0080\u0015\u00b8\f\u00d5\u0082t\u00c4v}\u001c3\\\u00f2\u0092]\u001ae R\u00efN\u009a\u00186H\u0097\u001e\u008c\u00f63z\u0082)(v'\u0000\u0095\u00ab\"T\u00f9\u00a4\u00f7\u00c7\u00e3\u00ba\txe";
                var8_6 = "\u009e\u009b`\u0089~\u00c0]\"\u009a\u00d8\u0001-\u00b7\u009eA\u00e5 \u0018\u008e\u0083/\u00ac\u00a9>\u001c\u00b0\u00e1\u0006Y\u001f\u00e2\u0087\u00e7\u000f\u009f1\u00fc\u00d4\u00fb\u009a\u0019N\u0000\u00f3\u0086V7do\u0018l\u007f\u0081\u00b4H\u00cc\u00b7Q\u00a1\u00cb\u008f\u00bc&<\u00f1\u008b\u00ff\u00a8h\u00d6y\u008a\t\\ ;\u009c~\u008b\u00bfm\u00a3\u0085\u0085$\u00df\u0089\u008c\u00cd\u008d\u0087\u001f;\u00a4 \u009a\u0015\u00b3\u00a8BO\u0001%\u00ab\u00a2\u00dd\u0015\u0010\u00e8Y\u008fpT\u00f5~\u00a0U\u001ahj]\u009c\u008er \u00f5\u00c3\u0011O\u0019I\u0015\u00ca5\u00a5\u00c1\u00a0\u00abq\u00e5\u008e\u00edk)\u0000p\u00b1*\u00f9\u009f\u00a5\f6w\u00fa\u00ceQ\u0018\u00b5\u00a3Iu\u00ef;\u00b3$F\u00db\u00c1\u00f1\u00fa\u00ca\u00da\u001b\u008a\u00a9/\u0085\u00b7\u0010\u00fc\u0081\u0018\u00f1\u009f\u00c0 [\u00c7GL\u00e1\u00e9\u0018\u001b\u00eb\u0098\u00d3\u0004f\u001dBY\u00e8<\t\u00a5(\u009b\u0093<\u00ea#\u00a9\u00ca\"#\u00ab\u0090\u00cc\u001c\u008e\u0014%K\u009c\u008exh\u0006\u00df`'\u00dd\u00f0i9!\u009f*w\u00f1J\u00ccw)F@\u0018\u00a0T\u0089\u009e\u00d9\u0018>\u000b\u0097i\u00a6za\u00d9}S\u00c4\u00ea\u00c2L\u00a3\u00a9M\u0003 he\u0018\u00efyFa\u0091A\u00a5\u0091\u00fc\u00e0\u00f35_-\u00c3\u00c4s\u00c5\u0010bv\u009f\u00e5\u00ab\u0012\u00b0\u00b0KE Pqm \tM\u0014\u008d\u00b3]\u008fb\u00f2\u0013\u00b8\r\u00b1\u0017\u00c7\u00a1\u00bf\u0093\u00d2vQ\u00b4\u0015\u00a3*tv\n \u0099\u0005\u00e6\t\u0003 $o\u0087\u00a4\\V;\u001eML@\u00bf\u00ae\u0006\u00a7\u000eVo\u00a0\u00bc^\u00c6\u009c\u00b1&\u00a5 z\u00da33\u0017\u0018.\u0099u\u00c9\u0018D\u0099U\u008d\u001f\u008b\u00e4$\u00da\u0007\u00d9\u00cb\u00f3\u00ae_PS4\u00fcz\u00d3\u0010\u00fc\u00d6\u00ea2\u009d\u00ca\u00f7\u00d5[\u008d\u00cd\u0084m\u00edc\u00f7\u0018\u0004\u00bd\u0005\u00ccP\u0013\u00a3.\u008d\u00d7{Vr\u00c5\u00c1Qg_\u00c5T\u00d1:\u00daX\u0018\u009d\u00c3\u001dv\u00ebe\u00f2r!\u008fI\u00f0\u00cc\u00a8\u00ccj<\u0097\u0017f\u0092\u0081)k\u0018\u0088\u00ffW\u00feN\u00b2&\u00f6D\u0084\u008e\u00ca]i\u009bN\u000e\u0017B\u00cd/Q\u00bf\u001a\u0018\fp\u0014<\u00f2\u00d4\u00fb2w'\u00f6\u009a\u00e0@\u0010e\u009b\u007f\u00c6&\u0010h*\u00d6 \u008b!\u00cf\u00cc\u000fX\u00a63\u00d0x\u001b^\u00e6@a&\u0083\u0093(\u0099o\u00df\u00da0\u00fa\u00b2T\u00c9\u0080\\\u00ed\u00e7 Y\u0085\u0010\"\u001ax(\u0080I\u00f2\u00e0v\u00f2\u00a2TzwM;d(\u00b3\u00fa\u00c42\u00e8\u00fc/[|\u00f4h(+& \u00aa\u00ba\u008d\u00b4\u00f7\\U\u00e9\u008d\u00a3\u00a0|76qo\u00ec\u00c0\u0006\u0080\u0015\u00b8\f\u00d5\u0082t\u00c4v}\u001c3\\\u00f2\u0092]\u001ae R\u00efN\u009a\u00186H\u0097\u001e\u008c\u00f63z\u0082)(v'\u0000\u0095\u00ab\"T\u00f9\u00a4\u00f7\u00c7\u00e3\u00ba\txe".length();
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
                    var9_3[var7_4++] = jV.bNj(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00d0%\u00b2\u00fb\u00bfKj\u008c\u001c\u00ee\u00d5\b\u0011i\t?\u0096\u00d7\u00c9\u00e4\u00e8,\u00fak\u0010\u00ea\u0080b\u0083\u00f0\u0003\u0094\u00134nkbY\u00b5\u0006r";
                    var8_6 = "\u00d0%\u00b2\u00fb\u00bfKj\u008c\u001c\u00ee\u00d5\b\u0011i\t?\u0096\u00d7\u00c9\u00e4\u00e8,\u00fak\u0010\u00ea\u0080b\u0083\u00f0\u0003\u0094\u00134nkbY\u00b5\u0006r".length();
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
                    var9_3[var7_4++] = jV.bNj(var10_9).intern();
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
        jV.DMUUA = var9_3;
        jV.BSCig = new String[25];
    }

    /*
     * Unable to fully structure code
     */
    public void bNg(jP var1_1) {
        block31: {
            block30: {
                block28: {
                    block29: {
                        block27: {
                            var2_2 = jV.xWvQW ^ 119592211983747L;
                            var5_3 = rm.dip();
                            var6_4 = var1_1.bKZ();
                            var7_5 = var1_1.bLa();
                            var8_6 = var1_1.bLb();
                            var9_7 = var1_1.bLc();
                            var10_8 = var1_1.bKY();
                            var4_9 = jT.bMQ();
                            var11_10 = var10_8.m00() * var6_4 + var10_8.m10() * var7_5 + var10_8.m20();
                            var12_11 = var10_8.m01() * var6_4 + var10_8.m11() * var7_5 + var10_8.m21();
                            var13_12 = var10_8.m00() * (var6_4 + var8_6) + var10_8.m10() * (var7_5 + var9_7) + var10_8.m20();
                            var14_13 = var10_8.m01() * (var6_4 + var8_6) + var10_8.m11() * (var7_5 + var9_7) + var10_8.m21();
                            var15_14 = var11_10 / var5_3.field_1343;
                            var16_15 = var13_12 / var5_3.field_1343;
                            var17_16 = 1.0f - var12_11 / var5_3.field_1342;
                            var18_17 = 1.0f - var14_13 / var5_3.field_1342;
                            var19_18 = var1_1.bLf();
                            var20_19 = var1_1.bLj();
                            cfr_temp_0 = var19_18.topLeft() - var19_18.topRight();
                            v0 = cfr_temp_0 == 0.0f ? 0 : (cfr_temp_0 > 0.0f ? 1 : -1);
                            if (!var4_9) break block27;
                            try {
                                block34: {
                                    if (v0 != false) break block28;
                                    break block34;
                                    catch (Throwable v1) {
                                        throw jV.bNi(v1);
                                    }
                                }
                                cfr_temp_1 = var19_18.topRight() - var19_18.bottomLeft();
                                v0 = cfr_temp_1 == 0.0f ? 0 : (cfr_temp_1 > 0.0f ? 1 : -1);
                            }
                            catch (Throwable v2) {
                                throw jV.bNi(v2);
                            }
                        }
                        if (!var4_9) break block29;
                        try {
                            block35: {
                                if (v0 != false) break block28;
                                break block35;
                                catch (Throwable v3) {
                                    throw jV.bNi(v3);
                                }
                            }
                            cfr_temp_2 = var19_18.bottomLeft() - var19_18.bottomRight();
                            v0 = cfr_temp_2 == 0.0f ? 0 : (cfr_temp_2 > 0.0f ? 1 : -1);
                        }
                        catch (Throwable v4) {
                            throw jV.bNi(v4);
                        }
                    }
                    try {
                        if (!var4_9) break block30;
                        if (v0 != false) break block28;
                    }
                    catch (Throwable v5) {
                        throw jV.bNi(v5);
                    }
                    v0 = (float)true;
                    break block30;
                }
                v0 = (float)false;
            }
            var21_20 = v0;
            var22_21 = new class_9799(class_290.field_1575.getVertexSize() * 4);
            try {
                var23_22 = new class_287(var22_21, VertexFormat.class_5596.field_27382, class_290.field_1575);
                jV.FroVm.uv_quad_region_color(var23_22, var10_8, var6_4, var7_5, var8_6, var9_7, var15_14, var17_16, var16_15, var18_17, var1_1.bLg());
                var24_24 = var23_22.method_60800();
                try {
                    lF.cfB(kR.azlqG, var24_24, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bNh(float float sixtwo.jP int sixtwo.ld float com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((float)var8_6, (float)var9_7, (jP)var1_1, (int)var21_20, (ld)var19_18, (float)var20_19));
                    if (!var4_9) break block31;
                }
                catch (Throwable var25_26) {
                    block33: {
                        try {
                            v6 = var24_24;
                            if (var4_9) {
                                if (v6 == null) break block33;
                            }
                            ** GOTO lbl80
                        }
                        catch (Throwable v7) {
                            throw jV.bNi(v7);
                        }
                        try {
                            v6 = var24_24;
lbl80:
                            // 2 sources

                            v6.close();
                        }
                        catch (Throwable var26_27) {
                            var25_26.addSuppressed(var26_27);
                        }
                    }
                    throw var25_26;
                }
                try {
                    if (var24_24 != null) {
                        var24_24.close();
                    }
                }
                catch (Throwable v8) {
                    throw jV.bNi(v8);
                }
            }
            catch (Throwable var23_23) {
                try {
                    var22_21.close();
                }
                catch (Throwable var24_25) {
                    var23_23.addSuppressed(var24_25);
                }
                throw var23_23;
            }
            var22_21.close();
        }
        try {
            if (!var4_9) {
                iS.bwK("kSWPqc");
            }
        }
        catch (Throwable v9) {
            throw jV.bNi(v9);
        }
    }

    private static String bNk(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x4BA0;
        if (BSCig[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])zObhL.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    zObhL.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jV", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = DMUUA[n2].getBytes("ISO-8859-1");
            jV.BSCig[n2] = jV.bNj(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return BSCig[n2];
    }

    private static CallSite bNm(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jV" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Object bNl(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = jV.bNk(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static Throwable bNi(Throwable throwable) {
        return throwable;
    }

    private static /* synthetic */ void bNh(float f, float f2, jP jP2, int n, ld ld2, float f3, RenderPass renderPass) {
        int n2;
        CallSite callSite;
        jN jN2;
        long l;
        block2: {
            block3: {
                l = xWvQW ^ 0x6357FB510815L;
                renderPass.bindTexture((String)((Object)jV.bNm("k", (int)30429, (long)(0x75114B5C3A796CA7L ^ l))), kk.bPO().method_71639(), lt.caX());
                jL.kiOiT.bJl();
                jL.kiOiT.bJr((String)((Object)jV.bNm("k", (int)8683, (long)(0x235E5086C44EBB94L ^ l))), rD.dlmvG.method_1522().field_1482, rD.dlmvG.method_1522().field_1481);
                jL.kiOiT.bJr((String)((Object)jV.bNm("k", (int)29193, (long)(0x14AB31C65AA8E87FL ^ l))), f, f2);
                jL.kiOiT.bJu((String)((Object)jV.bNm("k", (int)7042, (long)(0x1B0600E98F6181E8L ^ l))), jF.bHw());
                jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)28434, (long)(0x71A4B2F14F64F56EL ^ l))), jP2.bLs());
                jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)26706, (long)(0x25859316CF1E7239L ^ l))), jP2.bLq());
                jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)18569, (long)(0x4881D42F9D5152E9L ^ l))), jP2.bLr());
                jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)15561, (long)(0x772E58E4BD7126B8L ^ l))), jP2.bLt());
                jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)941, (long)(0x65327CA9C3F899DFL ^ l))), jP2.bLu());
                jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)3363, (long)(0x32854B26460F974AL ^ l))), jP2.bLv());
                jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)22454, (long)(0x4A2D0EB6D411CDDEL ^ l))), jP2.bLw());
                boolean bl = jT.bMQ();
                float[] fArray = jP2.bLy().con();
                jL.kiOiT.bJu((String)((Object)jV.bNm("k", (int)21065, (long)(0x66607B29BA10C825L ^ l))), fArray);
                float[] fArray2 = jP2.bLx().con();
                jL.kiOiT.bJu((String)((Object)jV.bNm("k", (int)12172, (long)(0x6554E61A475835E2L ^ l))), fArray2);
                jL.kiOiT.bJx((String)((Object)jV.bNm("k", (int)17786, (long)(0x7D5F16D72FA35F09L ^ l))), jP2.bLd().bOd());
                jL.kiOiT.bJx((String)((Object)jV.bNm("k", (int)4670, (long)(0x42C420B8784A8849L ^ l))), jP2.bLe().bOr());
                jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)31937, (long)(0x34AEB1352941E6BCL ^ l))), jP2.bLh());
                jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)22635, (long)(0x4B2D5A927C944210L ^ l))), jP2.bLi());
                boolean bl2 = bl;
                try {
                    jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)25, (long)(0x79CF3D91E5D39A67L ^ l))), jP2.bLk());
                    jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)15202, (long)(0x6E6EF9ED9616A11BL ^ l))), jP2.bLl());
                    jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)10428, (long)(0x123C79B0E335B2C8L ^ l))), jP2.bLm());
                    jL.kiOiT.bJq((String)((Object)jV.bNm("k", (int)16254, (long)(0x744C5F6D421BA50BL ^ l))), jP2.bLn());
                    jN2 = jL.kiOiT;
                    callSite = jV.bNm("k", (int)22467, (long)(0x25CC669BA6B6CDACL ^ l));
                    n2 = jP2.bLo();
                    if (!bl2) break block2;
                    if (n2 == 0) break block3;
                }
                catch (MatchException matchException) {
                    throw jV.bNi(matchException);
                }
                n2 = 1;
                break block2;
            }
            n2 = 0;
        }
        jN2.bJx((String)((Object)callSite), n2);
        jL.kiOiT.bJx((String)((Object)jV.bNm("k", (int)14258, (long)(0x4AE9A13B93E9ADDFL ^ l))), n);
        jL.kiOiT.bJt((String)((Object)jV.bNm("k", (int)23948, (long)(0x44E9B01E5D1E47F4L ^ l))), ld2.bottomRight(), ld2.bottomLeft(), ld2.topLeft(), ld2.topRight());
        jL.kiOiT.bJt((String)((Object)jV.bNm("k", (int)6354, (long)(0x57607F68D6CC02A2L ^ l))), f3, f3, f3, f3);
    }

    private static String bNj(byte[] byArray) {
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
            return MethodHandles.lookup().findStatic(jV.class, "bNl", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
