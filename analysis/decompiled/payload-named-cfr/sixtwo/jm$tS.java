/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.sun.jna.Structure
 *  com.sun.jna.Structure$ByReference
 */
package sixtwo;

import com.sun.jna.Structure;
import java.lang.invoke.CallSite;
import java.lang.invoke.MethodHandle;
import java.lang.invoke.MethodHandles;
import java.lang.invoke.MethodType;
import java.lang.invoke.MutableCallSite;
import java.security.Key;
import java.util.HashMap;
import java.util.List;
import java.util.Map;
import javax.crypto.Cipher;
import javax.crypto.SecretKey;
import javax.crypto.SecretKeyFactory;
import javax.crypto.spec.DESKeySpec;
import javax.crypto.spec.IvParameterSpec;
import sixtwo.gb;

public final class jm$tS
extends Structure
implements Structure.ByReference {
    public int aaeEj;
    public int oDYGJ;
    public int ycxcQ;
    public int GOmgg;
    private static final long ykHKx;
    private static final String[] YUCER;
    private static final String[] rIsHL;
    private static final Map fikQq;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jm$tS.ykHKx = gb.aYR(-1927568465887016078L, -3036018275370745488L, MethodHandles.lookup().lookupClass()).a(195138953930490L);
                jm$tS.fikQq = new HashMap<K, V>(13);
                var0 = jm$tS.ykHKx ^ 71571679734540L;
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
                var9_3 = new String[4];
                var7_4 = 0;
                var6_5 = "\u00fa\u00d4CQ\u00c6F\u00fb\u008b\u00dc8\u00d08\u00ffU\u00af\u00d1A\u00cf\u00e7Q\u008cNg<\u0086\u00c2 \u00ed\u00a5\u008c\u0006/ \u00a0\u00a1\u00f0\u00bf\u0012\u00f9\u00b5\u009dz\u000f\u00dc%_*\u008a\u00b6\u00de\u00d2\u00a1\u0090\u0003\u0007\u00a0\u008a\u00fd\u0018R\u0013\u008d1\u009f\u00bb";
                var8_6 = "\u00fa\u00d4CQ\u00c6F\u00fb\u008b\u00dc8\u00d08\u00ffU\u00af\u00d1A\u00cf\u00e7Q\u008cNg<\u0086\u00c2 \u00ed\u00a5\u008c\u0006/ \u00a0\u00a1\u00f0\u00bf\u0012\u00f9\u00b5\u009dz\u000f\u00dc%_*\u008a\u00b6\u00de\u00d2\u00a1\u0090\u0003\u0007\u00a0\u008a\u00fd\u0018R\u0013\u008d1\u009f\u00bb".length();
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
                    var9_3[var7_4++] = jm$tS.dpS(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "h\u0005\u0091\u0081\u00ba\u00e8\u0014\u00a6\u00fa\u00a6\u009c\u00d3\u000f\u00ac\u00d07(c\u00c1\u0091\u009cHN\u000b,a3yX\u00ca~\u0013 \u00fd\u00f1\u00de7J\u00ab]\n\u0090\u009a\u00f8N\u0098V\u00afY\u00f4\u0092\u0094J\u00ca \u0086\u00ed\u0019\u00b2J\u00bb\u0014\u00c3\u009c\u0000";
                    var8_6 = "h\u0005\u0091\u0081\u00ba\u00e8\u0014\u00a6\u00fa\u00a6\u009c\u00d3\u000f\u00ac\u00d07(c\u00c1\u0091\u009cHN\u000b,a3yX\u00ca~\u0013 \u00fd\u00f1\u00de7J\u00ab]\n\u0090\u009a\u00f8N\u0098V\u00afY\u00f4\u0092\u0094J\u00ca \u0086\u00ed\u0019\u00b2J\u00bb\u0014\u00c3\u009c\u0000".length();
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
                    var9_3[var7_4++] = jm$tS.dpS(var10_9).intern();
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
        jm$tS.YUCER = var9_3;
        jm$tS.rIsHL = new String[4];
    }

    protected List<String> getFieldOrder() {
        long l2 = ykHKx ^ 0x6C8BFD9AC501L;
        return List.of(jm$tS.dpV("a", (int)11927, (long)(0x6B140360317B0840L ^ l2)), jm$tS.dpV("a", (int)4473, (long)(0x26392DB0539937ACL ^ l2)), jm$tS.dpV("a", (int)28885, (long)(0x1FED8BFFA0A2D601L ^ l2)), jm$tS.dpV("a", (int)18514, (long)(0x2AC0CD870B0B6E84L ^ l2)));
    }

    private static CallSite dpV(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jm$tS" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String dpT(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x5317;
        if (rIsHL[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])fikQq.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    fikQq.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jm$tS", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = YUCER[n3].getBytes("ISO-8859-1");
            jm$tS.rIsHL[n3] = jm$tS.dpS(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return rIsHL[n3];
    }

    private static String dpS(byte[] byArray) {
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

    private static Object dpU(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = jm$tS.dpT(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jm$tS.class, "dpU", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

