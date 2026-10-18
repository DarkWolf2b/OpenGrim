/*
 * Decompiled with CFR 0.152.
 * 
 * Could not load the following classes:
 *  com.sun.jna.Structure
 *  com.sun.jna.platform.win32.WinDef$DWORD
 *  com.sun.jna.platform.win32.WinDef$HRGN
 */
package sixtwo;

import com.sun.jna.Structure;
import com.sun.jna.platform.win32.WinDef;
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

public final class jm$tP
extends Structure {
    public WinDef.DWORD rBxXl;
    public boolean sYiMT;
    public WinDef.HRGN SXjPG;
    public boolean frouI;
    private static final long tYlcO;
    private static final String[] qUETb;
    private static final String[] uyTHy;
    private static final Map MFlcM;
    private static final /* synthetic */ byte[] $mango$6dc686caab50ed59;

    /*
     * Unable to fully structure code
     */
    static {
        block11: {
            block10: {
                jm$tP.tYlcO = gb.aYR(-6724455151601404325L, -8063788099410307124L, MethodHandles.lookup().lookupClass()).a(155342238550707L);
                jm$tP.MFlcM = new HashMap<K, V>(13);
                var0 = jm$tP.tYlcO ^ 4342858730166L;
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
                var6_5 = "\u00fe\u0084\u00d7$|fl\u00df\u00e7-\t\u00d78W)@\u0010\u009a\u00e8\u0011r\u0003-\u0083-\u00b9m&\u00dac\u00c7\u00a3\u00cb";
                var8_6 = "\u00fe\u0084\u00d7$|fl\u00df\u00e7-\t\u00d78W)@\u0010\u009a\u00e8\u0011r\u0003-\u0083-\u00b9m&\u00dac\u00c7\u00a3\u00cb".length();
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
                    var9_3[var7_4++] = jm$tP.dpO(var10_9).intern();
                    if ((var4_8 += var5_7) < var8_6) {
                        var5_7 = var6_5.charAt(var4_8);
                        ** continue;
                    }
                    var6_5 = "\u0096\u00e1\u0098m\u00a0~\u0002\u00ac\u00d1y^\u00d4st\u000f \u001fy\n\u00b4\u00de\u00aa\u00a3-h{\u0015\u00da\u00cc\u00c49\u00e6\u00eb\u00abg\u00c1\u0000\u00cc9\u0012\u0018\u0015\u00ff\u00d3\u00c0o\u00a2~\u0097\u00fd\u00ae\b\u00cd\u00bc~\u00ddlSdO\u00f9\u0080\u0005\u00d4\u00b5";
                    var8_6 = "\u0096\u00e1\u0098m\u00a0~\u0002\u00ac\u00d1y^\u00d4st\u000f \u001fy\n\u00b4\u00de\u00aa\u00a3-h{\u0015\u00da\u00cc\u00c49\u00e6\u00eb\u00abg\u00c1\u0000\u00cc9\u0012\u0018\u0015\u00ff\u00d3\u00c0o\u00a2~\u0097\u00fd\u00ae\b\u00cd\u00bc~\u00ddlSdO\u00f9\u0080\u0005\u00d4\u00b5".length();
                    var5_7 = 40;
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
                    var9_3[var7_4++] = jm$tP.dpO(var10_9).intern();
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
        jm$tP.qUETb = var9_3;
        jm$tP.uyTHy = new String[4];
    }

    protected List<String> getFieldOrder() {
        long l2 = tYlcO ^ 0x1A01358E8FEBL;
        return List.of(jm$tP.dpR("m", (int)12847, (long)(0x5F2567299482FE99L ^ l2)), jm$tP.dpR("m", (int)1380, (long)(0x50AEBF466E7149D3L ^ l2)), jm$tP.dpR("m", (int)2736, (long)(0x10E792EC9F484604L ^ l2)), jm$tP.dpR("m", (int)20207, (long)(0x2E0043C45093825AL ^ l2)));
    }

    private static Object dpQ(MethodHandles.Lookup lookup, MutableCallSite mutableCallSite, String string, Object[] objectArray) {
        int n2 = (Integer)objectArray[0];
        long l2 = (Long)objectArray[1];
        String string2 = jm$tP.dpP(n2, l2);
        MethodHandle methodHandle = MethodHandles.constant(String.class, string2);
        mutableCallSite.setTarget(MethodHandles.dropArguments(methodHandle, 0, new Class[]{Integer.TYPE, Long.TYPE}));
        return string2;
    }

    private static CallSite dpR(MethodHandles.Lookup lookup, String string, MethodType methodType) {
        MutableCallSite mutableCallSite = new MutableCallSite(methodType);
        try {
            mutableCallSite.setTarget(MethodHandles.explicitCastArguments(MethodHandles.insertArguments(cfr_ldc_0().asCollector(Object[].class, methodType.parameterCount()), 0, lookup, mutableCallSite, string), methodType));
        }
        catch (Exception exception) {
            throw new RuntimeException("sixtwo/jm$tP" + " : " + string + " : " + methodType.toString(), exception);
        }
        return mutableCallSite;
    }

    private static String dpO(byte[] byArray) {
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

    private static String dpP(int n2, long l2) {
        int n3 = n2 ^ (int)(l2 & 0x7FFFL) ^ 0x746B;
        if (uyTHy[n3] == null) {
            Object[] objectArray;
            try {
                Long l3 = Thread.currentThread().threadId();
                objectArray = (Object[])MFlcM.get(l3);
                if (objectArray == null) {
                    objectArray = new Object[]{Cipher.getInstance("DES/CBC/PKCS5Padding"), SecretKeyFactory.getInstance("DES"), new IvParameterSpec(new byte[8])};
                    MFlcM.put(l3, objectArray);
                }
            }
            catch (Exception exception) {
                throw new RuntimeException("sixtwo/jm$tP", exception);
            }
            byte[] byArray = new byte[8];
            byArray[0] = (byte)(l2 >>> 56);
            for (int i2 = 1; i2 < 8; ++i2) {
                byArray[i2] = (byte)(l2 << i2 * 8 >>> 56);
            }
            DESKeySpec dESKeySpec = new DESKeySpec(byArray);
            SecretKey secretKey = ((SecretKeyFactory)objectArray[1]).generateSecret(dESKeySpec);
            ((Cipher)objectArray[0]).init(2, (Key)secretKey, (IvParameterSpec)objectArray[2]);
            byte[] byArray2 = qUETb[n3].getBytes("ISO-8859-1");
            jm$tP.uyTHy[n3] = jm$tP.dpO(((Cipher)objectArray[0]).doFinal(byArray2));
        }
        return uyTHy[n3];
    }

    /*
     * Works around MethodHandle LDC.
     */
    static MethodHandle cfr_ldc_0() {
        try {
            return MethodHandles.lookup().findStatic(jm$tP.class, "dpQ", MethodType.fromMethodDescriptorString("(Ljava/lang/invoke/MethodHandles$Lookup;Ljava/lang/invoke/MutableCallSite;Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;", null));
        }
        catch (NoSuchMethodException | IllegalAccessException except) {
            throw new IllegalArgumentException(except);
        }
    }
}

