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
import sixtwo.jF;
import sixtwo.jL;
import sixtwo.jR;
import sixtwo.jT;
import sixtwo.kR;
import sixtwo.kh;
import sixtwo.lF;

public class jZ
implements kh<jR> {
    private static final long LTRFg;
    private static final String[] UWJdS;
    private static final String[] ROtOT;
    private static final Map xWhJl;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jZ.LTRFg = gb.aYR(7466836197581158375L, 3893015216397398207L, MethodHandles.lookup().lookupClass()).a(9669060195444L);
                jZ.xWhJl = new HashMap<K, V>(13);
                var0 = jZ.LTRFg ^ 38530150501962L;
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
                var6_5 = "a\u00fb\u00b0\u0096\u000bw\u00a2+\u00b1cP\u00d8\u00a0\u00a2^a\u0018\u00ec\\\tN\u00c2\n\u0085qu&\u0084Z\u0088\u00bd\u008f|*\u0000\u0010S\u00eeT\u00fb\u00d5\u0018\u00b0e\u00d4^\u00e8\u00b3@\u00d1\u0013\u00beC\u00c5\u00b5\u00a7[\u00de\u0018\u009d$!S\u008d\u00ae\u00d3 \u00de\u0081\u00d4\u009e\u0015\u0094\u00cb\u0003\u00ca9\u00af.\u00c0+\u00a9\u00d8\u0081\u00a8I-P\u00077]N7\u00d3\u00ac\u00b1t\u00953";
                var8_6 = "a\u00fb\u00b0\u0096\u000bw\u00a2+\u00b1cP\u00d8\u00a0\u00a2^a\u0018\u00ec\\\tN\u00c2\n\u0085qu&\u0084Z\u0088\u00bd\u008f|*\u0000\u0010S\u00eeT\u00fb\u00d5\u0018\u00b0e\u00d4^\u00e8\u00b3@\u00d1\u0013\u00beC\u00c5\u00b5\u00a7[\u00de\u0018\u009d$!S\u008d\u00ae\u00d3 \u00de\u0081\u00d4\u009e\u0015\u0094\u00cb\u0003\u00ca9\u00af.\u00c0+\u00a9\u00d8\u0081\u00a8I-P\u00077]N7\u00d3\u00ac\u00b1t\u00953".length();
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
                    var9_3[var7_4++] = jZ.bNN(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "J\u0095#'g\u00c7\u00aer\u00dd\u00f2\u0095p\u009c_`\t\u0095y\u00f3\u00d5\u00f9q\u009f+ ^8\u00f5\u009bq7\u00a6\u0015\u0016/\u000f3\u00ba\u00e5\u001a\u0099a\u00d5,J>\u00ad\u00d3\u00b7D\u00ea\u0080\u0089T\u000597";
                    var8_6 = "J\u0095#'g\u00c7\u00aer\u00dd\u00f2\u0095p\u009c_`\t\u0095y\u00f3\u00d5\u00f9q\u009f+ ^8\u00f5\u009bq7\u00a6\u0015\u0016/\u000f3\u00ba\u00e5\u001a\u0099a\u00d5,J>\u00ad\u00d3\u00b7D\u00ea\u0080\u0089T\u000597".length();
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
                    var9_3[var7_4++] = jZ.bNN(var10_9).intern();
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
        jZ.UWJdS = var9_3;
        jZ.ROtOT = new String[6];
    }

    /*
     * Unable to fully structure code
     */
    public void bNK(jR var1_1) {
        block18: {
            var2_2 = jZ.LTRFg ^ 129947678142494L;
            var5_3 = var1_1.bLZ();
            var4_4 = jT.bMR();
            try {
                if (var5_3.cnW()) {
                    return;
                }
            }
            catch (Throwable v0) {
                throw jZ.bNM(v0);
            }
            var6_5 = new class_9799(class_290.field_1576.getVertexSize() * 4);
            try {
                var7_6 = new class_287(var6_5, VertexFormat.class_5596.field_27382, class_290.field_1576);
                jZ.FroVm.quad_color(var7_6, var1_1.bLQ(), var1_1.bLR(), var1_1.bLS(), var1_1.bLT(), var1_1.bLU(), var5_3);
                var8_8 = var7_6.method_60800();
                try {
                    lF.cfB(kR.Esowy, var8_8, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bNL(sixtwo.jR com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((jR)var1_1));
                    if (var4_4) break block18;
                }
                catch (Throwable var9_10) {
                    block19: {
                        try {
                            v1 = var8_8;
                            if (!var4_4) {
                                if (v1 == null) break block19;
                            }
                            ** GOTO lbl29
                        }
                        catch (Throwable v2) {
                            throw jZ.bNM(v2);
                        }
                        try {
                            v1 = var8_8;
lbl29:
                            // 2 sources

                            v1.close();
                        }
                        catch (Throwable var10_11) {
                            var9_10.addSuppressed(var10_11);
                        }
                    }
                    throw var9_10;
                }
                try {
                    if (var8_8 != null) {
                        var8_8.close();
                    }
                }
                catch (Throwable v3) {
                    throw jZ.bNM(v3);
                }
            }
            finally {
                var6_5.close();
            }
        }
    }

    private static /* synthetic */ void bNL(jR jR2, RenderPass renderPass) {
        long l = LTRFg ^ 0xB12B37E9DF1L;
        jL.VAxur.bJl();
        jL.VAxur.bJr((String)((Object)jZ.bNQ("q", (int)13730, (long)(0x5339C83B5EAFB122L ^ l))), jR2.bLT(), jR2.bLU());
        jL.VAxur.bJq((String)((Object)jZ.bNQ("q", (int)25556, (long)(0x37C80A55A646E750L ^ l))), jR2.bLW());
        jL.VAxur.bJq((String)((Object)jZ.bNQ("q", (int)17231, (long)(0x20041C3380C6C7CDL ^ l))), jR2.bLX());
        jL.VAxur.bJq((String)((Object)jZ.bNQ("q", (int)9887, (long)(0x6496E2FE5DC7A21EL ^ l))), jR2.bLY());
        jL.VAxur.bJq((String)((Object)jZ.bNQ("q", (int)17145, (long)(0x3FA3140D3956C67CL ^ l))), jR2.bMa());
        jL.VAxur.bJu((String)((Object)jZ.bNQ("q", (int)27556, (long)(0x1AB5AA901526EF27L ^ l))), jF.bHw());
    }

    private static Object bNP(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = jZ.bNO(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static Throwable bNM(Throwable throwable) {
        return throwable;
    }

    private static String bNN(byte[] byArray) {
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

    private static String bNO(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x7D28;
        if (ROtOT[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])xWhJl.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    xWhJl.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jZ", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = UWJdS[n2].getBytes("ISO-8859-1");
            jZ.ROtOT[n2] = jZ.bNN(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return ROtOT[n2];
    }

    private static CallSite bNQ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jZ" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jZ.class, "bNP", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
