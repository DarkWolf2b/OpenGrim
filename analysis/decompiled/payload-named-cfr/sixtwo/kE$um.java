/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
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
import sixtwo.gb;
import sixtwo.kE;
import sixtwo.mG;

public class kE$um {
    private MatrixStack tlvIh;
    private float dRhrk;
    private float gKIqU;
    private float psCpp;
    private float VhQsG;
    private mG fQOej;
    private static final long pBXuo;
    private static final String[] pRDJI;
    private static final String[] RHXAt;
    private static final Map Igxyv;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    kE$um() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kE$um.pBXuo = gb.aYR(-8472916297095918004L, 6139472451448881577L, MethodHandles.lookup().lookupClass()).a(221273076199079L);
                kE$um.Igxyv = new HashMap<K, V>(13);
                var0 = kE$um.pBXuo ^ 70041782130979L;
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
                var6_5 = "wr>\u000e\u00a4*x\u001a\u000b\u00ca\u00a4?\u0010\u00e4^\u00b6\u0010\u009e\u00ea\u009b\u00a8Q\u0017+L\f_\u0080i\u00c3\u00e4:\u00c7 q\u00ed\u0014\u00a9\u00cd\u00ce\u009f<\u0084U\u00b9\u001a\u009c\u00e2a\u00af\u00cfdv\u00a6Wv\u00ae\u00c2\u00d3b\u00d8=\u00c1&\u00f2>x\u00b0,L\u00ea\u00f2m\u00e6T\u00d2\u00c3\u00e2\u00ff\u001aP\u00b4j<\u0003\u0019\u00d0\u00a2=\u00c9\u00f1`\u00a4\nj\u00b6\u00e3\u00fbd\u00ad\u0092\u0092\u00a9\u00b8\u00fb\u0005/\u00c8#E\u00ac\u00cf\u00bd\u00c5\u00cb\u00d9\u00c7\u00ae\u00b2\u00bc\u00ed\u00b6\u00d7\u00de\u00e1\u00a1\u00c7\u0094\u00e6\u00d5\u00e3v\u009dk*\u00e9\u00f5\u0010\u0011\u00a2\u0085:\u00d5\u001c\u00d3\u0095\u00c3QR\u00b5\u00bbW\u00d1\u00e5\u00b8\u0016M\u000b\u0095\u00a8u\t#\u0097\u001b\u00ae\u00c5'\t\u00f2n\u008f\u00e6\u00c4\u00da\u0012\u0001:\u0019\u00d1[\u00f0x\u00cd\u00c1+8";
                var8_6 = "wr>\u000e\u00a4*x\u001a\u000b\u00ca\u00a4?\u0010\u00e4^\u00b6\u0010\u009e\u00ea\u009b\u00a8Q\u0017+L\f_\u0080i\u00c3\u00e4:\u00c7 q\u00ed\u0014\u00a9\u00cd\u00ce\u009f<\u0084U\u00b9\u001a\u009c\u00e2a\u00af\u00cfdv\u00a6Wv\u00ae\u00c2\u00d3b\u00d8=\u00c1&\u00f2>x\u00b0,L\u00ea\u00f2m\u00e6T\u00d2\u00c3\u00e2\u00ff\u001aP\u00b4j<\u0003\u0019\u00d0\u00a2=\u00c9\u00f1`\u00a4\nj\u00b6\u00e3\u00fbd\u00ad\u0092\u0092\u00a9\u00b8\u00fb\u0005/\u00c8#E\u00ac\u00cf\u00bd\u00c5\u00cb\u00d9\u00c7\u00ae\u00b2\u00bc\u00ed\u00b6\u00d7\u00de\u00e1\u00a1\u00c7\u0094\u00e6\u00d5\u00e3v\u009dk*\u00e9\u00f5\u0010\u0011\u00a2\u0085:\u00d5\u001c\u00d3\u0095\u00c3QR\u00b5\u00bbW\u00d1\u00e5\u00b8\u0016M\u000b\u0095\u00a8u\t#\u0097\u001b\u00ae\u00c5'\t\u00f2n\u008f\u00e6\u00c4\u00da\u0012\u0001:\u0019\u00d1[\u00f0x\u00cd\u00c1+8".length();
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
                    var9_3[var7_4++] = kE$um.dtk(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u001c\u00c1\u00e83v\u00ab\u007f@\u00b6\u0083\u00e3\u00af\u00f0t\u00b6)\u0083\u00ef\u001bW\u00d1D\u00ba\u00d3\u00f1\u0016C?6\u0080\u00e1\u0017\u0010\u00f8A\n\u0082\u0090wu\u001b\u00ad\u00f6]\u00ca7\u00c3\u0018\u0007";
                    var8_6 = "\u001c\u00c1\u00e83v\u00ab\u007f@\u00b6\u0083\u00e3\u00af\u00f0t\u00b6)\u0083\u00ef\u001bW\u00d1D\u00ba\u00d3\u00f1\u0016C?6\u0080\u00e1\u0017\u0010\u00f8A\n\u0082\u0090wu\u001b\u00ad\u00f6]\u00ca7\u00c3\u0018\u0007".length();
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
                    var9_3[var7_4++] = kE$um.dtk(var10_9).intern();
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
        kE$um.pRDJI = var9_3;
        kE$um.RHXAt = new String[6];
    }

    public String toString() {
        long l2 = pBXuo ^ 0xD9E715D5102L;
        String string = String.valueOf(this.fQOej);
        float f2 = this.VhQsG;
        float f3 = this.psCpp;
        float f4 = this.gKIqU;
        float f5 = this.dRhrk;
        String string2 = String.valueOf(this.tlvIh);
        return (String)((Object)kE$um.dtn("u", (int)7174, (long)(0x239590DE6F223759L ^ l2))) + string2 + (String)((Object)kE$um.dtn("u", (int)2139, (long)(0x5F9076584971A307L ^ l2))) + f5 + (String)((Object)kE$um.dtn("u", (int)12712, (long)(0x1755FFEA4CEB9AF5L ^ l2))) + f4 + (String)((Object)kE$um.dtn("u", (int)18229, (long)(0x484724F2A1316C6CL ^ l2))) + f3 + (String)((Object)kE$um.dtn("u", (int)13314, (long)(0x22D8ED0D32021F5CL ^ l2))) + f2 + (String)((Object)kE$um.dtn("u", (int)16338, (long)(0x4A9BF7980DB7148AL ^ l2))) + string + ")";
    }

    public kE$um dte(float f2) {
        this.dRhrk = f2;
        return this;
    }

    public kE$um dtd(MatrixStack matrixStack) {
        this.tlvIh = matrixStack;
        return this;
    }

    public kE$um dtf(float f2) {
        this.gKIqU = f2;
        return this;
    }

    private static String dtk(byte[] byArray) {
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

    private static String dtl(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4E80;
        if (RHXAt[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])Igxyv.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    Igxyv.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kE$um", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = pRDJI[n3].getBytes("ISO-8859-1");
            kE$um.RHXAt[n3] = kE$um.dtk(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return RHXAt[n3];
    }

    public kE$um dtg(float f2) {
        this.psCpp = f2;
        return this;
    }

    private static Object dtm(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kE$um.dtl(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public kE$um dth(float f2) {
        this.VhQsG = f2;
        return this;
    }

    private static CallSite dtn(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kE$um" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public kE$um dti(mG mG2) {
        this.fQOej = mG2;
        return this;
    }

    public kE dtj() {
        return new kE(this.tlvIh, this.dRhrk, this.gKIqU, this.psCpp, this.VhQsG, this.fQOej);
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kE$um.class, "dtm", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

