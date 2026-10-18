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
import sixtwo.kC;
import sixtwo.mG;

public class kC$uk {
    private MatrixStack gragq;
    private Box afKwI;
    private mG lBICt;
    private mG SGCdz;
    private mG aSsXs;
    private boolean LTPxD;
    private boolean iSwKG;
    private static final long RLMmo;
    private static final String[] jhySN;
    private static final String[] tmMeL;
    private static final Map IRwWa;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    kC$uk() {
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                kC$uk.RLMmo = gb.aYR(5380995125460508726L, 190140227370653064L, MethodHandles.lookup().lookupClass()).a(135128046972812L);
                kC$uk.IRwWa = new HashMap<K, V>(13);
                var0 = kC$uk.RLMmo ^ 3883118971753L;
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
                var6_5 = "\u000eh(\f^}\u00ec\u0017$|\u00b1\u00efGvs\u00c8\u00cfH\u00ddx\u00abu\u00c1\u00bc)\u00b1AF\u00b1\u008e\u00c1\u00ce\u0010JGLI\u008b^\u00ad\u001b\u00ea\u008e\u008cU\u001bUGw0\u00db,7a\u00f6\u00a7\u00c4D\u00be=k\u00f0z\u0001\u00f0\u00dbD\u00d8\u00fdt\u0010\u00dc^\u00faz\u00d0\u008dS\u00d9r|>\u00cafaJh?\u001d\u009fU\u00c0:y\u0019\u00f1\u00a3w\u0018\u00f89\u0093\u008a\u00fc\u00d2\u000e\b@\u00d32\u0007\u00ea^\u00e8M\u001c\u00b5lh\u0088cl<x\u00ea\u00b2;\u00eb\u00cc0\u009f\u00b5,\u00c8}\u00b7\n:\u0094\u0013\u00c6\u00c1\u00c2(\u00ce\u00a0M\u00d7\u00a8\u008f\u00d4m\u00fd/\u00b3w\u008b\u008a\u00f4\u00b7\u009f\u00a7\u00cf\u00b3\u00f0\u0093F?\u00c30k#\u00c6\u0000~4\u0006\u00f1\u001b\u0093\u00b5\u0001n\u00c7\u00e4n\u00e4\u0085\u00f7\u000b\u009c\u00f2\u00e5\u00c4\u00f9\u0095\u00db'.N\u00c7\u00a6\u00d3Q\u0091\u0019)\u00c0#\u00b1M\u00f3\u00c7\u00f1Z\u0080t(\u00d1W\u0098/L.\u00b3\u00c9\u00d6^\u00bf\u00ae\u00a1,;\u0089\u00a0\u0080\b1\u00fc\u00cd`\u001ed\u008d";
                var8_6 = "\u000eh(\f^}\u00ec\u0017$|\u00b1\u00efGvs\u00c8\u00cfH\u00ddx\u00abu\u00c1\u00bc)\u00b1AF\u00b1\u008e\u00c1\u00ce\u0010JGLI\u008b^\u00ad\u001b\u00ea\u008e\u008cU\u001bUGw0\u00db,7a\u00f6\u00a7\u00c4D\u00be=k\u00f0z\u0001\u00f0\u00dbD\u00d8\u00fdt\u0010\u00dc^\u00faz\u00d0\u008dS\u00d9r|>\u00cafaJh?\u001d\u009fU\u00c0:y\u0019\u00f1\u00a3w\u0018\u00f89\u0093\u008a\u00fc\u00d2\u000e\b@\u00d32\u0007\u00ea^\u00e8M\u001c\u00b5lh\u0088cl<x\u00ea\u00b2;\u00eb\u00cc0\u009f\u00b5,\u00c8}\u00b7\n:\u0094\u0013\u00c6\u00c1\u00c2(\u00ce\u00a0M\u00d7\u00a8\u008f\u00d4m\u00fd/\u00b3w\u008b\u008a\u00f4\u00b7\u009f\u00a7\u00cf\u00b3\u00f0\u0093F?\u00c30k#\u00c6\u0000~4\u0006\u00f1\u001b\u0093\u00b5\u0001n\u00c7\u00e4n\u00e4\u0085\u00f7\u000b\u009c\u00f2\u00e5\u00c4\u00f9\u0095\u00db'.N\u00c7\u00a6\u00d3Q\u0091\u0019)\u00c0#\u00b1M\u00f3\u00c7\u00f1Z\u0080t(\u00d1W\u0098/L.\u00b3\u00c9\u00d6^\u00bf\u00ae\u00a1,;\u0089\u00a0\u0080\b1\u00fc\u00cd`\u001ed\u008d".length();
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
                    var9_3[var7_4++] = kC$uk.dsM(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "s\u008c_c\u0016v\u00b2\u00bc\u00cb)\u00f4u\u00e8\u0013\u00e8\u00f9\u00b9\u0004\u00b5`\u00dd\u00cb\u00e5\u00c0\u001a\u00f5VY\u00ae\n\u00e4\u00e6 M\u00bf\u007fL!yX\u0005\u001e%\u001a\u00aa\u00aa\u00af\u00bb4\f`\u009e\u009d\u00e1\u00af\u009e/T\u00f2\u0087\u0003\u009f\n}\u00fe";
                    var8_6 = "s\u008c_c\u0016v\u00b2\u00bc\u00cb)\u00f4u\u00e8\u0013\u00e8\u00f9\u00b9\u0004\u00b5`\u00dd\u00cb\u00e5\u00c0\u001a\u00f5VY\u00ae\n\u00e4\u00e6 M\u00bf\u007fL!yX\u0005\u001e%\u001a\u00aa\u00aa\u00af\u00bb4\f`\u009e\u009d\u00e1\u00af\u009e/T\u00f2\u0087\u0003\u009f\n}\u00fe".length();
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
                    var9_3[var7_4++] = kC$uk.dsM(var10_9).intern();
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
        kC$uk.jhySN = var9_3;
        kC$uk.tmMeL = new String[7];
    }

    public String toString() {
        long l2 = RLMmo ^ 0x5E4F21308CFBL;
        boolean bl2 = this.iSwKG;
        boolean bl3 = this.LTPxD;
        String string = String.valueOf(this.aSsXs);
        String string2 = String.valueOf(this.SGCdz);
        String string3 = String.valueOf(this.lBICt);
        String string4 = String.valueOf(this.afKwI);
        String string5 = String.valueOf(this.gragq);
        return (String)((Object)kC$uk.dsP("z", (int)26685, (long)(0x4ED8A8FE735A2556L ^ l2))) + string5 + (String)((Object)kC$uk.dsP("z", (int)7097, (long)(0x4A9317331FC156D7L ^ l2))) + string4 + (String)((Object)kC$uk.dsP("z", (int)23573, (long)(0x499C54758406117AL ^ l2))) + string3 + (String)((Object)kC$uk.dsP("z", (int)12408, (long)(0x2B786347FEBDFD14L ^ l2))) + string2 + (String)((Object)kC$uk.dsP("z", (int)26568, (long)(0x104C8E243A302AA5L ^ l2))) + string + (String)((Object)kC$uk.dsP("z", (int)7654, (long)(0x5C333B27AEEA508CL ^ l2))) + bl3 + (String)((Object)kC$uk.dsP("z", (int)18153, (long)(0x3E3A42606DB58B80L ^ l2))) + bl2 + ")";
    }

    public kC$uk dsI(mG mG2) {
        this.aSsXs = mG2;
        return this;
    }

    public kC$uk dsG(mG mG2) {
        this.lBICt = mG2;
        return this;
    }

    public kC dsL() {
        return new kC(this.gragq, this.afKwI, this.lBICt, this.SGCdz, this.aSsXs, this.LTPxD, this.iSwKG);
    }

    public kC$uk dsJ(boolean bl2) {
        this.LTPxD = bl2;
        return this;
    }

    private static CallSite dsP(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/kC$uk" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    public kC$uk dsF(Box box) {
        this.afKwI = box;
        return this;
    }

    public kC$uk dsH(mG mG2) {
        this.SGCdz = mG2;
        return this;
    }

    private static String dsM(byte[] byArray) {
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

    public kC$uk dsE(MatrixStack matrixStack) {
        this.gragq = matrixStack;
        return this;
    }

    public kC$uk dsK(boolean bl2) {
        this.iSwKG = bl2;
        return this;
    }

    private static String dsN(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x3691;
        if (tmMeL[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])IRwWa.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    IRwWa.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/kC$uk", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = jhySN[n3].getBytes("ISO-8859-1");
            kC$uk.tmMeL[n3] = kC$uk.dsM(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return tmMeL[n3];
    }

    private static Object dsO(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = kC$uk.dsN(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(kC$uk.class, "dsO", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

