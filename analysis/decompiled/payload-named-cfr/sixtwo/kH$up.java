/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.Box
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
import net.minecraft.client.util.math.MatrixStack;
import net.minecraft.util.math.Box;
import sixtwo.gb;
import sixtwo.kH;
import sixtwo.mG;

public class kH$up {
    private MatrixStack FKGjF;
    private Box rVjdp;
    private mG ecgxR;
    private mG jFenm;
    private mG LTfSx;
    private boolean MpISF;
    private boolean TjEAh;
    private static final long xwbNq;
    private static final String[] bPYDx;
    private static final String[] ACzdb;
    private static final Map qnlhy;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    kH$up() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kH$up.xwbNq = gb.aYR(584322236403852889L, -3795337152887394363L, MethodHandles.lookup().lookupClass()).a(249880812500847L);
                kH$up.qnlhy = new HashMap<K, V>(13);
                var0 = kH$up.xwbNq ^ 124723709472395L;
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
                var6_5 = "3\u0017d\u0011b\u001c\u00e21\u00e2;\u00a0\u009c\u00e1\u00ab\u00d9\u00ca\u00e3\n*\u00b5\u001f\u00a6i\u00ab\u00c3w\u00ff,`VL\u009dXe'\u0096\u00e0\u0081\u00c9,\u00da\u008f'\u008eD\u00bb\u00b5\u00fd\u009c\u00a5\u00e1\u0017\u00c5S\u00804<\u0015\u009b\u0014\u00c8PW9\u0005\u0002\u00ca\u007f\u00ae\u0090g\u00c9\u000b\u00b3\u0090`U\u00c4\u0092\u00f6\u00b5\u00c2\\4\u001d\u00f7\u00b7\u0090\u00b0\u000f\u00ef\u00c7\u0018Y\u0083'\u00cbn\u0081\u00e7\u00ff\u00a2\u0095\u00da\u00c5#\u009f\u00d8\u000fe\u0094\u0081\u00dd\u00bb\u0005\u00f9\u0098\u00bcV\u00ca\u0099\u0018laO\u00b2\u0093\u00c8\u00aaLe\u00c8`\u0018\u00fc\u0080\u00c9w\u00f3C\u00b3\u00ee\u00d5s\f\u008d \fx\u001e\u000e\u00c2\u00c1\u00a7\u00f0X\u0005st\u0014k\u00ceR\u0090\u0017\u0095~\u00fe\u00df\u00d2\u00bfd\u00df\u00c3HW\u00d25\u00c9\u0018\u00adA\u007f\u0099\u0019vK:\u00dd\u00a8\u00eaEc\u00f2\u00f6P\u00a0\u008c4\u0083\u00ca\u0084\u001b\u001c";
                var8_6 = "3\u0017d\u0011b\u001c\u00e21\u00e2;\u00a0\u009c\u00e1\u00ab\u00d9\u00ca\u00e3\n*\u00b5\u001f\u00a6i\u00ab\u00c3w\u00ff,`VL\u009dXe'\u0096\u00e0\u0081\u00c9,\u00da\u008f'\u008eD\u00bb\u00b5\u00fd\u009c\u00a5\u00e1\u0017\u00c5S\u00804<\u0015\u009b\u0014\u00c8PW9\u0005\u0002\u00ca\u007f\u00ae\u0090g\u00c9\u000b\u00b3\u0090`U\u00c4\u0092\u00f6\u00b5\u00c2\\4\u001d\u00f7\u00b7\u0090\u00b0\u000f\u00ef\u00c7\u0018Y\u0083'\u00cbn\u0081\u00e7\u00ff\u00a2\u0095\u00da\u00c5#\u009f\u00d8\u000fe\u0094\u0081\u00dd\u00bb\u0005\u00f9\u0098\u00bcV\u00ca\u0099\u0018laO\u00b2\u0093\u00c8\u00aaLe\u00c8`\u0018\u00fc\u0080\u00c9w\u00f3C\u00b3\u00ee\u00d5s\f\u008d \fx\u001e\u000e\u00c2\u00c1\u00a7\u00f0X\u0005st\u0014k\u00ceR\u0090\u0017\u0095~\u00fe\u00df\u00d2\u00bfd\u00df\u00c3HW\u00d25\u00c9\u0018\u00adA\u007f\u0099\u0019vK:\u00dd\u00a8\u00eaEc\u00f2\u00f6P\u00a0\u008c4\u0083\u00ca\u0084\u001b\u001c".length();
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
                    var9_3[var7_4++] = kH$up.dtT(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "T\u008d{\u0081\u0006\u000e[\u008d\u00bf\u00bb\u0011r\u00f3\u00f893\u00cbT\u00feU\u009a\f\u00c5a\u0018]\u0097\u0007g\u008e\u00ef,\u0010\u00e4o\u00e0\u0097A\u00ce8\u00a3\u00a9\u00f6\\\u00a6pO{/";
                    var8_6 = "T\u008d{\u0081\u0006\u000e[\u008d\u00bf\u00bb\u0011r\u00f3\u00f893\u00cbT\u00feU\u009a\f\u00c5a\u0018]\u0097\u0007g\u008e\u00ef,\u0010\u00e4o\u00e0\u0097A\u00ce8\u00a3\u00a9\u00f6\\\u00a6pO{/".length();
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
                    var9_3[var7_4++] = kH$up.dtT(var10_9).intern();
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
        kH$up.bPYDx = var9_3;
        kH$up.ACzdb = new String[7];
    }

    public String toString() {
        long l2 = xwbNq ^ 0x786468201F12L;
        boolean bl2 = this.TjEAh;
        boolean bl3 = this.MpISF;
        String string = String.valueOf(this.LTfSx);
        String string2 = String.valueOf(this.jFenm);
        String string3 = String.valueOf(this.ecgxR);
        String string4 = String.valueOf(this.rVjdp);
        String string5 = String.valueOf(this.FKGjF);
        return (String)((Object)kH$up.dtW("m", (int)13358, (long)(0x6CCC4FECEE7FBB80L ^ l2))) + string5 + (String)((Object)kH$up.dtW("m", (int)12213, (long)(0x614AF2564482A01CL ^ l2))) + string4 + (String)((Object)kH$up.dtW("m", (int)31821, (long)(0x7A616B83D434F3E0L ^ l2))) + string3 + (String)((Object)kH$up.dtW("m", (int)29938, (long)(0x355068AEF9F17B59L ^ l2))) + string2 + (String)((Object)kH$up.dtW("m", (int)23657, (long)(0x34D189D08EC053C5L ^ l2))) + string + (String)((Object)kH$up.dtW("m", (int)12465, (long)(0x118134384BFFBF1BL ^ l2))) + bl3 + (String)((Object)kH$up.dtW("m", (int)30754, (long)(0x12343DD8DC93F78DL ^ l2))) + bl2 + ")";
    }

    public kH dtS() {
        return new kH(this.FKGjF, this.rVjdp, this.ecgxR, this.jFenm, this.LTfSx, this.MpISF, this.TjEAh);
    }

    public kH$up dtN(mG mG2) {
        this.ecgxR = mG2;
        return this;
    }

    public kH$up dtP(mG mG2) {
        this.LTfSx = mG2;
        return this;
    }

    public kH$up dtL(MatrixStack matrixStack) {
        this.FKGjF = matrixStack;
        return this;
    }

    public kH$up dtM(Box box) {
        this.rVjdp = box;
        return this;
    }

    private static String dtU(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x22C2;
        if (ACzdb[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])qnlhy.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    qnlhy.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kH$up", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = bPYDx[n3].getBytes("ISO-8859-1");
            kH$up.ACzdb[n3] = kH$up.dtT(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return ACzdb[n3];
    }

    private static CallSite dtW(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kH$up" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public kH$up dtR(boolean bl2) {
        this.TjEAh = bl2;
        return this;
    }

    public kH$up dtQ(boolean bl2) {
        this.MpISF = bl2;
        return this;
    }

    private static String dtT(byte[] byArray) {
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

    private static Object dtV(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kH$up.dtU(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public kH$up dtO(mG mG2) {
        this.jFenm = mG2;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kH$up.class, "dtV", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

