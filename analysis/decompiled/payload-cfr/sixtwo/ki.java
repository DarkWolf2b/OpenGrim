/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  mixin.accessors.MinecraftAccessor
 *  net.minecraft.class_276
 *  org.lwjgl.glfw.GLFW
 */
package sixtwo;

import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import mixin.accessors.MinecraftAccessor;
import net.minecraft.class_276;
import org.lwjgl.glfw.GLFW;
import sixtwo.gb;
import sixtwo.jL;
import sixtwo.kR;
import sixtwo.kk;
import sixtwo.kn;
import sixtwo.ls;
import sixtwo.lt;
import sixtwo.mG;
import sixtwo.rD;

public final class ki {
    private static final ls ZtWVe;
    private static final long JCqrB;
    private static final String[] TCdfE;
    private static final String[] RYmvf;
    private static final Map uOZOd;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                ki.JCqrB = gb.aYR(-5208542502108741218L, -8669767044779108340L, MethodHandles.lookup().lookupClass()).a(238865853452436L);
                ki.uOZOd = new HashMap<K, V>(13);
                var0 = ki.JCqrB ^ 121051625201303L;
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
                var6_5 = "S\u00dd\u008c\u00bcB\u00cbAf\u00cc\u00ae<)A\u00a3\u00f7Q\u0096\u00823\u0015\f\u0095\u00af>\u00b4\u00af\u00ec\u00beA\u00e6?.\u0018\u0085\u00f2;\u00ac\u00ff\u001eB\u001d2(\u00a6<N!\t\u00ab}\u001a\u0019`6\u0098O\u0002\u0010C\u00f2\u00a0\u00d5f\u00e8:\u00bc\u00c1\u0012\u0092j/\u009b\u008a\u000f U\u00bf\u00e4\u0085\u0004\u0005\u00e1\u00f0\u00ec\u00b3\u001c\u00e6\u00fd<\u00b2{P\u00d4\u00a2\u009fcn\u0090\u00b5\u00e1\u001f\u00d2c\u00df\u001f\u00d1X\u0018\u009a~L\u00f9k{\u00ab\u000f\u00eb\u00a0q\u001a\u00cfO\u0001\u0007#\u00e5\u00da\u00c4\u00cc2\u00c5\u00b9 3\u0004\u0091\\\u00be\u0014\u00c1\u00ef\u00a5\u008eX\u00e0\u00b1C\u0016\b\u00be\u009ec\u00c3\\\u008c\u00d9\u00a8\u00b5\u00dd\u0007\u00df/>_% \u00ba\u00cf\u009dQ\u0004c\u00de\u00b1\u009d\u00e2\u00cb\u008f\u00cb\u00cf\u00db\u008b,\u00ceqs\u00070%\r{\u00a0w\u00e89\u00e3\u00c6k\u0018\u0017~S\u00bb{`j\u00eb\u00ce\u008cs\"A\u001c\u00e1\u001c\u001e\u00edr\u009d5d\u00cc\u00b5 \u00ffgo\u009c\u0081\u00bb\u0013\u0097\u007f\u008e\u0083\u0001\u00e7\u00f3\u0083\u00c3)H\u00de\u009c\u0087L\u00ca\u00d6\u0005\u00ccV\u00ea+a\u00a0\u009c \u0012o\u00ae\u00d2L\u00ea\u0010\u0088\u00dfjq6\u0099\u00cd$\u00e9ZzSm\\wz\u00e3z\u008b\u00c8\u008f\u009e\u00b8#\u00f9 \u00c0\u0094\u00d3\u009bp\u00cb\u00a1\u00b5\u00dd\u0087\u000f\u000b\u00b9\u0011\u00d1\u00e6$\u00ael\u00e1\u00d1G\u0014N\u00ba\u00a2]\u001a\u00a9\u0092\u00e6x";
                var8_6 = "S\u00dd\u008c\u00bcB\u00cbAf\u00cc\u00ae<)A\u00a3\u00f7Q\u0096\u00823\u0015\f\u0095\u00af>\u00b4\u00af\u00ec\u00beA\u00e6?.\u0018\u0085\u00f2;\u00ac\u00ff\u001eB\u001d2(\u00a6<N!\t\u00ab}\u001a\u0019`6\u0098O\u0002\u0010C\u00f2\u00a0\u00d5f\u00e8:\u00bc\u00c1\u0012\u0092j/\u009b\u008a\u000f U\u00bf\u00e4\u0085\u0004\u0005\u00e1\u00f0\u00ec\u00b3\u001c\u00e6\u00fd<\u00b2{P\u00d4\u00a2\u009fcn\u0090\u00b5\u00e1\u001f\u00d2c\u00df\u001f\u00d1X\u0018\u009a~L\u00f9k{\u00ab\u000f\u00eb\u00a0q\u001a\u00cfO\u0001\u0007#\u00e5\u00da\u00c4\u00cc2\u00c5\u00b9 3\u0004\u0091\\\u00be\u0014\u00c1\u00ef\u00a5\u008eX\u00e0\u00b1C\u0016\b\u00be\u009ec\u00c3\\\u008c\u00d9\u00a8\u00b5\u00dd\u0007\u00df/>_% \u00ba\u00cf\u009dQ\u0004c\u00de\u00b1\u009d\u00e2\u00cb\u008f\u00cb\u00cf\u00db\u008b,\u00ceqs\u00070%\r{\u00a0w\u00e89\u00e3\u00c6k\u0018\u0017~S\u00bb{`j\u00eb\u00ce\u008cs\"A\u001c\u00e1\u001c\u001e\u00edr\u009d5d\u00cc\u00b5 \u00ffgo\u009c\u0081\u00bb\u0013\u0097\u007f\u008e\u0083\u0001\u00e7\u00f3\u0083\u00c3)H\u00de\u009c\u0087L\u00ca\u00d6\u0005\u00ccV\u00ea+a\u00a0\u009c \u0012o\u00ae\u00d2L\u00ea\u0010\u0088\u00dfjq6\u0099\u00cd$\u00e9ZzSm\\wz\u00e3z\u008b\u00c8\u008f\u009e\u00b8#\u00f9 \u00c0\u0094\u00d3\u009bp\u00cb\u00a1\u00b5\u00dd\u0087\u000f\u000b\u00b9\u0011\u00d1\u00e6$\u00ael\u00e1\u00d1G\u0014N\u00ba\u00a2]\u001a\u00a9\u0092\u00e6x".length();
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
                    var9_3[var7_4++] = ki.bPn(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u00f0W\u00e3#\u001c\bkT\u00d7\u00d2\u0012\u0094x\u00b8\u008e\u00e5\u00c9\u001dhM\u00f13\u0083\u00d0\u00d4;\u00fa\u00e6\u009c\u00ea\u00b8q \u00f4\u009e\u001e\u00c5\u0087\u0013m\u0086\u0004\u00d4\u0095\r\u00ee@\u00cd\u00b8\u000e\u00b9[+\u00ab\u00a3f0\u0001$\u0082\u007f\u00ae[\u00a4\u0094";
                    var8_6 = "\u00f0W\u00e3#\u001c\bkT\u00d7\u00d2\u0012\u0094x\u00b8\u008e\u00e5\u00c9\u001dhM\u00f13\u0083\u00d0\u00d4;\u00fa\u00e6\u009c\u00ea\u00b8q \u00f4\u009e\u001e\u00c5\u0087\u0013m\u0086\u0004\u00d4\u0095\r\u00ee@\u00cd\u00b8\u000e\u00b9[+\u00ab\u00a3f0\u0001$\u0082\u007f\u00ae[\u00a4\u0094".length();
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
                    var9_3[var7_4++] = ki.bPn(var10_9).intern();
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
        ki.TCdfE = var9_3;
        ki.RYmvf = new String[13];
        ki.ZtWVe = new ls();
    }

    private static String bPn(byte[] byArray) {
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

    private static String bPo(int n, long l) {
        int n2 = n ^ (int)(l & 0x7FFFL) ^ 0x3DAD;
        if (RYmvf[n2] == null) {
            Object[] objectArray;
            try {
                Long l2 = Thread.currentThread().threadId();
                objectArray = (Object[])uOZOd.get(l2);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    uOZOd.put(l2, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/ki", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l >>> 56);
            for (int i = 1; i < 8; ++i) {
                byArray[i] = (byte)(l << i * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = TCdfE[n2].getBytes("ISO-8859-1");
            ki.RYmvf[n2] = ki.bPn(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return RYmvf[n2];
    }

    private static Object bPp(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n = (Integer)objectArray[0];
        long l = (Long)objectArray[1];
        String string2 = ki.bPo(n, l);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * WARNING - Removed try catching itself - possible behaviour change.
     * Loose catch block
     */
    private static void bPk(Runnable runnable, mG mG2, mG mG3, int n, int n2, float f, float f2, float f3, float f4, float f5, float f6, boolean bl) {
        class_276 class_2762;
        float[] fArray;
        float[] fArray2;
        block8: {
            ls ls2;
            block7: {
                long l = JCqrB ^ 0x2BDD46B1E290L;
                fArray2 = mG2.con();
                String string = kk.bPU();
                fArray = mG3.con();
                class_2762 = rD.dlmvG.method_1522();
                ZtWVe.caK();
                String string2 = string;
                ls2 = ZtWVe;
                if (string2 == null) break block7;
                try {
                    block10: {
                        ls2.caM();
                        if (!bl) break block8;
                        break block10;
                        catch (MatchException matchException) {
                            throw ki.bPm(matchException);
                        }
                    }
                    ls2 = ZtWVe;
                }
                catch (MatchException matchException) {
                    throw ki.bPm(matchException);
                }
            }
            ls2.method_29329(class_2762);
        }
        MinecraftAccessor minecraftAccessor = (MinecraftAccessor)rD.dlmvG;
        class_276 class_2763 = rD.dlmvG.method_1522();
        minecraftAccessor.setMainRenderTarget((class_276)ZtWVe);
        try {
            kn.bQo(runnable);
        }
        finally {
            minecraftAccessor.setMainRenderTarget(class_2763);
        }
        float f7 = (float)(GLFW.glfwGetTime() * (double)f2);
        kn.bQr(kR.MNKWu, class_2762, renderPass -> {
            long l = JCqrB ^ 0x36B52B5ABC32L;
            renderPass.bindTexture((String)((Object)ki.bPq("o", (int)11158, (long)(0x2157E957077595CDL ^ l))), ZtWVe.method_71639(), lt.caX());
            jL.UaPex.bJl();
            jL.UaPex.bJq((String)((Object)ki.bPq("o", (int)28246, (long)(0x797C18F9E6F95008L ^ l))), f7);
            jL.UaPex.bJt((String)((Object)ki.bPq("o", (int)22251, (long)(0x30283B7025D368B4L ^ l))), fArray2[0], fArray2[1], fArray2[2], 1.0f);
            jL.UaPex.bJt((String)((Object)ki.bPq("o", (int)6265, (long)(0x76FA4093C3AD2629L ^ l))), fArray[0], fArray[1], fArray[2], 1.0f);
            jL.UaPex.bJx((String)((Object)ki.bPq("o", (int)19516, (long)(0x1685201E7478F26BL ^ l))), n);
            jL.UaPex.bJx((String)((Object)ki.bPq("o", (int)15995, (long)(0x64B44852AEFE8026L ^ l))), n2);
            jL.UaPex.bJq((String)((Object)ki.bPq("o", (int)11723, (long)(0x2F6CD4CEDCCE9393L ^ l))), f);
            jL.UaPex.bJq((String)((Object)ki.bPq("o", (int)31418, (long)(0x3AFD8CE286D644EEL ^ l))), f3);
            jL.UaPex.bJx((String)((Object)ki.bPq("o", (int)12342, (long)(0x7CF4902E9A338E6FL ^ l))), 1);
            jL.UaPex.bJq((String)((Object)ki.bPq("o", (int)9723, (long)(0x63412FA8C58C1BA7L ^ l))), f4);
            jL.UaPex.bJr((String)((Object)ki.bPq("o", (int)15762, (long)(0x77ADACFCCD483C4L ^ l))), 0.5f / (float)ki.ZtWVe.field_1482, 0.5f / (float)ki.ZtWVe.field_1481);
            jL.UaPex.bJq((String)((Object)ki.bPq("o", (int)25168, (long)(0x50164A5D3C4D5C05L ^ l))), f5);
            jL.UaPex.bJq((String)((Object)ki.bPq("o", (int)20143, (long)(0x77CE24B320D1F0F5L ^ l))), f6);
        });
    }

    public static void bPj(Runnable runnable, mG mG2, mG mG3, int n, int n2, float f, float f2, float f3, float f4, float f5, float f6) {
        ki.bPk(runnable, mG2, mG3, n, n2, f, f2, f3, f4, f5, f6, true);
    }

    private static MatchException bPm(MatchException matchException) {
        return matchException;
    }

    private static CallSite bPq(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/ki" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public static void bPi(Runnable runnable, mG mG2, mG mG3, int n, int n2, float f, float f2, float f3, float f4, float f5, float f6) {
        ki.bPk(runnable, mG2, mG3, n, n2, f, f2, f3, f4, f5, f6, false);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(ki.class, "bPp", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}
