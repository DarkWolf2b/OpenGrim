/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.client.util.math.MatrixStack
 *  net.minecraft.util.math.Vec3d
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
import net.minecraft.util.math.Vec3d;
import sixtwo.gb;
import sixtwo.kF;
import sixtwo.mG;

public class kF$un {
    private MatrixStack tvbZE;
    private Vec3d KONNl;
    private Vec3d EFiQK;
    private mG FeAsi;
    private boolean YVlcU;
    private float zDZwd;
    private static final long kmaNw;
    private static final String[] pkrlR;
    private static final String[] oAHiB;
    private static final Map ebMsx;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    kF$un() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kF$un.kmaNw = gb.aYR(8609377615685431963L, 6536453900990879170L, MethodHandles.lookup().lookupClass()).a(147037262473897L);
                kF$un.ebMsx = new HashMap<K, V>(13);
                var0 = kF$un.kmaNw ^ 136329274872285L;
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
                var9_3 = new String[5];
                var7_4 = 0;
                var6_5 = "\u00ff<\u0010\u00cd%\u00fd3\u00ef~K\u0091`\u00a2X\u00dd\u001f(\f\u0094\u0094\u00f8\u0080}g3\u009c\u00e7\u00cff\u00ce\u0015\u00bf\u0004\u00ef\"\u008b\u001bW\f\u00e5\u0086\u0016\u00ff\u0002\u0099a\u00e3\u00c9I\u00f2\u00c2l\u00f9\u008f\u00e9\u00c7\u00b6\u0010\u008cof\u00be\u00dcM\u00a9|$\u00a2\u0098\nf\u00bfnQ";
                var8_6 = "\u00ff<\u0010\u00cd%\u00fd3\u00ef~K\u0091`\u00a2X\u00dd\u001f(\f\u0094\u0094\u00f8\u0080}g3\u009c\u00e7\u00cff\u00ce\u0015\u00bf\u0004\u00ef\"\u008b\u001bW\f\u00e5\u0086\u0016\u00ff\u0002\u0099a\u00e3\u00c9I\u00f2\u00c2l\u00f9\u008f\u00e9\u00c7\u00b6\u0010\u008cof\u00be\u00dcM\u00a9|$\u00a2\u0098\nf\u00bfnQ".length();
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
                    var9_3[var7_4++] = kF$un.dtu(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "P`\t\u00b7\u0088B@\u0000\u007f\u009e\u00ec\u00ec\u00f0W\u00ae\u0080\u0001\u00d6f\u00865\u008b2l1\u00cb\u00abD-\\\u00e0W,2\u00b9\u00ecy\u009c\u00b3\u00c57e\u00b4N@\u00d8\u00f2/\u00c2\u00f1\u00de\u00f0\u00e3\u00f8\u00c1\u00a8\u00c5p\u0016\u00c3\u00f2\u0012\u00f7\u00e5q\u00af\u00ad\u00a5\u00dbv=\u00df\u000f[Q\u00ba|ra\u008eL\u00ee|QpL`\u0019\u00f2\u00e8uC\u0014\u00fb\u00b4\u0095\u0018\u00c3\u00a2S)p\u00a8\u00ae\u00dc\u00b5\u000bOhMYC\u008e\u00ea\u000eP\u00e4\r\u000bG\u0080";
                    var8_6 = "P`\t\u00b7\u0088B@\u0000\u007f\u009e\u00ec\u00ec\u00f0W\u00ae\u0080\u0001\u00d6f\u00865\u008b2l1\u00cb\u00abD-\\\u00e0W,2\u00b9\u00ecy\u009c\u00b3\u00c57e\u00b4N@\u00d8\u00f2/\u00c2\u00f1\u00de\u00f0\u00e3\u00f8\u00c1\u00a8\u00c5p\u0016\u00c3\u00f2\u0012\u00f7\u00e5q\u00af\u00ad\u00a5\u00dbv=\u00df\u000f[Q\u00ba|ra\u008eL\u00ee|QpL`\u0019\u00f2\u00e8uC\u0014\u00fb\u00b4\u0095\u0018\u00c3\u00a2S)p\u00a8\u00ae\u00dc\u00b5\u000bOhMYC\u008e\u00ea\u000eP\u00e4\r\u000bG\u0080".length();
                    var5_7 = 96;
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
                    var9_3[var7_4++] = kF$un.dtu(var10_9).intern();
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
        kF$un.pkrlR = var9_3;
        kF$un.oAHiB = new String[5];
    }

    public String toString() {
        long l2 = kmaNw ^ 0x1D5AC8F57053L;
        float f2 = this.zDZwd;
        String string = String.valueOf(this.FeAsi);
        String string2 = String.valueOf(this.EFiQK);
        String string3 = String.valueOf(this.KONNl);
        String string4 = String.valueOf(this.tvbZE);
        return (String)((Object)kF$un.dtx("x", (int)244, (long)(0x756DAB70E10113DCL ^ l2))) + string4 + (String)((Object)kF$un.dtx("x", (int)18475, (long)(0x1230FDDF17ADB00L ^ l2))) + string3 + (String)((Object)kF$un.dtx("x", (int)16496, (long)(0x5529844009A25359L ^ l2))) + string2 + (String)((Object)kF$un.dtx("x", (int)15406, (long)(0x729D1624D7972F01L ^ l2))) + string + (String)((Object)kF$un.dtx("x", (int)16743, (long)(0x24BFD56839BED24DL ^ l2))) + f2 + ")";
    }

    public kF$un dtp(Vec3d vec3d) {
        this.KONNl = vec3d;
        return this;
    }

    public kF$un dtr(mG mG2) {
        this.FeAsi = mG2;
        return this;
    }

    private static Object dtw(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kF$un.dtv(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    public kF$un dtq(Vec3d vec3d) {
        this.EFiQK = vec3d;
        return this;
    }

    public kF$un dto(MatrixStack matrixStack) {
        this.tvbZE = matrixStack;
        return this;
    }

    private static String dtu(byte[] byArray) {
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

    private static String dtv(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x4E87;
        if (oAHiB[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])ebMsx.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    ebMsx.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kF$un", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = pkrlR[n3].getBytes("ISO-8859-1");
            kF$un.oAHiB[n3] = kF$un.dtu(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return oAHiB[n3];
    }

    private static CallSite dtx(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kF$un" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public kF dtt() {
        long l2 = kmaNw ^ 0x20AB587104EL;
        float f2 = this.zDZwd;
        if (!this.YVlcU) {
            f2 = kF.bTo();
        }
        return new kF(this.tvbZE, this.KONNl, this.EFiQK, this.FeAsi, f2);
    }

    public kF$un dts(float f2) {
        this.zDZwd = f2;
        this.YVlcU = true;
        return this;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kF$un.class, "dtw", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

