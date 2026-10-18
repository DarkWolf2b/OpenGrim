/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.mojang.blaze3d.systems.RenderPass
 *  com.mojang.blaze3d.vertex.VertexFormat$class_5596
 *  net.minecraft.class_241
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
import net.minecraft.class_241;
import net.minecraft.class_287;
import net.minecraft.class_290;
import net.minecraft.class_9799;
import sixtwo.gb;
import sixtwo.jF;
import sixtwo.jL;
import sixtwo.jQ;
import sixtwo.jT;
import sixtwo.kR;
import sixtwo.kh;
import sixtwo.lF;
import sixtwo.mZ;

public class jY
implements kh<jQ> {
    private static final long rhDdc;
    private static final String[] YjkCY;
    private static final String[] IzNUq;
    private static final Map FTAap;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jY.rhDdc = gb.aYR(7874516259629707881L, -3334554680866093910L, MethodHandles.lookup().lookupClass()).a(135733769038628L);
                jY.FTAap = new HashMap<K, V>(13);
                var0 = jY.rhDdc ^ 52272056433210L;
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
                var9_3 = new String[8];
                var7_4 = 0;
                var6_5 = "\u00b1\u00a3\u00can`\u00d8nk\u00ceaG\u00f49\u0017\u00b71\u0010J\u00f5b\u00d5\u00b6\u00e7\u000f\u00894Hl\u00a7{\u00b0\u00c5\u00a5\u0010=\u00ed(c\u008dB\u00aa\u00f8\u00b3\u00cf\u00be\u00ff\u0087\u00b9}\u00f0 \u00a1\u0099I\u00be\u00a8\u0085\u0091\u00fb;s\u001b\u00e4\rpZ\u0082}\u00fccz^\u00d0)v\u0096\u00d3\u0014F\u00bf\u00dd\u00e4\u00db J\u00b8\u00ee~\u009f\u00c2*\u00d2\u00c0Rk7\u0017\u0019\u0014\u001fB\u009a4\u00fc\u00c2,\u0095\u001e\u00d8\u00cdf@\u00b7\u000e|\u00b8\u0018KE\u0082\u0093k\u00ba\u00a2\u00b2E\u00bb\u0096\u00ea$\u0000\u00e1\u00a8}\u0018\u00aa]\u0082Fu\u0002";
                var8_6 = "\u00b1\u00a3\u00can`\u00d8nk\u00ceaG\u00f49\u0017\u00b71\u0010J\u00f5b\u00d5\u00b6\u00e7\u000f\u00894Hl\u00a7{\u00b0\u00c5\u00a5\u0010=\u00ed(c\u008dB\u00aa\u00f8\u00b3\u00cf\u00be\u00ff\u0087\u00b9}\u00f0 \u00a1\u0099I\u00be\u00a8\u0085\u0091\u00fb;s\u001b\u00e4\rpZ\u0082}\u00fccz^\u00d0)v\u0096\u00d3\u0014F\u00bf\u00dd\u00e4\u00db J\u00b8\u00ee~\u009f\u00c2*\u00d2\u00c0Rk7\u0017\u0019\u0014\u001fB\u009a4\u00fc\u00c2,\u0095\u001e\u00d8\u00cdf@\u00b7\u000e|\u00b8\u0018KE\u0082\u0093k\u00ba\u00a2\u00b2E\u00bb\u0096\u00ea$\u0000\u00e1\u00a8}\u0018\u00aa]\u0082Fu\u0002".length();
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
                    var9_3[var7_4++] = jY.bNG(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "MW\u001a\u00c6\u0093>]\u00cc\u00cda\u001c\u001ed\u00c1K\u0086\u0010\u00f78\u00f7TRR=,\u00f5\u00b7\u00e7\u00de`\u00bf\u00b7\u0099";
                    var8_6 = "MW\u001a\u00c6\u0093>]\u00cc\u00cda\u001c\u001ed\u00c1K\u0086\u0010\u00f78\u00f7TRR=,\u00f5\u00b7\u00e7\u00de`\u00bf\u00b7\u0099".length();
                    var5_7 = 16;
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
                    var9_3[var7_4++] = jY.bNG(var10_9).intern();
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
        jY.YjkCY = var9_3;
        jY.IzNUq = new String[8];
    }

    /*
     * Unable to fully structure code
     */
    public void bND(jQ var1_1) {
        block18: {
            var2_2 = jY.rhDdc ^ 126217890873272L;
            var5_3 = var1_1.bLJ();
            var4_4 = jT.bMR();
            try {
                if (var5_3.cnW()) {
                    return;
                }
            }
            catch (Throwable v0) {
                throw jY.bNF(v0);
            }
            var6_5 = var1_1.bLF();
            var7_6 = var1_1.bLG();
            var8_7 = var1_1.bLH();
            var9_8 = var1_1.bLI();
            var10_9 = var1_1.bLK() * 0.5f + var1_1.bLL();
            var11_10 = mZ.csp(var6_5.field_1343, var7_6.field_1343, var8_7.field_1343, var9_8.field_1343) - var10_9;
            var12_11 = mZ.csp(var6_5.field_1342, var7_6.field_1342, var8_7.field_1342, var9_8.field_1342) - var10_9;
            var13_12 = mZ.csq(var6_5.field_1343, var7_6.field_1343, var8_7.field_1343, var9_8.field_1343) + var10_9;
            var14_13 = mZ.csq(var6_5.field_1342, var7_6.field_1342, var8_7.field_1342, var9_8.field_1342) + var10_9;
            var15_14 = Math.max(var13_12 - var11_10, 1.0f);
            var16_15 = Math.max(var14_13 - var12_11, 1.0f);
            var17_16 = new class_9799(class_290.field_1576.getVertexSize() * 4);
            try {
                var18_17 = new class_287(var17_16, VertexFormat.class_5596.field_27382, class_290.field_1576);
                jY.FroVm.quad_color(var18_17, var1_1.bLE(), var11_10, var12_11, var15_14, var16_15, var1_1.bLJ());
                var19_19 = var18_17.method_60800();
                try {
                    lF.cfB(kR.vsmse, var19_19, (Consumer<RenderPass>)LambdaMetafactory.metafactory(null, null, null, (Ljava/lang/Object;)V, bNE(float float net.minecraft.class_241 float float net.minecraft.class_241 net.minecraft.class_241 net.minecraft.class_241 sixtwo.jQ com.mojang.blaze3d.systems.RenderPass ), (Lcom/mojang/blaze3d/systems/RenderPass;)V)((float)var15_14, (float)var16_15, (class_241)var6_5, (float)var11_10, (float)var12_11, (class_241)var7_6, (class_241)var8_7, (class_241)var9_8, (jQ)var1_1));
                    if (var4_4) break block18;
                }
                catch (Throwable var20_21) {
                    block19: {
                        try {
                            v1 = var19_19;
                            if (!var4_4) {
                                if (v1 == null) break block19;
                            }
                            ** GOTO lbl40
                        }
                        catch (Throwable v2) {
                            throw jY.bNF(v2);
                        }
                        try {
                            v1 = var19_19;
lbl40:
                            // 2 sources

                            v1.close();
                        }
                        catch (Throwable var21_22) {
                            var20_21.addSuppressed(var21_22);
                        }
                    }
                    throw var20_21;
                }
                try {
                    if (var19_19 != null) {
                        var19_19.close();
                    }
                }
                catch (Throwable v3) {
                    throw jY.bNF(v3);
                }
            }
            finally {
                var17_16.close();
            }
        }
    }

    private static Throwable bNF(Throwable throwable) {
        return throwable;
    }

    private static /* synthetic */ void bNE(float f, float f2, class_241 class_2412, float f3, float f4, class_241 class_2413, class_241 class_2414, class_241 class_2415, jQ jQ2, RenderPass renderPass) {
        long l = rhDdc ^ 0x1AB92D6E00CAL;
        jL.WckAA.bJl();
        jL.WckAA.bJr((String)((Object)jY.bNJ("b", (int)7078, (long)(0x59606D69DAFAFEB1L ^ l))), f, f2);
        jL.WckAA.bJr((String)((Object)jY.bNJ("b", (int)10284, (long)(0x46E16F52AE2B4D38L ^ l))), class_2412.field_1343 - f3, class_2412.field_1342 - f4);
        jL.WckAA.bJr((String)((Object)jY.bNJ("b", (int)15356, (long)(0x309B725A1D8F5EEEL ^ l))), class_2413.field_1343 - f3, class_2413.field_1342 - f4);
        jL.WckAA.bJr((String)((Object)jY.bNJ("b", (int)22634, (long)(0x5639D8AE63793D79L ^ l))), class_2414.field_1343 - f3, class_2414.field_1342 - f4);
        jL.WckAA.bJr((String)((Object)jY.bNJ("b", (int)25835, (long)(0x19A241958EDC01FEL ^ l))), class_2415.field_1343 - f3, class_2415.field_1342 - f4);
        jL.WckAA.bJq((String)((Object)jY.bNJ("b", (int)30678, (long)(0xC7C806ECE3892C0L ^ l))), jQ2.bLK());
        jL.WckAA.bJq((String)((Object)jY.bNJ("b", (int)12255, (long)(0x366AD674F5AF4ACFL ^ l))), jQ2.bLL());
        jL.WckAA.bJu((String)((Object)jY.bNJ("b", (int)27038, (long)(0x1FD023422C368C8FL ^ l))), jF.bHw());
    }

    private static CallSite bNJ(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jY" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String bNG(byte[] byArray) {
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

    private static Object bNI(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = jY.bNH(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static String bNH(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x60F9;
        if (IzNUq[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])FTAap.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    FTAap.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jY", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = YjkCY[n2].getBytes("ISO-8859-1");
            jY.IzNUq[n2] = jY.bNG(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return IzNUq[n2];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jY.class, "bNI", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
