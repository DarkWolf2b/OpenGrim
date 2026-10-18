/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  net.minecraft.entity.Entity
 *  net.minecraft.entity.LivingEntity
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
import net.minecraft.entity.Entity;
import net.minecraft.entity.LivingEntity;
import sixtwo.gb;
import sixtwo.pA;
import sixtwo.pM;
import sixtwo.pq;

public class pk
extends pA {
    private static final long tweKy;
    private static final String[] xoTaj;
    private static final String[] JgyZU;
    private static final Map SGYWQ;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    public pk() {
        long l2 = tweKy ^ 0x15203EF3EE3BL;
        super((String)((Object)pk.cNH("p", (int)13302, (long)(0x7AB4C580F21302E1L ^ l2))), (String)((Object)pk.cNH("p", (int)17351, (long)(0x6B36F61A29E072D2L ^ l2))));
        this.position(pM.DXMaR);
    }

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                pk.tweKy = gb.aYR(-6178494343064640233L, 4714616395883178368L, MethodHandles.lookup().lookupClass()).a(117829781656289L);
                pk.SGYWQ = new HashMap<K, V>(13);
                var0 = pk.tweKy ^ 139537733479613L;
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
                var6_5 = "7N[\u00e5'Rj+\u0097\u0094\u0081\u009a;\"VKz{(\u0017\u00b2\u00c4T\u00b1\u0099Z\u00ce\u009b.%\u00da\u00fe \u009e\u0012H\u000bS\u00af\u0085\u0006h\"\u0093g\u00ec\u00e4d\u00d34\u008a!\u0002?\u00b7P\u00b1Pq\u00bd\u00cf\u00d5\u001e\u00b3#\u0018\u0004\u008a\u00d8\u00cb\u00b7\u00b9;\u00a1\n\"L\u00e1\u00dc\u00c3\u00c3\u00d3\u00c43\u00cc|\u0006\f_\u0000\u0018J\u00c4\u0015\u00ad7\u00e11\u001a:+&\u0081z\\2\u00d1V\u00b7\u00aa\u00a7\u000f\u0087\u00cd\u00f8\u0010\u001cE\u0004$+\rA\u00ad\u00ef\u001a\u00ab\u0007\t\u00feBJ";
                var8_6 = "7N[\u00e5'Rj+\u0097\u0094\u0081\u009a;\"VKz{(\u0017\u00b2\u00c4T\u00b1\u0099Z\u00ce\u009b.%\u00da\u00fe \u009e\u0012H\u000bS\u00af\u0085\u0006h\"\u0093g\u00ec\u00e4d\u00d34\u008a!\u0002?\u00b7P\u00b1Pq\u00bd\u00cf\u00d5\u001e\u00b3#\u0018\u0004\u008a\u00d8\u00cb\u00b7\u00b9;\u00a1\n\"L\u00e1\u00dc\u00c3\u00c3\u00d3\u00c43\u00cc|\u0006\f_\u0000\u0018J\u00c4\u0015\u00ad7\u00e11\u001a:+&\u0081z\\2\u00d1V\u00b7\u00aa\u00a7\u000f\u0087\u00cd\u00f8\u0010\u001cE\u0004$+\rA\u00ad\u00ef\u001a\u00ab\u0007\t\u00feBJ".length();
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
                    var9_3[var7_4++] = pk.cNE(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u0092\u00bei\u00b9`\u00ce\u008f\u008cC\u00c6\u00fcKu\u00bf\u00afv!2\u00bdr5\u00a7\u00d1\u00db \u008a\u000b*\u00eb\u00d8\u0081\u00b9\u00f0\u00b9Es\u0081\u0003\u000f\t\u0016\u00e5\t\u008d\u00fa\u008f\u0013\u00c7\u00bf\u00ce\u00e5\u00f6\u00bc\u00e3W\u009f\u00df";
                    var8_6 = "\u0092\u00bei\u00b9`\u00ce\u008f\u008cC\u00c6\u00fcKu\u00bf\u00afv!2\u00bdr5\u00a7\u00d1\u00db \u008a\u000b*\u00eb\u00d8\u0081\u00b9\u00f0\u00b9Es\u0081\u0003\u000f\t\u0016\u00e5\t\u008d\u00fa\u008f\u0013\u00c7\u00bf\u00ce\u00e5\u00f6\u00bc\u00e3W\u009f\u00df".length();
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
                    var9_3[var7_4++] = pk.cNE(var10_9).intern();
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
        pk.xoTaj = var9_3;
        pk.JgyZU = new String[7];
    }

    /*
     * Unable to fully structure code
     */
    @Override
    protected String cNC(Entity var1_1, boolean var2_2) {
        block29: {
            block31: {
                block30: {
                    block28: {
                        block27: {
                            block26: {
                                block24: {
                                    block25: {
                                        var3_3 = pk.tweKy ^ 23955842864416L;
                                        var5_4 = pq.cOM();
                                        try {
                                            try {
                                                v0 = var2_2;
                                                if (var5_4 != null) break block24;
                                                if (!v0) break block25;
                                            }
                                            catch (MatchException v1) {
                                                throw pk.cND(v1);
                                            }
                                            return pk.cNH("p", (int)18940, (long)(5245568161830994929L ^ var3_3));
                                        }
                                        catch (MatchException v2) {
                                            throw pk.cND(v2);
                                        }
                                    }
                                    try {
                                        v3 = var1_1;
                                        if (var5_4 != null) break block26;
                                        v0 = v3 instanceof LivingEntity;
                                    }
                                    catch (MatchException v4) {
                                        throw pk.cND(v4);
                                    }
                                }
                                if (!v0) ** GOTO lbl29
                                v3 = var1_1;
                            }
                            var6_5 = (LivingEntity)v3;
                            try {
                                if (var5_4 == null) break block27;
lbl29:
                                // 2 sources

                                return null;
                            }
                            catch (MatchException v5) {
                                throw pk.cND(v5);
                            }
                        }
                        try {
                            v6 = var6_5.isSneaking();
                            if (var5_4 != null) break block28;
                            if (v6) {
                            }
                            ** GOTO lbl44
                        }
                        catch (MatchException v7) {
                            throw pk.cND(v7);
                        }
                        var7_6 = pk.cNH("p", (int)12461, (long)(3319782950099614375L ^ var3_3));
                        try {
                            if (var5_4 == null) break block29;
lbl44:
                            // 2 sources

                            v6 = var6_5.isCrawling();
                        }
                        catch (MatchException v8) {
                            throw pk.cND(v8);
                        }
                    }
                    try {
                        if (var5_4 != null) break block30;
                        if (v6) {
                        }
                        ** GOTO lbl59
                    }
                    catch (MatchException v9) {
                        throw pk.cND(v9);
                    }
                    var7_6 = pk.cNH("p", (int)21659, (long)(3692326942067793554L ^ var3_3));
                    try {
                        if (var5_4 == null) break block29;
lbl59:
                        // 2 sources

                        v6 = var6_5.isInSwimmingPose();
                    }
                    catch (MatchException v10) {
                        throw pk.cND(v10);
                    }
                }
                if (!v6) break block31;
                var7_6 = pk.cNH("p", (int)26144, (long)(2387828105937890344L ^ var3_3));
                if (var5_4 == null) break block29;
            }
            var7_6 = pk.cNH("p", (int)28150, (long)(8134433034295257085L ^ var3_3));
        }
        return var7_6;
    }

    private static String cNF(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x1CB1;
        if (JgyZU[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])SGYWQ.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    SGYWQ.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/pk", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = xoTaj[n3].getBytes("ISO-8859-1");
            pk.JgyZU[n3] = pk.cNE(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return JgyZU[n3];
    }

    private static MatchException cND(MatchException matchException) {
        return matchException;
    }

    private static String cNE(byte[] byArray) {
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

    private static CallSite cNH(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/pk" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static Object cNG(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = pk.cNF(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(pk.class, "cNG", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

