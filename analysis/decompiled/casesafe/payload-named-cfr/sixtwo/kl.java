/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.gl.Framebuffer
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
import net.minecraft.client.gl.Framebuffer;
import sixtwo.gb;
import sixtwo.iS;
import sixtwo.jL;
import sixtwo.kR;
import sixtwo.kk;
import sixtwo.kl$ug;
import sixtwo.kn;
import sixtwo.ls;
import sixtwo.lt;
import sixtwo.lu;
import sixtwo.mG;

public final class kl {
    public static final float gJpxr = 0.25f;
    private static final long ODwOA;
    private static final String[] jYJiI;
    private static final String[] EadsA;
    private static final Map tExRv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kl.ODwOA = gb.aYR(167732081058001962L, 6267511992392369671L, MethodHandles.lookup().lookupClass()).a(139945911792749L);
                kl.tExRv = new HashMap<K, V>(13);
                var0 = kl.ODwOA ^ 63144413886092L;
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
                var9_3 = new String[7];
                var7_4 = 0;
                var6_5 = "oI\u001ea\u00fdZ\u0099\u00d9\u000b\u0006\u00ae5JO\u000e\u00e0\u0010[\u00ad}\u001f\u00dc\u00c7\u00ddG\u00a2\u0014\u0082\u00c4\u00d5\u008e\u000b \u00d1\u0016\u00c0~\u00e7\u001b\u00a1\u00a0\u0093=++0\u00a0\u00cf\u0099\u00ddm=\u000fa\u00b9b4|\u00fd\u00f22\u0082!\u00a3\u00c2\u0018\u00ef\u008a\u0091\u001ep\u0003\u00c2k.\u00a3i\u0007\u00f4\u0006!.\u00fd\u0010\u00d7\u00fes\u00d7\u001c\u008c 6\u00c9\u00dc\u00c7\u009f\u0083\u0005\u001e0\u00a7_\u00e3`|:\u00b8\u00d0\u00bc\u00acJ\u0002\u000f\u00ce\u00db\u0013\u00b8\u00bf\u001b7\u0011\u00cc\u00f0 \u00a94\u00f6\n\u00c2\u00d847\u008a\u0091\u0093\u00af_\u00eaD\u00ef7\u00e9\u00d8iG!~/\u00e3\u00c0\u0017D\u0006\u0082\u00b2\u00a9";
                var8_6 = "oI\u001ea\u00fdZ\u0099\u00d9\u000b\u0006\u00ae5JO\u000e\u00e0\u0010[\u00ad}\u001f\u00dc\u00c7\u00ddG\u00a2\u0014\u0082\u00c4\u00d5\u008e\u000b \u00d1\u0016\u00c0~\u00e7\u001b\u00a1\u00a0\u0093=++0\u00a0\u00cf\u0099\u00ddm=\u000fa\u00b9b4|\u00fd\u00f22\u0082!\u00a3\u00c2\u0018\u00ef\u008a\u0091\u001ep\u0003\u00c2k.\u00a3i\u0007\u00f4\u0006!.\u00fd\u0010\u00d7\u00fes\u00d7\u001c\u008c 6\u00c9\u00dc\u00c7\u009f\u0083\u0005\u001e0\u00a7_\u00e3`|:\u00b8\u00d0\u00bc\u00acJ\u0002\u000f\u00ce\u00db\u0013\u00b8\u00bf\u001b7\u0011\u00cc\u00f0 \u00a94\u00f6\n\u00c2\u00d847\u008a\u0091\u0093\u00af_\u00eaD\u00ef7\u00e9\u00d8iG!~/\u00e3\u00c0\u0017D\u0006\u0082\u00b2\u00a9".length();
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
                    var9_3[var7_4++] = kl.bQk(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u0081\u00b8\u00b8\u00bdCt\u00fe;\u00d4^G\u00b7\u00d8\u00fa}m\u00bc<,\u00f2q\u00e9F\u00bd \u00ab\u0090\u00d5\u008dzr\u00e5\u00e9\u00b1\u00edN\u00b1\u00c4\u00f8/\u00ffY\b \u0016\u000f\u00e7&\u008d\u00e8\u00c1~\u00c1\u00ee\b?\u00e3";
                    var8_6 = "\u0081\u00b8\u00b8\u00bdCt\u00fe;\u00d4^G\u00b7\u00d8\u00fa}m\u00bc<,\u00f2q\u00e9F\u00bd \u00ab\u0090\u00d5\u008dzr\u00e5\u00e9\u00b1\u00edN\u00b1\u00c4\u00f8/\u00ffY\b \u0016\u000f\u00e7&\u008d\u00e8\u00c1~\u00c1\u00ee\b?\u00e3".length();
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
                    var9_3[var7_4++] = kl.bQk(var10_9).intern();
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
        kl.jYJiI = var9_3;
        kl.EadsA = new String[7];
    }

    public static void bQc(kl$ug kl$ug, Framebuffer framebuffer, float f2, mG mG2) {
        kl.bQe(kl$ug, (Framebuffer)kl$ug.dsz(), framebuffer, f2, mG2, 0.25f);
    }

    private static MatchException bQj(MatchException matchException) {
        return matchException;
    }

    private static void bQf(Framebuffer framebuffer, ls ls2, ls ls3, float f2) {
        ls2.caM();
        kn.bQr(kR.JGYzq, (Framebuffer)ls2, renderPass -> {
            long l2 = ODwOA ^ 0x5C6ED5615107L;
            renderPass.bindTexture((String)((Object)kl.bQn("i", (int)24429, (long)(0x2AE03736639C0084L ^ l2))), framebuffer.getColorAttachmentView(), lt.caY(true));
            renderPass.bindTexture((String)((Object)kl.bQn("i", (int)11436, (long)(0x714F94A93115F342L ^ l2))), ls3.getColorAttachmentView(), lt.caX());
            jL.PTppR.bJl();
            jL.PTppR.bJq((String)((Object)kl.bQn("i", (int)9335, (long)(0x411C05FA11007B9CL ^ l2))), f2);
        });
    }

    private static String bQl(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4502;
        if (EadsA[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])tExRv.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    tExRv.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kl", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = jYJiI[n3].getBytes("ISO-8859-1");
            kl.EadsA[n3] = kl.bQk(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return EadsA[n3];
    }

    private static Object bQm(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kl.bQl(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public static void bQe(kl$ug kl$ug, Framebuffer framebuffer, Framebuffer framebuffer2, float f2, mG mG2, float f3) {
        block23: {
            ls ls2;
            ls ls3;
            block24: {
                ls ls4;
                ls ls5;
                int n2;
                ls ls6;
                ls ls7;
                String string;
                block21: {
                    block22: {
                        block25: {
                            block19: {
                                Framebuffer framebuffer3;
                                block20: {
                                    block18: {
                                        long l2 = ODwOA ^ 0x2DCBFB958415L;
                                        string = kk.bPU();
                                        try {
                                            framebuffer3 = framebuffer;
                                            if (string == null) break block18;
                                            if (framebuffer3 == null) break block19;
                                        }
                                        catch (MatchException matchException) {
                                            throw kl.bQj(matchException);
                                        }
                                        framebuffer3 = framebuffer;
                                    }
                                    try {
                                        try {
                                            if (string == null) break block20;
                                            if (framebuffer3.getColorAttachment() == null) break block19;
                                        }
                                        catch (MatchException matchException) {
                                            throw kl.bQj(matchException);
                                        }
                                        framebuffer3 = framebuffer2;
                                    }
                                    catch (MatchException matchException) {
                                        throw kl.bQj(matchException);
                                    }
                                }
                                if (framebuffer3 != null) break block25;
                            }
                            return;
                        }
                        ls7 = kl$ug.dsA();
                        ls6 = kl$ug.dsB();
                        try {
                            ls7.caL(framebuffer);
                            ls6.caL(framebuffer);
                            n2 = kl$ug.YgHMr++ & 1;
                            if (string == null) break block21;
                            if (n2 != 0) break block22;
                        }
                        catch (MatchException matchException) {
                            throw kl.bQj(matchException);
                        }
                        n2 = 1;
                        break block21;
                    }
                    n2 = 0;
                }
                int n3 = n2;
                try {
                    ls5 = n3 != 0 ? ls7 : ls6;
                }
                catch (MatchException matchException) {
                    throw kl.bQj(matchException);
                }
                ls3 = ls5;
                try {
                    ls4 = n3 != 0 ? ls6 : ls7;
                }
                catch (MatchException matchException) {
                    throw kl.bQj(matchException);
                }
                ls2 = ls4;
                try {
                    try {
                        if (string == null) break block23;
                        if (!kl$ug.VgBRE) break block24;
                    }
                    catch (MatchException matchException) {
                        throw kl.bQj(matchException);
                    }
                    ls2.caM();
                    kl$ug.VgBRE = false;
                }
                catch (MatchException matchException) {
                    throw kl.bQj(matchException);
                }
            }
            lu.cbd(framebuffer);
            kl.bQf(framebuffer, ls3, ls2, f3);
            kl.bQg(framebuffer2, framebuffer, ls3, f2, mG2);
        }
    }

    private static CallSite bQn(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kl" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String bQk(byte[] byArray) {
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

    private static void bQg(Framebuffer framebuffer, Framebuffer framebuffer2, ls ls2, float f2, mG mG2) {
        float[] fArray = mG2.con();
        kn.bQr(kR.xfXqe, framebuffer, renderPass -> {
            long l2 = ODwOA ^ 0x1DC3DBE665D9L;
            renderPass.bindTexture((String)((Object)kl.bQn("i", (int)22080, (long)(0x473B57A7BB6F3D74L ^ l2))), framebuffer2.getColorAttachmentView(), lt.caX());
            renderPass.bindTexture((String)((Object)kl.bQn("i", (int)7228, (long)(0x6827540FF317F70EL ^ l2))), ls2.getColorAttachmentView(), lt.caX());
            jL.wxgUS.bJl();
            jL.wxgUS.bJq((String)((Object)kl.bQn("i", (int)825, (long)(0x23935E06DE05680AL ^ l2))), f2);
            jL.wxgUS.bJs((String)((Object)kl.bQn("i", (int)25866, (long)(0x3A6DDC23C7378E3CL ^ l2))), fArray[0], fArray[1], fArray[2]);
        });
    }

    public static Framebuffer bQa(kl$ug kl$ug, Framebuffer framebuffer, boolean bl2) {
        ls ls2;
        String string;
        block7: {
            ls ls3;
            block8: {
                long l2 = ODwOA ^ 0x7C57E85828E9L;
                String string2 = kk.bPU();
                ls3 = kl$ug.dsz();
                kl$ug.dsA().caL(framebuffer);
                string = string2;
                try {
                    try {
                        kl$ug.dsB().caL(framebuffer);
                        ls3.caL(framebuffer);
                        ls2 = ls3;
                        if (string == null) break block7;
                        ls2.caM();
                        if (!bl2) break block8;
                    }
                    catch (MatchException matchException) {
                        throw kl.bQj(matchException);
                    }
                    ls3.copyDepthFrom(framebuffer);
                }
                catch (MatchException matchException) {
                    throw kl.bQj(matchException);
                }
            }
            ls2 = ls3;
        }
        try {
            if (string == null) {
                iS.bwK("b0S14");
            }
        }
        catch (MatchException matchException) {
            throw kl.bQj(matchException);
        }
        return ls2;
    }

    public static void bQb(kl$ug kl$ug) {
        kl$ug.dsy();
    }

    public static void bQd(kl$ug kl$ug, Framebuffer framebuffer, Framebuffer framebuffer2, float f2, mG mG2) {
        kl.bQe(kl$ug, framebuffer, framebuffer2, f2, mG2, 0.25f);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kl.class, "bQm", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

